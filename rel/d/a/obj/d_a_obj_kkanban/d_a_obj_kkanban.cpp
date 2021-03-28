// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_kkanban
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct fopAc_ac_c {
};

struct daObjKKanban_c {
	/* 80C46768 */ void initBaseMtx();
	/* 80C467A4 */ void setBaseMtx();
	/* 80C46808 */ void Create();
	/* 80C46928 */ void setTG();
	/* 80C469F4 */ void CreateHeap();
	/* 80C46A64 */ void create1st();
	/* 80C46AE4 */ void Execute(f32 (** )[3][4]);
	/* 80C46C1C */ void Draw();
	/* 80C46CC0 */ void Delete();
};

struct dKy_tevstr_c {
};

struct J3DModelData {
};

struct cXyz {
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

struct dCcD_SrcTri {
};

struct dCcD_Tri {
	/* 80084884 */ void Set(dCcD_SrcTri const&);
};

struct dCcD_Stts {
	/* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_GStts {
	/* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ dCcD_GObjInf();
	/* 80084460 */ void ChkTgHit();
};

struct dBgW {
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

struct Vec {
};

struct cM3dGTri {
	/* 8026F7DC */ void setPos(Vec const*, Vec const*, Vec const*);
	/* 80C46DF4 */ ~cM3dGTri();
};

struct cM3dGPla {
	/* 80C46E50 */ ~cM3dGPla();
};

struct cM3dGAab {
	/* 80C46E98 */ ~cM3dGAab();
};

struct cCcD_Obj {
};

struct cCcS {
	/* 80264BA8 */ void Set(cCcD_Obj*);
};

struct JUTNameTab {
	/* 802DEAF8 */ void getName(u16) const;
};

struct J3DModel {
};

struct J3DJoint {
};

// 
// Forward References:
// 

static void nodeCallBack(J3DJoint*, int);
static void daObjKKanban_create1st(daObjKKanban_c*);
static void daObjKKanban_MoveBGDelete(daObjKKanban_c*);
static void daObjKKanban_MoveBGExecute(daObjKKanban_c*);
static void daObjKKanban_MoveBGDraw(daObjKKanban_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_KKanban[12];

extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" void initBaseMtx__14daObjKKanban_cFv();
extern "C" void setBaseMtx__14daObjKKanban_cFv();
extern "C" void Create__14daObjKKanban_cFv();
extern "C" void setTG__14daObjKKanban_cFv();
extern "C" void CreateHeap__14daObjKKanban_cFv();
extern "C" void create1st__14daObjKKanban_cFv();
extern "C" void Execute__14daObjKKanban_cFPPA3_A4_f();
extern "C" void Draw__14daObjKKanban_cFv();
extern "C" void Delete__14daObjKKanban_cFv();
extern "C" static void daObjKKanban_create1st__FP14daObjKKanban_c();
extern "C" void __dt__8cM3dGTriFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" static void daObjKKanban_MoveBGDelete__FP14daObjKKanban_c();
extern "C" static void daObjKKanban_MoveBGExecute__FP14daObjKKanban_c();
extern "C" static void daObjKKanban_MoveBGDraw__FP14daObjKKanban_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_KKanban[12];

// 
// External References:
// 

void mDoMtx_XrotM(f32 (* )[4], s16);
void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoMtx_ZrotM(f32 (* )[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void cLib_addCalc0(f32*, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Tri[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_TriAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 sincosTable___5JMath[65536];

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_TriFRC11dCcD_SrcTri();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void setPos__8cM3dGTriFPC3VecPC3VecPC3Vec();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void __dl__FPv();
extern "C" void getName__10JUTNameTabCFUs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Tri[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_TriAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 sincosTable___5JMath[65536];

// 
// Declarations:
// 

/* 80C46698-80C46768 00D0+00 s=1 e=0 z=0  None .text      nodeCallBack__FP8J3DJointi                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void nodeCallBack(J3DJoint* param_0, int param_1) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop


/* 80C46768-80C467A4 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__14daObjKKanban_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/initBaseMtx__14daObjKKanban_cFv.s"
}
#pragma pop


/* 80C467A4-80C46808 0064+00 s=2 e=0 z=0  None .text      setBaseMtx__14daObjKKanban_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/setBaseMtx__14daObjKKanban_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C46F54-80C46F58 0004+00 s=3 e=0 z=0  None .rodata    @3715                                                        */
SECTION_RODATA static u32 const lit_3715 = 0xC46D8000;

/* 80C46F58-80C46F5C 0004+00 s=1 e=0 z=0  None .rodata    @3716                                                        */
SECTION_RODATA static u32 const lit_3716 = 0xC5066000;

/* 80C46F5C-80C46F60 0004+00 s=1 e=0 z=0  None .rodata    @3717                                                        */
SECTION_RODATA static u32 const lit_3717 = 0xC4FA0000;

/* 80C46F60-80C46F64 0004+00 s=2 e=0 z=0  None .rodata    @3718                                                        */
SECTION_RODATA static u32 const lit_3718 = 0x42C80000;

/* 80C46F64-80C46F68 0004+00 s=2 e=0 z=0  None .rodata    @3719                                                        */
SECTION_RODATA static u32 const lit_3719 = 0x42480000;

/* 80C46F68-80C46F6C 0004+00 s=1 e=0 z=0  None .rodata    @3720                                                        */
SECTION_RODATA static u32 const lit_3720 = 0x44480000;

/* 80C46F6C-80C46F70 0004+00 s=1 e=0 z=0  None .rodata    @3747                                                        */
SECTION_RODATA static u8 const lit_3747[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C46F70-80C46F74 0004+00 s=1 e=0 z=0  None .rodata    @3748                                                        */
SECTION_RODATA static u32 const lit_3748 = 0xC3FA0000;

/* 80C46F74-80C46F78 0004+00 s=1 e=0 z=0  None .rodata    @3749                                                        */
SECTION_RODATA static u32 const lit_3749 = 0xC4960000;

/* 80C46F78-80C46F7C 0004+00 s=1 e=0 z=0  None .rodata    @3750                                                        */
SECTION_RODATA static u32 const lit_3750 = 0x443E0000;

/* 80C46F7C-80C46F80 0004+00 s=1 e=0 z=0  None .rodata    @3784                                                        */
SECTION_RODATA static u32 const lit_3784 = 0x3D4CCCCD;

/* 80C46F80-80C46F84 0004+00 s=1 e=0 z=0  None .rodata    @3785                                                        */
SECTION_RODATA static u32 const lit_3785 = 0x41200000;

/* 80C46F84-80C46F88 0004+00 s=1 e=0 z=0  None .rodata    @3786                                                        */
SECTION_RODATA static u32 const lit_3786 = 0x44FA0000;

/* 80C46F88-80C46F97 000F+00 s=2 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C46F88 = "H_KKanban";
SECTION_DEAD char const* const stringBase_80C46F92 = "move";
#pragma pop

/* 80C46F98-80C46F9C 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C46F9C-80C46FF0 0054+00 s=1 e=0 z=0  None .data      l_tri_src                                                    */
SECTION_DATA static u8 l_tri_src[84] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

/* 80C46808-80C46928 0120+00 s=1 e=0 z=0  None .text      Create__14daObjKKanban_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/Create__14daObjKKanban_cFv.s"
}
#pragma pop


/* 80C46928-80C469F4 00CC+00 s=1 e=0 z=0  None .text      setTG__14daObjKKanban_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::setTG() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/setTG__14daObjKKanban_cFv.s"
}
#pragma pop


/* 80C469F4-80C46A64 0070+00 s=1 e=0 z=0  None .text      CreateHeap__14daObjKKanban_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/CreateHeap__14daObjKKanban_cFv.s"
}
#pragma pop


/* 80C46A64-80C46AE4 0080+00 s=1 e=0 z=0  None .text      create1st__14daObjKKanban_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::create1st() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/create1st__14daObjKKanban_cFv.s"
}
#pragma pop


/* 80C46AE4-80C46C1C 0138+00 s=1 e=0 z=0  None .text      Execute__14daObjKKanban_cFPPA3_A4_f                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/Execute__14daObjKKanban_cFPPA3_A4_f.s"
}
#pragma pop


/* 80C46C1C-80C46CC0 00A4+00 s=1 e=0 z=0  None .text      Draw__14daObjKKanban_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/Draw__14daObjKKanban_cFv.s"
}
#pragma pop


/* 80C46CC0-80C46CF4 0034+00 s=1 e=0 z=0  None .text      Delete__14daObjKKanban_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/Delete__14daObjKKanban_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C46FF0-80C47010 0020+00 s=1 e=0 z=0  None .data      daObjKKanban_METHODS                                         */
SECTION_DATA static void* daObjKKanban_METHODS[8] = {
	(void*)daObjKKanban_create1st__FP14daObjKKanban_c,
	(void*)daObjKKanban_MoveBGDelete__FP14daObjKKanban_c,
	(void*)daObjKKanban_MoveBGExecute__FP14daObjKKanban_c,
	(void*)NULL,
	(void*)daObjKKanban_MoveBGDraw__FP14daObjKKanban_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C47010-80C47040 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_KKanban                                        */
SECTION_DATA void* g_profile_Obj_KKanban[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00E30000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000754,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02240000,
	(void*)&daObjKKanban_METHODS,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80C47040-80C4704C 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGTri                                              */
SECTION_DATA static void* __vt__8cM3dGTri[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGTriFv,
};

/* 80C4704C-80C47058 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGPla                                              */
SECTION_DATA static void* __vt__8cM3dGPla[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGPlaFv,
};

/* 80C47058-80C47064 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 80C47064-80C4708C 0028+00 s=1 e=0 z=0  None .data      __vt__14daObjKKanban_c                                       */
SECTION_DATA static void* __vt__14daObjKKanban_c[10] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__14daObjKKanban_cFv,
	(void*)Create__14daObjKKanban_cFv,
	(void*)Execute__14daObjKKanban_cFPPA3_A4_f,
	(void*)Draw__14daObjKKanban_cFv,
	(void*)Delete__14daObjKKanban_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C46CF4-80C46DF4 0100+00 s=1 e=0 z=0  None .text      daObjKKanban_create1st__FP14daObjKKanban_c                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKKanban_create1st(daObjKKanban_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/daObjKKanban_create1st__FP14daObjKKanban_c.s"
}
#pragma pop


/* 80C46DF4-80C46E50 005C+00 s=1 e=0 z=0  None .text      __dt__8cM3dGTriFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGTri::~cM3dGTri() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/__dt__8cM3dGTriFv.s"
}
#pragma pop


/* 80C46E50-80C46E98 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGPlaFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGPla::~cM3dGPla() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/__dt__8cM3dGPlaFv.s"
}
#pragma pop


/* 80C46E98-80C46EE0 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80C46EE0-80C46F00 0020+00 s=1 e=0 z=0  None .text      daObjKKanban_MoveBGDelete__FP14daObjKKanban_c                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKKanban_MoveBGDelete(daObjKKanban_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/daObjKKanban_MoveBGDelete__FP14daObjKKanban_c.s"
}
#pragma pop


/* 80C46F00-80C46F20 0020+00 s=1 e=0 z=0  None .text      daObjKKanban_MoveBGExecute__FP14daObjKKanban_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKKanban_MoveBGExecute(daObjKKanban_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/daObjKKanban_MoveBGExecute__FP14daObjKKanban_c.s"
}
#pragma pop


/* 80C46F20-80C46F4C 002C+00 s=1 e=0 z=0  None .text      daObjKKanban_MoveBGDraw__FP14daObjKKanban_c                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKKanban_MoveBGDraw(daObjKKanban_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/daObjKKanban_MoveBGDraw__FP14daObjKKanban_c.s"
}
#pragma pop


