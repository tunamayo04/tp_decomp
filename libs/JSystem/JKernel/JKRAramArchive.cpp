//
// Generated By: dol2asm
// Translation Unit: JKRAramArchive
//

#include "JSystem/JKernel/JKRAramArchive.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDecomp.h"
#include "JSystem/JKernel/JKRDvdAramRipper.h"
#include "JSystem/JKernel/JKRDvdFile.h"
#include "JSystem/JUtility/JUTAssert.h"
#include "JSystem/JUtility/JUTException.h"
#include "dol2asm.h"
#include "dolphin/os/OSCache.h"
#include "global.h"
#include "math.h"
#include "string.h"

//
// Forward References:
//

extern "C" void __ct__14JKRAramArchiveFlQ210JKRArchive15EMountDirection();
extern "C" void __dt__14JKRAramArchiveFv();
extern "C" void open__14JKRAramArchiveFl();
extern "C" void fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl();
extern "C" void fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl();
extern "C" void getAramAddress_Entry__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntry();
extern "C" void getAramAddress__14JKRAramArchiveFPCc();
extern "C" void fetchResource_subroutine__14JKRAramArchiveFUlUlPUcUli();
extern "C" void fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc();
extern "C" void getExpandedResSize__14JKRAramArchiveCFPCv();
extern "C" void __dt__7JKRFileFv();
extern "C" extern char const* const JKRAramArchive__stringBase0;

//
// External References:
//

extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPvP7JKRHeap();
extern "C" void free__7JKRHeapFPv();
extern "C" void copyMemory__7JKRHeapFPvPvUl();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __dt__11JKRDisposerFv();
extern "C" void aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode();
extern "C" void unmount__13JKRFileLoaderFv();
extern "C" void becomeCurrent__10JKRArchiveFPCc();
extern "C" void getResource__10JKRArchiveFPCc();
extern "C" void getResource__10JKRArchiveFUlPCc();
extern "C" void readResource__10JKRArchiveFPvUlUlPCc();
extern "C" void readResource__10JKRArchiveFPvUlPCc();
extern "C" void removeResourceAll__10JKRArchiveFv();
extern "C" void removeResource__10JKRArchiveFPv();
extern "C" void detachResource__10JKRArchiveFPv();
extern "C" void getResSize__10JKRArchiveCFPCv();
extern "C" void countFile__10JKRArchiveCFPCc();
extern "C" void getFirstFile__10JKRArchiveCFPCc();
extern "C" void __ct__10JKRArchiveFlQ210JKRArchive10EMountMode();
extern "C" void __dt__10JKRArchiveFv();
extern "C" void findFsResource__10JKRArchiveCFPCcUl();
extern "C" void findPtrResource__10JKRArchiveCFPCv();
extern "C" void setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl();
extern "C" void getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry();
extern "C" void __ct__10JKRDvdFileFl();
extern "C" void
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl();
extern "C" void loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl();
extern "C" void prepend__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void panic_f__12JUTExceptionFPCciPCce();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 sVolumeList__13JKRFileLoader[12];
extern "C" u8 sSystemHeap__7JKRHeap[4];
extern "C" u8 sAramObject__7JKRAram[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC328-803CC348 029448 0020+00 1/1 4/4 0/0 .data            __vt__7JKRFile */
SECTION_DATA extern void* __vt__7JKRFile[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__7JKRFileFv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 802D70C0-802D7168 2D1A00 00A8+00 0/0 1/1 0/0 .text
 * __ct__14JKRAramArchiveFlQ210JKRArchive15EMountDirection      */
JKRAramArchive::JKRAramArchive(s32 entryNumber, JKRArchive::EMountDirection mountDirection)
    : JKRArchive(entryNumber, MOUNT_ARAM) {
    mMountDirection = mountDirection;

    if (!this->open(entryNumber)) {
        return;
    }

    mVolumeType = 'RARC';
    mVolumeName = mStringTable + mNodes->name_offset;
    JKRFileLoader::sVolumeList.prepend(&mFileLoaderLink);
    mIsMounted = true;
}

/* 802D7168-802D72A8 2D1AA8 0140+00 1/0 0/0 0/0 .text            __dt__14JKRAramArchiveFv */
JKRAramArchive::~JKRAramArchive() {
    if (mIsMounted == true) {
        if (mArcInfoBlock != NULL) {
            SDIFileEntry* entry = mFiles;
            for (int i = 0; i < mArcInfoBlock->num_file_entries; entry++, i++) {
                if (entry->data != NULL) {
                    JKRFreeToHeap(mHeap, entry->data);
                }
            }

            JKRFreeToHeap(mHeap, mArcInfoBlock);
            mArcInfoBlock = NULL;
        }

        if (mExpandedSize != NULL) {
            JKRFree(mExpandedSize);
            mExpandedSize = NULL;
        }

        if (mDvdFile != NULL) {
            delete mDvdFile;
        }

        if (mBlock != NULL) {
            delete mBlock;
        }

        JKRFileLoader::sVolumeList.remove(&mFileLoaderLink);
        mIsMounted = false;
    }
}

inline u32 alignNext(u32 var, u32 align) {
    return (var + align - 1) & ~(align - 1);
}

/* 802D72A8-802D75E0 2D1BE8 0338+00 1/1 0/0 0/0 .text            open__14JKRAramArchiveFl */
bool JKRAramArchive::open(s32 entryNum) {
    mArcInfoBlock = NULL;
    mNodes = NULL;
    mFiles = NULL;
    mStringTable = NULL;
    mBlock = NULL;

    mDvdFile = new (JKRGetSystemHeap(), mMountDirection == MOUNT_DIRECTION_HEAD ? 4 : -4)
        JKRDvdFile(entryNum);
    if (mDvdFile == NULL) {
        mMountMode = 0;
        return 0;
    }

    // NOTE: a different struct is used here for sure, unfortunately i can't get any hits on this
    // address, so gonna leave it like this for now
    SArcHeader* mem = (SArcHeader*)JKRAllocFromSysHeap(32, -32);
    if (mem == NULL) {
        mMountMode = 0;
    } else {
        JKRDvdToMainRam(entryNum, (u8*)mem, EXPAND_SWITCH_UNKNOWN1, 32, NULL,
                        JKRDvdRipper::ALLOC_DIRECTION_FORWARD, 0, &mCompression, NULL);
        DCInvalidateRange(mem, 32);
        int alignment = mMountDirection == MOUNT_DIRECTION_HEAD ? 32 : -32;
        u32 alignedSize = ALIGN_NEXT(mem->file_data_offset, 32);
        mArcInfoBlock = (SArcDataInfo*)JKRAllocFromHeap(mHeap, alignedSize, alignment);
        if (mArcInfoBlock == NULL) {
            mMountMode = 0;
        } else {
            JKRDvdToMainRam(entryNum, (u8*)mArcInfoBlock, EXPAND_SWITCH_UNKNOWN1, alignedSize, NULL,
                            JKRDvdRipper::ALLOC_DIRECTION_FORWARD, 32, NULL, NULL);
            DCInvalidateRange(mArcInfoBlock, alignedSize);

            mNodes = (SDIDirEntry*)((u8*)mArcInfoBlock + mArcInfoBlock->node_offset);
            mFiles = (SDIFileEntry*)((u8*)mArcInfoBlock + mArcInfoBlock->file_entry_offset);
            mStringTable = (char*)((u8*)mArcInfoBlock + mArcInfoBlock->string_table_offset);
            mExpandedSize = NULL;

            u8 compressedFiles = 0;  // maybe a check for if the last file is compressed?

            SDIFileEntry* fileEntry = mFiles;
            for (int i = 0; i < mArcInfoBlock->num_file_entries; i++) {
                u8 flag = fileEntry->type_flags_and_name_offset >> 24;
                if ((flag & 1)) {
                    compressedFiles |= (flag & JKRARCHIVE_ATTR_COMPRESSION);
                }
                fileEntry++;
            }

            if (compressedFiles != 0) {
                mExpandedSize = (s32*)JKRAllocFromHeap(mHeap, mArcInfoBlock->num_file_entries << 2,
                                                       abs(alignment));
                if (mExpandedSize == NULL) {
                    JKRFree(mArcInfoBlock);
                    mMountMode = 0;
                    goto cleanup;
                }
                memset(mExpandedSize, 0, mArcInfoBlock->num_file_entries << 2);
            }

            u32 aramSize = ALIGN_NEXT(mem->file_data_length, 32);
            mBlock = (JKRAramBlock*)JKRAllocFromAram(
                aramSize,
                mMountDirection == MOUNT_DIRECTION_HEAD ? JKRAramHeap::HEAD : JKRAramHeap::TAIL);
            if (mBlock == NULL) {
                if (mArcInfoBlock) {
                    JKRFree(mArcInfoBlock);
                }
                if (mExpandedSize) {
                    JKRFree(mExpandedSize);
                }
                mMountMode = 0;
            } else {
                JKRDvdToAram(entryNum, mBlock->getAddress(), EXPAND_SWITCH_UNKNOWN1,
                             mem->header_length + mem->file_data_offset, 0, NULL);
            }
        }
    }
cleanup:
    if (mem != NULL) {
        JKRFreeToSysHeap(mem);
    }
    if (mMountMode == 0) {
#ifdef DEBUG
        OSReport(":::[%s: %d] Cannot alloc memory\n", __FILE__, 415);
#endif
        if (mDvdFile != NULL) {
            delete mDvdFile;
        }
        return false;
    }
    return true;
}

/* 802D75E0-802D76F4 2D1F20 0114+00 1/0 0/0 0/0 .text
 * fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl */
void* JKRAramArchive::fetchResource(SDIFileEntry* pEntry, u32* pOutSize) {
    JUT_ASSERT(442, isMounted());
    u32 outSize;
    u8* outBuf;
    if (pOutSize == NULL) {
        pOutSize = &outSize;
    }

    JKRCompression compression = JKRConvertAttrToCompressionType(pEntry->getFlags());
    if (pEntry->data == NULL) {
        u32 size = JKRAramArchive::fetchResource_subroutine(
            pEntry->data_offset + mBlock->getAddress(), pEntry->data_size, mHeap, compression,
            &outBuf);

        *pOutSize = size;
        if (size == NULL) {
            return NULL;
        }

        pEntry->data = outBuf;
        if (compression == COMPRESSION_YAZ0) {
            this->setExpandSize(pEntry, *pOutSize);
        }
    } else {
        if (compression == COMPRESSION_YAZ0) {
            *pOutSize = this->getExpandSize(pEntry);
        } else {
            *pOutSize = pEntry->data_size;
        }
    }

    return pEntry->data;
}

/* 802D76F4-802D77F8 2D2034 0104+00 1/0 0/0 0/0 .text
 * fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl */
void* JKRAramArchive::fetchResource(void* buffer, u32 bufferSize, SDIFileEntry* pEntry,
                                    u32* resourceSize) {
    JUT_ASSERT(515, isMounted());
    u32 size = pEntry->data_size;
    if (size > bufferSize) {
        size = bufferSize;
    }

    JKRCompression compression = JKRConvertAttrToCompressionType(pEntry->getFlags());
    if (pEntry->data == NULL) {
        bufferSize = (s32)ALIGN_PREV(bufferSize, 0x20);
        size = JKRAramArchive::fetchResource_subroutine(pEntry->data_offset + mBlock->getAddress(),
                                                        size, (u8*)buffer, bufferSize, compression);
    } else {
        if (compression == COMPRESSION_YAZ0) {
            u32 expandSize = this->getExpandSize(pEntry);
            if (expandSize != NULL) {
                size = expandSize;
            }
        }
        if (size > bufferSize) {
            size = bufferSize;
        }
        JKRHeap::copyMemory(buffer, pEntry->data, size);
    }

    if (resourceSize != NULL) {
        *resourceSize = size;
    }
    return buffer;
}

/* 802D77F8-802D781C 2D2138 0024+00 1/1 0/0 0/0 .text
 * getAramAddress_Entry__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntry */
u32 JKRAramArchive::getAramAddress_Entry(SDIFileEntry* pEntry) {
    JUT_ASSERT(572, isMounted());
    if (pEntry == NULL) {
        return 0;
    } else {
        return pEntry->data_offset + mBlock->getAddress();
    }
}

/* 802D781C-802D7858 2D215C 003C+00 0/0 1/1 0/0 .text getAramAddress__14JKRAramArchiveFPCc */
u32 JKRAramArchive::getAramAddress(char const* name) {
    return JKRAramArchive::getAramAddress_Entry(this->findFsResource(name, 0));
}

/* 802D7858-802D7914 2D2198 00BC+00 1/1 1/1 0/0 .text
 * fetchResource_subroutine__14JKRAramArchiveFUlUlPUcUli        */
u32 JKRAramArchive::fetchResource_subroutine(u32 srcAram, u32 srcLength, u8* dst, u32 dstLength,
                                             int compression) {
    JUT_ASSERT(628, (srcAram & 0x1f) == 0);
    u32 outLen;
    u32 srcSize = ALIGN_NEXT(srcLength, 0x20);
    u32 dstSize = ALIGN_PREV(dstLength, 0x20);

    switch (compression) {
    case COMPRESSION_NONE:
        if (srcSize > dstSize) {
            srcSize = dstSize;
        }
        JKRAramToMainRam(srcAram, dst, srcSize, EXPAND_SWITCH_UNKNOWN0, dstSize, NULL, -1, &outLen);
        return outLen;
    case COMPRESSION_YAY0:
    case COMPRESSION_YAZ0:
        JKRAramToMainRam(srcAram, dst, srcSize, EXPAND_SWITCH_UNKNOWN1, dstSize, NULL, -1, &outLen);
        return outLen;
    default:
        JUTException::panic(__FILE__, 655, "??? bad sequence\n");
        return 0;
    }
}

/* 802D7914-802D7A64 2D2254 0150+00 1/1 1/1 0/0 .text
 * fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc */
u32 JKRAramArchive::fetchResource_subroutine(u32 entryNum, u32 length, JKRHeap* pHeap,
                                             int compression, u8** out) {
    u32 alignedLen = ALIGN_NEXT(length, 0x20);

    u8* buffer;
    switch (compression) {
    case COMPRESSION_NONE:
        {
            buffer = (u8*)(JKRAllocFromHeap(pHeap, alignedLen, 0x20));
            JUT_ASSERT(677, buffer != 0);
            JKRAramToMainRam(entryNum, buffer, alignedLen, EXPAND_SWITCH_UNKNOWN0, alignedLen, NULL, -1, NULL);
            *out = buffer;
            return length;
        }
    case COMPRESSION_YAY0:
    case COMPRESSION_YAZ0:
        {
            u8 headerBuf[0x40];
            u8* alignHeader = (u8*)ALIGN_NEXT((s32)&headerBuf[0], sizeof(SArcHeader));
            JKRAramToMainRam(entryNum, alignHeader, sizeof(SArcHeader), EXPAND_SWITCH_UNKNOWN0, 0, NULL, -1, NULL);
            u32 decompressedLen = ALIGN_NEXT(JKRDecompExpandSize(alignHeader), sizeof(SArcHeader));
            buffer = (u8*)(JKRAllocFromHeap(pHeap, decompressedLen, sizeof(SArcHeader)));
            JUT_ASSERT(703, buffer);
            u32 readLen;
            JKRAramToMainRam(entryNum, buffer, alignedLen, EXPAND_SWITCH_UNKNOWN1, decompressedLen, pHeap, -1, &readLen);
            *out = buffer;
            return readLen;
        }
    default:
        JUTException::panic(__FILE__, 713, "??? bad sequence\n");
        return 0;
    }
}

/* 802D7A64-802D7B90 2D23A4 012C+00 1/0 0/0 0/0 .text getExpandedResSize__14JKRAramArchiveCFPCv */
u32 JKRAramArchive::getExpandedResSize(const void* ptr) const {
    if (mExpandedSize == NULL) {
        return this->getResSize(ptr);
    }

    JKRArchive::SDIFileEntry* entry = this->findPtrResource(ptr);
    if (entry == NULL) {
        return 0xFFFFFFFF;
    }

    if (entry->getCompressFlag() == 0) {
        return this->getResSize(ptr);
    }

    u32 expandSize = this->getExpandSize(entry);
    if (expandSize != 0) {
        return expandSize;
    }

    u8 tmpBuf[0x40];
    u8* buf = (u8*)ALIGN_PREV((s32)&tmpBuf[0x1F], 0x20);
    JKRAramToMainRam(entry->data_offset + mBlock->getAddress(), buf, 0x20, EXPAND_SWITCH_UNKNOWN0,
                     0, NULL, -1, NULL);
    expandSize = JKRDecompExpandSize(buf);
    // ??? casting away const?
    ((JKRArchive*)this)->setExpandSize(entry, expandSize);
    return expandSize;
}

/* 802D7B90-802D7BF0 2D24D0 0060+00 1/0 0/0 0/0 .text            __dt__7JKRFileFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm JKRFile::~JKRFile() {
extern "C" asm void __dt__7JKRFileFv() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/__dt__7JKRFileFv.s"
}
#pragma pop
