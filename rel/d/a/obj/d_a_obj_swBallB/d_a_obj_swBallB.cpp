// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_swBallB
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoMtx_stack_c {
	/* 8000CD9C */ void transM(f32, f32, f32);
};

struct J3DAnmTextureSRTKey {
};

struct J3DMaterialTable {
};

struct mDoExt_btkAnm {
	/* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
	/* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
	/* 8000D428 */ void play();
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
	/* 80018C8C */ ~fopAc_ac_c();
};

struct fast_create_request {
};

struct daObjSwBallB_c {
	/* 80CF466C */ void checkArea_sub(fopAc_ac_c*);
	/* 80CF47BC */ void search_ball();
	/* 80CF496C */ void initBaseMtx();
	/* 80CF498C */ void setBaseMtx();
	/* 80CF49F0 */ void Create();
	/* 80CF4B74 */ void CreateHeap();
	/* 80CF4CE8 */ void create();
	/* 80CF4E08 */ void execute();
	/* 80CF4EB8 */ void actionRun();
	/* 80CF5384 */ void actionStop();
	/* 80CF5388 */ void PutCrrPos();
	/* 80CF56A4 */ void draw();
	/* 80CF582C */ void _delete();
	/* 80CF5940 */ ~daObjSwBallB_c();
};

struct dSv_info_c {
	/* 80035200 */ void onSwitch(int, int);
	/* 800352B0 */ void offSwitch(int, int);
	/* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_c {
	/* 8003498C */ void onEventBit(u16);
};

struct dStage_roomControl_c {
	/* 80024338 */ void initZone();
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

struct dEvLib_callback_c {
	/* 8004886C */ void eventUpdate();
	/* 80048940 */ void orderEvent(int, int, int);
	/* 80CF58E0 */ ~dEvLib_callback_c();
	/* 80CF5928 */ bool eventStart();
	/* 80CF5930 */ bool eventRun();
	/* 80CF5938 */ bool eventEnd();
};

struct JAISoundID {
};

struct Vec {
};

struct Z2SeMgr {
	/* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
	/* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {
};

struct J3DFrameCtrl {
	/* 803283FC */ void init(s16);
	/* 80CF4CA0 */ ~J3DFrameCtrl();
};

// 
// Forward References:
// 

static void s_ball_sub(void*, void*);
static void CheckCreateHeap(fopAc_ac_c*);
static void daObjSwBallB_Draw(daObjSwBallB_c*);
static void daObjSwBallB_Execute(daObjSwBallB_c*);
static void daObjSwBallB_Delete(daObjSwBallB_c*);
static void daObjSwBallB_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_SwBallB[12];

extern "C" static void s_ball_sub__FPvPv();
extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void checkArea_sub__14daObjSwBallB_cFP10fopAc_ac_c();
extern "C" void search_ball__14daObjSwBallB_cFv();
extern "C" void initBaseMtx__14daObjSwBallB_cFv();
extern "C" void setBaseMtx__14daObjSwBallB_cFv();
extern "C" void Create__14daObjSwBallB_cFv();
extern "C" void CreateHeap__14daObjSwBallB_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create__14daObjSwBallB_cFv();
extern "C" void execute__14daObjSwBallB_cFv();
extern "C" void actionRun__14daObjSwBallB_cFv();
extern "C" void actionStop__14daObjSwBallB_cFv();
extern "C" void PutCrrPos__14daObjSwBallB_cFv();
extern "C" void draw__14daObjSwBallB_cFv();
extern "C" void _delete__14daObjSwBallB_cFv();
extern "C" static void daObjSwBallB_Draw__FP14daObjSwBallB_c();
extern "C" static void daObjSwBallB_Execute__FP14daObjSwBallB_c();
extern "C" static void daObjSwBallB_Delete__FP14daObjSwBallB_c();
extern "C" static void daObjSwBallB_Create__FP10fopAc_ac_c();
extern "C" void __dt__17dEvLib_callback_cFv();
extern "C" bool eventStart__17dEvLib_callback_cFv();
extern "C" bool eventRun__17dEvLib_callback_cFv();
extern "C" bool eventEnd__17dEvLib_callback_cFv();
extern "C" void __dt__14daObjSwBallB_cFv();
extern "C" static void func_80CF59C0();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_SwBallB[12];

// 
// External References:
// 

void mDoMtx_XrotS(f32 (* )[4], s16);
void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_btkAnmRemove(J3DModelData*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAc_IsActor(void*);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_searchActorDistanceXZ(fopAc_ac_c const*, fopAc_ac_c const*);
void fpcEx_Search(void* (*)(void*, void*), void*);
void fpcSch_JudgeByID(void*, void*);
void fpcDw_Handler(int (*)(int (*)(void*, void*)), int (*)(void*, void*));
void fpcFCtRq_Do(fast_create_request*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dLib_checkActorInRectangle(fopAc_ac_c*, fopAc_ac_c*, cXyz const*, cXyz const*);
void cLib_chaseF(f32*, f32, f32);
void cLib_targetAngleY(Vec const*, Vec const*);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 struct_80450D64[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_btkAnmRemove__FP12J3DModelData();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void fpcDw_Handler__FPFPFPvPv_i_iPFPvPv_i();
extern "C" void fpcFCtRq_Do__FP19fast_create_request();
extern "C" void initZone__20dStage_roomControl_cFv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void eventUpdate__17dEvLib_callback_cFv();
extern "C" void orderEvent__17dEvLib_callback_cFiii();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXConcat();
extern "C" void PSMTXTrans();
extern "C" void C_MTXLightOrtho();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_22();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 struct_80450D64[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80CF5B10-80CF5B18 0008+00 s=2 e=0 z=0  None .bss       l_target_info                                                */
static u8 l_target_info[8];

/* 80CF5B18-80CF5B1C 0004+00 s=2 e=0 z=0  None .bss       l_target_info_count                                          */
static u8 l_target_info_count[4];

/* 80CF45B8-80CF464C 0094+00 s=1 e=0 z=0  None .text      s_ball_sub__FPvPv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void s_ball_sub(void* param_0, void* param_1) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/s_ball_sub__FPvPv.s"
}
#pragma pop


/* 80CF464C-80CF466C 0020+00 s=1 e=0 z=0  None .text      CheckCreateHeap__FP10fopAc_ac_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void CheckCreateHeap(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CF59D0-80CF59D4 0004+00 s=5 e=0 z=0  None .rodata    l_color                                                      */
SECTION_RODATA static u32 const l_color = 0x0396FFFF;

/* 80CF59D4-80CF59E0 000C+00 s=1 e=0 z=0  None .rodata    l_event_bitA                                                 */
SECTION_RODATA static u8 const l_event_bitA[12] = {
	0x43, 0x04, 0x43, 0x02, 0x43, 0x01, 0x44, 0x80, 0x44, 0x40, 0x44, 0x20,
};

/* 80CF59E0-80CF59EC 000C+00 s=1 e=0 z=0  None .rodata    l_event_bitB                                                 */
SECTION_RODATA static u8 const l_event_bitB[12] = {
	0x44, 0x10, 0x44, 0x08, 0x44, 0x04, 0x44, 0x02, 0x44, 0x01, 0x45, 0x80,
};

/* 80CF59EC-80CF59F0 0004+00 s=2 e=0 z=0  None .rodata    @3752                                                        */
SECTION_RODATA static u32 const lit_3752 = 0x41200000;

/* 80CF59F0-80CF59F4 0004+00 s=2 e=0 z=0  None .rodata    @3753                                                        */
SECTION_RODATA static u32 const lit_3753 = 0x42C80000;

/* 80CF59F4-80CF59F8 0004+00 s=2 e=0 z=0  None .rodata    @3754                                                        */
SECTION_RODATA static u32 const lit_3754 = 0xC2C80000;

/* 80CF59F8-80CF5A00 0004+04 s=4 e=0 z=0  None .rodata    @3755                                                        */
SECTION_RODATA static u8 const lit_3755[4 + 4 /* padding */] = {
	0x00, 0x00, 0x00, 0x00,
	/* padding */
	0x00, 0x00, 0x00, 0x00,
};

/* 80CF466C-80CF47BC 0150+00 s=1 e=0 z=0  None .text      checkArea_sub__14daObjSwBallB_cFP10fopAc_ac_c                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwBallB_c::checkArea_sub(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/checkArea_sub__14daObjSwBallB_cFP10fopAc_ac_c.s"
}
#pragma pop


/* 80CF47BC-80CF496C 01B0+00 s=1 e=0 z=0  None .text      search_ball__14daObjSwBallB_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwBallB_c::search_ball() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/search_ball__14daObjSwBallB_cFv.s"
}
#pragma pop


/* 80CF496C-80CF498C 0020+00 s=1 e=0 z=0  None .text      initBaseMtx__14daObjSwBallB_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwBallB_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/initBaseMtx__14daObjSwBallB_cFv.s"
}
#pragma pop


/* 80CF498C-80CF49F0 0064+00 s=1 e=0 z=0  None .text      setBaseMtx__14daObjSwBallB_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwBallB_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/setBaseMtx__14daObjSwBallB_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CF5A00-80CF5A08 0008+00 s=1 e=0 z=0  None .rodata    @3935                                                        */
SECTION_RODATA static u8 const lit_3935[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80CF49F0-80CF4B74 0184+00 s=1 e=0 z=0  None .text      Create__14daObjSwBallB_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwBallB_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/Create__14daObjSwBallB_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CF5A08-80CF5A0C 0004+00 s=3 e=0 z=0  None .rodata    @3969                                                        */
SECTION_RODATA static u32 const lit_3969 = 0x3F800000;

/* 80CF5A0C-80CF5A10 0004+00 s=1 e=0 z=0  None .rodata    @4178                                                        */
SECTION_RODATA static u32 const lit_4178 = 0xBF800000;

/* 80CF5A10-80CF5A14 0004+00 s=1 e=0 z=0  None .rodata    @4276                                                        */
SECTION_RODATA static u32 const lit_4276 = 0x43160000;

/* 80CF5A14-80CF5A1D 0009+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CF5A14 = "P_LBswBC";
#pragma pop

/* 80CF5A20-80CF5A2C 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CF5A2C-80CF5A40 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 80CF5A40-80CF5A44 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80CF5A44-80CF5A50 000C+00 s=1 e=0 z=0  None .data      @4007                                                        */
SECTION_DATA static void* lit_4007[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)actionRun__14daObjSwBallB_cFv,
};

/* 80CF5A50-80CF5A5C 000C+00 s=1 e=0 z=0  None .data      @4008                                                        */
SECTION_DATA static void* lit_4008[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)actionStop__14daObjSwBallB_cFv,
};

/* 80CF5A5C-80CF5A74 0018+00 s=1 e=0 z=0  None .data      l_func$4006                                                  */
SECTION_DATA static u8 l_func[24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CF5A74-80CF5A94 0020+00 s=1 e=0 z=0  None .data      l_daObjSwBallB_Method                                        */
SECTION_DATA static void* l_daObjSwBallB_Method[8] = {
	(void*)daObjSwBallB_Create__FP10fopAc_ac_c,
	(void*)daObjSwBallB_Delete__FP14daObjSwBallB_c,
	(void*)daObjSwBallB_Execute__FP14daObjSwBallB_c,
	(void*)NULL,
	(void*)daObjSwBallB_Draw__FP14daObjSwBallB_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80CF5A94-80CF5AC4 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_SwBallB                                        */
SECTION_DATA void* g_profile_Obj_SwBallB[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x019A0000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005B0,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x023C0000,
	(void*)&l_daObjSwBallB_Method,
	(void*)0x00044100,
	(void*)0x000E0000,
};

/* 80CF5AC4-80CF5AE8 0024+00 s=2 e=0 z=0  None .data      __vt__14daObjSwBallB_c                                       */
SECTION_DATA static void* __vt__14daObjSwBallB_c[9] = {
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80CF59C0,
	(void*)eventStart__17dEvLib_callback_cFv,
	(void*)eventRun__17dEvLib_callback_cFv,
	(void*)eventEnd__17dEvLib_callback_cFv,
	(void*)__dt__14daObjSwBallB_cFv,
};

/* 80CF5AE8-80CF5B00 0018+00 s=3 e=0 z=0  None .data      __vt__17dEvLib_callback_c                                    */
SECTION_DATA static void* __vt__17dEvLib_callback_c[6] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__17dEvLib_callback_cFv,
	(void*)eventStart__17dEvLib_callback_cFv,
	(void*)eventRun__17dEvLib_callback_cFv,
	(void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80CF5B00-80CF5B0C 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl                                         */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12J3DFrameCtrlFv,
};

/* 80CF4B74-80CF4CA0 012C+00 s=1 e=0 z=0  None .text      CreateHeap__14daObjSwBallB_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwBallB_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/CreateHeap__14daObjSwBallB_cFv.s"
}
#pragma pop


/* 80CF4CA0-80CF4CE8 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop


/* 80CF4CE8-80CF4E08 0120+00 s=1 e=0 z=0  None .text      create__14daObjSwBallB_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwBallB_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/func_80CF4CE8.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CF5B1C-80CF5B20 0004+00 s=1 e=0 z=0  None .bss       None                                                         */
static u8 data_80CF5B1C[4];

/* 80CF4E08-80CF4EB8 00B0+00 s=2 e=0 z=0  None .text      execute__14daObjSwBallB_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwBallB_c::execute() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/execute__14daObjSwBallB_cFv.s"
}
#pragma pop


/* 80CF4EB8-80CF5384 04CC+00 s=1 e=0 z=0  None .text      actionRun__14daObjSwBallB_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwBallB_c::actionRun() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/actionRun__14daObjSwBallB_cFv.s"
}
#pragma pop


/* 80CF5384-80CF5388 0004+00 s=1 e=0 z=0  None .text      actionStop__14daObjSwBallB_cFv                               */
void daObjSwBallB_c::actionStop() {
	/* empty function */
}


/* 80CF5388-80CF56A4 031C+00 s=1 e=0 z=0  None .text      PutCrrPos__14daObjSwBallB_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwBallB_c::PutCrrPos() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/PutCrrPos__14daObjSwBallB_cFv.s"
}
#pragma pop


/* 80CF56A4-80CF582C 0188+00 s=1 e=0 z=0  None .text      draw__14daObjSwBallB_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwBallB_c::draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/draw__14daObjSwBallB_cFv.s"
}
#pragma pop


/* 80CF582C-80CF5860 0034+00 s=1 e=0 z=0  None .text      _delete__14daObjSwBallB_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSwBallB_c::_delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/_delete__14daObjSwBallB_cFv.s"
}
#pragma pop


/* 80CF5860-80CF5880 0020+00 s=1 e=0 z=0  None .text      daObjSwBallB_Draw__FP14daObjSwBallB_c                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSwBallB_Draw(daObjSwBallB_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/daObjSwBallB_Draw__FP14daObjSwBallB_c.s"
}
#pragma pop


/* 80CF5880-80CF58A0 0020+00 s=1 e=0 z=0  None .text      daObjSwBallB_Execute__FP14daObjSwBallB_c                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSwBallB_Execute(daObjSwBallB_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/daObjSwBallB_Execute__FP14daObjSwBallB_c.s"
}
#pragma pop


/* 80CF58A0-80CF58C0 0020+00 s=1 e=0 z=0  None .text      daObjSwBallB_Delete__FP14daObjSwBallB_c                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSwBallB_Delete(daObjSwBallB_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/daObjSwBallB_Delete__FP14daObjSwBallB_c.s"
}
#pragma pop


/* 80CF58C0-80CF58E0 0020+00 s=1 e=0 z=0  None .text      daObjSwBallB_Create__FP10fopAc_ac_c                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSwBallB_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/daObjSwBallB_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80CF58E0-80CF5928 0048+00 s=1 e=0 z=0  None .text      __dt__17dEvLib_callback_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvLib_callback_c::~dEvLib_callback_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/__dt__17dEvLib_callback_cFv.s"
}
#pragma pop


/* 80CF5928-80CF5930 0008+00 s=2 e=0 z=0  None .text      eventStart__17dEvLib_callback_cFv                            */
bool dEvLib_callback_c::eventStart() {
	return true;
}


/* 80CF5930-80CF5938 0008+00 s=2 e=0 z=0  None .text      eventRun__17dEvLib_callback_cFv                              */
bool dEvLib_callback_c::eventRun() {
	return true;
}


/* 80CF5938-80CF5940 0008+00 s=2 e=0 z=0  None .text      eventEnd__17dEvLib_callback_cFv                              */
bool dEvLib_callback_c::eventEnd() {
	return true;
}


/* 80CF5940-80CF59C0 0080+00 s=2 e=0 z=0  None .text      __dt__14daObjSwBallB_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjSwBallB_c::~daObjSwBallB_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/__dt__14daObjSwBallB_cFv.s"
}
#pragma pop


/* 80CF59C0-80CF59C8 0008+00 s=1 e=0 z=0  None .text      @1384@__dt__14daObjSwBallB_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80CF59C0() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swBallB/d_a_obj_swBallB/func_80CF59C0.s"
}
#pragma pop


