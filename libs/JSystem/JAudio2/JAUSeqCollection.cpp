//
// Generated By: dol2asm
// Translation Unit: JAUSeqCollection
//

#include "JSystem/JAudio2/JAUSeqCollection.h"
#include "JSystem/JUtility/JUTAssert.h"

//
// Types:
//

//
// Forward References:
//

//
// External References:
//

//
// Declarations:
//

/* 802A66A0-802A66AC 2A0FE0 000C+00 1/1 0/0 0/0 .text            __ct__16JAUSeqCollectionFv */
JAUSeqCollection::JAUSeqCollection() {
    field_0x8 = NULL;
}

/* 802A66AC-802A66FC 2A0FEC 0050+00 0/0 1/1 0/0 .text            init__16JAUSeqCollectionFPCv */
void JAUSeqCollection::init(void const* param_0) {
    field_0x8 = (const JAUSeqCollectionData*)param_0;
    if (field_0x8->field_0x0 != 0x53 || field_0x8->field_0x1 != 0x43) {
        field_0x8 = NULL;
        return;
    }

    field_0x0 = field_0x8->field_0x2;
    field_0xc = field_0x8->field_0x4;
    field_0x4 = &field_0x8->field_0x8;

}

/* 802A66FC-802A6754 2A103C 0058+00 1/1 0/0 0/0 .text
 * getSeqData__16JAUSeqCollectionFiiP10JAISeqData               */
bool JAUSeqCollection::getSeqData(int param_0, int param_1, JAISeqData* param_2) {
    if (param_0 >= field_0x0) {
        return false;
    }
    u32* puVar2 = (u32*)((u8*)field_0x8 + field_0x4[param_0]);
    if (param_1 >= puVar2[0]) {
        return false;
    }
    param_2->set((void*)field_0x8, puVar2[param_1 + 1]);
    return true;
}

/* 802A6754-802A677C 2A1094 0028+00 1/1 0/0 0/0 .text
 * getSeqDataRegion__16JAUSeqCollectionFP16JAISeqDataRegion     */
bool JAUSeqCollection::getSeqDataRegion(JAISeqDataRegion* param_0) {
    if (isValid()) {
        param_0->addr = (u8*)field_0x8;
        param_0->size = field_0xc;
        return true;
    }
    return false;
}

/* 802A677C-802A67D0 2A10BC 0054+00 0/0 1/1 0/0 .text __ct__27JAUSeqDataMgr_SeqCollectionFv */
JAUSeqDataMgr_SeqCollection::JAUSeqDataMgr_SeqCollection() {
    user_ = NULL;
}

/* 802A67D0-802A67DC 2A1110 000C+00 1/0 0/0 0/0 .text
 * setSeqDataUser__27JAUSeqDataMgr_SeqCollectionFP14JAISeqDataUser */
bool JAUSeqDataMgr_SeqCollection::setSeqDataUser(JAISeqDataUser* param_0) {
    JUT_ASSERT(60, user_ == 0);
    user_ = param_0;
    return true;
}

/* 802A67DC-802A683C 2A111C 0060+00 1/0 0/0 0/0 .text
 * releaseSeqData__27JAUSeqDataMgr_SeqCollectionFv              */
int JAUSeqDataMgr_SeqCollection::releaseSeqData() {
    if (user_) {
        JAISeqDataRegion region;
        getSeqDataRegion(&region);
        return user_->releaseSeqData(region);
    }
    return 2;
}

/* 802A683C-802A6894 2A117C 0058+00 1/0 0/0 0/0 .text
 * getSeqData__27JAUSeqDataMgr_SeqCollectionF10JAISoundIDP10JAISeqData */
JAUSeqDataMgr_SeqCollection::SeqDataReturnValue JAUSeqDataMgr_SeqCollection::getSeqData(JAISoundID param_0, JAISeqData* param_1) {
    if (!isValid()) {
        return SeqDataReturnValue_0;
    }
    if (JAUSeqCollection::getSeqData(param_0.mId.mBytes.b1, param_0.mId.mAdvancedId.mShortId, param_1)) {
        return SeqDataReturnValue_2;
    }
    return SeqDataReturnValue_0;
}

/* 802A6894-802A68F4 2A11D4 0060+00 1/0 0/0 0/0 .text __dt__27JAUSeqDataMgr_SeqCollectionFv */
JAUSeqDataMgr_SeqCollection::~JAUSeqDataMgr_SeqCollection() {}