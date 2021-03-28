// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_lbox
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct obj_lbox_class {
};

struct mDoMtx_stack_c {
	/* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
};

struct daObj_Lbox_HIO_c {
	/* 80C5356C */ daObj_Lbox_HIO_c();
	/* 80C53F14 */ ~daObj_Lbox_HIO_c();
};

struct cXyz {
};

struct dVibration_c {
	/* 8006FA24 */ void StartShock(int, int, cXyz);
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

struct dCcD_Stts {
	/* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {
};

struct dCcD_Sph {
	/* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
	/* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ dCcD_GObjInf();
	/* 80084460 */ void ChkTgHit();
};

struct dBgW_Base {
};

struct dBgW {
	/* 8007B970 */ dBgW();
	/* 8007B9C0 */ void Move();
};

struct dBgS_PolyPassChk {
	/* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
	/* 80C53EA4 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
	/* 80075EAC */ dBgS_AcchCir();
	/* 80075F58 */ void SetWall(f32, f32);
};

struct csXyz {
};

struct dBgS {
	/* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
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
	/* 80C53E14 */ ~cM3dGSph();
};

struct cM3dGAab {
	/* 80C53E5C */ ~cM3dGAab();
};

struct cCcD_Obj {
};

struct cCcS {
	/* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgD_t {
};

struct cBgW {
	/* 80079F38 */ void Set(cBgD_t*, u32, f32 (* )[3][4]);
};

struct cBgS_PolyInfo {
};

struct cBgS {
	/* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {
};

struct Vec {
};

struct Z2SeMgr {
	/* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {
};

// 
// Forward References:
// 

static void daObj_Lbox_Draw(obj_lbox_class*);
static void action(obj_lbox_class*);
static void daObj_Lbox_Execute(obj_lbox_class*);
static bool daObj_Lbox_IsDelete(obj_lbox_class*);
static void daObj_Lbox_Delete(obj_lbox_class*);
static void useHeapInit(fopAc_ac_c*);
static void daObj_Lbox_Create(fopAc_ac_c*);
extern "C" extern u32 const lit_3886;
extern "C" extern u32 const lit_3887;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OBJ_LBOX[12];

extern "C" void __ct__16daObj_Lbox_HIO_cFv();
extern "C" static void daObj_Lbox_Draw__FP14obj_lbox_class();
extern "C" static void action__FP14obj_lbox_class();
extern "C" static void daObj_Lbox_Execute__FP14obj_lbox_class();
extern "C" static bool daObj_Lbox_IsDelete__FP14obj_lbox_class();
extern "C" static void daObj_Lbox_Delete__FP14obj_lbox_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObj_Lbox_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__16daObj_Lbox_HIO_cFv();
extern "C" void __sinit_d_a_obj_lbox_cpp();
extern "C" static void func_80C53F98();
extern "C" static void func_80C53FA0();
extern "C" extern u32 const lit_3886;
extern "C" extern u32 const lit_3887;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OBJ_LBOX[12];

// 
// External References:
// 

void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoMtx_ZrotM(f32 (* )[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_effSmokeSet1(u32*, u32*, cXyz const*, csXyz const*, f32, dKy_tevstr_c const*, int);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_Typical(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void* operator new(u32);
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
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_25();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80C53FBC-80C53FC0 0004+00 s=3 e=0 z=0  None .rodata    @3768                                                        */
SECTION_RODATA static u32 const lit_3768 = 0x40000000;

/* 80C53FC0-80C53FC4 0004+00 s=2 e=0 z=0  None .rodata    @3769                                                        */
SECTION_RODATA static u8 const lit_3769[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C54008-80C54048 0040+00 s=1 e=0 z=0  None .data      cc_sph_src$3950                                              */
SECTION_DATA static u8 cc_sph_src[64] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 80C54048-80C54068 0020+00 s=1 e=0 z=0  None .data      l_daObj_Lbox_Method                                          */
SECTION_DATA static void* l_daObj_Lbox_Method[8] = {
	(void*)daObj_Lbox_Create__FP10fopAc_ac_c,
	(void*)daObj_Lbox_Delete__FP14obj_lbox_class,
	(void*)daObj_Lbox_Execute__FP14obj_lbox_class,
	(void*)daObj_Lbox_IsDelete__FP14obj_lbox_class,
	(void*)daObj_Lbox_Draw__FP14obj_lbox_class,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C54068-80C54098 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_LBOX                                           */
SECTION_DATA void* g_profile_OBJ_LBOX[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00270000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000A90,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x00290000,
	(void*)&l_daObj_Lbox_Method,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80C54098-80C540A4 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph                                              */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGSphFv,
};

/* 80C540A4-80C540B0 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 80C540B0-80C540D4 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch                                         */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12dBgS_ObjAcchFv,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80C53FA0,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80C53F98,
};

/* 80C540D4-80C540E0 000C+00 s=2 e=0 z=0  None .data      __vt__16daObj_Lbox_HIO_c                                     */
SECTION_DATA static void* __vt__16daObj_Lbox_HIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__16daObj_Lbox_HIO_cFv,
};

/* 80C5356C-80C5359C 0030+00 s=1 e=0 z=0  None .text      __ct__16daObj_Lbox_HIO_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Lbox_HIO_c::daObj_Lbox_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/__ct__16daObj_Lbox_HIO_cFv.s"
}
#pragma pop


/* 80C5359C-80C53600 0064+00 s=1 e=0 z=0  None .text      daObj_Lbox_Draw__FP14obj_lbox_class                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Lbox_Draw(obj_lbox_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/daObj_Lbox_Draw__FP14obj_lbox_class.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C53FC4-80C53FC8 0004+00 s=1 e=0 z=0  None .rodata    @3877                                                        */
SECTION_RODATA static u32 const lit_3877 = 0x458CA000;

/* 80C53FC8-80C53FCC 0004+00 s=1 e=0 z=0  None .rodata    @3878                                                        */
SECTION_RODATA static u32 const lit_3878 = 0xC557A000;

/* 80C53FCC-80C53FD0 0004+00 s=1 e=0 z=0  None .rodata    @3879                                                        */
SECTION_RODATA static u32 const lit_3879 = 0x3F800000;

/* 80C53FD0-80C53FD4 0004+00 s=1 e=0 z=0  None .rodata    @3880                                                        */
SECTION_RODATA static u32 const lit_3880 = 0xBF800000;

/* 80C53FD4-80C53FD8 0004+00 s=1 e=0 z=0  None .rodata    @3881                                                        */
SECTION_RODATA static u32 const lit_3881 = 0x40A00000;

/* 80C53FD8-80C53FDC 0004+00 s=2 e=0 z=0  None .rodata    @3882                                                        */
SECTION_RODATA static u32 const lit_3882 = 0x43480000;

/* 80C53FDC-80C53FE0 0004+00 s=1 e=0 z=0  None .rodata    @3883                                                        */
SECTION_RODATA static u32 const lit_3883 = 0x3DCCCCCD;

/* 80C53FE0-80C53FE4 0004+00 s=1 e=0 z=0  None .rodata    @3884                                                        */
SECTION_RODATA static u32 const lit_3884 = 0x40600000;

/* 80C53FE4-80C53FE8 0004+00 s=2 e=0 z=0  None .rodata    @3885                                                        */
SECTION_RODATA static u32 const lit_3885 = 0x42480000;

/* 80C540E8-80C540EC 0004+00 s=2 e=0 z=0  None .bss       None                                                         */
static u8 data_80C540E8[4];

/* 80C540EC-80C540F8 000C+00 s=1 e=0 z=0  None .bss       @3763                                                        */
static u8 lit_3763[12];

/* 80C540F8-80C54108 0010+00 s=3 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[16];

/* 80C53600-80C5396C 036C+00 s=1 e=0 z=0  None .text      action__FP14obj_lbox_class                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void action(obj_lbox_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/action__FP14obj_lbox_class.s"
}
#pragma pop


/* 80C5396C-80C539C8 005C+00 s=2 e=0 z=0  None .text      daObj_Lbox_Execute__FP14obj_lbox_class                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Lbox_Execute(obj_lbox_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/daObj_Lbox_Execute__FP14obj_lbox_class.s"
}
#pragma pop


/* 80C539C8-80C539D0 0008+00 s=1 e=0 z=0  None .text      daObj_Lbox_IsDelete__FP14obj_lbox_class                      */
static bool daObj_Lbox_IsDelete(obj_lbox_class* param_0) {
	return true;
}


/* ############################################################################################## */
/* 80C53FE8-80C53FEC 0004+00 s=0 e=0 z=0  None .rodata    @3886                                                        */
SECTION_RODATA u32 const lit_3886 = 0x469C4000;

/* 80C53FEC-80C53FF0 0004+00 s=0 e=0 z=0  None .rodata    @3887                                                        */
SECTION_RODATA u32 const lit_3887 = 0x43160000;

/* 80C53FF0-80C53FF4 0004+00 s=1 e=0 z=0  None .rodata    @4020                                                        */
SECTION_RODATA static u32 const lit_4020 = 0xC3480000;

/* 80C53FF4-80C53FF8 0004+00 s=1 e=0 z=0  None .rodata    @4021                                                        */
SECTION_RODATA static u32 const lit_4021 = 0xC53B8000;

/* 80C53FF8-80C53FFC 0004+00 s=1 e=0 z=0  None .rodata    @4022                                                        */
SECTION_RODATA static u32 const lit_4022 = 0x453B8000;

/* 80C53FFC-80C54005 0009+00 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C53FFC = "Obj_lbox";
#pragma pop

/* 80C539D0-80C53A38 0068+00 s=1 e=0 z=0  None .text      daObj_Lbox_Delete__FP14obj_lbox_class                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Lbox_Delete(obj_lbox_class* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/daObj_Lbox_Delete__FP14obj_lbox_class.s"
}
#pragma pop


/* 80C53A38-80C53B3C 0104+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C53B3C-80C53E14 02D8+00 s=1 e=0 z=0  None .text      daObj_Lbox_Create__FP10fopAc_ac_c                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Lbox_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/daObj_Lbox_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C53E14-80C53E5C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/__dt__8cM3dGSphFv.s"
}
#pragma pop


/* 80C53E5C-80C53EA4 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80C53EA4-80C53F14 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop


/* 80C53F14-80C53F5C 0048+00 s=2 e=0 z=0  None .text      __dt__16daObj_Lbox_HIO_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Lbox_HIO_c::~daObj_Lbox_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/__dt__16daObj_Lbox_HIO_cFv.s"
}
#pragma pop


/* 80C53F5C-80C53F98 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_lbox_cpp                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_lbox_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/__sinit_d_a_obj_lbox_cpp.s"
}
#pragma pop


/* 80C53F98-80C53FA0 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C53F98() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/func_80C53F98.s"
}
#pragma pop


/* 80C53FA0-80C53FA8 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C53FA0() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/d_a_obj_lbox/func_80C53FA0.s"
}
#pragma pop


