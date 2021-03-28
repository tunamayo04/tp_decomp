// 
// Generated By: dol2asm
// Translation Unit: d_a_e_ga
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_ga/d_a_e_ga.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoMtx_stack_c {
	/* 8000CD9C */ void transM(f32, f32, f32);
	/* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct ga_s {
	/* 804FBAB8 */ ~ga_s();
	/* 804FBAF4 */ ga_s();
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
};

struct e_ga_class {
};

struct daE_Ga_HIO_c {
	/* 804FB0EC */ daE_Ga_HIO_c();
	/* 804FBAF8 */ ~daE_Ga_HIO_c();
};

struct dKy_tevstr_c {
};

struct Vec {
};

struct cXyz {
	/* 80266B34 */ void operator-(Vec const&) const;
};

struct dScnKy_env_light_c {
	/* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
};

struct dRes_info_c {
};

struct dRes_control_c {
	/* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct J3DModel {
};

struct J3DModelData {
};

struct dComIfG_play_c {
	/* 8002CAF0 */ void addSimpleModel(J3DModelData*, int, u8);
	/* 8002CB30 */ void removeSimpleModel(J3DModelData*, int);
	/* 8002CB68 */ void entrySimpleModel(J3DModel*, int);
};

// 
// Forward References:
// 

static void daE_Ga_Draw(e_ga_class*);
static void ga_fly(e_ga_class*, ga_s*);
static void bt_fly(e_ga_class*, ga_s*);
static void ga_control(e_ga_class*);
static void daE_Ga_Execute(e_ga_class*);
static bool daE_Ga_IsDelete(e_ga_class*);
static void daE_Ga_Delete(e_ga_class*);
static void useHeapInit(fopAc_ac_c*);
static void daE_Ga_Create(fopAc_ac_c*);
extern "C" extern u8 const data_804FBBC0[4];
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_E_GA[12];

extern "C" void __ct__12daE_Ga_HIO_cFv();
extern "C" static void daE_Ga_Draw__FP10e_ga_class();
extern "C" static void ga_fly__FP10e_ga_classP4ga_s();
extern "C" static void bt_fly__FP10e_ga_classP4ga_s();
extern "C" static void ga_control__FP10e_ga_class();
extern "C" static void daE_Ga_Execute__FP10e_ga_class();
extern "C" static bool daE_Ga_IsDelete__FP10e_ga_class();
extern "C" static void daE_Ga_Delete__FP10e_ga_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_Ga_Create__FP10fopAc_ac_c();
extern "C" void __dt__4ga_sFv();
extern "C" void __ct__4ga_sFv();
extern "C" void __dt__12daE_Ga_HIO_cFv();
extern "C" void __sinit_d_a_e_ga_cpp();
extern "C" extern u8 const data_804FBBC0[4];
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_E_GA[12];

// 
// External References:
// 

void mDoMtx_XrotM(f32 (* )[4], s16);
void mDoMtx_YrotS(f32 (* )[4], s16);
void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void cM_atan2s(f32, f32);
void cM_rndF(f32);
void cM_rndFX(f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void MtxPosition(cXyz*, cXyz*);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
extern "C" void __construct_array();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 804FBB90-804FBB94 0004+00 s=5 e=0 z=0  None .rodata    @3646                                                        */
SECTION_RODATA static u32 const lit_3646 = 0x3F800000;

/* 804FBBE0-804FBC00 0020+00 s=1 e=0 z=0  None .data      l_daE_Ga_Method                                              */
SECTION_DATA static void* l_daE_Ga_Method[8] = {
	(void*)daE_Ga_Create__FP10fopAc_ac_c,
	(void*)daE_Ga_Delete__FP10e_ga_class,
	(void*)daE_Ga_Execute__FP10e_ga_class,
	(void*)daE_Ga_IsDelete__FP10e_ga_class,
	(void*)daE_Ga_Draw__FP10e_ga_class,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 804FBC00-804FBC30 0030+00 s=0 e=0 z=1  None .data      g_profile_E_GA                                               */
SECTION_DATA void* g_profile_E_GA[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x01C70000,
	(void*)&g_fpcLf_Method,
	(void*)0x00004D7C,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x008A0000,
	(void*)&l_daE_Ga_Method,
	(void*)0x00044000,
	(void*)0x000E0000,
};

/* 804FBC30-804FBC3C 000C+00 s=2 e=0 z=0  None .data      __vt__12daE_Ga_HIO_c                                         */
SECTION_DATA static void* __vt__12daE_Ga_HIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12daE_Ga_HIO_cFv,
};

/* 804FB0EC-804FB110 0024+00 s=1 e=0 z=0  None .text      __ct__12daE_Ga_HIO_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_Ga_HIO_c::daE_Ga_HIO_c() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ga/d_a_e_ga/__ct__12daE_Ga_HIO_cFv.s"
}
#pragma pop


/* 804FB110-804FB1B0 00A0+00 s=1 e=0 z=0  None .text      daE_Ga_Draw__FP10e_ga_class                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_Ga_Draw(e_ga_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ga/d_a_e_ga/daE_Ga_Draw__FP10e_ga_class.s"
}
#pragma pop


/* ############################################################################################## */
/* 804FBB94-804FBB98 0004+00 s=2 e=0 z=0  None .rodata    @3713                                                        */
SECTION_RODATA static u32 const lit_3713 = 0x42C80000;

/* 804FBB98-804FBB9C 0004+00 s=1 e=0 z=0  None .rodata    @3714                                                        */
SECTION_RODATA static u32 const lit_3714 = 0x41200000;

/* 804FBB9C-804FBBA0 0004+00 s=2 e=0 z=0  None .rodata    @3715                                                        */
SECTION_RODATA static u32 const lit_3715 = 0x43480000;

/* 804FBBA0-804FBBA8 0004+04 s=3 e=0 z=0  None .rodata    @3716                                                        */
SECTION_RODATA static u8 const lit_3716[4 + 4 /* padding */] = {
	0x00, 0x00, 0x00, 0x00,
	/* padding */
	0x00, 0x00, 0x00, 0x00,
};

/* 804FBBA8-804FBBB0 0008+00 s=2 e=0 z=0  None .rodata    @3718                                                        */
SECTION_RODATA static u8 const lit_3718[8] = {
	0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804FB1B0-804FB3A8 01F8+00 s=1 e=0 z=0  None .text      ga_fly__FP10e_ga_classP4ga_s                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void ga_fly(e_ga_class* param_0, ga_s* param_1) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ga/d_a_e_ga/ga_fly__FP10e_ga_classP4ga_s.s"
}
#pragma pop


/* ############################################################################################## */
/* 804FBBB0-804FBBB4 0004+00 s=1 e=0 z=0  None .rodata    @3759                                                        */
SECTION_RODATA static u32 const lit_3759 = 0x41400000;

/* 804FBBB4-804FBBB8 0004+00 s=1 e=0 z=0  None .rodata    @3760                                                        */
SECTION_RODATA static u32 const lit_3760 = 0x40E00000;

/* 804FB3A8-804FB5C0 0218+00 s=1 e=0 z=0  None .text      bt_fly__FP10e_ga_classP4ga_s                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void bt_fly(e_ga_class* param_0, ga_s* param_1) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ga/d_a_e_ga/bt_fly__FP10e_ga_classP4ga_s.s"
}
#pragma pop


/* ############################################################################################## */
/* 804FBBB8-804FBBBC 0004+00 s=1 e=0 z=0  None .rodata    @3796                                                        */
SECTION_RODATA static u32 const lit_3796 = 0xC1700000;

/* 804FBBBC-804FBBC0 0004+00 s=1 e=0 z=0  None .rodata    @3797                                                        */
SECTION_RODATA static u32 const lit_3797 = 0xC0A00000;

/* 804FB5C0-804FB6F8 0138+00 s=1 e=0 z=0  None .text      ga_control__FP10e_ga_class                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void ga_control(e_ga_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ga/d_a_e_ga/ga_control__FP10e_ga_class.s"
}
#pragma pop


/* 804FB6F8-804FB71C 0024+00 s=2 e=0 z=0  None .text      daE_Ga_Execute__FP10e_ga_class                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_Ga_Execute(e_ga_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ga/d_a_e_ga/daE_Ga_Execute__FP10e_ga_class.s"
}
#pragma pop


/* 804FB71C-804FB724 0008+00 s=1 e=0 z=0  None .text      daE_Ga_IsDelete__FP10e_ga_class                              */
static bool daE_Ga_IsDelete(e_ga_class* param_0) {
	return true;
}


/* ############################################################################################## */
/* 804FBBC0-804FBBC4 0004+00 s=0 e=0 z=0  None .rodata    l_bmdidx$3809                                                */
SECTION_RODATA u8 const data_804FBBC0[4] = {
	0x00, 0x00, 0x00, 0x03,
};

/* 804FBBC4-804FBBC8 0004+00 s=1 e=0 z=0  None .rodata    @3912                                                        */
SECTION_RODATA static u32 const lit_3912 = 0x47800000;

/* 804FBBC8-804FBBCC 0004+00 s=1 e=0 z=0  None .rodata    @3913                                                        */
SECTION_RODATA static u32 const lit_3913 = 0x3E99999A;

/* 804FBBCC-804FBBD0 0004+00 s=1 e=0 z=0  None .rodata    @3914                                                        */
SECTION_RODATA static u32 const lit_3914 = 0x3F4CCCCD;

/* 804FBBD0-804FBBD4 0004+00 s=1 e=0 z=0  None .rodata    @3915                                                        */
SECTION_RODATA static u32 const lit_3915 = 0x3E4CCCCD;

/* 804FBBD4-804FBBDE 000A+00 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_804FBBD4 = "E_ga";
SECTION_DEAD char const* const stringBase_804FBBD9 = "E_Ga";
#pragma pop

/* 804FBC48-804FBC4C 0004+00 s=2 e=0 z=0  None .bss       None                                                         */
static u8 data_804FBC48[4];

/* 804FB724-804FB7C4 00A0+00 s=1 e=0 z=0  None .text      daE_Ga_Delete__FP10e_ga_class                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_Ga_Delete(e_ga_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ga/d_a_e_ga/daE_Ga_Delete__FP10e_ga_class.s"
}
#pragma pop


/* 804FB7C4-804FB874 00B0+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ga/d_a_e_ga/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 804FBC4C-804FBC58 000C+00 s=1 e=0 z=0  None .bss       @3641                                                        */
static u8 lit_3641[12];

/* 804FBC58-804FBC64 000C+00 s=2 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[12];

/* 804FB874-804FBAB8 0244+00 s=1 e=0 z=0  None .text      daE_Ga_Create__FP10fopAc_ac_c                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_Ga_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ga/d_a_e_ga/daE_Ga_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 804FBAB8-804FBAF4 003C+00 s=1 e=0 z=0  None .text      __dt__4ga_sFv                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm ga_s::~ga_s() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ga/d_a_e_ga/__dt__4ga_sFv.s"
}
#pragma pop


/* 804FBAF4-804FBAF8 0004+00 s=1 e=0 z=0  None .text      __ct__4ga_sFv                                                */
ga_s::ga_s() {
	/* empty function */
}


/* 804FBAF8-804FBB40 0048+00 s=2 e=0 z=0  None .text      __dt__12daE_Ga_HIO_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_Ga_HIO_c::~daE_Ga_HIO_c() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ga/d_a_e_ga/__dt__12daE_Ga_HIO_cFv.s"
}
#pragma pop


/* 804FBB40-804FBB7C 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_e_ga_cpp                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_e_ga_cpp() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ga/d_a_e_ga/__sinit_d_a_e_ga_cpp.s"
}
#pragma pop


