// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_sw
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_sw/d_a_obj_sw.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct obj_sw_class {
};

struct obj_sc_s {
	/* 80CF2F3C */ ~obj_sc_s();
	/* 80CF2FA8 */ obj_sc_s();
};

struct mDoMtx_stack_c {
	/* 8000CCC8 */ void push();
	/* 8000CD14 */ void pop();
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

struct mDoExt_3DlineMat_c {
};

struct mDoExt_3DlineMatSortPacket {
	/* 80014738 */ void setMat(mDoExt_3DlineMat_c*);
};

struct ResTIMG {
};

struct dKy_tevstr_c {
};

struct _GXColor {
};

struct mDoExt_3DlineMat1_c {
	/* 80013360 */ void init(u16, u16, ResTIMG*, int);
	/* 80013FB0 */ void update(int, _GXColor&, dKy_tevstr_c*);
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
};

struct daPy_py_c {
	/* 80CF2FDC */ void getLeftHandPos() const;
};

struct cXyz {
	/* 80266AE4 */ void operator+(Vec const&) const;
	/* 80266B34 */ void operator-(Vec const&) const;
	/* 80266B84 */ void operator*(f32) const;
	/* 80266C18 */ void operator/(f32) const;
	/* 80CF1008 */ ~cXyz();
	/* 80CF2F38 */ cXyz();
};

struct dVibration_c {
	/* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
	/* 80035200 */ void onSwitch(int, int);
	/* 80035360 */ void isSwitch(int, int) const;
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

struct dEvt_control_c {
	/* 80042468 */ void reset();
};

struct dCamera_c {
	/* 801614AC */ void Start();
	/* 801614D0 */ void Stop();
	/* 8016300C */ void SetTrimSize(s32);
	/* 80180AE0 */ void Set(cXyz, cXyz, f32, s16);
	/* 80180BA0 */ void Reset(cXyz, cXyz, f32, s16);
};

struct csXyz {
};

struct Z2SoundObjSimple {
	/* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
	/* 802BDF48 */ ~Z2SoundObjBase();
	/* 802BDFF8 */ void deleteObject();
};

struct J3DModel {
};

// 
// Forward References:
// 

static void daObj_Sw_Draw(obj_sw_class*);
static void s_ks_sub(void*, void*);
static void s_ksdel_sub(void*, void*);
static void anm_init(obj_sc_s*, int, f32, u8, f32);
static void sc_build(obj_sw_class*);
static void sc_move(obj_sw_class*);
static void demo_camera(obj_sw_class*);
static void sc_action(obj_sw_class*);
static void sw_action(obj_sw_class*);
static void daObj_Sw_Execute(obj_sw_class*);
static bool daObj_Sw_IsDelete(obj_sw_class*);
static void daObj_Sw_Delete(obj_sw_class*);
static void useHeapInit(fopAc_ac_c*);
static void daObj_Sw_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OBJ_SW[12];

extern "C" static void daObj_Sw_Draw__FP12obj_sw_class();
extern "C" static void s_ks_sub__FPvPv();
extern "C" static void s_ksdel_sub__FPvPv();
extern "C" static void anm_init__FP8obj_sc_sifUcf();
extern "C" static void sc_build__FP12obj_sw_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void sc_move__FP12obj_sw_class();
extern "C" static void demo_camera__FP12obj_sw_class();
extern "C" static void sc_action__FP12obj_sw_class();
extern "C" static void sw_action__FP12obj_sw_class();
extern "C" static void daObj_Sw_Execute__FP12obj_sw_class();
extern "C" static bool daObj_Sw_IsDelete__FP12obj_sw_class();
extern "C" static void daObj_Sw_Delete__FP12obj_sw_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObj_Sw_Create__FP10fopAc_ac_c();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__8obj_sc_sFv();
extern "C" void __ct__8obj_sc_sFv();
extern "C" void getLeftHandPos__9daPy_py_cCFv();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OBJ_SW[12];

// 
// External References:
// 

void mDoMtx_XrotM(f32 (* )[4], s16);
void mDoMtx_YrotS(f32 (* )[4], s16);
void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoMtx_ZrotM(f32 (* )[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAc_IsActor(void*);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_createChild(s16, unsigned int, u32, cXyz const*, int, csXyz const*, cXyz const*, s8, int (*)(void*));
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_orderPotentialEvent(fopAc_ac_c*, u16, u16, u16);
void fpcEx_Search(void* (*)(void*, void*), void*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dPath_GetRoomPath(int, int);
void dKyw_get_AllWind_vec(cXyz*, cXyz*, f32*);
void cM_atan2s(f32, f32);
void cM_rndF(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_addCalc0(f32*, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void MtxPosition(cXyz*, cXyz*);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* __vt__19mDoExt_3DlineMat1_c[5];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16Z2SoundObjSimple[8];
extern "C" extern u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void __ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void setAnm__14mDoExt_McaMorfFP15J3DAnmTransformiffffPv();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void init__19mDoExt_3DlineMat1_cFUsUsP7ResTIMGi();
extern "C" void update__19mDoExt_3DlineMat1_cFiR8_GXColorP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dKyw_get_AllWind_vec__FP4cXyzP4cXyzPf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyzfs();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __dv__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __dt__14Z2SoundObjBaseFv();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXScale();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECSquareMag();
extern "C" void __construct_array();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19mDoExt_3DlineMat1_c[5];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16Z2SoundObjSimple[8];
extern "C" extern u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80CF30FC-80CF3100 0004+00 s=1 e=0 z=0  None .data      l_color$3804                                                 */
SECTION_DATA static u8 l_color[4] = {
	0x14, 0x0F, 0x00, 0xFF,
};

/* 80CF0638-80CF0774 013C+00 s=1 e=0 z=0  None .text      daObj_Sw_Draw__FP12obj_sw_class                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Sw_Draw(obj_sw_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/daObj_Sw_Draw__FP12obj_sw_class.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CF3278-80CF327C 0004+00 s=3 e=0 z=0  None .bss       saru_ct                                                      */
static u8 saru_ct[4];

/* 80CF0774-80CF07F8 0084+00 s=1 e=0 z=0  None .text      s_ks_sub__FPvPv                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void s_ks_sub(void* param_0, void* param_1) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/s_ks_sub__FPvPv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CF3100-80CF3210 0110+00 s=3 e=0 z=0  None .data      sc_path                                                      */
SECTION_DATA static u8 sc_path[272] = {
	0x00, 0x00, 0x00, 0x01, 0x45, 0xFF, 0x60, 0x00, 0x45, 0x53, 0x40, 0x00, 0xC6, 0x2A, 0x1C, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x46, 0x01, 0xC4, 0x00, 0x45, 0x5C, 0x40, 0x00, 0xC6, 0x30, 0x2C, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x46, 0x09, 0x18, 0x00, 0x45, 0x65, 0xD0, 0x00, 0xC6, 0x27, 0xA0, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x46, 0x09, 0x68, 0x00, 0x45, 0x65, 0xD0, 0x00, 0xC6, 0x32, 0x80, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x46, 0x10, 0xCC, 0x00, 0x45, 0x72, 0xF0, 0x00, 0xC6, 0x25, 0x68, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x46, 0x0C, 0xD4, 0x00, 0x45, 0x73, 0xE0, 0x00, 0xC6, 0x37, 0x5C, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x46, 0x0F, 0x80, 0x00, 0x45, 0x79, 0xD0, 0x00, 0xC6, 0x2F, 0x78, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x46, 0x10, 0x58, 0x00, 0x45, 0x80, 0xF8, 0x00, 0xC6, 0x39, 0xB8, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x46, 0x16, 0x60, 0x00, 0x45, 0x8F, 0xD0, 0x00, 0xC6, 0x36, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x46, 0x14, 0xA4, 0x00, 0x45, 0x97, 0xB0, 0x00, 0xC6, 0x3E, 0xC4, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x46, 0x0D, 0x64, 0x00, 0x45, 0x9D, 0x58, 0x00, 0xC6, 0x3C, 0x48, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x46, 0x08, 0x2C, 0x00, 0x45, 0x9E, 0xD8, 0x00, 0xC6, 0x38, 0x24, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x46, 0x03, 0xB0, 0x00, 0x45, 0xA2, 0xB0, 0x00, 0xC6, 0x31, 0xF0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x7C, 0x00, 0x45, 0xA7, 0x48, 0x00, 0xC6, 0x2F, 0xC8, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x45, 0xF5, 0x58, 0x00, 0x45, 0xAA, 0xA0, 0x00, 0xC6, 0x30, 0x14, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x45, 0xED, 0x78, 0x00, 0x45, 0xAD, 0x08, 0x00, 0xC6, 0x2E, 0xC8, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CF07F8-80CF08F8 0100+00 s=1 e=0 z=0  None .text      s_ksdel_sub__FPvPv                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void s_ksdel_sub(void* param_0, void* param_1) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/s_ksdel_sub__FPvPv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CF3000-80CF3004 0004+00 s=8 e=0 z=0  None .rodata    @3850                                                        */
SECTION_RODATA static u8 const lit_3850[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80CF3004-80CF3008 0004+00 s=1 e=0 z=0  None .rodata    @3851                                                        */
SECTION_RODATA static u32 const lit_3851 = 0xBF800000;

/* 80CF3008-80CF300C 0004+00 s=4 e=0 z=0  None .rodata    @3976                                                        */
SECTION_RODATA static u32 const lit_3976 = 0x40A00000;

/* 80CF300C-80CF3010 0004+00 s=5 e=0 z=0  None .rodata    @3977                                                        */
SECTION_RODATA static u32 const lit_3977 = 0x3F800000;

/* 80CF3010-80CF3014 0004+00 s=3 e=0 z=0  None .rodata    @3978                                                        */
SECTION_RODATA static u32 const lit_3978 = 0x40000000;

/* 80CF3014-80CF3018 0004+00 s=4 e=0 z=0  None .rodata    @3979                                                        */
SECTION_RODATA static u32 const lit_3979 = 0x42200000;

/* 80CF3018-80CF301C 0004+00 s=1 e=0 z=0  None .rodata    @3980                                                        */
SECTION_RODATA static u32 const lit_3980 = 0x41C80000;

/* 80CF301C-80CF3020 0004+00 s=1 e=0 z=0  None .rodata    @3981                                                        */
SECTION_RODATA static u32 const lit_3981 = 0x44D48000;

/* 80CF3020-80CF3024 0004+00 s=1 e=0 z=0  None .rodata    @3982                                                        */
SECTION_RODATA static u32 const lit_3982 = 0xC20C0000;

/* 80CF3024-80CF3028 0004+00 s=2 e=0 z=0  None .rodata    @3983                                                        */
SECTION_RODATA static u32 const lit_3983 = 0x41F00000;

/* 80CF3028-80CF302C 0004+00 s=1 e=0 z=0  None .rodata    @4056                                                        */
SECTION_RODATA static u32 const lit_4056 = 0x3E4CCCCD;

/* 80CF302C-80CF3030 0004+00 s=1 e=0 z=0  None .rodata    @4057                                                        */
SECTION_RODATA static u32 const lit_4057 = 0x3EA8F5C3;

/* 80CF3030-80CF3034 0004+00 s=2 e=0 z=0  None .rodata    @4058                                                        */
SECTION_RODATA static u32 const lit_4058 = 0x3F000000;

/* 80CF3034-80CF3038 0004+00 s=1 e=0 z=0  None .rodata    @4059                                                        */
SECTION_RODATA static u32 const lit_4059 = 0x42700000;

/* 80CF3038-80CF303C 0004+00 s=1 e=0 z=0  None .rodata    @4060                                                        */
SECTION_RODATA static u32 const lit_4060 = 0x43FA0000;

/* 80CF303C-80CF3040 0004+00 s=2 e=0 z=0  None .rodata    @4061                                                        */
SECTION_RODATA static u32 const lit_4061 = 0x3ECCCCCD;

/* 80CF3040-80CF3048 0008+00 s=3 e=0 z=0  None .rodata    @4062                                                        */
SECTION_RODATA static u8 const lit_4062[8] = {
	0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CF3048-80CF3050 0008+00 s=3 e=0 z=0  None .rodata    @4063                                                        */
SECTION_RODATA static u8 const lit_4063[8] = {
	0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CF3050-80CF3058 0008+00 s=3 e=0 z=0  None .rodata    @4064                                                        */
SECTION_RODATA static u8 const lit_4064[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CF3058-80CF305C 0004+00 s=1 e=0 z=0  None .rodata    @4065                                                        */
SECTION_RODATA static u32 const lit_4065 = 0x437A0000;

/* 80CF305C-80CF3060 0004+00 s=2 e=0 z=0  None .rodata    @4066                                                        */
SECTION_RODATA static u32 const lit_4066 = 0x44AF0000;

/* 80CF3060-80CF3064 0004+00 s=2 e=0 z=0  None .rodata    @4067                                                        */
SECTION_RODATA static u32 const lit_4067 = 0x40800000;

/* 80CF3064-80CF3068 0004+00 s=1 e=0 z=0  None .rodata    @4194                                                        */
SECTION_RODATA static u32 const lit_4194 = 0x43C80000;

/* 80CF3068-80CF306C 0004+00 s=1 e=0 z=0  None .rodata    @4195                                                        */
SECTION_RODATA static u32 const lit_4195 = 0x425C0000;

/* 80CF306C-80CF3070 0004+00 s=1 e=0 z=0  None .rodata    @4196                                                        */
SECTION_RODATA static u32 const lit_4196 = 0xC4480000;

/* 80CF3070-80CF3074 0004+00 s=1 e=0 z=0  None .rodata    @4197                                                        */
SECTION_RODATA static u32 const lit_4197 = 0x43960000;

/* 80CF3074-80CF3078 0004+00 s=2 e=0 z=0  None .rodata    @4198                                                        */
SECTION_RODATA static u32 const lit_4198 = 0xC3480000;

/* 80CF3078-80CF307C 0004+00 s=2 e=0 z=0  None .rodata    @4199                                                        */
SECTION_RODATA static u32 const lit_4199 = 0x43480000;

/* 80CF307C-80CF3080 0004+00 s=1 e=0 z=0  None .rodata    @4200                                                        */
SECTION_RODATA static u32 const lit_4200 = 0x42C80000;

/* 80CF3080-80CF3084 0004+00 s=3 e=0 z=0  None .rodata    @4201                                                        */
SECTION_RODATA static u32 const lit_4201 = 0x3DCCCCCD;

/* 80CF3084-80CF3088 0004+00 s=1 e=0 z=0  None .rodata    @4202                                                        */
SECTION_RODATA static u32 const lit_4202 = 0xC3C80000;

/* 80CF3088-80CF308C 0004+00 s=2 e=0 z=0  None .rodata    @4203                                                        */
SECTION_RODATA static u32 const lit_4203 = 0x42480000;

/* 80CF308C-80CF3090 0004+00 s=2 e=0 z=0  None .rodata    @4442                                                        */
SECTION_RODATA static u32 const lit_4442 = 0x41200000;

/* 80CF3090-80CF3094 0004+00 s=1 e=0 z=0  None .rodata    @4443                                                        */
SECTION_RODATA static u32 const lit_4443 = 0x3D4CCCCD;

/* 80CF3094-80CF3098 0004+00 s=1 e=0 z=0  None .rodata    @4444                                                        */
SECTION_RODATA static u32 const lit_4444 = 0xC3660000;

/* 80CF3098-80CF309C 0004+00 s=1 e=0 z=0  None .rodata    @4445                                                        */
SECTION_RODATA static u32 const lit_4445 = 0x3E99999A;

/* 80CF309C-80CF30A0 0004+00 s=2 e=0 z=0  None .rodata    @4446                                                        */
SECTION_RODATA static u32 const lit_4446 = 0x447A0000;

/* 80CF30A0-80CF30A4 0004+00 s=2 e=0 z=0  None .rodata    @4447                                                        */
SECTION_RODATA static u32 const lit_4447 = 0x47000000;

/* 80CF30A4-80CF30A8 0004+00 s=1 e=0 z=0  None .rodata    @4549                                                        */
SECTION_RODATA static u32 const lit_4549 = 0x3CF5C28F;

/* 80CF30A8-80CF30AC 0004+00 s=1 e=0 z=0  None .rodata    @4550                                                        */
SECTION_RODATA static u32 const lit_4550 = 0x428C0000;

/* 80CF30AC-80CF30B0 0004+00 s=1 e=0 z=0  None .rodata    @4551                                                        */
SECTION_RODATA static u32 const lit_4551 = 0x41000000;

/* 80CF30B0-80CF30B8 0004+04 s=1 e=0 z=0  None .rodata    @4552                                                        */
SECTION_RODATA static u32 const lit_4552[1 + 1 /* padding */] = {
	0x3D99999A,
	/* padding */
	0x00000000,
};

/* 80CF30B8-80CF30C0 0008+00 s=1 e=0 z=0  None .rodata    @4554                                                        */
SECTION_RODATA static u8 const lit_4554[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80CF30C0-80CF30C4 0004+00 s=1 e=0 z=0  None .rodata    @4659                                                        */
SECTION_RODATA static u32 const lit_4659 = 0x40C00000;

/* 80CF30C4-80CF30C8 0004+00 s=1 e=0 z=0  None .rodata    @4856                                                        */
SECTION_RODATA static u32 const lit_4856 = 0xC28C0000;

/* 80CF30C8-80CF30CC 0004+00 s=1 e=0 z=0  None .rodata    @4857                                                        */
SECTION_RODATA static u32 const lit_4857 = 0xC65AC000;

/* 80CF30CC-80CF30D0 0004+00 s=1 e=0 z=0  None .rodata    @4858                                                        */
SECTION_RODATA static u32 const lit_4858 = 0x4557A000;

/* 80CF30D0-80CF30D4 0004+00 s=1 e=0 z=0  None .rodata    @4859                                                        */
SECTION_RODATA static u32 const lit_4859 = 0x4645F800;

/* 80CF30D4-80CF30D8 0004+00 s=1 e=0 z=0  None .rodata    @4860                                                        */
SECTION_RODATA static u32 const lit_4860 = 0xC47A0000;

/* 80CF30D8-80CF30DC 0004+00 s=1 e=0 z=0  None .rodata    @4861                                                        */
SECTION_RODATA static u32 const lit_4861 = 0xC2C80000;

/* 80CF30DC-80CF30E0 0004+00 s=1 e=0 z=0  None .rodata    @4862                                                        */
SECTION_RODATA static u32 const lit_4862 = 0x45534000;

/* 80CF30E0-80CF30E4 0004+00 s=1 e=0 z=0  None .rodata    @4863                                                        */
SECTION_RODATA static u32 const lit_4863 = 0x45C44000;

/* 80CF30E4-80CF30E8 0004+00 s=1 e=0 z=0  None .rodata    @4864                                                        */
SECTION_RODATA static u32 const lit_4864 = 0x456C4000;

/* 80CF30E8-80CF30EC 0004+00 s=1 e=0 z=0  None .rodata    @4865                                                        */
SECTION_RODATA static u32 const lit_4865 = 0x45AF0000;

/* 80CF30EC-80CF30FB 000F+00 s=4 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CF30EC = "Npc_ksw";
SECTION_DEAD char const* const stringBase_80CF30F4 = "Obj_sw";
#pragma pop

/* 80CF08F8-80CF09A8 00B0+00 s=3 e=0 z=0  None .text      anm_init__FP8obj_sc_sifUcf                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void anm_init(obj_sc_s* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/anm_init__FP8obj_sc_sifUcf.s"
}
#pragma pop


/* 80CF09A8-80CF1008 0660+00 s=1 e=0 z=0  None .text      sc_build__FP12obj_sw_class                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void sc_build(obj_sw_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/sc_build__FP12obj_sw_class.s"
}
#pragma pop


/* 80CF1008-80CF1044 003C+00 s=1 e=0 z=0  None .text      __dt__4cXyzFv                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/__dt__4cXyzFv.s"
}
#pragma pop


/* 80CF1044-80CF1384 0340+00 s=1 e=0 z=0  None .text      sc_move__FP12obj_sw_class                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void sc_move(obj_sw_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/sc_move__FP12obj_sw_class.s"
}
#pragma pop


/* 80CF1384-80CF1970 05EC+00 s=1 e=0 z=0  None .text      demo_camera__FP12obj_sw_class                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void demo_camera(obj_sw_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/demo_camera__FP12obj_sw_class.s"
}
#pragma pop


/* 80CF1970-80CF2160 07F0+00 s=1 e=0 z=0  None .text      sc_action__FP12obj_sw_class                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void sc_action(obj_sw_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/sc_action__FP12obj_sw_class.s"
}
#pragma pop


/* 80CF2160-80CF2604 04A4+00 s=1 e=0 z=0  None .text      sw_action__FP12obj_sw_class                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void sw_action(obj_sw_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/sw_action__FP12obj_sw_class.s"
}
#pragma pop


/* 80CF2604-80CF26F0 00EC+00 s=2 e=0 z=0  None .text      daObj_Sw_Execute__FP12obj_sw_class                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Sw_Execute(obj_sw_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/daObj_Sw_Execute__FP12obj_sw_class.s"
}
#pragma pop


/* 80CF26F0-80CF26F8 0008+00 s=1 e=0 z=0  None .text      daObj_Sw_IsDelete__FP12obj_sw_class                          */
static bool daObj_Sw_IsDelete(obj_sw_class* param_0) {
	return true;
}


/* 80CF26F8-80CF2790 0098+00 s=1 e=0 z=0  None .text      daObj_Sw_Delete__FP12obj_sw_class                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Sw_Delete(obj_sw_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/daObj_Sw_Delete__FP12obj_sw_class.s"
}
#pragma pop


/* 80CF2790-80CF29D4 0244+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CF3210-80CF3230 0020+00 s=1 e=0 z=0  None .data      l_daObj_Sw_Method                                            */
SECTION_DATA static void* l_daObj_Sw_Method[8] = {
	(void*)daObj_Sw_Create__FP10fopAc_ac_c,
	(void*)daObj_Sw_Delete__FP12obj_sw_class,
	(void*)daObj_Sw_Execute__FP12obj_sw_class,
	(void*)daObj_Sw_IsDelete__FP12obj_sw_class,
	(void*)daObj_Sw_Draw__FP12obj_sw_class,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80CF3230-80CF3260 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_SW                                             */
SECTION_DATA void* g_profile_OBJ_SW[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0004FFFD,
	(void*)0x00F10000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000D90,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x003C0000,
	(void*)&l_daObj_Sw_Method,
	(void*)0x00044000,
	(void*)NULL,
};

/* 80CF3260-80CF3274 0014+00 s=1 e=0 z=0  None .data      __vt__18mDoExt_3DlineMat_c                                   */
SECTION_DATA static void* __vt__18mDoExt_3DlineMat_c[5] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80CF29D4-80CF2F38 0564+00 s=1 e=0 z=0  None .text      daObj_Sw_Create__FP10fopAc_ac_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Sw_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/daObj_Sw_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80CF2F38-80CF2F3C 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv                                                */
cXyz::cXyz() {
	/* empty function */
}


/* 80CF2F3C-80CF2FA8 006C+00 s=1 e=0 z=0  None .text      __dt__8obj_sc_sFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm obj_sc_s::~obj_sc_s() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/__dt__8obj_sc_sFv.s"
}
#pragma pop


/* 80CF2FA8-80CF2FDC 0034+00 s=1 e=0 z=0  None .text      __ct__8obj_sc_sFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm obj_sc_s::obj_sc_s() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/__ct__8obj_sc_sFv.s"
}
#pragma pop


/* 80CF2FDC-80CF2FF8 001C+00 s=1 e=0 z=0  None .text      getLeftHandPos__9daPy_py_cCFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::getLeftHandPos() const {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sw/d_a_obj_sw/getLeftHandPos__9daPy_py_cCFv.s"
}
#pragma pop


