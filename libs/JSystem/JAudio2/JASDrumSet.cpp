//
// Generated By: dol2asm
// Translation Unit: JASDrumSet
//

#include "JSystem/JAudio2/JASDrumSet.h"
#include "JSystem/JAudio2/JASCalc.h"
#include "JSystem/JKernel/JKRHeap.h"

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

/* ############################################################################################## */

/* 802982EC-80298314 292C2C 0028+00 0/0 2/2 0/0 .text            __ct__10JASDrumSetFv */
JASDrumSet::JASDrumSet() {
    field_0x4 = NULL;
    field_0x8 = 0;
}

/* 80298314-80298370 292C54 005C+00 1/0 0/0 0/0 .text            __dt__10JASDrumSetFv */
JASDrumSet::~JASDrumSet() {
}

/* 80298370-802983CC 292CB0 005C+00 0/0 2/2 0/0 .text newPercArray__10JASDrumSetFUcP7JKRHeap */
void JASDrumSet::newPercArray(u8 param_0, JKRHeap* param_1) {
    if (param_0) {
        field_0x8 = param_0;
        field_0x4 = new (param_1, 0) TPerc*[field_0x8];
        JASCalc::bzero(field_0x4, field_0x8 * sizeof(TPerc*));
    }
}

/* ############################################################################################## */
/* 80431B58-80431B70 05E878 0018+00 1/1 0/0 0/0 .bss             osc$213 */
static JASOscillator::Data osc;

/* 80451270-80451274 000770 0004+00 1/1 0/0 0/0 .sbss            oscp$214 */
static JASOscillator::Data* oscp;

/* 80451274-80451278 000774 0004+00 1/1 0/0 0/0 .sbss            None */
static s8 data_80451274[4];

/* 802983CC-802984B4 292D0C 00E8+00 1/0 0/0 0/0 .text getParam__10JASDrumSetCFiiP12JASInstParam */
bool JASDrumSet::getParam(int param_0, int param_1, JASInstParam* param_2) const {
    if (field_0x4 == NULL) {
        return false;
    }

    if (param_0 >= field_0x8) {
        return false;
    }

    TPerc* perc = field_0x4[param_0];
    if (perc == NULL) {
        return false;
    }

    param_2->field_0x1c = 0;
    param_2->field_0x1e = 1;
    param_2->mVolume = perc->mVolume;
    param_2->mPitch = perc->mPitch;
    param_2->mPan = perc->mPan;
    param_2->field_0x18 = perc->field_0xc;
    osc._00 = 0;
    osc._04 = 1.0f;
    osc.mTable = NULL;
    osc._0C = NULL;
    osc.mScale = 1.0f;
    osc._14 = 0.0f;

    if (data_80451274[0] == 0) {
        oscp = &osc;
        data_80451274[0] = 1;
    }

    param_2->field_0x14 = &oscp;
    param_2->field_0x1d = 1;
    param_2->mVolume *= perc->field_0x10;
    param_2->mPitch *= perc->field_0x14;
    param_2->field_0x1a = perc->field_0xe;
    return true;
}

/* 802984B4-802984C4 292DF4 0010+00 0/0 2/2 0/0 .text setPerc__10JASDrumSetFiPQ210JASDrumSet5TPerc
 */
void JASDrumSet::setPerc(int param_0, JASDrumSet::TPerc* param_1) {
    field_0x4[param_0] = param_1;
}

/* ############################################################################################## */

/* 802984C4-802984E4 292E04 0020+00 0/0 2/2 0/0 .text            __ct__Q210JASDrumSet5TPercFv */
JASDrumSet::TPerc::TPerc() {
    mVolume = 1.0f;
    mPitch = 1.0f;
    mPan = 0.5f;
    field_0xc = 1000;
}

/* 802984E4-802984EC -00001 0008+00 0/0 0/0 0/0 .text            setRelease__Q210JASDrumSet5TPercFUl
 */
void JASDrumSet::TPerc::setRelease(u32 param_0) {
    field_0xc = param_0;
}

/* 802984EC-802984F8 292E2C 000C+00 1/0 0/0 0/0 .text            getType__10JASDrumSetCFv */
u32 JASDrumSet::getType() const { return 'PERC'; }