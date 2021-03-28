// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv4chandelier
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct Vec {
};

struct cXyz {
	/* 80266AE4 */ void operator+(Vec const&) const;
	/* 80266B34 */ void operator-(Vec const&) const;
	/* 80266B84 */ void operator*(f32) const;
	/* 80266EF4 */ void normalize();
};

struct mDoMtx_stack_c {
	/* 8000CD64 */ void transS(cXyz const&);
	/* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct fopAc_ac_c {
};

struct daObjSwChain_c {
	/* 80C665A4 */ void checkTight();
};

struct dMdl_obj_c {
	/* 80C66558 */ dMdl_obj_c();
};

struct daObjLv4Chan_c {
	struct ChainPos {
		/* 80C66564 */ ~ChainPos();
		/* 80C665A0 */ ChainPos();
	};

	/* 80C63360 */ void create1st();
	/* 80C634CC */ void setMtxChain(daObjLv4Chan_c::ChainPos*, dMdl_obj_c*, int);
	/* 80C636B4 */ void setMtx();
	/* 80C639B4 */ void rideActor(fopAc_ac_c*);
	/* 80C63CFC */ void CreateHeap();
	/* 80C63FA8 */ void Create();
	/* 80C6449C */ void constraintChain(daObjLv4Chan_c::ChainPos*, int);
	/* 80C64668 */ void constraintBase();
	/* 80C647FC */ void calcVec(daObjLv4Chan_c::ChainPos*, int);
	/* 80C64878 */ void chkGnd();
	/* 80C648F4 */ void Execute(f32 (** )[3][4]);
	/* 80C65F04 */ void Draw();
	/* 80C66114 */ void Delete();
};

struct dVibration_c {
	/* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
	/* 80035200 */ void onSwitch(int, int);
};

struct dKy_tevstr_c {
};

struct J3DModelData {
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

struct dMdl_mng_c {
	/* 8009C8D8 */ void entry(J3DModelData*, u16, int);
};

struct dMdl_c {
	/* 8009C668 */ void entryObj(dMdl_obj_c*);
};

struct dCcD_Stts {
	/* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {
};

struct dCcD_Sph {
	/* 80084A34 */ void Set(dCcD_SrcSph const&);
	/* 80C662F4 */ ~dCcD_Sph();
	/* 80C663C0 */ dCcD_Sph();
};

struct dCcD_GStts {
	/* 80083760 */ dCcD_GStts();
	/* 80083830 */ void Move();
};

struct dCcD_GObjInf {
	/* 80083A28 */ dCcD_GObjInf();
	/* 800840E4 */ ~dCcD_GObjInf();
	/* 80084460 */ void ChkTgHit();
	/* 800844F8 */ void GetTgHitObj();
	/* 800845B0 */ void getHitSeID(u8, int);
};

struct dBgW {
};

struct dBgS_PolyPassChk {
	/* 80078E68 */ void SetObj();
};

struct dBgS_ObjGndChk {
	/* 80C6627C */ ~dBgS_ObjGndChk();
};

struct csXyz {
};

struct cBgS_PolyInfo {
};

struct dBgS_MoveBgActor {
	/* 80078624 */ dBgS_MoveBgActor();
	/* 800786B0 */ bool IsDelete();
	/* 800786B8 */ bool ToFore();
	/* 800786C0 */ bool ToBack();
	/* 800787BC */ void MoveBGCreate(char const*, int, void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*), u32, f32 (* )[3][4]);
	/* 800788DC */ void MoveBGDelete();
	/* 80078950 */ void MoveBGExecute();
};

struct dBgS_GndChk {
	/* 8007757C */ dBgS_GndChk();
	/* 800775F0 */ ~dBgS_GndChk();
};

struct cM3dGSph {
	/* 8026F648 */ void SetC(cXyz const&);
	/* 80C66444 */ ~cM3dGSph();
};

struct cM3dGAab {
	/* 80C6648C */ ~cM3dGAab();
};

struct cCcD_Obj {
	/* 80263A48 */ void GetAc();
};

struct cCcS {
	/* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_GndChk {
	/* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
	/* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

struct _GXTexObj {
};

struct JAISoundID {
};

struct Z2SeMgr {
	/* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
	/* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {
};

// 
// Forward References:
// 

static void rideCallBack(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
static void searchSwChain(void*, void*);
static void daObjLv4Chan_create1st(daObjLv4Chan_c*);
static void daObjLv4Chan_MoveBGDelete(daObjLv4Chan_c*);
static void daObjLv4Chan_MoveBGExecute(daObjLv4Chan_c*);
static void daObjLv4Chan_MoveBGDraw(daObjLv4Chan_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Lv4Chan[12];

extern "C" static void rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void create1st__14daObjLv4Chan_cFv();
extern "C" void setMtxChain__14daObjLv4Chan_cFPQ214daObjLv4Chan_c8ChainPosP10dMdl_obj_ci();
extern "C" void setMtx__14daObjLv4Chan_cFv();
extern "C" void rideActor__14daObjLv4Chan_cFP10fopAc_ac_c();
extern "C" void CreateHeap__14daObjLv4Chan_cFv();
extern "C" static void searchSwChain__FPvPv();
extern "C" void Create__14daObjLv4Chan_cFv();
extern "C" void constraintChain__14daObjLv4Chan_cFPQ214daObjLv4Chan_c8ChainPosi();
extern "C" void constraintBase__14daObjLv4Chan_cFv();
extern "C" void calcVec__14daObjLv4Chan_cFPQ214daObjLv4Chan_c8ChainPosi();
extern "C" void chkGnd__14daObjLv4Chan_cFv();
extern "C" void Execute__14daObjLv4Chan_cFPPA3_A4_f();
extern "C" void Draw__14daObjLv4Chan_cFv();
extern "C" void Delete__14daObjLv4Chan_cFv();
extern "C" static void daObjLv4Chan_create1st__FP14daObjLv4Chan_c();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" static void daObjLv4Chan_MoveBGDelete__FP14daObjLv4Chan_c();
extern "C" static void daObjLv4Chan_MoveBGExecute__FP14daObjLv4Chan_c();
extern "C" static void daObjLv4Chan_MoveBGDraw__FP14daObjLv4Chan_c();
extern "C" static void func_80C66540();
extern "C" static void func_80C66548();
extern "C" static void func_80C66550();
extern "C" void __ct__10dMdl_obj_cFv();
extern "C" void __dt__Q214daObjLv4Chan_c8ChainPosFv();
extern "C" void __ct__Q214daObjLv4Chan_c8ChainPosFv();
extern "C" void checkTight__14daObjSwChain_cFv();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Lv4Chan[12];

// 
// External References:
// 

void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoMtx_ZrotM(f32 (* )[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAc_IsActor(void*);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dComIfGd_setShadow(u32, s8, J3DModel*, cXyz*, f32, f32, f32, f32, cBgS_PolyInfo&, dKy_tevstr_c*, s16, f32, _GXTexObj*);
void dKyw_get_wind_vecpow();
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cM_rndF(f32);
void cM_rndFX(f32);
void cM3d_VectorProduct(cXyz const*, cXyz const*, cXyz const*, cXyz*);
void* operator new[](u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern f32 Zero__4cXyz[3];
extern "C" extern u8 BaseY__4cXyz[12];
extern "C" extern u8 BaseZ__4cXyz[12];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dKyw_get_wind_vecpow__Fv();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void getHitSeID__12dCcD_GObjInfFUci();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void entryObj__6dMdl_cFP10dMdl_obj_c();
extern "C" void entry__10dMdl_mng_cFP12J3DModelDataUsi();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void normalize__4cXyzFv();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void cM3d_VectorProduct__FPC4cXyzPC4cXyzPC4cXyzP4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nwa__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXIdentity();
extern "C" void PSMTXCopy();
extern "C" void PSMTXConcat();
extern "C" void PSMTXRotAxisRad();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECScale();
extern "C" void PSVECSquareMag();
extern "C" void PSVECDotProduct();
extern "C" void PSVECCrossProduct();
extern "C" void PSVECSquareDistance();
extern "C" void __construct_array();
extern "C" void __construct_new_array();
extern "C" void _savegpr_18();
extern "C" void _savegpr_21();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_18();
extern "C" void _restgpr_21();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" void acos();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern f32 Zero__4cXyz[3];
extern "C" extern u8 BaseY__4cXyz[12];
extern "C" extern u8 BaseZ__4cXyz[12];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* 80C63338-80C63360 0028+00 s=1 e=0 z=0  None .text      rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C66860-80C66868 0008+00 s=10 e=0 z=0  None .rodata    l_bmdidx                                                     */
SECTION_RODATA static u8 const l_bmdidx[8] = {
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
};

/* 80C66868-80C6686C 0004+00 s=4 e=0 z=0  None .rodata    @3767                                                        */
SECTION_RODATA static u32 const lit_3767 = 0xBF800000;

/* 80C6686C-80C66870 0004+00 s=6 e=0 z=0  None .rodata    @3768                                                        */
SECTION_RODATA static u32 const lit_3768 = 0x3F800000;

/* 80C66870-80C66874 0004+00 s=1 e=0 z=0  None .rodata    @3769                                                        */
SECTION_RODATA static u32 const lit_3769 = 0x3FC90FDB;

/* 80C66874-80C66878 0004+00 s=1 e=0 z=0  None .rodata    @3834                                                        */
SECTION_RODATA static u32 const lit_3834 = 0xC3160000;

/* 80C66878-80C6687C 0004+00 s=6 e=0 z=0  None .rodata    @3835                                                        */
SECTION_RODATA static u8 const lit_3835[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C6687C-80C66880 0004+00 s=2 e=0 z=0  None .rodata    @3836                                                        */
SECTION_RODATA static u32 const lit_3836 = 0x3EAAAAAB;

/* 80C66880-80C66884 0004+00 s=1 e=0 z=0  None .rodata    @3888                                                        */
SECTION_RODATA static u32 const lit_3888 = 0x3C23D70A;

/* 80C66884-80C66888 0004+00 s=1 e=0 z=0  None .rodata    @3889                                                        */
SECTION_RODATA static u32 const lit_3889 = 0x3DCCCCCD;

/* 80C66888-80C6688C 0004+00 s=1 e=0 z=0  None .rodata    @3890                                                        */
SECTION_RODATA static u32 const lit_3890 = 0x3BF5C28F;

/* 80C6688C-80C66890 0004+00 s=1 e=0 z=0  None .rodata    @3891                                                        */
SECTION_RODATA static u32 const lit_3891 = 0x3CCCCCCD;

/* 80C66890-80C66894 0004+00 s=2 e=0 z=0  None .rodata    @4080                                                        */
SECTION_RODATA static u32 const lit_4080 = 0xC3231EB8;

/* 80C66894-80C66898 0004+00 s=2 e=0 z=0  None .rodata    @4081                                                        */
SECTION_RODATA static u32 const lit_4081 = 0xC38D451F;

/* 80C66898-80C6689C 0004+00 s=2 e=0 z=0  None .rodata    @4082                                                        */
SECTION_RODATA static u32 const lit_4082 = 0x438D451F;

/* 80C6689C-80C668A0 0004+00 s=2 e=0 z=0  None .rodata    @4083                                                        */
SECTION_RODATA static u32 const lit_4083 = 0x43A32000;

/* 80C668A0-80C668A4 0004+00 s=4 e=0 z=0  None .rodata    @4084                                                        */
SECTION_RODATA static u32 const lit_4084 = 0x420C0000;

/* 80C668A4-80C668A8 0004+00 s=1 e=0 z=0  None .rodata    @4085                                                        */
SECTION_RODATA static u32 const lit_4085 = 0xC4480000;

/* 80C668A8-80C668AC 0004+00 s=1 e=0 z=0  None .rodata    @4086                                                        */
SECTION_RODATA static u32 const lit_4086 = 0x42200000;

/* 80C668AC-80C668B0 0004+00 s=1 e=0 z=0  None .rodata    @4087                                                        */
SECTION_RODATA static u32 const lit_4087 = 0x44D48000;

/* 80C668B0-80C668B4 0004+00 s=1 e=0 z=0  None .rodata    @4088                                                        */
SECTION_RODATA static u32 const lit_4088 = 0xC4160000;

/* 80C668B4-80C668B8 0004+00 s=1 e=0 z=0  None .rodata    @4089                                                        */
SECTION_RODATA static u32 const lit_4089 = 0x44480000;

/* 80C668B8-80C668BC 0004+00 s=2 e=0 z=0  None .rodata    @4090                                                        */
SECTION_RODATA static u32 const lit_4090 = 0x41200000;

/* 80C668BC-80C668C0 0004+00 s=1 e=0 z=0  None .rodata    @4091                                                        */
SECTION_RODATA static u32 const lit_4091 = 0x44160000;

/* 80C668C0-80C668C8 0008+00 s=3 e=0 z=0  None .rodata    @4093                                                        */
SECTION_RODATA static u8 const lit_4093[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80C668C8-80C668CC 0004+00 s=1 e=0 z=0  None .rodata    @4154                                                        */
SECTION_RODATA static u32 const lit_4154 = 0xBF350481;

/* 80C668CC-80C668D0 0004+00 s=1 e=0 z=0  None .rodata    @4155                                                        */
SECTION_RODATA static u32 const lit_4155 = 0x44992000;

/* 80C668D0-80C668DC 000C+00 s=1 e=0 z=0  None .rodata    l_pos0                                                       */
SECTION_RODATA static u8 const l_pos0[12] = {
	0xC3, 0x23, 0x1E, 0xB8, 0x43, 0x16, 0x00, 0x00, 0xC3, 0x8D, 0x45, 0x1F,
};

/* 80C668DC-80C668E8 000C+00 s=1 e=0 z=0  None .rodata    l_pos1                                                       */
SECTION_RODATA static u8 const l_pos1[12] = {
	0xC3, 0x23, 0x1E, 0xB8, 0x43, 0x16, 0x00, 0x00, 0x43, 0x8D, 0x45, 0x1F,
};

/* 80C668E8-80C668F4 000C+00 s=1 e=0 z=0  None .rodata    l_pos2                                                       */
SECTION_RODATA static u8 const l_pos2[12] = {
	0x43, 0xA3, 0x20, 0x00, 0x43, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C668F4-80C668F8 0004+00 s=2 e=0 z=0  None .rodata    @4190                                                        */
SECTION_RODATA static u32 const lit_4190 = 0x3F000000;

/* 80C668F8-80C668FC 0004+00 s=1 e=0 z=0  None .rodata    @4220                                                        */
SECTION_RODATA static u32 const lit_4220 = 0x43960000;

/* 80C668FC-80C66924 0028+00 s=1 e=0 z=0  None .rodata    l_curve                                                      */
SECTION_RODATA static u8 const l_curve[40] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02,
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04,
};

/* 80C66924-80C66928 0004+00 s=1 e=0 z=0  None .rodata    @4843                                                        */
SECTION_RODATA static u32 const lit_4843 = 0x3E000000;

/* 80C66928-80C6692C 0004+00 s=1 e=0 z=0  None .rodata    @4844                                                        */
SECTION_RODATA static u32 const lit_4844 = 0x3F333333;

/* 80C6692C-80C66930 0004+00 s=1 e=0 z=0  None .rodata    @4845                                                        */
SECTION_RODATA static u32 const lit_4845 = 0x40400000;

/* 80C66930-80C66934 0004+00 s=1 e=0 z=0  None .rodata    @4846                                                        */
SECTION_RODATA static u32 const lit_4846 = 0x3D4CCCCD;

/* 80C66934-80C66938 0004+00 s=2 e=0 z=0  None .rodata    @4847                                                        */
SECTION_RODATA static u32 const lit_4847 = 0x3ECCCCCD;

/* 80C66938-80C6693C 0004+00 s=1 e=0 z=0  None .rodata    @4848                                                        */
SECTION_RODATA static u32 const lit_4848 = 0x40C00000;

/* 80C6693C-80C66940 0004+00 s=1 e=0 z=0  None .rodata    @4849                                                        */
SECTION_RODATA static u32 const lit_4849 = 0x41700000;

/* 80C66940-80C66944 0004+00 s=1 e=0 z=0  None .rodata    @4850                                                        */
SECTION_RODATA static u32 const lit_4850 = 0xC0800000;

/* 80C66944-80C66948 0004+00 s=1 e=0 z=0  None .rodata    @4851                                                        */
SECTION_RODATA static u32 const lit_4851 = 0xBF5DB22D;

/* 80C66948-80C66950 0004+04 s=1 e=0 z=0  None .rodata    @4852                                                        */
SECTION_RODATA static u32 const lit_4852[1 + 1 /* padding */] = {
	0x3B449BA6,
	/* padding */
	0x00000000,
};

/* 80C66950-80C66958 0008+00 s=1 e=0 z=0  None .rodata    @4926                                                        */
SECTION_RODATA static u8 const lit_4926[8] = {
	0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C66958-80C66960 0008+00 s=1 e=0 z=0  None .rodata    @4927                                                        */
SECTION_RODATA static u8 const lit_4927[8] = {
	0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C66960-80C66968 0008+00 s=1 e=0 z=0  None .rodata    @4928                                                        */
SECTION_RODATA static u8 const lit_4928[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C66968-80C6696C 0004+00 s=1 e=0 z=0  None .rodata    @4982                                                        */
SECTION_RODATA static u32 const lit_4982 = 0xCE6E6B28;

/* 80C6696C-80C66970 0004+00 s=1 e=0 z=0  None .rodata    @4983                                                        */
SECTION_RODATA static u32 const lit_4983 = 0xBE4CCCCD;

/* 80C66970-80C66974 0004+00 s=1 e=0 z=0  None .rodata    @4984                                                        */
SECTION_RODATA static u32 const lit_4984 = 0x43FA0000;

/* 80C66974-80C66978 0004+00 s=1 e=0 z=0  None .rodata    @4985                                                        */
SECTION_RODATA static u32 const lit_4985 = 0x3E4CCCCD;

/* 80C66978-80C6697C 0004+00 s=1 e=0 z=0  None .rodata    @4986                                                        */
SECTION_RODATA static u32 const lit_4986 = 0x44FA0000;

/* 80C6697C-80C66980 0004+00 s=1 e=0 z=0  None .rodata    @4987                                                        */
SECTION_RODATA static u32 const lit_4987 = 0x44C80000;

/* 80C66980-80C66984 0004+00 s=1 e=0 z=0  None .rodata    @4988                                                        */
SECTION_RODATA static u32 const lit_4988 = 0x43200000;

/* 80C66984-80C6698E 000A+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C66984 = "P_Lv4Chan";
#pragma pop

/* 80C66990-80C66994 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C63360-80C634CC 016C+00 s=1 e=0 z=0  None .text      create1st__14daObjLv4Chan_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::create1st() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/create1st__14daObjLv4Chan_cFv.s"
}
#pragma pop


/* 80C634CC-80C636B4 01E8+00 s=1 e=0 z=0  None .text      setMtxChain__14daObjLv4Chan_cFPQ214daObjLv4Chan_c8ChainPosP10dMdl_obj_ci */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::setMtxChain(daObjLv4Chan_c::ChainPos* param_0, dMdl_obj_c* param_1, int param_2) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/func_80C634CC.s"
}
#pragma pop


/* 80C636B4-80C639B4 0300+00 s=2 e=0 z=0  None .text      setMtx__14daObjLv4Chan_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::setMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/setMtx__14daObjLv4Chan_cFv.s"
}
#pragma pop


/* 80C639B4-80C63CFC 0348+00 s=1 e=0 z=0  None .text      rideActor__14daObjLv4Chan_cFP10fopAc_ac_c                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::rideActor(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/rideActor__14daObjLv4Chan_cFP10fopAc_ac_c.s"
}
#pragma pop


/* 80C63CFC-80C63F34 0238+00 s=1 e=0 z=0  None .text      CreateHeap__14daObjLv4Chan_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/CreateHeap__14daObjLv4Chan_cFv.s"
}
#pragma pop


/* 80C63F34-80C63FA8 0074+00 s=1 e=0 z=0  None .text      searchSwChain__FPvPv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void searchSwChain(void* param_0, void* param_1) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/searchSwChain__FPvPv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C66994-80C669D4 0040+00 s=1 e=0 z=0  None .data      cc_sph_src                                                   */
SECTION_DATA static u8 cc_sph_src[64] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 80C63FA8-80C6449C 04F4+00 s=1 e=0 z=0  None .text      Create__14daObjLv4Chan_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/Create__14daObjLv4Chan_cFv.s"
}
#pragma pop


/* 80C6449C-80C64668 01CC+00 s=1 e=0 z=0  None .text      constraintChain__14daObjLv4Chan_cFPQ214daObjLv4Chan_c8ChainPosi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::constraintChain(daObjLv4Chan_c::ChainPos* param_0, int param_1) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/func_80C6449C.s"
}
#pragma pop


/* 80C64668-80C647FC 0194+00 s=1 e=0 z=0  None .text      constraintBase__14daObjLv4Chan_cFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::constraintBase() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/constraintBase__14daObjLv4Chan_cFv.s"
}
#pragma pop


/* 80C647FC-80C64878 007C+00 s=1 e=0 z=0  None .text      calcVec__14daObjLv4Chan_cFPQ214daObjLv4Chan_c8ChainPosi      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::calcVec(daObjLv4Chan_c::ChainPos* param_0, int param_1) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/calcVec__14daObjLv4Chan_cFPQ214daObjLv4Chan_c8ChainPosi.s"
}
#pragma pop


/* 80C64878-80C648F4 007C+00 s=2 e=0 z=0  None .text      chkGnd__14daObjLv4Chan_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::chkGnd() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/chkGnd__14daObjLv4Chan_cFv.s"
}
#pragma pop


/* 80C648F4-80C65F04 1610+00 s=1 e=0 z=0  None .text      Execute__14daObjLv4Chan_cFPPA3_A4_f                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/Execute__14daObjLv4Chan_cFPPA3_A4_f.s"
}
#pragma pop


/* 80C65F04-80C66114 0210+00 s=1 e=0 z=0  None .text      Draw__14daObjLv4Chan_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/Draw__14daObjLv4Chan_cFv.s"
}
#pragma pop


/* 80C66114-80C66150 003C+00 s=1 e=0 z=0  None .text      Delete__14daObjLv4Chan_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4Chan_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/Delete__14daObjLv4Chan_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C669D4-80C669F4 0020+00 s=1 e=0 z=0  None .data      daObjLv4Chan_METHODS                                         */
SECTION_DATA static void* daObjLv4Chan_METHODS[8] = {
	(void*)daObjLv4Chan_create1st__FP14daObjLv4Chan_c,
	(void*)daObjLv4Chan_MoveBGDelete__FP14daObjLv4Chan_c,
	(void*)daObjLv4Chan_MoveBGExecute__FP14daObjLv4Chan_c,
	(void*)NULL,
	(void*)daObjLv4Chan_MoveBGDraw__FP14daObjLv4Chan_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C669F4-80C66A24 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Lv4Chan                                        */
SECTION_DATA void* g_profile_Obj_Lv4Chan[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00D30000,
	(void*)&g_fpcLf_Method,
	(void*)0x000024A4,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02A20000,
	(void*)&daObjLv4Chan_METHODS,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80C66A24-80C66A30 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 80C66A30-80C66A3C 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGSph                                              */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGSphFv,
};

/* 80C66A3C-80C66A6C 0030+00 s=2 e=0 z=0  None .data      __vt__14dBgS_ObjGndChk                                       */
SECTION_DATA static void* __vt__14dBgS_ObjGndChk[12] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__14dBgS_ObjGndChkFv,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80C66540,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80C66550,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80C66548,
};

/* 80C66A6C-80C66A94 0028+00 s=1 e=0 z=0  None .data      __vt__14daObjLv4Chan_c                                       */
SECTION_DATA static void* __vt__14daObjLv4Chan_c[10] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__14daObjLv4Chan_cFv,
	(void*)Create__14daObjLv4Chan_cFv,
	(void*)Execute__14daObjLv4Chan_cFPPA3_A4_f,
	(void*)Draw__14daObjLv4Chan_cFv,
	(void*)Delete__14daObjLv4Chan_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C66150-80C6627C 012C+00 s=1 e=0 z=0  None .text      daObjLv4Chan_create1st__FP14daObjLv4Chan_c                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjLv4Chan_create1st(daObjLv4Chan_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/daObjLv4Chan_create1st__FP14daObjLv4Chan_c.s"
}
#pragma pop


/* 80C6627C-80C662F4 0078+00 s=4 e=0 z=0  None .text      __dt__14dBgS_ObjGndChkFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop


/* 80C662F4-80C663C0 00CC+00 s=1 e=0 z=0  None .text      __dt__8dCcD_SphFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/__dt__8dCcD_SphFv.s"
}
#pragma pop


/* 80C663C0-80C66444 0084+00 s=1 e=0 z=0  None .text      __ct__8dCcD_SphFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/__ct__8dCcD_SphFv.s"
}
#pragma pop


/* 80C66444-80C6648C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/__dt__8cM3dGSphFv.s"
}
#pragma pop


/* 80C6648C-80C664D4 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80C664D4-80C664F4 0020+00 s=1 e=0 z=0  None .text      daObjLv4Chan_MoveBGDelete__FP14daObjLv4Chan_c                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjLv4Chan_MoveBGDelete(daObjLv4Chan_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/daObjLv4Chan_MoveBGDelete__FP14daObjLv4Chan_c.s"
}
#pragma pop


/* 80C664F4-80C66514 0020+00 s=1 e=0 z=0  None .text      daObjLv4Chan_MoveBGExecute__FP14daObjLv4Chan_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjLv4Chan_MoveBGExecute(daObjLv4Chan_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/daObjLv4Chan_MoveBGExecute__FP14daObjLv4Chan_c.s"
}
#pragma pop


/* 80C66514-80C66540 002C+00 s=1 e=0 z=0  None .text      daObjLv4Chan_MoveBGDraw__FP14daObjLv4Chan_c                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjLv4Chan_MoveBGDraw(daObjLv4Chan_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/daObjLv4Chan_MoveBGDraw__FP14daObjLv4Chan_c.s"
}
#pragma pop


/* 80C66540-80C66548 0008+00 s=1 e=0 z=0  None .text      @20@__dt__14dBgS_ObjGndChkFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C66540() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/func_80C66540.s"
}
#pragma pop


/* 80C66548-80C66550 0008+00 s=1 e=0 z=0  None .text      @76@__dt__14dBgS_ObjGndChkFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C66548() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/func_80C66548.s"
}
#pragma pop


/* 80C66550-80C66558 0008+00 s=1 e=0 z=0  None .text      @60@__dt__14dBgS_ObjGndChkFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C66550() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/func_80C66550.s"
}
#pragma pop


/* 80C66558-80C66564 000C+00 s=1 e=0 z=0  None .text      __ct__10dMdl_obj_cFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMdl_obj_c::dMdl_obj_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/__ct__10dMdl_obj_cFv.s"
}
#pragma pop


/* 80C66564-80C665A0 003C+00 s=1 e=0 z=0  None .text      __dt__Q214daObjLv4Chan_c8ChainPosFv                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjLv4Chan_c::ChainPos::~ChainPos() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/__dt__Q214daObjLv4Chan_c8ChainPosFv.s"
}
#pragma pop


/* 80C665A0-80C665A4 0004+00 s=1 e=0 z=0  None .text      __ct__Q214daObjLv4Chan_c8ChainPosFv                          */
daObjLv4Chan_c::ChainPos::ChainPos() {
	/* empty function */
}


/* 80C665A4-80C66858 02B4+00 s=1 e=0 z=0  None .text      checkTight__14daObjSwChain_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwChain_c::checkTight() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4chandelier/d_a_obj_lv4chandelier/checkTight__14daObjSwChain_cFv.s"
}
#pragma pop


