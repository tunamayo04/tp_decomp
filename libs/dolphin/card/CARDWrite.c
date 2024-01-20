#include "dolphin/card/CARDWrite.h"
#include "dolphin/card.h"
#include "dolphin/card/CARDPriv.h"
#include "dolphin/dsp.h"
#include "dolphin/os/OSTime.h"

static void WriteCallback(s32 chan, s32 result);
static void EraseCallback(s32 chan, s32 result);

/* 80358914-80358A84 353254 0170+00 1/1 0/0 0/0 .text            WriteCallback */
static void WriteCallback(s32 chan, s32 result) {
    CARDControl* card;
    CARDCallback callback;
    u16* fat;
    CARDDir* dir;
    CARDDir* ent;
    CARDFileInfo* fileInfo;

    card = &__CARDBlock[chan];
    if (result < 0) {
        goto error;
    }

    fileInfo = card->fileInfo;
    if (fileInfo->length < 0) {
        result = CARD_RESULT_CANCELED;
        goto error;
    }

    fileInfo->length -= card->sectorSize;
    if (fileInfo->length <= 0) {
        dir = __CARDGetDirBlock(card);
        ent = &dir[fileInfo->fileNo];
        ent->time = (u32)OSTicksToSeconds(OSGetTime());
        callback = card->apiCallback;
        card->apiCallback = 0;
        result = __CARDUpdateDir(chan, callback);
    } else {
        fat = __CARDGetFatBlock(card);
        fileInfo->offset += card->sectorSize;
        fileInfo->iBlock = fat[fileInfo->iBlock];
        if (!CARDIsValidBlockNo(card, fileInfo->iBlock)) {
            result = CARD_RESULT_BROKEN;
            goto error;
        }
        result = __CARDEraseSector(chan, card->sectorSize * (u32)fileInfo->iBlock, EraseCallback);
    }

    if (result < 0) {
        goto error;
    }
    return;

error:
    callback = card->apiCallback;
    card->apiCallback = 0;
    __CARDPutControlBlock(card, result);
    callback(chan, result);
}

/* 80358A84-80358B34 3533C4 00B0+00 2/2 0/0 0/0 .text            EraseCallback */
static void EraseCallback(s32 chan, s32 result) {
    CARDControl* card;
    CARDCallback callback;
    CARDFileInfo* fileInfo;

    card = &__CARDBlock[chan];
    if (result < 0) {
        goto error;
    }

    fileInfo = card->fileInfo;
    result = __CARDWrite(chan, card->sectorSize * (u32)fileInfo->iBlock, card->sectorSize,
                         card->buffer, WriteCallback);
    if (result < 0) {
        goto error;
    }
    return;

error:
    callback = card->apiCallback;
    card->apiCallback = 0;
    __CARDPutControlBlock(card, result);
    callback(chan, result);
}

/* 80358B34-80358C48 353474 0114+00 1/1 0/0 0/0 .text            CARDWriteAsync */
s32 CARDWriteAsync(CARDFileInfo* fileInfo, const void* buf, s32 length, s32 offset,
                   CARDCallback callback) {
    CARDControl* card;
    s32 result;
    CARDDir* dir;
    CARDDir* ent;

    result = __CARDSeek(fileInfo, length, offset, &card);
    if (result < 0) {
        return result;
    }

    if (OFFSET(offset, card->sectorSize) != 0 || OFFSET(length, card->sectorSize) != 0) {
        return __CARDPutControlBlock(card, CARD_RESULT_FATAL_ERROR);
    }

    dir = __CARDGetDirBlock(card);
    ent = &dir[fileInfo->fileNo];
    result = __CARDIsWritable(card, ent);
    if (result < 0) {
        return __CARDPutControlBlock(card, result);
    }

    DCStoreRange((void*)buf, (u32)length);
    card->apiCallback = callback ? callback : __CARDDefaultApiCallback;
    card->buffer = (void*)buf;
    result =
        __CARDEraseSector(fileInfo->chan, card->sectorSize * (u32)fileInfo->iBlock, EraseCallback);
    if (result < 0) {
        __CARDPutControlBlock(card, result);
    }
    return result;
}

/* 80358C48-80358C90 353588 0048+00 0/0 2/2 0/0 .text            CARDWrite */
s32 CARDWrite(CARDFileInfo* fileInfo, const void* buf, s32 length, s32 offset) {
    s32 result = CARDWriteAsync(fileInfo, buf, length, offset, __CARDSyncCallback);
    if (result < 0) {
        return result;
    }

    return __CARDSync(fileInfo->chan);
}
