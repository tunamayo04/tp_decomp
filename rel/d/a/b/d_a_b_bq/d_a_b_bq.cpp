/**
 * @file d_a_b_bq.cpp
 * 
*/

#include "rel/d/a/b/d_a_b_bq/d_a_b_bq.h"
#include "SSystem/SComponent/c_phase.h"
#include "d/com/d_com_inf_game.h"
#include "dol2asm.h"
#include "rel/d/a/obj/d_a_obj_ystone/d_a_obj_ystone.h"



//
// Forward References:
//

extern "C" void __ct__12daB_BQ_HIO_cFv();
extern "C" static void anm_init__FP10b_bq_classifUcf();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daB_BQ_Draw__FP10b_bq_class();
extern "C" static void s_fw_sub0__FPvPv();
extern "C" static void s_fw_sub1__FPvPv();
extern "C" void __dt__4cXyzFv();
extern "C" static void s_fw_sub2__FPvPv();
extern "C" static void s_fw_del_sub__FPvPv();
extern "C" static void s_bi_del_sub__FPvPv();
extern "C" static void damage_check__FP10b_bq_class();
extern "C" static void b_bq_stay__FP10b_bq_class();
extern "C" static void b_bq_wait__FP10b_bq_class();
extern "C" static void b_bq_damage__FP10b_bq_class();
extern "C" static void b_bq_attack__FP10b_bq_class();
extern "C" static void b_bq_end__FP10b_bq_class();
extern "C" static void action__FP10b_bq_class();
extern "C" static void anm_se_set__FP10b_bq_class();
extern "C" static void cam_3d_morf__FP10b_bq_classf();
extern "C" static void fish_set__FP10b_bq_class();
extern "C" static void demo_camera__FP10b_bq_class();
extern "C" void GetCross__11cBgS_LinChkFv();
extern "C" static void cM_scos__Fs();
extern "C" static void daB_BQ_Execute__FP10b_bq_class();
extern "C" static bool daB_BQ_IsDelete__FP10b_bq_class();
extern "C" static void daB_BQ_Delete__FP10b_bq_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daB_BQ_Create__FP10fopAc_ac_c();
extern "C" void __ct__10b_bq_classFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daB_BQ_HIO_cFv();
extern "C" void __sinit_d_a_b_bq_cpp();
extern "C" void cancelOriginalDemo__9daPy_py_cFv();
extern "C" static void dComIfGp_event_reset__Fv();
extern "C" void checkSkipEdge__14dEvt_control_cFv();
extern "C" static void fopAcM_GetParam__FPCv();
extern "C" static void dComIfGs_onStageBossEnemy__Fv();
extern "C" void __dt__5csXyzFv();
extern "C" void set__4cXyzFfff();
extern "C" void __as__4cXyzFRC4cXyz();
extern "C" void changeDemoMode__9daPy_py_cFUliis();
extern "C" void changeOriginalDemo__9daPy_py_cFv();
extern "C" static void daPy_getPlayerActorClass__Fv();
extern "C" void onCondition__11dEvt_info_cFUs();
extern "C" void checkCommandDemoAccrpt__11dEvt_info_cFv();
extern "C" static void dComIfGp_getPlayer__Fi();
extern "C" static void dComIfGp_getCamera__Fi();
extern "C" static void dComIfGp_getPlayerCameraID__Fi();
extern "C" void setCurrentPos__16obj_ystone_classF4cXyz();
extern "C" void __ct__4cXyzFRC4cXyz();
extern "C" void __ct__10JAISoundIDFUl();
extern "C" static void dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz();
extern "C" void setBaseTRMtx__8J3DModelFPA4_f();
extern "C" void multVecZero__14mDoMtx_stack_cFP3Vec();
extern "C" void getAnmMtx__8J3DModelFi();
extern "C" static void mDoAud_seStart__FUlPC3VecUlSc();
extern "C" static void cM_ssin__Fs();
extern "C" void abs__4cXyzCFv();
extern "C" void fabsf__3stdFf();
extern "C" void startCheckSkipEdge__14dEvt_control_cFPv();
extern "C" static void dComIfGp_getEvent__Fv();
extern "C" static void dComIfGp_getVibration__Fv();
extern "C" void __ct__4cXyzFfff();
extern "C" void __apl__4cXyzFRC3Vec();
extern "C" extern char const* const d_a_b_bq__stringBase0;

//
// External References:
//

extern "C" void onBlure__13mDoGph_gInf_cFv();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
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
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_createItemForBoss__FPC4cXyziiPC5csXyzPC4cXyzffi();
extern "C" void fopAcM_createWarpHole__FPC4cXyzPC5csXyziUcUcUc();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fopMsgM_messageSetDemo__FUl();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_BossLife_public_Set__FSc();
extern "C" void dComIfGs_onOneZoneSwitch__Fii();
extern "C" void onDungeonItem__12dSv_memBit_cFi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void dEv_noFinishSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void forceOnEventMove__Q213dPa_control_c7level_cFUl();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzsf();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_custom_colset__FUcUcf();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxScale__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void func_802807E0();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void bgmStart__8Z2SeqMgrFUlUll();
extern "C" void bgmStop__8Z2SeqMgrFUll();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void subBgmStop__8Z2SeqMgrFv();
extern "C" void bgmStreamPrepare__8Z2SeqMgrFUl();
extern "C" void bgmStreamPlay__8Z2SeqMgrFv();
extern "C" void changeBgmStatus__8Z2SeqMgrFl();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __construct_array();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u8 mBlureFlag__13mDoGph_gInf_c[4];
extern "C" extern u8 struct_80450C98[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 805BA588-805BA58C 000000 0004+00 18/18 0/0 0/0 .rodata          @3816 */
SECTION_RODATA static f32 const lit_3816 = 1.0f;
COMPILER_STRIP_GATE(0x805BA588, &lit_3816);

/* 805BA874-805BA880 000000 000C+00 2/2 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 805BA880-805BA894 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 805BA894-805BA93C -00001 00A8+00 1/1 0/0 0/0 .data            @4431 */
SECTION_DATA static void* lit_4431[42] = {
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x48),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x7C),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x220),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x278),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x298),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x2EC),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x394),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x3CC),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x414),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x484),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x44C),
    (void*)(((char*)b_bq_damage__FP10b_bq_class) + 0x45C),
};

/* 805BA93C-805BA944 0000C8 0008+00 1/1 0/0 0/0 .data            fireno$4463 */
SECTION_DATA static u8 fireno_4463[8] = {
    0x82, 0xD6, 0x82, 0xD7, 0x82, 0xD8, 0x82, 0xDF,
};

/* 805BA944-805BA948 0000D0 0004+00 1/1 0/0 0/0 .data            fireno$4473 */
SECTION_DATA static u8 fireno_4473[4] = {
    0x82,
    0xD4,
    0x82,
    0xD5,
};

/* 805BA948-805BA970 0000D4 0026+02 0/1 0/0 0/0 .data            g_e_i$4867 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 g_e_i_4867[38 + 2 /* padding */] = {
    0x82,
    0xFD,
    0x82,
    0xFE,
    0x82,
    0xFF,
    0x83,
    0x00,
    0x83,
    0x01,
    0x83,
    0x02,
    0x83,
    0x03,
    0x83,
    0x04,
    0x83,
    0x11,
    0x83,
    0x12,
    0x83,
    0x13,
    0x83,
    0x14,
    0x83,
    0x15,
    0x83,
    0x16,
    0x83,
    0x17,
    0x83,
    0x18,
    0x83,
    0x19,
    0x83,
    0x1A,
    0x83,
    0x1B,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 805BA970-805BA988 0000FC 0018+00 0/1 0/0 0/0 .data            g_d_i$4873 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 g_d_i[24] = {
    0x83, 0x05, 0x83, 0x0B, 0x83, 0x06, 0x83, 0x0C, 0x83, 0x07, 0x83, 0x0D,
    0x83, 0x08, 0x83, 0x0E, 0x83, 0x09, 0x83, 0x0F, 0x83, 0x0A, 0x83, 0x10,
};
#pragma pop

/* 805BA988-805BA9B8 000114 0030+00 0/1 0/0 0/0 .data            g_k_ji$4874 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 g_k_ji[48] = {
    0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x29,
    0x00, 0x00, 0x00, 0x2A, 0x00, 0x00, 0x00, 0x2A, 0x00, 0x00, 0x00, 0x2B, 0x00, 0x00, 0x00, 0x2B,
    0x00, 0x00, 0x00, 0x2C, 0x00, 0x00, 0x00, 0x2C, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x00, 0x2D,
};
#pragma pop

/* 805BA9B8-805BA9C4 000144 000A+02 0/1 0/0 0/0 .data            g_y_i$4885 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 g_y_i[10 + 2 /* padding */] = {
    0x83,
    0x27,
    0x83,
    0x28,
    0x83,
    0x29,
    0x83,
    0x2A,
    0x83,
    0x26,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 805BA9C4-805BA9D8 000150 0014+00 0/1 0/0 0/0 .data            g_y_ji$4886 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 g_y_ji[20] = {
    0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00,
    0x00, 0x3B, 0x00, 0x00, 0x00, 0x3D, 0x00, 0x00, 0x00, 0x2F,
};
#pragma pop

/* 805BA9D8-805BAA00 000164 0026+02 0/1 0/0 0/0 .data            g_c_i$4896 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 g_c_i[38 + 2 /* padding */] = {
    0x83,
    0xF0,
    0x83,
    0xF1,
    0x83,
    0xF2,
    0x83,
    0xF3,
    0x83,
    0xF4,
    0x83,
    0xF5,
    0x83,
    0xF6,
    0x83,
    0xF7,
    0x83,
    0xF8,
    0x83,
    0xF9,
    0x83,
    0xFA,
    0x83,
    0xFB,
    0x83,
    0xFC,
    0x83,
    0xFD,
    0x83,
    0xFE,
    0x83,
    0xFF,
    0x84,
    0x00,
    0x84,
    0x01,
    0x84,
    0x02,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 805BAA00-805BAA4C 00018C 004C+00 0/1 0/0 0/0 .data            g_c_ji$4897 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 g_c_ji[76] = {
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x27,
    0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x2A, 0x00, 0x00, 0x00, 0x2B,
    0x00, 0x00, 0x00, 0x2C, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x30,
    0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x2A,
    0x00, 0x00, 0x00, 0x2B, 0x00, 0x00, 0x00, 0x2C, 0x00, 0x00, 0x00, 0x2D,
};
#pragma pop

/* 805BAA4C-805BAA64 0001D8 0018+00 1/1 0/0 0/0 .data            lf_pos$5269 */
SECTION_DATA static u8 lf_pos[24] = {
    0x14, 0x00, 0x00, 0x00, 0xC4, 0x7A, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00, 0x44, 0x7A, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};

/* 805BAA64-805BAA74 0001F0 000E+02 1/1 0/0 0/0 .data            g_b_i$5487 */
SECTION_DATA static u8 g_b_i[14 + 2 /* padding */] = {
    0x83,
    0x1C,
    0x83,
    0x1D,
    0x83,
    0x1E,
    0x83,
    0x1F,
    0x83,
    0x20,
    0x83,
    0x21,
    0x83,
    0x69,
    /* padding */
    0x00,
    0x00,
};

/* 805BAA74-805BAA80 000200 000A+02 1/1 0/0 0/0 .data            g_e_i$5525 */
SECTION_DATA static u8 g_e_i_5525[10 + 2 /* padding */] = {
    0x83,
    0xEB,
    0x83,
    0xEC,
    0x83,
    0xED,
    0x83,
    0xEE,
    0x83,
    0xEF,
    /* padding */
    0x00,
    0x00,
};

/* 805BAA80-805BAB5C -00001 00DC+00 1/1 0/0 0/0 .data            @6076 */
SECTION_DATA static void* lit_6076[55] = {
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0xC0),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0xD0),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x1F8),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x404),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x7F0),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x8B0),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0xB5C),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0xC14),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0xF30),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0xFB0),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0xFC0),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x10B4),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x121C),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x12F4),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x12FC),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x12FC),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x14CC),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x1578),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2338),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x15F8),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x1794),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x1C9C),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x2090),
    (void*)(((char*)demo_camera__FP10b_bq_class) + 0x21C4),
};

/* 805BAB5C-805BAB64 0002E8 0008+00 1/1 0/0 0/0 .data            takino$6250 */
SECTION_DATA static u8 takino[8] = {
    0x83, 0x59, 0x83, 0x5A, 0x83, 0x5B, 0x83, 0x5C,
};

/* 805BAB64-805BAB6C 0002F0 0008+00 1/1 0/0 0/0 .data            takino2$6251 */
SECTION_DATA static u8 takino2[8] = {
    0x84, 0x2D, 0x84, 0x2E, 0x84, 0x2F, 0x84, 0x30,
};

/* 805BAB6C-805BABAC 0002F8 0040+00 0/1 0/0 0/0 .data            cc_sph_src$6538 */
#pragma push
#pragma force_active on
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x75}},  // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0},                 // mGObjAt
        {dCcD_SE_HARD_BODY, 0x0, 0x0, 0x0, 0x2},            // mGObjTg
        {0x0},                                              // mGObjCo
    },                                                      // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f}  // mSph
    }                                // mSphAttr
};
#pragma pop

/* 805BABAC-805BABEC 000338 0040+00 0/1 0/0 0/0 .data            core_sph_src$6539 */
#pragma push
#pragma force_active on
static dCcD_SrcSph core_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x0}},  // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0},                // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2},                // mGObjTg
        {0x0},                                             // mGObjCo
    },                                                     // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f}  // mSph
    }                                // mSphAttr
};
#pragma pop

/* 805BABEC-805BAC2C 000378 0040+00 0/1 0/0 0/0 .data            core_co_sph_src$6540 */
#pragma push
#pragma force_active on
static dCcD_SrcSph core_co_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x0, 0x0}, 0x75}},  // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0},          // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2},          // mGObjTg
        {0x0},                                       // mGObjCo
    },                                               // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 60.0f}  // mSph
    }                                // mSphAttr
};
#pragma pop

/* 805BAC2C-805BAC6C 0003B8 0040+00 0/1 0/0 0/0 .data            body_co_sph_src$6541 */
#pragma push
#pragma force_active on
static dCcD_SrcSph body_co_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x0, 0x0}, 0x75}},  // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0},          // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2},          // mGObjTg
        {0x0},                                       // mGObjCo
    },                                               // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 60.0f}  // mSph
    }                                // mSphAttr
};
#pragma pop

/* 805BAC6C-805BACAC 0003F8 0040+00 0/1 0/0 0/0 .data            mizu_sph_src$6542 */
#pragma push
#pragma force_active on
static dCcD_SrcSph mizu_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x2, 0xd}, {0x0, 0x0}, 0x0}},  // mObj
        {dCcD_SE_SOFT_BODY, 0x0, 0xd, 0x0, 0x0},                      // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2},                           // mGObjTg
        {0x0},                                                        // mGObjCo
    },                                                                // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 35.0f}  // mSph
    }                                // mSphAttr
};
#pragma pop

/* 805BACAC-805BACCC -00001 0020+00 1/0 0/0 0/0 .data            l_daB_BQ_Method */
static actor_method_class l_daB_BQ_Method = {
    (process_method_func)daB_BQ_Create__FP10fopAc_ac_c,
    (process_method_func)daB_BQ_Delete__FP10b_bq_class,
    (process_method_func)daB_BQ_Execute__FP10b_bq_class,
    (process_method_func)daB_BQ_IsDelete__FP10b_bq_class,
    (process_method_func)daB_BQ_Draw__FP10b_bq_class,
};

/* 805BACCC-805BACFC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_BQ */
extern actor_process_profile_definition g_profile_B_BQ = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_B_BQ,              // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(b_bq_class),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  212,                    // mPriority
  &l_daB_BQ_Method,       // sub_method
  0x00044000,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 805BACFC-805BAD08 000488 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 805BAD08-805BAD14 000494 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 805BAD14-805BAD20 0004A0 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 805BAD20-805BAD2C 0004AC 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 805BAD2C-805BAD38 0004B8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 805BAD38-805BAD44 0004C4 000C+00 2/2 0/0 0/0 .data            __vt__12daB_BQ_HIO_c */
SECTION_DATA extern void* __vt__12daB_BQ_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daB_BQ_HIO_cFv,
};

/* 805B356C-805B35A0 0000EC 0034+00 1/1 0/0 0/0 .text            __ct__12daB_BQ_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_BQ_HIO_c::daB_BQ_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__ct__12daB_BQ_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA58C-805BA590 000004 0004+00 3/15 0/0 0/0 .rodata          @3830 */
SECTION_RODATA static u8 const lit_3830[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x805BA58C, &lit_3830);

/* 805BA590-805BA594 000008 0004+00 2/4 0/0 0/0 .rodata          @3831 */
SECTION_RODATA static f32 const lit_3831 = -1.0f;
COMPILER_STRIP_GATE(0x805BA590, &lit_3831);

/* 805BA86C-805BA86C 0002E4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805BA86C = "B_bq";
#pragma pop

/* 805B35A0-805B364C 000120 00AC+00 6/6 0/0 0/0 .text            anm_init__FP10b_bq_classifUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_init(b_bq_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/anm_init__FP10b_bq_classifUcf.s"
}
#pragma pop

/* 805B364C-805B37A4 0001CC 0158+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void nodeCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA594-805BA598 00000C 0004+00 0/1 0/0 0/0 .rodata          @4002 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4002 = 255.0f;
COMPILER_STRIP_GATE(0x805BA594, &lit_4002);
#pragma pop

/* 805BA598-805BA59C 000010 0004+00 0/1 0/0 0/0 .rodata          @4003 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4003 = 195.0f;
COMPILER_STRIP_GATE(0x805BA598, &lit_4003);
#pragma pop

/* 805BA59C-805BA5A0 000014 0004+00 0/1 0/0 0/0 .rodata          @4004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4004 = 225.0f;
COMPILER_STRIP_GATE(0x805BA59C, &lit_4004);
#pragma pop

/* 805B37A4-805B3ABC 000324 0318+00 1/0 0/0 0/0 .text            daB_BQ_Draw__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_BQ_Draw(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/daB_BQ_Draw__FP10b_bq_class.s"
}
#pragma pop

/* 805B3ABC-805B3B0C 00063C 0050+00 1/1 0/0 0/0 .text            s_fw_sub0__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_fw_sub0(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/s_fw_sub0__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA5A0-805BA5A4 000018 0004+00 0/3 0/0 0/0 .rodata          @4037 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4037 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x805BA5A0, &lit_4037);
#pragma pop

/* 805BA5A4-805BA5A8 00001C 0004+00 0/1 0/0 0/0 .rodata          @4038 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4038 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x805BA5A4, &lit_4038);
#pragma pop

/* 805B3B0C-805B3C20 00068C 0114+00 1/1 0/0 0/0 .text            s_fw_sub1__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_fw_sub1(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/s_fw_sub1__FPvPv.s"
}
#pragma pop

/* 805B3C20-805B3C5C 0007A0 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA5A8-805BA5AC 000020 0004+00 1/2 0/0 0/0 .rodata          @4062 */
SECTION_RODATA static f32 const lit_4062 = 20.0f;
COMPILER_STRIP_GATE(0x805BA5A8, &lit_4062);

/* 805BAD50-805BAD54 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_805BAD50[4];

/* 805BAD54-805BAD60 00000C 000C+00 1/1 0/0 0/0 .bss             @3811 */
static u8 lit_3811[12];

/* 805BAD60-805BAD70 000018 0010+00 5/5 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 805BAD70-805BAD74 000028 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_805BAD70[4];

/* 805B3C5C-805B3D60 0007DC 0104+00 1/1 0/0 0/0 .text            s_fw_sub2__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_fw_sub2(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/s_fw_sub2__FPvPv.s"
}
#pragma pop

/* 805B3D60-805B3DAC 0008E0 004C+00 1/1 0/0 0/0 .text            s_fw_del_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_fw_del_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/s_fw_del_sub__FPvPv.s"
}
#pragma pop

/* 805B3DAC-805B3E00 00092C 0054+00 2/2 0/0 0/0 .text            s_bi_del_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_bi_del_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/s_bi_del_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA5AC-805BA5B0 000024 0004+00 1/2 0/0 0/0 .rodata          @4137 */
SECTION_RODATA static f32 const lit_4137 = 3.0f;
COMPILER_STRIP_GATE(0x805BA5AC, &lit_4137);

/* 805B3E00-805B4048 000980 0248+00 1/1 0/0 0/0 .text            damage_check__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void damage_check(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/damage_check__FP10b_bq_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA5B0-805BA5B4 000028 0004+00 0/1 0/0 0/0 .rodata          @4229 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4229 = 45.0f;
COMPILER_STRIP_GATE(0x805BA5B0, &lit_4229);
#pragma pop

/* 805BA5B4-805BA5B8 00002C 0004+00 0/1 0/0 0/0 .rodata          @4230 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4230 = 180.0f;
COMPILER_STRIP_GATE(0x805BA5B4, &lit_4230);
#pragma pop

/* 805B4048-805B44D4 000BC8 048C+00 1/1 0/0 0/0 .text            b_bq_stay__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bq_stay(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/b_bq_stay__FP10b_bq_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA5B8-805BA5BC 000030 0004+00 0/3 0/0 0/0 .rodata          @4257 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4257 = 10.0f;
COMPILER_STRIP_GATE(0x805BA5B8, &lit_4257);
#pragma pop

/* 805BA5BC-805BA5C0 000034 0004+00 0/3 0/0 0/0 .rodata          @4258 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4258 = 50.0f;
COMPILER_STRIP_GATE(0x805BA5BC, &lit_4258);
#pragma pop

/* 805BA5C0-805BA5C4 000038 0004+00 0/1 0/0 0/0 .rodata          @4259 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4259 = 80.0f;
COMPILER_STRIP_GATE(0x805BA5C0, &lit_4259);
#pragma pop

/* 805B44D4-805B4614 001054 0140+00 1/1 0/0 0/0 .text            b_bq_wait__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bq_wait(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/b_bq_wait__FP10b_bq_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA5C4-805BA5C8 00003C 0004+00 0/1 0/0 0/0 .rodata          @4426 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4426 = 113.0f;
COMPILER_STRIP_GATE(0x805BA5C4, &lit_4426);
#pragma pop

/* 805BA5C8-805BA5CC 000040 0004+00 0/3 0/0 0/0 .rodata          @4427 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4427 = 300.0f;
COMPILER_STRIP_GATE(0x805BA5C8, &lit_4427);
#pragma pop

/* 805BA5CC-805BA5D0 000044 0004+00 0/2 0/0 0/0 .rodata          @4428 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4428 = 5.0f;
COMPILER_STRIP_GATE(0x805BA5CC, &lit_4428);
#pragma pop

/* 805B4614-805B4D4C 001194 0738+00 2/1 0/0 0/0 .text            b_bq_damage__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bq_damage(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/b_bq_damage__FP10b_bq_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA5D0-805BA5D4 000048 0004+00 0/2 0/0 0/0 .rodata          @4429 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4429 = 2.0f;
COMPILER_STRIP_GATE(0x805BA5D0, &lit_4429);
#pragma pop

/* 805BA5D4-805BA5D8 00004C 0004+00 0/2 0/0 0/0 .rodata          @4430 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4430 = 30.0f;
COMPILER_STRIP_GATE(0x805BA5D4, &lit_4430);
#pragma pop

/* 805BA5D8-805BA5DC 000050 0004+00 0/1 0/0 0/0 .rodata          @4723 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4723 = 1200.0f;
COMPILER_STRIP_GATE(0x805BA5D8, &lit_4723);
#pragma pop

/* 805BA5DC-805BA5E0 000054 0004+00 0/1 0/0 0/0 .rodata          @4724 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4724 = 2300.0f;
COMPILER_STRIP_GATE(0x805BA5DC, &lit_4724);
#pragma pop

/* 805BA5E0-805BA5E4 000058 0004+00 0/1 0/0 0/0 .rodata          @4725 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4725 = 500.0f;
COMPILER_STRIP_GATE(0x805BA5E0, &lit_4725);
#pragma pop

/* 805BA5E4-805BA5E8 00005C 0004+00 0/2 0/0 0/0 .rodata          @4726 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4726 = 0.5f;
COMPILER_STRIP_GATE(0x805BA5E4, &lit_4726);
#pragma pop

/* 805BA5E8-805BA5EC 000060 0004+00 0/4 0/0 0/0 .rodata          @4727 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4727 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x805BA5E8, &lit_4727);
#pragma pop

/* 805BA5EC-805BA5F0 000064 0004+00 0/2 0/0 0/0 .rodata          @4728 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4728 = -20000.0f;
COMPILER_STRIP_GATE(0x805BA5EC, &lit_4728);
#pragma pop

/* 805BA5F0-805BA5F8 000068 0004+04 0/1 0/0 0/0 .rodata          @4729 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4729[1 + 1 /* padding */] = {
    35.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x805BA5F0, &lit_4729);
#pragma pop

/* 805BA5F8-805BA600 000070 0008+00 0/1 0/0 0/0 .rodata          @4732 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4732[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805BA5F8, &lit_4732);
#pragma pop

/* 805B4D4C-805B54E0 0018CC 0794+00 1/1 0/0 0/0 .text            b_bq_attack__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bq_attack(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/b_bq_attack__FP10b_bq_class.s"
}
#pragma pop

/* 805B54E0-805B559C 002060 00BC+00 1/1 0/0 0/0 .text            b_bq_end__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bq_end(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/b_bq_end__FP10b_bq_class.s"
}
#pragma pop

/* 805B559C-805B58C8 00211C 032C+00 1/1 0/0 0/0 .text            action__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/action__FP10b_bq_class.s"
}
#pragma pop

/* 805B58C8-805B6264 002448 099C+00 1/1 0/0 0/0 .text            anm_se_set__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_se_set(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/anm_se_set__FP10b_bq_class.s"
}
#pragma pop

/* 805B6264-805B6348 002DE4 00E4+00 1/1 0/0 0/0 .text            cam_3d_morf__FP10b_bq_classf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void cam_3d_morf(b_bq_class* param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/cam_3d_morf__FP10b_bq_classf.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA600-805BA604 000078 0004+00 1/1 0/0 0/0 .rodata          @5284 */
SECTION_RODATA static f32 const lit_5284 = -200.0f;
COMPILER_STRIP_GATE(0x805BA600, &lit_5284);

/* 805B6348-805B63EC 002EC8 00A4+00 2/2 0/0 0/0 .text            fish_set__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fish_set(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/fish_set__FP10b_bq_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA604-805BA608 00007C 0004+00 0/2 0/0 0/0 .rodata          @5942 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5942 = 55.0f;
COMPILER_STRIP_GATE(0x805BA604, &lit_5942);
#pragma pop

/* 805BA608-805BA60C 000080 0004+00 0/2 0/0 0/0 .rodata          @5943 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5943 = 1000.0f;
COMPILER_STRIP_GATE(0x805BA608, &lit_5943);
#pragma pop

/* 805BA60C-805BA610 000084 0004+00 0/1 0/0 0/0 .rodata          @5944 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5944 = 1500.0f;
COMPILER_STRIP_GATE(0x805BA60C, &lit_5944);
#pragma pop

/* 805BA610-805BA614 000088 0004+00 0/1 0/0 0/0 .rodata          @5945 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5945 = 400.0f;
COMPILER_STRIP_GATE(0x805BA610, &lit_5945);
#pragma pop

/* 805BA614-805BA618 00008C 0004+00 0/1 0/0 0/0 .rodata          @5946 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5946 = 2200.0f;
COMPILER_STRIP_GATE(0x805BA614, &lit_5946);
#pragma pop

/* 805BA618-805BA61C 000090 0004+00 0/1 0/0 0/0 .rodata          @5947 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5947 = 173.0f;
COMPILER_STRIP_GATE(0x805BA618, &lit_5947);
#pragma pop

/* 805BA61C-805BA620 000094 0004+00 0/1 0/0 0/0 .rodata          @5948 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5948 = 1695.0f;
COMPILER_STRIP_GATE(0x805BA61C, &lit_5948);
#pragma pop

/* 805BA620-805BA624 000098 0004+00 0/1 0/0 0/0 .rodata          @5949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5949 = 13.0f;
COMPILER_STRIP_GATE(0x805BA620, &lit_5949);
#pragma pop

/* 805BA624-805BA628 00009C 0004+00 0/1 0/0 0/0 .rodata          @5950 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5950 = -100.0f;
COMPILER_STRIP_GATE(0x805BA624, &lit_5950);
#pragma pop

/* 805BA628-805BA62C 0000A0 0004+00 0/1 0/0 0/0 .rodata          @5951 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5951 = 750.0f;
COMPILER_STRIP_GATE(0x805BA628, &lit_5951);
#pragma pop

/* 805BA62C-805BA630 0000A4 0004+00 0/2 0/0 0/0 .rodata          @5952 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5952 = 100.0f;
COMPILER_STRIP_GATE(0x805BA62C, &lit_5952);
#pragma pop

/* 805BA630-805BA634 0000A8 0004+00 0/1 0/0 0/0 .rodata          @5953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5953 = 1350.0f;
COMPILER_STRIP_GATE(0x805BA630, &lit_5953);
#pragma pop

/* 805BA634-805BA638 0000AC 0004+00 0/1 0/0 0/0 .rodata          @5954 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5954 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x805BA634, &lit_5954);
#pragma pop

/* 805BA638-805BA63C 0000B0 0004+00 0/1 0/0 0/0 .rodata          @5955 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5955 = 0x3A03126F;
COMPILER_STRIP_GATE(0x805BA638, &lit_5955);
#pragma pop

/* 805BA63C-805BA640 0000B4 0004+00 0/2 0/0 0/0 .rodata          @5956 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5956 = 200.0f;
COMPILER_STRIP_GATE(0x805BA63C, &lit_5956);
#pragma pop

/* 805BA640-805BA644 0000B8 0004+00 0/1 0/0 0/0 .rodata          @5957 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5957 = 40.0f;
COMPILER_STRIP_GATE(0x805BA640, &lit_5957);
#pragma pop

/* 805BA644-805BA648 0000BC 0004+00 0/1 0/0 0/0 .rodata          @5958 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5958 = 21.0f / 20.0f;
COMPILER_STRIP_GATE(0x805BA644, &lit_5958);
#pragma pop

/* 805BA648-805BA64C 0000C0 0004+00 0/2 0/0 0/0 .rodata          @5959 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5959 = 0x3BA3D70A;
COMPILER_STRIP_GATE(0x805BA648, &lit_5959);
#pragma pop

/* 805B63EC-805B8A04 002F6C 2618+00 2/1 0/0 0/0 .text            demo_camera__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void demo_camera(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/demo_camera__FP10b_bq_class.s"
}
#pragma pop

/* 805B8A04-805B8A0C 005584 0008+00 1/1 0/0 0/0 .text            GetCross__11cBgS_LinChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS_LinChk::GetCross() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/GetCross__11cBgS_LinChkFv.s"
}
#pragma pop

/* 805B8A0C-805B8A24 00558C 0018+00 1/1 0/0 0/0 .text            cM_scos__Fs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// static asm void cM_scos(s16 param_0) {
extern "C" asm void cM_scos__Fs() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/cM_scos__Fs.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA64C-805BA650 0000C4 0004+00 0/0 0/0 0/0 .rodata          @5960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5960 = 58.0f;
COMPILER_STRIP_GATE(0x805BA64C, &lit_5960);
#pragma pop

/* 805BA650-805BA654 0000C8 0004+00 0/0 0/0 0/0 .rodata          @5961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5961 = 355.0f;
COMPILER_STRIP_GATE(0x805BA650, &lit_5961);
#pragma pop

/* 805BA654-805BA658 0000CC 0004+00 0/0 0/0 0/0 .rodata          @5962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5962 = 1800.0f;
COMPILER_STRIP_GATE(0x805BA654, &lit_5962);
#pragma pop

/* 805BA658-805BA65C 0000D0 0004+00 0/0 0/0 0/0 .rodata          @5963 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5963 = 240.0f;
COMPILER_STRIP_GATE(0x805BA658, &lit_5963);
#pragma pop

/* 805BA65C-805BA660 0000D4 0004+00 0/0 0/0 0/0 .rodata          @5964 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5964 = 274.0f;
COMPILER_STRIP_GATE(0x805BA65C, &lit_5964);
#pragma pop

/* 805BA660-805BA664 0000D8 0004+00 0/0 0/0 0/0 .rodata          @5965 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5965 = 2075.0f;
COMPILER_STRIP_GATE(0x805BA660, &lit_5965);
#pragma pop

/* 805BA664-805BA668 0000DC 0004+00 0/0 0/0 0/0 .rodata          @5966 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5966 = 411.0f;
COMPILER_STRIP_GATE(0x805BA664, &lit_5966);
#pragma pop

/* 805BA668-805BA66C 0000E0 0004+00 0/0 0/0 0/0 .rodata          @5967 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5967 = 1793.0f;
COMPILER_STRIP_GATE(0x805BA668, &lit_5967);
#pragma pop

/* 805BA66C-805BA670 0000E4 0004+00 0/0 0/0 0/0 .rodata          @5968 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5968 = 1700.0f;
COMPILER_STRIP_GATE(0x805BA66C, &lit_5968);
#pragma pop

/* 805BA670-805BA674 0000E8 0004+00 0/0 0/0 0/0 .rodata          @5969 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5969 = 0x391D4952;
COMPILER_STRIP_GATE(0x805BA670, &lit_5969);
#pragma pop

/* 805BA674-805BA678 0000EC 0004+00 0/0 0/0 0/0 .rodata          @5970 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5970 = 32768.0f;
COMPILER_STRIP_GATE(0x805BA674, &lit_5970);
#pragma pop

/* 805BA678-805BA67C 0000F0 0004+00 0/0 0/0 0/0 .rodata          @5971 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5971 = 1444.0f;
COMPILER_STRIP_GATE(0x805BA678, &lit_5971);
#pragma pop

/* 805BA67C-805BA680 0000F4 0004+00 0/0 0/0 0/0 .rodata          @5972 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5972 = 121.0f;
COMPILER_STRIP_GATE(0x805BA67C, &lit_5972);
#pragma pop

/* 805BA680-805BA684 0000F8 0004+00 0/0 0/0 0/0 .rodata          @5973 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5973 = 1783.0f;
COMPILER_STRIP_GATE(0x805BA680, &lit_5973);
#pragma pop

/* 805BA684-805BA688 0000FC 0004+00 0/0 0/0 0/0 .rodata          @5974 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5974 = 1685.0f;
COMPILER_STRIP_GATE(0x805BA684, &lit_5974);
#pragma pop

/* 805BA688-805BA68C 000100 0004+00 0/0 0/0 0/0 .rodata          @5975 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5975 = 95.0f;
COMPILER_STRIP_GATE(0x805BA688, &lit_5975);
#pragma pop

/* 805BA68C-805BA690 000104 0004+00 0/0 0/0 0/0 .rodata          @5976 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5976 = 2021.0f;
COMPILER_STRIP_GATE(0x805BA68C, &lit_5976);
#pragma pop

/* 805BA690-805BA694 000108 0004+00 0/0 0/0 0/0 .rodata          @5977 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5977 = 76.0f;
COMPILER_STRIP_GATE(0x805BA690, &lit_5977);
#pragma pop

/* 805BA694-805BA698 00010C 0004+00 0/0 0/0 0/0 .rodata          @5978 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5978 = 204.0f;
COMPILER_STRIP_GATE(0x805BA694, &lit_5978);
#pragma pop

/* 805BA698-805BA69C 000110 0004+00 0/0 0/0 0/0 .rodata          @5979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5979 = 1782.0f;
COMPILER_STRIP_GATE(0x805BA698, &lit_5979);
#pragma pop

/* 805BA69C-805BA6A0 000114 0004+00 0/0 0/0 0/0 .rodata          @5980 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5980 = -41.0f;
COMPILER_STRIP_GATE(0x805BA69C, &lit_5980);
#pragma pop

/* 805BA6A0-805BA6A4 000118 0004+00 0/0 0/0 0/0 .rodata          @5981 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5981 = 261.0f;
COMPILER_STRIP_GATE(0x805BA6A0, &lit_5981);
#pragma pop

/* 805BA6A4-805BA6A8 00011C 0004+00 0/0 0/0 0/0 .rodata          @5982 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5982 = 2095.0f;
COMPILER_STRIP_GATE(0x805BA6A4, &lit_5982);
#pragma pop

/* 805BA6A8-805BA6AC 000120 0004+00 0/0 0/0 0/0 .rodata          @5983 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5983 = 1394.0f;
COMPILER_STRIP_GATE(0x805BA6A8, &lit_5983);
#pragma pop

/* 805BA6AC-805BA6B0 000124 0004+00 0/0 0/0 0/0 .rodata          @5984 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5984 = 313.0f;
COMPILER_STRIP_GATE(0x805BA6AC, &lit_5984);
#pragma pop

/* 805BA6B0-805BA6B4 000128 0004+00 0/0 0/0 0/0 .rodata          @5985 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5985 = -300.0f;
COMPILER_STRIP_GATE(0x805BA6B0, &lit_5985);
#pragma pop

/* 805BA6B4-805BA6B8 00012C 0004+00 0/0 0/0 0/0 .rodata          @5986 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5986 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x805BA6B4, &lit_5986);
#pragma pop

/* 805BA6B8-805BA6BC 000130 0004+00 0/1 0/0 0/0 .rodata          @5987 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5987 = 60.0f;
COMPILER_STRIP_GATE(0x805BA6B8, &lit_5987);
#pragma pop

/* 805BA6BC-805BA6C0 000134 0004+00 0/0 0/0 0/0 .rodata          @5988 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5988 = 1413.0f;
COMPILER_STRIP_GATE(0x805BA6BC, &lit_5988);
#pragma pop

/* 805BA6C0-805BA6C4 000138 0004+00 0/0 0/0 0/0 .rodata          @5989 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5989 = 430.0f;
COMPILER_STRIP_GATE(0x805BA6C0, &lit_5989);
#pragma pop

/* 805BA6C4-805BA6C8 00013C 0004+00 0/0 0/0 0/0 .rodata          @5990 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5990 = 524.0f;
COMPILER_STRIP_GATE(0x805BA6C4, &lit_5990);
#pragma pop

/* 805BA6C8-805BA6CC 000140 0004+00 0/0 0/0 0/0 .rodata          @5991 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5991 = 1440.0f;
COMPILER_STRIP_GATE(0x805BA6C8, &lit_5991);
#pragma pop

/* 805BA6CC-805BA6D0 000144 0004+00 0/0 0/0 0/0 .rodata          @5992 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5992 = 278.0f;
COMPILER_STRIP_GATE(0x805BA6CC, &lit_5992);
#pragma pop

/* 805BA6D0-805BA6D4 000148 0004+00 0/0 0/0 0/0 .rodata          @5993 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5993 = 1252.0f;
COMPILER_STRIP_GATE(0x805BA6D0, &lit_5993);
#pragma pop

/* 805BA6D4-805BA6D8 00014C 0004+00 0/0 0/0 0/0 .rodata          @5994 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5994 = 86.0f;
COMPILER_STRIP_GATE(0x805BA6D4, &lit_5994);
#pragma pop

/* 805BA6D8-805BA6DC 000150 0004+00 0/0 0/0 0/0 .rodata          @5995 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5995 = 2167.0f;
COMPILER_STRIP_GATE(0x805BA6D8, &lit_5995);
#pragma pop

/* 805BA6DC-805BA6E0 000154 0004+00 0/1 0/0 0/0 .rodata          @5996 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5996 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x805BA6DC, &lit_5996);
#pragma pop

/* 805BA6E0-805BA6E4 000158 0004+00 0/0 0/0 0/0 .rodata          @5997 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5997 = 0x3A83126F;
COMPILER_STRIP_GATE(0x805BA6E0, &lit_5997);
#pragma pop

/* 805BA6E4-805BA6E8 00015C 0004+00 0/0 0/0 0/0 .rodata          @5998 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5998 = -900.0f;
COMPILER_STRIP_GATE(0x805BA6E4, &lit_5998);
#pragma pop

/* 805BA6E8-805BA6EC 000160 0004+00 0/0 0/0 0/0 .rodata          @5999 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5999 = 1471.0f;
COMPILER_STRIP_GATE(0x805BA6E8, &lit_5999);
#pragma pop

/* 805BA6EC-805BA6F0 000164 0004+00 0/0 0/0 0/0 .rodata          @6000 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6000 = -35.0f;
COMPILER_STRIP_GATE(0x805BA6EC, &lit_6000);
#pragma pop

/* 805BA6F0-805BA6F4 000168 0004+00 0/0 0/0 0/0 .rodata          @6001 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6001 = 15.0f;
COMPILER_STRIP_GATE(0x805BA6F0, &lit_6001);
#pragma pop

/* 805BA6F4-805BA6F8 00016C 0004+00 0/1 0/0 0/0 .rodata          @6002 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6002 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x805BA6F4, &lit_6002);
#pragma pop

/* 805BA6F8-805BA6FC 000170 0004+00 0/0 0/0 0/0 .rodata          @6003 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6003 = -766.0f;
COMPILER_STRIP_GATE(0x805BA6F8, &lit_6003);
#pragma pop

/* 805BA6FC-805BA700 000174 0004+00 0/0 0/0 0/0 .rodata          @6004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6004 = 423.0f;
COMPILER_STRIP_GATE(0x805BA6FC, &lit_6004);
#pragma pop

/* 805BA700-805BA704 000178 0004+00 0/0 0/0 0/0 .rodata          @6005 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6005 = 1593.0f;
COMPILER_STRIP_GATE(0x805BA700, &lit_6005);
#pragma pop

/* 805BA704-805BA708 00017C 0004+00 0/0 0/0 0/0 .rodata          @6006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6006 = 71.0f;
COMPILER_STRIP_GATE(0x805BA704, &lit_6006);
#pragma pop

/* 805BA708-805BA70C 000180 0004+00 0/0 0/0 0/0 .rodata          @6007 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6007 = 114.0f;
COMPILER_STRIP_GATE(0x805BA708, &lit_6007);
#pragma pop

/* 805BA70C-805BA710 000184 0004+00 0/0 0/0 0/0 .rodata          @6008 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6008 = 2304.0f;
COMPILER_STRIP_GATE(0x805BA70C, &lit_6008);
#pragma pop

/* 805BA710-805BA714 000188 0004+00 0/0 0/0 0/0 .rodata          @6009 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6009 = -2243.0f;
COMPILER_STRIP_GATE(0x805BA710, &lit_6009);
#pragma pop

/* 805BA714-805BA718 00018C 0004+00 0/0 0/0 0/0 .rodata          @6010 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6010 = 1340.0f;
COMPILER_STRIP_GATE(0x805BA714, &lit_6010);
#pragma pop

/* 805BA718-805BA71C 000190 0004+00 0/0 0/0 0/0 .rodata          @6011 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6011 = 977.0f;
COMPILER_STRIP_GATE(0x805BA718, &lit_6011);
#pragma pop

/* 805BA71C-805BA720 000194 0004+00 0/0 0/0 0/0 .rodata          @6012 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6012 = -1226.0f;
COMPILER_STRIP_GATE(0x805BA71C, &lit_6012);
#pragma pop

/* 805BA720-805BA724 000198 0004+00 0/0 0/0 0/0 .rodata          @6013 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6013 = 980.0f;
COMPILER_STRIP_GATE(0x805BA720, &lit_6013);
#pragma pop

/* 805BA724-805BA728 00019C 0004+00 0/0 0/0 0/0 .rodata          @6014 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6014 = 4.0f;
COMPILER_STRIP_GATE(0x805BA724, &lit_6014);
#pragma pop

/* 805BA728-805BA72C 0001A0 0004+00 0/0 0/0 0/0 .rodata          @6015 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6015 = -560.0f;
COMPILER_STRIP_GATE(0x805BA728, &lit_6015);
#pragma pop

/* 805BA72C-805BA730 0001A4 0004+00 0/0 0/0 0/0 .rodata          @6016 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6016 = 717.0f;
COMPILER_STRIP_GATE(0x805BA72C, &lit_6016);
#pragma pop

/* 805BA730-805BA734 0001A8 0004+00 0/0 0/0 0/0 .rodata          @6017 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6017 = 1948.0f;
COMPILER_STRIP_GATE(0x805BA730, &lit_6017);
#pragma pop

/* 805BA734-805BA738 0001AC 0004+00 0/0 0/0 0/0 .rodata          @6018 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6018 = 2800.0f;
COMPILER_STRIP_GATE(0x805BA734, &lit_6018);
#pragma pop

/* 805BA738-805BA73C 0001B0 0004+00 0/0 0/0 0/0 .rodata          @6019 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6019 = 72.0f;
COMPILER_STRIP_GATE(0x805BA738, &lit_6019);
#pragma pop

/* 805BA73C-805BA740 0001B4 0004+00 0/0 0/0 0/0 .rodata          @6020 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6020 = 52.0f;
COMPILER_STRIP_GATE(0x805BA73C, &lit_6020);
#pragma pop

/* 805BA740-805BA744 0001B8 0004+00 0/0 0/0 0/0 .rodata          @6021 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6021 = 2153.0f;
COMPILER_STRIP_GATE(0x805BA740, &lit_6021);
#pragma pop

/* 805BA744-805BA748 0001BC 0004+00 0/0 0/0 0/0 .rodata          @6022 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6022 = -150.0f;
COMPILER_STRIP_GATE(0x805BA744, &lit_6022);
#pragma pop

/* 805BA748-805BA74C 0001C0 0004+00 0/0 0/0 0/0 .rodata          @6023 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6023 = 2288.0f;
COMPILER_STRIP_GATE(0x805BA748, &lit_6023);
#pragma pop

/* 805BA74C-805BA750 0001C4 0004+00 0/0 0/0 0/0 .rodata          @6024 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6024 = -30.0f;
COMPILER_STRIP_GATE(0x805BA74C, &lit_6024);
#pragma pop

/* 805BA750-805BA754 0001C8 0004+00 0/0 0/0 0/0 .rodata          @6025 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6025 = 1938.0f;
COMPILER_STRIP_GATE(0x805BA750, &lit_6025);
#pragma pop

/* 805BA754-805BA758 0001CC 0004+00 0/0 0/0 0/0 .rodata          @6026 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6026 = 25.0f;
COMPILER_STRIP_GATE(0x805BA754, &lit_6026);
#pragma pop

/* 805BA758-805BA75C 0001D0 0004+00 0/0 0/0 0/0 .rodata          @6027 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6027 = 6.0f;
COMPILER_STRIP_GATE(0x805BA758, &lit_6027);
#pragma pop

/* 805BA75C-805BA760 0001D4 0004+00 0/0 0/0 0/0 .rodata          @6028 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6028 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x805BA75C, &lit_6028);
#pragma pop

/* 805BA760-805BA764 0001D8 0004+00 0/0 0/0 0/0 .rodata          @6029 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6029 = 3.0f / 100.0f;
COMPILER_STRIP_GATE(0x805BA760, &lit_6029);
#pragma pop

/* 805BA764-805BA768 0001DC 0004+00 0/1 0/0 0/0 .rodata          @6030 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6030 = 700.0f;
COMPILER_STRIP_GATE(0x805BA764, &lit_6030);
#pragma pop

/* 805BA768-805BA76C 0001E0 0004+00 0/0 0/0 0/0 .rodata          @6031 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6031 = 92.0f;
COMPILER_STRIP_GATE(0x805BA768, &lit_6031);
#pragma pop

/* 805BA76C-805BA770 0001E4 0004+00 0/0 0/0 0/0 .rodata          @6032 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6032 = 2654.0f;
COMPILER_STRIP_GATE(0x805BA76C, &lit_6032);
#pragma pop

/* 805BA770-805BA774 0001E8 0004+00 0/0 0/0 0/0 .rodata          @6033 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6033 = 110.0f;
COMPILER_STRIP_GATE(0x805BA770, &lit_6033);
#pragma pop

/* 805BA774-805BA778 0001EC 0004+00 0/0 0/0 0/0 .rodata          @6034 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6034 = 560.0f;
COMPILER_STRIP_GATE(0x805BA774, &lit_6034);
#pragma pop

/* 805BA778-805BA77C 0001F0 0004+00 0/0 0/0 0/0 .rodata          @6035 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6035 = 3090.0f;
COMPILER_STRIP_GATE(0x805BA778, &lit_6035);
#pragma pop

/* 805BA77C-805BA780 0001F4 0004+00 0/0 0/0 0/0 .rodata          @6036 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6036 = 939.0f;
COMPILER_STRIP_GATE(0x805BA77C, &lit_6036);
#pragma pop

/* 805BA780-805BA784 0001F8 0004+00 0/0 0/0 0/0 .rodata          @6037 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6037 = 434.0f;
COMPILER_STRIP_GATE(0x805BA780, &lit_6037);
#pragma pop

/* 805BA784-805BA788 0001FC 0004+00 0/0 0/0 0/0 .rodata          @6038 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6038 = 2362.0f;
COMPILER_STRIP_GATE(0x805BA784, &lit_6038);
#pragma pop

/* 805BA788-805BA78C 000200 0004+00 0/0 0/0 0/0 .rodata          @6039 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6039 = 1214.0f;
COMPILER_STRIP_GATE(0x805BA788, &lit_6039);
#pragma pop

/* 805BA78C-805BA790 000204 0004+00 0/1 0/0 0/0 .rodata          @6040 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6040 = 350.0f;
COMPILER_STRIP_GATE(0x805BA78C, &lit_6040);
#pragma pop

/* 805BA790-805BA794 000208 0004+00 0/0 0/0 0/0 .rodata          @6041 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6041 = 2696.0f;
COMPILER_STRIP_GATE(0x805BA790, &lit_6041);
#pragma pop

/* 805BA794-805BA798 00020C 0004+00 0/0 0/0 0/0 .rodata          @6042 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6042 = 111.0f;
COMPILER_STRIP_GATE(0x805BA794, &lit_6042);
#pragma pop

/* 805BA798-805BA79C 000210 0004+00 0/0 0/0 0/0 .rodata          @6043 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6043 = 1689.0f;
COMPILER_STRIP_GATE(0x805BA798, &lit_6043);
#pragma pop

/* 805BA79C-805BA7A0 000214 0004+00 0/0 0/0 0/0 .rodata          @6044 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6044 = 23.0f;
COMPILER_STRIP_GATE(0x805BA79C, &lit_6044);
#pragma pop

/* 805BA7A0-805BA7A4 000218 0004+00 0/0 0/0 0/0 .rodata          @6045 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6045 = 108.0f;
COMPILER_STRIP_GATE(0x805BA7A0, &lit_6045);
#pragma pop

/* 805BA7A4-805BA7A8 00021C 0004+00 0/0 0/0 0/0 .rodata          @6046 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6046 = 2155.0f;
COMPILER_STRIP_GATE(0x805BA7A4, &lit_6046);
#pragma pop

/* 805BA7A8-805BA7AC 000220 0004+00 0/0 0/0 0/0 .rodata          @6047 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6047 = 0x399D4952;
COMPILER_STRIP_GATE(0x805BA7A8, &lit_6047);
#pragma pop

/* 805BA7AC-805BA7B0 000224 0004+00 0/0 0/0 0/0 .rodata          @6048 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6048 = 0x3BE56042;
COMPILER_STRIP_GATE(0x805BA7AC, &lit_6048);
#pragma pop

/* 805BA7B0-805BA7B4 000228 0004+00 0/0 0/0 0/0 .rodata          @6049 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6049 = 0x38FBA882;
COMPILER_STRIP_GATE(0x805BA7B0, &lit_6049);
#pragma pop

/* 805BA7B4-805BA7B8 00022C 0004+00 0/1 0/0 0/0 .rodata          @6050 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6050 = 70.0f;
COMPILER_STRIP_GATE(0x805BA7B4, &lit_6050);
#pragma pop

/* 805BA7B8-805BA7BC 000230 0004+00 0/0 0/0 0/0 .rodata          @6051 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6051 = 1072.0f;
COMPILER_STRIP_GATE(0x805BA7B8, &lit_6051);
#pragma pop

/* 805BA7BC-805BA7C0 000234 0004+00 0/0 0/0 0/0 .rodata          @6052 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6052 = 1121.0f;
COMPILER_STRIP_GATE(0x805BA7BC, &lit_6052);
#pragma pop

/* 805BA7C0-805BA7C4 000238 0004+00 0/0 0/0 0/0 .rodata          @6053 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6053 = -379.0f;
COMPILER_STRIP_GATE(0x805BA7C0, &lit_6053);
#pragma pop

/* 805BA7C4-805BA7C8 00023C 0004+00 0/0 0/0 0/0 .rodata          @6054 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6054 = 1320.0f;
COMPILER_STRIP_GATE(0x805BA7C4, &lit_6054);
#pragma pop

/* 805BA7C8-805BA7CC 000240 0004+00 0/0 0/0 0/0 .rodata          @6055 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6055 = 1293.0f;
COMPILER_STRIP_GATE(0x805BA7C8, &lit_6055);
#pragma pop

/* 805BA7CC-805BA7D0 000244 0004+00 0/0 0/0 0/0 .rodata          @6056 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6056 = -701.0f;
COMPILER_STRIP_GATE(0x805BA7CC, &lit_6056);
#pragma pop

/* 805BA7D0-805BA7D4 000248 0004+00 0/0 0/0 0/0 .rodata          @6057 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6057 = 758.0f;
COMPILER_STRIP_GATE(0x805BA7D0, &lit_6057);
#pragma pop

/* 805BA7D4-805BA7D8 00024C 0004+00 0/0 0/0 0/0 .rodata          @6058 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6058 = 853.0f;
COMPILER_STRIP_GATE(0x805BA7D4, &lit_6058);
#pragma pop

/* 805BA7D8-805BA7DC 000250 0004+00 0/0 0/0 0/0 .rodata          @6059 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6059 = 332.0f;
COMPILER_STRIP_GATE(0x805BA7D8, &lit_6059);
#pragma pop

/* 805BA7DC-805BA7E0 000254 0004+00 0/0 0/0 0/0 .rodata          @6060 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6060 = 953.0f;
COMPILER_STRIP_GATE(0x805BA7DC, &lit_6060);
#pragma pop

/* 805BA7E0-805BA7E4 000258 0004+00 0/0 0/0 0/0 .rodata          @6061 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6061 = 997.0f;
COMPILER_STRIP_GATE(0x805BA7E0, &lit_6061);
#pragma pop

/* 805BA7E4-805BA7E8 00025C 0004+00 0/0 0/0 0/0 .rodata          @6062 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6062 = -36.0f;
COMPILER_STRIP_GATE(0x805BA7E4, &lit_6062);
#pragma pop

/* 805BA7E8-805BA7EC 000260 0004+00 0/0 0/0 0/0 .rodata          @6063 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6063 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(0x805BA7E8, &lit_6063);
#pragma pop

/* 805BA7EC-805BA7F0 000264 0004+00 0/0 0/0 0/0 .rodata          @6064 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6064 = 0x3B03126F;
COMPILER_STRIP_GATE(0x805BA7EC, &lit_6064);
#pragma pop

/* 805BA7F0-805BA7F4 000268 0004+00 0/0 0/0 0/0 .rodata          @6065 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6065 = 2486.0f;
COMPILER_STRIP_GATE(0x805BA7F0, &lit_6065);
#pragma pop

/* 805BA7F4-805BA7F8 00026C 0004+00 0/0 0/0 0/0 .rodata          @6066 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6066 = 118.0f;
COMPILER_STRIP_GATE(0x805BA7F4, &lit_6066);
#pragma pop

/* 805BA7F8-805BA7FC 000270 0004+00 0/0 0/0 0/0 .rodata          @6067 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6067 = 2349.0f;
COMPILER_STRIP_GATE(0x805BA7F8, &lit_6067);
#pragma pop

/* 805BA7FC-805BA800 000274 0004+00 0/0 0/0 0/0 .rodata          @6068 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6068 = 116.0f;
COMPILER_STRIP_GATE(0x805BA7FC, &lit_6068);
#pragma pop

/* 805BA800-805BA804 000278 0004+00 0/0 0/0 0/0 .rodata          @6069 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6069 = 2766.0f;
COMPILER_STRIP_GATE(0x805BA800, &lit_6069);
#pragma pop

/* 805BA804-805BA808 00027C 0004+00 0/0 0/0 0/0 .rodata          @6070 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6070 = 210.0f;
COMPILER_STRIP_GATE(0x805BA804, &lit_6070);
#pragma pop

/* 805BA808-805BA80C 000280 0004+00 0/1 0/0 0/0 .rodata          @6071 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6071 = -234.0f;
COMPILER_STRIP_GATE(0x805BA808, &lit_6071);
#pragma pop

/* 805BA80C-805BA810 000284 0004+00 0/1 0/0 0/0 .rodata          @6072 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6072 = 2191.0f;
COMPILER_STRIP_GATE(0x805BA80C, &lit_6072);
#pragma pop

/* 805BA810-805BA814 000288 0004+00 0/0 0/0 0/0 .rodata          @6073 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6073 = 7.5f;
COMPILER_STRIP_GATE(0x805BA810, &lit_6073);
#pragma pop

/* 805BA814-805BA818 00028C 0004+00 0/0 0/0 0/0 .rodata          @6074 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6074 = -20.0f;
COMPILER_STRIP_GATE(0x805BA814, &lit_6074);
#pragma pop

/* 805BA818-805BA820 000290 0004+04 0/0 0/0 0/0 .rodata          @6075 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6075[1 + 1 /* padding */] = {
    0x3E2AAB8A,
    /* padding */
    0x00000000,
};
COMPILER_STRIP_GATE(0x805BA818, &lit_6075);
#pragma pop

/* 805BA820-805BA828 000298 0008+00 0/1 0/0 0/0 .rodata          @6140 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_6140[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805BA820, &lit_6140);
#pragma pop

/* 805BA828-805BA830 0002A0 0008+00 0/1 0/0 0/0 .rodata          @6141 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_6141[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805BA828, &lit_6141);
#pragma pop

/* 805BA830-805BA838 0002A8 0008+00 0/1 0/0 0/0 .rodata          @6142 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_6142[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805BA830, &lit_6142);
#pragma pop

/* 805BA838-805BA83C 0002B0 0004+00 0/1 0/0 0/0 .rodata          @6389 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6389 = -40000.0f;
COMPILER_STRIP_GATE(0x805BA838, &lit_6389);
#pragma pop

/* 805BA83C-805BA840 0002B4 0004+00 0/1 0/0 0/0 .rodata          @6390 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6390 = 30000.0f;
COMPILER_STRIP_GATE(0x805BA83C, &lit_6390);
#pragma pop

/* 805BA840-805BA844 0002B8 0004+00 0/1 0/0 0/0 .rodata          @6391 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6391 = 10000.0f;
COMPILER_STRIP_GATE(0x805BA840, &lit_6391);
#pragma pop

/* 805BA844-805BA848 0002BC 0004+00 0/1 0/0 0/0 .rodata          @6392 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6392 = -250.0f;
COMPILER_STRIP_GATE(0x805BA844, &lit_6392);
#pragma pop

/* 805BA848-805BA84C 0002C0 0004+00 0/1 0/0 0/0 .rodata          @6393 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6393 = 230.0f;
COMPILER_STRIP_GATE(0x805BA848, &lit_6393);
#pragma pop

/* 805BA84C-805BA850 0002C4 0004+00 0/1 0/0 0/0 .rodata          @6394 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6394 = 250.0f;
COMPILER_STRIP_GATE(0x805BA84C, &lit_6394);
#pragma pop

/* 805BA850-805BA854 0002C8 0004+00 0/1 0/0 0/0 .rodata          @6395 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6395 = 20000.0f;
COMPILER_STRIP_GATE(0x805BA850, &lit_6395);
#pragma pop

/* 805BA854-805BA858 0002CC 0004+00 0/1 0/0 0/0 .rodata          @6396 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6396 = 520.0f;
COMPILER_STRIP_GATE(0x805BA854, &lit_6396);
#pragma pop

/* 805BA858-805BA85C 0002D0 0004+00 0/1 0/0 0/0 .rodata          @6397 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6397 = 1.0f / 80.0f;
COMPILER_STRIP_GATE(0x805BA858, &lit_6397);
#pragma pop

/* 805BA85C-805BA860 0002D4 0004+00 0/1 0/0 0/0 .rodata          @6398 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6398 = 1.0f / 125.0f;
COMPILER_STRIP_GATE(0x805BA85C, &lit_6398);
#pragma pop

/* 805BA860-805BA864 0002D8 0004+00 0/1 0/0 0/0 .rodata          @6399 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6399 = 0x3B23D70A;
COMPILER_STRIP_GATE(0x805BA860, &lit_6399);
#pragma pop

/* 805B8A24-805B92F0 0055A4 08CC+00 2/1 0/0 0/0 .text            daB_BQ_Execute__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_BQ_Execute(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/daB_BQ_Execute__FP10b_bq_class.s"
}
#pragma pop

/* 805B92F0-805B92F8 005E70 0008+00 1/0 0/0 0/0 .text            daB_BQ_IsDelete__FP10b_bq_class */
static bool daB_BQ_IsDelete(b_bq_class* param_0) {
    return true;
}

/* 805B92F8-805B9370 005E78 0078+00 1/0 0/0 0/0 .text            daB_BQ_Delete__FP10b_bq_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_BQ_Delete(b_bq_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/daB_BQ_Delete__FP10b_bq_class.s"
}
#pragma pop

/* 805B9370-805B9654 005EF0 02E4+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 805B9654-805B969C 0061D4 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805BA864-805BA868 0002DC 0004+00 0/1 0/0 0/0 .rodata          @6660 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6660 = 1778.0f;
COMPILER_STRIP_GATE(0x805BA864, &lit_6660);
#pragma pop

/* 805BA868-805BA86C 0002E0 0004+00 0/1 0/0 0/0 .rodata          @6661 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6661 = 0x403F5C29;
COMPILER_STRIP_GATE(0x805BA868, &lit_6661);
#pragma pop

/* 805B969C-805B9B3C 00621C 04A0+00 1/0 0/0 0/0 .text            daB_BQ_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_BQ_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/daB_BQ_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 805B9B3C-805B9D74 0066BC 0238+00 1/1 0/0 0/0 .text            __ct__10b_bq_classFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm b_bq_class::b_bq_class() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__ct__10b_bq_classFv.s"
}
#pragma pop

/* 805B9D74-805B9D78 0068F4 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" asm void __ct__4cXyzFv() {
    /* empty function */
}

/* 805B9D78-805B9DFC 0068F8 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Sph::dCcD_Sph() {
extern "C" asm void __ct__8dCcD_SphFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 805B9DFC-805B9EC8 00697C 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Sph::~dCcD_Sph() {
extern "C" asm void __dt__8dCcD_SphFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 805B9EC8-805B9F10 006A48 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 805B9F10-805B9F58 006A90 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 805B9F58-805B9FB4 006AD8 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 805B9FB4-805B9FFC 006B34 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 805B9FFC-805BA044 006B7C 0048+00 2/1 0/0 0/0 .text            __dt__12daB_BQ_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_BQ_HIO_c::~daB_BQ_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__dt__12daB_BQ_HIO_cFv.s"
}
#pragma pop

/* 805BA044-805BA080 006BC4 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_b_bq_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_b_bq_cpp(){nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__sinit_d_a_b_bq_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x805BA044, __sinit_d_a_b_bq_cpp);
#pragma pop

/* 805BA080-805BA094 006C00 0014+00 1/1 0/0 0/0 .text            cancelOriginalDemo__9daPy_py_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void cancelOriginalDemo__9daPy_py_cFv() {
    // asm void daPy_py_c::cancelOriginalDemo() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/cancelOriginalDemo__9daPy_py_cFv.s"
}
#pragma pop

/* 805BA094-805BA0C0 006C14 002C+00 1/1 0/0 0/0 .text            dComIfGp_event_reset__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void dComIfGp_event_reset__Fv() {
    // static asm void dComIfGp_event_reset() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/dComIfGp_event_reset__Fv.s"
}
#pragma pop

/* 805BA0C0-805BA0D4 006C40 0014+00 1/1 0/0 0/0 .text            checkSkipEdge__14dEvt_control_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void checkSkipEdge__14dEvt_control_cFv() {
    // asm void dEvt_control_c::checkSkipEdge() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/checkSkipEdge__14dEvt_control_cFv.s"
}
#pragma pop

/* 805BA0D4-805BA0DC 006C54 0008+00 1/1 0/0 0/0 .text            fopAcM_GetParam__FPCv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void fopAcM_GetParam__FPCv() {
    // static asm void fopAcM_GetParam(void const* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/fopAcM_GetParam__FPCv.s"
}
#pragma pop

/* 805BA0DC-805BA124 006C5C 0048+00 1/1 0/0 0/0 .text            dComIfGs_onStageBossEnemy__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void dComIfGs_onStageBossEnemy__Fv() {
    // static asm void dComIfGs_onStageBossEnemy() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/dComIfGs_onStageBossEnemy__Fv.s"
}
#pragma pop

/* 805BA124-805BA160 006CA4 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __dt__5csXyzFv() {
    // asm csXyz::~csXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__dt__5csXyzFv.s"
}
#pragma pop

/* 805BA160-805BA170 006CE0 0010+00 1/1 0/0 0/0 .text            set__4cXyzFfff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void cXyz::set(f32 param_0, f32 param_1, f32 param_2) {
extern "C" asm void set__4cXyzFfff() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/set__4cXyzFfff.s"
}
#pragma pop

/* 805BA170-805BA18C 006CF0 001C+00 1/1 0/0 0/0 .text            __as__4cXyzFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void cXyz::operator=(cXyz const& param_0) {
extern "C" asm void __as__4cXyzFRC4cXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__as__4cXyzFRC4cXyz.s"
}
#pragma pop

/* 805BA18C-805BA1A0 006D0C 0014+00 1/1 0/0 0/0 .text            changeDemoMode__9daPy_py_cFUliis */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void changeDemoMode__9daPy_py_cFUliis() {
    // asm void daPy_py_c::changeDemoMode(u32 param_0, int param_1, int param_2, s16 param_3) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/changeDemoMode__9daPy_py_cFUliis.s"
}
#pragma pop

/* 805BA1A0-805BA1B4 006D20 0014+00 1/1 0/0 0/0 .text            changeOriginalDemo__9daPy_py_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void changeOriginalDemo__9daPy_py_cFv() {
    // asm void daPy_py_c::changeOriginalDemo() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/changeOriginalDemo__9daPy_py_cFv.s"
}
#pragma pop

/* 805BA1B4-805BA1C4 006D34 0010+00 1/1 0/0 0/0 .text            daPy_getPlayerActorClass__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void daPy_getPlayerActorClass__Fv() {
    // static asm void daPy_getPlayerActorClass() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/daPy_getPlayerActorClass__Fv.s"
}
#pragma pop

/* 805BA1C4-805BA1D4 006D44 0010+00 1/1 0/0 0/0 .text            onCondition__11dEvt_info_cFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void onCondition__11dEvt_info_cFUs() {
    // asm void dEvt_info_c::onCondition(u16 param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/onCondition__11dEvt_info_cFUs.s"
}
#pragma pop

/* 805BA1D4-805BA1E8 006D54 0014+00 1/1 0/0 0/0 .text checkCommandDemoAccrpt__11dEvt_info_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void checkCommandDemoAccrpt__11dEvt_info_cFv() {
    // asm void dEvt_info_c::checkCommandDemoAccrpt() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/checkCommandDemoAccrpt__11dEvt_info_cFv.s"
}
#pragma pop

/* 805BA1E8-805BA200 006D68 0018+00 1/1 0/0 0/0 .text            dComIfGp_getPlayer__Fi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void dComIfGp_getPlayer__Fi() {
    // static asm void dComIfGp_getPlayer(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/dComIfGp_getPlayer__Fi.s"
}
#pragma pop

/* 805BA200-805BA218 006D80 0018+00 1/1 0/0 0/0 .text            dComIfGp_getCamera__Fi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void dComIfGp_getCamera__Fi() {
    // static asm void dComIfGp_getCamera(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/dComIfGp_getCamera__Fi.s"
}
#pragma pop

/* 805BA218-805BA234 006D98 001C+00 1/1 0/0 0/0 .text            dComIfGp_getPlayerCameraID__Fi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void dComIfGp_getPlayerCameraID__Fi() {
    // static asm void dComIfGp_getPlayerCameraID(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/dComIfGp_getPlayerCameraID__Fi.s"
}
#pragma pop

/* 805BA234-805BA250 006DB4 001C+00 1/1 0/0 0/0 .text setCurrentPos__16obj_ystone_classF4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void setCurrentPos__16obj_ystone_classF4cXyz() {
    // asm void obj_ystone_class::setCurrentPos(cXyz param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/setCurrentPos__16obj_ystone_classF4cXyz.s"
}
#pragma pop

/* 805BA250-805BA26C 006DD0 001C+00 1/1 0/0 0/0 .text            __ct__4cXyzFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::cXyz(cXyz const& param_0) {
extern "C" asm void __ct__4cXyzFRC4cXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__ct__4cXyzFRC4cXyz.s"
}
#pragma pop

/* 805BA26C-805BA274 -00001 0008+00 0/0 0/0 0/0 .text            __ct__10JAISoundIDFUl */
// JAISoundID::JAISoundID(u32 param_0) {
void __ct__10JAISoundIDFUl() {
    asm {
        stw r4, 0x0(r3)
    }
}

/* 805BA274-805BA2E8 006DF4 0074+00 1/1 0/0 0/0 .text
 * dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz() {
    /* static asm void dComIfGp_particle_set(u16 param_0, cXyz const* param_1, csXyz const* param_2,
                                          cXyz const* param_3) { */
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz.s"
}
#pragma pop

/* 805BA2E8-805BA314 006E68 002C+00 1/1 0/0 0/0 .text            setBaseTRMtx__8J3DModelFPA4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void setBaseTRMtx__8J3DModelFPA4_f() {
    // asm void J3DModel::setBaseTRMtx(f32 (*param_0)[4]) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/setBaseTRMtx__8J3DModelFPA4_f.s"
}
#pragma pop

/* 805BA314-805BA338 006E94 0024+00 1/1 0/0 0/0 .text            multVecZero__14mDoMtx_stack_cFP3Vec
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void multVecZero__14mDoMtx_stack_cFP3Vec() {
    // asm void mDoMtx_stack_c::multVecZero(Vec* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/multVecZero__14mDoMtx_stack_cFP3Vec.s"
}
#pragma pop

/* 805BA338-805BA34C 006EB8 0014+00 1/1 0/0 0/0 .text            getAnmMtx__8J3DModelFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void getAnmMtx__8J3DModelFi() {
    // asm void J3DModel::getAnmMtx(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/getAnmMtx__8J3DModelFi.s"
}
#pragma pop

/* 805BA34C-805BA3B0 006ECC 0064+00 1/1 0/0 0/0 .text            mDoAud_seStart__FUlPC3VecUlSc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void mDoAud_seStart__FUlPC3VecUlSc() {
    // static asm void mDoAud_seStart(u32 param_0, Vec const* param_1, u32 param_2, s8 param_3) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/mDoAud_seStart__FUlPC3VecUlSc.s"
}
#pragma pop

/* 805BA3B0-805BA3C4 006F30 0014+00 1/1 0/0 0/0 .text            cM_ssin__Fs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void cM_ssin__Fs() {
    // static asm void cM_ssin(s16 param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/cM_ssin__Fs.s"
}
#pragma pop

/* 805BA3C4-805BA4D8 006F44 0114+00 1/1 0/0 0/0 .text            abs__4cXyzCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void cXyz::abs() const {
extern "C" asm void abs__4cXyzCFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/abs__4cXyzCFv.s"
}
#pragma pop

/* 805BA4D8-805BA4E4 007058 000C+00 1/1 0/0 0/0 .text            fabsf__3stdFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void fabsf__3stdFf() {
    // asm void std::fabsf(f32 param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/fabsf__3stdFf.s"
}
#pragma pop

/* 805BA4E4-805BA510 007064 002C+00 1/1 0/0 0/0 .text startCheckSkipEdge__14dEvt_control_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void startCheckSkipEdge__14dEvt_control_cFPv() {
    // asm void dEvt_control_c::startCheckSkipEdge(void* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/startCheckSkipEdge__14dEvt_control_cFPv.s"
}
#pragma pop

/* 805BA510-805BA520 007090 0010+00 1/1 0/0 0/0 .text            dComIfGp_getEvent__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void dComIfGp_getEvent__Fv() {
    // static asm void dComIfGp_getEvent__Fv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/dComIfGp_getEvent__Fv.s"
}
#pragma pop

/* 805BA520-805BA530 0070A0 0010+00 1/1 0/0 0/0 .text            dComIfGp_getVibration__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void dComIfGp_getVibration__Fv() {
    // static asm void dComIfGp_getVibration() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/dComIfGp_getVibration__Fv.s"
}
#pragma pop

/* 805BA530-805BA540 0070B0 0010+00 1/1 0/0 0/0 .text            __ct__4cXyzFfff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::cXyz(f32 param_0, f32 param_1, f32 param_2) {
extern "C" asm void __ct__4cXyzFfff() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__ct__4cXyzFfff.s"
}
#pragma pop

/* 805BA540-805BA574 0070C0 0034+00 1/1 0/0 0/0 .text            __apl__4cXyzFRC3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void cXyz::operator+=(Vec const& param_0) {
extern "C" asm void __apl__4cXyzFRC3Vec() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bq/d_a_b_bq/__apl__4cXyzFRC3Vec.s"
}
#pragma pop

/* 805BA86C-805BA86C 0002E4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
