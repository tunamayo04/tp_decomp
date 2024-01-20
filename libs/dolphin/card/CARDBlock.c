
#include "dolphin/card/CARDBlock.h"
#include "dolphin/card.h"
#include "dolphin/card/CARDPriv.h"

static void WriteCallback(s32 chan, s32 result);
static void EraseCallback(s32 chan, s32 result);

/* 80355414-8035541C 34FD54 0008+00 0/0 5/5 0/0 .text            __CARDGetFatBlock */
u16* __CARDGetFatBlock(CARDControl* card) {
    return card->currentFat;
}

/* 8035541C-803554F0 34FD5C 00D4+00 1/1 0/0 0/0 .text            WriteCallback */
static void WriteCallback(s32 chan, s32 result) {
    CARDControl* card;
    CARDCallback callback;
    u16* fat;
    u16* fatBack;

    card = &__CARDBlock[chan];

    if (result >= 0) {
        fat = (u16*)((u8*)card->workArea + 0x6000);
        fatBack = (u16*)((u8*)card->workArea + 0x8000);

        if (card->currentFat == fat) {
            card->currentFat = fatBack;
            memcpy(fatBack, fat, 0x2000);
        } else {
            card->currentFat = fat;
            memcpy(fat, fatBack, 0x2000);
        }
    }

    if (card->apiCallback == NULL) {
        __CARDPutControlBlock(card, result);
    }

    callback = card->eraseCallback;
    if (callback) {
        card->eraseCallback = NULL;
        callback(chan, result);
    }
}

/* 803554F0-803555B8 34FE30 00C8+00 1/1 0/0 0/0 .text            EraseCallback */
static void EraseCallback(s32 chan, s32 result) {
    CARDControl* card;
    CARDCallback callback;
    u32 temp[2]; /* this compiler sucks */
    u16* fat;
    u32 addr;

    card = &__CARDBlock[chan];
    if (result < 0) {
        goto error;
    }

    fat = __CARDGetFatBlock(card);
    addr = ((u32)fat - (u32)card->workArea) / CARD_SYSTEM_BLOCK_SIZE * card->sectorSize;
    result = __CARDWrite(chan, addr, CARD_SYSTEM_BLOCK_SIZE, fat, WriteCallback);
    if (result < 0) {
        goto error;
    }

    return;

error:
    if (card->apiCallback == NULL) {
        __CARDPutControlBlock(card, result);
    }
    callback = card->eraseCallback;
    if (callback) {
        card->eraseCallback = NULL;
        callback(chan, result);
    }
}

/* 803555B8-803556D0 34FEF8 0118+00 0/0 1/1 0/0 .text            __CARDAllocBlock */
s32 __CARDAllocBlock(s32 chan, u32 cBlock, CARDCallback callback) {
    CARDControl* card;
    u16* fat;
    u16 iBlock;
    u16 startBlock;
    u16 prevBlock;
    u16 count;

    card = &__CARDBlock[chan];
    if (!card->attached) {
        return CARD_RESULT_NOCARD;
    }

    fat = __CARDGetFatBlock(card);
    if (fat[3] < cBlock) {
        return CARD_RESULT_INSSPACE;
    }

    fat[3] -= cBlock;
    startBlock = 0xFFFF;
    iBlock = fat[4];
    count = 0;
    while (0 < cBlock) {
        if (card->cBlock - 5 < ++count) {
            return CARD_RESULT_BROKEN;
        }

        iBlock++;
        if (!CARDIsValidBlockNo(card, iBlock)) {
            iBlock = 5;
        }

        if (fat[iBlock] == 0x0000u) {
            if (startBlock == 0xFFFF) {
                startBlock = iBlock;
            } else {
                fat[prevBlock] = iBlock;
            }
            prevBlock = iBlock;
            fat[iBlock] = 0xFFFF;
            --cBlock;
        }
    }
    fat[4] = iBlock;
    card->startBlock = startBlock;

    return __CARDUpdateFatBlock(chan, fat, callback);
}

/* 803556D0-8035577C 350010 00AC+00 1/1 1/1 0/0 .text            __CARDUpdateFatBlock */
s32 __CARDUpdateFatBlock(s32 chan, u16* fat, CARDCallback callback) {
    CARDControl* card;

    card = &__CARDBlock[chan];
    ++fat[2];
    __CARDCheckSum(fat + 2, 0x1FFC, fat, fat + 1);
    DCStoreRange(fat, 0x2000);
    card->eraseCallback = callback;

    return __CARDEraseSector(chan, (((u32)fat - (u32)card->workArea) / 8192u) * card->sectorSize,
                             EraseCallback);
}
