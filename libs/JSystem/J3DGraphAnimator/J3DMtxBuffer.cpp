// 
// Generated By: dol2asm
// Translation Unit: J3DMtxBuffer
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/J3DGraphAnimator/J3DMtxBuffer.h"

// 
// Types:
// 

struct Vec {
};

struct J3DShape {
	/* 80314E28 */ void countBumpMtxNum() const;
};

struct J3DModelData {
};

struct J3DMtxBuffer {
	/* 80326214 */ void initialize();
	/* 80326258 */ void create(J3DModelData*, u32);
	/* 80326364 */ void createAnmMtx(J3DModelData*);
	/* 803263F0 */ void createWeightEnvelopeMtx(J3DModelData*);
	/* 8032648C */ void setNoUseDrawMtx();
	/* 803264B8 */ void createDoubleDrawMtx(J3DModelData*, u32);
	/* 80326664 */ void createBumpMtxArray(J3DModelData*, u32);
	/* 803268D4 */ void calcWeightEnvelopeMtx();
	/* 80326ACC */ void calcDrawMtx(u32, Vec const&, f32 const (& )[3][4]);
	/* 80326D3C */ void calcNrmMtx();
	/* 80326EF0 */ void calcBBoardMtx();
};

// 
// Forward References:
// 

void J3DCalcViewBaseMtx(f32 (* )[4], Vec const&, f32 const (& )[3][4], f32 (* )[4]);

extern "C" void initialize__12J3DMtxBufferFv();
extern "C" void create__12J3DMtxBufferFP12J3DModelDataUl();
extern "C" void createAnmMtx__12J3DMtxBufferFP12J3DModelData();
extern "C" void createWeightEnvelopeMtx__12J3DMtxBufferFP12J3DModelData();
extern "C" void setNoUseDrawMtx__12J3DMtxBufferFv();
extern "C" void createDoubleDrawMtx__12J3DMtxBufferFP12J3DModelDataUl();
extern "C" void createBumpMtxArray__12J3DMtxBufferFP12J3DModelDataUl();
extern "C" void calcWeightEnvelopeMtx__12J3DMtxBufferFv();
extern "C" void calcDrawMtx__12J3DMtxBufferFUlRC3VecRA3_A4_Cf();
extern "C" void calcNrmMtx__12J3DMtxBufferFv();
extern "C" void calcBBoardMtx__12J3DMtxBufferFv();
extern "C" void J3DCalcViewBaseMtx__FPA4_fRC3VecRA3_A4_CfPA4_f();

// 
// External References:
// 

void* operator new[](u32);
void* operator new[](u32, int);
void J3DCalcBBoardMtx(f32 (* )[4]);
void J3DCalcYBBoardMtx(f32 (* )[4]);
void J3DPSCalcInverseTranspose(f32 (* )[4], f32 (* )[3]);
void J3DPSMtxArrayConcat(f32 (* )[4], f32 (* )[4], f32 (* )[4], u32);
extern "C" extern u8 j3dSys[284];

extern "C" void* __nwa__FUl();
extern "C" void* __nwa__FUli();
extern "C" void J3DCalcBBoardMtx__FPA4_f();
extern "C" void J3DCalcYBBoardMtx__FPA4_f();
extern "C" void J3DPSCalcInverseTranspose__FPA4_fPA3_f();
extern "C" void J3DPSMtxArrayConcat__FPA4_fPA4_fPA4_fUl();
extern "C" void countBumpMtxNum__8J3DShapeCFv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXConcat();
extern "C" void _savegpr_19();
extern "C" void _savegpr_24();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_24();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 j3dSys[284];

// 
// Declarations:
// 

/* 80326214-80326258 0044+00 s=0 e=1 z=0  None .text      initialize__12J3DMtxBufferFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxBuffer::initialize() {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMtxBuffer/initialize__12J3DMtxBufferFv.s"
}
#pragma pop


/* 80326258-80326364 010C+00 s=0 e=1 z=0  None .text      create__12J3DMtxBufferFP12J3DModelDataUl                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxBuffer::create(J3DModelData* param_0, u32 param_1) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMtxBuffer/create__12J3DMtxBufferFP12J3DModelDataUl.s"
}
#pragma pop


/* 80326364-803263F0 008C+00 s=1 e=0 z=0  None .text      createAnmMtx__12J3DMtxBufferFP12J3DModelData                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxBuffer::createAnmMtx(J3DModelData* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMtxBuffer/createAnmMtx__12J3DMtxBufferFP12J3DModelData.s"
}
#pragma pop


/* 803263F0-8032648C 009C+00 s=1 e=0 z=0  None .text      createWeightEnvelopeMtx__12J3DMtxBufferFP12J3DModelData      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxBuffer::createWeightEnvelopeMtx(J3DModelData* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMtxBuffer/createWeightEnvelopeMtx__12J3DMtxBufferFP12J3DModelData.s"
}
#pragma pop


/* ############################################################################################## */
/* 804371C0-804371F0 0030+00 s=1 e=0 z=0  None .bss       sNoUseDrawMtx__12J3DMtxBuffer                                */
static u8 sNoUseDrawMtx__12J3DMtxBuffer[48];

/* 804371F0-80437218 0024+04 s=1 e=0 z=0  None .bss       sNoUseNrmMtx__12J3DMtxBuffer                                 */
static u8 sNoUseNrmMtx__12J3DMtxBuffer[36 + 4 /* padding */];

/* 80450970-80450974 0004+00 s=1 e=0 z=0  None .sdata     sNoUseDrawMtxPtr__12J3DMtxBuffer                             */
SECTION_SDATA static void* sNoUseDrawMtxPtr__12J3DMtxBuffer = (void*)&sNoUseDrawMtx__12J3DMtxBuffer;

/* 80450974-80450978 0004+00 s=1 e=0 z=0  None .sdata     sNoUseNrmMtxPtr__12J3DMtxBuffer                              */
SECTION_SDATA static void* sNoUseNrmMtxPtr__12J3DMtxBuffer = (void*)&sNoUseNrmMtx__12J3DMtxBuffer;

/* 8032648C-803264B8 002C+00 s=1 e=0 z=0  None .text      setNoUseDrawMtx__12J3DMtxBufferFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxBuffer::setNoUseDrawMtx() {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMtxBuffer/setNoUseDrawMtx__12J3DMtxBufferFv.s"
}
#pragma pop


/* 803264B8-80326664 01AC+00 s=1 e=0 z=0  None .text      createDoubleDrawMtx__12J3DMtxBufferFP12J3DModelDataUl        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxBuffer::createDoubleDrawMtx(J3DModelData* param_0, u32 param_1) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMtxBuffer/createDoubleDrawMtx__12J3DMtxBufferFP12J3DModelDataUl.s"
}
#pragma pop


/* 80326664-803268D4 0270+00 s=1 e=0 z=0  None .text      createBumpMtxArray__12J3DMtxBufferFP12J3DModelDataUl         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxBuffer::createBumpMtxArray(J3DModelData* param_0, u32 param_1) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMtxBuffer/createBumpMtxArray__12J3DMtxBufferFP12J3DModelDataUl.s"
}
#pragma pop


/* ############################################################################################## */
/* 80450978-80450980 0008+00 s=1 e=0 z=0  None .sdata     J3DUnit01                                                    */
SECTION_SDATA static u8 J3DUnit01[8] = {
	0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};

/* 803268D4-80326ACC 01F8+00 s=0 e=1 z=0  None .text      calcWeightEnvelopeMtx__12J3DMtxBufferFv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxBuffer::calcWeightEnvelopeMtx() {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMtxBuffer/calcWeightEnvelopeMtx__12J3DMtxBufferFv.s"
}
#pragma pop


/* 80326ACC-80326D3C 0270+00 s=0 e=1 z=0  None .text      calcDrawMtx__12J3DMtxBufferFUlRC3VecRA3_A4_Cf                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxBuffer::calcDrawMtx(u32 param_0, Vec const& param_1, f32 const (& param_2)[3][4]) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMtxBuffer/calcDrawMtx__12J3DMtxBufferFUlRC3VecRA3_A4_Cf.s"
}
#pragma pop


/* 80326D3C-80326EF0 01B4+00 s=0 e=1 z=0  None .text      calcNrmMtx__12J3DMtxBufferFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxBuffer::calcNrmMtx() {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMtxBuffer/calcNrmMtx__12J3DMtxBufferFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80456420-80456424 0004+00 s=1 e=0 z=0  None .sdata2    @1320                                                        */
SECTION_SDATA2 static u32 lit_1320 = 0x3F800000;

/* 80456424-80456428 0004+00 s=1 e=0 z=0  None .sdata2    @1321                                                        */
SECTION_SDATA2 static u8 lit_1321[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80326EF0-80327048 0158+00 s=0 e=1 z=0  None .text      calcBBoardMtx__12J3DMtxBufferFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMtxBuffer::calcBBoardMtx() {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMtxBuffer/calcBBoardMtx__12J3DMtxBufferFv.s"
}
#pragma pop


/* 80327048-80327100 00B8+00 s=1 e=1 z=0  None .text      J3DCalcViewBaseMtx__FPA4_fRC3VecRA3_A4_CfPA4_f               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DCalcViewBaseMtx(f32 (* param_0)[4], Vec const& param_1, f32 const (& param_2)[3][4], f32 (* param_3)[4]) {
	nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DMtxBuffer/J3DCalcViewBaseMtx__FPA4_fRC3VecRA3_A4_CfPA4_f.s"
}
#pragma pop


