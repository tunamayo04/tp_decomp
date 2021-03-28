// 
// Generated By: dol2asm
// Translation Unit: d_a_npc_inko
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_inko/d_a_npc_inko.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct npc_inko_class {
};

struct mDoMtx_stack_c {
	/* 8000CD9C */ void transM(f32, f32, f32);
};

struct mDoExt_McaMorfCallBack2_c {
};

struct mDoExt_McaMorfCallBack1_c {
};

struct Vec {
};

struct J3DAnmTransform {
};

struct J3DModelData {
};

struct mDoExt_McaMorf {
	/* 8000FC4C */ mDoExt_McaMorf(J3DModelData*, mDoExt_McaMorfCallBack1_c*, mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int, int, int, void*, u32, u32);
	/* 8001037C */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32, void*);
	/* 800105C8 */ void play(Vec*, u32, s8);
	/* 80010680 */ void entryDL();
	/* 800106AC */ void modelCalc();
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
};

struct cXyz {
	/* 80266B34 */ void operator-(Vec const&) const;
};

struct daPy_py_c {
	/* 8015F4F0 */ void setLookPos(cXyz*);
};

struct dKy_tevstr_c {
};

struct dScnKy_env_light_c {
	/* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
	/* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {
};

struct dRes_control_c {
	/* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dMsgFlow_c {
	/* 80249F00 */ dMsgFlow_c();
	/* 80249F90 */ void init(fopAc_ac_c*, int, int, fopAc_ac_c**);
	/* 8024A2D8 */ void doFlow(fopAc_ac_c*, fopAc_ac_c**, int);
};

struct dEvt_control_c {
	/* 80042468 */ void reset();
};

struct Z2SoundObjSimple {
	/* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
	/* 802BDFF8 */ void deleteObject();
};

struct J3DJoint {
};

// 
// Forward References:
// 

static void nodeCallBack(J3DJoint*, int);
static void daNpc_Inko_Draw(npc_inko_class*);
static void anm_init(npc_inko_class*, int, f32, u8, f32);
static void daNpc_Inko_Execute(npc_inko_class*);
static bool daNpc_Inko_IsDelete(npc_inko_class*);
static void daNpc_Inko_Delete(npc_inko_class*);
static void useHeapInit(fopAc_ac_c*);
static void daNpc_Inko_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_NPC_INKO[12];

extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daNpc_Inko_Draw__FP14npc_inko_class();
extern "C" static void anm_init__FP14npc_inko_classifUcf();
extern "C" static void daNpc_Inko_Execute__FP14npc_inko_class();
extern "C" static bool daNpc_Inko_IsDelete__FP14npc_inko_class();
extern "C" static void daNpc_Inko_Delete__FP14npc_inko_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daNpc_Inko_Create__FP10fopAc_ac_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_NPC_INKO[12];

// 
// External References:
// 

void mDoMtx_XrotM(f32 (* )[4], s16);
void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoMtx_ZrotM(f32 (* )[4], s16);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_searchActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_searchActorDistanceXZ(fopAc_ac_c const*, fopAc_ac_c const*);
void fpcSch_JudgeForPName(void*, void*);
void fpcSch_JudgeByID(void*, void*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void cM_rndF(f32);
void cM_rndFX(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void* operator new(u32);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" extern u8 struct_80450C9C[4];

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void __ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void setAnm__14mDoExt_McaMorfFP15J3DAnmTransformiffffPv();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setLookPos__9daPy_py_cFP4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void* __nw__FUl();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_24();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" extern u8 struct_80450C9C[4];

// 
// Declarations:
// 

/* 80A0C998-80A0CBB0 0218+00 s=1 e=0 z=0  None .text      nodeCallBack__FP8J3DJointi                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void nodeCallBack(J3DJoint* param_0, int param_1) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_inko/d_a_npc_inko/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop


/* 80A0CBB0-80A0CC18 0068+00 s=1 e=0 z=0  None .text      daNpc_Inko_Draw__FP14npc_inko_class                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daNpc_Inko_Draw(npc_inko_class* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_inko/d_a_npc_inko/daNpc_Inko_Draw__FP14npc_inko_class.s"
}
#pragma pop


/* ############################################################################################## */
/* 80A0E014-80A0E018 0004+00 s=3 e=0 z=0  None .rodata    @3849                                                        */
SECTION_RODATA static u8 const lit_3849[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80A0E018-80A0E01C 0004+00 s=2 e=0 z=0  None .rodata    @3850                                                        */
SECTION_RODATA static u32 const lit_3850 = 0xBF800000;

/* 80A0E01C-80A0E020 0004+00 s=1 e=0 z=0  None .rodata    @4329                                                        */
SECTION_RODATA static u32 const lit_4329 = 0xC29C0000;

/* 80A0E020-80A0E024 0004+00 s=1 e=0 z=0  None .rodata    @4330                                                        */
SECTION_RODATA static u32 const lit_4330 = 0xC0A00000;

/* 80A0E024-80A0E028 0004+00 s=1 e=0 z=0  None .rodata    @4331                                                        */
SECTION_RODATA static u32 const lit_4331 = 0x42200000;

/* 80A0E028-80A0E02C 0004+00 s=1 e=0 z=0  None .rodata    @4332                                                        */
SECTION_RODATA static u32 const lit_4332 = 0x41F00000;

/* 80A0E02C-80A0E030 0004+00 s=1 e=0 z=0  None .rodata    @4333                                                        */
SECTION_RODATA static u32 const lit_4333 = 0x428C0000;

/* 80A0E030-80A0E034 0004+00 s=1 e=0 z=0  None .rodata    @4334                                                        */
SECTION_RODATA static u32 const lit_4334 = 0x41200000;

/* 80A0E034-80A0E038 0004+00 s=2 e=0 z=0  None .rodata    @4335                                                        */
SECTION_RODATA static u32 const lit_4335 = 0x3F800000;

/* 80A0E038-80A0E03C 0004+00 s=1 e=0 z=0  None .rodata    @4336                                                        */
SECTION_RODATA static u32 const lit_4336 = 0x3FC00000;

/* 80A0E03C-80A0E040 0004+00 s=1 e=0 z=0  None .rodata    @4337                                                        */
SECTION_RODATA static u32 const lit_4337 = 0x40000000;

/* 80A0E040-80A0E044 0004+00 s=1 e=0 z=0  None .rodata    @4338                                                        */
SECTION_RODATA static u32 const lit_4338 = 0x44A28000;

/* 80A0E044-80A0E048 0004+00 s=1 e=0 z=0  None .rodata    @4339                                                        */
SECTION_RODATA static u32 const lit_4339 = 0x447A0000;

/* 80A0E048-80A0E04C 0004+00 s=1 e=0 z=0  None .rodata    @4340                                                        */
SECTION_RODATA static u32 const lit_4340 = 0x3E99999A;

/* 80A0E04C-80A0E050 0004+00 s=1 e=0 z=0  None .rodata    @4341                                                        */
SECTION_RODATA static u32 const lit_4341 = 0x3F99999A;

/* 80A0E050-80A0E054 0004+00 s=1 e=0 z=0  None .rodata    @4342                                                        */
SECTION_RODATA static u32 const lit_4342 = 0x40400000;

/* 80A0E054-80A0E058 0004+00 s=1 e=0 z=0  None .rodata    @4343                                                        */
SECTION_RODATA static u32 const lit_4343 = 0x42C80000;

/* 80A0E058-80A0E05C 0004+00 s=1 e=0 z=0  None .rodata    @4344                                                        */
SECTION_RODATA static u32 const lit_4344 = 0x45DAC000;

/* 80A0E05C-80A0E060 0004+00 s=1 e=0 z=0  None .rodata    @4345                                                        */
SECTION_RODATA static u32 const lit_4345 = 0x3F000000;

/* 80A0E060-80A0E064 0004+00 s=1 e=0 z=0  None .rodata    @4346                                                        */
SECTION_RODATA static u32 const lit_4346 = 0x41000000;

/* 80A0E064-80A0E068 0004+00 s=1 e=0 z=0  None .rodata    @4347                                                        */
SECTION_RODATA static u32 const lit_4347 = 0x42240000;

/* 80A0E068-80A0E06C 0004+00 s=1 e=0 z=0  None .rodata    @4348                                                        */
SECTION_RODATA static u32 const lit_4348 = 0x41600000;

/* 80A0E06C-80A0E070 0004+00 s=1 e=0 z=0  None .rodata    @4349                                                        */
SECTION_RODATA static u32 const lit_4349 = 0x3C23D70A;

/* 80A0E070-80A0E074 0004+00 s=1 e=0 z=0  None .rodata    @4350                                                        */
SECTION_RODATA static u32 const lit_4350 = 0x41A00000;

/* 80A0E074-80A0E078 0004+00 s=2 e=0 z=0  None .rodata    @4351                                                        */
SECTION_RODATA static u32 const lit_4351 = 0x43480000;

/* 80A0E078-80A0E07C 0004+00 s=1 e=0 z=0  None .rodata    @4352                                                        */
SECTION_RODATA static u32 const lit_4352 = 0x47000000;

/* 80A0E07C-80A0E080 0004+00 s=1 e=0 z=0  None .rodata    @4353                                                        */
SECTION_RODATA static u32 const lit_4353 = 0x3F4CCCCD;

/* 80A0E080-80A0E084 0004+00 s=1 e=0 z=0  None .rodata    @4354                                                        */
SECTION_RODATA static u32 const lit_4354 = 0x40A00000;

/* 80A0E084-80A0E08C 0008+00 s=1 e=0 z=0  None .rodata    @4355                                                        */
SECTION_RODATA static u8 const lit_4355[8] = {
	0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80A0E08C-80A0E094 0008+00 s=1 e=0 z=0  None .rodata    @4356                                                        */
SECTION_RODATA static u8 const lit_4356[8] = {
	0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80A0E094-80A0E09C 0008+00 s=1 e=0 z=0  None .rodata    @4357                                                        */
SECTION_RODATA static u8 const lit_4357[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80A0E09C-80A0E0A0 0004+00 s=1 e=0 z=0  None .rodata    @4358                                                        */
SECTION_RODATA static u32 const lit_4358 = 0x3DCCCCCD;

/* 80A0E0A0-80A0E0A4 0004+00 s=1 e=0 z=0  None .rodata    @4359                                                        */
SECTION_RODATA static u32 const lit_4359 = 0x43960000;

/* 80A0E0A4-80A0E0A8 0004+00 s=1 e=0 z=0  None .rodata    @4360                                                        */
SECTION_RODATA static u32 const lit_4360 = 0x3F666666;

/* 80A0E0A8-80A0E0AC 0004+00 s=1 e=0 z=0  None .rodata    @4361                                                        */
SECTION_RODATA static u32 const lit_4361 = 0x40200000;

/* 80A0E0AC-80A0E0B0 0004+00 s=1 e=0 z=0  None .rodata    @4362                                                        */
SECTION_RODATA static u32 const lit_4362 = 0x453B8000;

/* 80A0E0B0-80A0E0B4 0004+00 s=1 e=0 z=0  None .rodata    @4363                                                        */
SECTION_RODATA static u32 const lit_4363 = 0x42B40000;

/* 80A0E0B4-80A0E0B8 0004+00 s=1 e=0 z=0  None .rodata    @4364                                                        */
SECTION_RODATA static u32 const lit_4364 = 0x43FA0000;

/* 80A0E0B8-80A0E0BC 0004+00 s=1 e=0 z=0  None .rodata    @4365                                                        */
SECTION_RODATA static u32 const lit_4365 = 0xC0000000;

/* 80A0E0BC-80A0E0C0 0004+00 s=1 e=0 z=0  None .rodata    @4366                                                        */
SECTION_RODATA static u32 const lit_4366 = 0x46B3B000;

/* 80A0E0C0-80A0E0C4 0004+00 s=1 e=0 z=0  None .rodata    @4367                                                        */
SECTION_RODATA static u32 const lit_4367 = 0x43160000;

/* 80A0E0C4-80A0E0C8 0004+00 s=1 e=0 z=0  None .rodata    @4461                                                        */
SECTION_RODATA static u32 const lit_4461 = 0x47800000;

/* 80A0E0C8-80A0E0CC 0004+00 s=1 e=0 z=0  None .rodata    @4462                                                        */
SECTION_RODATA static u32 const lit_4462 = 0xC3480000;

/* 80A0E0CC-80A0E0D5 0009+00 s=4 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80A0E0CC = "Npc_inko";
#pragma pop

/* 80A0CC18-80A0CCC8 00B0+00 s=1 e=0 z=0  None .text      anm_init__FP14npc_inko_classifUcf                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void anm_init(npc_inko_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_inko/d_a_npc_inko/anm_init__FP14npc_inko_classifUcf.s"
}
#pragma pop


/* ############################################################################################## */
/* 80A0E0D8-80A0E0E8 0010+00 s=1 e=0 z=0  None .data      mes_0$3966                                                   */
SECTION_DATA static u8 mes_0[16] = {
	0x00, 0x00, 0x03, 0x57, 0x00, 0x00, 0x03, 0x58, 0x00, 0x00, 0x03, 0x59, 0x00, 0x00, 0x03, 0x5A,
};

/* 80A0E0E8-80A0E0F8 0010+00 s=1 e=0 z=0  None .data      mes_1$3967                                                   */
SECTION_DATA static u8 mes_1[16] = {
	0x00, 0x00, 0x03, 0x5B, 0x00, 0x00, 0x03, 0x5C, 0x00, 0x00, 0x03, 0x5D, 0x00, 0x00, 0x03, 0x5E,
};

/* 80A0CCC8-80A0DD70 10A8+00 s=2 e=0 z=0  None .text      daNpc_Inko_Execute__FP14npc_inko_class                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daNpc_Inko_Execute(npc_inko_class* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_inko/d_a_npc_inko/daNpc_Inko_Execute__FP14npc_inko_class.s"
}
#pragma pop


/* 80A0DD70-80A0DD78 0008+00 s=1 e=0 z=0  None .text      daNpc_Inko_IsDelete__FP14npc_inko_class                      */
static bool daNpc_Inko_IsDelete(npc_inko_class* param_0) {
	return true;
}


/* 80A0DD78-80A0DDC8 0050+00 s=1 e=0 z=0  None .text      daNpc_Inko_Delete__FP14npc_inko_class                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daNpc_Inko_Delete(npc_inko_class* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_inko/d_a_npc_inko/daNpc_Inko_Delete__FP14npc_inko_class.s"
}
#pragma pop


/* 80A0DDC8-80A0DF08 0140+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_inko/d_a_npc_inko/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80A0DF08-80A0E00C 0104+00 s=1 e=0 z=0  None .text      daNpc_Inko_Create__FP10fopAc_ac_c                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daNpc_Inko_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_inko/d_a_npc_inko/daNpc_Inko_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80A0E0F8-80A0E118 0020+00 s=1 e=0 z=0  None .data      l_daNpc_Inko_Method                                          */
SECTION_DATA static void* l_daNpc_Inko_Method[8] = {
	(void*)daNpc_Inko_Create__FP10fopAc_ac_c,
	(void*)daNpc_Inko_Delete__FP14npc_inko_class,
	(void*)daNpc_Inko_Execute__FP14npc_inko_class,
	(void*)daNpc_Inko_IsDelete__FP14npc_inko_class,
	(void*)daNpc_Inko_Draw__FP14npc_inko_class,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80A0E118-80A0E148 0030+00 s=0 e=0 z=1  None .data      g_profile_NPC_INKO                                           */
SECTION_DATA void* g_profile_NPC_INKO[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0008FFFD,
	(void*)0x02FF0000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000648,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02C00000,
	(void*)&l_daNpc_Inko_Method,
	(void*)0x00040100,
	(void*)0x000E0000,
};

