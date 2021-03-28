// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_pdoor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct Vec {
};

struct cXyz {
	/* 80266B34 */ void operator-(Vec const&) const;
};

struct mDoMtx_stack_c {
	/* 8000CD64 */ void transS(cXyz const&);
};

struct fopAc_ac_c {
};

struct daObjPDoor_c {
	/* 80CA9F9C */ void initBaseMtx();
	/* 80CA9FD8 */ void setBaseMtx();
	/* 80CAA03C */ void Create();
	/* 80CAA14C */ void CreateHeap();
	/* 80CAA1BC */ void create1st();
	/* 80CAA23C */ void Execute(f32 (** )[3][4]);
	/* 80CAA290 */ void mode_proc_call();
	/* 80CAA31C */ void init_modeWait();
	/* 80CAA354 */ void modeWait();
	/* 80CAA698 */ void init_modeRotate();
	/* 80CAA6B4 */ void modeRotate();
	/* 80CAA968 */ void Draw();
	/* 80CAAA0C */ void Delete();
};

struct dVibration_c {
	/* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
	/* 80035200 */ void onSwitch(int, int);
	/* 800352B0 */ void offSwitch(int, int);
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

struct dBgW_Base {
	struct PushPullLabel {
	};

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

static void PPCallBack(fopAc_ac_c*, fopAc_ac_c*, s16, dBgW_Base::PushPullLabel);
static void daObjPDoor_create1st(daObjPDoor_c*);
static void daObjPDoor_MoveBGDelete(daObjPDoor_c*);
static void daObjPDoor_MoveBGExecute(daObjPDoor_c*);
static void daObjPDoor_MoveBGDraw(daObjPDoor_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_PushDoor[12];

extern "C" static void PPCallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel();
extern "C" void initBaseMtx__12daObjPDoor_cFv();
extern "C" void setBaseMtx__12daObjPDoor_cFv();
extern "C" void Create__12daObjPDoor_cFv();
extern "C" void CreateHeap__12daObjPDoor_cFv();
extern "C" void create1st__12daObjPDoor_cFv();
extern "C" void Execute__12daObjPDoor_cFPPA3_A4_f();
extern "C" void mode_proc_call__12daObjPDoor_cFv();
extern "C" void init_modeWait__12daObjPDoor_cFv();
extern "C" void modeWait__12daObjPDoor_cFv();
extern "C" void init_modeRotate__12daObjPDoor_cFv();
extern "C" void modeRotate__12daObjPDoor_cFv();
extern "C" void Draw__12daObjPDoor_cFv();
extern "C" void Delete__12daObjPDoor_cFv();
extern "C" static void daObjPDoor_create1st__FP12daObjPDoor_c();
extern "C" static void daObjPDoor_MoveBGDelete__FP12daObjPDoor_c();
extern "C" static void daObjPDoor_MoveBGExecute__FP12daObjPDoor_c();
extern "C" static void daObjPDoor_MoveBGDraw__FP12daObjPDoor_c();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_PushDoor[12];

// 
// External References:
// 

void mDoMtx_YrotS(f32 (* )[4], s16);
void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void cLib_addCalcAngleS(s16*, s16, s16, s16, s16);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80CAAC30[4];

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80CAAC30[4];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80CAAB20-80CAAB24 0004+00 s=3 e=0 z=0  None .rodata    @3695                                                        */
SECTION_RODATA static u8 const lit_3695[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80CA9E98-80CA9F9C 0104+00 s=1 e=0 z=0  None .text      PPCallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void PPCallBack(fopAc_ac_c* param_0, fopAc_ac_c* param_1, s16 param_2, dBgW_Base::PushPullLabel param_3) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/PPCallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel.s"
}
#pragma pop


/* 80CA9F9C-80CA9FD8 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__12daObjPDoor_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/initBaseMtx__12daObjPDoor_cFv.s"
}
#pragma pop


/* 80CA9FD8-80CAA03C 0064+00 s=2 e=0 z=0  None .text      setBaseMtx__12daObjPDoor_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/setBaseMtx__12daObjPDoor_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CAAB24-80CAAB28 0004+00 s=1 e=0 z=0  None .rodata    @3942                                                        */
SECTION_RODATA static u32 const lit_3942 = 0x41200000;

/* 80CAAB28-80CAAB30 0008+00 s=2 e=0 z=0  None .rodata    @3944                                                        */
SECTION_RODATA static u8 const lit_3944[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80CAAB30-80CAAB34 0004+00 s=1 e=0 z=0  None .rodata    @4051                                                        */
SECTION_RODATA static u32 const lit_4051 = 0x45AAA800;

/* 80CAAB34-80CAAB38 0004+00 s=1 e=0 z=0  None .rodata    @4052                                                        */
SECTION_RODATA static u32 const lit_4052 = 0x42700000;

/* 80CAAB38-80CAAB3C 0004+00 s=1 e=0 z=0  None .rodata    @4053                                                        */
SECTION_RODATA static u32 const lit_4053 = 0x3F800000;

/* 80CAAB3C-80CAAB40 0004+00 s=1 e=0 z=0  None .rodata    @4054                                                        */
SECTION_RODATA static u32 const lit_4054 = 0xBF800000;

/* 80CAAB40-80CAAB4A 000A+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CAAB40 = "V_OsuDoor";
#pragma pop

/* 80CAAB4C-80CAAB58 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CAAB58-80CAAB6C 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 80CAAB6C-80CAAB70 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80CAAB70-80CAAB88 0018+00 s=1 e=0 z=0  None .data      l_cull_box                                                   */
SECTION_DATA static u8 l_cull_box[24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x16, 0x00, 0x00, 0x44, 0x16, 0x00, 0x00,
	0x44, 0x7A, 0x00, 0x00, 0x44, 0x16, 0x00, 0x00,
};

/* 80CAA03C-80CAA14C 0110+00 s=1 e=0 z=0  None .text      Create__12daObjPDoor_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/Create__12daObjPDoor_cFv.s"
}
#pragma pop


/* 80CAA14C-80CAA1BC 0070+00 s=1 e=0 z=0  None .text      CreateHeap__12daObjPDoor_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/CreateHeap__12daObjPDoor_cFv.s"
}
#pragma pop


/* 80CAA1BC-80CAA23C 0080+00 s=1 e=0 z=0  None .text      create1st__12daObjPDoor_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::create1st() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/create1st__12daObjPDoor_cFv.s"
}
#pragma pop


/* 80CAA23C-80CAA290 0054+00 s=1 e=0 z=0  None .text      Execute__12daObjPDoor_cFPPA3_A4_f                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/Execute__12daObjPDoor_cFPPA3_A4_f.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CAAB88-80CAAB94 000C+00 s=1 e=0 z=0  None .data      @3781                                                        */
SECTION_DATA static void* lit_3781[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeWait__12daObjPDoor_cFv,
};

/* 80CAAB94-80CAABA0 000C+00 s=1 e=0 z=0  None .data      @3782                                                        */
SECTION_DATA static void* lit_3782[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeRotate__12daObjPDoor_cFv,
};

/* 80CAABA0-80CAABB8 0018+00 s=1 e=0 z=0  None .data      l_func$3780                                                  */
SECTION_DATA static u8 l_func[24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CAA290-80CAA31C 008C+00 s=1 e=0 z=0  None .text      mode_proc_call__12daObjPDoor_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::mode_proc_call() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/mode_proc_call__12daObjPDoor_cFv.s"
}
#pragma pop


/* 80CAA31C-80CAA354 0038+00 s=1 e=0 z=0  None .text      init_modeWait__12daObjPDoor_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::init_modeWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/init_modeWait__12daObjPDoor_cFv.s"
}
#pragma pop


/* 80CAA354-80CAA698 0344+00 s=1 e=0 z=0  None .text      modeWait__12daObjPDoor_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::modeWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/modeWait__12daObjPDoor_cFv.s"
}
#pragma pop


/* 80CAA698-80CAA6B4 001C+00 s=1 e=0 z=0  None .text      init_modeRotate__12daObjPDoor_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::init_modeRotate() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/init_modeRotate__12daObjPDoor_cFv.s"
}
#pragma pop


/* 80CAA6B4-80CAA968 02B4+00 s=1 e=0 z=0  None .text      modeRotate__12daObjPDoor_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::modeRotate() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/modeRotate__12daObjPDoor_cFv.s"
}
#pragma pop


/* 80CAA968-80CAAA0C 00A4+00 s=1 e=0 z=0  None .text      Draw__12daObjPDoor_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/Draw__12daObjPDoor_cFv.s"
}
#pragma pop


/* 80CAAA0C-80CAAA4C 0040+00 s=1 e=0 z=0  None .text      Delete__12daObjPDoor_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjPDoor_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/Delete__12daObjPDoor_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CAABB8-80CAABD8 0020+00 s=1 e=0 z=0  None .data      daObjPDoor_METHODS                                           */
SECTION_DATA static void* daObjPDoor_METHODS[8] = {
	(void*)daObjPDoor_create1st__FP12daObjPDoor_c,
	(void*)daObjPDoor_MoveBGDelete__FP12daObjPDoor_c,
	(void*)daObjPDoor_MoveBGExecute__FP12daObjPDoor_c,
	(void*)NULL,
	(void*)daObjPDoor_MoveBGDraw__FP12daObjPDoor_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80CAABD8-80CAAC08 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_PushDoor                                       */
SECTION_DATA void* g_profile_Obj_PushDoor[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00BE0000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005C4,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02410000,
	(void*)&daObjPDoor_METHODS,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80CAAC08-80CAAC30 0028+00 s=1 e=0 z=0  None .data      __vt__12daObjPDoor_c                                         */
SECTION_DATA static void* __vt__12daObjPDoor_c[10] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__12daObjPDoor_cFv,
	(void*)Create__12daObjPDoor_cFv,
	(void*)Execute__12daObjPDoor_cFPPA3_A4_f,
	(void*)Draw__12daObjPDoor_cFv,
	(void*)Delete__12daObjPDoor_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80CAAA4C-80CAAAAC 0060+00 s=1 e=0 z=0  None .text      daObjPDoor_create1st__FP12daObjPDoor_c                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjPDoor_create1st(daObjPDoor_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/daObjPDoor_create1st__FP12daObjPDoor_c.s"
}
#pragma pop


/* 80CAAAAC-80CAAACC 0020+00 s=1 e=0 z=0  None .text      daObjPDoor_MoveBGDelete__FP12daObjPDoor_c                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjPDoor_MoveBGDelete(daObjPDoor_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/daObjPDoor_MoveBGDelete__FP12daObjPDoor_c.s"
}
#pragma pop


/* 80CAAACC-80CAAAEC 0020+00 s=1 e=0 z=0  None .text      daObjPDoor_MoveBGExecute__FP12daObjPDoor_c                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjPDoor_MoveBGExecute(daObjPDoor_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/daObjPDoor_MoveBGExecute__FP12daObjPDoor_c.s"
}
#pragma pop


/* 80CAAAEC-80CAAB18 002C+00 s=1 e=0 z=0  None .text      daObjPDoor_MoveBGDraw__FP12daObjPDoor_c                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjPDoor_MoveBGDraw(daObjPDoor_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_pdoor/d_a_obj_pdoor/daObjPDoor_MoveBGDraw__FP12daObjPDoor_c.s"
}
#pragma pop


