// 
// Generated By: dol2asm
// Translation Unit: d_a_warp_bug
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/d_a_warp_bug/d_a_warp_bug.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct J3DAnmTextureSRTKey {
};

struct J3DMaterialTable {
};

struct mDoExt_btkAnm {
	/* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
};

struct J3DAnmTevRegKey {
};

struct mDoExt_brkAnm {
	/* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
	/* 80018C8C */ ~fopAc_ac_c();
};

struct daWarpBug_c {
	/* 80D67E38 */ void create_init();
	/* 80D68068 */ void draw();
};

struct dRes_info_c {
};

struct dRes_control_c {
	/* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
};

struct J3DModelData {
};

struct J3DFrameCtrl {
	/* 803283FC */ void init(s16);
	/* 80D68000 */ ~J3DFrameCtrl();
};

// 
// Forward References:
// 

static void createSolidHeap(fopAc_ac_c*);
static void daWarpBug_Draw(daWarpBug_c*);
static void daWarpBug_Execute(daWarpBug_c*);
static bool daWarpBug_IsDelete(daWarpBug_c*);
static void daWarpBug_Delete(daWarpBug_c*);
static void daWarpBug_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_WarpBug[12];

extern "C" void create_init__11daWarpBug_cFv();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daWarpBug_Draw__FP11daWarpBug_c();
extern "C" void draw__11daWarpBug_cFv();
extern "C" static void daWarpBug_Execute__FP11daWarpBug_c();
extern "C" static bool daWarpBug_IsDelete__FP11daWarpBug_c();
extern "C" static void daWarpBug_Delete__FP11daWarpBug_c();
extern "C" static void daWarpBug_Create__FP10fopAc_ac_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_WarpBug[12];

// 
// External References:
// 

void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void _savegpr_27();
extern "C" void _restgpr_27();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

// 
// Declarations:
// 

/* 80D67E38-80D67E3C 0004+00 s=1 e=0 z=0  None .text      create_init__11daWarpBug_cFv                                 */
void daWarpBug_c::create_init() {
	/* empty function */
}


/* ############################################################################################## */
/* 80D681DC-80D681E0 0004+00 s=1 e=0 z=0  None .rodata    @3709                                                        */
SECTION_RODATA static u32 const lit_3709 = 0x3F800000;

/* 80D681E0-80D68206 0026+00 s=2 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D681E0 = "WarpBug";
SECTION_DEAD char const* const stringBase_80D681E8 = "kisei.bmd";
SECTION_DEAD char const* const stringBase_80D681F2 = "kisei.brk";
SECTION_DEAD char const* const stringBase_80D681FC = "kisei.btk";
#pragma pop

/* 80D68208-80D6820C 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80D6820C-80D6822C 0020+00 s=1 e=0 z=0  None .data      l_daWarpBug_Method                                           */
SECTION_DATA static void* l_daWarpBug_Method[8] = {
	(void*)daWarpBug_Create__FP10fopAc_ac_c,
	(void*)daWarpBug_Delete__FP11daWarpBug_c,
	(void*)daWarpBug_Execute__FP11daWarpBug_c,
	(void*)daWarpBug_IsDelete__FP11daWarpBug_c,
	(void*)daWarpBug_Draw__FP11daWarpBug_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80D6822C-80D6825C 0030+00 s=0 e=0 z=1  None .data      g_profile_WarpBug                                            */
SECTION_DATA void* g_profile_WarpBug[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x01560000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000580,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02D60000,
	(void*)&l_daWarpBug_Method,
	(void*)0x00040000,
	(void*)0x000E0000,
};

/* 80D6825C-80D68268 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl                                         */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12J3DFrameCtrlFv,
};

/* 80D67E3C-80D68000 01C4+00 s=1 e=0 z=0  None .text      createSolidHeap__FP10fopAc_ac_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void createSolidHeap(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_warp_bug/d_a_warp_bug/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80D68000-80D68048 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
	nofralloc
#include "asm/rel/d/a/d_a_warp_bug/d_a_warp_bug/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop


/* 80D68048-80D68068 0020+00 s=1 e=0 z=0  None .text      daWarpBug_Draw__FP11daWarpBug_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWarpBug_Draw(daWarpBug_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_warp_bug/d_a_warp_bug/daWarpBug_Draw__FP11daWarpBug_c.s"
}
#pragma pop


/* 80D68068-80D68078 0010+00 s=1 e=0 z=0  None .text      draw__11daWarpBug_cFv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWarpBug_c::draw() {
	nofralloc
#include "asm/rel/d/a/d_a_warp_bug/d_a_warp_bug/draw__11daWarpBug_cFv.s"
}
#pragma pop


/* 80D68078-80D680D8 0060+00 s=1 e=0 z=0  None .text      daWarpBug_Execute__FP11daWarpBug_c                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWarpBug_Execute(daWarpBug_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_warp_bug/d_a_warp_bug/daWarpBug_Execute__FP11daWarpBug_c.s"
}
#pragma pop


/* 80D680D8-80D680E0 0008+00 s=1 e=0 z=0  None .text      daWarpBug_IsDelete__FP11daWarpBug_c                          */
static bool daWarpBug_IsDelete(daWarpBug_c* param_0) {
	return true;
}


/* 80D680E0-80D68130 0050+00 s=1 e=0 z=0  None .text      daWarpBug_Delete__FP11daWarpBug_c                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWarpBug_Delete(daWarpBug_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_warp_bug/d_a_warp_bug/daWarpBug_Delete__FP11daWarpBug_c.s"
}
#pragma pop


/* 80D68130-80D681D4 00A4+00 s=1 e=0 z=0  None .text      daWarpBug_Create__FP10fopAc_ac_c                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWarpBug_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_warp_bug/d_a_warp_bug/daWarpBug_Create__FP10fopAc_ac_c.s"
}
#pragma pop


