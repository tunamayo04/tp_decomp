#include "dolphin/exi/EXIUart.h"
#include "dolphin/exi/EXIBios.h"
#include "dolphin/os.h"

#define EXI_TX 0x800400u
#define EXI_MAGIC 0xa5ff005a

/* 803445E8-80344774 33EF28 018C+00 1/1 0/0 0/0 .text            ProbeBarnacle */
static BOOL ProbeBarnacle(s32 chan, u32 dev, u32* revision) {
    BOOL err;
    u32 cmd;

    if (chan != 2 && dev == 0 && !EXIAttach(chan, NULL)) {
        return FALSE;
    }

    err = !EXILock(chan, dev, NULL);
    if (!err) {
        err = !EXISelect(chan, dev, EXI_FREQ_1M);
        if (!err) {
            cmd = 0x20011300;
            err = FALSE;
            err |= !EXIImm(chan, &cmd, 4, EXI_WRITE, NULL);
            err |= !EXISync(chan);
            err |= !EXIImm(chan, revision, 4, EXI_READ, NULL);
            err |= !EXISync(chan);
            err |= !EXIDeselect(chan);
        }
        EXIUnlock(chan);
    }

    if (chan != 2 && dev == 0) {
        EXIDetach(chan);
    }

    if (err) {
        return FALSE;
    }

    return (*revision != 0xFFFFFFFF) ? TRUE : FALSE;
}

/* 804516E0-804516E4 000BE0 0004+00 3/3 0/0 0/0 .sbss            Chan */
static s32 Chan;

/* 804516E4-804516E8 000BE4 0004+00 3/3 0/0 0/0 .sbss            Dev */
static u32 Dev;

/* 804516E8-804516EC 000BE8 0004+00 3/3 0/0 0/0 .sbss            Enabled */
static u32 Enabled;

/* 804516EC-804516F0 000BEC 0004+00 2/2 0/0 0/0 .sbss            BarnacleEnabled */
static u32 BarnacleEnabled;

/* 80344774-80344930 33F0B4 01BC+00 0/0 1/1 0/0 .text            __OSEnableBarnacle */
void __OSEnableBarnacle(s32 chan, u32 dev) {
    u32 id;

    if (EXIGetID(chan, dev, &id)) {
        switch (id) {
        case 0xffffffff:
        case EXI_MEMORY_CARD_59:
        case EXI_MEMORY_CARD_123:
        case EXI_MEMORY_CARD_251:
        case EXI_MEMORY_CARD_507:
        case EXI_USB_ADAPTER:
        case EXI_NPDP_GDEV:
        case EXI_MODEM:
        case EXI_MARLIN:
        case 0x04220000:
        case 0x04020100:
        case 0x04020200:
        case 0x04020300:
        case 0x04040404:
        case 0x04060000:
        case 0x04120000:
        case 0x04130000:
        case 0x80000000 | EXI_MEMORY_CARD_59:
        case 0x80000000 | EXI_MEMORY_CARD_123:
        case 0x80000000 | EXI_MEMORY_CARD_251:
        case 0x80000000 | EXI_MEMORY_CARD_507:
            break;
        default:
            if (ProbeBarnacle(chan, dev, &id)) {
                Chan = chan;
                Dev = dev;
                Enabled = BarnacleEnabled = EXI_MAGIC;
            }
            break;
        }
    }
}

/* 80344930-803449A0 33F270 0070+00 0/0 1/1 0/0 .text            InitializeUART */
u32 InitializeUART(u32 baudRate) {
    if (BarnacleEnabled == EXI_MAGIC) {
        return 0;
    }

    if (!(OSGetConsoleType() & OS_CONSOLE_DEVELOPMENT)) {
        Enabled = 0;
        return 2;
    } else {
        Chan = 0;
        Dev = 1;
        Enabled = EXI_MAGIC;
        return 0;
    }
}

u32 ReadUARTN(void* bytes, unsigned long length) {
    return 4;
}

static int QueueLength(void) {
    u32 cmd;

    if (!EXISelect(Chan, Dev, EXI_FREQ_8M))
        return -1;

    cmd = EXI_TX << 6;
    EXIImm(Chan, &cmd, 4, EXI_WRITE, NULL);
    EXISync(Chan);

    EXIImm(Chan, &cmd, 1, EXI_READ, NULL);
    EXISync(Chan);
    EXIDeselect(Chan);

    return 16 - (int)((cmd >> 24) & 0xff);
}

/* 803449A0-80344BA0 33F2E0 0200+00 0/0 1/1 0/0 .text            WriteUARTN */
u32 WriteUARTN(const void* buf, unsigned long len) {
    u32 cmd;
    int qLen;
    long xLen;
    char* ptr;
    BOOL locked;
    u32 error;

    if (Enabled != EXI_MAGIC)
        return 2;

    locked = EXILock(Chan, Dev, 0);
    if (!locked) {
        return 0;
    }

    for (ptr = (char*)buf; ptr - buf < len; ptr++) {
        if (*ptr == '\n')
            *ptr = '\r';
    }

    error = 0;
    cmd = (EXI_TX | 0x2000000) << 6;
    while (len) {
        qLen = QueueLength();
        if (qLen < 0) {
            error = 3;
            break;
        }

        if (qLen < 12 && qLen < len)
            continue;

        if (!EXISelect(Chan, Dev, EXI_FREQ_8M)) {
            error = 3;
            break;
        }

        EXIImm(Chan, &cmd, 4, EXI_WRITE, NULL);
        EXISync(Chan);

        while (qLen && len) {
            if (qLen < 4 && qLen < len)
                break;
            xLen = (len < 4) ? (long)len : 4;
            EXIImm(Chan, (void*)buf, xLen, EXI_WRITE, NULL);
            (u8*)buf += xLen;
            len -= xLen;
            qLen -= xLen;
            EXISync(Chan);
        }
        EXIDeselect(Chan);
    }

    EXIUnlock(Chan);
    return error;
}