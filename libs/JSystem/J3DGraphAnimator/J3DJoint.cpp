// 
// Generated By: dol2asm
// Translation Unit: J3DJoint
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/J3DGraphAnimator/J3DJoint.h"

// 
// Types:
// 

struct Vec {
};

struct J3DTransformInfo {
};

struct J3DMtxCalcJ3DSysInitMaya {
	/* 8032ECAC */ void init(Vec const&, f32 const (& )[3][4]);
};

struct J3DMtxCalcJ3DSysInitBasic {
	/* 8032EC28 */ void init(Vec const&, f32 const (& )[3][4]);
};

struct J3DMtxCalcCalcTransformSoftimage {
	/* 8032EE50 */ void calcTransform(J3DTransformInfo const&);
};

struct J3DMtxCalcCalcTransformMaya {
	/* 8032EFBC */ void calcTransform(J3DTransformInfo const&);
};

struct J3DMtxCalcCalcTransformBasic {
	/* 8032ED30 */ void calcTransform(J3DTransformInfo const&);
};

struct J3DMaterial {
	/* 80316AB0 */ void setCurrentMtx();
};

struct J3DJoint {
	/* 8032F13C */ void appendChild(J3DJoint*);
	/* 8032F170 */ J3DJoint();
	/* 8032F254 */ void entryIn();
	/* 8032F3F8 */ void recursiveCalc();
};

// 
// Forward References:
// 

extern "C" extern u8 mMtxBuffer__10J3DMtxCalc[4];
extern "C" extern u8 mJoint__10J3DMtxCalc[4];
extern "C" extern u8 mCurrentMtxCalc__8J3DJoint[4 + 4 /* padding */];

extern "C" void init__25J3DMtxCalcJ3DSysInitBasicFRC3VecRA3_A4_Cf();
extern "C" void init__24J3DMtxCalcJ3DSysInitMayaFRC3VecRA3_A4_Cf();
extern "C" void calcTransform__28J3DMtxCalcCalcTransformBasicFRC16J3DTransformInfo();
extern "C" void calcTransform__32J3DMtxCalcCalcTransformSoftimageFRC16J3DTransformInfo();
extern "C" void calcTransform__27J3DMtxCalcCalcTransformMayaFRC16J3DTransformInfo();
extern "C" void appendChild__8J3DJointFP8J3DJoint();
extern "C" void __ct__8J3DJointFv();
extern "C" void entryIn__8J3DJointFv();
extern "C" void recursiveCalc__8J3DJointFv();
extern "C" extern u8 mMtxBuffer__10J3DMtxCalc[4];
extern "C" extern u8 mJoint__10J3DMtxCalc[4];
extern "C" extern u8 mCurrentMtxCalc__8J3DJoint[4 + 4 /* padding */];

// 
// External References:
// 

void J3DGetTranslateRotateMtx(J3DTransformInfo const&, f32 (* )[4]);
void J3DGetTranslateRotateMtx(s16, s16, s16, f32, f32, f32, f32 (* )[4]);
void JMAMTXApplyScale(f32 const (* )[4], f32 (* )[4], f32, f32, f32);
extern "C" extern u8 const j3dDefaultTransformInfo[32];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 mCurrentS__6J3DSys[12];
extern "C" extern u8 mParentS__6J3DSys[12];
extern "C" extern u8 entryNum__13J3DDrawBuffer[4 + 4 /* padding */];

extern "C" void J3DGetTranslateRotateMtx__FRC16J3DTransformInfoPA4_f();
extern "C" void J3DGetTranslateRotateMtx__FsssfffPA4_f();
extern "C" void setCurrentMtx__11J3DMaterialFv();
extern "C" void JMAMTXApplyScale__FPA4_CfPA4_ffff();
extern "C" void PSMTXCopy();
extern "C" void PSMTXConcat();
extern "C" void _savegpr_27();
extern "C" void _restgpr_27();
extern "C" extern u8 const j3dDefaultTransformInfo[32];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 mCurrentS__6J3DSys[12];
extern "C" extern u8 mParentS__6J3DSys[12];
extern "C" extern u8 entryNum__13J3DDrawBuffer[4 + 4 /* padding */];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803A2068-803A2074 000C+00 s=1 e=0 z=0  None .rodata    @882                                                         */
SECTION_RODATA static u8 const lit_882[12] = {
	0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};

/* 8032EC28-8032ECAC 0084+00 s=0 e=1 z=0  None .text      init__25J3DMtxCalcJ3DSysInitBasicFRC3VecRA3_A4_Cf            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxCalcJ3DSysInitBasic::init(Vec const& param_0, f32 const (& param_1)[3][4]) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DJoint/init__25J3DMtxCalcJ3DSysInitBasicFRC3VecRA3_A4_Cf.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A2074-803A2080 000C+00 s=1 e=0 z=0  None .rodata    @893                                                         */
SECTION_RODATA static u8 const lit_893[12] = {
	0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};

/* 8032ECAC-8032ED30 0084+00 s=0 e=2 z=2  None .text      init__24J3DMtxCalcJ3DSysInitMayaFRC3VecRA3_A4_Cf             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxCalcJ3DSysInitMaya::init(Vec const& param_0, f32 const (& param_1)[3][4]) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DJoint/init__24J3DMtxCalcJ3DSysInitMayaFRC3VecRA3_A4_Cf.s"
}
#pragma pop


/* ############################################################################################## */
/* 804515F0-804515F4 0004+00 s=3 e=1 z=0  None .sbss      mMtxBuffer__10J3DMtxCalc                                     */
u8 mMtxBuffer__10J3DMtxCalc[4];

/* 804515F4-804515F8 0004+00 s=4 e=9 z=2  None .sbss      mJoint__10J3DMtxCalc                                         */
u8 mJoint__10J3DMtxCalc[4];

/* 804564A0-804564A4 0004+00 s=3 e=0 z=0  None .sdata2    @922                                                         */
SECTION_SDATA2 static u32 lit_922 = 0x3F800000;

/* 8032ED30-8032EE50 0120+00 s=0 e=1 z=0  None .text      calcTransform__28J3DMtxCalcCalcTransformBasicFRC16J3DTransformInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxCalcCalcTransformBasic::calcTransform(J3DTransformInfo const& param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DJoint/calcTransform__28J3DMtxCalcCalcTransformBasicFRC16J3DTransformInfo.s"
}
#pragma pop


/* 8032EE50-8032EFBC 016C+00 s=0 e=1 z=0  None .text      calcTransform__32J3DMtxCalcCalcTransformSoftimageFRC16J3DTransformInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxCalcCalcTransformSoftimage::calcTransform(J3DTransformInfo const& param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DJoint/calcTransform__32J3DMtxCalcCalcTransformSoftimageFRC16J3DTransformInfo.s"
}
#pragma pop


/* 8032EFBC-8032F13C 0180+00 s=0 e=6 z=2  None .text      calcTransform__27J3DMtxCalcCalcTransformMayaFRC16J3DTransformInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxCalcCalcTransformMaya::calcTransform(J3DTransformInfo const& param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DJoint/calcTransform__27J3DMtxCalcCalcTransformMayaFRC16J3DTransformInfo.s"
}
#pragma pop


/* 8032F13C-8032F170 0034+00 s=0 e=1 z=0  None .text      appendChild__8J3DJointFP8J3DJoint                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DJoint::appendChild(J3DJoint* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DJoint/appendChild__8J3DJointFP8J3DJoint.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A2080-803A208C 000C+00 s=1 e=0 z=0  None .rodata    @1257                                                        */
SECTION_RODATA static u8 const lit_1257[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803A208C-803A2098 000C+00 s=1 e=0 z=0  None .rodata    @1259                                                        */
SECTION_RODATA static u8 const lit_1259[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804564A4-804564A8 0004+00 s=1 e=0 z=0  None .sdata2    @1220                                                        */
SECTION_SDATA2 static u8 lit_1220[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 8032F170-8032F254 00E4+00 s=0 e=1 z=0  None .text      __ct__8J3DJointFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DJoint::J3DJoint() {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DJoint/__ct__8J3DJointFv.s"
}
#pragma pop


/* 8032F254-8032F3F8 01A4+00 s=0 e=1 z=0  None .text      entryIn__8J3DJointFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DJoint::entryIn() {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DJoint/entryIn__8J3DJointFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 804515F8-80451600 0004+04 s=1 e=1 z=0  None .sbss      mCurrentMtxCalc__8J3DJoint                                   */
u8 mCurrentMtxCalc__8J3DJoint[4 + 4 /* padding */];

/* 8032F3F8-8032F5A8 01B0+00 s=0 e=1 z=0  None .text      recursiveCalc__8J3DJointFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DJoint::recursiveCalc() {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DJoint/recursiveCalc__8J3DJointFv.s"
}
#pragma pop


