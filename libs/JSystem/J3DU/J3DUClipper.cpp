//
// Generated By: dol2asm
// Translation Unit: J3DUClipper
//

#include "JSystem/J3DU/J3DUClipper.h"
#include "dol2asm.h"
#include "dolphin/mtx/mtxvec.h"
#include "dolphin/types.h"
#include "MSL_C/math.h"

//
// Forward References:
//

extern "C" void init__11J3DUClipperFv();
extern "C" void calcViewFrustum__11J3DUClipperFv();
extern "C" void clip__11J3DUClipperCFPA4_Cf3Vecf();
extern "C" void clip__11J3DUClipperCFPA4_CfP3VecP3Vec();
extern "C" extern char const* const J3DUClipper__stringBase0;

//
// External References:
//

extern "C" void _savegpr_29();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* 80273778-8027378C 26E0B8 0014+00 0/0 1/1 0/0 .text            init__11J3DUClipperFv */
void J3DUClipper::init() {
    mNear = 1.0f;
    mFar = 100000.0f;
}

/* ############################################################################################## */
/* 8039A948-8039A954 026FA8 000C+00 1/1 0/0 0/0 .rodata          @898 */
SECTION_RODATA static u8 const lit_898[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8039A948, &lit_898);

/* 8027378C-802738FC 26E0CC 0170+00 0/0 3/3 4/4 .text            calcViewFrustum__11J3DUClipperFv */
void J3DUClipper::calcViewFrustum() {
    f32 f0 = tan(0.5f * mFovY * 0.01745329238474369f);
    f32 f4 = mNear * f0;
    f32 f5 = mAspect * f4;
    Vec tmp1 = {-f5, -f4, -mNear};
    Vec tmp2 = {-f5, f4, -mNear};
    Vec tmp3 = {f5, f4, -mNear};
    Vec tmp4 = {f5, -f4, -mNear};
    PSVECCrossProduct(&tmp2, &tmp1, &_04);
    PSVECCrossProduct(&tmp3, &tmp2, &_10);
    PSVECCrossProduct(&tmp4, &tmp3, &_1C);
    PSVECCrossProduct(&tmp1, &tmp4, &_28);
    PSVECNormalize(&_04, &_04);
    PSVECNormalize(&_10, &_10);
    PSVECNormalize(&_1C, &_1C);
    PSVECNormalize(&_28, &_28);
}

/* 802738FC-80273A44 26E23C 0148+00 0/0 3/3 2/2 .text            clip__11J3DUClipperCFPA4_Cf3Vecf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u32 J3DUClipper::clip(f32 const (*param_0)[4], Vec param_1, f32 param_2) const {
    nofralloc
#include "asm/JSystem/J3DU/J3DUClipper/clip__11J3DUClipperCFPA4_Cf3Vecf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455288-80455290 003888 0004+04 1/1 0/0 0/0 .sdata2          @991 */
SECTION_SDATA2 static f32 lit_991[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 80273A44-80273E08 26E384 03C4+00 0/0 3/3 2/2 .text clip__11J3DUClipperCFPA4_CfP3VecP3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u32 J3DUClipper::clip(f32 const (*param_0)[4], Vec* param_1, Vec* param_2) const {
    nofralloc
#include "asm/JSystem/J3DU/J3DUClipper/clip__11J3DUClipperCFPA4_CfP3VecP3Vec.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039A984-8039A99D 026FE4 0019+00 0/0 0/0 0/0 .rodata          None */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A984 = " J3DUClipper::mFovy = %f";
#pragma pop

/* 8039A99D-8039A9B8 026FFD 001B+00 0/0 0/0 0/0 .rodata          None */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A99D = " J3DUClipper::mAspect = %f";
#pragma pop

/* 8039A9B8-8039A9D1 027018 0019+00 0/0 0/0 0/0 .rodata          None */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A9B8 = " J3DUClipper::mNear = %f";
#pragma pop

/* 8039A9D1-8039A9F0 027031 0018+07 0/0 0/0 0/0 .rodata          None */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A9D1 = " J3DUClipper::mFar = %f";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039A9E9 = "\0\0\0\0\0\0";
#pragma pop

/* 8039A984-8039A984 026FE4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
