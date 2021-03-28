// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_mvstair
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct cXyz {
	/* 80C9DEDC */ ~cXyz();
	/* 80C9E700 */ cXyz();
};

struct mDoMtx_stack_c {
	/* 8000CD64 */ void transS(cXyz const&);
};

struct fopAc_ac_c {
};

struct daObjStair_c {
	/* 80C9D098 */ void initBaseMtx();
	/* 80C9D0D4 */ void setBaseMtx();
	/* 80C9D148 */ void Create();
	/* 80C9D2B8 */ void CreateHeap();
	/* 80C9D338 */ void create1st();
	/* 80C9D41C */ void event_proc_call();
	/* 80C9D4D8 */ void mode_proc_call();
	/* 80C9D594 */ void Execute(f32 (** )[3][4]);
	/* 80C9D710 */ void Draw();
	/* 80C9D7B4 */ void Delete();
	/* 80C9D82C */ void actionWait();
	/* 80C9D8EC */ void actionOrderEvent();
	/* 80C9D95C */ void actionEvent();
	/* 80C9D9BC */ bool actionEnd();
	/* 80C9D9C4 */ void modeWaitUpperInit();
	/* 80C9D9F4 */ void modeWaitUpper();
	/* 80C9DA98 */ void modeUpperInit();
	/* 80C9DADC */ void modeUpper();
	/* 80C9DF18 */ void modeWaitLowerInit();
	/* 80C9DF60 */ void modeWaitLower();
	/* 80C9E004 */ void modeLowerInit();
	/* 80C9E034 */ void modeLower();
	/* 80C9E3D8 */ void setParticle();
	/* 80C9E5A0 */ void removeParticle();
};

struct dVibration_c {
	/* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
	/* 80035360 */ void isSwitch(int, int) const;
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

struct dPa_levelEcallBack {
	/* 80C9E788 */ void cleanup();
	/* 80C9E820 */ ~dPa_levelEcallBack();
};

struct dPa_followEcallBack {
	/* 80049580 */ dPa_followEcallBack(u8, u8);
	/* 80C9E704 */ ~dPa_followEcallBack();
	/* 80C9E78C */ void __defctor();
};

struct csXyz {
};

struct _GXColor {
};

struct dPa_control_c {
	/* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*, cXyz const*, f32);
};

struct dEvt_control_c {
	/* 80042468 */ void reset();
};

struct dEvent_manager_c {
	/* 80047698 */ void getEventIdx(fopAc_ac_c*, u8);
	/* 80047A78 */ void endCheck(s16);
};

struct dBgW {
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

struct JAISoundID {
};

struct Vec {
};

struct Z2SeMgr {
	/* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
	/* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct JPABaseEmitter {
};

struct JPAEmitterCallBack {
	/* 8027E6A4 */ ~JPAEmitterCallBack();
	/* 80C9E894 */ void execute(JPABaseEmitter*);
	/* 80C9E898 */ void executeAfter(JPABaseEmitter*);
	/* 80C9E89C */ void draw(JPABaseEmitter*);
	/* 80C9E8A0 */ void drawAfter(JPABaseEmitter*);
};

struct J3DModel {
};

// 
// Forward References:
// 

static void daObjStair_create1st(daObjStair_c*);
static void daObjStair_MoveBGDelete(daObjStair_c*);
static void daObjStair_MoveBGExecute(daObjStair_c*);
static void daObjStair_MoveBGDraw(daObjStair_c*);
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_MvStair[12];

extern "C" void initBaseMtx__12daObjStair_cFv();
extern "C" void setBaseMtx__12daObjStair_cFv();
extern "C" void Create__12daObjStair_cFv();
extern "C" void CreateHeap__12daObjStair_cFv();
extern "C" void create1st__12daObjStair_cFv();
extern "C" void event_proc_call__12daObjStair_cFv();
extern "C" void mode_proc_call__12daObjStair_cFv();
extern "C" void Execute__12daObjStair_cFPPA3_A4_f();
extern "C" void Draw__12daObjStair_cFv();
extern "C" void Delete__12daObjStair_cFv();
extern "C" void actionWait__12daObjStair_cFv();
extern "C" void actionOrderEvent__12daObjStair_cFv();
extern "C" void actionEvent__12daObjStair_cFv();
extern "C" bool actionEnd__12daObjStair_cFv();
extern "C" void modeWaitUpperInit__12daObjStair_cFv();
extern "C" void modeWaitUpper__12daObjStair_cFv();
extern "C" void modeUpperInit__12daObjStair_cFv();
extern "C" void modeUpper__12daObjStair_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void modeWaitLowerInit__12daObjStair_cFv();
extern "C" void modeWaitLower__12daObjStair_cFv();
extern "C" void modeLowerInit__12daObjStair_cFv();
extern "C" void modeLower__12daObjStair_cFv();
extern "C" void setParticle__12daObjStair_cFv();
extern "C" void removeParticle__12daObjStair_cFv();
extern "C" static void daObjStair_create1st__FP12daObjStair_c();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__19dPa_followEcallBackFv();
extern "C" void cleanup__18dPa_levelEcallBackFv();
extern "C" void __defctor__19dPa_followEcallBackFv();
extern "C" static void daObjStair_MoveBGDelete__FP12daObjStair_c();
extern "C" static void daObjStair_MoveBGExecute__FP12daObjStair_c();
extern "C" static void daObjStair_MoveBGDraw__FP12daObjStair_c();
extern "C" void __dt__18dPa_levelEcallBackFv();
extern "C" void execute__18JPAEmitterCallBackFP14JPABaseEmitter();
extern "C" void executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter();
extern "C" void draw__18JPAEmitterCallBackFP14JPABaseEmitter();
extern "C" void drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter();
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_MvStair[12];

// 
// External References:
// 

void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void fopAcM_orderOtherEventId(fopAc_ac_c*, s16, u8, u16, u16, u16);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_addCalc0(f32*, f32, f32);
void cLib_chaseF(f32*, f32, f32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__19dPa_followEcallBack[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 struct_80C9EAA8[4];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void __ct__19dPa_followEcallBackFUcUc();
extern "C" void set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void __dt__18JPAEmitterCallBackFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__19dPa_followEcallBack[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 struct_80C9EAA8[4];

// 
// Declarations:
// 

/* 80C9D098-80C9D0D4 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__12daObjStair_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/initBaseMtx__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9D0D4-80C9D148 0074+00 s=2 e=0 z=0  None .text      setBaseMtx__12daObjStair_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/setBaseMtx__12daObjStair_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C9E8AC-80C9E8B4 0008+00 s=4 e=0 z=0  None .rodata    l_bmdName                                                    */
SECTION_RODATA static u8 const l_bmdName[8] = {
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04,
};

/* 80C9E8B4-80C9E8BC 0008+00 s=1 e=0 z=0  None .rodata    l_dzbName                                                    */
SECTION_RODATA static u8 const l_dzbName[8] = {
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07,
};

/* 80C9E8BC-80C9E8D4 0018+00 s=2 e=0 z=0  None .rodata    l_move_len                                                   */
SECTION_RODATA static u8 const l_move_len[24] = {
	0x43, 0x16, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00, 0x43, 0xE1, 0x00, 0x00, 0x44, 0x16, 0x00, 0x00,
	0x43, 0xFA, 0x00, 0x00, 0x44, 0x09, 0x80, 0x00,
};

/* 80C9E8D4-80C9E8DC 0008+00 s=1 e=0 z=0  None .rodata    l_heap_size                                                  */
SECTION_RODATA static u8 const l_heap_size[8] = {
	0x00, 0x00, 0x0B, 0x40, 0x00, 0x00, 0x2C, 0x60,
};

/* 80C9E8DC-80C9E8E0 0004+00 s=3 e=0 z=0  None .rodata    @3709                                                        */
SECTION_RODATA static u32 const lit_3709 = 0x44160000;

/* 80C9D148-80C9D2B8 0170+00 s=1 e=0 z=0  None .text      Create__12daObjStair_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/Create__12daObjStair_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C9E8E0-80C9E8E4 0004+00 s=5 e=0 z=0  None .rodata    @3802                                                        */
SECTION_RODATA static u8 const lit_3802[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C9E8E4-80C9E8E8 0004+00 s=1 e=0 z=0  None .rodata    @3803                                                        */
SECTION_RODATA static u32 const lit_3803 = 0xC30C0000;

/* 80C9E8E8-80C9E8EC 0004+00 s=1 e=0 z=0  None .rodata    @3804                                                        */
SECTION_RODATA static u32 const lit_3804 = 0x430C0000;

/* 80C9E8EC-80C9E8F0 0004+00 s=1 e=0 z=0  None .rodata    @3805                                                        */
SECTION_RODATA static u32 const lit_3805 = 0xC3E10000;

/* 80C9E8F0-80C9E8F4 0004+00 s=1 e=0 z=0  None .rodata    @3806                                                        */
SECTION_RODATA static u32 const lit_3806 = 0x43E10000;

/* 80C9E8F4-80C9E8F8 0004+00 s=2 e=0 z=0  None .rodata    @3946                                                        */
SECTION_RODATA static u32 const lit_3946 = 0x40400000;

/* 80C9E8F8-80C9E8FC 0004+00 s=3 e=0 z=0  None .rodata    @4061                                                        */
SECTION_RODATA static u32 const lit_4061 = 0x3F800000;

/* 80C9E8FC-80C9E900 0004+00 s=2 e=0 z=0  None .rodata    @4062                                                        */
SECTION_RODATA static u32 const lit_4062 = 0xBF800000;

/* 80C9E900-80C9E904 0004+00 s=2 e=0 z=0  None .rodata    @4063                                                        */
SECTION_RODATA static u32 const lit_4063 = 0x3EE66666;

/* 80C9E904-80C9E908 0004+00 s=2 e=0 z=0  None .rodata    @4064                                                        */
SECTION_RODATA static u32 const lit_4064 = 0x3F000000;

/* 80C9E908-80C9E90C 0004+00 s=2 e=0 z=0  None .rodata    @4065                                                        */
SECTION_RODATA static u32 const lit_4065 = 0x42480000;

/* 80C9E90C-80C9E920 0014+00 s=1 e=0 z=0  None .rodata    None                                                         */
SECTION_RODATA static u8 const struct_80C9E90C[20] = {
	/* 80C9E90C 000A stringBase_80C9E90C @stringBase0 */
	0x4B, 0x5F, 0x6D, 0x76, 0x6B, 0x61, 0x69, 0x30, 0x30, 0x00,
	/* 80C9E916 000A data_80C9E916 None */
	0x4C, 0x76, 0x39, 0x5F, 0x6D, 0x76, 0x6B, 0x61, 0x69, 0x00,
};

/* 80C9E920-80C9E92C 000C+00 s=2 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C9E92C-80C9E940 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 80C9E940-80C9E948 0008+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName[2] = {
	(void*)(((char*)&struct_80C9E90C)+0x0) /* @stringBase0 */,
	(void*)(((char*)&struct_80C9E90C)+0xA) /* None */,
};

/* 80C9D2B8-80C9D338 0080+00 s=1 e=0 z=0  None .text      CreateHeap__12daObjStair_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/CreateHeap__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9D338-80C9D41C 00E4+00 s=1 e=0 z=0  None .text      create1st__12daObjStair_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::create1st() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/create1st__12daObjStair_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C9E948-80C9E954 000C+00 s=1 e=0 z=0  None .data      @3754                                                        */
SECTION_DATA static void* lit_3754[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)actionWait__12daObjStair_cFv,
};

/* 80C9E954-80C9E960 000C+00 s=1 e=0 z=0  None .data      @3755                                                        */
SECTION_DATA static void* lit_3755[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)actionOrderEvent__12daObjStair_cFv,
};

/* 80C9E960-80C9E96C 000C+00 s=1 e=0 z=0  None .data      @3756                                                        */
SECTION_DATA static void* lit_3756[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)actionEvent__12daObjStair_cFv,
};

/* 80C9E96C-80C9E978 000C+00 s=1 e=0 z=0  None .data      @3757                                                        */
SECTION_DATA static void* lit_3757[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)actionEnd__12daObjStair_cFv,
};

/* 80C9E978-80C9E9A8 0030+00 s=1 e=0 z=0  None .data      l_func$3753                                                  */
SECTION_DATA static u8 l_func_3753[48] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C9D41C-80C9D4D8 00BC+00 s=1 e=0 z=0  None .text      event_proc_call__12daObjStair_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::event_proc_call() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/event_proc_call__12daObjStair_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C9E9A8-80C9E9B4 000C+00 s=1 e=0 z=0  None .data      @3765                                                        */
SECTION_DATA static void* lit_3765[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeWaitUpper__12daObjStair_cFv,
};

/* 80C9E9B4-80C9E9C0 000C+00 s=1 e=0 z=0  None .data      @3766                                                        */
SECTION_DATA static void* lit_3766[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeUpper__12daObjStair_cFv,
};

/* 80C9E9C0-80C9E9CC 000C+00 s=1 e=0 z=0  None .data      @3767                                                        */
SECTION_DATA static void* lit_3767[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeWaitLower__12daObjStair_cFv,
};

/* 80C9E9CC-80C9E9D8 000C+00 s=1 e=0 z=0  None .data      @3768                                                        */
SECTION_DATA static void* lit_3768[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeLower__12daObjStair_cFv,
};

/* 80C9E9D8-80C9EA08 0030+00 s=1 e=0 z=0  None .data      l_func$3764                                                  */
SECTION_DATA static u8 l_func_3764[48] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C9D4D8-80C9D594 00BC+00 s=1 e=0 z=0  None .text      mode_proc_call__12daObjStair_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::mode_proc_call() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/mode_proc_call__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9D594-80C9D710 017C+00 s=1 e=0 z=0  None .text      Execute__12daObjStair_cFPPA3_A4_f                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/Execute__12daObjStair_cFPPA3_A4_f.s"
}
#pragma pop


/* 80C9D710-80C9D7B4 00A4+00 s=1 e=0 z=0  None .text      Draw__12daObjStair_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/Draw__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9D7B4-80C9D82C 0078+00 s=1 e=0 z=0  None .text      Delete__12daObjStair_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/Delete__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9D82C-80C9D8EC 00C0+00 s=1 e=0 z=0  None .text      actionWait__12daObjStair_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::actionWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/actionWait__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9D8EC-80C9D95C 0070+00 s=1 e=0 z=0  None .text      actionOrderEvent__12daObjStair_cFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::actionOrderEvent() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/actionOrderEvent__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9D95C-80C9D9BC 0060+00 s=1 e=0 z=0  None .text      actionEvent__12daObjStair_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::actionEvent() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/actionEvent__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9D9BC-80C9D9C4 0008+00 s=1 e=0 z=0  None .text      actionEnd__12daObjStair_cFv                                  */
bool daObjStair_c::actionEnd() {
	return true;
}


/* 80C9D9C4-80C9D9F4 0030+00 s=2 e=0 z=0  None .text      modeWaitUpperInit__12daObjStair_cFv                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::modeWaitUpperInit() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/modeWaitUpperInit__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9D9F4-80C9DA98 00A4+00 s=1 e=0 z=0  None .text      modeWaitUpper__12daObjStair_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::modeWaitUpper() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/modeWaitUpper__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9DA98-80C9DADC 0044+00 s=1 e=0 z=0  None .text      modeUpperInit__12daObjStair_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::modeUpperInit() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/modeUpperInit__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9DADC-80C9DEDC 0400+00 s=1 e=0 z=0  None .text      modeUpper__12daObjStair_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::modeUpper() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/modeUpper__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9DEDC-80C9DF18 003C+00 s=1 e=0 z=0  None .text      __dt__4cXyzFv                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/__dt__4cXyzFv.s"
}
#pragma pop


/* 80C9DF18-80C9DF60 0048+00 s=2 e=0 z=0  None .text      modeWaitLowerInit__12daObjStair_cFv                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::modeWaitLowerInit() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/modeWaitLowerInit__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9DF60-80C9E004 00A4+00 s=1 e=0 z=0  None .text      modeWaitLower__12daObjStair_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::modeWaitLower() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/modeWaitLower__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9E004-80C9E034 0030+00 s=1 e=0 z=0  None .text      modeLowerInit__12daObjStair_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::modeLowerInit() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/modeLowerInit__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9E034-80C9E3D8 03A4+00 s=1 e=0 z=0  None .text      modeLower__12daObjStair_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::modeLower() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/modeLower__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9E3D8-80C9E5A0 01C8+00 s=1 e=0 z=0  None .text      setParticle__12daObjStair_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::setParticle() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/setParticle__12daObjStair_cFv.s"
}
#pragma pop


/* 80C9E5A0-80C9E614 0074+00 s=2 e=0 z=0  None .text      removeParticle__12daObjStair_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStair_c::removeParticle() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/removeParticle__12daObjStair_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C9EA08-80C9EA28 0020+00 s=1 e=0 z=0  None .data      daObjStair_METHODS                                           */
SECTION_DATA static void* daObjStair_METHODS[8] = {
	(void*)daObjStair_create1st__FP12daObjStair_c,
	(void*)daObjStair_MoveBGDelete__FP12daObjStair_c,
	(void*)daObjStair_MoveBGExecute__FP12daObjStair_c,
	(void*)NULL,
	(void*)daObjStair_MoveBGDraw__FP12daObjStair_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C9EA28-80C9EA58 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_MvStair                                        */
SECTION_DATA void* g_profile_Obj_MvStair[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x005C0000,
	(void*)&g_fpcLf_Method,
	(void*)0x0000066C,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x00190000,
	(void*)&daObjStair_METHODS,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80C9EA58-80C9EA7C 0024+00 s=2 e=0 z=0  None .data      __vt__18dPa_levelEcallBack                                   */
SECTION_DATA static void* __vt__18dPa_levelEcallBack[9] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__18dPa_levelEcallBackFv,
	(void*)execute__18JPAEmitterCallBackFP14JPABaseEmitter,
	(void*)executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter,
	(void*)draw__18JPAEmitterCallBackFP14JPABaseEmitter,
	(void*)drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter,
	(void*)NULL,
	(void*)cleanup__18dPa_levelEcallBackFv,
};

/* 80C9EA7C-80C9EAA4 0028+00 s=1 e=0 z=0  None .data      __vt__12daObjStair_c                                         */
SECTION_DATA static void* __vt__12daObjStair_c[10] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__12daObjStair_cFv,
	(void*)Create__12daObjStair_cFv,
	(void*)Execute__12daObjStair_cFPPA3_A4_f,
	(void*)Draw__12daObjStair_cFv,
	(void*)Delete__12daObjStair_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C9E614-80C9E700 00EC+00 s=1 e=0 z=0  None .text      daObjStair_create1st__FP12daObjStair_c                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjStair_create1st(daObjStair_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/daObjStair_create1st__FP12daObjStair_c.s"
}
#pragma pop


/* 80C9E700-80C9E704 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv                                                */
cXyz::cXyz() {
	/* empty function */
}


/* 80C9E704-80C9E788 0084+00 s=1 e=0 z=0  None .text      __dt__19dPa_followEcallBackFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dPa_followEcallBack::~dPa_followEcallBack() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/__dt__19dPa_followEcallBackFv.s"
}
#pragma pop


/* 80C9E788-80C9E78C 0004+00 s=1 e=0 z=0  None .text      cleanup__18dPa_levelEcallBackFv                              */
void dPa_levelEcallBack::cleanup() {
	/* empty function */
}


/* 80C9E78C-80C9E7B4 0028+00 s=1 e=0 z=0  None .text      __defctor__19dPa_followEcallBackFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dPa_followEcallBack::__defctor() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/__defctor__19dPa_followEcallBackFv.s"
}
#pragma pop


/* 80C9E7B4-80C9E7D4 0020+00 s=1 e=0 z=0  None .text      daObjStair_MoveBGDelete__FP12daObjStair_c                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjStair_MoveBGDelete(daObjStair_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/daObjStair_MoveBGDelete__FP12daObjStair_c.s"
}
#pragma pop


/* 80C9E7D4-80C9E7F4 0020+00 s=1 e=0 z=0  None .text      daObjStair_MoveBGExecute__FP12daObjStair_c                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjStair_MoveBGExecute(daObjStair_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/daObjStair_MoveBGExecute__FP12daObjStair_c.s"
}
#pragma pop


/* 80C9E7F4-80C9E820 002C+00 s=1 e=0 z=0  None .text      daObjStair_MoveBGDraw__FP12daObjStair_c                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjStair_MoveBGDraw(daObjStair_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/daObjStair_MoveBGDraw__FP12daObjStair_c.s"
}
#pragma pop


/* 80C9E820-80C9E894 0074+00 s=1 e=0 z=0  None .text      __dt__18dPa_levelEcallBackFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dPa_levelEcallBack::~dPa_levelEcallBack() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mvstair/d_a_obj_mvstair/__dt__18dPa_levelEcallBackFv.s"
}
#pragma pop


/* 80C9E894-80C9E898 0004+00 s=1 e=0 z=0  None .text      execute__18JPAEmitterCallBackFP14JPABaseEmitter              */
void JPAEmitterCallBack::execute(JPABaseEmitter* param_0) {
	/* empty function */
}


/* 80C9E898-80C9E89C 0004+00 s=1 e=0 z=0  None .text      executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter         */
void JPAEmitterCallBack::executeAfter(JPABaseEmitter* param_0) {
	/* empty function */
}


/* 80C9E89C-80C9E8A0 0004+00 s=1 e=0 z=0  None .text      draw__18JPAEmitterCallBackFP14JPABaseEmitter                 */
void JPAEmitterCallBack::draw(JPABaseEmitter* param_0) {
	/* empty function */
}


/* 80C9E8A0-80C9E8A4 0004+00 s=1 e=0 z=0  None .text      drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter            */
void JPAEmitterCallBack::drawAfter(JPABaseEmitter* param_0) {
	/* empty function */
}


