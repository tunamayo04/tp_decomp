// 
// Generated By: dol2asm
// Translation Unit: d_a_e_is
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_is/d_a_e_is.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoMtx_stack_c {
	/* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct mDoExt_McaMorfCallBack2_c {
};

struct J3DAnmTransform {
};

struct J3DModelData {
};

struct mDoExt_McaMorfCallBack1_c {
};

struct Z2Creature {
};

struct mDoExt_McaMorfSO {
	/* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*, mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int, int, Z2Creature*, u32, u32);
	/* 80010E70 */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32);
	/* 800110B0 */ void play(u32, s8);
	/* 800111C0 */ void entryDL();
	/* 800111EC */ void modelCalc();
	/* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
};

struct e_is_class {
	/* 806F76B4 */ e_is_class();
};

struct daE_IS_HIO_c {
	/* 806F5A4C */ daE_IS_HIO_c();
	/* 806F7AC4 */ ~daE_IS_HIO_c();
};

struct Vec {
};

struct cXyz {
	/* 80266AE4 */ void operator+(Vec const&) const;
	/* 80266B84 */ void operator*(f32) const;
};

struct dVibration_c {
	/* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
	/* 80035200 */ void onSwitch(int, int);
	/* 80035360 */ void isSwitch(int, int) const;
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

struct dPa_levelEcallBack {
};

struct csXyz {
};

struct _GXColor {
};

struct dPa_control_c {
	/* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*, cXyz const*, f32);
};

struct dCcU_AtInfo {
};

struct dCcD_Stts {
	/* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {
};

struct dCcD_SrcCyl {
};

struct dCcD_Sph {
	/* 80084A34 */ void Set(dCcD_SrcSph const&);
	/* 80084A78 */ void StartCAt(cXyz&);
	/* 80084AC4 */ void MoveCAt(cXyz&);
};

struct dCcD_GStts {
	/* 80083760 */ dCcD_GStts();
	/* 80083830 */ void Move();
	/* 806F7940 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ dCcD_GObjInf();
	/* 80084460 */ void ChkTgHit();
	/* 800844F8 */ void GetTgHitObj();
};

struct dCcD_Cyl {
	/* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_PolyPassChk {
	/* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
	/* 806F799C */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
	/* 80075EAC */ dBgS_AcchCir();
	/* 80075F58 */ void SetWall(f32, f32);
	/* 806F7A0C */ ~dBgS_AcchCir();
};

struct dBgS {
};

struct dBgS_Acch {
	/* 80075F94 */ ~dBgS_Acch();
	/* 800760A0 */ dBgS_Acch();
	/* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
	/* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
	/* 8026F648 */ void SetC(cXyz const&);
	/* 8026F708 */ void SetR(f32);
	/* 806F78B0 */ ~cM3dGSph();
};

struct cM3dGCyl {
	/* 8026F1DC */ void SetC(cXyz const&);
	/* 8026F200 */ void SetR(f32);
	/* 806F7868 */ ~cM3dGCyl();
};

struct cM3dGCir {
	/* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
	/* 806F78F8 */ ~cM3dGAab();
};

struct cCcD_Obj {
};

struct cCcS {
	/* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
	/* 806F7A7C */ ~cCcD_GStts();
};

struct cBgS_PolyInfo {
	/* 802680B0 */ ~cBgS_PolyInfo();
};

struct _GXTexObj {
};

struct Z2CreatureEnemy {
	/* 802C0F64 */ Z2CreatureEnemy();
	/* 802C1094 */ void init(Vec*, Vec*, u8, u8);
};

struct J3DModel {
};

struct J3DFrameCtrl {
	/* 8032842C */ void checkPass(f32);
};

// 
// Forward References:
// 

static void anm_init(e_is_class*, int, f32, u8, f32);
static void daE_IS_Draw(e_is_class*);
static void pl_check(e_is_class*, f32, s16);
static void s_stop_sub(void*, void*);
static void damage_check(e_is_class*);
static void e_is_wait(e_is_class*);
static void e_is_move(e_is_class*);
static void e_is_attack(e_is_class*);
static void e_is_trap(e_is_class*);
static void e_is_poweroff(e_is_class*);
static void e_is_damage(e_is_class*);
static void e_is_break(e_is_class*);
static void e_is_sekizou(e_is_class*);
static void action(e_is_class*);
static void anm_se_set(e_is_class*);
static void daE_IS_Execute(e_is_class*);
static bool daE_IS_IsDelete(e_is_class*);
static void daE_IS_Delete(e_is_class*);
static void useHeapInit(fopAc_ac_c*);
static void daE_IS_Create(fopAc_ac_c*);
extern "C" extern u32 const lit_3967;
extern "C" extern u32 const lit_3969;
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_E_IS[12];

extern "C" void __ct__12daE_IS_HIO_cFv();
extern "C" static void anm_init__FP10e_is_classifUcf();
extern "C" static void daE_IS_Draw__FP10e_is_class();
extern "C" static void pl_check__FP10e_is_classfs();
extern "C" static void s_stop_sub__FPvPv();
extern "C" static void damage_check__FP10e_is_class();
extern "C" static void e_is_wait__FP10e_is_class();
extern "C" static void e_is_move__FP10e_is_class();
extern "C" static void e_is_attack__FP10e_is_class();
extern "C" static void e_is_trap__FP10e_is_class();
extern "C" static void e_is_poweroff__FP10e_is_class();
extern "C" static void e_is_damage__FP10e_is_class();
extern "C" static void e_is_break__FP10e_is_class();
extern "C" static void e_is_sekizou__FP10e_is_class();
extern "C" static void action__FP10e_is_class();
extern "C" static void anm_se_set__FP10e_is_class();
extern "C" static void daE_IS_Execute__FP10e_is_class();
extern "C" static bool daE_IS_IsDelete__FP10e_is_class();
extern "C" static void daE_IS_Delete__FP10e_is_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_IS_Create__FP10fopAc_ac_c();
extern "C" void __ct__10e_is_classFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daE_IS_HIO_cFv();
extern "C" void __sinit_d_a_e_is_cpp();
extern "C" static void func_806F7B48();
extern "C" static void func_806F7B50();
extern "C" extern u32 const lit_3967;
extern "C" extern u32 const lit_3969;
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_E_IS[12];

// 
// External References:
// 

void mDoMtx_YrotS(f32 (* )[4], s16);
void mDoMtx_YrotM(f32 (* )[4], s16);
void fopAc_IsActor(void*);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_searchActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_searchActorDistance(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_createDisappear(fopAc_ac_c const*, cXyz const*, u8, u8, u8);
void fopAcM_otherBgCheck(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_plAngleCheck(fopAc_ac_c const*, s16);
void fopAcM_setEffectMtx(fopAc_ac_c const*, J3DModelData const*);
void fpcEx_Search(void* (*)(void*, void*), void*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dComIfGd_setShadow(u32, s8, J3DModel*, cXyz*, f32, f32, f32, f32, cBgS_PolyInfo&, dKy_tevstr_c*, s16, f32, _GXTexObj*);
void def_se_set(Z2Creature*, cCcD_Obj*, u32, fopAc_ac_c*);
void cc_at_check(fopAc_ac_c*, dCcU_AtInfo*);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_addCalc0(f32*, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void MtxPosition(cXyz*, cXyz*);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void __ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_otherBgCheck__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_plAngleCheck__FPC10fopAc_ac_cs();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void StartCAt__8dCcD_SphFR4cXyz();
extern "C" void MoveCAt__8dCcD_SphFR4cXyz();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
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
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 806F7B6C-806F7B70 0004+00 s=14 e=0 z=0  None .rodata    @3648                                                        */
SECTION_RODATA static u32 const lit_3648 = 0x3F800000;

/* 806F7B70-806F7B74 0004+00 s=1 e=0 z=0  None .rodata    @3649                                                        */
SECTION_RODATA static u32 const lit_3649 = 0x40E00000;

/* 806F7B74-806F7B78 0004+00 s=1 e=0 z=0  None .rodata    @3650                                                        */
SECTION_RODATA static u32 const lit_3650 = 0x43960000;

/* 806F7B78-806F7B7C 0004+00 s=2 e=0 z=0  None .rodata    @3651                                                        */
SECTION_RODATA static u32 const lit_3651 = 0x43480000;

/* 806F7B7C-806F7B80 0004+00 s=1 e=0 z=0  None .rodata    @3652                                                        */
SECTION_RODATA static u32 const lit_3652 = 0x42F00000;

/* 806F7C1C-806F7C28 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 806F7C28-806F7C3C 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 806F7C3C-806F7C7C 0040+00 s=1 e=0 z=0  None .data      at_sph_src$4258                                              */
SECTION_DATA static u8 at_sph_src[64] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
};

/* 806F7C7C-806F7CC0 0044+00 s=1 e=0 z=0  None .data      cc_cyl_src$4259                                              */
SECTION_DATA static u8 cc_cyl_src[68] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00,
	0x43, 0x7A, 0x00, 0x00,
};

/* 806F7CC0-806F7D00 0040+00 s=1 e=0 z=0  None .data      core_sph_src$4260                                            */
SECTION_DATA static u8 core_sph_src[64] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xD8, 0xFB, 0xFD, 0xFD, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 806F7D00-806F7D20 0020+00 s=1 e=0 z=0  None .data      l_daE_IS_Method                                              */
SECTION_DATA static void* l_daE_IS_Method[8] = {
	(void*)daE_IS_Create__FP10fopAc_ac_c,
	(void*)daE_IS_Delete__FP10e_is_class,
	(void*)daE_IS_Execute__FP10e_is_class,
	(void*)daE_IS_IsDelete__FP10e_is_class,
	(void*)daE_IS_Draw__FP10e_is_class,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 806F7D20-806F7D50 0030+00 s=0 e=0 z=1  None .data      g_profile_E_IS                                               */
SECTION_DATA void* g_profile_E_IS[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x01EE0000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000CF8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x00B80000,
	(void*)&l_daE_IS_Method,
	(void*)0x00040100,
	(void*)0x020E0000,
};

/* 806F7D50-806F7D5C 000C+00 s=1 e=0 z=0  None .data      __vt__12dBgS_AcchCir                                         */
SECTION_DATA static void* __vt__12dBgS_AcchCir[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12dBgS_AcchCirFv,
};

/* 806F7D5C-806F7D68 000C+00 s=2 e=0 z=0  None .data      __vt__10cCcD_GStts                                           */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__10cCcD_GSttsFv,
};

/* 806F7D68-806F7D74 000C+00 s=1 e=0 z=0  None .data      __vt__10dCcD_GStts                                           */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__10dCcD_GSttsFv,
};

/* 806F7D74-806F7D80 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl                                              */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGCylFv,
};

/* 806F7D80-806F7D8C 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph                                              */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGSphFv,
};

/* 806F7D8C-806F7D98 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 806F7D98-806F7DBC 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch                                         */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12dBgS_ObjAcchFv,
	(void*)NULL,
	(void*)NULL,
	(void*)func_806F7B50,
	(void*)NULL,
	(void*)NULL,
	(void*)func_806F7B48,
};

/* 806F7DBC-806F7DC8 000C+00 s=2 e=0 z=0  None .data      __vt__12daE_IS_HIO_c                                         */
SECTION_DATA static void* __vt__12daE_IS_HIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12daE_IS_HIO_cFv,
};

/* 806F5A4C-806F5A94 0048+00 s=1 e=0 z=0  None .text      __ct__12daE_IS_HIO_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_IS_HIO_c::daE_IS_HIO_c() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/__ct__12daE_IS_HIO_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 806F7B80-806F7B84 0004+00 s=13 e=0 z=0  None .rodata    @3666                                                        */
SECTION_RODATA static u8 const lit_3666[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 806F7B84-806F7B88 0004+00 s=1 e=0 z=0  None .rodata    @3667                                                        */
SECTION_RODATA static u32 const lit_3667 = 0xBF800000;

/* 806F7B88-806F7B8C 0004+00 s=1 e=0 z=0  None .rodata    @3710                                                        */
SECTION_RODATA static u32 const lit_3710 = 0x43720000;

/* 806F7B8C-806F7B90 0004+00 s=1 e=0 z=0  None .rodata    @3711                                                        */
SECTION_RODATA static u32 const lit_3711 = 0x42EA0000;

/* 806F7B90-806F7B94 0004+00 s=1 e=0 z=0  None .rodata    @3712                                                        */
SECTION_RODATA static u32 const lit_3712 = 0x437F0000;

/* 806F7B94-806F7B98 0004+00 s=2 e=0 z=0  None .rodata    @3713                                                        */
SECTION_RODATA static u32 const lit_3713 = 0x42A00000;

/* 806F7B98-806F7B9C 0004+00 s=6 e=0 z=0  None .rodata    @3714                                                        */
SECTION_RODATA static u32 const lit_3714 = 0x41200000;

/* 806F7B9C-806F7BA0 0004+00 s=1 e=0 z=0  None .rodata    @3715                                                        */
SECTION_RODATA static u32 const lit_3715 = 0x425C0000;

/* 806F7BA0-806F7BA4 0004+00 s=1 e=0 z=0  None .rodata    @3716                                                        */
SECTION_RODATA static u32 const lit_3716 = 0x42700000;

/* 806F7BA4-806F7BA8 0004+00 s=1 e=0 z=0  None .rodata    @3717                                                        */
SECTION_RODATA static u32 const lit_3717 = 0x43610000;

/* 806F7BA8-806F7BAC 0004+00 s=2 e=0 z=0  None .rodata    @3718                                                        */
SECTION_RODATA static u32 const lit_3718 = 0x43160000;

/* 806F7BAC-806F7BB0 0004+00 s=4 e=0 z=0  None .rodata    @3719                                                        */
SECTION_RODATA static u32 const lit_3719 = 0x42480000;

/* 806F7BB0-806F7BB4 0004+00 s=1 e=0 z=0  None .rodata    @3720                                                        */
SECTION_RODATA static u32 const lit_3720 = 0x44160000;

/* 806F7BB4-806F7BB8 0004+00 s=1 e=0 z=0  None .rodata    @3917                                                        */
SECTION_RODATA static u32 const lit_3917 = 0x47C35000;

/* 806F7BB8-806F7BBC 0004+00 s=2 e=0 z=0  None .rodata    @3965                                                        */
SECTION_RODATA static u32 const lit_3965 = 0x41A00000;

/* 806F7BBC-806F7BC0 0004+00 s=3 e=0 z=0  None .rodata    @3966                                                        */
SECTION_RODATA static u32 const lit_3966 = 0x40000000;

/* 806F7BC0-806F7BC4 0004+00 s=0 e=0 z=0  None .rodata    @3967                                                        */
SECTION_RODATA u32 const lit_3967 = 0x41E80000;

/* 806F7BC4-806F7BC8 0004+00 s=1 e=0 z=0  None .rodata    @3968                                                        */
SECTION_RODATA static u32 const lit_3968 = 0x3F000000;

/* 806F7BC8-806F7BCC 0004+00 s=0 e=0 z=0  None .rodata    @3969                                                        */
SECTION_RODATA u32 const lit_3969 = 0x40400000;

/* 806F7BCC-806F7BD0 0004+00 s=1 e=0 z=0  None .rodata    @3970                                                        */
SECTION_RODATA static u32 const lit_3970 = 0xC4820000;

/* 806F7BD0-806F7BD4 0004+00 s=1 e=0 z=0  None .rodata    @4007                                                        */
SECTION_RODATA static u32 const lit_4007 = 0x3C23D70A;

/* 806F7BD4-806F7BD8 0004+00 s=2 e=0 z=0  None .rodata    @4031                                                        */
SECTION_RODATA static u32 const lit_4031 = 0x40A00000;

/* 806F7BD8-806F7BDC 0004+00 s=1 e=0 z=0  None .rodata    @4102                                                        */
SECTION_RODATA static u32 const lit_4102 = 0x447A0000;

/* 806F7BDC-806F7BE0 0004+00 s=1 e=0 z=0  None .rodata    @4120                                                        */
SECTION_RODATA static u32 const lit_4120 = 0x421C0000;

/* 806F7BE0-806F7BE4 0004+00 s=1 e=0 z=0  None .rodata    @4121                                                        */
SECTION_RODATA static u32 const lit_4121 = 0x41980000;

/* 806F7BE4-806F7BE8 0004+00 s=1 e=0 z=0  None .rodata    @4205                                                        */
SECTION_RODATA static u32 const lit_4205 = 0x3CA3D70A;

/* 806F7BE8-806F7BEC 0004+00 s=1 e=0 z=0  None .rodata    @4206                                                        */
SECTION_RODATA static u32 const lit_4206 = 0x42C80000;

/* 806F7BEC-806F7BF0 0004+00 s=1 e=0 z=0  None .rodata    @4207                                                        */
SECTION_RODATA static u32 const lit_4207 = 0x469C4000;

/* 806F7BF0-806F7BF4 0004+00 s=1 e=0 z=0  None .rodata    @4208                                                        */
SECTION_RODATA static u32 const lit_4208 = 0xC6EA6000;

/* 806F7BF4-806F7BF8 0004+00 s=1 e=0 z=0  None .rodata    @4209                                                        */
SECTION_RODATA static u32 const lit_4209 = 0x466A6000;

/* 806F7BF8-806F7BFC 0004+00 s=1 e=0 z=0  None .rodata    @4210                                                        */
SECTION_RODATA static u32 const lit_4210 = 0x41F00000;

/* 806F7BFC-806F7C00 0004+00 s=1 e=0 z=0  None .rodata    @4211                                                        */
SECTION_RODATA static u32 const lit_4211 = 0x466FD800;

/* 806F7C00-806F7C04 0004+00 s=1 e=0 z=0  None .rodata    @4332                                                        */
SECTION_RODATA static u32 const lit_4332 = 0xC3FA0000;

/* 806F7C04-806F7C08 0004+00 s=1 e=0 z=0  None .rodata    @4333                                                        */
SECTION_RODATA static u32 const lit_4333 = 0xC3480000;

/* 806F7C08-806F7C0C 0004+00 s=1 e=0 z=0  None .rodata    @4334                                                        */
SECTION_RODATA static u32 const lit_4334 = 0x43FA0000;

/* 806F7C0C-806F7C10 0004+00 s=1 e=0 z=0  None .rodata    @4335                                                        */
SECTION_RODATA static u32 const lit_4335 = 0xC0E00000;

/* 806F7C10-806F7C14 0004+00 s=1 e=0 z=0  None .rodata    @4336                                                        */
SECTION_RODATA static u32 const lit_4336 = 0x45642000;

/* 806F7C14-806F7C19 0005+00 s=4 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_806F7C14 = "E_IS";
#pragma pop

/* 806F5A94-806F5B40 00AC+00 s=7 e=0 z=0  None .text      anm_init__FP10e_is_classifUcf                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void anm_init(e_is_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/anm_init__FP10e_is_classifUcf.s"
}
#pragma pop


/* 806F5B40-806F5E38 02F8+00 s=1 e=0 z=0  None .text      daE_IS_Draw__FP10e_is_class                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_IS_Draw(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/daE_IS_Draw__FP10e_is_class.s"
}
#pragma pop


/* 806F5E38-806F5EB4 007C+00 s=2 e=0 z=0  None .text      pl_check__FP10e_is_classfs                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void pl_check(e_is_class* param_0, f32 param_1, s16 param_2) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/pl_check__FP10e_is_classfs.s"
}
#pragma pop


/* 806F5EB4-806F5F3C 0088+00 s=1 e=0 z=0  None .text      s_stop_sub__FPvPv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void s_stop_sub(void* param_0, void* param_1) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/s_stop_sub__FPvPv.s"
}
#pragma pop


/* 806F5F3C-806F6134 01F8+00 s=1 e=0 z=0  None .text      damage_check__FP10e_is_class                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void damage_check(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/damage_check__FP10e_is_class.s"
}
#pragma pop


/* 806F6134-806F6320 01EC+00 s=1 e=0 z=0  None .text      e_is_wait__FP10e_is_class                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_is_wait(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/e_is_wait__FP10e_is_class.s"
}
#pragma pop


/* ############################################################################################## */
/* 806F7DD0-806F7DD4 0004+00 s=2 e=0 z=0  None .bss       None                                                         */
static u8 data_806F7DD0[4];

/* 806F7DD4-806F7DE0 000C+00 s=1 e=0 z=0  None .bss       @3643                                                        */
static u8 lit_3643[12];

/* 806F7DE0-806F7DFC 001C+00 s=4 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[28];

/* 806F6320-806F63FC 00DC+00 s=1 e=0 z=0  None .text      e_is_move__FP10e_is_class                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_is_move(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/e_is_move__FP10e_is_class.s"
}
#pragma pop


/* 806F63FC-806F65BC 01C0+00 s=1 e=0 z=0  None .text      e_is_attack__FP10e_is_class                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_is_attack(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/e_is_attack__FP10e_is_class.s"
}
#pragma pop


/* 806F65BC-806F67B0 01F4+00 s=1 e=0 z=0  None .text      e_is_trap__FP10e_is_class                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_is_trap(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/e_is_trap__FP10e_is_class.s"
}
#pragma pop


/* 806F67B0-806F691C 016C+00 s=1 e=0 z=0  None .text      e_is_poweroff__FP10e_is_class                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_is_poweroff(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/e_is_poweroff__FP10e_is_class.s"
}
#pragma pop


/* 806F691C-806F6A38 011C+00 s=1 e=0 z=0  None .text      e_is_damage__FP10e_is_class                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_is_damage(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/e_is_damage__FP10e_is_class.s"
}
#pragma pop


/* 806F6A38-806F6B68 0130+00 s=1 e=0 z=0  None .text      e_is_break__FP10e_is_class                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_is_break(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/e_is_break__FP10e_is_class.s"
}
#pragma pop


/* 806F6B68-806F6B7C 0014+00 s=1 e=0 z=0  None .text      e_is_sekizou__FP10e_is_class                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_is_sekizou(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/e_is_sekizou__FP10e_is_class.s"
}
#pragma pop


/* 806F6B7C-806F6D90 0214+00 s=1 e=0 z=0  None .text      action__FP10e_is_class                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void action(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/action__FP10e_is_class.s"
}
#pragma pop


/* 806F6D90-806F6E58 00C8+00 s=1 e=0 z=0  None .text      anm_se_set__FP10e_is_class                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void anm_se_set(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/anm_se_set__FP10e_is_class.s"
}
#pragma pop


/* 806F6E58-806F7204 03AC+00 s=2 e=0 z=0  None .text      daE_IS_Execute__FP10e_is_class                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_IS_Execute(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/daE_IS_Execute__FP10e_is_class.s"
}
#pragma pop


/* 806F7204-806F720C 0008+00 s=1 e=0 z=0  None .text      daE_IS_IsDelete__FP10e_is_class                              */
static bool daE_IS_IsDelete(e_is_class* param_0) {
	return true;
}


/* 806F720C-806F7274 0068+00 s=1 e=0 z=0  None .text      daE_IS_Delete__FP10e_is_class                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_IS_Delete(e_is_class* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/daE_IS_Delete__FP10e_is_class.s"
}
#pragma pop


/* 806F7274-806F736C 00F8+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop


/* 806F736C-806F76B4 0348+00 s=1 e=0 z=0  None .text      daE_IS_Create__FP10fopAc_ac_c                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_IS_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/daE_IS_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 806F76B4-806F7868 01B4+00 s=1 e=0 z=0  None .text      __ct__10e_is_classFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm e_is_class::e_is_class() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/__ct__10e_is_classFv.s"
}
#pragma pop


/* 806F7868-806F78B0 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/__dt__8cM3dGCylFv.s"
}
#pragma pop


/* 806F78B0-806F78F8 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/__dt__8cM3dGSphFv.s"
}
#pragma pop


/* 806F78F8-806F7940 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 806F7940-806F799C 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/__dt__10dCcD_GSttsFv.s"
}
#pragma pop


/* 806F799C-806F7A0C 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop


/* 806F7A0C-806F7A7C 0070+00 s=1 e=0 z=0  None .text      __dt__12dBgS_AcchCirFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop


/* 806F7A7C-806F7AC4 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/__dt__10cCcD_GSttsFv.s"
}
#pragma pop


/* 806F7AC4-806F7B0C 0048+00 s=2 e=0 z=0  None .text      __dt__12daE_IS_HIO_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_IS_HIO_c::~daE_IS_HIO_c() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/__dt__12daE_IS_HIO_cFv.s"
}
#pragma pop


/* 806F7B0C-806F7B48 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_e_is_cpp                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_e_is_cpp() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/__sinit_d_a_e_is_cpp.s"
}
#pragma pop


/* 806F7B48-806F7B50 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_806F7B48() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/func_806F7B48.s"
}
#pragma pop


/* 806F7B50-806F7B58 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_806F7B50() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_is/d_a_e_is/func_806F7B50.s"
}
#pragma pop


