#include "dolphin/os/OSRtc.h"
#include "dolphin/os/OSInterrupt.h"

static void WriteSramCallback(s32 chan, OSContext* context);
static BOOL WriteSram(void* buffer, u32 offset, u32 size);
static BOOL UnlockSram(BOOL commit, u32 offset);

/* 8044BB20-8044BB78 078840 0054+04 14/14 0/0 0/0 .bss             Scb */
static SramControlBlock Scb ALIGN_DECL(32);

/* 8033FE90-8033FEF0 33A7D0 0060+00 2/2 0/0 0/0 .text            WriteSramCallback */
static void WriteSramCallback(s32 chan, OSContext* context) {
    Scb.sync = WriteSram(Scb.sram + Scb.offset, Scb.offset, RTC_SRAM_SIZE - Scb.offset);
    if (Scb.sync) {
        Scb.offset = RTC_SRAM_SIZE;
    }
}

static inline BOOL ReadSram(void* buffer) {
    BOOL err;
    u32 cmd;

    DCInvalidateRange(buffer, RTC_SRAM_SIZE);

    if (!EXILock(RTC_CHAN, RTC_DEV, 0)) {
        return FALSE;
    }
    if (!EXISelect(RTC_CHAN, RTC_DEV, RTC_FREQ)) {
        EXIUnlock(RTC_CHAN);
        return FALSE;
    }

    cmd = RTC_CMD_READ | RTC_SRAM_ADDR;
    err = FALSE;
    err |= !EXIImm(RTC_CHAN, &cmd, 4, 1, NULL);
    err |= !EXISync(RTC_CHAN);
    err |= !EXIDma(RTC_CHAN, buffer, RTC_SRAM_SIZE, 0, NULL);
    err |= !EXISync(RTC_CHAN);
    err |= !EXIDeselect(RTC_CHAN);
    EXIUnlock(RTC_CHAN);

    return !err;
}

/* 8033FEF0-80340008 33A830 0118+00 1/1 0/0 0/0 .text            WriteSram */
BOOL WriteSram(void* buffer, u32 offset, u32 size) {
    BOOL err;
    u32 cmd;

    if (!EXILock(RTC_CHAN, RTC_DEV, WriteSramCallback)) {
        return FALSE;
    }
    if (!EXISelect(RTC_CHAN, RTC_DEV, RTC_FREQ)) {
        EXIUnlock(RTC_CHAN);
        return FALSE;
    }

    offset <<= 6;
    cmd = RTC_CMD_WRITE | RTC_SRAM_ADDR + offset;
    err = FALSE;
    err |= !EXIImm(RTC_CHAN, &cmd, 4, 1, NULL);
    err |= !EXISync(RTC_CHAN);
    err |= !EXIImmEx(RTC_CHAN, buffer, (s32)size, 1);
    err |= !EXIDeselect(RTC_CHAN);
    EXIUnlock(RTC_CHAN);

    return !err;
}

/* 80340008-80340144 33A948 013C+00 0/0 1/1 0/0 .text            __OSInitSram */
void __OSInitSram(void) {
    Scb.locked = Scb.enabled = FALSE;
    Scb.sync = ReadSram(Scb.sram);
    Scb.offset = RTC_SRAM_SIZE;
    OSSetGbsMode(OSGetGbsMode());
}

static void* LockSram(u32 offset) {
    BOOL enabled;
    enabled = OSDisableInterrupts();

    if (Scb.locked != FALSE) {
        OSRestoreInterrupts(enabled);
        return NULL;
    }

    Scb.enabled = enabled;
    Scb.locked = TRUE;

    return Scb.sram + offset;
}

/* 80340144-803401A0 33AA84 005C+00 0/0 3/3 0/0 .text            __OSLockSram */
OSSram* __OSLockSram() {
    return LockSram(0);
}

/* 803401A0-803401FC 33AAE0 005C+00 0/0 4/4 0/0 .text            __OSLockSramEx */
OSSramEx* __OSLockSramEx() {
    return LockSram(sizeof(OSSram));
}

/* 803401FC-80340538 33AB3C 033C+00 10/10 0/0 0/0 .text            UnlockSram */
static BOOL UnlockSram(BOOL commit, u32 offset) {
    u16* p;

    if (commit) {
        if (offset == 0) {
            OSSram* sram = (OSSram*)Scb.sram;

            if (2u < (sram->flags & 3)) {
                sram->flags &= ~3;
            }

            sram->checkSum = sram->checkSumInv = 0;
            for (p = (u16*)&sram->counterBias; p < (u16*)(Scb.sram + sizeof(OSSram)); p++) {
                sram->checkSum += *p;
                sram->checkSumInv += ~*p;
            }
        }

        if (offset < Scb.offset) {
            Scb.offset = offset;
        }

        if (Scb.offset <= 0x14) {
            OSSramEx* sram = (OSSramEx*)(Scb.sram + sizeof(OSSram));
            if (((u32)sram->gbs & 0x7c00) == 0x5000 || ((u32)sram->gbs & 0xc0) == 0xc0) {
                sram->gbs = 0;
            }
        }

        Scb.sync = WriteSram(Scb.sram + Scb.offset, Scb.offset, RTC_SRAM_SIZE - Scb.offset);
        if (Scb.sync) {
            Scb.offset = RTC_SRAM_SIZE;
        }
    }
    Scb.locked = FALSE;
    OSRestoreInterrupts(Scb.enabled);
    return Scb.sync;
}

/* 80340538-8034055C 33AE78 0024+00 0/0 3/3 0/0 .text            __OSUnlockSram */
BOOL __OSUnlockSram(BOOL commit) {
    return UnlockSram(commit, 0);
}

/* 8034055C-80340580 33AE9C 0024+00 0/0 4/4 0/0 .text            __OSUnlockSramEx */
BOOL __OSUnlockSramEx(BOOL commit) {
    return UnlockSram(commit, sizeof(OSSram));
}

/* 80340580-80340590 33AEC0 0010+00 0/0 2/2 0/0 .text            __OSSyncSram */
BOOL __OSSyncSram(void) {
    return Scb.sync;
}

/* 80340590-80340610 33AED0 0080+00 0/0 4/4 0/0 .text            OSGetSoundMode */
u32 OSGetSoundMode() {
    OSSram* sram;
    u32 mode;

    sram = __OSLockSram();
    mode = (sram->flags & 0x4) ? OS_SOUND_MODE_STEREO : OS_SOUND_MODE_MONO;
    __OSUnlockSram(FALSE);
    return mode;
}

/* 80340610-803406B4 33AF50 00A4+00 0/0 1/1 0/0 .text            OSSetSoundMode */
void OSSetSoundMode(u32 mode) {
    OSSram* sram;
    mode <<= 2;
    mode &= 4;

    sram = __OSLockSram();
    if (mode == (sram->flags & 4)) {
        __OSUnlockSram(FALSE);
        return;
    }

    sram->flags &= ~4;
    sram->flags |= mode;
    __OSUnlockSram(TRUE);
}

/* 803406B4-80340724 33AFF4 0070+00 0/0 3/3 0/0 .text            OSGetProgressiveMode */
u32 OSGetProgressiveMode() {
    OSSram* sram;
    u32 mode;

    sram = __OSLockSram();
    mode = (sram->flags & 0x80) >> 7;
    __OSUnlockSram(FALSE);
    return mode;
}

/* 80340724-803407C8 33B064 00A4+00 0/0 2/2 0/0 .text            OSSetProgressiveMode */

void OSSetProgressiveMode(u32 mode) {
    OSSram* sram;
    mode <<= 7;
    mode &= 0x80;

    sram = __OSLockSram();
    if (mode == (sram->flags & 0x80)) {
        __OSUnlockSram(FALSE);
        return;
    }

    sram->flags &= ~0x80;
    sram->flags |= mode;
    __OSUnlockSram(TRUE);
}

/* 803407C8-8034084C 33B108 0084+00 0/0 1/1 0/0 .text            OSGetWirelessID */
u16 OSGetWirelessID(s32 channel) {
    OSSramEx* sram;
    u16 id;

    sram = __OSLockSramEx();
    id = sram->wirelessPadID[channel];
    __OSUnlockSramEx(FALSE);
    return id;
}

/* 8034084C-803408F8 33B18C 00AC+00 0/0 4/4 0/0 .text            OSSetWirelessID */
void OSSetWirelessID(s32 channel, u16 id) {
    OSSramEx* sram;

    sram = __OSLockSramEx();
    if (sram->wirelessPadID[channel] != id) {
        sram->wirelessPadID[channel] = id;
        __OSUnlockSramEx(TRUE);
        return;
    }

    __OSUnlockSramEx(FALSE);
}

/* 803408F8-80340968 33B238 0070+00 1/1 0/0 0/0 .text            OSGetGbsMode */
u16 OSGetGbsMode() {
    OSSramEx* sram;
    u16 gbs;

    sram = __OSLockSramEx();
    gbs = sram->gbs;
    __OSUnlockSramEx(FALSE);
    return gbs;
}

/* 80340968-80340A20 33B2A8 00B8+00 1/1 0/0 0/0 .text            OSSetGbsMode */
void OSSetGbsMode(u16 mode) {
    OSSramEx* sram;

    if (((u32)mode & 0x7c00) == 0x5000 || ((u32)mode & 0xc0) == 0xc0) {
        mode = 0;
    }

    sram = __OSLockSramEx();

    if (mode == sram->gbs) {
        __OSUnlockSramEx(FALSE);
        return;
    }
    sram->gbs = mode;

    __OSUnlockSramEx(TRUE);
}
