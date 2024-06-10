/**
 * d_a_b_ob.cpp
 * Morpheel Boss (Core/Body)
 */

#include "rel/d/a/b/d_a_b_ob/d_a_b_ob.h"
#include "JSystem/J3DGraphBase/J3DMaterial.h"
#include "SSystem/SComponent/c_math.h"
#include "c/c_damagereaction.h"
#include "cmath.h"
#include "d/a/d_a_player.h"
#include "d/com/d_com_inf_game.h"
#include "d/s/d_s_play.h"
#include "dol2asm.h"
#include "f_op/f_op_msg_mng.h"
#include "m_Do/m_Do_controller_pad.h"
#include "m_Do/m_Do_graphic.h"
#include "rel/d/a/b/d_a_b_oh/d_a_b_oh.h"
#include "rel/d/a/obj/d_a_obj_lv3WaterB/d_a_obj_lv3WaterB.h"
#include "rel/d/a/obj/d_a_obj_ystone/d_a_obj_ystone.h"


//
// Forward References:
//

extern "C" void __ct__12daB_OB_HIO_cFv();
extern "C" static void anm_init__FP10b_ob_classifUcf();
extern "C" static void HeadCallBack__FP8J3DJointi();
extern "C" static void TailCallBack__FP8J3DJointi();
extern "C" static void FinACallBack__FP8J3DJointi();
extern "C" static void FinBCallBack__FP8J3DJointi();
extern "C" static void FinCCallBack__FP8J3DJointi();
extern "C" static void sui_nodeCallBack__FP8J3DJointi();
extern "C" static void dark__FP12J3DModelDatas();
extern "C" static void daB_OB_Draw__FP10b_ob_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void core_start__FP10b_ob_class();
extern "C" static void core_hand_move__FP10b_ob_class();
extern "C" static void s_bf_sub__FPvPv();
extern "C" static void s_bfdel_sub__FPvPv();
extern "C" static void s_kaisoudel_sub__FPvPv();
extern "C" static void bombfishset__FP10b_ob_class();
extern "C" void __dt__5csXyzFv();
extern "C" static void core_hook__FP10b_ob_class();
extern "C" static void core_chance__FP10b_ob_class();
extern "C" static void core_end__FP10b_ob_class();
extern "C" static void core_action__FP10b_ob_class();
extern "C" static void core_damage_check__FP10b_ob_class();
extern "C" static void fish_damage_check__FP10b_ob_class();
extern "C" static void pl_check__FP10b_ob_classfs();
extern "C" static void fish_normal__FP10b_ob_class();
extern "C" static void fish_vacume__FP10b_ob_class();
extern "C" static void fish_end__FP10b_ob_class();
extern "C" static void dmcalc__FP10b_ob_class();
extern "C" static void fish_move__FP10b_ob_class();
extern "C" static void cam_3d_morf__FP10b_ob_classf();
extern "C" static void s_hasidel_sub__FPvPv();
extern "C" static void demo_camera__FP10b_ob_class();
extern "C" static void dComIfGp_particle_getEmitter__FUl();
extern "C" static void dComIfGp_particle_set__FUlUsPC4cXyzPC5csXyzPC4cXyz();
extern "C" void checkSkipEdge__14dEvt_control_cFv();
extern "C" static void cM_scos__Fs();
extern "C" static void JMAFastSqrt__Ff();
extern "C" static void cM_ssin__Fs();
extern "C" static void daB_OB_Execute__FP10b_ob_class();
extern "C" static bool daB_OB_IsDelete__FP10b_ob_class();
extern "C" static void daB_OB_Delete__FP10b_ob_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daB_OB_Create__FP10fopAc_ac_c();
extern "C" void __ct__10b_ob_classFv();
extern "C" void __dt__7ob_ke_sFv();
extern "C" void __ct__7ob_ke_sFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__9ob_part_sFv();
extern "C" void __ct__9ob_part_sFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daB_OB_HIO_cFv();
extern "C" void __sinit_d_a_b_ob_cpp();
extern "C" static void func_8061A88C();
extern "C" static void func_8061A894();
extern "C" void cancelOriginalDemo__9daPy_py_cFv();
extern "C" static void dComIfGp_event_reset__Fv();
extern "C" static void dComIfGs_onStageBossEnemy__Fv();
extern "C" void multVecZero__14mDoMtx_stack_cFP3Vec();
extern "C" void getAnmMtx__8J3DModelFi();
extern "C" void __apl__4cXyzFRC3Vec();
extern "C" void __as__5csXyzFRC5csXyz();
extern "C" void __as__4cXyzFRC4cXyz();
extern "C" void changeDemoMode__9daPy_py_cFUliis();
extern "C" void changeOriginalDemo__9daPy_py_cFv();
extern "C" static void daPy_getPlayerActorClass__Fv();
extern "C" void onCondition__11dEvt_info_cFUs();
extern "C" void checkCommandDemoAccrpt__11dEvt_info_cFv();
extern "C" static void dComIfGp_getCamera__Fi();
extern "C" static void dComIfGp_getPlayerCameraID__Fi();
extern "C" static void dComIfGp_getPlayer__Fi();
extern "C" void setCurrentPos__16obj_ystone_classF4cXyz();
extern "C" void __ct__4cXyzFRC4cXyz();
extern "C" void becomeDeleteEmitter__14JPABaseEmitterFv();
extern "C" void __ct__5csXyzFRC5csXyz();
extern "C" void fabsf__3stdFf();
extern "C" static void dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz();
extern "C" void setPlaySpeed__13mDoExt_morf_cFf();
extern "C" void startCheckSkipEdge__14dEvt_control_cFPv();
extern "C" static void dComIfGp_getEvent__Fv();
extern "C" static void mDoAud_seStart__FUlPC3VecUlSc();
extern "C" void set__4cXyzFfff();
extern "C" void __ct__10JAISoundIDFUl(JAISoundID* this_, u32 param_0);
extern "C" void abs__4cXyzCFv();
extern "C" void isStop__13mDoExt_morf_cFv();
extern "C" static void dComIfGp_getVibration__Fv();
extern "C" void __ct__4cXyzFfff();
extern "C" extern char const* const d_a_b_ob__stringBase0;

//
// External References:
//

extern "C" void onBlure__13mDoGph_gInf_cFv();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void mDoMtx_MtxToRot__FPA4_CfP5csXyz();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void setAnm__14mDoExt_McaMorfFP15J3DAnmTransformiffffPv();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void cDmrNowMidnaTalk__Fv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorAngleX__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_createItemForBoss__FPC4cXyziiPC5csXyzPC4cXyzffi();
extern "C" void fopAcM_createWarpHole__FPC4cXyzPC5csXyziUcUcUc();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_otherBgCheck__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopMsgM_messageSetDemo__FUl();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_onOneZoneSwitch__Fii();
extern "C" void dComIfGs_offOneZoneSwitch__Fii();
extern "C" void dComIfGs_isOneZoneSwitch__Fii();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onDungeonItem__12dSv_memBit_cFi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void dEv_noFinishSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
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
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzsf();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_custom_colset__FUcUcf();
extern "C" void dKy_BossLight_set__FP4cXyzP8_GXColorfUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void func_802807E0();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void bgmStart__8Z2SeqMgrFUlUll();
extern "C" void bgmStop__8Z2SeqMgrFUll();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void bgmStreamPrepare__8Z2SeqMgrFUl();
extern "C" void bgmStreamPlay__8Z2SeqMgrFv();
extern "C" void changeBgmStatus__8Z2SeqMgrFl();
extern "C" void stopAnime__10Z2CreatureFv();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void __ct__12Z2CreatureOIFv();
extern "C" void
init__12Z2CreatureOIFP3VecP3VecP3VecP3VecP3VecP3VecP3VecP3VecP3VecP3VecP3VecP3VecP3Vec();
extern "C" void startTentacleSoundLevel__12Z2CreatureOIF10JAISoundIDUcfUlSc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_15();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_15();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19mDoExt_3DlineMat0_c[5];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u8 struct_80450C98[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8061AD84-8061AD88 000000 0004+00 23/23 0/0 0/0 .rodata          @3772 */
SECTION_RODATA static f32 const lit_3772 = 1.0f;
COMPILER_STRIP_GATE(0x8061AD84, &lit_3772);

/* 8061AD88-8061AD8C 000004 0004+00 0/2 0/0 0/0 .rodata          @3773 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3773 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x8061AD88, &lit_3773);
#pragma pop

/* 8061AD8C-8061AD90 000008 0004+00 0/5 0/0 0/0 .rodata          @3774 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3774 = 3.0f;
COMPILER_STRIP_GATE(0x8061AD8C, &lit_3774);
#pragma pop

/* 8061B0A4-8061B0B0 000000 000C+00 2/2 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8061B0B0-8061B0C4 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 8061B0C4-8061B0D0 000020 000A+02 1/2 0/0 0/0 .data            iso_eff$5401 */
SECTION_DATA static u8 iso_eff_5401[10 + 2 /* padding */] = {
    0x87,
    0xF2,
    0x87,
    0xF3,
    0x87,
    0xF4,
    0x87,
    0xF5,
    0x87,
    0xF6,
    /* padding */
    0x00,
    0x00,
};

/* 8061B0D0-8061B11C 00002C 004C+00 1/1 0/0 0/0 .data            buf_p */
SECTION_DATA static f32 buf_p[] = {
    0.0f, 1.0f,  2.0f,  3.0f,  4.0f,  5.0f,  6.0f,  7.0f,  8.0f,  8.8f,
    9.6f, 10.4f, 11.2f, 12.0f, 12.6f, 13.2f, 13.8f, 14.4f, 15.0f,
};

/* 8061B11C-8061B168 000078 004C+00 1/1 0/0 0/0 .data            size_p */
SECTION_DATA static f32 size_p[] = {1.0f, 1.05f, 1.075f, 1.1f,  1.1f,  1.075f, 1.05f,
                                    1.0f, 0.9f,  0.85f,  0.8f,  0.75f, 0.7f,   0.65f,
                                    0.6f, 0.55f, 0.5f,   0.45f, 1.0f};

/* 8061B168-8061B174 0000C4 000A+02 1/1 0/0 0/0 .data            ex_eff$6145 */
SECTION_DATA static u8 ex_eff[10 + 2 /* padding */] = {
    0x86,
    0x21,
    0x86,
    0x22,
    0x86,
    0x23,
    0x86,
    0x24,
    0x86,
    0x25,
    /* padding */
    0x00,
    0x00,
};

/* 8061B174-8061B17C 0000D0 0008+00 1/1 0/0 0/0 .data            iso_eff$6219 */
SECTION_DATA static u8 iso_eff_6219[8] = {
    0x87, 0xF7, 0x87, 0xF8, 0x87, 0xF9, 0x87, 0xFA,
};

/* 8061B17C-8061B274 -00001 00F8+00 1/1 0/0 0/0 .data            @6812 */
SECTION_DATA static void* lit_6812[62] = {
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0xA8),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x1F0),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x468),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x64C),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x6B8),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x7C0),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0xAE4),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0xC34),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0xCE8),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0xDE8),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0xE9C),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0xFB8),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x1364),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x157C),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x16D0),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x16D0),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x16D0),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x16D0),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x1844),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x1968),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x1A34),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x1C40),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x1F70),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2200),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2360),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2524),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x2718),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x25EC),
    (void*)(((char*)demo_camera__FP10b_ob_class) + 0x269C),
};

/* 8061B274-8061B280 0001D0 000A+02 0/1 0/0 0/0 .data            iso_eff$6994 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 iso_eff_6994[10 + 2 /* padding */] = {
    0x87,
    0xFC,
    0x87,
    0xFD,
    0x87,
    0xFE,
    0x87,
    0xFF,
    0x88,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 8061B280-8061B288 0001DC 0006+02 0/1 0/0 0/0 .data            iso_eff$7005 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 iso_eff_7005[6 + 2 /* padding */] = {
    0x88,
    0x05,
    0x88,
    0x06,
    0x88,
    0x07,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 8061B288-8061B290 0001E4 0008+00 0/1 0/0 0/0 .data            iso_eff$7014 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 iso_eff_7014[8] = {
    0x87, 0xEE, 0x87, 0xEF, 0x87, 0xF0, 0x87, 0xF1,
};
#pragma pop

/* 8061B290-8061B2DC 0001EC 004C+00 1/1 0/0 0/0 .data            p_bmd$7370 */
SECTION_DATA static u8 p_bmd[76] = {
    0x00, 0x00, 0x00, 0x2B, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22,
    0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22,
    0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22,
    0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22,
    0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x26,
};

/* 8061B2DC-8061B31C 000238 0040+00 0/1 0/0 0/0 .data            cc_sph_src$7742 */
#pragma push
#pragma force_active on
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x2, 0xd}, {0xd8fbfdff, 0x3}, 0x75}},  // mObj
        {dCcD_SE_METAL, 0x0, 0x2, 0x0, 0x0},                                  // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2},                                   // mGObjTg
        {0x0},                                                                // mGObjCo
    },                                                                        // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 50.0f}  // mSph
    }  // mSphAttr
};
#pragma pop

/* 8061B31C-8061B35C 000278 0040+00 0/1 0/0 0/0 .data            body_sph_src$7743 */
#pragma push
#pragma force_active on
static dCcD_SrcSph body_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x75}},  // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0},                 // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x3},                 // mGObjTg
        {0x0},                                              // mGObjCo
    },                                                      // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 60.0f}  // mSph
    }  // mSphAttr
};
#pragma pop

/* 8061B35C-8061B39C 0002B8 0040+00 0/1 0/0 0/0 .data            parts_sph_src$7744 */
#pragma push
#pragma force_active on
static dCcD_SrcSph parts_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x75}},  // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0},                 // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x3},                 // mGObjTg
        {0x0},                                              // mGObjCo
    },                                                      // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 60.0f}  // mSph
    }  // mSphAttr
};
#pragma pop

/* 8061B39C-8061B3DC 0002F8 0040+00 0/1 0/0 0/0 .data            core_sph_src$7745 */
#pragma push
#pragma force_active on
static dCcD_SrcSph core_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x4002, 0x3}, 0x75}},  // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0},             // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2},             // mGObjTg
        {0x0},                                          // mGObjCo
    },                                                  // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 50.0f}  // mSph
    }  // mSphAttr
};
#pragma pop

/* 8061B3DC-8061B3FC -00001 0020+00 1/0 0/0 0/0 .data            l_daB_OB_Method */
static actor_method_class l_daB_OB_Method = {
    (process_method_func)daB_OB_Create__FP10fopAc_ac_c,
    (process_method_func)daB_OB_Delete__FP10b_ob_class,
    (process_method_func)daB_OB_Execute__FP10b_ob_class,
    (process_method_func)daB_OB_IsDelete__FP10b_ob_class,
    (process_method_func)daB_OB_Draw__FP10b_ob_class,
};

/* 8061B3FC-8061B42C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_OB */
extern actor_process_profile_definition g_profile_B_OB = {
  fpcLy_CURRENT_e,        // mLayerID
  4,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_B_OB,              // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  0x00005DE4,             // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  217,                    // mPriority
  &l_daB_OB_Method,       // sub_method
  0x000C4000,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 8061B42C-8061B438 000388 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 8061B438-8061B444 000394 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 8061B444-8061B450 0003A0 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 8061B450-8061B464 0003AC 0014+00 1/1 0/0 0/0 .data            __vt__18mDoExt_3DlineMat_c */
SECTION_DATA extern void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 8061B464-8061B488 0003C0 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8061A894,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8061A88C,
};

/* 8061B488-8061B494 0003E4 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 8061B494-8061B4A0 0003F0 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8061B4A0-8061B4AC 0003FC 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8061B4AC-8061B4B8 000408 000C+00 2/2 0/0 0/0 .data            __vt__12daB_OB_HIO_c */
SECTION_DATA extern void* __vt__12daB_OB_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daB_OB_HIO_cFv,
};

/* 8061056C-806105BC 0000EC 0050+00 1/1 0/0 0/0 .text            __ct__12daB_OB_HIO_cFv */
// matches with literals
#ifdef NONMATCHING
daB_OB_HIO_c::daB_OB_HIO_c() {
    field_0x04 = -1;
    mCoreSize = 1.0f;
    mCoreMoveSpeed = 0.2f;
    mBodySize = 1.0f;
    mLightR = 0xA3;
    mLightG = 0xFF;
    mLightB = 0xFF;
    mRange = 3.0f;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_OB_HIO_c::daB_OB_HIO_c(){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__ct__12daB_OB_HIO_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8061AD90-8061AD94 00000C 0004+00 5/19 0/0 0/0 .rodata          @3788 */
SECTION_RODATA static u8 const lit_3788[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8061AD90, &lit_3788);

/* 8061AD94-8061AD9C 000010 0004+04 2/5 0/0 0/0 .rodata          @3789 */
SECTION_RODATA static f32 const lit_3789[1 + 1 /* padding */] = {
    -1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8061AD94, &lit_3789);

/* 8061B09C-8061B09C 000318 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8061B09C = "B_oh";
#pragma pop

/* 806105BC-8061066C 00013C 00B0+00 8/8 0/0 0/0 .text            anm_init__FP10b_ob_classifUcf */
// matches with literals
#ifdef NONMATCHING
static void anm_init(b_ob_class* i_this, int i_anmID, f32 i_morf, u8 i_mode, f32 i_speed) {
    J3DAnmTransform* pbck = (J3DAnmTransform*)dComIfG_getObjectRes("B_oh", i_anmID);
    i_this->mBodyParts[0].mpMorf->setAnm(pbck, i_mode, i_morf, i_speed, 0.0f, -1.0f, NULL);
    i_this->mAnmID = i_anmID;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_init(b_ob_class* i_this, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/anm_init__FP10b_ob_classifUcf.s"
}
#pragma pop
#endif

/* 8061066C-806107B4 0001EC 0148+00 1/1 0/0 0/0 .text            HeadCallBack__FP8J3DJointi */
static int HeadCallBack(J3DJoint* i_joint, int param_1) {
    if (param_1 == 0) {
        int joint_no = i_joint->getJntNo();
        J3DModel* model = j3dSys.getModel();
        b_ob_class* a_this = (b_ob_class*)model->getUserArea();

        if (a_this != NULL) {
            if (joint_no >= 2 && joint_no <= 4) {
                MTXCopy(model->getAnmMtx(joint_no), *calc_mtx);
                cMtx_YrotM(*calc_mtx, a_this->field_0x47ae);
                model->setAnmMtx(joint_no, *calc_mtx);
                MTXCopy(*calc_mtx, J3DSys::mCurrentMtx);
            } else if (joint_no >= 5 && joint_no <= 7) {
                MTXCopy(model->getAnmMtx(joint_no), *calc_mtx);
                cMtx_YrotM(*calc_mtx, a_this->field_0x47ae);
                model->setAnmMtx(joint_no, *calc_mtx);
                MTXCopy(*calc_mtx, J3DSys::mCurrentMtx);
            }
        }
    }

    return 1;
}

/* 806107B4-806109AC 000334 01F8+00 1/1 0/0 0/0 .text            TailCallBack__FP8J3DJointi */
static int TailCallBack(J3DJoint* i_joint, int param_1) {
    if (param_1 == 0) {
        int joint_no = i_joint->getJntNo();
        J3DModel* model = j3dSys.getModel();
        b_ob_class* a_this = (b_ob_class*)model->getUserArea();

        if (a_this != NULL) {
            if (joint_no == 3) {
                MTXCopy(model->getAnmMtx(joint_no), *calc_mtx);
                cMtx_YrotM(*calc_mtx, a_this->field_0x47aa);
                model->setAnmMtx(joint_no, *calc_mtx);
                MTXCopy(*calc_mtx, J3DSys::mCurrentMtx);
            } else if (joint_no == 6) {
                MTXCopy(model->getAnmMtx(joint_no), *calc_mtx);
                cMtx_YrotM(*calc_mtx, -a_this->field_0x47aa);
                model->setAnmMtx(joint_no, *calc_mtx);
                MTXCopy(*calc_mtx, J3DSys::mCurrentMtx);
            } else if (joint_no == 2 || joint_no == 4 || joint_no == 5) {
                int idx = joint_no;
                if (joint_no == 2) {
                    idx = 0;
                } else if (joint_no >= 4) {
                    idx = joint_no - 3;
                }

                MTXCopy(model->getAnmMtx(joint_no), *calc_mtx);
                cMtx_YrotM(*calc_mtx, a_this->field_0x47a4[idx] + a_this->field_0x47ac);
                model->setAnmMtx(joint_no, *calc_mtx);
                MTXCopy(*calc_mtx, J3DSys::mCurrentMtx);
            }
        }
    }

    return 1;
}

/* ############################################################################################## */
/* 8061B4C0-8061B4C4 000008 0001+03 4/4 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8061B4C4-8061B4C8 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 8061B4C8-8061B4CC 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8061B4CC-8061B4D0 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 8061B4D0-8061B4D4 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 8061B4D4-8061B4D8 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 8061B4D8-8061B4DC 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8061B4DC-8061B4E0 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 8061B4E0-8061B4E4 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 8061B4E4-8061B4E8 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 8061B4E8-8061B4EC 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8061B4EC-8061B4F0 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 8061B4F0-8061B4F4 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 8061B4F4-8061B4F8 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 8061B4F8-8061B4FC 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8061B4FC-8061B500 -00001 0004+00 1/2 0/0 0/0 .bss             None */
/* 8061B4FC 0001+00 data_8061B4FC @1009 */
/* 8061B4FD 0003+00 data_8061B4FD None */
#pragma push
#pragma force_active on
static u8 struct_8061B4FC;
#pragma pop

#pragma push
#pragma force_active on
static u8 data_8061B4FD;
#pragma pop

/* 8061B500-8061B504 000048 0004+00 0/2 0/0 0/0 .bss             moveSW */
#pragma push
#pragma force_active on
static BOOL moveSW;
#pragma pop

/* 8061B504-8061B508 00004C 0004+00 1/4 0/0 0/0 .bss             moveSW2 */
static BOOL moveSW2;

/* 8061B508-8061B514 000050 000C+00 1/1 0/0 0/0 .bss             @3767 */
static u8 lit_3767[12];

/* 8061B514-8061B534 00005C 0020+00 4/7 0/0 0/0 .bss             l_HIO */
#ifdef NONMATCHING
static daB_OB_HIO_c l_HIO;
#else
static u8 l_HIO[32];
#endif

/* 8061B534-8061B538 00007C 0004+00 3/4 0/0 0/0 .bss             pno */
static int pno;

/* 8061B538-8061B53C 000080 0004+00 1/2 0/0 0/0 .bss             fin */
static int fin;

/* 806109AC-80610B3C 00052C 0190+00 1/1 0/0 0/0 .text            FinACallBack__FP8J3DJointi */
static int FinACallBack(J3DJoint* i_joint, int param_1) {
    if (param_1 == 0) {
        int joint_no = i_joint->getJntNo();
        J3DModel* model = j3dSys.getModel();
        b_ob_class* a_this = (b_ob_class*)model->getUserArea();

        if (a_this != NULL) {
            if (joint_no == 2 || joint_no == 1) {
                MTXCopy(model->getAnmMtx(joint_no), *calc_mtx);

                if (fin == 0) {
                    cMtx_YrotM(*calc_mtx, a_this->mBodyParts[pno].mFinARot.y);
                    cMtx_XrotM(*calc_mtx, a_this->mBodyParts[pno].mFinARot.y);
                } else {
                    cMtx_YrotM(*calc_mtx, -a_this->mBodyParts[pno].mFinARot.y);
                    cMtx_XrotM(*calc_mtx, -a_this->mBodyParts[pno].mFinARot.y);
                }

                cMtx_ZrotM(*calc_mtx, a_this->mBodyParts[pno].mFinARot.x);
                model->setAnmMtx(joint_no, *calc_mtx);
                MTXCopy(*calc_mtx, J3DSys::mCurrentMtx);
            }
        }
    }

    return 1;
}

/* 80610B3C-80610C24 0006BC 00E8+00 1/1 0/0 0/0 .text            FinBCallBack__FP8J3DJointi */
static int FinBCallBack(J3DJoint* i_joint, int param_1) {
    if (param_1 == 0) {
        int joint_no = i_joint->getJntNo();
        J3DModel* model = j3dSys.getModel();
        b_ob_class* a_this = (b_ob_class*)model->getUserArea();

        if (a_this != NULL) {
            if (joint_no == 2 || joint_no == 3 || joint_no == 5 || joint_no == 6) {
                MTXCopy(model->getAnmMtx(joint_no), *calc_mtx);
                cMtx_YrotM(*calc_mtx, a_this->mBodyParts[pno].mFinBRot.y);
                model->setAnmMtx(joint_no, *calc_mtx);
                MTXCopy(*calc_mtx, J3DSys::mCurrentMtx);
            }
        }
    }

    return 1;
}

/* 80610C24-80610D24 0007A4 0100+00 1/1 0/0 0/0 .text            FinCCallBack__FP8J3DJointi */
static int FinCCallBack(J3DJoint* i_joint, int param_1) {
    if (param_1 == 0) {
        int joint_no = i_joint->getJntNo();
        J3DModel* model = j3dSys.getModel();
        b_ob_class* a_this = (b_ob_class*)model->getUserArea();

        if (a_this != NULL) {
            if (joint_no == 1) {
                MTXCopy(model->getAnmMtx(joint_no), *calc_mtx);
                cMtx_YrotM(*calc_mtx, a_this->mBodyParts[pno].mFinCRot.y);
                cMtx_XrotM(*calc_mtx, -a_this->mBodyParts[pno].mFinCRot.y);
                model->setAnmMtx(joint_no, *calc_mtx);
                MTXCopy(*calc_mtx, J3DSys::mCurrentMtx);
            }
        }
    }

    return 1;
}

/* ############################################################################################## */
/* 8061AD9C-8061ADA4 000018 0008+00 1/7 0/0 0/0 .rodata          @4017 */
SECTION_RODATA static u8 const lit_4017[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8061AD9C, &lit_4017);

/* 80610D24-80610E2C 0008A4 0108+00 1/1 0/0 0/0 .text            sui_nodeCallBack__FP8J3DJointi */
// matches with literals
#ifdef NONMATCHING
static int sui_nodeCallBack(J3DJoint* i_joint, int param_1) {
    if (param_1 == 0) {
        int joint_no = i_joint->getJntNo();
        J3DModel* model = j3dSys.getModel();
        b_ob_class* a_this = (b_ob_class*)model->getUserArea();

        if (a_this != NULL) {
            if (joint_no >= 2 && joint_no <= 4) {
                f32 rot = a_this->field_0x47c4 * (TREG_F(8) + 1.0f);

                MTXCopy(model->getAnmMtx(joint_no), *calc_mtx);
                cMtx_ZrotM(*calc_mtx, rot);
                model->setAnmMtx(joint_no, *calc_mtx);
                MTXCopy(*calc_mtx, J3DSys::mCurrentMtx);
            }
        }
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int sui_nodeCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/sui_nodeCallBack__FP8J3DJointi.s"
}
#pragma pop
#endif

/* 80610E2C-80610EE4 0009AC 00B8+00 1/1 0/0 0/0 .text            dark__FP12J3DModelDatas */
static void dark(J3DModelData* i_modelData, s16 i_color) {
    if (i_color != 0) {
        for (u16 i = 0; i < i_modelData->getMaterialNum(); i++) {
            J3DMaterial* material = i_modelData->getMaterialNodePointer(i);
            material->getTevColor(0)->r = i_color;
            material->getTevColor(0)->g = i_color;
            material->getTevColor(0)->b = i_color;
        }
    }
}

/* ############################################################################################## */
/* 8061ADA4-8061ADAC 000020 0008+00 0/7 0/0 0/0 .rodata          @4266 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4266[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8061ADA4, &lit_4266);
#pragma pop

/* 8061ADAC-8061ADB4 000028 0008+00 0/7 0/0 0/0 .rodata          @4267 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4267[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8061ADAC, &lit_4267);
#pragma pop

/* 8061ADB4-8061ADBC 000030 0008+00 0/7 0/0 0/0 .rodata          @4268 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4268[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8061ADB4, &lit_4268);
#pragma pop

/* 8061ADBC-8061ADC0 000038 0004+00 0/3 0/0 0/0 .rodata          @4269 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4269 = 500.0f;
COMPILER_STRIP_GATE(0x8061ADBC, &lit_4269);
#pragma pop

/* 8061ADC0-8061ADC4 00003C 0004+00 0/6 0/0 0/0 .rodata          @4270 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4270 = 100.0f;
COMPILER_STRIP_GATE(0x8061ADC0, &lit_4270);
#pragma pop

/* 8061ADC4-8061ADC8 000040 0004+00 0/2 0/0 0/0 .rodata          @4271 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4271 = 1300.0f;
COMPILER_STRIP_GATE(0x8061ADC4, &lit_4271);
#pragma pop

/* 80610EE4-80611408 000A64 0524+00 1/0 0/0 0/0 .text            daB_OB_Draw__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static int daB_OB_Draw(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;

    g_env_light.settingTevStruct(0, &a_this->current.pos, &a_this->tevStr);
    BOOL var_r28 = true;

    if (i_this->mFishBattleMode == 2) {
        camera_class* camera = (camera_class*)dComIfGp_getCamera(0);
        var_r28 = false;

        for (int i = 0; i < 19; i++) {
            if (!i_this->mBodyParts[i].mHide) {
                if ((i_this->mBodyParts[i].mPos - camera->mLookat.mEye).abs() >
                    i_this->mBodyParts[i].mSize * (JREG_F(17) + 500.0f))
                {
                    g_env_light.setLightTevColorType_MAJI(i_this->mBodyParts[i].mpMorf->getModel(),
                                                          &a_this->tevStr);
                    dark(i_this->mBodyParts[i].mpMorf->getModel()->getModelData(),
                         i_this->field_0x5d14);
                    i_this->mBodyParts[i].mpMorf->entryDL();

                    if (i == 0) {
                        var_r28 = true;
                    }

                    if (i_this->mBodyParts[i].mpFinMorf != NULL) {
                        g_env_light.setLightTevColorType_MAJI(
                            i_this->mBodyParts[i].mpFinMorf->getModel(), &a_this->tevStr);
                        dark(i_this->mBodyParts[i].mpFinMorf->getModel()->getModelData(),
                             i_this->field_0x5d14);
                        i_this->mBodyParts[i].mpFinMorf->entryDL();
                    }

                    if (i_this->mBodyParts[i].mpFinUnkMorf != NULL) {
                        g_env_light.setLightTevColorType_MAJI(
                            i_this->mBodyParts[i].mpFinUnkMorf->getModel(), &a_this->tevStr);
                        dark(i_this->mBodyParts[i].mpFinUnkMorf->getModel()->getModelData(),
                             i_this->field_0x5d14);
                        i_this->mBodyParts[i].mpFinUnkMorf->entryDL();
                    }

                    if (i_this->mBodyParts[i].mpFinBMorf != NULL) {
                        g_env_light.setLightTevColorType_MAJI(
                            i_this->mBodyParts[i].mpFinBMorf->getModel(), &a_this->tevStr);
                        dark(i_this->mBodyParts[i].mpFinBMorf->getModel()->getModelData(),
                             i_this->field_0x5d14);
                        i_this->mBodyParts[i].mpFinBMorf->entryDL();
                    }

                    if (i_this->mBodyParts[i].mpFinCMorf != NULL) {
                        g_env_light.setLightTevColorType_MAJI(
                            i_this->mBodyParts[i].mpFinCMorf->getModel(), &a_this->tevStr);
                        dark(i_this->mBodyParts[i].mpFinCMorf->getModel()->getModelData(),
                             i_this->field_0x5d14);
                        i_this->mBodyParts[i].mpFinCMorf->entryDL();
                    }
                }
            }
        }

        if (!i_this->mHideCore) {
            g_env_light.setLightTevColorType_MAJI(i_this->mpCoreMorf->getModel(), &a_this->tevStr);
            i_this->mpCoreMorf->entryDL();
        }
    }

    if (i_this->mCoreBattleMode && var_r28) {
        g_env_light.setLightTevColorType_MAJI(i_this->mpCoreMorf->getModel(), &a_this->tevStr);

        if (i_this->mAction == OB_ACTION_CORE_START || i_this->mAction == OB_ACTION_CORE_HAND_MOVE)
        {
            i_this->mpCoreMorf->getModel()
                ->getModelData()
                ->getMaterialNodePointer(1)
                ->getShape()
                ->hide();
        } else {
            i_this->mpCoreMorf->getModel()
                ->getModelData()
                ->getMaterialNodePointer(1)
                ->getShape()
                ->show();
        }

        i_this->mpCoreMorf->entryDL();

        if (i_this->mDrawShadow) {
            cXyz pos;
            pos.set(a_this->current.pos.x, a_this->current.pos.y + 100.0f, a_this->current.pos.z);

            i_this->mShadowKey = dComIfGd_setShadow(
                i_this->mShadowKey, 1, i_this->mpCoreMorf->getModel(), &pos, BREG_F(19) + 1300.0f, 0.0f,
                a_this->current.pos.y, i_this->mAcch.GetGroundH(), i_this->mAcch.m_gnd,
                &a_this->tevStr, 0, 1.0f, dDlst_shadowControl_c::getSimpleTex());
        }

        g_env_light.settingTevStruct(0, &a_this->home.pos, &a_this->tevStr);
        g_env_light.setLightTevColorType_MAJI(i_this->mBodyParts[0].mpMorf->getModel(),
                                              &a_this->tevStr);
        i_this->mBodyParts[0].mpMorf->entryDL();
    }

    if (i_this->mSuiBrkFrame > 0.0f) {
        g_env_light.setLightTevColorType_MAJI(i_this->mpSuiModel, &a_this->tevStr);
        i_this->mpSuiBrk->entry(i_this->mpSuiModel->getModelData());
        i_this->mpSuiBtk->entry(i_this->mpSuiModel->getModelData());
        mDoExt_modelUpdateDL(i_this->mpSuiModel);
    }

    if (i_this->mBlureRate > 2) {
        mDoGph_gInf_c::setBlureRate(i_this->mBlureRate);
        mDoGph_gInf_c::onBlure();
    } else {
        mDoGph_gInf_c::offBlure();
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daB_OB_Draw(b_ob_class* i_this) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/daB_OB_Draw__FP10b_ob_class.s"
}
#pragma pop
#endif

/* 80611408-80611444 000F88 003C+00 5/5 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv(){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061ADC8-8061ADCC 000044 0004+00 0/4 0/0 0/0 .rodata          @4372 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4372 = 200.0f;
COMPILER_STRIP_GATE(0x8061ADC8, &lit_4372);
#pragma pop

/* 8061ADCC-8061ADD0 000048 0004+00 0/1 0/0 0/0 .rodata          @4373 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4373 = 1600.0f;
COMPILER_STRIP_GATE(0x8061ADCC, &lit_4373);
#pragma pop

/* 8061ADD0-8061ADD4 00004C 0004+00 0/3 0/0 0/0 .rodata          @4374 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4374 = 2.0f;
COMPILER_STRIP_GATE(0x8061ADD0, &lit_4374);
#pragma pop

/* 8061ADD4-8061ADD8 000050 0004+00 0/7 0/0 0/0 .rodata          @4375 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4375 = 0.5f;
COMPILER_STRIP_GATE(0x8061ADD4, &lit_4375);
#pragma pop

/* 8061ADD8-8061ADDC 000054 0004+00 0/2 0/0 0/0 .rodata          @4376 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4376 = 1.5f;
COMPILER_STRIP_GATE(0x8061ADD8, &lit_4376);
#pragma pop

/* 80611444-80611824 000FC4 03E0+00 1/1 0/0 0/0 .text            core_start__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static void core_start(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    cXyz sp28;
    cXyz sp34;

    i_this->mDistToPlayer = fopAcM_searchPlayerDistance(i_this);

    switch (i_this->mMode) {
    case 0:
        if (i_this->mTimers[0] == 0) {
            b_oh_class* tentacle =
                (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[i_this->mCoreHandNo]);
            if (tentacle != NULL) {
                i_this->mMode = 1;
                i_this->field_0x478c = 0;

                anm_init(i_this, OB_ANM_APPEAR, 0.0f, 0, 0.0f);
                a_this->home.pos.y = (i_this->field_0x47a0 - 200.0f) + KREG_F(11);
                a_this->current.pos.y = a_this->home.pos.y - 500.0f;
            }
        }
        break;
    case 1:
#ifdef DEBUG
        if (mDoCPd_c::getTrigY(PAD_2)) {
            i_this->mMode = 2;
            i_this->mDemoAction = 30;
        }
#endif

        if (i_this->mDistToPlayer < 1600.0f) {
            i_this->mMode = 2;
            i_this->mDemoAction = 30;
        }
        break;
    case 2:
        b_oh_class* tentacle =
            (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[i_this->mCoreHandNo]);
        MTXCopy(tentacle->mpMorf->getModel()->getAnmMtx(i_this->field_0x478c),
                mDoMtx_stack_c::get());
        mDoMtx_stack_c::multVecZero(&sp28);

        MTXCopy(
            tentacle->mpMorf->getModel()->getAnmMtx(i_this->field_0x478c + i_this->field_0x4790),
            mDoMtx_stack_c::get());
        mDoMtx_stack_c::multVecZero(&sp34);

        a_this->current.pos = sp28 + ((sp34 - sp28) * i_this->field_0x4798);

        int var_r4;
        if (i_this->mTimers[0] == 0) {
            if (i_this->field_0x4790 > 0) {
                i_this->field_0x4798 += l_HIO.mCoreMoveSpeed;
                var_r4 = i_this->field_0x478c + i_this->field_0x4790;
                a_this->current.angle.y += 0x200;
            } else {
                i_this->field_0x4798 += l_HIO.mCoreMoveSpeed * 2.0f;
                var_r4 = i_this->field_0x478c + i_this->field_0x4790 + i_this->field_0x4790;

                if (var_r4 < tentacle->field_0xca8) {
                    var_r4 = tentacle->field_0xca8;
                }
            }

            cLib_addCalc2(&tentacle->field_0x9dc[var_r4], BREG_F(9) + 2.0f, 0.5f, l_HIO.mCoreMoveSpeed * (BREG_F(12) + 2.0f));
        } else {
            int var_r27 = i_this->field_0x478c;
            cLib_addCalc2(&tentacle->field_0x9dc[var_r27], BREG_F(9) + 1.5f, 0.5f, l_HIO.mCoreMoveSpeed * (BREG_F(12) + 2.0f));

            if (i_this->field_0x4790 > 0) {
                var_r27 -= i_this->field_0x4790;
            } else {
                var_r27 += i_this->field_0x4790;
            }

            if (var_r27 < tentacle->field_0xca8) {
                var_r27 = tentacle->field_0xca8;
            }

            cLib_addCalc2(&tentacle->field_0x9dc[var_r27], BREG_F(9) + 1.5f, 0.5f, l_HIO.mCoreMoveSpeed * (BREG_F(12) + 2.0f));
            cLib_addCalcAngleS2(&a_this->current.angle.y, i_this->mYAngleToPlayer, 2, 0x800);
            cLib_addCalcAngleS2(&a_this->current.angle.x, i_this->mXAngleToPlayer, 2, 0x800);
        }

        if (i_this->field_0x4798 >= 1.0f) {
            i_this->field_0x4798--;
            i_this->field_0x478c += i_this->field_0x4790;

            if (i_this->field_0x478c >= 28) {
                i_this->field_0x4790 *= -1;
                i_this->mTimers[0] = 110;
            } else if (i_this->field_0x478c <= tentacle->field_0xca8) {
                i_this->mMode = 3;
            }
        }
        break;
    case 3:
        break;
    }

    a_this->shape_angle.z += 0xA00;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void core_start(b_ob_class* i_this){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/core_start__FP10b_ob_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8061ADDC-8061ADE0 000058 0004+00 0/3 0/0 0/0 .rodata          @4479 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4479 = 7.0f;
COMPILER_STRIP_GATE(0x8061ADDC, &lit_4479);
#pragma pop

/* 8061ADE0-8061ADE4 00005C 0004+00 0/6 0/0 0/0 .rodata          @4480 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4480 = 10.0f;
COMPILER_STRIP_GATE(0x8061ADE0, &lit_4480);
#pragma pop

/* 8061ADE4-8061ADE8 000060 0004+00 0/2 0/0 0/0 .rodata          @4481 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4481 = -200.0f;
COMPILER_STRIP_GATE(0x8061ADE4, &lit_4481);
#pragma pop

/* 80611824-80611C20 0013A4 03FC+00 1/1 0/0 0/0 .text            core_hand_move__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static void core_hand_move(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    cXyz sp38;
    cXyz sp44;

    switch (i_this->mMode) {
    case 0:
        if (i_this->mTimers[0] == 0) {
            b_oh_class* tentacle =
                (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[i_this->mCoreHandNo]);
            if (tentacle == NULL || (tentacle != NULL && tentacle->mAction == OH_ACTION_END)) {
                i_this->mCoreHandNo += cM_rndF(7.0f) + 1.0f;
                if (i_this->mCoreHandNo >= 8) {
                    i_this->mCoreHandNo -= 8;
                }
            } else {
                i_this->mMode = 1;
                i_this->field_0x478c = tentacle->field_0xca8;
            }
        }
        break;
    case 1:
        b_oh_class* tentacle =
            (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[i_this->mCoreHandNo]);
        if (tentacle == NULL || (tentacle != NULL && tentacle->mAction == OH_ACTION_END)) {
            i_this->mMode = 0;
            return;
        }

        MTXCopy(tentacle->mpMorf->getModel()->getAnmMtx(i_this->field_0x478c),
                mDoMtx_stack_c::get());
        mDoMtx_stack_c::multVecZero(&sp38);

        MTXCopy(
            tentacle->mpMorf->getModel()->getAnmMtx(i_this->field_0x478c + i_this->field_0x4790),
            mDoMtx_stack_c::get());
        mDoMtx_stack_c::multVecZero(&sp44);

        a_this->current.pos = sp38 + ((sp44 - sp38) * i_this->field_0x4798);

        if (tentacle->mAction == OH_ACTION_ATTACK || tentacle->mAction == OH_ACTION_CAUGHT) {
            if (i_this->field_0x4790 > 0) {
                i_this->field_0x4790 = -1;
            }

            i_this->field_0x4798 += l_HIO.mCoreMoveSpeed * 2.0f;
        } else {
            i_this->field_0x4798 += l_HIO.mCoreMoveSpeed;
        }

        int var_r4;
        if (i_this->field_0x4790 > 0) {
            var_r4 = i_this->field_0x478c + i_this->field_0x4790;
        } else {
            var_r4 = i_this->field_0x478c + i_this->field_0x4790 + i_this->field_0x4790;
            if (var_r4 < tentacle->field_0xca8) {
                var_r4 = tentacle->field_0xca8;
            }
        }

        cLib_addCalc2(&tentacle->field_0x9dc[var_r4], BREG_F(9) + 2.0f, 0.5f, l_HIO.mCoreMoveSpeed * (BREG_F(12) + 2.0f));

        if (i_this->field_0x4798 >= 1.0f) {
            i_this->field_0x4798--;
            i_this->field_0x478c += i_this->field_0x4790;

            if (i_this->field_0x478c >= 29) {
                i_this->field_0x4790 *= -1;
            } else if (i_this->field_0x478c <= tentacle->field_0xca8) {
                i_this->mMode = 2;
            }
        }

        cLib_addCalc0(&i_this->field_0x479c, 1.0f, 10.0f);
        break;
    case 2:
        cLib_addCalc2(&i_this->field_0x479c, -200.0f, 1.0f, 10.0f);

        if (i_this->mTimers[0] == 0) {
            i_this->mMode = 0;
            i_this->field_0x478c = 0;
            i_this->field_0x4790 = 1;

            i_this->mCoreHandNo += cM_rndF(7.0f) + 1.0f;
            if (i_this->mCoreHandNo >= 8) {
                i_this->mCoreHandNo -= 8;
            }
        }
        break;
    }

    a_this->shape_angle.z += 0xA00;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void core_hand_move(b_ob_class* i_this) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/core_hand_move__FP10b_ob_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8061B53C-8061B540 000084 0004+00 2/2 0/0 0/0 .bss             bf_ct */
static int bf_ct;

/* 80611C20-80611C78 0017A0 0058+00 1/1 0/0 0/0 .text            s_bf_sub__FPvPv */
static void* s_bf_sub(void* i_this, void* i_data) {
    if (fopAcM_IsActor(i_this) && fopAcM_GetName(i_this) == PROC_E_OctBg) {
        bf_ct++;
    }

    return NULL;
}

/* 80611C78-80611CC4 0017F8 004C+00 1/1 0/0 0/0 .text            s_bfdel_sub__FPvPv */
static void* s_bfdel_sub(void* i_this, void* i_data) {
    if (fopAcM_IsActor(i_this) && fopAcM_GetName(i_this) == PROC_E_OctBg) {
        fopAcM_delete((fopAc_ac_c*)i_this);
    }

    return NULL;
}

/* 80611CC4-80611D10 001844 004C+00 1/1 0/0 0/0 .text            s_kaisoudel_sub__FPvPv */
static void* s_kaisoudel_sub(void* i_this, void* i_data) {
    if (fopAcM_IsActor(i_this) && fopAcM_GetName(i_this) == PROC_Obj_Kaisou) {
        fopAcM_delete((fopAc_ac_c*)i_this);
    }

    return NULL;
}

/* ############################################################################################## */
/* 8061ADE8-8061ADEC 000064 0004+00 0/5 0/0 0/0 .rodata          @4544 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4544 = 5.0f;
COMPILER_STRIP_GATE(0x8061ADE8, &lit_4544);
#pragma pop

/* 8061ADEC-8061ADF0 000068 0004+00 0/4 0/0 0/0 .rodata          @4545 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4545 = 350.0f;
COMPILER_STRIP_GATE(0x8061ADEC, &lit_4545);
#pragma pop

/* 8061ADF0-8061ADF4 00006C 0004+00 0/2 0/0 0/0 .rodata          @4546 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4546 = 65536.0f;
COMPILER_STRIP_GATE(0x8061ADF0, &lit_4546);
#pragma pop

/* 80611D10-80611EF8 001890 01E8+00 1/1 0/0 0/0 .text            bombfishset__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static void bombfishset(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    cXyz pos;
    i_this->mHitIFrameTimer = 20;

    switch (i_this->mMode) {
    case 0:
        anm_init(i_this, OB_ANM_WAIT, 5.0f, J3DFrameCtrl::LOOP_REPEAT_e, 3.0f);
        i_this->mMode = 1;

        if (a_this->field_0x567 == 0 && i_this->mDemoAction == 0) {
            i_this->mDemoAction = 60;
            a_this->field_0x567 = 1;
        }

        i_this->mTimers[0] = 150;
        break;
    case 1:
        if (i_this->mTimers[0] < 100 && !(i_this->mTimers[0] & 15)) {
            bf_ct = 0;
            fpcM_Search(s_bf_sub, i_this);

            if (bf_ct < 10) {
                pos = a_this->home.pos;
                pos.y += (JREG_F(6) + 350.0f);

                csXyz angle(-0x3800, 0, 0);
                angle.y = cM_rndF(0x10000);

                fopAcM_createChild(PROC_E_OctBg, fopAcM_GetID(a_this), 0xFFFFFFFF, &pos,
                                   fopAcM_GetRoomNo(a_this), &angle, NULL, -1, NULL);
                i_this->mOISound.startCreatureVoice(Z2SE_EN_OI_BG_APPEAR, -1);
            }
        }

        if (i_this->mTimers[0] == 0) {
            if (i_this->mDemoAction != 0) {
                i_this->mDemoAction = 101;
            }

            i_this->mAction = OB_ACTION_CORE_HAND_MOVE;
            i_this->mMode = 0;
            anm_init(i_this, OB_ANM_WAIT, 5.0f, J3DFrameCtrl::LOOP_REPEAT_e, 1.0f);
        }
        break;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void bombfishset(b_ob_class* i_this) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/bombfishset__FP10b_ob_class.s"
}
#pragma pop
#endif

/* 80611EF8-80611F34 001A78 003C+00 2/2 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm csXyz::~csXyz() {
extern "C" asm void __dt__5csXyzFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__dt__5csXyzFv.s"
}
#pragma pop

/* 80611F34-80611FAC 001AB4 0078+00 1/1 0/0 0/0 .text            core_hook__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static void core_hook(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    i_this->mHitIFrameTimer = 20;

    switch (i_this->mMode) {
    case 0:
        i_this->mMode = 1;
        a_this->speedF = 0.0f;
        i_this->mTimers[0] = 3;
        break;
    case 1:
        break;
    }

    if (i_this->mTimers[0] == 0 && !fopAcM_checkHookCarryNow(a_this)) {
        i_this->mAction = OB_ACTION_CORE_CHANCE;
        i_this->mMode = 0;
    }

    a_this->shape_angle.z += 0xA00;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void core_hook(b_ob_class* i_this){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/core_hook__FP10b_ob_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8061ADF4-8061ADF8 000070 0004+00 0/4 0/0 0/0 .rodata          @4682 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4682 = 20.0f;
COMPILER_STRIP_GATE(0x8061ADF4, &lit_4682);
#pragma pop

/* 8061ADF8-8061ADFC 000074 0004+00 0/3 0/0 0/0 .rodata          @4683 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4683 = 6.0f;
COMPILER_STRIP_GATE(0x8061ADF8, &lit_4683);
#pragma pop

/* 8061ADFC-8061AE00 000078 0004+00 0/5 0/0 0/0 .rodata          @4684 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4684 = 50.0f;
COMPILER_STRIP_GATE(0x8061ADFC, &lit_4684);
#pragma pop

/* 8061AE00-8061AE04 00007C 0004+00 0/1 0/0 0/0 .rodata          @4685 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4685 = 7000.0f;
COMPILER_STRIP_GATE(0x8061AE00, &lit_4685);
#pragma pop

/* 8061AE04-8061AE08 000080 0004+00 0/3 0/0 0/0 .rodata          @4686 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4686 = 10000.0f;
COMPILER_STRIP_GATE(0x8061AE04, &lit_4686);
#pragma pop

/* 80611FAC-80612484 001B2C 04D8+00 1/1 0/0 0/0 .text            core_chance__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static int core_chance(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    cXyz sp68;
    cXyz sp74;
    int var_r30 = 1;

    switch (i_this->mMode) {
    case 0:
        a_this->current.angle.x = 0;
        a_this->speedF = 0.0f;
        a_this->speed.y = 0.0f;

        sp68.x = a_this->home.pos.x - a_this->current.pos.x;
        sp68.z = a_this->home.pos.z - a_this->current.pos.z;
        if (JMAFastSqrt(sp68.x * sp68.x + sp68.z * sp68.z) < (NREG_F(4) + 500.0f)) {
            i_this->mMode = 2;
        } else {
            i_this->mMode = 1;
            i_this->mTimers[0] = 150;
        }
        break;
    case 1:
        if (i_this->mAcch.i_ChkGroundHit()) {
            if (i_this->mTimers[0] == 0) {
                i_this->mMode = 2;
            } else {
                a_this->speed.y = VREG_F(1) + cM_rndF(10.0f) + 10.0f + 10.0f;
                a_this->current.angle.y = cM_rndF(0x10000);
                a_this->speedF = VREG_F(2) + cM_rndF(3.0f) + 3.0f + 5.0f;
            }
        }

        if (a_this->speedF >= 20.0f) {
            i_this->mTimers[0] = 2;
            cLib_addCalc2(&a_this->speedF, 6.0f, 1.0f, 1.0f);
        }
        break;
    case 2:
        i_this->mHitIFrameTimer = 20;
        var_r30 = 2;

        cLib_addCalc2(&a_this->speedF, 50.0f, 1.0f, 5.0f);
        i_this->mTargetMovePos = a_this->home.pos;
        i_this->mTargetMovePos.y += (VREG_F(6) + 350.0f);
        sp68 = i_this->mTargetMovePos - a_this->current.pos;

        f32 var_f31 = JMAFastSqrt(sp68.x * sp68.x + sp68.z * sp68.z);

        f32 var_f30 = var_f31 * 10.0f;
        if (var_f30 > 7000.0f) {
            var_f30 = 7000.0f;
        }

        f32 var_f29 = var_f31 * 20.0f;
        if (var_f29 > 10000.0f) {
            var_f29 = 10000.0f;
        }

        s16 sp58 = var_f30 * cM_ssin(i_this->field_0x4750 * 1000);
        s16 sp50 = var_f30 * cM_ssin(i_this->field_0x4750 * 800) - var_f29;

        a_this->current.angle.y = sp58 + cM_atan2s(sp68.x, sp68.z);
        a_this->current.angle.x = sp50 - cM_atan2s(sp68.y, var_f31);

        if (sp68.abs() < 100.0f) {
            if (i_this->field_0x4744 != 0) {
                i_this->mAction = OB_ACTION_CORE_END;
                i_this->mMode = 0;
            } else {
                if (i_this->field_0x5d13 && i_this->mDemoAction == 0) {
                    i_this->mAction = OB_ACTION_BOMBFISH_SET;
                    i_this->mMode = 0;
                    i_this->field_0x5d13 = 1;
                } else {
                    i_this->mAction = OB_ACTION_CORE_HAND_MOVE;
                    i_this->mMode = 0;
                }

                i_this->field_0x478c = 0;
                i_this->field_0x4790 = 1;
                i_this->field_0x479c = -200.0f;

                i_this->mCoreHandNo += (cM_rndF(7.0f) + 1.0f);
                if (i_this->mCoreHandNo >= 8) {
                    i_this->mCoreHandNo -= 8;
                }
            }
        }
        break;
    }

    a_this->shape_angle.z += 0xA00;
    return var_r30;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int core_chance(b_ob_class* i_this){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/core_chance__FP10b_ob_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8061AE08-8061AE0C 000084 0004+00 0/2 0/0 0/0 .rodata          @4776 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4776 = -1000.0f;
COMPILER_STRIP_GATE(0x8061AE08, &lit_4776);
#pragma pop

/* 8061AE0C-8061AE10 000088 0004+00 0/1 0/0 0/0 .rodata          @4777 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4777 = 900.0f;
COMPILER_STRIP_GATE(0x8061AE0C, &lit_4777);
#pragma pop

/* 80612484-8061285C 002004 03D8+00 1/1 0/0 0/0 .text            core_end__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static void core_end(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    int frame = i_this->mBodyParts[0].mpMorf->getFrame();
    i_this->mHitIFrameTimer = 10;

    cXyz sp34;
    switch (i_this->mMode) {
    case 0:
        i_this->mMode = 1;
        a_this->gravity = 0.0f;
        i_this->mDemoAction = 20;
        i_this->field_0x479c = -1000.0f;
        anm_init(i_this, OB_ANM_TENTACLE_END, 5.0f, J3DFrameCtrl::LOOP_ONCE_e, 1.0f);

        sp34.set(0.0f, 0.0f, 0.0f);
        dComIfGp_particle_set(0x880A, &sp34, NULL, NULL);
        mDoAud_seStart(Z2SE_EN_OI_DEMO_APPEAR2, NULL, 0, 0);
        break;
    case 1:
        if (frame == 100) {
            dComIfGp_getVibration().StartQuake(3, 31, cXyz(0.0f, 1.0f, 0.0f));
        }

        if (frame >= 100) {
            i_this->field_0x5ce4 = WREG_F(11) + 6.0f;
        }

        if (i_this->mBodyParts[0].mpMorf->isStop()) {
            i_this->mMode = 2;
            i_this->mTimers[0] = 120;
            dComIfGp_getVibration().StopQuake(31);
            a_this->home.pos.y = i_this->field_0x47a0 - 900.0f;
        }
        break;
    case 2:
        if (i_this->mTimers[0] == 60) {
            for (int i = 0; i < 8; i++) {
                fopAc_ac_c* tentacle = fopAcM_SearchByID(i_this->mTentacleActorIDs[i]);
                fopAcM_delete(tentacle);
            }
        }

        if (i_this->mTimers[0] <= 50) {
            i_this->field_0x5ce4 = WREG_F(11) + 6.0f;

            if (i_this->mTimers[0] == 50) {
                dComIfGp_getVibration().StartQuake(4, 31, cXyz(0.0f, 1.0f, 0.0f));
            }
        }

        if (i_this->mTimers[0] == 0) {
            i_this->mCoreBattleMode = 0;
            i_this->mFishBattleMode = 1;
            i_this->mZoneSwTimer = 0;
            a_this->home.pos.y = i_this->field_0x47a0;
            a_this->health = 2;

            MTXCopy(i_this->mBodyParts[0].mpMorf->getModel()->getBaseTRMtx(),
                    mDoMtx_stack_c::get());
            mDoMtx_stack_c::multVecZero(&a_this->current.pos);
            a_this->current.angle.y = 0;
            a_this->current.angle.x = -0x4000;
            a_this->shape_angle.x = -0x4000;

            i_this->mAction = OB_ACTION_FISH_NORMAL;
            i_this->mMode = 1;

            i_this->mMoveAngle.y = a_this->current.angle.y;
            i_this->mMoveAngle.x = -0x4000;
            i_this->field_0x4750 = 0;
            i_this->mTimers[0] = 110;
            anm_init(i_this, OB_ANM_APPEAR_2, 1.0f, J3DFrameCtrl::LOOP_ONCE_e, 1.0f);

            fopAcM_OffStatus(a_this, 0x80000);
            fopAcM_OnStatus(a_this, 0x200000);
            i_this->mTimers[3] = VREG_S(8) + 220;

            for (int i = 0; i < 8; i++) {
                i_this->mTentacleActorIDs[i] =
                    fopAcM_createChild(PROC_B_OH2, fopAcM_GetID(a_this), i, &a_this->current.pos,
                                       fopAcM_GetRoomNo(a_this), NULL, NULL, -1, NULL);
            }
        }
        break;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void core_end(b_ob_class* i_this){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/core_end__FP10b_ob_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8061AE10-8061AE14 00008C 0004+00 0/4 0/0 0/0 .rodata          @4875 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4875 = 300.0f;
COMPILER_STRIP_GATE(0x8061AE10, &lit_4875);
#pragma pop

/* 8061AE14-8061AE18 000090 0004+00 0/1 0/0 0/0 .rodata          @4876 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4876 = 800.0f;
COMPILER_STRIP_GATE(0x8061AE14, &lit_4876);
#pragma pop

/* 8061285C-80612CC8 0023DC 046C+00 1/1 0/0 0/0 .text            core_action__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static void core_action(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    fopAc_ac_c* player = dComIfGp_getPlayer(0);
    cXyz sp30;
    cXyz sp3C;

    if (i_this->mCoreAnm != 0) {
        anm_init(i_this, i_this->mCoreAnm, 10.0f, i_this->mCoreAnmMode, 1.0f);
        i_this->mCoreAnm = 0;
    }

    BOOL attn_ON = true;
    BOOL look_at_player = true;
    int var_r26 = 0;
    BOOL check_eat = false;
    BOOL play_move_sound = true;

    switch (i_this->mAction) {
    case OB_ACTION_CORE_START:
        core_start(i_this);
        look_at_player = false;
        break;
    case OB_ACTION_CORE_HAND_MOVE:
        core_hand_move(i_this);
        check_eat = true;
        break;
    case OB_ACTION_BOMBFISH_SET:
        bombfishset(i_this);
        play_move_sound = false;
        break;
    case OB_ACTION_CORE_HOOK:
        core_hook(i_this);
        look_at_player = false;
        play_move_sound = false;
        break;
    case OB_ACTION_CORE_CHANCE:
        var_r26 = core_chance(i_this);
        look_at_player = false;
        break;
    case OB_ACTION_CORE_END:
        core_end(i_this);
        var_r26 = 0;
        look_at_player = false;
        attn_ON = false;
        break;
    }

    if (check_eat && i_this->mDemoAction == 0) {
        sp30 = dComIfGp_getPlayer(0)->current.pos - a_this->home.pos;
        if (JMAFastSqrt(sp30.x * sp30.x + sp30.z * sp30.z) < (VREG_F(17) + 300.0f) && sp30.y < (VREG_F(18) + 800.0f)) {
            i_this->mDemoAction = 50;
        }
    }

    if (attn_ON && i_this->field_0x479c > -1.0f && a_this->eyePos.y >= a_this->home.pos.y) {
        fopAcM_OnStatus(a_this, 0);
        a_this->attention_info.flags = 4;
    } else {
        fopAcM_OffStatus(a_this, 0);
        a_this->attention_info.flags = 0;
    }

    if (look_at_player) {
        cLib_addCalcAngleS2(&a_this->current.angle.y, i_this->mYAngleToPlayer, 2, 0x800);
        cLib_addCalcAngleS2(&a_this->current.angle.x, i_this->mXAngleToPlayer, 2, 0x800);
    }

    if (var_r26 == 1) {
        cMtx_YrotS(*calc_mtx, a_this->current.angle.y);

        sp30.x = 0.0f;
        sp30.y = 0.0f;
        sp30.z = a_this->speedF;
        MtxPosition(&sp30, &sp3C);
        a_this->speed.x = sp3C.x;
        a_this->speed.z = sp3C.z;

        a_this->current.pos += a_this->speed;
        a_this->speed.y -= (VREG_F(0) + 3.0f);

        f32 temp_y_offset = VREG_F(11) + 20.0f;
        a_this->current.pos.y -= temp_y_offset;
        a_this->old.pos.y -= temp_y_offset;

        i_this->mAcch.CrrPos(dComIfG_Bgsp());
        a_this->current.pos.y += temp_y_offset;
        a_this->old.pos.y += temp_y_offset;
    } else if (var_r26 == 2) {
        cMtx_YrotS(*calc_mtx, a_this->current.angle.y);
        cMtx_XrotM(*calc_mtx, a_this->current.angle.x);

        sp30.x = 0.0f;
        sp30.y = 0.0f;
        sp30.z = a_this->speedF;
        MtxPosition(&sp30, &a_this->speed);
        a_this->current.pos += a_this->speed;
    }

    if (play_move_sound) {
        f32 dist_to_oldpos = (a_this->current.pos - a_this->old.pos).abs();
        i_this->mSound.startCreatureSoundLevel(Z2SE_EN_OI_CORE_MOVE, dist_to_oldpos, -1);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void core_action(b_ob_class* i_this){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/core_action__FP10b_ob_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8061AE18-8061AE1C 000094 0004+00 0/3 0/0 0/0 .rodata          @4912 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4912 = 30.0f;
COMPILER_STRIP_GATE(0x8061AE18, &lit_4912);
#pragma pop

/* 80612CC8-80612ED4 002848 020C+00 1/1 0/0 0/0 .text            core_damage_check__FP10b_ob_class
 */
// matches with literals
#ifdef NONMATCHING
static void core_damage_check(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;

    if (fopAcM_checkStatus(a_this, 0x100000)) {
        i_this->field_0x5d38 =
            dComIfGp_particle_set(i_this->field_0x5d38, 0x8802, &a_this->current.pos, NULL, NULL);
    }

    i_this->mCoreCcStts.Move();

    if (i_this->mHitIFrameTimer == 0 && i_this->mCcSph.ChkTgHit()) {
        i_this->mAtInfo.mpCollider = i_this->mCcSph.GetTgHitObj();
        cc_at_check(a_this, &i_this->mAtInfo);

        dComIfGp_particle_set(0x8801, &a_this->current.pos, NULL, NULL);

        if (i_this->mAtInfo.mpCollider->ChkAtType(AT_TYPE_HOOKSHOT)) {
            i_this->mAction = OB_ACTION_CORE_HOOK;
            i_this->mMode = 0;
            i_this->mSound.startCreatureSound(Z2SE_EN_OI_CORE_PULLOUT, 0, -1);
            dComIfGs_onOneZoneSwitch(7, -1);
        } else {
            a_this->current.angle.y = i_this->mYAngleToPlayer + 0x8000;
            a_this->speedF = 30.0f;
            a_this->speed.y = 7.0f;

            i_this->mSound.startCreatureVoice(Z2SE_EN_OI_V_CORE_DAMAGE, -1);

            if (a_this->health <= 0 && !dComIfGp_event_runCheck()) {
                i_this->field_0x4744 = 1;
            } else {
                i_this->field_0x5d13 = 1;
            }
        }

        i_this->mHitIFrameTimer = 10;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void core_damage_check(b_ob_class* i_this) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/core_damage_check__FP10b_ob_class.s"
}
#pragma pop
#endif

/* 80612ED4-806131A8 002A54 02D4+00 1/1 0/0 0/0 .text            fish_damage_check__FP10b_ob_class
 */
// matches with literals
#ifdef NONMATCHING
static void fish_damage_check(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);

    i_this->mBodyCcStts.Move();

    if (i_this->mHitIFrameTimer == 0) {
        for (int i = 0; i < 19; i++) {
            if (i_this->mBodyParts[i].mSph.ChkTgHit()) {
                i_this->mHitIFrameTimer = 10;
                def_se_set(&i_this->mOISound, i_this->mBodyParts[i].mSph.GetTgHitObj(), 0x2A, NULL);
            }
        }

        if (i_this->field_0x4756 == 0 && i_this->mCoreSph.ChkTgHit()) {
            i_this->mAtInfo.mpCollider = i_this->mCoreSph.GetTgHitObj();
            cc_at_check(a_this, &i_this->mAtInfo);

            if (i_this->mAtInfo.mpCollider->ChkAtType(AT_TYPE_HOOKSHOT)) {
                i_this->mTimers[1] = 40;
                i_this->field_0x4756 = 1;

                if (i_this->mAction != OB_ACTION_FISH_NORMAL) {
                    i_this->mAction = OB_ACTION_FISH_NORMAL;
                    i_this->mMode = 0;
                    OS_REPORT("B_OB HOOK VAC OFF !!\n");
                }
            }
        }

        fopEn_enemy_c* e_this = (fopEn_enemy_c*)a_this;
        if (e_this->checkCutDownHitFlg()) {
            e_this->offCutDownHitFlg();
            i_this->field_0x5d18 = 125;

            JPABaseEmitter* emitter = dComIfGp_particle_getEmitter(i_this->field_0x5d38);
            if (emitter != NULL) {
                emitter->becomeDeleteEmitter();
            }

            i_this->field_0x5d38 = 0;
            dComIfGp_getVibration().StartShock(5, 31, cXyz(0.0f, 1.0f, 0.0f));
            i_this->mHangHitCount++;
            dComIfGs_onOneZoneSwitch(9, -1);

            if (player->getCutType() == daPy_py_c::CUT_TYPE_FINISH_STAB) {
                i_this->mHangHitCount = 4;
                i_this->mHangFinishCount = 3;
                i_this->mOISound.startCreatureVoice(Z2SE_EN_OI_V_TODOME, -1);
                i_this->mSound.startCollisionSE(Z2SE_HIT_SWORD_STAB, 0x20);
            } else {
                i_this->mOISound.startCreatureVoice(Z2SE_EN_OI_V_DAMAGE, -1);
                i_this->mSound.startCollisionSE(Z2SE_HIT_SWORD_STAB, 0x1F);
            }

            if (i_this->mHangHitCount >= 4) {
                i_this->mHangFinishCount++;
                if (i_this->mHangFinishCount >= 2) {
                    e_this->onDownFlg();
                }

                i_this->mTimers[2] = 100;

                if (i_this->mHangFinishCount >= 3) {
                    i_this->mHangTimer = 250;
                } else {
                    i_this->mHangTimer = 210;
                }
            }

            i_this->field_0x47b0 = (JREG_S(2) + 20);
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fish_damage_check(b_ob_class* i_this) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/fish_damage_check__FP10b_ob_class.s"
}
#pragma pop
#endif

/* 806131A8-80613270 002D28 00C8+00 2/2 0/0 0/0 .text            pl_check__FP10b_ob_classfs */
static BOOL pl_check(b_ob_class* i_this, f32 i_range, s16 i_maxAngle) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    fopAc_ac_c* player = (fopAc_ac_c*)dComIfGp_getPlayer(0);

    if (fopAcM_searchPlayerDistance(a_this) < i_range) {
        s16 y_diff = a_this->current.angle.y - i_this->mYAngleToPlayer;
        s16 x_diff = a_this->current.angle.x - i_this->mXAngleToPlayer;

        if (y_diff < i_maxAngle && y_diff > (s16)-i_maxAngle && x_diff < i_maxAngle &&
            x_diff > (s16)-i_maxAngle)
        {
            if (!fopAcM_otherBgCheck(a_this, player)) {
                return true;
            }
        }
    }

    return false;
}

/* ############################################################################################## */
/* 8061AE1C-8061AE20 000098 0004+00 0/3 0/0 0/0 .rodata          @5274 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5274 = 150.0f;
COMPILER_STRIP_GATE(0x8061AE1C, &lit_5274);
#pragma pop

/* 8061AE20-8061AE24 00009C 0004+00 0/2 0/0 0/0 .rodata          @5275 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5275 = 2000.0f;
COMPILER_STRIP_GATE(0x8061AE20, &lit_5275);
#pragma pop

/* 8061AE24-8061AE28 0000A0 0004+00 0/1 0/0 0/0 .rodata          @5276 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5276 = 3500.0f;
COMPILER_STRIP_GATE(0x8061AE24, &lit_5276);
#pragma pop

/* 8061AE28-8061AE2C 0000A4 0004+00 0/3 0/0 0/0 .rodata          @5277 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5277 = 1000.0f;
COMPILER_STRIP_GATE(0x8061AE28, &lit_5277);
#pragma pop

/* 8061AE2C-8061AE30 0000A8 0004+00 0/1 0/0 0/0 .rodata          @5278 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5278 = 1200.0f;
COMPILER_STRIP_GATE(0x8061AE2C, &lit_5278);
#pragma pop

/* 8061AE30-8061AE34 0000AC 0004+00 0/1 0/0 0/0 .rodata          @5279 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5279 = 5000.0f;
COMPILER_STRIP_GATE(0x8061AE30, &lit_5279);
#pragma pop

/* 8061AE34-8061AE38 0000B0 0004+00 0/2 0/0 0/0 .rodata          @5280 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5280 = 3000.0f;
COMPILER_STRIP_GATE(0x8061AE34, &lit_5280);
#pragma pop

/* 8061AE38-8061AE3C 0000B4 0004+00 0/2 0/0 0/0 .rodata          @5281 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5281 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x8061AE38, &lit_5281);
#pragma pop

/* 8061AE3C-8061AE40 0000B8 0004+00 0/3 0/0 0/0 .rodata          @5282 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5282 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x8061AE3C, &lit_5282);
#pragma pop

/* 8061AE40-8061AE44 0000BC 0004+00 0/2 0/0 0/0 .rodata          @5283 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5283 = 40.0f;
COMPILER_STRIP_GATE(0x8061AE40, &lit_5283);
#pragma pop

/* 8061B540-8061B550 000088 000C+04 0/1 0/0 0/0 .bss             @5008 */
#pragma push
#pragma force_active on
static u8 lit_5008[12 + 4 /* padding */];
#pragma pop

/* 8061B550-8061B55C 000098 000C+00 0/1 0/0 0/0 .bss             @5011 */
#pragma push
#pragma force_active on
static u8 lit_5011[12];
#pragma pop

/* 8061B55C-8061B568 0000A4 000C+00 0/1 0/0 0/0 .bss             @5012 */
#pragma push
#pragma force_active on
static u8 lit_5012[12];
#pragma pop

/* 8061B568-8061B574 0000B0 000C+00 0/1 0/0 0/0 .bss             @5013 */
#pragma push
#pragma force_active on
static u8 lit_5013[12];
#pragma pop

/* 8061B574-8061B5A4 0000BC 0030+00 0/1 0/0 0/0 .bss             sdemo_p$5007 */
#pragma push
#pragma force_active on
static u8 sdemo_p[48];
#pragma pop

/* 80613270-80613E00 002DF0 0B90+00 1/1 0/0 0/0 .text            fish_normal__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static int fish_normal(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);

    cXyz sp64;
    f32 dist_to_ground = fabsf(i_this->mAcch.GetGroundH() - a_this->current.pos.y);
    BOOL throw_player = false;
    f32 dist_to_player = (a_this->eyePos - player->current.pos).abs();

    if (i_this->field_0x4756 == 1) {
        if (dist_to_player < KREG_F(11) + 150.0f) {
            Z2GetAudioMgr()->changeBgmStatus(2);
            i_this->field_0x4756 = 2;
        }
    } else if (i_this->field_0x4756 == 2) {
        if (dist_to_player >= KREG_F(11) + 150.0f) {
            i_this->field_0x4756 = 0;
            Z2GetAudioMgr()->changeBgmStatus(1);
        }
    }

    BOOL player_hang_on;
    if (dist_to_player < KREG_F(11) + 150.0f) {
        player_hang_on = true;
        i_this->field_0x47b4 = 0;
        moveSW2 = false;
    } else {
        player_hang_on = false;
    }

    int ret = 0;
    BOOL in_opening_demo = false;
    if (i_this->mDemoAction >= 20 && i_this->mDemoAction < 30) {
        in_opening_demo = true;
    }

    static cXyz sdemo_p[4] = {
        cXyz(2000.0f, 3500.0f, 0.0f),
        cXyz(-1000.0f, 2000.0f, 1000.0f),
        cXyz(0.0f, 3500.0f, 2000.0f),
        cXyz(1000.0f, 2000.0f, -1000.0f),
    };

    switch (i_this->mMode) {
    case 0:
        if (in_opening_demo) {
            i_this->mTargetMovePos = a_this->home.pos + sdemo_p[i_this->mDemoMovePosIdx];
            i_this->mDemoMovePosIdx++;
            i_this->mDemoMovePosIdx &= 3;

            i_this->mTimers[0] = 30;
            i_this->field_0x47b4 = 0;
        } else {
            i_this->mTargetMovePos.x = a_this->home.pos.x + cM_rndFX(2000.0f);
            i_this->mTargetMovePos.y = a_this->home.pos.y + 1000.0f + cM_rndFX(2000.0f);
            i_this->mTargetMovePos.z = a_this->home.pos.z + cM_rndFX(2000.0f);
            i_this->mTimers[0] = cM_rndF(30.0f) + 30.0f;
        }

        sp64 = i_this->mTargetMovePos - a_this->current.pos;
        i_this->mMoveAngle.y = cM_atan2s(sp64.x, sp64.z);
        i_this->mMoveAngle.x = -cM_atan2s(sp64.y, JMAFastSqrt(sp64.x * sp64.x + sp64.z * sp64.z));

        if (i_this->mMoveAngle.x > 0x1000) {
            i_this->mMoveAngle.x = 0x1000;
        } else if (i_this->mMoveAngle.x < -0x1000) {
            i_this->mMoveAngle.x = -0x1000;
        }

        i_this->mMode = 1;
        i_this->field_0x476a = 0;
        /* fallthrough */
    case 1:
        if (in_opening_demo && i_this->mTimers[0] > 60) {
            ret = 4;
        }

        if (i_this->mAnmID != OB_ANM_SWIM_WAIT) {
            anm_init(i_this, OB_ANM_SWIM_WAIT, 10.0f, J3DFrameCtrl::LOOP_REPEAT_e, 1.0f);
        }

        if (dist_to_ground < l_HIO.mBodySize * (ZREG_F(8) + 1200.0f)) {
            if (i_this->mMoveAngle.x > 0) {
                cLib_addCalcAngleS2(&i_this->mMoveAngle.x, 0, 4, 0x40);
            }

            if (a_this->current.angle.x > 0) {
                cLib_addCalcAngleS2(&a_this->current.angle.x, 0, 4, 0x40);
            }
        }

        s16 y_diff = a_this->current.angle.y - i_this->mMoveAngle.y;
        s16 x_diff = a_this->current.angle.x - i_this->mMoveAngle.x;
        if (i_this->mTimers[0] == 0 && y_diff <= 0x100 && y_diff >= (s16)-0x100 &&
            x_diff <= 0x100 && x_diff >= (s16)-0x100)
        {
            i_this->mMode = 0;
            i_this->field_0x47b4++;
        }

        if (!player_hang_on && i_this->field_0x47b4 >= 3 && pl_check(i_this, 5000.0f, 0x2000)) {
            i_this->mMode = 2;
            i_this->mTimers[0] = cM_rndF(50.0f) + 200.0f;
            i_this->field_0x47b4 = 0;
            i_this->field_0x476a = 0;
            i_this->mTimers[4] = 30;
        }
        break;
    case 2:
        ret = 1;
        i_this->mTargetMovePos.x = player->current.pos.x;

        if (dist_to_ground < l_HIO.mBodySize * (ZREG_F(8) + 1200.0f)) {
            i_this->mTargetMovePos.y = player->current.pos.y + 300.0f + AREG_F(7);
        } else {
            i_this->mTargetMovePos.y = player->current.pos.y;
        }

        i_this->mTargetMovePos.z = player->current.pos.z;

        sp64 = i_this->mTargetMovePos - a_this->current.pos;
        i_this->mMoveAngle.y = cM_atan2s(sp64.x, sp64.z);
        i_this->mMoveAngle.x = -cM_atan2s(sp64.y, JMAFastSqrt(sp64.x * sp64.x + sp64.z * sp64.z));
        sp64.abs();

        if (!daPy_getPlayerActorClass()->checkHookshotShootReturnMode() &&
            i_this->mTimers[4] == 0 && pl_check(i_this, BREG_F(17) + 3000.0f, 0x3000))
        {
            i_this->mAction = OB_ACTION_FISH_VACUME;
            i_this->mMode = 0;
            moveSW2 = true;
            return 1;
        }

        if (player_hang_on || daPy_getPlayerActorClass()->checkEquipHeavyBoots() ||
            !pl_check(i_this, 10000.0f, 0x3000) || i_this->mTimers[0] == 0)
        {
            i_this->mMode = 1;

            if (dist_to_ground < l_HIO.mBodySize * (ZREG_F(8) + 1200.0f)) {
                i_this->mMoveAngle.x = -0x2000;
                i_this->mTimers[0] = cM_rndF(30.0f) + 30.0f;
            } else {
                i_this->mMoveAngle.x = -0x1000;
                i_this->mTimers[0] = cM_rndF(10.0f) + 20.0f;
            }
        }
        break;
    case 10:
        ret = 1;
        i_this->mMoveAngle.y += 0x200;
        i_this->field_0x476a = 0x200;
        i_this->mMoveAngle.x = -0x1000;

        if (i_this->mTimers[2] == 0) {
            i_this->mMode = 1;
        }
        break;
    }

    cLib_addCalcAngleS2(&a_this->current.angle.y, i_this->mMoveAngle.y, 0x10, i_this->field_0x476a);
    cLib_addCalcAngleS2(&a_this->current.angle.x, i_this->mMoveAngle.x, 0x10, i_this->field_0x476a);

    if (in_opening_demo) {
        cLib_addCalcAngleS2(&i_this->field_0x476a, 0x100, 1, 2);
    } else {
        cLib_addCalcAngleS2(&i_this->field_0x476a, 0x180, 1, 8);
    }

    cLib_addCalc0(&i_this->mSuiBrkFrame, 1.0f, 0.5f);
    cLib_addCalc2(&i_this->field_0x5d04, 0.7f, 1.0f, 0.05f);

    a_this->speedF = TREG_F(0) + 100.0f;

    if (player_hang_on) {
        ret = 3;
        i_this->mHangTimer++;

        if (i_this->mHangTimer == (JREG_S(5) + 210)) {
            i_this->field_0x47b0 = (JREG_S(3) + 35);
        }

        if (i_this->mHangTimer == (JREG_S(6) + 230)) {
            player->setOctaIealWildHang();
        }

        if (i_this->mHangTimer == (JREG_S(7) + 284)) {
            throw_player = true;

            if (i_this->mTimers[2] != 0) {
                if (i_this->mHangFinishCount >= 3) {
                    i_this->mAction = OB_ACTION_FISH_END;
                    i_this->mMode = 0;
                    i_this->mDemoAction = 40;
                } else {
                    i_this->mMode = 10;
                    i_this->mTimers[2] = 80;
                }
            }
        }

        if (i_this->mHangTimer >= 230 || i_this->mHangHitCount >= 4) {
            i_this->field_0x47b0 = (JREG_S(3) + 25);
        }
    } else {
        i_this->mHangTimer = 0;
        i_this->mHangHitCount = 0;
    }

    if (i_this->mTimers[3] != 0) {
        i_this->field_0x5ce4 = JREG_F(11) + 6.0f;

        cXyz sp70;
        MTXCopy(i_this->mBodyParts[0].mpMorf->getModel()->getAnmMtx(0), mDoMtx_stack_c::get());
        mDoMtx_stack_c::multVecZero(&sp70);

        i_this->field_0x5d24[0] =
            dComIfGp_particle_set(i_this->field_0x5d24[0], 0x87EC, &sp70, NULL, NULL);

        sp64.set(0.0f, 0.0f, 0.0f);
        i_this->field_0x5d24[1] =
            dComIfGp_particle_set(i_this->field_0x5d24[1], 0x87ED, &sp64, NULL, NULL);

        if (i_this->mTimers[3] == 1) {
            dComIfGp_getVibration().StopQuake(31);
        }
    }

    if (i_this->mAnmID == OB_ANM_APPEAR_2 && i_this->mBodyParts[0].mpMorf->isStop()) {
        anm_init(i_this, OB_ANM_SWIM_WAIT, 10.0f, J3DFrameCtrl::LOOP_REPEAT_e, 1.0f);
    }

    if (throw_player) {
        player->cancelOctaIealHang();
        daPy_getPlayerActorClass()->setThrowDamage(a_this->current.angle.y + 0x8000, 40.0f, KREG_F(14) + 50.0f,
                                                   0, 0, 2);
        i_this->mAttnOffTimer = 70;
    }

    return ret;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int fish_normal(b_ob_class* i_this){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/fish_normal__FP10b_ob_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8061AE44-8061AE48 0000C0 0004+00 0/1 0/0 0/0 .rodata          @5383 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5383 = 29.0f;
COMPILER_STRIP_GATE(0x8061AE44, &lit_5383);
#pragma pop

/* 80613E00-80614228 003980 0428+00 1/1 0/0 0/0 .text            fish_vacume__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static int fish_vacume(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);

    cXyz sp3C;
    int var_r30 = 0;

    switch (i_this->mMode) {
    case 0:
        anm_init(i_this, OB_ANM_OPEN_MOUTH, 5.0f, J3DFrameCtrl::LOOP_ONCE_e, 1.0f);
        i_this->mMode = 1;
        i_this->field_0x476a = 0;
        break;
    case 1:
        if (i_this->mBodyParts[0].mpMorf->isStop()) {
            anm_init(i_this, OB_ANM_OPEN_MOUTH_WAIT, 3.0f, J3DFrameCtrl::LOOP_REPEAT_e, 1.0f);
            i_this->mMode = 2;
            i_this->mTimers[0] = 200;
        }
        break;
    case 2:
        i_this->mMoveAngle.y = i_this->mYAngleToPlayer;
        i_this->mMoveAngle.x = 0;
        var_r30 = 1;

        cLib_addCalc2(&a_this->current.pos.x, 0.0f, 0.05f, 5.0f);
        cLib_addCalc2(&a_this->current.pos.z, 0.0f, 0.05f, 5.0f);

        if (i_this->mTimers[0] == 0) {
            i_this->mAction = OB_ACTION_FISH_NORMAL;
            i_this->mMode = 0;
        } else if ((a_this->eyePos - player->current.pos).abs() > (KREG_F(11) + 150.0f) &&
                   i_this->mTimers[0] < 100)
        {
            if (!daPy_getPlayerActorClass()->checkEquipHeavyBoots() &&
                pl_check(i_this, 3000.0f, 0x4000))
            {
                i_this->mDemoAction = 10;
                i_this->mMode = 3;
            }
        }
        break;
    case 3:
        if (i_this->mDemoActionTimer < 30) {
            var_r30 = 1;
        }

        i_this->mBodyParts[0].mSph.OffCoSetBit();

        if (i_this->mBodyParts[0].mpMorf->isStop()) {
            if (i_this->mAnmID == OB_ANM_SWALLOW) {
                anm_init(i_this, OB_ANM_EAT_2, 5.0f, J3DFrameCtrl::LOOP_ONCE_e, 1.0f);
            } else if (i_this->mAnmID == OB_ANM_EAT_2) {
                anm_init(i_this, OB_ANM_THROWUP, 5.0f, J3DFrameCtrl::LOOP_ONCE_e, 1.0f);
                i_this->mOISound.startCreatureVoice(Z2SE_EN_OI_V_THROWUP, -1);
            } else if (i_this->mAnmID == OB_ANM_THROWUP) {
                i_this->mAction = OB_ACTION_FISH_NORMAL;
                i_this->mMode = 0;
            }
        }
        break;
    }

    if (var_r30) {
        cLib_addCalc2(&i_this->mSuiBrkFrame, 29.0f, 1.0f, 0.5f);
        i_this->mOISound.startCreatureVoiceLevel(Z2SE_EN_OI_V_DRAWIN, -1);
    } else {
        cLib_addCalc0(&i_this->mSuiBrkFrame, 1.0f, 0.5f);
    }

    cLib_addCalcAngleS2(&a_this->current.angle.y, i_this->mMoveAngle.y, 0x10, i_this->field_0x476a);
    cLib_addCalcAngleS2(&a_this->current.angle.x, i_this->mMoveAngle.x, 0x10, i_this->field_0x476a);
    cLib_addCalcAngleS2(&i_this->field_0x476a, 0x180, 1, 8);
    cLib_addCalc2(&i_this->field_0x5d04, 0.0f, 1.0f, 0.05f);
    return 2;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int fish_vacume(b_ob_class* i_this){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/fish_vacume__FP10b_ob_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8061AE48-8061AE4C 0000C4 0004+00 0/1 0/0 0/0 .rodata          @5478 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5478 = -16000.0f;
COMPILER_STRIP_GATE(0x8061AE48, &lit_5478);
#pragma pop

/* 8061AE4C-8061AE50 0000C8 0004+00 0/1 0/0 0/0 .rodata          @5479 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5479 = 6500.0f;
COMPILER_STRIP_GATE(0x8061AE4C, &lit_5479);
#pragma pop

/* 8061AE50-8061AE54 0000CC 0004+00 0/1 0/0 0/0 .rodata          @5480 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5480 = -19000.0f;
COMPILER_STRIP_GATE(0x8061AE50, &lit_5480);
#pragma pop

/* 8061AE54-8061AE58 0000D0 0004+00 0/1 0/0 0/0 .rodata          @5481 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5481 = -6500.0f;
COMPILER_STRIP_GATE(0x8061AE54, &lit_5481);
#pragma pop

/* 8061AE58-8061AE5C 0000D4 0004+00 0/1 0/0 0/0 .rodata          @5482 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5482 = -6000.0f;
COMPILER_STRIP_GATE(0x8061AE58, &lit_5482);
#pragma pop

/* 8061AE5C-8061AE60 0000D8 0004+00 0/1 0/0 0/0 .rodata          @5483 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5483 = -22000.0f;
COMPILER_STRIP_GATE(0x8061AE5C, &lit_5483);
#pragma pop

/* 8061AE60-8061AE64 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5484 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5484 = -1325.0f;
COMPILER_STRIP_GATE(0x8061AE60, &lit_5484);
#pragma pop

/* 8061AE64-8061AE68 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5485 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5485 = -24000.0f;
COMPILER_STRIP_GATE(0x8061AE64, &lit_5485);
#pragma pop

/* 8061AE68-8061AE6C 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5486 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5486 = 9178.0f;
COMPILER_STRIP_GATE(0x8061AE68, &lit_5486);
#pragma pop

/* 8061AE6C-8061AE70 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5487 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5487 = -23550.0f;
COMPILER_STRIP_GATE(0x8061AE6C, &lit_5487);
#pragma pop

/* 8061AE70-8061AE74 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5488 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5488 = 10200.0f;
COMPILER_STRIP_GATE(0x8061AE70, &lit_5488);
#pragma pop

/* 8061AE74-8061AE78 0000F0 0004+00 0/1 0/0 0/0 .rodata          @5489 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5489 = 2130.0f;
COMPILER_STRIP_GATE(0x8061AE74, &lit_5489);
#pragma pop

/* 8061AE78-8061AE7C 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5490 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5490 = -23071.0f;
COMPILER_STRIP_GATE(0x8061AE78, &lit_5490);
#pragma pop

/* 8061AE7C-8061AE80 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5491 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5491 = 7383.0f;
COMPILER_STRIP_GATE(0x8061AE7C, &lit_5491);
#pragma pop

/* 8061AE80-8061AE84 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5492 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5492 = -23580.0f;
COMPILER_STRIP_GATE(0x8061AE80, &lit_5492);
#pragma pop

/* 8061AE84-8061AE88 000100 0004+00 0/1 0/0 0/0 .rodata          @5493 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5493 = 10300.0f;
COMPILER_STRIP_GATE(0x8061AE84, &lit_5493);
#pragma pop

/* 8061AE88-8061AE8C 000104 0004+00 0/2 0/0 0/0 .rodata          @5494 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5494 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8061AE88, &lit_5494);
#pragma pop

/* 8061AE8C-8061AE90 000108 0004+00 0/1 0/0 0/0 .rodata          @5495 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5495 = 8628.0f;
COMPILER_STRIP_GATE(0x8061AE8C, &lit_5495);
#pragma pop

/* 8061AE90-8061AE94 00010C 0004+00 0/1 0/0 0/0 .rodata          @5496 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5496 = 12000.0f;
COMPILER_STRIP_GATE(0x8061AE90, &lit_5496);
#pragma pop

/* 80614228-806147D4 003DA8 05AC+00 1/1 0/0 0/0 .text            fish_end__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static int fish_end(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
    cXyz sp68;

    f32 speed_f = 100.0f;
    s16 angleX_max_step = 0x300;

    switch (i_this->mMode) {
    case 0:
        i_this->mMode = 1;
        i_this->mTargetMovePos.set(0.0f, -16000.0f, 6500.0f);
        i_this->mTimers[0] = 100;
        i_this->field_0x5d04 = KREG_F(8) + 1.5f;
        i_this->mBlureRateTarget = 150;
        i_this->field_0x5dd8 = 3;
        anm_init(i_this, OB_ANM_LAST_DAMAGE, 0.0f, J3DFrameCtrl::LOOP_ONCE_e, 1.0f);
        break;
    case 1:
        if (i_this->mBodyParts[0].mpMorf->isStop()) {
            anm_init(i_this, OB_ANM_SWIM_WAIT, 5.0f, J3DFrameCtrl::LOOP_REPEAT_e, 1.0f);
        }

        if (i_this->mTimers[0] == 0) {
            i_this->mMode = 2;
            i_this->mTargetMovePos.set(0.0f, -19000.0f, -6500.0f);
            i_this->mTimers[0] = 150;
            i_this->mDemoCamEye.set(-6000.0f, -22000.0f, 2000.0f);
            anm_init(i_this, OB_ANM_LAST_DAMAGE, 5.0f, J3DFrameCtrl::LOOP_ONCE_e, 1.0f);
        }
        break;
    case 2:
        sp68.set(VREG_F(0) + -1325.0f, -24000.0f, VREG_F(1) + 9178.0f);
        player->setPlayerPosAndAngle(&sp68, VREG_S(1) + 10000, 0);

        if (i_this->mTimers[0] == 0) {
            i_this->mMode = 3;
            i_this->mTargetMovePos.set(0.0f, TREG_F(14) + -23550.0f, 10200.0f);
            i_this->mTimers[0] = 120;
            i_this->mDemoCamEye.set(2130.0f, -23071.0f, 7383.0f);
            i_this->mDemoAction = 42;
            i_this->mDemoActionTimer = 0;
            i_this->mBlureRateTarget = 0;
            anm_init(i_this, OB_ANM_LAST_DAMAGE, 5.0f, J3DFrameCtrl::LOOP_ONCE_e, 1.0f);
        }
        break;
    case 3:
        if (i_this->mAcch.ChkWallHit() && i_this->mTimers[0] == 0) {
            anm_init(i_this, OB_ANM_DEAD, 2.0f, J3DFrameCtrl::LOOP_ONCE_e, 1.0f);
            dComIfGp_getVibration().StartShock(8, 31, cXyz(0.0f, 1.0f, 0.0f));
            mDoAud_seStart(Z2SE_OBJ_BOMB_EXPLODE, NULL, 0, 0);

            i_this->mMode = 10;
            i_this->field_0x5ce4 = WREG_F(14) + 20.0f;
            i_this->mTimers[0] = 0;
            a_this->current.angle.x = 0x1000;
            i_this->mMoveAngle.x = 0;
            i_this->mMoveAngle.y = 0;
            i_this->field_0x5d08 = 50;

            moveSW2 = true;
            i_this->mDemoAction = 43;
            i_this->mDemoActionTimer = 1;

            obj_lv3WaterB_class* water =
                (obj_lv3WaterB_class*)fopAcM_SearchByName(PROC_OBJ_LV3WATERB);
            water->mAction = LV3WATERB_ACT_REMOVE;
            a_this->home.pos.set(0.0f, -23580.0f, 10300.0f);

            for (int i = 0; i < 5; i++) {
                static u16 iso_eff[] = {0x87F2, 0x87F3, 0x87F4, 0x87F5, 0x87F6};
                dComIfGp_particle_set(iso_eff[i], &a_this->home.pos, NULL, NULL);
            }

            mDoAud_seStart(Z2SE_EN_OI_HIT_WALL, &a_this->home.pos, 0, 0);
            speed_f = 0.0f;
        }
        break;
    case 10:
        cLib_addCalc2(&a_this->current.pos.x, i_this->mTargetMovePos.x, 0.1f, 10.0f);
        cLib_addCalc2(&a_this->current.pos.y, VREG_F(7) + -23550.0f, 0.1f, 10.0f);
        cLib_addCalc2(&a_this->current.pos.z, (VREG_F(8) + 9128.0f) - 500.0f, 0.1f, 10.0f);
        speed_f = 0.0f;

        i_this->field_0x4750--;
        cLib_addCalcAngleS2(&a_this->current.angle.z, 0x4000, 0x20, 0x80);
        break;
    }

    s16 angleY_offset = 0;
    s16 angleX_offset = 0;

    if (speed_f > 1.0f) {
        sp68 = i_this->mTargetMovePos - a_this->current.pos;
        f32 var_f30 = JMAFastSqrt(sp68.x * sp68.x + sp68.z * sp68.z);

        i_this->mMoveAngle.y = cM_atan2s(sp68.x, sp68.z);
        i_this->mMoveAngle.x = -cM_atan2s(sp68.y, var_f30);

        f32 temp_f2 = var_f30 * 2.0f;
        if (temp_f2 > 12000.0f) {
            temp_f2 = 12000.0f;
        }

        angleY_offset = temp_f2 * cM_ssin(i_this->field_0x4750 * 1300);
        angleX_offset = (temp_f2 / 2) * cM_ssin(i_this->field_0x4750 * 1100);
    } else {
        angleX_max_step = 0x20;
    }

    cLib_addCalcAngleS2(&a_this->current.angle.y, i_this->mMoveAngle.y + angleY_offset, 0x10, 0x300);
    cLib_addCalcAngleS2(&a_this->current.angle.x, i_this->mMoveAngle.x + angleX_offset, 0x20, angleX_max_step);
    a_this->speedF = speed_f;
    return 4;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int fish_end(b_ob_class* i_this){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/fish_end__FP10b_ob_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8061AE94-8061AE98 000110 0004+00 0/1 0/0 0/0 .rodata          @5572 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5572 = -40.0f;
COMPILER_STRIP_GATE(0x8061AE94, &lit_5572);
#pragma pop

/* 8061AE98-8061AE9C 000114 0004+00 0/1 0/0 0/0 .rodata          @5573 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5573 = -5.0f;
COMPILER_STRIP_GATE(0x8061AE98, &lit_5573);
#pragma pop

/* 8061AE9C-8061AEA0 000118 0004+00 0/1 0/0 0/0 .rodata          @5574 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5574 = -20.0f;
COMPILER_STRIP_GATE(0x8061AE9C, &lit_5574);
#pragma pop

/* 8061AEA0-8061AEA4 00011C 0004+00 0/2 0/0 0/0 .rodata          @5575 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5575 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x8061AEA0, &lit_5575);
#pragma pop

/* 8061AEA4-8061AEA8 000120 0004+00 0/1 0/0 0/0 .rodata          @5576 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5576 = -10.0f;
COMPILER_STRIP_GATE(0x8061AEA4, &lit_5576);
#pragma pop

/* 8061AEA8-8061AEAC 000124 0004+00 0/2 0/0 0/0 .rodata          @5577 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5577 = 250.0f;
COMPILER_STRIP_GATE(0x8061AEA8, &lit_5577);
#pragma pop

/* 8061AEAC-8061AEB0 000128 0004+00 0/1 0/0 0/0 .rodata          @5578 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5578 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x8061AEAC, &lit_5578);
#pragma pop

/* 8061AEB0-8061AEB4 00012C 0004+00 0/2 0/0 0/0 .rodata          @5579 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5579 = 450.0f;
COMPILER_STRIP_GATE(0x8061AEB0, &lit_5579);
#pragma pop

/* 806147D4-80614B70 004354 039C+00 1/1 0/0 0/0 .text            dmcalc__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static void dmcalc(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    int i;
    ob_part_s* part;

    cXyz sp2C;
    cXyz sp20;
    cXyz sp14;

    f32 var_f29;
    f32 var_f28 = 0.0f;

    cMtx_YrotS(*calc_mtx, a_this->shape_angle.y);
    cMtx_XrotM(*calc_mtx, a_this->shape_angle.x);
    cMtx_YrotM(*calc_mtx, i_this->field_0x47c4);

    sp2C.x = 0.0f;
    sp2C.y = 0.0f;

    if (i_this->mAction == OB_ACTION_FISH_END) {
        sp2C.z = WREG_F(3) + -40.0f;
        var_f28 = NREG_F(11) + -5.0f;
    } else {
        sp2C.z = AREG_F(15) + -20.0f;
    }

    MtxPosition(&sp2C, &sp14);
    sp2C.x = 0.0f;
    sp2C.y = 0.0f;
    f32 temp_f30 = 1.0f;

    part = i_this->mBodyParts;

    i_this->mBodyParts[0].field_0x26 = i_this->mBodyParts[0].mAngle.y;
    i_this->mBodyParts[0].mPos = a_this->current.pos;
    i_this->mBodyParts[0].mAngle = a_this->shape_angle;
    i_this->mBodyParts[0].mAngle.z = i_this->field_0x47c4;
    part++;

    if (i_this->field_0x5d08 != 0) {
        i_this->field_0x5d08--;
    }

    f32 var_f27 = (f32)i_this->field_0x5d08 * 0.6f;

    f32 var_f26;
    if (a_this->speedF < 1.0f) {
        var_f26 = JREG_F(19) + -10.0f;
    } else {
        var_f26 = 0.0f;
    }

    for (i = 1; i < 20; i++, part++) {
        // this block is almost certainly fake, but cant figure out a better way to fix instruction
        // order
        int var_r27 = i * (JREG_S(6) + 5000);
        int temp_r3 = (JREG_S(4) + i_this->field_0x5d08 * (JREG_S(5) + 1200));
        int temp_r0 = (temp_r3 + var_r27);
        temp_r0 = temp_r0;

        f32 temp_f2 = var_f27 * cM_ssin(temp_r0 + 3000);
        f32 temp_f3 = var_f26 * cM_ssin(JREG_S(7) + var_r27 + 3000);

        f32 temp_f4;
        if (i == (KREG_S(7) + 18)) {
            sp2C.z = part->mSize * (WREG_F(17) + 250.0f);
            temp_f4 = part->mSize * (WREG_F(9) + 0.4f);
        } else {
            sp2C.z = part->mSize * (WREG_F(14) + 450.0f);
            temp_f4 = part->mSize;
        }

        f32 temp_f1 = part->mPos.x;
        temp_f1 -= part[-1].mPos.x;

        var_f29 = temp_f3 + (temp_f1 + (sp14.x * temp_f30));
        f32 temp_f2_2 = temp_f2 + (var_f28 + (part->mPos.y + (sp14.y * temp_f30)));

        if (temp_f2_2 < i_this->field_0x47a0 + (temp_f4 * (NREG_F(12) + 350.0f))) {
            temp_f2_2 = i_this->field_0x47a0 + (temp_f4 * (NREG_F(12) + 350.0f));
        }

        temp_f30 *= (WREG_F(15) + 1.0f);

        f32 var_f24 = temp_f2_2 - part[-1].mPos.y;
        f32 var_f23 = (part->mPos.z - part[-1].mPos.z) + (sp14.z * temp_f30);
        part[-1].field_0x26 = part[-1].mAngle.y;
        part->mAngle.y = cM_atan2s(var_f29, var_f23);
        part->mAngle.x =
            -cM_atan2s(var_f24, JMAFastSqrt(var_f29 * var_f29 + var_f23 * var_f23));

        cMtx_YrotS(*calc_mtx, part->mAngle.y);
        cMtx_XrotM(*calc_mtx, part->mAngle.x);
        MtxPosition(&sp2C, &sp20);
        part->mPos = part[-1].mPos + sp20;
        part->mAngle.y += -0x8000;
        part->mAngle.x *= -1;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dmcalc(b_ob_class* i_this){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/dmcalc__FP10b_ob_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8061AEB4-8061AEB8 000130 0004+00 0/2 0/0 0/0 .rodata          @5876 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5876 = 15.0f;
COMPILER_STRIP_GATE(0x8061AEB4, &lit_5876);
#pragma pop

/* 8061AEB8-8061AEBC 000134 0004+00 0/1 0/0 0/0 .rodata          @5877 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5877 = 7.5f;
COMPILER_STRIP_GATE(0x8061AEB8, &lit_5877);
#pragma pop

/* 8061AEBC-8061AEC0 000138 0004+00 0/1 0/0 0/0 .rodata          @5878 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5878 = 170.0f;
COMPILER_STRIP_GATE(0x8061AEBC, &lit_5878);
#pragma pop

/* 8061AEC0-8061AEC4 00013C 0004+00 0/1 0/0 0/0 .rodata          @5879 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5879 = 4000.0f;
COMPILER_STRIP_GATE(0x8061AEC0, &lit_5879);
#pragma pop

/* 8061AEC4-8061AEC8 000140 0004+00 0/1 0/0 0/0 .rodata          @5880 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5880 = 600.0f;
COMPILER_STRIP_GATE(0x8061AEC4, &lit_5880);
#pragma pop

/* 8061AEC8-8061AECC 000144 0004+00 0/1 0/0 0/0 .rodata          @5881 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5881 = 0x43FF0001;
COMPILER_STRIP_GATE(0x8061AEC8, &lit_5881);
#pragma pop

/* 8061AECC-8061AED0 000148 0004+00 0/1 0/0 0/0 .rodata          @5882 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5882 = 0xC3C30001;
COMPILER_STRIP_GATE(0x8061AECC, &lit_5882);
#pragma pop

/* 8061AED0-8061AED4 00014C 0004+00 0/1 0/0 0/0 .rodata          @5883 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5883 = 0xC3FA0001;
COMPILER_STRIP_GATE(0x8061AED0, &lit_5883);
#pragma pop

/* 8061AED4-8061AED8 000150 0004+00 0/1 0/0 0/0 .rodata          @5884 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5884 = 0xC3910001;
COMPILER_STRIP_GATE(0x8061AED4, &lit_5884);
#pragma pop

/* 8061AED8-8061AEDC 000154 0004+00 0/1 0/0 0/0 .rodata          @5885 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5885 = -360.0f;
COMPILER_STRIP_GATE(0x8061AED8, &lit_5885);
#pragma pop

/* 8061AEDC-8061AEE0 000158 0004+00 0/1 0/0 0/0 .rodata          @5886 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5886 = 0xC3F00001;
COMPILER_STRIP_GATE(0x8061AEDC, &lit_5886);
#pragma pop

/* 8061AEE0-8061AEE4 00015C 0004+00 0/1 0/0 0/0 .rodata          @5887 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5887 = 0xC2F00001;
COMPILER_STRIP_GATE(0x8061AEE0, &lit_5887);
#pragma pop

/* 8061AEE4-8061AEE8 000160 0004+00 0/1 0/0 0/0 .rodata          @5888 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5888 = 700.0f;
COMPILER_STRIP_GATE(0x8061AEE4, &lit_5888);
#pragma pop

/* 8061AEE8-8061AEEC 000164 0004+00 0/1 0/0 0/0 .rodata          @5889 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5889 = 400.0f;
COMPILER_STRIP_GATE(0x8061AEE8, &lit_5889);
#pragma pop

/* 8061AEEC-8061AEF0 000168 0004+00 0/1 0/0 0/0 .rodata          @5890 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5890 = 360.0f;
COMPILER_STRIP_GATE(0x8061AEEC, &lit_5890);
#pragma pop

/* 8061AEF0-8061AEF4 00016C 0004+00 0/1 0/0 0/0 .rodata          @5891 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5891 = 390.0f;
COMPILER_STRIP_GATE(0x8061AEF0, &lit_5891);
#pragma pop

/* 8061AEF4-8061AEF8 000170 0004+00 0/1 0/0 0/0 .rodata          @5892 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5892 = 411.0f;
COMPILER_STRIP_GATE(0x8061AEF4, &lit_5892);
#pragma pop

/* 8061AEF8-8061AEFC 000174 0004+00 0/2 0/0 0/0 .rodata          @5893 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5893 = 9.5f;
COMPILER_STRIP_GATE(0x8061AEF8, &lit_5893);
#pragma pop

/* 8061AEFC-8061AF00 000178 0004+00 0/1 0/0 0/0 .rodata          @5894 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5894 = 80.0f;
COMPILER_STRIP_GATE(0x8061AEFC, &lit_5894);
#pragma pop

/* 80614B70-806158E0 0046F0 0D70+00 1/1 0/0 0/0 .text            fish_move__FP10b_ob_class */
// matches with literals
#ifdef NONMATCHING
static void fish_move(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    fopAc_ac_c* player = dComIfGp_getPlayer(0);
    cXyz sp84;
    cXyz sp90;

    if (moveSW) {
        int var_r16 = 0;
        BOOL attn_ON = true;

        i_this->mBodyParts[0].mSph.OnCoSetBit();

        switch (i_this->mAction) {
        case OB_ACTION_FISH_NORMAL:
            var_r16 = fish_normal(i_this);
            break;
        case OB_ACTION_FISH_VACUME:
            var_r16 = fish_vacume(i_this);
            break;
        case OB_ACTION_FISH_END:
            var_r16 = fish_end(i_this);
            attn_ON = false;
            break;
        }

        if (i_this->mAttnOffTimer != 0) {
            i_this->mAttnOffTimer--;
        }

        if (attn_ON && i_this->mAttnOffTimer == 0) {
            fopAcM_OnStatus(a_this, 0);
            a_this->attention_info.flags = 4;
        } else {
            fopAcM_OffStatus(a_this, 0);
            a_this->attention_info.flags = 0;
        }

        cLib_addCalcAngleS2(&a_this->shape_angle.y, a_this->current.angle.y, 2, 0x800);
        cLib_addCalcAngleS2(&a_this->shape_angle.x, a_this->current.angle.x, 2, 0x800);
        cLib_addCalcAngleS2(&a_this->shape_angle.z, a_this->current.angle.z, 2, 0x800);

        s16 var_r17_2 = 0;
        f32 temp_f1 = 0.0f;

        if (var_r16 == 0) {
            var_r17_2 = VREG_S(5) + 700;
            temp_f1 = 30.0f;
        } else if (var_r16 == 1) {
            var_r17_2 = VREG_S(6) + 1600;
            temp_f1 = 30.0f;
        } else if (var_r16 == 2) {
            var_r17_2 = VREG_S(5) + 1000;
            temp_f1 = 15.0f;
        } else if (var_r16 == 3) {
            var_r17_2 = VREG_S(7) + 1600;
            temp_f1 = VREG_F(18) + 30.0f;
        } else if (var_r16 == 4) {
            var_r17_2 = VREG_S(5) + 700;
        } else if (var_r16 == 5) {
            var_r17_2 = VREG_S(8) + 1000;
            temp_f1 = KREG_F(18) + 30.0f;
        } else if (var_r16 == 6) {
            var_r17_2 = VREG_S(8) + 1200;
            temp_f1 = KREG_F(18) + 40.0f;
        }

        cLib_addCalc2(&i_this->field_0x47c0, temp_f1, 0.5f, 1.0f);
        cLib_addCalcAngleS2(&i_this->field_0x47bc, var_r17_2, 1, 20);
        i_this->field_0x47ba += i_this->field_0x47bc;

        s16 temp_r16 = i_this->field_0x47c0 * (a_this->speedF * cM_ssin(i_this->field_0x47ba));
        cMtx_YrotS(*calc_mtx, a_this->current.angle.y);
        cMtx_XrotM(*calc_mtx, a_this->current.angle.x);
        cMtx_YrotM(*calc_mtx, temp_r16);

        sp84.x = 0.0f;
        sp84.y = 0.0f;
        sp84.z = i_this->field_0x5d04 * (a_this->speedF * 0.6f * l_HIO.mBodySize);
        MtxPosition(&sp84, &a_this->speed);
        a_this->current.pos += a_this->speed;

        i_this->mOISound.startCreatureSoundLevel(
            Z2SE_EN_OI_MOVE, i_this->field_0x5d04 * (a_this->speedF * 0.6f * l_HIO.mBodySize),
            dComIfGp_getReverb(fopAcM_GetRoomNo(a_this)));
        i_this->field_0x3b24[i_this->field_0x2320].z = temp_r16;
        i_this->field_0x47c4 = temp_r16;
    }

    i_this->field_0x2324[i_this->field_0x2320] = a_this->current.pos;
    i_this->field_0x3b24[i_this->field_0x2320].y = a_this->current.angle.y;
    i_this->field_0x3b24[i_this->field_0x2320].x = a_this->current.angle.x;

    ob_part_s* part = i_this->mBodyParts;
    int var_r22 = 0;
    s16 var_r17_2;

    f32 var_f31;
    if (!moveSW2) {
        var_f31 = (TREG_F(1) + 7.5f) / i_this->field_0x5d04;
    } else {
        dmcalc(i_this);
    }

    for (int i = 0; i < 19 && !part->mHide; i++, part++) {
        s16 var_r25;

        if (!moveSW2) {
            if (i >= 1) {
                var_r22 = XREG_S(0) + 4;
                var_r17_2 = 0;
            } else {
                if (i_this->field_0x47b0 == 100) {
                    var_r17_2 = cM_ssin(i_this->field_0x47b0 * 3000) * JREG_F(15);
                } else {
                    var_r17_2 =
                        i_this->field_0x47b0 * cM_ssin(i_this->field_0x4750 * 3000) * (JREG_F(12) + 170.0f);
                    if (i_this->field_0x47b0 != 0) {
                        i_this->field_0x47b0--;
                    }
                }
            }

            int sp48 = var_f31 * buf_p[i];
            int temp_r4 = ((i_this->field_0x2320 - (s16)var_r22) - sp48) & 0x1FF;
            part->mPos = i_this->field_0x2324[temp_r4];
            part->field_0x26 = part->mAngle.y + part->mAngle.z;
            part->mAngle = i_this->field_0x3b24[temp_r4];
            part->mSize = l_HIO.mBodySize * size_p[i];
            var_r25 = (s16)(part->field_0x26 - (part->mAngle.y + part->mAngle.z));
        } else {
            var_r17_2 = 0;
            var_r25 = (s16) - (part->field_0x26 - part->mAngle.y);
        }

        mDoMtx_stack_c::transS(part->mPos.x, part->mPos.y, part->mPos.z);
        mDoMtx_stack_c::scaleM(part->mSize, part->mSize, part->mSize);
        mDoMtx_stack_c::YrotM(part->mAngle.y);
        mDoMtx_stack_c::XrotM(part->mAngle.x + var_r17_2);
        mDoMtx_stack_c::YrotM(part->mAngle.z);
        mDoMtx_stack_c::ZrotM(a_this->shape_angle.z);

        if (i == 0) {
            mDoMtx_stack_c::push();
            cLib_addCalcAngleS2(&i_this->field_0x47ae, var_r25 * (VREG_S(4) + 7), 4, 0x400);
            mDoMtx_stack_c::pop();
        } else if (i == 18) {
            f32 temp_f28 = YREG_F(0) + 1000.0f;
            f32 temp_f27 = YREG_F(1) + 4000.0f;

            for (int j = 0; j < 3; j++) {
                i_this->field_0x47a4[j] =
                    temp_f28 * cM_ssin(i_this->field_0x4750 * (YREG_S(1) + 1000) + (j * (YREG_S(2) + -12000)));
            }

            i_this->field_0x47aa = temp_f27 * cM_ssin(i_this->field_0x4750 * (YREG_S(2) + 1200));
            cLib_addCalcAngleS2(&i_this->field_0x47ac, var_r25 * (VREG_S(3) + 4), 4, 0x400);
        }

        if (!moveSW2) {
            if (i == 18) {
                mDoMtx_stack_c::transM(0.0f, 0.0f, XREG_F(1) + 250.0f);
            } else if (i != 0) {
                mDoMtx_stack_c::transM(0.0f, 0.0f, XREG_F(0) + 600.0f);
            }
        } else if (i == 18) {
            mDoMtx_stack_c::transM(0.0f, 0.0f, (XREG_F(1) + 250.0f) - 150.0f);
        } else if (i != 0) {
            mDoMtx_stack_c::transM(0.0f, 0.0f, (XREG_F(0) + 600.0f) - 250.0f);
        }

        if (i == 0) {
            part->mpMorf->play(NULL, 0, 0);

            if (i_this->mAnmID == OB_ANM_EAT_2 && i_this->mBodyParts[0].mpMorf->checkFrame(1.0f)) {
                i_this->mOISound.startCreatureVoice(Z2SE_EN_OI_V_EAT02, -1);
            }
        }

        part->mpMorf->getModel()->setBaseTRMtx(mDoMtx_stack_c::get());
        part->mpMorf->modelCalc();

        if (i == 0 && i_this->mSuiBrkFrame > 0.0f) {
            i_this->mpSuiBrk->setFrame(i_this->mSuiBrkFrame);
            i_this->mpSuiBtk->play();

            MTXCopy(i_this->mBodyParts[0].mpMorf->getModel()->getAnmMtx(0), mDoMtx_stack_c::get());
            mDoMtx_stack_c::XrotM(VREG_S(1) + 0x4000);
            mDoMtx_stack_c::transM(0.0f, VREG_F(0) + 1300.0f, 0.0f);
            i_this->mpSuiModel->setBaseTRMtx(mDoMtx_stack_c::get());
        }

        if (i >= 4 && i <= 17) {
            pno = i;
            fin = 0;

            if (part->field_0x3e == 0) {
                cLib_addCalcAngleS2(&part->mFinARot.x, -4000, 0x20, 0x28);
            } else {
                cLib_addCalcAngleS2(&part->mFinARot.x, 0, 8, 100);
            }

            cLib_addCalcAngleS2(&part->mFinARot.y, var_r25 * (TREG_S(9) + 7), 4, 0x400);

            mDoMtx_stack_c::push();
            mDoMtx_stack_c::transM(KREG_F(0), KREG_F(1) + 510.00003f, KREG_F(2) + -390.00003f);
            part->mpFinMorf->getModel()->setBaseTRMtx(mDoMtx_stack_c::get());
            part->mpFinMorf->modelCalc();
            mDoMtx_stack_c::pop();
        }

        if (i >= 7 && i <= 15) {
            pno = i;
            fin = 1;

            mDoMtx_stack_c::push();
            mDoMtx_stack_c::transM(ZREG_F(0), ZREG_F(1) + -500.00003f, ZREG_F(2) + -290.00003f);
            mDoMtx_stack_c::ZrotM(-0x8000);
            part->mpFinUnkMorf->getModel()->setBaseTRMtx(mDoMtx_stack_c::get());
            part->mpFinUnkMorf->modelCalc();
            mDoMtx_stack_c::pop();
        }

        if (i == 8) {
            pno = i;

            cLib_addCalcAngleS2(&part->mFinBRot.y, var_r25 * (VREG_S(8) + 7), 4, 0x400);

            mDoMtx_stack_c::push();
            mDoMtx_stack_c::transM(KREG_F(3), KREG_F(4) + -360.0f, KREG_F(5) + -360.0f);
            part->mpFinBMorf->getModel()->setBaseTRMtx(mDoMtx_stack_c::get());
            part->mpFinBMorf->modelCalc();
            mDoMtx_stack_c::pop();
        }

        if (i == 17) {
            pno = i;

            cLib_addCalcAngleS2(&part->mFinCRot.y, var_r25 * (TREG_S(8) + 13), 4, 0x400);

            mDoMtx_stack_c::push();
            mDoMtx_stack_c::transM(KREG_F(6), KREG_F(7) + -480.00003f, KREG_F(8) + -120.00001f);
            part->mpFinCMorf->getModel()->setBaseTRMtx(mDoMtx_stack_c::get());
            part->mpFinCMorf->modelCalc();
            mDoMtx_stack_c::pop();
        }

        if (i == 0) {
            MTXCopy(part->mpMorf->getModel()->getBaseTRMtx(), *calc_mtx);

            sp84.set(0.0f, 0.0f, VREG_F(2) + 700.0f);
            MtxPosition(&sp84, &sp90);
            part->mSph.SetC(sp90);
            part->mSph.SetR(part->mSize * (TREG_F(16) + 400.0f));

            sp84.set(0.0f, 0.0f, VREG_F(1));
            MtxPosition(&sp84, &sp90);
            i_this->mFishHeadSph.SetC(sp90);
            i_this->mFishHeadSph.SetR(part->mSize * (TREG_F(16) + 450.0f));

            dComIfG_Ccsp()->Set(&i_this->mFishHeadSph);
        } else {
            part->mSph.SetC(part->mPos);

            if (i != 18) {
                part->mSph.SetR(part->mSize * (TREG_F(18) + 450.0f));
            } else {
                part->mSph.SetR(part->mSize * (TREG_F(17) + 200.0f));
            }
        }

        dComIfG_Ccsp()->Set(&part->mSph);
    }

    if (moveSW) {
        i_this->field_0x2320++;
        i_this->field_0x2320 &= 0x1FF;
    }

    f32 var_f31_2 = l_HIO.mBodySize * ((VREG_F(17) + 360.0f) * 0.6f);
    a_this->current.pos.y -= var_f31_2;
    a_this->old.pos.y -= var_f31_2;
    i_this->mAcch.CrrPos(dComIfG_Bgsp());
    a_this->current.pos.y += var_f31_2;
    a_this->old.pos.y += var_f31_2;

    MTXCopy(i_this->mBodyParts[0].mpMorf->getModel()->getBaseTRMtx(), mDoMtx_stack_c::get());
    mDoMtx_stack_c::transM(XREG_F(5), XREG_F(6) + 390.0f, XREG_F(7) + 400.0f + 11.0f);
    mDoMtx_stack_c::multVecZero(&sp90);
    a_this->eyePos = sp90;
    a_this->attention_info.position = a_this->eyePos;
    a_this->attention_info.position.y += 50.0f;

    if (i_this->mDemoAction == 21 || i_this->mDemoAction == 22) {
        sp84 = dComIfGp_getCamera(0)->mLookat.mEye - sp90;
    } else {
        sp84 = player->eyePos - sp90;
    }

    s16 temp_r15_2 = -cM_atan2s(sp84.y, sp84.z);
    int temp_r16_2 = cM_atan2s(sp84.x, JMAFastSqrt(sp84.y * sp84.y + sp84.z * sp84.z));

    mDoMtx_stack_c::transS(sp90.x, sp90.y, sp90.z);
    mDoMtx_stack_c::XrotM(temp_r15_2);
    mDoMtx_stack_c::YrotM(temp_r16_2);

    i_this->field_0x4740 = cM_ssin(i_this->field_0x4750 * 1000) * 9.5f + 9.5f;
    i_this->mpCoreMorf->getModel()->setBaseTRMtx(mDoMtx_stack_c::get());
    i_this->mpCoreMorf->setFrame(i_this->field_0x4740);
    i_this->mpCoreMorf->modelCalc();

    i_this->mCoreSph.SetC(sp90);
    i_this->mCoreSph.SetR(l_HIO.mCoreSize * 80.0f);
    dComIfG_Ccsp()->Set(&i_this->mCoreSph);
    i_this->mFishBattleMode = 2;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fish_move(b_ob_class* i_this) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/fish_move__FP10b_ob_class.s"
}
#pragma pop
#endif

/* 806158E0-806159C4 005460 00E4+00 1/1 0/0 0/0 .text            cam_3d_morf__FP10b_ob_classf */
static void cam_3d_morf(b_ob_class* i_this, f32 param_1) {
    cLib_addCalc2(&i_this->mDemoCamCenter.x, i_this->mDemoCamCenterTarget.x, param_1,
                  i_this->field_0x5cc0 * i_this->field_0x5cd0);
    cLib_addCalc2(&i_this->mDemoCamCenter.y, i_this->mDemoCamCenterTarget.y, param_1,
                  i_this->field_0x5cc4 * i_this->field_0x5cd0);
    cLib_addCalc2(&i_this->mDemoCamCenter.z, i_this->mDemoCamCenterTarget.z, param_1,
                  i_this->field_0x5cc8 * i_this->field_0x5cd0);

    cLib_addCalc2(&i_this->mDemoCamEye.x, i_this->mDemoCamEyeTarget.x, param_1,
                  i_this->field_0x5cb4 * i_this->field_0x5cd0);
    cLib_addCalc2(&i_this->mDemoCamEye.y, i_this->mDemoCamEyeTarget.y, param_1,
                  i_this->field_0x5cb8 * i_this->field_0x5cd0);
    cLib_addCalc2(&i_this->mDemoCamEye.z, i_this->mDemoCamEyeTarget.z, param_1,
                  i_this->field_0x5cbc * i_this->field_0x5cd0);
}

/* 806159C4-80615A10 005544 004C+00 1/1 0/0 0/0 .text            s_hasidel_sub__FPvPv */
static void* s_hasidel_sub(void* i_this, void* i_data) {
    if (fopAcM_IsActor(i_this) && fopAcM_GetName(i_this) == PROC_OCTHASHI) {
        fopAcM_delete((fopAc_ac_c*)i_this);
    }

    return NULL;
}

/* ############################################################################################## */
/* 8061AF00-8061AF04 00017C 0004+00 0/1 0/0 0/0 .rodata          @6720 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6720 = 55.0f;
COMPILER_STRIP_GATE(0x8061AF00, &lit_6720);
#pragma pop

/* 8061AF04-8061AF08 000180 0004+00 0/1 0/0 0/0 .rodata          @6721 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6721 = 1500.0f;
COMPILER_STRIP_GATE(0x8061AF04, &lit_6721);
#pragma pop

/* 8061AF08-8061AF0C 000184 0004+00 0/1 0/0 0/0 .rodata          @6722 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6722 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x8061AF08, &lit_6722);
#pragma pop

/* 8061AF0C-8061AF10 000188 0004+00 0/1 0/0 0/0 .rodata          @6723 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6723 = 1050.0f;
COMPILER_STRIP_GATE(0x8061AF0C, &lit_6723);
#pragma pop

/* 8061AF10-8061AF14 00018C 0004+00 0/1 0/0 0/0 .rodata          @6724 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6724 = -100.0f;
COMPILER_STRIP_GATE(0x8061AF10, &lit_6724);
#pragma pop

/* 8061AF14-8061AF18 000190 0004+00 0/1 0/0 0/0 .rodata          @6725 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6725 = -80.0f;
COMPILER_STRIP_GATE(0x8061AF14, &lit_6725);
#pragma pop

/* 80615A10-80618540 005590 2B30+00 2/1 0/0 0/0 .text            demo_camera__FP10b_ob_class */
// matches with literals?
#ifdef NONMATCHING
static void demo_camera(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
    camera_class* camera = dComIfGp_getCamera(dComIfGp_getPlayerCameraID(0));
    camera_class* camera0 = dComIfGp_getCamera(0);

    cXyz sp58;
    cXyz sp64;
    cXyz sp70;
    cXyz sp7C;
    cXyz sp88;

    b_oh_class* tentacle =
        (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[i_this->field_0x5ce8]);
    int var_r27 = 0;

    switch (i_this->mDemoAction) {
    case 1:
        if (!a_this->eventInfo.checkCommandDemoAccrpt()) {
            fopAcM_orderPotentialEvent(a_this, 2, 0xFFEF, 0);
            a_this->eventInfo.i_onCondition(2);
            return;
        }

        camera->mCamera.Stop();
        i_this->mDemoAction = 2;
        i_this->mDemoActionTimer = 0;
        i_this->mDemoCamFovy = 55.0f;
        i_this->field_0x5cd0 = 0.0f;
        camera->mCamera.SetTrimSize(3);

        daPy_getPlayerActorClass()->changeOriginalDemo();
        daPy_getPlayerActorClass()->changeDemoMode(46, 0, 0, 0);

        i_this->mDemoCamEye = camera0->mLookat.mEye;
        i_this->mDemoCamCenter = camera0->mLookat.mCenter;
        sp58 = i_this->mDemoCamEye - tentacle->current.pos;

        i_this->field_0x5ce0 = cM_atan2s(sp58.x, sp58.z);

        tentacle->field_0x1f68 = player->current.pos;
        tentacle->field_0x1f74 = player->shape_angle;
        tentacle->field_0x1f7c = 0.1f;

        i_this->field_0x5cd8 = 300.0f;
        i_this->field_0x5cdc = 1500.0f;
        /* fallthrough */
    case 2:
        cLib_addCalc2(&i_this->mDemoCamCenter.x, player->current.pos.x, 0.3f,
                      i_this->field_0x5cd0 * 200.0f);
        cLib_addCalc2(&i_this->mDemoCamCenter.y, player->current.pos.y + 150.0f, 0.3f,
                      i_this->field_0x5cd0 * 200.0f);
        cLib_addCalc2(&i_this->mDemoCamCenter.z, player->current.pos.z, 0.3f,
                      i_this->field_0x5cd0 * 200.0f);

        cMtx_YrotS(*calc_mtx, i_this->field_0x5ce0);

        sp58.x = 0.0f;
        sp58.y = i_this->field_0x5cd8;
        sp58.z = i_this->field_0x5cdc;
        MtxPosition(&sp58, &sp64);

        if (i_this->mDemoActionTimer > 30) {
            cLib_addCalc2(&i_this->field_0x5cd8, 1050.0f, 0.2f, 15.0f);
            cLib_addCalc2(&i_this->field_0x5cdc, 1000.0f, 0.2f, 10.0f);
        }

        sp64 += tentacle->current.pos;

        cLib_addCalc2(&i_this->mDemoCamEye.x, sp64.x, 0.1f, i_this->field_0x5cd0 * 200.0f);
        cLib_addCalc2(&i_this->mDemoCamEye.y, sp64.y, 0.1f, i_this->field_0x5cd0 * 200.0f);
        cLib_addCalc2(&i_this->mDemoCamEye.z, sp64.z, 0.1f, i_this->field_0x5cd0 * 200.0f);
        cLib_addCalc2(&i_this->field_0x5cd0, 1.0f, 1.0f, TREG_F(7) + 0.1f);

        MTXCopy(tentacle->mpMorf->getModel()->getAnmMtx(29), mDoMtx_stack_c::get());

        mDoMtx_stack_c::transM(ZREG_F(0) + 50.0f, ZREG_F(1) + -100.0f,
                               -(ZREG_F(2) + 80.0f) * (f32)tentacle->field_0xc88);

        if (tentacle->mAction == OH_ACTION_CAUGHT) {
            player->setPlayerPosAndAngle(mDoMtx_stack_c::get());
        } else {
            csXyz sp174;

            mDoMtx_MtxToRot(mDoMtx_stack_c::get(), &sp174);
            cLib_addCalcAngleS2(&tentacle->field_0x1f74.y, sp174.y, 1, 0x800);
            mDoMtx_stack_c::multVecZero(&sp64);

            cLib_addCalc2(&tentacle->field_0x1f7c, 1.0f, 1.0f, 0.1f);
            cLib_addCalc2(&tentacle->field_0x1f68.x, sp64.x, 1.0f, tentacle->field_0x1f7c * 100.0f);
            cLib_addCalc2(&tentacle->field_0x1f68.y, sp64.y, 1.0f, tentacle->field_0x1f7c * 100.0f);
            cLib_addCalc2(&tentacle->field_0x1f68.z, sp64.z, 1.0f, tentacle->field_0x1f7c * 100.0f);
            player->setPlayerPosAndAngle(&tentacle->field_0x1f68, &tentacle->field_0x1f74);
        }
        break;
    case 3:
        player->setPlayerPosAndAngle(&a_this->home.pos, &tentacle->field_0x1f74);

        cMtx_YrotS(*calc_mtx, i_this->field_0x5ce0);
        sp58.x = 0.0f;
        sp58.y = i_this->field_0x5cd8;
        sp58.z = i_this->field_0x5cdc;
        MtxPosition(&sp58, &sp64);

        cLib_addCalc2(&i_this->field_0x5cd8, 800.0f, 0.2f, 10.0f);
        cLib_addCalc2(&i_this->field_0x5cdc, 1000.0f, 0.2f, 10.0f);

        sp64 += tentacle->current.pos;
        cLib_addCalc2(&i_this->mDemoCamEye.x, sp64.x, 0.1f, i_this->field_0x5cd0 * 200.0f);
        cLib_addCalc2(&i_this->mDemoCamEye.y, sp64.y, 0.1f, i_this->field_0x5cd0 * 200.0f);
        cLib_addCalc2(&i_this->mDemoCamEye.z, sp64.z, 0.1f, i_this->field_0x5cd0 * 200.0f);
        cLib_addCalc2(&i_this->field_0x5cd0, 1.0f, 1.0f, TREG_F(7) + 0.1f);

        if (!(i_this->field_0x4750 & 15)) {
            dComIfGp_getVibration().StartShock(4, 31, cXyz(0.0f, 1.0f, 0.0f));
        }

        if (i_this->mAnmID == OB_ANM_EAT && i_this->mBodyParts[0].mpMorf->checkFrame(153.0f)) {
            i_this->mDemoAction = 4;
            i_this->mDemoActionTimer = 0;

            sp64 = a_this->home.pos;
            sp64.y += KREG_F(13) + 400.0f;
            player->setPlayerPosAndAngle(&sp64, &tentacle->field_0x1f74);

            daPy_getPlayerActorClass()->setThrowDamage(a_this->home.angle.y, 10.0f,
                                                       KREG_F(14) + 30.0f, 4, 1, 2);
            daPy_getPlayerActorClass()->changeDemoMode(1, 0, 0, 0);
        }
        break;
    case 4:
        cLib_addCalc2(&i_this->mDemoCamCenter.x, player->current.pos.x, 0.4f, 300.0f);
        cLib_addCalc2(&i_this->mDemoCamCenter.y, player->current.pos.y, 0.4f, 300.0f);
        cLib_addCalc2(&i_this->mDemoCamCenter.z, player->current.pos.z, 0.4f, 300.0f);

        if (i_this->mBodyParts[0].mpMorf->isStop()) {
            i_this->mDemoAction = 100;
            i_this->mCoreAnm = OB_ANM_WAIT;
            i_this->mCoreAnmMode = J3DFrameCtrl::LOOP_REPEAT_e;
            i_this->field_0x4794 = 100;
        }
        break;
    case 10:
        if (!a_this->eventInfo.checkCommandDemoAccrpt()) {
            fopAcM_orderPotentialEvent(a_this, 2, 0xFFEF, 0);
            a_this->eventInfo.i_onCondition(2);
            return;
        }

        camera->mCamera.Stop();
        i_this->mDemoAction = 11;
        i_this->mDemoActionTimer = 0;
        i_this->mDemoCamFovy = 55.0f;
        i_this->field_0x5cd0 = 0.0f;
        camera->mCamera.SetTrimSize(3);

        daPy_getPlayerActorClass()->changeOriginalDemo();

        i_this->field_0x5cf8 = player->shape_angle.y;
        i_this->field_0x5cfc = 0;
        i_this->field_0x5d00 = ZREG_F(3) + 1000.0;

        anm_init(i_this, OB_ANM_OPEN_MOUTH_WAIT, 3.0f, J3DFrameCtrl::LOOP_REPEAT_e, 1.0f);

        if (cM_rndF(1.0f) < 0.5f) {
            i_this->field_0x5cd4 = 500.0f;
        } else {
            i_this->field_0x5cd4 = -500.0f;
        }
        /* fallthrough */
    case 11:
        f32 temp_f31 = (a_this->eyePos - player->current.pos).abs();
        if (temp_f31 < KREG_F(11) + 150.0f) {
            i_this->mDemoAction = 100;
            break;
        }

        MTXCopy(i_this->mBodyParts[0].mpMorf->getModel()->getAnmMtx(0x13), mDoMtx_stack_c::get());

        sp58.x = i_this->field_0x5d00;
        sp58.y = 0.0;
        sp58.z = 0.0;
        mDoMtx_stack_c::multVec(&sp58, &i_this->field_0x5cec);

        if (i_this->field_0x5cec.y < a_this->home.pos.y) {
            i_this->field_0x5cec.y = a_this->home.pos.y;
        }

        if (i_this->mDemoActionTimer >= 118) {
            daPy_getPlayerActorClass()->changeDemoMode(46, 0, 0, 0);
        }

        if (i_this->mDemoActionTimer < 75) {
            if (!(i_this->field_0x4750 & 7)) {
                dComIfGp_getVibration().StartShock(1, 0x1f, cXyz(0.0f, 1.0f, 0.0f));
            }
        } else if (i_this->mDemoActionTimer < 146 && !(i_this->field_0x4750 & 15)) {
            dComIfGp_getVibration().StartShock(4, 0x1f, cXyz(0.0f, 1.0f, 0.0f));
        }

        if (i_this->mDemoActionTimer >= 138) {
            cLib_addCalc2(&i_this->field_0x5d00, 700.0f, 0.1f, 200.0f);

            if (i_this->mDemoActionTimer > 170) {
                i_this->mDemoAction = 100;
            }

            if (i_this->mDemoActionTimer == 138) {
                daPy_getPlayerActorClass()->setThrowDamage(a_this->current.angle.y, 0.0f, 0.0f, 4,
                                                           1, 2);
                daPy_getPlayerActorClass()->changeDemoMode(1, 0, 0, 0);
            }
        } else {
            i_this->field_0x5cf8 += 0x300;

            if (i_this->mDemoActionTimer >= 15) {
                if (i_this->mDemoActionTimer == 30) {
                    anm_init(i_this, OB_ANM_SWALLOW, 2.0f, J3DFrameCtrl::LOOP_ONCE_e, 1.0f);
                    i_this->mOISound.startCreatureVoice(Z2SE_EN_OI_V_SWALLOW, -1);
                }

                cLib_addCalc0(&i_this->field_0x5d00, 1.0f, i_this->field_0x5cfc);
                cLib_addCalc2(&i_this->field_0x5cfc, 100.0f, 1.0f, 2.0f);
            }
        }

        player->setPlayerPosAndAngle(&i_this->field_0x5cec, i_this->field_0x5cf8, 0);

        cMtx_YrotS(*calc_mtx, a_this->current.angle.y);
        sp58.x = i_this->field_0x5cd4;
        sp58.y = ZREG_F(12) + 500.0f;
        sp58.z = ZREG_F(13) + 2000.0f;
        MtxPosition(&sp58, &i_this->mDemoCamEye);
        i_this->mDemoCamEye += a_this->current.pos;

        if (i_this->mDemoActionTimer == 0) {
            i_this->mDemoCamCenter = i_this->field_0x5cec;
        } else {
            cLib_addCalc2(&i_this->mDemoCamCenter.x, player->current.pos.x, 0.4f, 300.0f);
            cLib_addCalc2(&i_this->mDemoCamCenter.y, player->current.pos.y, 0.4f, 300.0f);
            cLib_addCalc2(&i_this->mDemoCamCenter.z, player->current.pos.z, 0.4f, 300.0f);
        }
        break;
    case 20:
        if (!a_this->eventInfo.checkCommandDemoAccrpt()) {
            fopAcM_orderPotentialEvent(a_this, 2, 0xFFFF, 0);
            a_this->eventInfo.i_onCondition(2);
            return;
        }

        camera->mCamera.Stop();
        i_this->mDemoAction = 21;
        i_this->mDemoActionTimer = 0;
        i_this->mDemoCamFovy = 55.0f;
        i_this->field_0x5cd0 = 0.0f;
        camera->mCamera.SetTrimSize(3);

        daPy_getPlayerActorClass()->changeOriginalDemo();
        daPy_getPlayerActorClass()->changeDemoMode(0x17, 0, 0, 0);

        i_this->mDemoCamCenter.x = -371.0f;
        i_this->mDemoCamCenter.y = KREG_F(11) + -23869.0;
        i_this->mDemoCamCenter.z = -1247.0f;
        i_this->mDemoCamEye.x = -473.0f;
        i_this->mDemoCamEye.y = -23869.0f;
        i_this->mDemoCamEye.z = -1581.0f;
        i_this->field_0x5cd0 = 0;

        Z2GetAudioMgr()->bgmStop(30, 0);
        Z2GetAudioMgr()->subBgmStart(Z2BGM_BOSS_OCTAEEL_D02);

        fpcM_Search(s_bfdel_sub, i_this);
        dComIfGs_onOneZoneSwitch(8, -1);
        /* fallthrough */
    case 21:
        if (i_this->mDemoActionTimer == 290) {
            i_this->mBlureRateTarget = 150;
            i_this->field_0x5dd8 = 2;
        }

        sp64.set(-204.0f, -24000.0f, -1307.0f);
        player->setPlayerPosAndAngle(&sp64, 1642, 0);

        if (i_this->mDemoActionTimer > KREG_S(6) + 320) {
            cLib_addCalc2(&i_this->mDemoCamCenter.y, KREG_F(12) + -23169.0f, 0.1f,
                          i_this->field_0x5cd0 * 40.0f);
            cLib_addCalc2(&i_this->field_0x5cd0, 1.0f, 1.0f, KREG_F(7) + 0.02f);
        }

        if (i_this->mDemoActionTimer < KREG_S(7) + 430) {
            break;
        }

        i_this->mDemoAction = 22;
        i_this->mDemoActionTimer = 0;
        i_this->field_0x5cd8 = -2000.0f;
        i_this->mBlureRateTarget = 0;
        /* fallthrough */
    case 22:
        sp88 = a_this->eyePos;
        sp88.y += i_this->field_0x5cd8;

        if (!(i_this->mDemoActionTimer & 7) && (i_this->mDemoActionTimer >> 3) <= 13) {
            i_this->mBodyParts[4 + (i_this->mDemoActionTimer >> 3)].field_0x3e = 1;
        }

        if (i_this->mDemoActionTimer == 0) {
            i_this->mDemoCamCenter = sp88;
            i_this->mDemoCamEye.x = 7180.0f;
            i_this->mDemoCamEye.y = BREG_F(8) + -16200.0f + 100.0f;
            i_this->mDemoCamEye.z = 100.0f;
        } else {
            cLib_addCalc2(&i_this->mDemoCamCenter.x, sp88.x, 0.4f, 200.0f);
            cLib_addCalc2(&i_this->mDemoCamCenter.y, sp88.y, 0.4f, 200.0f);
            cLib_addCalc2(&i_this->mDemoCamCenter.z, sp88.z, 0.4f, 200.0f);
            cLib_addCalc0(&i_this->field_0x5cd8, 0.1f, 15.0f);
        }

        if (i_this->mDemoActionTimer >= 250) {
            cLib_addCalc2(&i_this->mDemoCamEye.y, -16500.0f, 0.1f, BREG_F(9) + 2.0f);
        }

        if (i_this->mDemoActionTimer != 430) {
            break;
        }

        i_this->mDemoAction = 23;
        i_this->mDemoActionTimer = 0;
        /* fallthrough */
    case 23:
        i_this->mDemoCamEye.set(-1236.0f, -23800.0f, -3470.0f);
        sp88 = a_this->eyePos;

        if (i_this->mDemoActionTimer == 0) {
            i_this->mDemoCamCenter = sp88;
        } else {
            cLib_addCalc2(&i_this->mDemoCamCenter.x, sp88.x, 0.2f, 200.0f);
            cLib_addCalc2(&i_this->mDemoCamCenter.y, sp88.y, 0.2f, 200.0f);
            cLib_addCalc2(&i_this->mDemoCamCenter.z, sp88.z, 0.2f, 200.0f);
        }

        if (i_this->mDemoActionTimer == 120) {
            i_this->mDemoAction = 101;
            Z2GetAudioMgr()->bgmStart(Z2BGM_BOSS_OCTAEEL_1, 0, 0);
        }
        break;
    case 30:
        if (!a_this->eventInfo.checkCommandDemoAccrpt()) {
            fopAcM_orderPotentialEvent(a_this, 2, 0xFFFF, 0);
            a_this->eventInfo.i_onCondition(2);
            return;
        }

        camera->mCamera.Stop();
        i_this->mDemoAction = 31;
        i_this->mDemoActionTimer = 0;
        i_this->mDemoCamFovy = 55.0f;
        i_this->field_0x5cd0 = 0.0f;
        camera->mCamera.SetTrimSize(3);

        daPy_getPlayerActorClass()->changeOriginalDemo();
        daPy_getPlayerActorClass()->changeDemoMode(0x17, 0, 0, 0);

        i_this->mDemoCamEye.set(-1705.0f, -23870.0f, -762.0f);
        Z2GetAudioMgr()->subBgmStart(Z2BGM_BOSS_OCTAEEL_D01);
        mDoAud_seStart(Z2SE_EN_OI_DEMO_APPEAR, NULL, 0, 0);
        dComIfGs_onOneZoneSwitch(5, -1);
        /* fallthrough */
    case 31:
        if (i_this->mDemoActionTimer < 40) {
            sp64.set(-1193.0f, -24000.0f, -770.0f);
            player->setPlayerPosAndAngle(&sp64, 0x2A02, 0);
        }

        if (i_this->mDemoActionTimer == 30) {
            dComIfGp_getEvent().startCheckSkipEdge(a_this);
        }

        sp88 = a_this->current.pos;
        if (sp88.y < i_this->field_0x47a0 + NREG_F(1) + 200.0f) {
            sp88.y = i_this->field_0x47a0 + NREG_F(1) + 200.0f;
        }

        if (i_this->mDemoActionTimer == 0) {
            i_this->mDemoCamCenter = sp88;
        } else {
            cLib_addCalc2(&i_this->mDemoCamCenter.x, sp88.x, 0.1f, 50.0f);
            cLib_addCalc2(&i_this->mDemoCamCenter.y, sp88.y, 0.1f, 50.0f);
            cLib_addCalc2(&i_this->mDemoCamCenter.z, sp88.z, 0.1f, 50.0f);
        }

        if (i_this->mDemoActionTimer >= 90 && i_this->mDemoActionTimer <= 260) {
            cLib_addCalc2(&i_this->mDemoCamFovy, 30.0f, 0.2f, i_this->field_0x5cd0);
        } else {
            cLib_addCalc2(&i_this->mDemoCamFovy, 55.0f, 0.2f, i_this->field_0x5cd0);
        }

        cLib_addCalc2(&i_this->field_0x5cd0, 1.0f, 1.0f, 0.05f);

        if (i_this->mDemoActionTimer == 390) {
            tentacle = (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[1]);
            tentacle->mActionPhase = 1;
            dComIfGp_getVibration().StartQuake(2, 31, cXyz(0.0f, 1.0f, 0.0f));
        }

        if (i_this->mDemoActionTimer >= 390 && i_this->mDemoActionTimer <= 525) {
            i_this->field_0x5ce4 = WREG_F(12) + 3.0f;
        }

        if (i_this->mDemoActionTimer == 410) {
            tentacle = (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[5]);
            tentacle->mActionPhase = 1;
        }

        if (i_this->mDemoActionTimer == 430) {
            tentacle = (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[3]);
            tentacle->mActionPhase = 1;
        }

        if (i_this->mDemoActionTimer == 445) {
            tentacle = (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[2]);
            tentacle->mActionPhase = 1;
        }

        if (i_this->mDemoActionTimer == 460) {
            tentacle = (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[6]);
            tentacle->mActionPhase = 1;
        }

        if (i_this->mDemoActionTimer == 470) {
            tentacle = (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[4]);
            tentacle->mActionPhase = 1;
        }

        if (i_this->mDemoActionTimer == 475) {
            tentacle = (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[7]);
            tentacle->mActionPhase = 1;
        }

        if (i_this->mDemoActionTimer == 570) {
            i_this->mDemoAction = 32;
            i_this->mDemoActionTimer = 0;
            i_this->mBodyParts[0].mpMorf->setPlaySpeed(1.0f);

            sp58.set(0.0f, 0.0f, 0.0f);
            dComIfGp_particle_set(0x87FB, &sp58, NULL, NULL);
            dComIfGp_getVibration().StartQuake(3, 31, cXyz(0.0f, 1.0f, 0.0f));

            i_this->field_0x5cd0 = 0;
            i_this->mAction = 1;
            i_this->mMode = 0;

            for (int i = 1; i < 7; i++) {
                tentacle = (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[i]);
                tentacle->mActionPhase = 2;
            }

            i_this->mBlureRateTarget = 150;
            i_this->field_0x5dd8 = 1;
            i_this->mZoneSwTimer = 0;
        }
        break;
    case 32:
        if (i_this->mDemoActionTimer >= 30) {
            if (i_this->mDemoActionTimer == 30) {
                i_this->mDemoCamCenterTarget.set(80.0f, -24093.0f, 160.0f);
                i_this->mDemoCamEyeTarget.set(-447.0f, -22850.0f, -718.0f);

                i_this->field_0x5cb4 = std::fabsf(i_this->mDemoCamEyeTarget.x - i_this->mDemoCamEye.x);
                i_this->field_0x5cb8 = std::fabsf(i_this->mDemoCamEyeTarget.y - i_this->mDemoCamEye.y);
                i_this->field_0x5cbc = std::fabsf(i_this->mDemoCamEyeTarget.z - i_this->mDemoCamEye.z);
                i_this->field_0x5cc0 = std::fabsf(i_this->mDemoCamCenterTarget.x - i_this->mDemoCamCenter.x);
                i_this->field_0x5cc4 = std::fabsf(i_this->mDemoCamCenterTarget.y - i_this->mDemoCamCenter.y);
                i_this->field_0x5cc8 = std::fabsf(i_this->mDemoCamCenterTarget.z - i_this->mDemoCamCenter.z);
                i_this->field_0x5cd0 = 0.0f;

                daPy_getPlayerActorClass()->changeDemoMode(0x17, 0, 0, 0);
            }

            cam_3d_morf(i_this, BREG_F(17) + 0.1f);
            cLib_addCalc2(&i_this->field_0x5cd0, BREG_F(18) + 0.04f, 1.0f, BREG_F(19) + 0.0005f);
        }

        cLib_addCalc2(&a_this->home.pos.y, i_this->field_0x47a0, 1.0f, 2.0f);

        if (i_this->mDemoActionTimer <= 70) {
            i_this->field_0x5ce4 = WREG_F(10) + 6.0f;
        }

        if (i_this->mDemoActionTimer == 70) {
            dComIfGp_getVibration().StopQuake(31);
            i_this->mBlureRateTarget = 0;
        }

        if (i_this->mBodyParts[0].mpMorf->isStop()) {
            anm_init(i_this, OB_ANM_WAIT, 0.0f, J3DFrameCtrl::LOOP_REPEAT_e, 1.0f);
        }

        if (i_this->mDemoActionTimer == 120) {
            fopMsgM_messageSetDemo(1153);  // Twilit Aquatic MORPHEEL
        }

        if (i_this->mDemoActionTimer == 200) {
            i_this->mDemoAction = 100;
            for (int i = 0; i < 8; i++) {
                tentacle = (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[i]);
                tentacle->mAction = 1;
                tentacle->mActionPhase = 1;
                tentacle->mTimers[0] = cM_rndF(50.0f) + 100.0f;
            }

            Z2GetAudioMgr()->bgmStart(Z2BGM_BOSS_OCTAEEL_0, 0, 0);
        }
        break;
    case 40:
        if (!a_this->eventInfo.checkCommandDemoAccrpt()) {
            fopAcM_orderPotentialEvent(a_this, 2, 0xFFFF, 0);
            a_this->eventInfo.i_onCondition(2);
            return;
        }

        camera->mCamera.Stop();
        i_this->mDemoAction = 41;
        i_this->mDemoActionTimer = 0;
        i_this->mDemoCamFovy = 55.0f;
        i_this->field_0x5cd0 = 0.0f;
        camera->mCamera.SetTrimSize(3);

        daPy_getPlayerActorClass()->changeOriginalDemo();
        i_this->mDemoCamEye.set(5000.0f, -17000.0f, 5000.0f);

        Z2GetAudioMgr()->bgmStop(30, 0);
        Z2GetAudioMgr()->bgmStreamPrepare(0x2000020);
        Z2GetAudioMgr()->bgmStreamPlay();
        mDoAud_seStart(Z2SE_EN_OI_ENDDEMO, 0, 0, 0);
        i_this->mOISound.startCreatureVoice(Z2SE_EN_OI_V_ENDDEMO, -1);
        /* fallthrough */
    case 41:
    case 42:
    case 43:
    case 44:
        if (i_this->mDemoAction >= 43) {
            var_r27 = 1;
        }

        if (i_this->mDemoAction == 43 && i_this->mDemoActionTimer == 60) {
            i_this->mDemoCamEye.set(4716.0f, -22925.0f, 1873.0f);
            i_this->mDemoAction = 44;
            i_this->mDemoActionTimer = 0;
        }

        if (i_this->mDemoAction == 42 || i_this->mDemoAction == 43) {
            sp88 = a_this->eyePos;
        } else {
            MTXCopy(i_this->mBodyParts[BREG_S(5) + 8].mpMorf->getModel()->getAnmMtx(0),
                    mDoMtx_stack_c::get());
            mDoMtx_stack_c::multVecZero(&sp88);
        }

        if (i_this->mDemoActionTimer == 0) {
            i_this->mDemoCamCenter = sp88;
        } else {
            f32 var_f31;
            if (a_this->speedF < 1.0f) {
                var_f31 = 0.1f;
            } else {
                var_f31 = 0.3f;
            }

            cLib_addCalc2(&i_this->mDemoCamCenter.x, sp88.x, var_f31, 400.0f);
            cLib_addCalc2(&i_this->mDemoCamCenter.y, sp88.y, var_f31, 400.0f);
            cLib_addCalc2(&i_this->mDemoCamCenter.z, sp88.z, var_f31, 400.0f);
        }

        if (i_this->mDemoAction != 44 || i_this->mDemoActionTimer != 120) {
            break;
        }

        i_this->mDemoCamCenter.set(4264.0f, -25096.0f, 12114.0f);
        i_this->mDemoCamEye.set(-1377.0f, -22866.0f, 9105.0f);
        i_this->mDemoAction = 45;
        i_this->mDemoActionTimer = 0;
        fpcM_Search(s_hasidel_sub, i_this);
        fpcM_Search(s_kaisoudel_sub, i_this);
        /* fallthrough */
    case 45:
        var_r27 = 1;
        if (i_this->mDemoActionTimer != 80) {
            break;
        }

        i_this->mDemoCamCenter.set(-560.0f, -16612.0f, -836.0f);
        i_this->mDemoCamEye.set(-600.0f, -16245.0f, -1331.0f);
        i_this->mDemoCamCenterTarget.set(-6378.0f, -21886.0f, 7150.0f);
        i_this->mDemoCamEyeTarget.set(-6961.0f, -21727.0f, 7278.0f);

        i_this->field_0x5cb4 = std::fabsf(i_this->mDemoCamEyeTarget.x - i_this->mDemoCamEye.x);
        i_this->field_0x5cb8 = std::fabsf(i_this->mDemoCamEyeTarget.y - i_this->mDemoCamEye.y);
        i_this->field_0x5cbc = std::fabsf(i_this->mDemoCamEyeTarget.z - i_this->mDemoCamEye.z);
        i_this->field_0x5cc0 = std::fabsf(i_this->mDemoCamCenterTarget.x - i_this->mDemoCamCenter.x);
        i_this->field_0x5cc4 = std::fabsf(i_this->mDemoCamCenterTarget.y - i_this->mDemoCamCenter.y);
        i_this->field_0x5cc8 = std::fabsf(i_this->mDemoCamCenterTarget.z - i_this->mDemoCamCenter.z);
        i_this->field_0x5cd0 = 0.0f;

        i_this->mDemoAction = 46;
        i_this->mDemoActionTimer = 0;
        i_this->field_0x5dd8 = 4;

        obj_lv3WaterB_class* water = (obj_lv3WaterB_class*)fopAcM_SearchByName(PROC_OBJ_LV3WATERB);
        water->mAction = LV3WATERB_ACT_END;
        water->field_0x586 = 0;
        var_r27 = 2;
        /* fallthrough */
    case 46:
        sp58.set(VREG_F(0) + -1225.0f, -24000.0f, VREG_F(1) + 8678.0f);
        player->setPlayerPosAndAngle(&sp58, VREG_S(1) + 10000, 0);

        if (!(i_this->mDemoActionTimer & 7) && (i_this->mDemoActionTimer >> 3) <= 13) {
            i_this->mBodyParts[(i_this->mDemoActionTimer >> 3) + 4].field_0x3e = 0;
        }

        if (i_this->mDemoActionTimer > 0) {
            cam_3d_morf(i_this, BREG_F(17) + 0.05f);
            cLib_addCalc2(&i_this->field_0x5cd0, BREG_F(18) + 0.002f, 1.0f, BREG_F(19) + 0.0001f);
        }

        if (i_this->mDemoActionTimer != 400) {
            break;
        }

        i_this->mDemoCamCenter.set(-1031.0f, -23787.0f, 8845.0f);
        i_this->mDemoCamEye.set(-1629.0f, -23891.0f, 8958.0f);
        i_this->mDemoAction = 47;
        i_this->mDemoActionTimer = 0;
        /* fallthrough */
    case 47:
        if (i_this->mDemoActionTimer >= 50) {
            cLib_addCalc2(&i_this->field_0x5d14, TREG_F(11) + -20.0f, 1.0f, TREG_F(12) + 0.25f);
        }

        if (i_this->mDemoActionTimer == 50) {
            i_this->mHideCore = true;
            dComIfGp_particle_set(0x8491, &a_this->eyePos, NULL, NULL);
            fopAcM_createDisappear(a_this, &a_this->eyePos, 15, 0, 0xFF);
            mDoAud_seStart(Z2SE_EN_BQ_EYE_EXPLODE, NULL, 0, 0);

            cXyz sp94(1.0f, 1.0f, 1.0f);
            csXyz sp17C(player->shape_angle);
            sp17C.y += KREG_S(3) + -0x7060;

            fopAcM_createItemForBoss(&a_this->eyePos, UTAWA_HEART, fopAcM_GetRoomNo(a_this), &sp17C,
                                     NULL, KREG_F(19) + 10.0f, 10.0f, -1);
            dComIfGp_getVibration().StartShock(5, 1, cXyz(0.0f, 1.0f, 0.0f));
        }

        if (i_this->mDemoActionTimer == 100) {
            i_this->mDemoCamCenter.set(-2785.0f, -22626.0f, 7614.0f);
            i_this->mDemoCamEye.set(-3295.0f, -22459.0f, 7307.0f);
            i_this->mDemoCamCenterTarget.set(-2933.0f, -22626.0f, 6829.0f);
            i_this->mDemoCamEyeTarget.set(-3295.0f, -22459.0f, 7307.0f);

            i_this->field_0x5cb4 = std::fabsf(i_this->mDemoCamEyeTarget.x - i_this->mDemoCamEye.x);
            i_this->field_0x5cb8 = std::fabsf(i_this->mDemoCamEyeTarget.y - i_this->mDemoCamEye.y);
            i_this->field_0x5cbc = std::fabsf(i_this->mDemoCamEyeTarget.z - i_this->mDemoCamEye.z);
            i_this->field_0x5cc0 = std::fabsf(i_this->mDemoCamCenterTarget.x - i_this->mDemoCamCenter.x);
            i_this->field_0x5cc4 = std::fabsf(i_this->mDemoCamCenterTarget.y - i_this->mDemoCamCenter.y);
            i_this->field_0x5cc8 = std::fabsf(i_this->mDemoCamCenterTarget.z - i_this->mDemoCamCenter.z);
            i_this->field_0x5cd0 = 0.0f;

            i_this->mDemoAction = 48;
            i_this->mDemoActionTimer = 0;
        }
        break;
    case 48:
        if (i_this->mDemoActionTimer >= 60) {
            i_this->field_0x5cd0 = 0.02f;
            cam_3d_morf(i_this, BREG_F(17) + 0.1f);

            if (!(i_this->mDemoActionTimer & 3)) {
                int idx = ((i_this->mDemoActionTimer - 60) >> 2);
                if (idx < 19) {
                    i_this->mBodyParts[idx].mHide = true;

                    cXyz spA0(i_this->mBodyParts[idx].mSize,
                              i_this->mBodyParts[idx].mSize,
                              i_this->mBodyParts[idx].mSize);

                    if (idx == 0) {
                        mDoAud_seStart(Z2SE_EN_OI_EXPLODE, NULL, 0, 0);
                        for (int i = 0; i < 8; i++) {
                            fopAc_ac_c* tentacle = fopAcM_SearchByID(i_this->mTentacleActorIDs[i]);
                            fopAcM_delete(tentacle);
                        }

                        i_this->field_0x5d40[0][idx] = dComIfGp_particle_set(
                            0x8627, &i_this->mBodyParts[idx].mPos, NULL, &spA0);
                        i_this->field_0x5d40[1][idx] = dComIfGp_particle_set(
                            0x862A, &i_this->mBodyParts[idx].mPos, NULL, &spA0);
                    } else if (idx == 18) {
                        i_this->field_0x5d40[0][idx] = dComIfGp_particle_set(
                            0x8628, &i_this->mBodyParts[idx].mPos, NULL, &spA0);
                        i_this->field_0x5d40[1][idx] = dComIfGp_particle_set(
                            0x862B, &i_this->mBodyParts[idx].mPos, NULL, &spA0);
                    } else {
                        i_this->field_0x5d40[0][idx] = dComIfGp_particle_set(
                            0x8626, &i_this->mBodyParts[idx].mPos, NULL, &spA0);
                        i_this->field_0x5d40[1][idx] = dComIfGp_particle_set(
                            0x8629, &i_this->mBodyParts[idx].mPos, NULL, &spA0);
                    }
                }
            }
        }

        if (i_this->mDemoActionTimer == 180) {
            i_this->mDemoAction = 49;
            i_this->mDemoActionTimer = 0;

            for (int i = 0; i < 19; i++) {
                for (int j = 0; j < 2; j++) {
                    if (i_this->field_0x5d40[j][i] != NULL) {
                        i_this->field_0x5d40[j][i]->becomeDeleteEmitter();
                    }
                }
            }

            static cXyz room_pos(0.0f, 0.0f, 0.0f);
            static cXyz sc(10.0f, 10.0f, 10.0f);

            for (int i = 0; i < 5; i++) {
                static u16 ex_eff[] = {0x8621, 0x8622, 0x8623, 0x8624, 0x8625};
                dComIfGp_particle_set(ex_eff[i], &room_pos, NULL, &sc);
            }

            i_this->mDemoCamEye.set(-4820.0f, -18600.0f, -510.0f);
            i_this->mDemoCamCenter.set(-2630.0f, -21620.0f, 4900.0f);
            i_this->mDemoCamFovy = 45.0f;
            i_this->field_0x5cd0 = 0.0f;

            i_this->mSound.startCreatureSound(Z2SE_EN_BOSS_CONVERGE, 0, 0);
        }
        break;
    case 49:
        if (i_this->mDemoActionTimer >= 100) {
            cLib_addCalc2(&i_this->mDemoCamFovy, 30.0f, 0.2f, i_this->field_0x5cd0);
            cLib_addCalc2(&i_this->field_0x5cd0, 1.0f, 1.0f, 0.05f);
        }

        if (i_this->mDemoActionTimer == 100) {
            cMtx_YrotS(*calc_mtx, player->shape_angle.y);
            sp58.set(0.0f, JREG_F(8) + 300.0f, JREG_F(9) + 100.0f);
            MtxPosition(&sp58, &sp64);

            sp64 += player->current.pos;
            OS_REPORT("///YSTONE POS  %d,%d,%d\n", sp64.x, sp64.y, sp64.z);
            fopAcM_create(PROC_OBJ_YSTONE, 0, &sp64, fopAcM_GetRoomNo(a_this), NULL, NULL, -1);
        }

        if (i_this->mDemoActionTimer == 120) {
            obj_ystone_class* ystone = (obj_ystone_class*)fopAcM_SearchByName(PROC_OBJ_YSTONE);
            if (ystone != NULL) {
                ystone->field_0x59b = 0;
            }
        }

        if (i_this->mDemoActionTimer >= 180) {
            i_this->mDemoCamFovy = 45.0f;
            if (i_this->mDemoActionTimer == 180) {
                i_this->field_0x5cd8 = JREG_F(8) + 300.0f;
            }

            cMtx_YrotS(*calc_mtx, player->shape_angle.y);

            sp58.x = ZREG_F(1);
            sp58.y = ZREG_F(2) + 100.0f;
            sp58.z = ZREG_F(3) + -200.0f;
            MtxPosition(&sp58, &i_this->mDemoCamEye);

            i_this->mDemoCamEye += player->current.pos;
            i_this->mDemoCamCenter = player->current.pos;
            i_this->mDemoCamCenter.y += ZREG_F(4) + 200.0f;

            sp58.set(0.0f, i_this->field_0x5cd8, JREG_F(9) + 100.0f);
            MtxPosition(&sp58, &sp64);
            sp64 += player->current.pos;

            cLib_addCalc2(&i_this->field_0x5cd8, 210.0f, 0.05f, 0.5f);

            obj_ystone_class* ystone = (obj_ystone_class*)fopAcM_SearchByName(PROC_OBJ_YSTONE);
            if (ystone != NULL) {
                ystone->setCurrentPos(sp64);
            }

            if (i_this->mDemoActionTimer == 279) {
                cXyz spAC(-1520.0f, -23960.0f, 7100.0f);
                csXyz sp184(0, 0, 0);
                fopAcM_createWarpHole(&spAC, &sp184, fopAcM_GetRoomNo(a_this), 0, 1, 2);
            }

            if (i_this->mDemoActionTimer == 290) {
                i_this->mDemoAction = 100;
                dComIfGs_onStageBossEnemy();
                dComIfGs_onSwitch(a_this->home.angle.z & 0xFF, fopAcM_GetRoomNo(a_this));
                fopAcM_delete(a_this);
            }
        }
        break;
    case 50:
        if (!a_this->eventInfo.checkCommandDemoAccrpt()) {
            fopAcM_orderPotentialEvent(a_this, 2, 0xFFFF, 0);
            a_this->eventInfo.i_onCondition(2);
            return;
        }

        camera->mCamera.Stop();
        i_this->mDemoAction = 51;
        i_this->mDemoActionTimer = 0;
        i_this->mDemoCamFovy = 55.0f;
        i_this->field_0x5cd0 = 0.0f;
        camera->mCamera.SetTrimSize(3);

        daPy_getPlayerActorClass()->changeOriginalDemo();

        i_this->field_0x5cf8 = player->shape_angle.y;
        i_this->field_0x5cfc = 0;
        i_this->field_0x5d00 = ZREG_F(3) + 300.0f;

        anm_init(i_this, OB_ANM_EAT, 3.0f, J3DFrameCtrl::LOOP_ONCE_e, 1.0f);

        i_this->mOISound.startCreatureVoice(Z2SE_EN_OI_V_EAT, -1);

        MTXCopy(i_this->mBodyParts[0].mpMorf->getModel()->getAnmMtx(0), mDoMtx_stack_c::get());
        mDoMtx_stack_c::multVecZero(&sp64);
        dComIfGp_particle_set(0x8803, &sp64, NULL, NULL);
        dComIfGp_particle_set(0x8804, &sp64, NULL, NULL);
        /* fallthrough */
    case 51:
        MTXCopy(i_this->mBodyParts[0].mpMorf->getModel()->getAnmMtx(0x13), mDoMtx_stack_c::get());
        sp58.x = i_this->field_0x5d00;
        sp58.y = 0.0;
        sp58.z = 0.0;
        mDoMtx_stack_c::multVec(&sp58, &i_this->field_0x5cec);

        i_this->field_0x5cf8 += 0x1000;
        cLib_addCalc0(&i_this->field_0x5d00, 1.0f, i_this->field_0x5cfc);
        cLib_addCalc2(&i_this->field_0x5cfc, 100.0f, 1.0f, 5.0f);

        player->setPlayerPosAndAngle(&i_this->field_0x5cec, i_this->field_0x5cf8, 0);

        cMtx_YrotS(*calc_mtx, a_this->home.angle.y + -0x2000);
        sp58.x = 0.0;
        sp58.y = ZREG_F(12) + 1000.0f;
        sp58.z = ZREG_F(13) + 900.0f;
        MtxPosition(&sp58, &i_this->mDemoCamEye);
        i_this->mDemoCamEye += a_this->home.pos;

        if (i_this->mAnmID == OB_ANM_EAT) {
            if (i_this->mBodyParts[0].mpMorf->checkFrame(120.0f)) {
                daPy_getPlayerActorClass()->changeDemoMode(46, 0, 0, 0);
            }

            if (i_this->mBodyParts[0].mpMorf->checkFrame(153.0f)) {
                i_this->mDemoAction = 52;
                i_this->mDemoActionTimer = 0;

                sp64 = a_this->home.pos;
                sp64.y += KREG_F(13) + 400.0f;
                player->setPlayerPosAndAngle(&sp64, 0, 0);

                daPy_getPlayerActorClass()->setThrowDamage(a_this->home.angle.y, 10.0f,
                                                           KREG_F(14) + 30.0f, 4, 1, 2);
                daPy_getPlayerActorClass()->changeDemoMode(1, 0, 0, 0);
            }
        }
    case 52:
        if (i_this->mDemoActionTimer == 0) {
            i_this->mDemoCamCenter = i_this->field_0x5cec;
        } else {
            cLib_addCalc2(&i_this->mDemoCamCenter.x, player->current.pos.x, 0.4f, 300.0f);
            cLib_addCalc2(&i_this->mDemoCamCenter.y, player->current.pos.y, 0.4f, 300.0f);
            cLib_addCalc2(&i_this->mDemoCamCenter.z, player->current.pos.z, 0.4f, 300.0f);
        }

        if (i_this->mDemoActionTimer > 25) {
            cLib_addCalc2(&i_this->mDemoCamFovy, 40.0f, 0.05f, i_this->field_0x5cd0);
            cLib_addCalc2(&i_this->field_0x5cd0, 1.0f, 1.0f, 0.05f);
        }

        if (i_this->mDemoAction == 52 && i_this->mBodyParts[0].mpMorf->isStop()) {
            i_this->mDemoAction = 100;
            i_this->mCoreAnm = OB_ANM_WAIT;
            i_this->mCoreAnmMode = J3DFrameCtrl::LOOP_REPEAT_e;
            i_this->field_0x4794 = 100;
        }
        break;
    case 60:
        if (!a_this->eventInfo.checkCommandDemoAccrpt()) {
            fopAcM_orderPotentialEvent(a_this, 2, 0xFFFF, 0);
            a_this->eventInfo.i_onCondition(2);
            return;
        }

        camera->mCamera.Stop();
        i_this->mDemoAction = 61;
        i_this->mDemoActionTimer = 0;
        i_this->mDemoCamFovy = 40.0f;
        i_this->field_0x5cd0 = 0.0f;
        camera->mCamera.SetTrimSize(3);

        daPy_getPlayerActorClass()->changeOriginalDemo();
        /* fallthrough */
    case 61:
        cMtx_YrotS(*calc_mtx, a_this->home.angle.y + 0x2000);
        sp58.x = 0.0f;
        sp58.y = ZREG_F(15) + 100.0f;
        sp58.z = ZREG_F(16) + 1700.0f;
        MtxPosition(&sp58, &i_this->mDemoCamEye);
        i_this->mDemoCamEye += a_this->home.pos;

        i_this->mDemoCamCenter = a_this->home.pos;
        i_this->mDemoCamCenter.y += ZREG_F(17) + 700.0f;
        cLib_addCalc2(&i_this->mDemoCamFovy, 55.0f, 0.05f, 0.2f);
    }

    if (i_this->mDemoAction != 0) {
        if (i_this->mDemoAction >= 100) {
            if (i_this->mDemoAction == 101) {
                cMtx_YrotS(*calc_mtx, player->shape_angle.y);
                sp58.x = 0.0f;
                sp58.y = JREG_F(1) + 100.0f;
                sp58.z = JREG_F(2) + -250.0f;
                MtxPosition(&sp58, &i_this->mDemoCamEye);
                i_this->mDemoCamEye += player->current.pos;

                i_this->mDemoCamCenter = player->current.pos;
                i_this->mDemoCamCenter.y += 120.0f;
            }

            camera->mCamera.Reset(i_this->mDemoCamCenter, i_this->mDemoCamEye);
            camera->mCamera.Start();
            camera->mCamera.SetTrimSize(0);
            dComIfGp_event_reset();
            daPy_getPlayerActorClass()->cancelOriginalDemo();
            i_this->mDemoAction = 0;
        }

        cXyz cam_center;
        cXyz cam_eye;

        cam_center = i_this->mDemoCamCenter;
        cam_eye = i_this->mDemoCamEye;

        s16 cam_bank = 0;
        if (i_this->field_0x5ce4 > 0.0f) {
            int sp38 = i_this->field_0x5ce4 * cM_ssin(i_this->mDemoActionTimer * 0x1B00) * 25.0f;
            int sp40 = i_this->field_0x5ce4 * cM_ssin(i_this->mDemoActionTimer * 0x1900) * 25.0f;
            sp58 = cam_center - cam_eye;

            s16 temp_r5 = sp38 + cM_atan2s(sp58.x, sp58.z);
            s16 temp_r4 = sp40 - cM_atan2s(sp58.y, JMAFastSqrt(sp58.x * sp58.x + sp58.z * sp58.z));
            cMtx_YrotS(*calc_mtx, temp_r5);
            cMtx_XrotM(*calc_mtx, temp_r4);

            sp58.x = 0.0;
            sp58.y = 0.0;
            sp58.z = sp58.abs();
            MtxPosition(&sp58, &cam_center);
            cam_center += cam_eye;

            cam_bank = (BREG_F(4) + 30.0f) *
                      (i_this->field_0x5ce4 * cM_scos(i_this->mDemoActionTimer * 0x1E00));
            cLib_addCalc0(&i_this->field_0x5ce4, 1.0f, BREG_F(5) + 0.5f);
        }

        camera->mCamera.Set(cam_center, cam_eye, cam_bank, i_this->mDemoCamFovy);

        i_this->mDemoActionTimer++;
        i_this->field_0x4794 = 90;
        cLib_addCalcAngleS2(&i_this->mBlureRate, i_this->mBlureRateTarget, 1, 8);

        if (i_this->mDemoAction >= 31 && i_this->mDemoAction < 40) {
            if (dComIfGp_getEvent().checkSkipEdge()) {
                cDmr_SkipInfo = JREG_S(8) + 30;
                dStage_changeScene(1, 0.0f, 0, fopAcM_GetRoomNo(a_this), 0, -1);
            }
        }
    }

    if (var_r27 != 0) {
        sp64.set(0.0f, -23580.0f, 10300.0f);

        for (int i = 0; i < 4; i++) {
            static u16 iso_eff[] = {0x87F7, 0x87F8, 0x87F9, 0x87FA};
            i_this->field_0x5d24[i] =
                dComIfGp_particle_set(i_this->field_0x5d24[i], iso_eff[i], &sp64, NULL, NULL);

            if (var_r27 == 2) {
                JPABaseEmitter* emitter = dComIfGp_particle_getEmitter(i_this->field_0x5d24[i]);
                if (emitter != NULL) {
                    emitter->becomeDeleteEmitter();
                }
            }
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void demo_camera(b_ob_class* i_this) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/demo_camera__FP10b_ob_class.s"
}
#pragma pop
#endif

/* 80618540-80618574 0080C0 0034+00 1/1 0/0 0/0 .text            dComIfGp_particle_getEmitter__FUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void dComIfGp_particle_getEmitter(u32 param_0) {
extern "C" asm void dComIfGp_particle_getEmitter__FUl() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/dComIfGp_particle_getEmitter__FUl.s"
}
#pragma pop

/* 80618574-806185F4 0080F4 0080+00 1/1 0/0 0/0 .text
 * dComIfGp_particle_set__FUlUsPC4cXyzPC5csXyzPC4cXyz           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
/* static asm void dComIfGp_particle_set(u32 param_0, u16 param_1, cXyz const* param_2,
                                      csXyz const* param_3, cXyz const* param_4) { */
extern "C" asm void dComIfGp_particle_set__FUlUsPC4cXyzPC5csXyzPC4cXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/dComIfGp_particle_set__FUlUsPC4cXyzPC5csXyzPC4cXyz.s"
}
#pragma pop

/* 806185F4-80618608 008174 0014+00 1/1 0/0 0/0 .text            checkSkipEdge__14dEvt_control_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void checkSkipEdge__14dEvt_control_cFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/checkSkipEdge__14dEvt_control_cFv.s"
}
#pragma pop

/* 80618608-80618620 008188 0018+00 1/1 0/0 0/0 .text            cM_scos__Fs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void cM_scos(s16 param_0) {
extern "C" asm void cM_scos__Fs() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/cM_scos__Fs.s"
}
#pragma pop

/* 80618620-8061863C 0081A0 001C+00 1/1 0/0 0/0 .text            JMAFastSqrt__Ff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void JMAFastSqrt(f32 param_0) {
static asm void JMAFastSqrt__Ff() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/JMAFastSqrt__Ff.s"
}
#pragma pop

/* 8061863C-80618650 0081BC 0014+00 1/1 0/0 0/0 .text            cM_ssin__Fs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void cM_ssin(s16 param_0) {
extern "C" asm void cM_ssin__Fs(){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/cM_ssin__Fs.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061AF18-8061AF1C 000194 0004+00 0/0 0/0 0/0 .rodata          @6726 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6726 = 153.0f;
COMPILER_STRIP_GATE(0x8061AF18, &lit_6726);
#pragma pop

/* 8061AF1C-8061AF20 000198 0004+00 0/0 0/0 0/0 .rodata          @6727 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6727 = -500.0f;
COMPILER_STRIP_GATE(0x8061AF1C, &lit_6727);
#pragma pop

/* 8061AF20-8061AF24 00019C 0004+00 0/0 0/0 0/0 .rodata          @6728 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6728 = -371.0f;
COMPILER_STRIP_GATE(0x8061AF20, &lit_6728);
#pragma pop

/* 8061AF24-8061AF28 0001A0 0004+00 0/0 0/0 0/0 .rodata          @6729 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6729 = -23869.0f;
COMPILER_STRIP_GATE(0x8061AF24, &lit_6729);
#pragma pop

/* 8061AF28-8061AF2C 0001A4 0004+00 0/0 0/0 0/0 .rodata          @6730 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6730 = -1247.0f;
COMPILER_STRIP_GATE(0x8061AF28, &lit_6730);
#pragma pop

/* 8061AF2C-8061AF30 0001A8 0004+00 0/0 0/0 0/0 .rodata          @6731 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6731 = -473.0f;
COMPILER_STRIP_GATE(0x8061AF2C, &lit_6731);
#pragma pop

/* 8061AF30-8061AF34 0001AC 0004+00 0/0 0/0 0/0 .rodata          @6732 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6732 = -1581.0f;
COMPILER_STRIP_GATE(0x8061AF30, &lit_6732);
#pragma pop

/* 8061AF34-8061AF38 0001B0 0004+00 0/0 0/0 0/0 .rodata          @6733 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6733 = -204.0f;
COMPILER_STRIP_GATE(0x8061AF34, &lit_6733);
#pragma pop

/* 8061AF38-8061AF3C 0001B4 0004+00 0/0 0/0 0/0 .rodata          @6734 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6734 = -1307.0f;
COMPILER_STRIP_GATE(0x8061AF38, &lit_6734);
#pragma pop

/* 8061AF3C-8061AF40 0001B8 0004+00 0/0 0/0 0/0 .rodata          @6735 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6735 = -23169.0f;
COMPILER_STRIP_GATE(0x8061AF3C, &lit_6735);
#pragma pop

/* 8061AF40-8061AF44 0001BC 0004+00 0/0 0/0 0/0 .rodata          @6736 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6736 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x8061AF40, &lit_6736);
#pragma pop

/* 8061AF44-8061AF48 0001C0 0004+00 0/0 0/0 0/0 .rodata          @6737 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6737 = -2000.0f;
COMPILER_STRIP_GATE(0x8061AF44, &lit_6737);
#pragma pop

/* 8061AF48-8061AF4C 0001C4 0004+00 0/0 0/0 0/0 .rodata          @6738 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6738 = 7180.0f;
COMPILER_STRIP_GATE(0x8061AF48, &lit_6738);
#pragma pop

/* 8061AF4C-8061AF50 0001C8 0004+00 0/0 0/0 0/0 .rodata          @6739 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6739 = -16100.0f;
COMPILER_STRIP_GATE(0x8061AF4C, &lit_6739);
#pragma pop

/* 8061AF50-8061AF54 0001CC 0004+00 0/0 0/0 0/0 .rodata          @6740 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6740 = -16500.0f;
COMPILER_STRIP_GATE(0x8061AF50, &lit_6740);
#pragma pop

/* 8061AF54-8061AF58 0001D0 0004+00 0/0 0/0 0/0 .rodata          @6741 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6741 = -1236.0f;
COMPILER_STRIP_GATE(0x8061AF54, &lit_6741);
#pragma pop

/* 8061AF58-8061AF5C 0001D4 0004+00 0/0 0/0 0/0 .rodata          @6742 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6742 = -23800.0f;
COMPILER_STRIP_GATE(0x8061AF58, &lit_6742);
#pragma pop

/* 8061AF5C-8061AF60 0001D8 0004+00 0/0 0/0 0/0 .rodata          @6743 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6743 = -3470.0f;
COMPILER_STRIP_GATE(0x8061AF5C, &lit_6743);
#pragma pop

/* 8061AF60-8061AF64 0001DC 0004+00 0/0 0/0 0/0 .rodata          @6744 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6744 = -1705.0f;
COMPILER_STRIP_GATE(0x8061AF60, &lit_6744);
#pragma pop

/* 8061AF64-8061AF68 0001E0 0004+00 0/0 0/0 0/0 .rodata          @6745 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6745 = -23870.0f;
COMPILER_STRIP_GATE(0x8061AF64, &lit_6745);
#pragma pop

/* 8061AF68-8061AF6C 0001E4 0004+00 0/0 0/0 0/0 .rodata          @6746 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6746 = -762.0f;
COMPILER_STRIP_GATE(0x8061AF68, &lit_6746);
#pragma pop

/* 8061AF6C-8061AF70 0001E8 0004+00 0/0 0/0 0/0 .rodata          @6747 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6747 = -1193.0f;
COMPILER_STRIP_GATE(0x8061AF6C, &lit_6747);
#pragma pop

/* 8061AF70-8061AF74 0001EC 0004+00 0/0 0/0 0/0 .rodata          @6748 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6748 = -770.0f;
COMPILER_STRIP_GATE(0x8061AF70, &lit_6748);
#pragma pop

/* 8061AF74-8061AF78 0001F0 0004+00 0/0 0/0 0/0 .rodata          @6749 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6749 = -24093.0f;
COMPILER_STRIP_GATE(0x8061AF74, &lit_6749);
#pragma pop

/* 8061AF78-8061AF7C 0001F4 0004+00 0/0 0/0 0/0 .rodata          @6750 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6750 = 160.0f;
COMPILER_STRIP_GATE(0x8061AF78, &lit_6750);
#pragma pop

/* 8061AF7C-8061AF80 0001F8 0004+00 0/0 0/0 0/0 .rodata          @6751 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6751 = -447.0f;
COMPILER_STRIP_GATE(0x8061AF7C, &lit_6751);
#pragma pop

/* 8061AF80-8061AF84 0001FC 0004+00 0/0 0/0 0/0 .rodata          @6752 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6752 = -22850.0f;
COMPILER_STRIP_GATE(0x8061AF80, &lit_6752);
#pragma pop

/* 8061AF84-8061AF88 000200 0004+00 0/0 0/0 0/0 .rodata          @6753 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6753 = -718.0f;
COMPILER_STRIP_GATE(0x8061AF84, &lit_6753);
#pragma pop

/* 8061AF88-8061AF8C 000204 0004+00 0/0 0/0 0/0 .rodata          @6754 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6754 = 1.0f / 25.0f;
COMPILER_STRIP_GATE(0x8061AF88, &lit_6754);
#pragma pop

/* 8061AF8C-8061AF90 000208 0004+00 0/0 0/0 0/0 .rodata          @6755 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6755 = 0x3A03126F;
COMPILER_STRIP_GATE(0x8061AF8C, &lit_6755);
#pragma pop

/* 8061AF90-8061AF94 00020C 0004+00 0/0 0/0 0/0 .rodata          @6756 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6756 = -17000.0f;
COMPILER_STRIP_GATE(0x8061AF90, &lit_6756);
#pragma pop

/* 8061AF94-8061AF98 000210 0004+00 0/0 0/0 0/0 .rodata          @6757 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6757 = 4716.0f;
COMPILER_STRIP_GATE(0x8061AF94, &lit_6757);
#pragma pop

/* 8061AF98-8061AF9C 000214 0004+00 0/0 0/0 0/0 .rodata          @6758 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6758 = -22925.0f;
COMPILER_STRIP_GATE(0x8061AF98, &lit_6758);
#pragma pop

/* 8061AF9C-8061AFA0 000218 0004+00 0/0 0/0 0/0 .rodata          @6759 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6759 = 1873.0f;
COMPILER_STRIP_GATE(0x8061AF9C, &lit_6759);
#pragma pop

/* 8061AFA0-8061AFA4 00021C 0004+00 0/0 0/0 0/0 .rodata          @6760 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6760 = 4264.0f;
COMPILER_STRIP_GATE(0x8061AFA0, &lit_6760);
#pragma pop

/* 8061AFA4-8061AFA8 000220 0004+00 0/0 0/0 0/0 .rodata          @6761 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6761 = -25096.0f;
COMPILER_STRIP_GATE(0x8061AFA4, &lit_6761);
#pragma pop

/* 8061AFA8-8061AFAC 000224 0004+00 0/0 0/0 0/0 .rodata          @6762 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6762 = 12114.0f;
COMPILER_STRIP_GATE(0x8061AFA8, &lit_6762);
#pragma pop

/* 8061AFAC-8061AFB0 000228 0004+00 0/0 0/0 0/0 .rodata          @6763 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6763 = -1377.0f;
COMPILER_STRIP_GATE(0x8061AFAC, &lit_6763);
#pragma pop

/* 8061AFB0-8061AFB4 00022C 0004+00 0/0 0/0 0/0 .rodata          @6764 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6764 = -22866.0f;
COMPILER_STRIP_GATE(0x8061AFB0, &lit_6764);
#pragma pop

/* 8061AFB4-8061AFB8 000230 0004+00 0/0 0/0 0/0 .rodata          @6765 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6765 = 9105.0f;
COMPILER_STRIP_GATE(0x8061AFB4, &lit_6765);
#pragma pop

/* 8061AFB8-8061AFBC 000234 0004+00 0/0 0/0 0/0 .rodata          @6766 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6766 = -560.0f;
COMPILER_STRIP_GATE(0x8061AFB8, &lit_6766);
#pragma pop

/* 8061AFBC-8061AFC0 000238 0004+00 0/0 0/0 0/0 .rodata          @6767 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6767 = -16612.0f;
COMPILER_STRIP_GATE(0x8061AFBC, &lit_6767);
#pragma pop

/* 8061AFC0-8061AFC4 00023C 0004+00 0/0 0/0 0/0 .rodata          @6768 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6768 = -836.0f;
COMPILER_STRIP_GATE(0x8061AFC0, &lit_6768);
#pragma pop

/* 8061AFC4-8061AFC8 000240 0004+00 0/0 0/0 0/0 .rodata          @6769 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6769 = -600.0f;
COMPILER_STRIP_GATE(0x8061AFC4, &lit_6769);
#pragma pop

/* 8061AFC8-8061AFCC 000244 0004+00 0/0 0/0 0/0 .rodata          @6770 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6770 = -16245.0f;
COMPILER_STRIP_GATE(0x8061AFC8, &lit_6770);
#pragma pop

/* 8061AFCC-8061AFD0 000248 0004+00 0/0 0/0 0/0 .rodata          @6771 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6771 = -1331.0f;
COMPILER_STRIP_GATE(0x8061AFCC, &lit_6771);
#pragma pop

/* 8061AFD0-8061AFD4 00024C 0004+00 0/0 0/0 0/0 .rodata          @6772 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6772 = -6378.0f;
COMPILER_STRIP_GATE(0x8061AFD0, &lit_6772);
#pragma pop

/* 8061AFD4-8061AFD8 000250 0004+00 0/0 0/0 0/0 .rodata          @6773 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6773 = -21886.0f;
COMPILER_STRIP_GATE(0x8061AFD4, &lit_6773);
#pragma pop

/* 8061AFD8-8061AFDC 000254 0004+00 0/0 0/0 0/0 .rodata          @6774 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6774 = 7150.0f;
COMPILER_STRIP_GATE(0x8061AFD8, &lit_6774);
#pragma pop

/* 8061AFDC-8061AFE0 000258 0004+00 0/0 0/0 0/0 .rodata          @6775 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6775 = -6961.0f;
COMPILER_STRIP_GATE(0x8061AFDC, &lit_6775);
#pragma pop

/* 8061AFE0-8061AFE4 00025C 0004+00 0/0 0/0 0/0 .rodata          @6776 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6776 = -21727.0f;
COMPILER_STRIP_GATE(0x8061AFE0, &lit_6776);
#pragma pop

/* 8061AFE4-8061AFE8 000260 0004+00 0/0 0/0 0/0 .rodata          @6777 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6777 = 7278.0f;
COMPILER_STRIP_GATE(0x8061AFE4, &lit_6777);
#pragma pop

/* 8061AFE8-8061AFEC 000264 0004+00 0/0 0/0 0/0 .rodata          @6778 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6778 = -1225.0f;
COMPILER_STRIP_GATE(0x8061AFE8, &lit_6778);
#pragma pop

/* 8061AFEC-8061AFF0 000268 0004+00 0/0 0/0 0/0 .rodata          @6779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6779 = 8678.0f;
COMPILER_STRIP_GATE(0x8061AFEC, &lit_6779);
#pragma pop

/* 8061AFF0-8061AFF4 00026C 0004+00 0/0 0/0 0/0 .rodata          @6780 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6780 = 0x3B03126F;
COMPILER_STRIP_GATE(0x8061AFF0, &lit_6780);
#pragma pop

/* 8061AFF4-8061AFF8 000270 0004+00 0/0 0/0 0/0 .rodata          @6781 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6781 = 0x38D1B717;
COMPILER_STRIP_GATE(0x8061AFF4, &lit_6781);
#pragma pop

/* 8061AFF8-8061AFFC 000274 0004+00 0/0 0/0 0/0 .rodata          @6782 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6782 = -1031.0f;
COMPILER_STRIP_GATE(0x8061AFF8, &lit_6782);
#pragma pop

/* 8061AFFC-8061B000 000278 0004+00 0/0 0/0 0/0 .rodata          @6783 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6783 = -23787.0f;
COMPILER_STRIP_GATE(0x8061AFFC, &lit_6783);
#pragma pop

/* 8061B000-8061B004 00027C 0004+00 0/0 0/0 0/0 .rodata          @6784 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6784 = 8845.0f;
COMPILER_STRIP_GATE(0x8061B000, &lit_6784);
#pragma pop

/* 8061B004-8061B008 000280 0004+00 0/0 0/0 0/0 .rodata          @6785 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6785 = -1629.0f;
COMPILER_STRIP_GATE(0x8061B004, &lit_6785);
#pragma pop

/* 8061B008-8061B00C 000284 0004+00 0/0 0/0 0/0 .rodata          @6786 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6786 = -23891.0f;
COMPILER_STRIP_GATE(0x8061B008, &lit_6786);
#pragma pop

/* 8061B00C-8061B010 000288 0004+00 0/0 0/0 0/0 .rodata          @6787 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6787 = 8958.0f;
COMPILER_STRIP_GATE(0x8061B00C, &lit_6787);
#pragma pop

/* 8061B010-8061B014 00028C 0004+00 0/0 0/0 0/0 .rodata          @6788 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6788 = 0.25f;
COMPILER_STRIP_GATE(0x8061B010, &lit_6788);
#pragma pop

/* 8061B014-8061B018 000290 0004+00 0/0 0/0 0/0 .rodata          @6789 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6789 = -2785.0f;
COMPILER_STRIP_GATE(0x8061B014, &lit_6789);
#pragma pop

/* 8061B018-8061B01C 000294 0004+00 0/0 0/0 0/0 .rodata          @6790 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6790 = -22626.0f;
COMPILER_STRIP_GATE(0x8061B018, &lit_6790);
#pragma pop

/* 8061B01C-8061B020 000298 0004+00 0/0 0/0 0/0 .rodata          @6791 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6791 = 7614.0f;
COMPILER_STRIP_GATE(0x8061B01C, &lit_6791);
#pragma pop

/* 8061B020-8061B024 00029C 0004+00 0/0 0/0 0/0 .rodata          @6792 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6792 = -3295.0f;
COMPILER_STRIP_GATE(0x8061B020, &lit_6792);
#pragma pop

/* 8061B024-8061B028 0002A0 0004+00 0/0 0/0 0/0 .rodata          @6793 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6793 = -22459.0f;
COMPILER_STRIP_GATE(0x8061B024, &lit_6793);
#pragma pop

/* 8061B028-8061B02C 0002A4 0004+00 0/0 0/0 0/0 .rodata          @6794 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6794 = 7307.0f;
COMPILER_STRIP_GATE(0x8061B028, &lit_6794);
#pragma pop

/* 8061B02C-8061B030 0002A8 0004+00 0/0 0/0 0/0 .rodata          @6795 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6795 = -2933.0f;
COMPILER_STRIP_GATE(0x8061B02C, &lit_6795);
#pragma pop

/* 8061B030-8061B034 0002AC 0004+00 0/0 0/0 0/0 .rodata          @6796 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6796 = 6829.0f;
COMPILER_STRIP_GATE(0x8061B030, &lit_6796);
#pragma pop

/* 8061B034-8061B038 0002B0 0004+00 0/0 0/0 0/0 .rodata          @6797 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6797 = -4820.0f;
COMPILER_STRIP_GATE(0x8061B034, &lit_6797);
#pragma pop

/* 8061B038-8061B03C 0002B4 0004+00 0/0 0/0 0/0 .rodata          @6798 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6798 = -18600.0f;
COMPILER_STRIP_GATE(0x8061B038, &lit_6798);
#pragma pop

/* 8061B03C-8061B040 0002B8 0004+00 0/0 0/0 0/0 .rodata          @6799 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6799 = -510.0f;
COMPILER_STRIP_GATE(0x8061B03C, &lit_6799);
#pragma pop

/* 8061B040-8061B044 0002BC 0004+00 0/0 0/0 0/0 .rodata          @6800 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6800 = -2630.0f;
COMPILER_STRIP_GATE(0x8061B040, &lit_6800);
#pragma pop

/* 8061B044-8061B048 0002C0 0004+00 0/0 0/0 0/0 .rodata          @6801 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6801 = -21620.0f;
COMPILER_STRIP_GATE(0x8061B044, &lit_6801);
#pragma pop

/* 8061B048-8061B04C 0002C4 0004+00 0/0 0/0 0/0 .rodata          @6802 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6802 = 4900.0f;
COMPILER_STRIP_GATE(0x8061B048, &lit_6802);
#pragma pop

/* 8061B04C-8061B050 0002C8 0004+00 0/0 0/0 0/0 .rodata          @6803 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6803 = 45.0f;
COMPILER_STRIP_GATE(0x8061B04C, &lit_6803);
#pragma pop

/* 8061B050-8061B054 0002CC 0004+00 0/0 0/0 0/0 .rodata          @6804 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6804 = 210.0f;
COMPILER_STRIP_GATE(0x8061B050, &lit_6804);
#pragma pop

/* 8061B054-8061B058 0002D0 0004+00 0/1 0/0 0/0 .rodata          @6805 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6805 = -1520.0f;
COMPILER_STRIP_GATE(0x8061B054, &lit_6805);
#pragma pop

/* 8061B058-8061B05C 0002D4 0004+00 0/1 0/0 0/0 .rodata          @6806 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6806 = -23960.0f;
COMPILER_STRIP_GATE(0x8061B058, &lit_6806);
#pragma pop

/* 8061B05C-8061B060 0002D8 0004+00 0/1 0/0 0/0 .rodata          @6807 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6807 = 7100.0f;
COMPILER_STRIP_GATE(0x8061B05C, &lit_6807);
#pragma pop

/* 8061B060-8061B064 0002DC 0004+00 0/0 0/0 0/0 .rodata          @6808 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6808 = 120.0f;
COMPILER_STRIP_GATE(0x8061B060, &lit_6808);
#pragma pop

/* 8061B064-8061B068 0002E0 0004+00 0/0 0/0 0/0 .rodata          @6809 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6809 = 1700.0f;
COMPILER_STRIP_GATE(0x8061B064, &lit_6809);
#pragma pop

/* 8061B068-8061B06C 0002E4 0004+00 0/0 0/0 0/0 .rodata          @6810 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6810 = -250.0f;
COMPILER_STRIP_GATE(0x8061B068, &lit_6810);
#pragma pop

/* 8061B06C-8061B070 0002E8 0004+00 0/0 0/0 0/0 .rodata          @6811 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6811 = 25.0f;
COMPILER_STRIP_GATE(0x8061B06C, &lit_6811);
#pragma pop

/* 8061B070-8061B074 0002EC 0004+00 0/1 0/0 0/0 .rodata          @7342 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7342 = -11000.0f;
COMPILER_STRIP_GATE(0x8061B070, &lit_7342);
#pragma pop

/* 8061B074-8061B078 0002F0 0004+00 0/1 0/0 0/0 .rodata          @7343 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7343 = -20500.0f;
COMPILER_STRIP_GATE(0x8061B074, &lit_7343);
#pragma pop

/* 8061B078-8061B07C 0002F4 0004+00 0/1 0/0 0/0 .rodata          @7344 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7344 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x8061B078, &lit_7344);
#pragma pop

/* 8061B07C-8061B080 0002F8 0004+00 0/1 0/0 0/0 .rodata          @7345 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7345 = 11.0f / 10.0f;
COMPILER_STRIP_GATE(0x8061B07C, &lit_7345);
#pragma pop

/* 8061B080-8061B084 0002FC 0004+00 0/1 0/0 0/0 .rodata          @7346 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7346 = 22222.0f;
COMPILER_STRIP_GATE(0x8061B080, &lit_7346);
#pragma pop

/* 8061B084-8061B088 000300 0004+00 0/1 0/0 0/0 .rodata          @7347 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7347 = 750.0f;
COMPILER_STRIP_GATE(0x8061B084, &lit_7347);
#pragma pop

/* 8061B088-8061B08C 000304 0004+00 0/1 0/0 0/0 .rodata          @7348 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7348 = 410.0f;
COMPILER_STRIP_GATE(0x8061B088, &lit_7348);
#pragma pop

/* 80618650-806193B4 0081D0 0D64+00 2/1 0/0 0/0 .text            daB_OB_Execute__FP10b_ob_class */
// matches with literals?
#ifdef NONMATCHING
static int daB_OB_Execute(b_ob_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;

    if (cDmrNowMidnaTalk()) {
        return 1;
    }

    fopAc_ac_c* player = (fopAc_ac_c*)dComIfGp_getPlayer(0);
    cXyz sp70;
    cXyz sp7C;

    if (cDmr_SkipInfo != 0) {
        cDmr_SkipInfo--;
    }

    i_this->field_0x4750++;
    i_this->mYAngleToPlayer = fopAcM_searchPlayerAngleY(a_this);
    i_this->mXAngleToPlayer = -fopAcM_searchPlayerAngleX(a_this);

    for (int i = 0; i < 6; i++) {
        if (i_this->mTimers[i] != 0) {
            i_this->mTimers[i]--;
        }
    }

    if (i_this->mHitIFrameTimer != 0) {
        i_this->mHitIFrameTimer--;
    }

    if (i_this->field_0x4794 != 0) {
        i_this->field_0x4794--;
    }

    if (i_this->mFishBattleMode != 0) {
        i_this->attention_info.distances[fopAc_attn_BATTLE_e] = 60;
        i_this->mDistToPlayer = fopAcM_searchPlayerDistance(a_this);

        fish_damage_check(i_this);
        fish_move(i_this);

        if (i_this->mHideCore) {
            cLib_addCalc0(&i_this->mBossLightScale, 1.0f, 0.05f);
        } else {
            i_this->mBossLightScale = 1.0f;
        }

        if (i_this->mBossLightScale > 0.0f) {
            GXColor color;
            color.r = l_HIO.mLightR;
            color.g = l_HIO.mLightG;
            color.b = l_HIO.mLightB;
            color.a = 0xFF;

            cXyz pos(a_this->current.pos);
            dKy_BossLight_set(&pos, &color, l_HIO.mRange * i_this->mBossLightScale, 0);
        }

        if (!dComIfGs_isOneZoneSwitch(9, -1) && !dComIfGp_event_runCheck()) {
            i_this->mZoneSwTimer++;

            if (i_this->mZoneSwTimer == 600) {
                dComIfGs_onOneZoneSwitch(11, -1);
            }
        }
    }

    if (i_this->mCoreBattleMode != 0) {
        if (i_this->mAction == OB_ACTION_CORE_START) {
            if (player->current.pos.y > -11000.0f) {
                if (!dComIfGp_event_runCheck()) {
                    i_this->mZoneSwTimer++;
                }

                if (i_this->mZoneSwTimer == 300) {
                    dComIfGs_onOneZoneSwitch(4, -1);
                }
            } else {
                i_this->mZoneSwTimer = 0;
            }
        } else if (dComIfGs_isOneZoneSwitch(5, -1) && !dComIfGs_isOneZoneSwitch(7, -1)) {
            if (player->current.pos.y > -20500.0f) {
                dComIfGs_onOneZoneSwitch(6, -1);
                i_this->mZoneSwTimer = 0;
            } else {
                dComIfGs_offOneZoneSwitch(6, -1);
                i_this->mZoneSwTimer++;

                if (i_this->mZoneSwTimer == 600) {
                    dComIfGs_onOneZoneSwitch(10, -1);
                }
            }
        }

        i_this->attention_info.distances[fopAc_attn_BATTLE_e] = 4;
        i_this->mDistToPlayer = fopAcM_searchPlayerDistanceXZ(a_this);

        core_damage_check(i_this);
        core_action(i_this);

        cLib_addCalcAngleS2(&a_this->shape_angle.y, a_this->current.angle.y, 2, 0x400);
        cLib_addCalcAngleS2(&a_this->shape_angle.x, a_this->current.angle.x, 2, 0x400);

        mDoMtx_stack_c::transS(a_this->current.pos.x, a_this->current.pos.y + i_this->field_0x479c,
                               a_this->current.pos.z);
        mDoMtx_stack_c::YrotM(a_this->shape_angle.y);
        mDoMtx_stack_c::XrotM(a_this->shape_angle.x);
        mDoMtx_stack_c::scaleM(l_HIO.mCoreSize, l_HIO.mCoreSize, l_HIO.mCoreSize);
        mDoMtx_stack_c::ZrotM(a_this->shape_angle.z);
        mDoMtx_stack_c::scaleM(0.9f, 1.1f, 0.9f);
        mDoMtx_stack_c::ZrotM(-a_this->shape_angle.z);

        i_this->field_0x4740 = cM_ssin(i_this->field_0x4750 * 1000) * 9.5f + 9.5f;
        i_this->mpCoreMorf->setFrame(i_this->field_0x4740);
        i_this->mpCoreMorf->modelCalc();

        i_this->mpCoreMorf->getModel()->setBaseTRMtx(mDoMtx_stack_c::get());
        mDoMtx_stack_c::multVecZero(&sp7C);
        i_this->eyePos = sp7C;

        if (a_this->eyePos.y >= a_this->home.pos.y) {
            a_this->attention_info.position = a_this->eyePos;
            a_this->attention_info.position.y += 50.0f;
            i_this->mDrawShadow = true;
        } else {
            i_this->mDrawShadow = false;
        }

        sp7C = a_this->current.pos;

        if (i_this->mHitIFrameTimer != 0) {
            sp7C.x += 22222.0f;
        }

        i_this->mCcSph.SetC(sp7C);
        i_this->mCcSph.SetR(l_HIO.mCoreSize * 50.0f);

        dComIfG_Ccsp()->Set(&i_this->mCcSph);
        i_this->mCcSph.OffAtSetBit();

        if (!dComIfGp_event_runCheck()) {
            i_this->mCcSph.OnCoSetBit();
            i_this->mBodySph.OnCoSetBit();
        } else {
            i_this->mCcSph.OffCoSetBit();
            i_this->mBodySph.OffCoSetBit();
        }

        if (i_this->mCoreBattleMode != 0) {
            mDoMtx_stack_c::transS(a_this->home.pos.x, a_this->home.pos.y - (KREG_F(17) + 750.0f),
                                   a_this->home.pos.z);
            mDoMtx_stack_c::XrotM(-0x4000);
            mDoMtx_stack_c::scaleM(l_HIO.mBodySize, l_HIO.mBodySize, l_HIO.mBodySize);

            i_this->mBodyParts[0].mpMorf->play(NULL, 0, 0);
            i_this->mBodyParts[0].mpMorf->getModel()->setBaseTRMtx(mDoMtx_stack_c::get());
            i_this->mBodyParts[0].mpMorf->modelCalc();

            i_this->mBodySph.SetC(a_this->home.pos);
            i_this->mBodySph.SetR(TREG_F(17) + 410.0f);
            dComIfG_Ccsp()->Set(&i_this->mBodySph);
        }
    }

    if (i_this->mAnmID == OB_ANM_APPEAR && i_this->mBodyParts[0].mpMorf->getPlaySpeed() >= 0.5f) {
        J3DModel* model = i_this->mBodyParts[0].mpMorf->getModel();
        for (int i = 0; i < 5; i++) {
            int joint_no = 1;
            if (i >= 2) {
                joint_no = 0x13;
            }

            MTXCopy(model->getAnmMtx(joint_no), mDoMtx_stack_c::get());
            mDoMtx_stack_c::multVecZero(&sp7C);

            static u16 iso_eff[] = {0x87FC, 0x87FD, 0x87FE, 0x87FF, 0x8800};
            i_this->field_0x5d24[i] =
                dComIfGp_particle_set(i_this->field_0x5d24[i], iso_eff[i], &sp7C, NULL, NULL);
        }
    } else if (i_this->mAnmID == OB_ANM_EAT) {
        J3DModel* model = i_this->mBodyParts[0].mpMorf->getModel();
        MTXCopy(model->getAnmMtx(0x13), mDoMtx_stack_c::get());
        mDoMtx_stack_c::multVecZero(&sp7C);

        for (int i = 0; i < 3; i++) {
            static u16 iso_eff[] = {0x8805, 0x8806, 0x8807};
            i_this->field_0x5d24[i] =
                dComIfGp_particle_set(i_this->field_0x5d24[i], iso_eff[i], &sp7C, NULL, NULL);
        }
    } else if (i_this->mAnmID == OB_ANM_THROWUP) {
        J3DModel* model = i_this->mBodyParts[0].mpMorf->getModel();
        for (int i = 0; i < 4; i++) {
            static u16 iso_eff[] = {0x87EE, 0x87EF, 0x87F0, 0x87F1};
            i_this->field_0x5d24[i] = dComIfGp_particle_set(i_this->field_0x5d24[i], iso_eff[i],
                                                            &a_this->current.pos, NULL, NULL);

            JPABaseEmitter* emitter = dComIfGp_particle_getEmitter(i_this->field_0x5d24[i]);
            if (emitter != NULL) {
                emitter->setGlobalRTMatrix(model->getAnmMtx(0x13));
            }
        }
    }

    demo_camera(i_this);

    f32 blend_target = 0.0f;
    if (i_this->field_0x5dd8 == 0) {
        dKy_custom_colset(0, 1, i_this->mColsetBlend);
    } else if (i_this->field_0x5dd8 == 1) {
        dKy_custom_colset(0, 1, i_this->mColsetBlend);
        blend_target = 1.0f;
    } else if (i_this->field_0x5dd8 == 2) {
        dKy_custom_colset(2, 1, i_this->mColsetBlend);
    } else if (i_this->field_0x5dd8 == 3) {
        dKy_custom_colset(2, 3, i_this->mColsetBlend);
        blend_target = 1.0f;
    } else if (i_this->field_0x5dd8 == 4) {
        dKy_custom_colset(4, 4, blend_target);
    }

    cLib_addCalc2(&i_this->mColsetBlend, blend_target, 1.0f, 0.05f);

    if (i_this->field_0x5d18 != 0) {
        i_this->field_0x5d18--;
        i_this->field_0x5d38 =
            dComIfGp_particle_set(i_this->field_0x5d38, 0x8809, &a_this->current.pos, NULL, NULL);

        JPABaseEmitter* emitter = dComIfGp_particle_getEmitter(i_this->field_0x5d38);
        if (emitter != 0) {
            emitter->setGlobalRTMatrix(i_this->mBodyParts[0].mpMorf->getModel()->getAnmMtx(0));
        }
    }

    MTXCopy(i_this->mBodyParts[0].mpMorf->getModel()->getAnmMtx(0x13), mDoMtx_stack_c::get());
    mDoMtx_stack_c::multVecZero(&i_this->field_0x5be4[0]);

    MTXCopy(i_this->mBodyParts[0].mpMorf->getModel()->getAnmMtx(1), mDoMtx_stack_c::get());
    mDoMtx_stack_c::multVecZero(&i_this->field_0x5be4[1]);

    MTXCopy(i_this->mBodyParts[2].mpMorf->getModel()->getBaseTRMtx(), mDoMtx_stack_c::get());
    mDoMtx_stack_c::multVecZero(&i_this->field_0x5be4[2]);

    MTXCopy(i_this->mBodyParts[5].mpMorf->getModel()->getBaseTRMtx(), mDoMtx_stack_c::get());
    mDoMtx_stack_c::multVecZero(&i_this->field_0x5be4[3]);

    MTXCopy(i_this->mBodyParts[18].mpMorf->getModel()->getBaseTRMtx(), mDoMtx_stack_c::get());
    mDoMtx_stack_c::multVecZero(&i_this->field_0x5be4[4]);

    for (int i = 0; i < 8; i++) {
        if (i_this->mCoreBattleMode != 0) {
            b_oh_class* tentacle = (b_oh_class*)fopAcM_SearchByID(i_this->mTentacleActorIDs[i]);
            if (tentacle != NULL) {
                MTXCopy(tentacle->mpMorf->getModel()->getAnmMtx(0x19), mDoMtx_stack_c::get());
                sp70 = i_this->field_0x5be4[5 + i];
                mDoMtx_stack_c::multVecZero(&i_this->field_0x5be4[5 + i]);
                sp70 = i_this->field_0x5be4[5 + i] - sp70;

                i_this->mOISound.startTentacleSoundLevel(
                    Z2SE_EN_OI_TENT_MOVE, i, sp70.abs(), 0,
                    dComIfGp_getReverb(fopAcM_GetRoomNo(a_this)));
            }
        }
    }

    i_this->mOISound.framework(0, dComIfGp_getReverb(fopAcM_GetRoomNo(a_this)));
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daB_OB_Execute(b_ob_class* i_this) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/daB_OB_Execute__FP10b_ob_class.s"
}
#pragma pop
#endif

/* 806193B4-806193BC 008F34 0008+00 1/0 0/0 0/0 .text            daB_OB_IsDelete__FP10b_ob_class */
static int daB_OB_IsDelete(b_ob_class* i_this) {
    return 1;
}

/* 806193BC-80619438 008F3C 007C+00 1/0 0/0 0/0 .text            daB_OB_Delete__FP10b_ob_class */
static int daB_OB_Delete(b_ob_class* i_this) {
    dComIfG_resDelete(&i_this->mPhase, "B_oh");

    if (i_this->mHIOInit) {
        data_8061B4FD = 0;
    }

    if (i_this->heap != NULL) {
        i_this->mSound.stopAnime();
        i_this->mOISound.deleteObject();
    }

    return 1;
}

/* 80619438-80619C14 008FB8 07DC+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
// matches with literals
#ifdef NONMATCHING
static int useHeapInit(fopAc_ac_c* i_this) {
    b_ob_class* a_this = (b_ob_class*)i_this;

    a_this->mpCoreMorf =
        new mDoExt_McaMorfSO((J3DModelData*)dComIfG_getObjectRes("B_oh", 0x2A), NULL, NULL,
                             (J3DAnmTransform*)dComIfG_getObjectRes("B_oh", 0x11), 2, 1.0f, 0, -1,
                             &a_this->mSound, 0, 0x11000084);

    for (int i = 0; i < 19; i++) {
        static int p_bmd[] = {43, 34, 34, 34, 34, 34, 34, 34, 34, 34,
                              34, 34, 34, 34, 34, 34, 34, 34, 38};

        u32 var_r31 = 0x80000;
        if (p_bmd[i] == 43) {
            var_r31 = 0;
        }

        a_this->mBodyParts[i].mpMorf =
            new mDoExt_McaMorf((J3DModelData*)dComIfG_getObjectRes("B_oh", p_bmd[i]), NULL, NULL,
                               NULL, 2, 1.0f, 0, -1, 1, NULL, var_r31, 0x11000084);

        if (a_this->mBodyParts[i].mpMorf == NULL ||
            a_this->mBodyParts[i].mpMorf->getModel() == NULL)
        {
            return 0;
        }

        a_this->mBodyParts[i].mpMorf->getModel()->setUserArea((u32)i_this);

        for (u16 j = 0; j < a_this->mBodyParts[i].mpMorf->getModel()->getModelData()->getJointNum();
             j++)
        {
            if (p_bmd[i] == 0x2B) {
                a_this->mBodyParts[i]
                    .mpMorf->getModel()
                    ->getModelData()
                    ->getJointNodePointer(j)
                    ->setCallBack(HeadCallBack);
            } else if (p_bmd[i] == 0x26) {
                a_this->mBodyParts[i]
                    .mpMorf->getModel()
                    ->getModelData()
                    ->getJointNodePointer(j)
                    ->setCallBack(TailCallBack);
            }
        }

        if (i >= 4 && i <= 17) {
            a_this->mBodyParts[i].mpFinMorf =
                new mDoExt_McaMorf((J3DModelData*)dComIfG_getObjectRes("B_oh", 0x23), NULL, NULL,
                                   NULL, 2, 1.0f, 0, -1, 1, NULL, 0x80000, 0x11000084);

            if (a_this->mBodyParts[i].mpFinMorf == NULL ||
                a_this->mBodyParts[i].mpFinMorf->getModel() == NULL)
            {
                return 0;
            }

            a_this->mBodyParts[i].mpFinMorf->getModel()->setUserArea((u32)i_this);

            for (u16 j = 0;
                 j < a_this->mBodyParts[i].mpFinMorf->getModel()->getModelData()->getJointNum();
                 j++)
            {
                a_this->mBodyParts[i]
                    .mpFinMorf->getModel()
                    ->getModelData()
                    ->getJointNodePointer(j)
                    ->setCallBack(FinACallBack);
            }

            if (dComIfGs_isSwitch(0x1C, fopAcM_GetRoomNo(i_this))) {
                a_this->mBodyParts[i].field_0x3e = 1;
            } else {
                a_this->mBodyParts[i].mFinARot.x = 0xF060;
            }
        }

        if (i >= 7 && i <= 15) {
            a_this->mBodyParts[i].mpFinUnkMorf =
                new mDoExt_McaMorf((J3DModelData*)dComIfG_getObjectRes("B_oh", 0x23), NULL, NULL,
                                   NULL, 2, 1.0f, 0, -1, 1, NULL, 0x80000, 0x11000084);

            if (a_this->mBodyParts[i].mpFinUnkMorf == NULL ||
                a_this->mBodyParts[i].mpFinUnkMorf->getModel() == NULL)
            {
                return 0;
            }

            a_this->mBodyParts[i].mpFinUnkMorf->getModel()->setUserArea((u32)i_this);

            for (u16 j = 0;
                 j < a_this->mBodyParts[i].mpFinUnkMorf->getModel()->getModelData()->getJointNum();
                 j++)
            {
                a_this->mBodyParts[i]
                    .mpFinUnkMorf->getModel()
                    ->getModelData()
                    ->getJointNodePointer(j)
                    ->setCallBack(FinACallBack);
            }
        }

        if (i == 8) {
            a_this->mBodyParts[i].mpFinBMorf =
                new mDoExt_McaMorf((J3DModelData*)dComIfG_getObjectRes("B_oh", 0x24), NULL, NULL,
                                   NULL, 2, 1.0f, 0, -1, 1, NULL, 0x80000, 0x11000084);

            if (a_this->mBodyParts[i].mpFinBMorf == NULL ||
                a_this->mBodyParts[i].mpFinBMorf->getModel() == NULL)
            {
                return 0;
            }

            a_this->mBodyParts[i].mpFinBMorf->getModel()->setUserArea((u32)i_this);

            for (u16 j = 0;
                 j < a_this->mBodyParts[i].mpFinBMorf->getModel()->getModelData()->getJointNum();
                 j++)
            {
                a_this->mBodyParts[i]
                    .mpFinBMorf->getModel()
                    ->getModelData()
                    ->getJointNodePointer(j)
                    ->setCallBack(FinBCallBack);
            }
        }

        if (i == 17) {
            a_this->mBodyParts[i].mpFinCMorf =
                new mDoExt_McaMorf((J3DModelData*)dComIfG_getObjectRes("B_oh", 0x25), NULL, NULL,
                                   NULL, 2, 1.0f, 0, -1, 1, NULL, 0x80000, 0x11000084);

            if (a_this->mBodyParts[i].mpFinCMorf == NULL ||
                a_this->mBodyParts[i].mpFinCMorf->getModel() == NULL)
            {
                return 0;
            }

            a_this->mBodyParts[i].mpFinCMorf->getModel()->setUserArea((u32)i_this);

            for (u16 j = 0;
                 j < a_this->mBodyParts[i].mpFinCMorf->getModel()->getModelData()->getJointNum();
                 j++)
            {
                a_this->mBodyParts[i]
                    .mpFinCMorf->getModel()
                    ->getModelData()
                    ->getJointNodePointer(j)
                    ->setCallBack(FinCCallBack);
            }
        }
    }

    J3DModelData* modelData = (J3DModelData*)dComIfG_getObjectRes("B_oh", 0x21);
    JUT_ASSERT(modelData != 0);

    a_this->mpSuiModel = mDoExt_J3DModel__create(modelData, 0x80000, 0x11000284);
    if (a_this->mpSuiModel == NULL) {
        return 0;
    }

    a_this->mpSuiModel->setUserArea((u32)i_this);

    for (u16 j = 0; j < modelData->getJointNum(); j++) {
        modelData->getJointNodePointer(j)->setCallBack(sui_nodeCallBack);
    }

    a_this->mpSuiBrk = new mDoExt_brkAnm();
    if (a_this->mpSuiBrk == NULL) {
        return 0;
    }

    if (!a_this->mpSuiBrk->init(modelData, (J3DAnmTevRegKey*)dComIfG_getObjectRes("B_oh", 0x2E), TRUE, J3DFrameCtrl::LOOP_REPEAT_e, 1.0f, 0, -1)) {
        return 0;
    }

    a_this->mpSuiBtk = new mDoExt_btkAnm();
    if (a_this->mpSuiBtk == NULL) {
        return 0;
    }

    if (!a_this->mpSuiBtk->init(modelData, (J3DAnmTextureSRTKey*)dComIfG_getObjectRes("B_oh", 0x35), TRUE, J3DFrameCtrl::LOOP_REPEAT_e, 1.0f, 0, -1)) {
        return 0;
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int useHeapInit(fopAc_ac_c* i_this) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* 80619C14-80619C5C 009794 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv(){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061B08C-8061B090 000308 0004+00 0/1 0/0 0/0 .rodata          @7867 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7867 = -916.0f;
COMPILER_STRIP_GATE(0x8061B08C, &lit_7867);
#pragma pop

/* 8061B090-8061B094 00030C 0004+00 0/1 0/0 0/0 .rodata          @7868 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7868 = -23954.0f;
COMPILER_STRIP_GATE(0x8061B090, &lit_7868);
#pragma pop

/* 8061B094-8061B098 000310 0004+00 0/1 0/0 0/0 .rodata          @7869 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7869 = 8916.0f;
COMPILER_STRIP_GATE(0x8061B094, &lit_7869);
#pragma pop

/* 8061B098-8061B09C 000314 0004+00 0/1 0/0 0/0 .rodata          @7870 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7870 = 950.0f;
COMPILER_STRIP_GATE(0x8061B098, &lit_7870);
#pragma pop

/* 80619C5C-8061A0C0 0097DC 0464+00 1/0 0/0 0/0 .text            daB_OB_Create__FP10fopAc_ac_c */
// matches with literals?
#ifdef NONMATCHING
static int daB_OB_Create(fopAc_ac_c* i_this) {
    b_ob_class* a_this = (b_ob_class*)i_this;
    fopAcM_SetupActor(i_this, b_ob_class);

    OS_REPORT("B_OB//////////////B_OB SET 0 !!\n");

    int phase_state = dComIfG_resLoad(&a_this->mPhase, "B_oh");
    if (phase_state == cPhs_COMPLEATE_e) {
        if (dComIfGs_isStageBossEnemy()) {
            // "After B_OB defeated, so not re-setting\n"
            OS_REPORT("B_OB やられ後なので再セットしません\n");
            cXyz pos(-1520.0f, -23960.0f, 7100.0f);
            csXyz angle(0, 0, 0);

            fopAcM_createWarpHole(&pos, &angle, fopAcM_GetRoomNo(a_this), 0, 0, 2);

            if (!dComIfGs_isStageLife()) {
                cXyz scale(1.0f, 1.0f, 1.0f);
                pos.set(-916.0f, -23954.0f, 8916.0f);
                fopAcM_createItemForBoss(&pos, UTAWA_HEART, fopAcM_GetRoomNo(a_this),
                                         &a_this->shape_angle, &scale, 0.0f, 0.0f, -1);
            }

            return cPhs_ERROR_e;
        }

        OS_REPORT("B_OB PARAM %x\n", fopAcM_GetParam(a_this));
        a_this->shape_angle.z = 0;
        a_this->current.angle.z = 0;
        OS_REPORT("B_OB//////////////B_OB SET 1 !!\n");

        if (!fopAcM_entrySolidHeap(a_this, useHeapInit, 0x1F6A0)) {
            OS_REPORT("//////////////B_OB SET NON !!\n");
            return cPhs_ERROR_e;
        }

        OS_REPORT("//////////////B_OB SET 2 !!\n");

        if (!data_8061B4FD) {
            a_this->mHIOInit = 1;
            data_8061B4FD = true;
            l_HIO.field_0x04 = -1;
        }

        a_this->health = 30;
        a_this->field_0x560 = 30;
        a_this->mTimers[0] = 30;
        a_this->field_0x4790 = 1;

        static dCcD_SrcSph cc_sph_src = {
            {
                {0x0, {{AT_TYPE_CSTATUE_SWING, 0x2, 0xd}, {0xd8fbfdff, 0x3}, 0x75}},  // mObj
                {dCcD_SE_METAL, 0x0, 0x2, 0x0, 0x0},                                  // mGObjAt
                {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2},                                   // mGObjTg
                {0x0},                                                                // mGObjCo
            },                                                                        // mObjInf
            {
                {{0.0f, 0.0f, 0.0f}, 50.0f}  // mSph
            }  // mSphAttr
        };

        static dCcD_SrcSph body_sph_src = {
            {
                {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x75}},  // mObj
                {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0},                 // mGObjAt
                {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x3},                 // mGObjTg
                {0x0},                                              // mGObjCo
            },                                                      // mObjInf
            {
                {{0.0f, 0.0f, 0.0f}, 60.0f}  // mSph
            }  // mSphAttr
        };

        static dCcD_SrcSph parts_sph_src = {
            {
                {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x75}},  // mObj
                {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0},                 // mGObjAt
                {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x3},                 // mGObjTg
                {0x0},                                              // mGObjCo
            },                                                      // mObjInf
            {
                {{0.0f, 0.0f, 0.0f}, 60.0f}  // mSph
            }  // mSphAttr
        };

        static dCcD_SrcSph core_sph_src = {
            {
                {0x0, {{0x0, 0x0, 0x0}, {0x4002, 0x3}, 0x75}},  // mObj
                {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0},             // mGObjAt
                {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2},             // mGObjTg
                {0x0},                                          // mGObjCo
            },                                                  // mObjInf
            {
                {{0.0f, 0.0f, 0.0f}, 50.0f}  // mSph
            }  // mSphAttr
        };

        a_this->mCoreCcStts.Init(100, 0, i_this);
        a_this->mCcSph.Set(cc_sph_src);
        a_this->mCcSph.SetStts(&a_this->mCoreCcStts);

        a_this->mCoreSph.Set(core_sph_src);
        a_this->mCoreSph.SetStts(&a_this->mCoreCcStts);

        a_this->mBodyCcStts.Init(0xFF, 0, i_this);
        a_this->mBodySph.Set(body_sph_src);
        a_this->mBodySph.SetStts(&a_this->mBodyCcStts);

        for (int i = 0; i < 19; i++) {
            a_this->mBodyParts[i].mSph.Set(parts_sph_src);
            a_this->mBodyParts[i].mSph.SetStts(&a_this->mBodyCcStts);
            a_this->mBodyParts[i].mSph.OnTgShield();
            a_this->mBodyParts[i].mSph.SetTgHitMark(CcG_Tg_UNK_MARK_2);
        }

        a_this->mFishHeadSph.Set(parts_sph_src);
        a_this->mFishHeadSph.SetStts(&a_this->mBodyCcStts);
        a_this->mFishHeadSph.OnTgShield();
        a_this->mFishHeadSph.SetTgHitMark(CcG_Tg_UNK_MARK_2);

        a_this->mAcch.Set(fopAcM_GetPosition_p(i_this), fopAcM_GetOldPosition_p(i_this), i_this, 1,
                          &a_this->mAcchCir, fopAcM_GetSpeed_p(i_this), NULL, NULL);
        a_this->mAcchCir.SetWall(300.0f, KREG_F(12) + 950.0f);
        a_this->mCoreBattleMode = 1;

        if (cDmr_SkipInfo != 0) {
            a_this->mAction = OB_ACTION_CORE_HAND_MOVE;
            Z2GetAudioMgr()->bgmStart(Z2BGM_BOSS_OCTAEEL_0, 0, 0);
            dComIfGs_onOneZoneSwitch(5, -1);
        } else {
            a_this->mAction = OB_ACTION_CORE_START;
        }

        for (int i = 0; i < 8; i++) {
            a_this->mTentacleActorIDs[i] =
                fopAcM_createChild(PROC_B_OH, fopAcM_GetID(i_this), i, &i_this->current.pos,
                                   fopAcM_GetRoomNo(i_this), NULL, NULL, -1, NULL);
        }

        for (int i = 0; i < 0x200; i++) {
            a_this->field_0x2324[i].set(0.0f, i_this->home.pos.y - 10000.0f, 0.0f);
        }

        moveSW = true;
        moveSW2 = false;
        a_this->field_0x47a0 = i_this->home.pos.y;

        a_this->mSound.init(&i_this->current.pos, &i_this->eyePos, 3, 1);
        a_this->mAtInfo.mpSound = &a_this->mSound;
        a_this->mOISound.init(
            &a_this->field_0x5be4[0], &a_this->field_0x5be4[1], &a_this->field_0x5be4[2],
            &a_this->field_0x5be4[3], &a_this->field_0x5be4[4], &a_this->field_0x5be4[5],
            &a_this->field_0x5be4[6], &a_this->field_0x5be4[7], &a_this->field_0x5be4[8],
            &a_this->field_0x5be4[9], &a_this->field_0x5be4[10], &a_this->field_0x5be4[11],
            &a_this->field_0x5be4[12]);
        a_this->field_0x5d04 = 0.7f;

        daB_OB_Execute(a_this);
    }

    return phase_state;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daB_OB_Create(fopAc_ac_c* i_this) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/daB_OB_Create__FP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* 8061A0C0-8061A3A0 009C40 02E0+00 1/1 0/0 0/0 .text            __ct__10b_ob_classFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm b_ob_class::b_ob_class() {
extern "C" asm void __ct__10b_ob_classFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__ct__10b_ob_classFv.s"
}
#pragma pop

/* 8061A3A0-8061A41C 009F20 007C+00 1/1 0/0 0/0 .text            __dt__7ob_ke_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm ob_ke_s::~ob_ke_s() {
extern "C" asm void __dt__7ob_ke_sFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__dt__7ob_ke_sFv.s"
}
#pragma pop

/* 8061A41C-8061A484 009F9C 0068+00 1/1 0/0 0/0 .text            __ct__7ob_ke_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm ob_ke_s::ob_ke_s() {
extern "C" asm void __ct__7ob_ke_sFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__ct__7ob_ke_sFv.s"
}
#pragma pop

/* 8061A484-8061A4F4 00A004 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 8061A4F4-8061A564 00A074 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 8061A564-8061A5AC 00A0E4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 8061A5AC-8061A5F4 00A12C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8061A5F4-8061A650 00A174 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 8061A650-8061A654 00A1D0 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" void __ct__5csXyzFv() {
    /* empty function */
}

/* 8061A654-8061A658 00A1D4 0004+00 2/2 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 8061A658-8061A72C 00A1D8 00D4+00 1/1 0/0 0/0 .text            __dt__9ob_part_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm ob_part_s::~ob_part_s() {
extern "C" asm void __dt__9ob_part_sFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__dt__9ob_part_sFv.s"
}
#pragma pop

/* 8061A72C-8061A7C0 00A2AC 0094+00 1/1 0/0 0/0 .text            __ct__9ob_part_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm ob_part_s::ob_part_s() {
extern "C" asm void __ct__9ob_part_sFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__ct__9ob_part_sFv.s"
}
#pragma pop

/* 8061A7C0-8061A808 00A340 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 8061A808-8061A850 00A388 0048+00 2/1 0/0 0/0 .text            __dt__12daB_OB_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daB_OB_HIO_c::~daB_OB_HIO_c() {
extern "C" asm void __dt__12daB_OB_HIO_cFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__dt__12daB_OB_HIO_cFv.s"
}
#pragma pop

/* 8061A850-8061A88C 00A3D0 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_b_ob_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_b_ob_cpp(){nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__sinit_d_a_b_ob_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8061A850, __sinit_d_a_b_ob_cpp);
#pragma pop

/* 8061A88C-8061A894 00A40C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8061A88C() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/func_8061A88C.s"
}
#pragma pop

/* 8061A894-8061A89C 00A414 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8061A894() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/func_8061A894.s"
}
#pragma pop

/* 8061A89C-8061A8B0 00A41C 0014+00 1/1 0/0 0/0 .text            cancelOriginalDemo__9daPy_py_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void cancelOriginalDemo__9daPy_py_cFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/cancelOriginalDemo__9daPy_py_cFv.s"
}
#pragma pop

/* 8061A8B0-8061A8DC 00A430 002C+00 1/1 0/0 0/0 .text            dComIfGp_event_reset__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dComIfGp_event_reset__Fv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/dComIfGp_event_reset__Fv.s"
}
#pragma pop

/* 8061A8DC-8061A924 00A45C 0048+00 1/1 0/0 0/0 .text            dComIfGs_onStageBossEnemy__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void dComIfGs_onStageBossEnemy() {
extern "C" asm void dComIfGs_onStageBossEnemy__Fv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/dComIfGs_onStageBossEnemy__Fv.s"
}
#pragma pop

/* 8061A924-8061A948 00A4A4 0024+00 1/1 0/0 0/0 .text            multVecZero__14mDoMtx_stack_cFP3Vec
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void mDoMtx_stack_c::multVecZero(Vec* param_0) {
extern "C" asm void multVecZero__14mDoMtx_stack_cFP3Vec() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/multVecZero__14mDoMtx_stack_cFP3Vec.s"
}
#pragma pop

/* 8061A948-8061A95C 00A4C8 0014+00 1/1 0/0 0/0 .text            getAnmMtx__8J3DModelFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void J3DModel::getAnmMtx(int param_0) {
extern "C" asm void getAnmMtx__8J3DModelFi() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/getAnmMtx__8J3DModelFi.s"
}
#pragma pop

/* 8061A95C-8061A990 00A4DC 0034+00 1/1 0/0 0/0 .text            __apl__4cXyzFRC3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void cXyz::operator+=(Vec const& param_0) {
extern "C" asm void __apl__4cXyzFRC3Vec() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__apl__4cXyzFRC3Vec.s"
}
#pragma pop

/* 8061A990-8061A9AC 00A510 001C+00 1/1 0/0 0/0 .text            __as__5csXyzFRC5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void csXyz::operator=(csXyz const& param_0) {
extern "C" asm void __as__5csXyzFRC5csXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__as__5csXyzFRC5csXyz.s"
}
#pragma pop

/* 8061A9AC-8061A9C8 00A52C 001C+00 1/1 0/0 0/0 .text            __as__4cXyzFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void cXyz::operator=(cXyz const& param_0) {
extern "C" asm void __as__4cXyzFRC4cXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__as__4cXyzFRC4cXyz.s"
}
#pragma pop

/* 8061A9C8-8061A9DC 00A548 0014+00 1/1 0/0 0/0 .text            changeDemoMode__9daPy_py_cFUliis */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void changeDemoMode__9daPy_py_cFUliis() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/changeDemoMode__9daPy_py_cFUliis.s"
}
#pragma pop

/* 8061A9DC-8061A9F0 00A55C 0014+00 1/1 0/0 0/0 .text            changeOriginalDemo__9daPy_py_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void changeOriginalDemo__9daPy_py_cFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/changeOriginalDemo__9daPy_py_cFv.s"
}
#pragma pop

/* 8061A9F0-8061AA00 00A570 0010+00 1/1 0/0 0/0 .text            daPy_getPlayerActorClass__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void daPy_getPlayerActorClass() {
extern "C" asm void daPy_getPlayerActorClass__Fv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/daPy_getPlayerActorClass__Fv.s"
}
#pragma pop

/* 8061AA00-8061AA10 00A580 0010+00 1/1 0/0 0/0 .text            onCondition__11dEvt_info_cFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void dEvt_info_c::onCondition(u16 param_0) {
extern "C" asm void onCondition__11dEvt_info_cFUs() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/onCondition__11dEvt_info_cFUs.s"
}
#pragma pop

/* 8061AA10-8061AA24 00A590 0014+00 1/1 0/0 0/0 .text checkCommandDemoAccrpt__11dEvt_info_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void dEvt_info_c::checkCommandDemoAccrpt() {
extern "C" asm void checkCommandDemoAccrpt__11dEvt_info_cFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/checkCommandDemoAccrpt__11dEvt_info_cFv.s"
}
#pragma pop

/* 8061AA24-8061AA3C 00A5A4 0018+00 1/1 0/0 0/0 .text            dComIfGp_getCamera__Fi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void dComIfGp_getCamera(int param_0) {
extern "C" asm void dComIfGp_getCamera__Fi() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/dComIfGp_getCamera__Fi.s"
}
#pragma pop

/* 8061AA3C-8061AA58 00A5BC 001C+00 1/1 0/0 0/0 .text            dComIfGp_getPlayerCameraID__Fi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void dComIfGp_getPlayerCameraID(int param_0) {
extern "C" asm void dComIfGp_getPlayerCameraID__Fi() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/dComIfGp_getPlayerCameraID__Fi.s"
}
#pragma pop

/* 8061AA58-8061AA70 00A5D8 0018+00 1/1 0/0 0/0 .text            dComIfGp_getPlayer__Fi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void dComIfGp_getPlayer(int param_0) {
extern "C" asm void dComIfGp_getPlayer__Fi() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/dComIfGp_getPlayer__Fi.s"
}
#pragma pop

/* 8061AA70-8061AA8C 00A5F0 001C+00 1/1 0/0 0/0 .text setCurrentPos__16obj_ystone_classF4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void obj_ystone_class::setCurrentPos(cXyz param_0) {
extern "C" asm void setCurrentPos__16obj_ystone_classF4cXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/setCurrentPos__16obj_ystone_classF4cXyz.s"
}
#pragma pop

/* 8061AA8C-8061AAA8 00A60C 001C+00 1/1 0/0 0/0 .text            __ct__4cXyzFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::cXyz(cXyz const& param_0) {
extern "C" asm void __ct__4cXyzFRC4cXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__ct__4cXyzFRC4cXyz.s"
}
#pragma pop

/* 8061AAA8-8061AAB8 00A628 0010+00 1/1 0/0 0/0 .text becomeDeleteEmitter__14JPABaseEmitterFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void JPABaseEmitter::becomeDeleteEmitter() {
extern "C" asm void becomeDeleteEmitter__14JPABaseEmitterFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/becomeDeleteEmitter__14JPABaseEmitterFv.s"
}
#pragma pop

/* 8061AAB8-8061AACC 00A638 0014+00 1/1 0/0 0/0 .text            __ct__5csXyzFRC5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm csXyz::csXyz(csXyz const& param_0) {
extern "C" asm void __ct__5csXyzFRC5csXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__ct__5csXyzFRC5csXyz.s"
}
#pragma pop

/* 8061AACC-8061AAD8 00A64C 000C+00 1/1 0/0 0/0 .text            fabsf__3stdFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void std::fabsf(f32 param_0) {
extern "C" asm void fabsf__3stdFf() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/fabsf__3stdFf.s"
}
#pragma pop

/* 8061AAD8-8061AB4C 00A658 0074+00 1/1 0/0 0/0 .text
 * dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
/* static asm void dComIfGp_particle_set(u16 param_0, cXyz const* param_1, csXyz const* param_2,
                                      cXyz const* param_3) { */
extern "C" asm void dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz.s"
}
#pragma pop

/* 8061AB4C-8061AB54 00A6CC 0008+00 1/1 0/0 0/0 .text            setPlaySpeed__13mDoExt_morf_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void mDoExt_morf_c::setPlaySpeed(f32 param_0) {
extern "C" asm void setPlaySpeed__13mDoExt_morf_cFf() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/setPlaySpeed__13mDoExt_morf_cFf.s"
}
#pragma pop

/* 8061AB54-8061AB80 00A6D4 002C+00 1/1 0/0 0/0 .text startCheckSkipEdge__14dEvt_control_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void dEvt_control_c::startCheckSkipEdge(void* param_0) {
extern "C" asm void startCheckSkipEdge__14dEvt_control_cFPv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/startCheckSkipEdge__14dEvt_control_cFPv.s"
}
#pragma pop

/* 8061AB80-8061AB90 00A700 0010+00 1/1 0/0 0/0 .text            dComIfGp_getEvent__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void dComIfGp_getEvent() {
extern "C" asm void dComIfGp_getEvent__Fv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/dComIfGp_getEvent__Fv.s"
}
#pragma pop

/* 8061AB90-8061ABF4 00A710 0064+00 1/1 0/0 0/0 .text            mDoAud_seStart__FUlPC3VecUlSc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void mDoAud_seStart(u32 param_0, Vec const* param_1, u32 param_2, s8 param_3) {
extern "C" asm void mDoAud_seStart__FUlPC3VecUlSc() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/mDoAud_seStart__FUlPC3VecUlSc.s"
}
#pragma pop

/* 8061ABF4-8061AC04 00A774 0010+00 1/1 0/0 0/0 .text            set__4cXyzFfff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void cXyz::set(f32 param_0, f32 param_1, f32 param_2) {
extern "C" asm void set__4cXyzFfff() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/set__4cXyzFfff.s"
}
#pragma pop

/* 8061AC04-8061AC0C -00001 0008+00 0/0 0/0 0/0 .text            __ct__10JAISoundIDFUl */
// JAISoundID::JAISoundID(u32 param_0) {
extern "C" void __ct__10JAISoundIDFUl(JAISoundID* this_, u32 param_0) {
    *(u32*)this_ = (u32)(param_0);
}

/* 8061AC0C-8061AD20 00A78C 0114+00 1/1 0/0 0/0 .text            abs__4cXyzCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void cXyz::abs() const {
extern "C" asm void abs__4cXyzCFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/abs__4cXyzCFv.s"
}
#pragma pop

/* 8061AD20-8061AD50 00A8A0 0030+00 1/1 0/0 0/0 .text            isStop__13mDoExt_morf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void mDoExt_morf_c::isStop() {
extern "C" asm void isStop__13mDoExt_morf_cFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/isStop__13mDoExt_morf_cFv.s"
}
#pragma pop

/* 8061AD50-8061AD60 00A8D0 0010+00 1/1 0/0 0/0 .text            dComIfGp_getVibration__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void dComIfGp_getVibration() {
extern "C" asm void dComIfGp_getVibration__Fv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/dComIfGp_getVibration__Fv.s"
}
#pragma pop

/* 8061AD60-8061AD70 00A8E0 0010+00 1/1 0/0 0/0 .text            __ct__4cXyzFfff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::cXyz(f32 param_0, f32 param_1, f32 param_2) {
extern "C" asm void __ct__4cXyzFfff() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/d_a_b_ob/__ct__4cXyzFfff.s"
}
#pragma pop

/* ############################################################################################## */
/* 8061B5A4-8061B5B4 0000EC 000C+04 0/0 0/0 0/0 .bss             @6147 */
#pragma push
#pragma force_active on
static u8 lit_6147[12 + 4 /* padding */];
#pragma pop

/* 8061B5B4-8061B5C0 0000FC 000C+00 0/0 0/0 0/0 .bss             room_pos$6146 */
#pragma push
#pragma force_active on
static u8 room_pos[12];
#pragma pop

/* 8061B5C0-8061B5D0 000108 000C+04 0/0 0/0 0/0 .bss             @6151 */
#pragma push
#pragma force_active on
static u8 lit_6151[12 + 4 /* padding */];
#pragma pop

/* 8061B5D0-8061B5DC 000118 000C+00 0/0 0/0 0/0 .bss             sc$6150 */
#pragma push
#pragma force_active on
static u8 sc[12];
#pragma pop

/* 8061B5DC-8061B5E0 000124 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8061B5DC[4];
#pragma pop

/* 8061B5E0-8061B5E4 000128 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_8061B5E0[4];
#pragma pop

/* 8061B5E4-8061B5E8 00012C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_8061B5E4[4];
#pragma pop

/* 8061B5E8-8061B5EC 000130 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8061B5E8[4];
#pragma pop

/* 8061B5EC-8061B5F0 000134 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8061B5EC[4];
#pragma pop

/* 8061B5F0-8061B5F4 000138 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8061B5F0[4];
#pragma pop

/* 8061B5F4-8061B5F8 00013C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_8061B5F4[4];
#pragma pop

/* 8061B5F8-8061B5FC 000140 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_8061B5F8[4];
#pragma pop

/* 8061B5FC-8061B600 000144 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8061B5FC[4];
#pragma pop

/* 8061B600-8061B604 000148 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_8061B600[4];
#pragma pop

/* 8061B604-8061B608 00014C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_8061B604[4];
#pragma pop

/* 8061B608-8061B60C 000150 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8061B608[4];
#pragma pop

/* 8061B60C-8061B610 000154 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8061B60C[4];
#pragma pop

/* 8061B610-8061B614 000158 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8061B610[4];
#pragma pop

/* 8061B614-8061B618 00015C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8061B614[4];
#pragma pop

/* 8061B618-8061B61C 000160 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_8061B618[4];
#pragma pop

/* 8061B61C-8061B620 000164 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8061B61C[4];
#pragma pop

/* 8061B620-8061B624 000168 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8061B620[4];
#pragma pop

/* 8061B624-8061B628 00016C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_8061B624[4];
#pragma pop

/* 8061B628-8061B62C 000170 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_8061B628[4];
#pragma pop

/* 8061B62C-8061B630 000174 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8061B62C[4];
#pragma pop

/* 8061B630-8061B634 000178 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8061B630[4];
#pragma pop

/* 8061B634-8061B638 00017C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8061B634[4];
#pragma pop

/* 8061B638-8061B63C 000180 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8061B638[4];
#pragma pop

/* 8061B63C-8061B640 000184 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8061B63C[4];
#pragma pop
