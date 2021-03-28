// 
// Generated By: dol2asm
// Translation Unit: d/ovlp/d_ovlp_fade2
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/ovlp/d_ovlp_fade2.h"

// 
// Types:
// 

struct overlap_task_class {
};

struct mDoMtx_stack_c {
	/* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct dOvlpFd2_dlst_c {
	/* 8025247C */ void draw();
	/* 80252E8C */ ~dOvlpFd2_dlst_c();
};

struct dOvlpFd2_c {
	/* 80252990 */ dOvlpFd2_c();
	/* 802529F4 */ void execFirstSnap();
	/* 80252A78 */ void execFadeOut();
	/* 80252BC0 */ void execNextSnap();
	/* 80252C68 */ void execFadeIn();
};

struct dDlst_base_c {
};

struct dDlst_list_c {
	/* 80056794 */ void set(dDlst_base_c**&, dDlst_base_c**&, dDlst_base_c*);
};

struct JGeometry {
	template <typename A1>
	struct TBox2 { };
	/* TBox2<f32> */
	struct TBox2__template0 {
	};

};

struct J2DOrthoGraph {
	/* 802E980C */ void setOrtho(JGeometry::TBox2<f32> const&, f32, f32);
};

// 
// Forward References:
// 

static void dOvlpFd2_Draw(dOvlpFd2_c*);
static void dOvlpFd2_Execute(dOvlpFd2_c*);
static bool dOvlpFd2_IsDelete(dOvlpFd2_c*);
static bool dOvlpFd2_Delete(dOvlpFd2_c*);
static void dOvlpFd2_Create(void*);
void cLib_calcTimer__template4(s8*);
extern "C" extern void* g_profile_OVERLAP2[10];

extern "C" void draw__15dOvlpFd2_dlst_cFv();
extern "C" void __ct__10dOvlpFd2_cFv();
extern "C" void execFirstSnap__10dOvlpFd2_cFv();
extern "C" void execFadeOut__10dOvlpFd2_cFv();
extern "C" void execNextSnap__10dOvlpFd2_cFv();
extern "C" void execFadeIn__10dOvlpFd2_cFv();
extern "C" static void dOvlpFd2_Draw__FP10dOvlpFd2_c();
extern "C" static void dOvlpFd2_Execute__FP10dOvlpFd2_c();
extern "C" static bool dOvlpFd2_IsDelete__FP10dOvlpFd2_c();
extern "C" static bool dOvlpFd2_Delete__FP10dOvlpFd2_c();
extern "C" static void dOvlpFd2_Create__FPv();
extern "C" void func_80252E70();
extern "C" void __dt__15dOvlpFd2_dlst_cFv();
extern "C" extern void* g_profile_OVERLAP2[10];

// 
// External References:
// 

void mDoMtx_ZrotM(f32 (* )[4], s16);
void fopOvlpM_SceneIsStop();
void fopOvlpM_SceneIsStart();
void fopOvlpM_IsOutReq(overlap_task_class*);
void fopOvlpM_Done(overlap_task_class*);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_addCalc0(f32*, f32, f32);
void cLib_chaseAngleS(s16*, s16, s16);
void operator delete(void*);
extern "C" extern u8 g_mDoMtx_identity[48 + 24 /* padding */];
extern "C" extern void* g_fopOvlp_Method[5 + 1 /* padding */];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern void* __vt__16dDlst_snapShot_c[3];
extern "C" extern u8 mFrameBufferTexObj__13mDoGph_gInf_c[32];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_clearColor[4];
extern "C" extern u8 mFrameBufferTex__13mDoGph_gInf_c[4];
extern "C" extern u8 struct_80450BE4[4];
extern "C" extern u8 sManager__10JFWDisplay[4];

extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void fopOvlpM_SceneIsStop__Fv();
extern "C" void fopOvlpM_SceneIsStart__Fv();
extern "C" void fopOvlpM_IsOutReq__FP18overlap_task_class();
extern "C" void fopOvlpM_Done__FP18overlap_task_class();
extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void __dl__FPv();
extern "C" void func_802E980C();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void C_MTXPerspective();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXSetTexCoordGen2();
extern "C" void GXSetNumTexGens();
extern "C" void GXBegin();
extern "C" void GXSetCullMode();
extern "C" void GXSetChanMatColor();
extern "C" void GXSetNumChans();
extern "C" void GXSetChanCtrl();
extern "C" void GXInitTexObj();
extern "C" void GXInitTexObjLOD();
extern "C" void GXLoadTexObj();
extern "C" void GXSetTevColorIn();
extern "C" void GXSetTevAlphaIn();
extern "C" void GXSetTevColorOp();
extern "C" void GXSetTevAlphaOp();
extern "C" void GXSetAlphaCompare();
extern "C" void GXSetTevOrder();
extern "C" void GXSetNumTevStages();
extern "C" void GXSetFog();
extern "C" void GXSetBlendMode();
extern "C" void GXSetZMode();
extern "C" void GXSetZCompLoc();
extern "C" void GXSetDither();
extern "C" void GXSetProjection();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXSetCurrentMtx();
extern "C" void GXSetViewport();
extern "C" void GXSetScissor();
extern "C" void GXSetClipMode();
extern "C" void __ptmf_scall();
extern "C" extern u8 g_mDoMtx_identity[48 + 24 /* padding */];
extern "C" extern void* g_fopOvlp_Method[5 + 1 /* padding */];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern void* __vt__16dDlst_snapShot_c[3];
extern "C" extern u8 mFrameBufferTexObj__13mDoGph_gInf_c[32];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_clearColor[4];
extern "C" extern u8 mFrameBufferTex__13mDoGph_gInf_c[4];
extern "C" extern u8 struct_80450BE4[4];
extern "C" extern u8 sManager__10JFWDisplay[4];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80454E20-80454E24 0004+00 s=1 e=0 z=0  None .sdata2    @3631                                                        */
SECTION_SDATA2 static u32 lit_3631 = 0xFFFFFFFF;

/* 80454E24-80454E28 0004+00 s=2 e=0 z=0  None .sdata2    @3683                                                        */
SECTION_SDATA2 static u8 lit_3683[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80454E28-80454E2C 0004+00 s=1 e=0 z=0  None .sdata2    @3684                                                        */
SECTION_SDATA2 static u32 lit_3684 = 0x44180000;

/* 80454E2C-80454E30 0004+00 s=1 e=0 z=0  None .sdata2    @3685                                                        */
SECTION_SDATA2 static u32 lit_3685 = 0x43E00000;

/* 80454E30-80454E34 0004+00 s=4 e=0 z=0  None .sdata2    @3686                                                        */
SECTION_SDATA2 static u32 lit_3686 = 0x3F800000;

/* 80454E34-80454E38 0004+00 s=1 e=0 z=0  None .sdata2    @3687                                                        */
SECTION_SDATA2 static u32 lit_3687 = 0x42700000;

/* 80454E38-80454E3C 0004+00 s=1 e=0 z=0  None .sdata2    @3688                                                        */
SECTION_SDATA2 static u32 lit_3688 = 0x3FADB6DB;

/* 80454E3C-80454E40 0004+00 s=1 e=0 z=0  None .sdata2    @3689                                                        */
SECTION_SDATA2 static u32 lit_3689 = 0x42C80000;

/* 80454E40-80454E44 0004+00 s=1 e=0 z=0  None .sdata2    @3690                                                        */
SECTION_SDATA2 static u32 lit_3690 = 0x47C35000;

/* 80454E44-80454E48 0004+00 s=1 e=0 z=0  None .sdata2    @3691                                                        */
SECTION_SDATA2 static u32 lit_3691 = 0xBF800000;

/* 8025247C-80252990 0514+00 s=1 e=0 z=0  None .text      draw__15dOvlpFd2_dlst_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dOvlpFd2_dlst_c::draw() {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade2/draw__15dOvlpFd2_dlst_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803C2CF0-803C2CFC 000C+00 s=1 e=0 z=0  None .data      @3695                                                        */
SECTION_DATA static void* lit_3695[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)execFirstSnap__10dOvlpFd2_cFv,
};

/* 803C2CFC-803C2D08 000C+00 s=1 e=0 z=0  None .data      @3721                                                        */
SECTION_DATA static void* lit_3721[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)execFadeOut__10dOvlpFd2_cFv,
};

/* 803C2D08-803C2D14 000C+00 s=1 e=0 z=0  None .data      @3736                                                        */
SECTION_DATA static void* lit_3736[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)execNextSnap__10dOvlpFd2_cFv,
};

/* 803C2D14-803C2D20 000C+00 s=1 e=0 z=0  None .data      @3765                                                        */
SECTION_DATA static void* lit_3765[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)execFadeIn__10dOvlpFd2_cFv,
};

/* 803C2D20-803C2D34 0014+00 s=1 e=0 z=0  None .data      l_dOvlpFd2_Method                                            */
SECTION_DATA static void* l_dOvlpFd2_Method[5] = {
	(void*)dOvlpFd2_Create__FPv,
	(void*)dOvlpFd2_Delete__FP10dOvlpFd2_c,
	(void*)dOvlpFd2_Execute__FP10dOvlpFd2_c,
	(void*)dOvlpFd2_IsDelete__FP10dOvlpFd2_c,
	(void*)dOvlpFd2_Draw__FP10dOvlpFd2_c,
};

/* 803C2D34-803C2D5C 0028+00 s=0 e=0 z=1  None .data      g_profile_OVERLAP2                                           */
SECTION_DATA void* g_profile_OVERLAP2[10] = {
	(void*)NULL,
	(void*)0x0002FFFD,
	(void*)0x00110000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000120,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopOvlp_Method,
	(void*)0x03070000,
	(void*)&l_dOvlpFd2_Method,
};

/* 803C2D5C-803C2D70 0010+04 s=2 e=0 z=0  None .data      __vt__15dOvlpFd2_dlst_c                                      */
SECTION_DATA static void* __vt__15dOvlpFd2_dlst_c[4 + 1 /* padding */] = {
	(void*)NULL,
	(void*)NULL,
	(void*)draw__15dOvlpFd2_dlst_cFv,
	(void*)__dt__15dOvlpFd2_dlst_cFv,
	/* padding */
	NULL,
};

/* 80252990-802529F4 0064+00 s=1 e=0 z=0  None .text      __ct__10dOvlpFd2_cFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dOvlpFd2_c::dOvlpFd2_c() {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade2/__ct__10dOvlpFd2_cFv.s"
}
#pragma pop


/* 802529F4-80252A78 0084+00 s=1 e=0 z=0  None .text      execFirstSnap__10dOvlpFd2_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dOvlpFd2_c::execFirstSnap() {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade2/execFirstSnap__10dOvlpFd2_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80454E48-80454E4C 0004+00 s=1 e=0 z=0  None .sdata2    @3757                                                        */
SECTION_SDATA2 static u32 lit_3757 = 0x3D4CCCCD;

/* 80252A78-80252BC0 0148+00 s=1 e=0 z=0  None .text      execFadeOut__10dOvlpFd2_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dOvlpFd2_c::execFadeOut() {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade2/execFadeOut__10dOvlpFd2_cFv.s"
}
#pragma pop


/* 80252BC0-80252C68 00A8+00 s=1 e=0 z=0  None .text      execNextSnap__10dOvlpFd2_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dOvlpFd2_c::execNextSnap() {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade2/execNextSnap__10dOvlpFd2_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80454E4C-80454E50 0004+00 s=1 e=0 z=0  None .sdata2    @3794                                                        */
SECTION_SDATA2 static u32 lit_3794 = 0x3CF5C28F;

/* 80454E50-80454E54 0004+00 s=1 e=0 z=0  None .sdata2    @3795                                                        */
SECTION_SDATA2 static u32 lit_3795 = 0x3A83126F;

/* 80252C68-80252D0C 00A4+00 s=1 e=0 z=0  None .text      execFadeIn__10dOvlpFd2_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dOvlpFd2_c::execFadeIn() {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade2/execFadeIn__10dOvlpFd2_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80454E54-80454E58 0004+00 s=1 e=0 z=0  None .sdata2    @3822                                                        */
SECTION_SDATA2 static u32 lit_3822 = 0xC3D20000;

/* 80252D0C-80252E08 00FC+00 s=1 e=0 z=0  None .text      dOvlpFd2_Draw__FP10dOvlpFd2_c                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void dOvlpFd2_Draw(dOvlpFd2_c* param_0) {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade2/dOvlpFd2_Draw__FP10dOvlpFd2_c.s"
}
#pragma pop


/* 80252E08-80252E34 002C+00 s=1 e=0 z=0  None .text      dOvlpFd2_Execute__FP10dOvlpFd2_c                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void dOvlpFd2_Execute(dOvlpFd2_c* param_0) {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade2/dOvlpFd2_Execute__FP10dOvlpFd2_c.s"
}
#pragma pop


/* 80252E34-80252E3C 0008+00 s=1 e=0 z=0  None .text      dOvlpFd2_IsDelete__FP10dOvlpFd2_c                            */
static bool dOvlpFd2_IsDelete(dOvlpFd2_c* param_0) {
	return true;
}


/* 80252E3C-80252E44 0008+00 s=1 e=0 z=0  None .text      dOvlpFd2_Delete__FP10dOvlpFd2_c                              */
static bool dOvlpFd2_Delete(dOvlpFd2_c* param_0) {
	return true;
}


/* 80252E44-80252E70 002C+00 s=1 e=0 z=0  None .text      dOvlpFd2_Create__FPv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void dOvlpFd2_Create(void* param_0) {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade2/dOvlpFd2_Create__FPv.s"
}
#pragma pop


/* 80252E70-80252E8C 001C+00 s=3 e=4 z=0  None .text      cLib_calcTimer<Sc>__FPSc                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cLib_calcTimer__template4(s8* param_0) {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade2/func_80252E70.s"
}
#pragma pop


/* 80252E8C-80252ED4 0048+00 s=1 e=0 z=0  None .text      __dt__15dOvlpFd2_dlst_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dOvlpFd2_dlst_c::~dOvlpFd2_dlst_c() {
	nofralloc
#include "asm/d/ovlp/d_ovlp_fade2/__dt__15dOvlpFd2_dlst_cFv.s"
}
#pragma pop


