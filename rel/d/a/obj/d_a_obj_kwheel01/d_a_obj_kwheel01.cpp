// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_kwheel01
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoMtx_stack_c {
	/* 8000CD9C */ void transM(f32, f32, f32);
};

struct fopAc_ac_c {
	/* 80018C8C */ ~fopAc_ac_c();
};

struct daObjKWheel01_c {
	/* 80C4EA78 */ void create1st();
	/* 80C4EC54 */ void setMtx();
	/* 80C4EDCC */ void CreateHeap();
	/* 80C4EF38 */ void Create();
	/* 80C4F048 */ void Execute(f32 (** )[3][4]);
	/* 80C4F344 */ void Draw();
	/* 80C4F3E8 */ void Delete();
	/* 80C4F498 */ void eventStart();
	/* 80C4F60C */ ~daObjKWheel01_c();
};

struct dSv_info_c {
	/* 80035360 */ void isSwitch(int, int) const;
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

struct dEvent_manager_c {
	/* 80047698 */ void getEventIdx(fopAc_ac_c*, u8);
};

struct dEvLib_callback_c {
	/* 8004886C */ void eventUpdate();
	/* 800488A4 */ void setEvent(int, int, int);
	/* 80C4F5AC */ ~dEvLib_callback_c();
	/* 80C4F5F4 */ bool eventStart();
	/* 80C4F5FC */ bool eventRun();
	/* 80C4F604 */ bool eventEnd();
};

struct dBgW_Base {
};

struct dBgW {
	/* 8007B970 */ dBgW();
	/* 8007B9C0 */ void Move();
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

struct dBgS {
	/* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
	/* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {
};

struct cBgW {
	/* 80079F38 */ void Set(cBgD_t*, u32, f32 (* )[3][4]);
};

struct cBgS {
	/* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {
};

struct Vec {
};

struct Z2SeMgr {
	/* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {
};

// 
// Forward References:
// 

static void searchKWheel00(void*, void*);
static void daObjKWheel01_create1st(daObjKWheel01_c*);
static void daObjKWheel01_MoveBGDelete(daObjKWheel01_c*);
static void daObjKWheel01_MoveBGExecute(daObjKWheel01_c*);
static void daObjKWheel01_MoveBGDraw(daObjKWheel01_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_KWheel01[12];

extern "C" void create1st__15daObjKWheel01_cFv();
extern "C" void setMtx__15daObjKWheel01_cFv();
extern "C" void CreateHeap__15daObjKWheel01_cFv();
extern "C" void Create__15daObjKWheel01_cFv();
extern "C" static void searchKWheel00__FPvPv();
extern "C" void Execute__15daObjKWheel01_cFPPA3_A4_f();
extern "C" void Draw__15daObjKWheel01_cFv();
extern "C" void Delete__15daObjKWheel01_cFv();
extern "C" void eventStart__15daObjKWheel01_cFv();
extern "C" static void daObjKWheel01_create1st__FP15daObjKWheel01_c();
extern "C" static void daObjKWheel01_MoveBGDelete__FP15daObjKWheel01_c();
extern "C" static void daObjKWheel01_MoveBGExecute__FP15daObjKWheel01_c();
extern "C" static void daObjKWheel01_MoveBGDraw__FP15daObjKWheel01_c();
extern "C" void __dt__17dEvLib_callback_cFv();
extern "C" bool eventStart__17dEvLib_callback_cFv();
extern "C" bool eventRun__17dEvLib_callback_cFv();
extern "C" bool eventEnd__17dEvLib_callback_cFv();
extern "C" void __dt__15daObjKWheel01_cFv();
extern "C" static void func_80C4F6A0();
extern "C" static void func_80C4F6A8();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_KWheel01[12];

// 
// External References:
// 

void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAc_IsActor(void*);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_create(s16, u32, cXyz const*, int, csXyz const*, cXyz const*, s8);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fpcSch_JudgeByID(void*, void*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cM_rndFX(f32);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void eventUpdate__17dEvLib_callback_cFv();
extern "C" void setEvent__17dEvLib_callback_cFiii();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cM_rndFX__Ff();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80C4F6B8-80C4F6C4 000C+00 s=2 e=0 z=0  None .rodata    l_dzbidx                                                     */
SECTION_RODATA static u8 const l_dzbidx[12] = {
	0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0A,
};

/* 80C4F6C4-80C4F6CC 0008+00 s=1 e=0 z=0  None .rodata    l_bmdidx                                                     */
SECTION_RODATA static u8 const l_bmdidx[8] = {
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
};

/* 80C4F6CC-80C4F6E4 0018+00 s=1 e=0 z=0  None .rodata    l_cull_box                                                   */
SECTION_RODATA static u8 const l_cull_box[24] = {
	0xC4, 0x9D, 0x80, 0x00, 0xC5, 0x3E, 0xA0, 0x00, 0xC4, 0x9D, 0x80, 0x00, 0x44, 0x9D, 0x80, 0x00,
	0x45, 0x2F, 0x00, 0x00, 0x44, 0x9D, 0x80, 0x00,
};

/* 80C4F6E4-80C4F6E8 0004+00 s=2 e=0 z=0  None .rodata    @3717                                                        */
SECTION_RODATA static u32 const lit_3717 = 0x3F800000;

/* 80C4F6E8-80C4F6EC 0004+00 s=1 e=0 z=0  None .rodata    @3888                                                        */
SECTION_RODATA static u32 const lit_3888 = 0xBF800000;

/* 80C4F6EC-80C4F6F6 000A+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C4F6EC = "K_Wheel01";
#pragma pop

/* 80C4F6F8-80C4F6FC 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C4F6FC-80C4F72C 0030+00 s=3 e=0 z=0  None .data      l_pos                                                        */
SECTION_DATA static u8 l_pos[48] = {
	0x44, 0x68, 0x80, 0x00, 0xC3, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xC3, 0x25, 0x00, 0x00, 0x44, 0x68, 0x80, 0x00, 0xC4, 0x68, 0x80, 0x00, 0xC3, 0x25, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x25, 0x00, 0x00, 0xC4, 0x68, 0x80, 0x00,
};

/* 80C4EA78-80C4EC54 01DC+00 s=1 e=0 z=0  None .text      create1st__15daObjKWheel01_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel01_c::create1st() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/create1st__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4EC54-80C4EDCC 0178+00 s=2 e=0 z=0  None .text      setMtx__15daObjKWheel01_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel01_c::setMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/setMtx__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4EDCC-80C4EF38 016C+00 s=1 e=0 z=0  None .text      CreateHeap__15daObjKWheel01_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel01_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/CreateHeap__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4EF38-80C4EFEC 00B4+00 s=1 e=0 z=0  None .text      Create__15daObjKWheel01_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel01_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/Create__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4EFEC-80C4F048 005C+00 s=1 e=0 z=0  None .text      searchKWheel00__FPvPv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void searchKWheel00(void* param_0, void* param_1) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/searchKWheel00__FPvPv.s"
}
#pragma pop


/* 80C4F048-80C4F344 02FC+00 s=1 e=0 z=0  None .text      Execute__15daObjKWheel01_cFPPA3_A4_f                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel01_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/Execute__15daObjKWheel01_cFPPA3_A4_f.s"
}
#pragma pop


/* 80C4F344-80C4F3E8 00A4+00 s=1 e=0 z=0  None .text      Draw__15daObjKWheel01_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel01_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/Draw__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4F3E8-80C4F498 00B0+00 s=1 e=0 z=0  None .text      Delete__15daObjKWheel01_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel01_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/Delete__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4F498-80C4F4C0 0028+00 s=3 e=0 z=0  None .text      eventStart__15daObjKWheel01_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKWheel01_c::eventStart() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/eventStart__15daObjKWheel01_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C4F72C-80C4F74C 0020+00 s=1 e=0 z=0  None .data      daObjKWheel01_METHODS                                        */
SECTION_DATA static void* daObjKWheel01_METHODS[8] = {
	(void*)daObjKWheel01_create1st__FP15daObjKWheel01_c,
	(void*)daObjKWheel01_MoveBGDelete__FP15daObjKWheel01_c,
	(void*)daObjKWheel01_MoveBGExecute__FP15daObjKWheel01_c,
	(void*)NULL,
	(void*)daObjKWheel01_MoveBGDraw__FP15daObjKWheel01_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C4F74C-80C4F77C 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_KWheel01                                       */
SECTION_DATA void* g_profile_Obj_KWheel01[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00C80000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000704,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02970000,
	(void*)&daObjKWheel01_METHODS,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80C4F77C-80C4F794 0018+00 s=3 e=0 z=0  None .data      __vt__17dEvLib_callback_c                                    */
SECTION_DATA static void* __vt__17dEvLib_callback_c[6] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__17dEvLib_callback_cFv,
	(void*)eventStart__17dEvLib_callback_cFv,
	(void*)eventRun__17dEvLib_callback_cFv,
	(void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80C4F794-80C4F7DC 0048+00 s=2 e=0 z=0  None .data      __vt__15daObjKWheel01_c                                      */
SECTION_DATA static void* __vt__15daObjKWheel01_c[18] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__15daObjKWheel01_cFv,
	(void*)Create__15daObjKWheel01_cFv,
	(void*)Execute__15daObjKWheel01_cFPPA3_A4_f,
	(void*)Draw__15daObjKWheel01_cFv,
	(void*)Delete__15daObjKWheel01_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80C4F6A8,
	(void*)func_80C4F6A0,
	(void*)eventRun__17dEvLib_callback_cFv,
	(void*)eventEnd__17dEvLib_callback_cFv,
	(void*)__dt__15daObjKWheel01_cFv,
	(void*)eventStart__15daObjKWheel01_cFv,
};

/* 80C4F4C0-80C4F540 0080+00 s=2 e=0 z=0  None .text      daObjKWheel01_create1st__FP15daObjKWheel01_c                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKWheel01_create1st(daObjKWheel01_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/daObjKWheel01_create1st__FP15daObjKWheel01_c.s"
}
#pragma pop


/* 80C4F540-80C4F560 0020+00 s=1 e=0 z=0  None .text      daObjKWheel01_MoveBGDelete__FP15daObjKWheel01_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKWheel01_MoveBGDelete(daObjKWheel01_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/daObjKWheel01_MoveBGDelete__FP15daObjKWheel01_c.s"
}
#pragma pop


/* 80C4F560-80C4F580 0020+00 s=1 e=0 z=0  None .text      daObjKWheel01_MoveBGExecute__FP15daObjKWheel01_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKWheel01_MoveBGExecute(daObjKWheel01_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/daObjKWheel01_MoveBGExecute__FP15daObjKWheel01_c.s"
}
#pragma pop


/* 80C4F580-80C4F5AC 002C+00 s=1 e=0 z=0  None .text      daObjKWheel01_MoveBGDraw__FP15daObjKWheel01_c                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKWheel01_MoveBGDraw(daObjKWheel01_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/daObjKWheel01_MoveBGDraw__FP15daObjKWheel01_c.s"
}
#pragma pop


/* 80C4F5AC-80C4F5F4 0048+00 s=1 e=0 z=0  None .text      __dt__17dEvLib_callback_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvLib_callback_c::~dEvLib_callback_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/__dt__17dEvLib_callback_cFv.s"
}
#pragma pop


/* 80C4F5F4-80C4F5FC 0008+00 s=1 e=0 z=0  None .text      eventStart__17dEvLib_callback_cFv                            */
bool dEvLib_callback_c::eventStart() {
	return true;
}


/* 80C4F5FC-80C4F604 0008+00 s=2 e=0 z=0  None .text      eventRun__17dEvLib_callback_cFv                              */
bool dEvLib_callback_c::eventRun() {
	return true;
}


/* 80C4F604-80C4F60C 0008+00 s=2 e=0 z=0  None .text      eventEnd__17dEvLib_callback_cFv                              */
bool dEvLib_callback_c::eventEnd() {
	return true;
}


/* 80C4F60C-80C4F6A0 0094+00 s=2 e=0 z=0  None .text      __dt__15daObjKWheel01_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjKWheel01_c::~daObjKWheel01_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/__dt__15daObjKWheel01_cFv.s"
}
#pragma pop


/* 80C4F6A0-80C4F6A8 0008+00 s=1 e=0 z=0  None .text      @1448@eventStart__15daObjKWheel01_cFv                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C4F6A0() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/func_80C4F6A0.s"
}
#pragma pop


/* 80C4F6A8-80C4F6B0 0008+00 s=1 e=0 z=0  None .text      @1448@__dt__15daObjKWheel01_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C4F6A8() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kwheel01/d_a_obj_kwheel01/func_80C4F6A8.s"
}
#pragma pop


