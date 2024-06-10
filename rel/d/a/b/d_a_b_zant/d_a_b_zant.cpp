/**
 * @file d_a_b_zant.cpp
 * 
*/

#include "rel/d/a/b/d_a_b_zant/d_a_b_zant.h"
#include "dol2asm.h"
#include "d/d_camera.h"

//
// Forward References:
//

extern "C" void __ct__14daB_ZANT_HIO_cFv();
extern "C" void ctrlJoint__10daB_ZANT_cFP8J3DJointP8J3DModel();
extern "C" void JointCallBack__10daB_ZANT_cFP8J3DJointi();
extern "C" void draw__10daB_ZANT_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" static void daB_ZANT_Draw__FP10daB_ZANT_c();
extern "C" void setBck__10daB_ZANT_cFiUcff();
extern "C" void checkBck__10daB_ZANT_cFi();
extern "C" void setActionMode__10daB_ZANT_cFii();
extern "C" void checkBigDamage__10daB_ZANT_cFv();
extern "C" void checkDamageType__10daB_ZANT_cFv();
extern "C" void setDamageSe__10daB_ZANT_cFP8dCcD_Sphi();
extern "C" void damage_check__10daB_ZANT_cFv();
extern "C" void __as__8dCcD_SphFRC8dCcD_Sph();
extern "C" void __as__12dCcD_GObjInfFRC12dCcD_GObjInf();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void ice_damage_check__10daB_ZANT_cFv();
extern "C" void setNextDamageMode__10daB_ZANT_cFi();
extern "C" static void s_obj_sub__FPvPv();
extern "C" void checkAvoidWeapon__10daB_ZANT_cFi();
extern "C" void setTgHitBit__10daB_ZANT_cFi();
extern "C" void setCoHitBit__10daB_ZANT_cFi();
extern "C" void setTgShield__10daB_ZANT_cFi();
extern "C" void setTgType__10daB_ZANT_cFUl();
extern "C" void setZantMessage__10daB_ZANT_cFi();
extern "C" void doZantMessage__10daB_ZANT_cFv();
extern "C" void setIceLandingEffect__10daB_ZANT_cFi();
extern "C" void setWaterBubble__10daB_ZANT_cFv();
extern "C" void setMonkeyFallEffect__10daB_ZANT_cFv();
extern "C" void setLastRollEffect__10daB_ZANT_cFv();
extern "C" static void s_pillar_sub__FPvPv();
extern "C" void getMagicSpeed__10daB_ZANT_cFv();
extern "C" void getMagicWaterSpeed__10daB_ZANT_cFv();
extern "C" void executeSmallAttack__10daB_ZANT_cFv();
extern "C" void calcScale__10daB_ZANT_cFi();
extern "C" void executeWarp__10daB_ZANT_cFv();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void executeDamage__10daB_ZANT_cFv();
extern "C" void executeConfuse__10daB_ZANT_cFv();
extern "C" void executeOpening__10daB_ZANT_cFv();
extern "C" void executeFly__10daB_ZANT_cFv();
extern "C" void executeFlyGround__10daB_ZANT_cFv();
extern "C" void checkSwimLinkNearMouth__10daB_ZANT_cFv();
extern "C" void checkSwimLinkNear__10daB_ZANT_cFv();
extern "C" void executeHook__10daB_ZANT_cFv();
extern "C" void executeWater__10daB_ZANT_cFv();
extern "C" void executeSwim__10daB_ZANT_cFv();
extern "C" void executeSimaJump__10daB_ZANT_cFv();
extern "C" void executeIceDemo__10daB_ZANT_cFv();
extern "C" void executeIceJump__10daB_ZANT_cFv();
extern "C" void executeIceStep__10daB_ZANT_cFv();
extern "C" void executeIceDamage__10daB_ZANT_cFv();
extern "C" void setFarPillarPos__10daB_ZANT_cFv();
extern "C" void setNearPillarPos__10daB_ZANT_cFv();
extern "C" void setNextPillarInfo__10daB_ZANT_cFi();
extern "C" void setNextPillarPos__10daB_ZANT_cFv();
extern "C" void checkPillarSwing__10daB_ZANT_cFv();
extern "C" void executeMonkey__10daB_ZANT_cFv();
extern "C" void executeMonkeyFall__10daB_ZANT_cFv();
extern "C" void executeMonkeyDamage__10daB_ZANT_cFv();
extern "C" void setLastWarp__10daB_ZANT_cFii();
extern "C" void executeLastStartDemo__10daB_ZANT_cFv();
extern "C" void executeLastAttack__10daB_ZANT_cFv();
extern "C" void executeLastTired__10daB_ZANT_cFv();
extern "C" void executeLastDamage__10daB_ZANT_cFv();
extern "C" static void s_del_tp__FPvPv();
extern "C" void executeLastEndDemo__10daB_ZANT_cFv();
extern "C" void calcMahojinAnime__10daB_ZANT_cFv();
extern "C" void calcRoomChangeCamera__10daB_ZANT_cFi();
extern "C" void initNextRoom__10daB_ZANT_cFv();
extern "C" void executeRoomChange__10daB_ZANT_cFv();
extern "C" void setBaseActionMode__10daB_ZANT_cFi();
extern "C" void action__10daB_ZANT_cFv();
extern "C" void mtx_set__10daB_ZANT_cFv();
extern "C" void cc_set__10daB_ZANT_cFv();
extern "C" void cc_ice_set__10daB_ZANT_cFv();
extern "C" void execute__10daB_ZANT_cFv();
extern "C" static void daB_ZANT_Execute__FP10daB_ZANT_c();
extern "C" static bool daB_ZANT_IsDelete__FP10daB_ZANT_c();
extern "C" void _delete__10daB_ZANT_cFv();
extern "C" static void daB_ZANT_Delete__FP10daB_ZANT_c();
extern "C" void CreateHeap__10daB_ZANT_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void create__10daB_ZANT_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" static void daB_ZANT_Create__FP10daB_ZANT_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__14daB_ZANT_HIO_cFv();
extern "C" void __sinit_d_a_b_zant_cpp();
extern "C" static void func_8064EAE0();
extern "C" static void func_8064EAE8();
extern "C" static void func_8064EAF0();
extern "C" static void func_8064EAF8();
extern "C" static void func_8064EB00();
extern "C" extern char const* const d_a_b_zant__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void transM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
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
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_setStageLayer__FPv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorAngleX__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fopMsgM_SearchByID__FUi();
extern "C" void fopMsgM_messageSet__FUlUl();
extern "C" void fopMsgM_messageSetDemo__FUl();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcM_IsCreating__FUi();
extern "C" void dStage_RoomCheck__FP11cBgS_GndChk();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGp_setNextStage__FPCcsScSc();
extern "C" void dComIfGs_onOneZoneSwitch__Fii();
extern "C" void dComIfGs_offOneZoneSwitch__Fii();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void entry__10daMirror_cFP8J3DModel();
extern "C" void onDungeonItem__12dSv_memBit_cFi();
extern "C" void onSwitch__12dSv_danBit_cFi();
extern "C" void offSwitch__12dSv_danBit_cFi();
extern "C" void setRoom__13dSv_restart_cFRC4cXyzsSc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
setPoly__13dPa_control_cFUlUsR13cBgS_PolyInfoPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyziP18dPa_levelEcallBackScPC4cXyz();
extern "C" void addReal__21dDlst_shadowControl_cFUlP8J3DModel();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void LockonTarget__12dAttention_cFl();
extern "C" void LockonTruth__12dAttention_cFv();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetPolyAtt0__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __dt__18dBgS_ObjGndChk_AllFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void GetAtHitObj__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void getHitSeID__12dCcD_GObjInfFUci();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void pl_cut_LRC__Fi();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void checkIronBallThrowMode__9daAlink_cCFv();
extern "C" void checkIronBallThrowReturnMode__9daAlink_cCFv();
extern "C" void checkMasterSwordEquip__9daPy_py_cFv();
extern "C" void getThrowBoomerangActor__9daPy_py_cFv();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void dCam_getBody__Fv();
extern "C" void Eye__9dCamera_cFv();
extern "C" void Center__9dCamera_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_custom_colset__FUcUcf();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcPos__FP4cXyzRC4cXyzfff();
extern "C" void cLib_addCalcPosXZ__FP4cXyzRC4cXyzfff();
extern "C" void cLib_addCalcPos2__FP4cXyzRC4cXyzff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chasePosXZ__FP4cXyzRC4cXyzf();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_targetAngleX__FPC4cXyzPC4cXyz();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void cLib_distanceAngleS__Fss();
extern "C" void bgmStart__8Z2SeqMgrFUlUll();
extern "C" void bgmStop__8Z2SeqMgrFUll();
extern "C" void changeBgmStatus__8Z2SeqMgrFl();
extern "C" void setDemoName__11Z2StatusMgrFPc();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __copy();
extern "C" void __construct_array();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_20();
extern "C" void _savegpr_21();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_21();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__18dBgS_ObjGndChk_All[12];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mStatus__20dStage_roomControl_c[65792];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u8 pauseTimer__9dScnPly_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();
extern "C" void setSnortEffect__11daB_ZANTZ_cFi();
extern "C" void setMouthMode__11daB_ZANTZ_cFUc();
extern "C" void setAppearMode__11daB_ZANTZ_cFUc();

//
// Declarations:
//

/* ############################################################################################## */
/* 8064EB1C-8064EB28 000000 000C+00 44/44 0/0 0/0 .rodata          @3757 */
SECTION_RODATA static u8 const lit_3757[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8064EB1C, &lit_3757);

/* 8064EB28-8064EB2C 00000C 0004+00 6/38 0/0 0/0 .rodata          @4169 */
SECTION_RODATA static f32 const lit_4169 = 1.0f;
COMPILER_STRIP_GATE(0x8064EB28, &lit_4169);

/* 8064EB2C-8064EB30 000010 0004+00 0/13 0/0 0/0 .rodata          @4170 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4170 = 10.0f;
COMPILER_STRIP_GATE(0x8064EB2C, &lit_4170);
#pragma pop

/* 8064EB30-8064EB34 000014 0004+00 0/4 0/0 0/0 .rodata          @4171 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4171 = 15.0f;
COMPILER_STRIP_GATE(0x8064EB30, &lit_4171);
#pragma pop

/* 8064EB34-8064EB38 000018 0004+00 0/1 0/0 0/0 .rodata          @4172 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4172 = 17.0f / 10.0f;
COMPILER_STRIP_GATE(0x8064EB34, &lit_4172);
#pragma pop

/* 8064EB38-8064EB3C 00001C 0004+00 0/8 0/0 0/0 .rodata          @4173 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4173 = 100.0f;
COMPILER_STRIP_GATE(0x8064EB38, &lit_4173);
#pragma pop

/* 8064EB3C-8064EB40 000020 0004+00 0/1 0/0 0/0 .rodata          @4174 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4174 = 40.0f;
COMPILER_STRIP_GATE(0x8064EB3C, &lit_4174);
#pragma pop

/* 8064EB40-8064EB44 000024 0004+00 0/3 0/0 0/0 .rodata          @4175 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4175 = 22.0f;
COMPILER_STRIP_GATE(0x8064EB40, &lit_4175);
#pragma pop

/* 8064EB44-8064EB48 000028 0004+00 3/43 0/0 0/0 .rodata          @4176 */
SECTION_RODATA static u8 const lit_4176[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8064EB44, &lit_4176);

/* 8064EB48-8064EB4C 00002C 0004+00 0/2 0/0 0/0 .rodata          @4177 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4177 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x8064EB48, &lit_4177);
#pragma pop

/* 8064EB4C-8064EB50 000030 0004+00 0/10 0/0 0/0 .rodata          @4178 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4178 = 0.5f;
COMPILER_STRIP_GATE(0x8064EB4C, &lit_4178);
#pragma pop

/* 8064EB50-8064EB54 000034 0004+00 0/5 0/0 0/0 .rodata          @4179 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4179 = 200.0f;
COMPILER_STRIP_GATE(0x8064EB50, &lit_4179);
#pragma pop

/* 8064EB54-8064EB58 000038 0004+00 0/4 0/0 0/0 .rodata          @4180 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4180 = -100.0f;
COMPILER_STRIP_GATE(0x8064EB54, &lit_4180);
#pragma pop

/* 8064EB58-8064EB5C 00003C 0004+00 1/6 0/0 0/0 .rodata          @4181 */
SECTION_RODATA static f32 const lit_4181 = 2.0f;
COMPILER_STRIP_GATE(0x8064EB58, &lit_4181);

/* 8064EE8C-8064EE98 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8064EE98-8064EEAC 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 8064EEAC-8064EEEC 000020 0040+00 0/1 0/0 0/0 .data cc_zant_src__24@unnamed@d_a_b_zant_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8064EEAC[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x75, 0x09, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8064EEEC-8064EF2C 000060 0040+00 0/1 0/0 0/0 .data
 * cc_zant_sword_src__24@unnamed@d_a_b_zant_cpp@                */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8064EEEC[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8064EF2C-8064EF70 0000A0 0044+00 0/1 0/0 0/0 .data cc_zant_roll_src__24@unnamed@d_a_b_zant_cpp@
 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8064EF2C[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x74,
    0x09, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8064EF70-8064EFB0 0000E4 0040+00 0/1 0/0 0/0 .data cc_zant_foot_src__24@unnamed@d_a_b_zant_cpp@
 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8064EF70[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x0A, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8064EFB0-8064EFF0 000124 0040+00 0/1 0/0 0/0 .data
 * cc_zant_foot_src2__24@unnamed@d_a_b_zant_cpp@                */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8064EFB0[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E,
    0xD8, 0xBB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x75, 0x09, 0x00, 0x0D, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8064EFF0-8064F030 000164 0040+00 0/1 0/0 0/0 .data
 * cc_zant_camera_src__24@unnamed@d_a_b_zant_cpp@               */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8064EFF0[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E,
    0xD8, 0xBB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x09, 0x00, 0x0D, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8064F030-8064F038 0001A4 0007+01 4/4 0/0 0/0 .data warp_next_room__24@unnamed@d_a_b_zant_cpp@
 */
SECTION_DATA static u8 data_8064F030[7 + 1 /* padding */] = {
    0x32,
    0x35,
    0x36,
    0x37,
    0x38,
    0x39,
    0x3C,
    /* padding */
    0x00,
};

/* 8064F038-8064F044 0001AC 000C+00 1/1 0/0 0/0 .data            l_landing_effect_id$5199 */
SECTION_DATA static u8 l_landing_effect_id_5199[12] = {
    0x86, 0xDC, 0x86, 0xDD, 0x86, 0xDE, 0x86, 0xDF, 0x86, 0xE0, 0x86, 0xE1,
};

/* 8064F044-8064F04C 0001B8 0006+02 1/1 0/0 0/0 .data            l_landing_effect_id$5284 */
SECTION_DATA static u8 l_landing_effect_id_5284[6 + 2 /* padding */] = {
    0x89,
    0x01,
    0x89,
    0x02,
    0x89,
    0x03,
    /* padding */
    0x00,
    0x00,
};

/* 8064F04C-8064F050 0001C0 0004+00 1/1 0/0 0/0 .data            l_roll_effect_id$5301 */
SECTION_DATA static u8 l_roll_effect_id[4] = {
    0x89,
    0x04,
    0x89,
    0x05,
};

/* 8064F050-8064F058 0001C4 0008+00 1/1 0/0 0/0 .data            w_eff_id$6078 */
SECTION_DATA static u8 w_eff_id[8] = {
    0x01, 0xB8, 0x01, 0xB9, 0x01, 0xBA, 0x01, 0xBB,
};

/* 8064F058-8064F094 -00001 003C+00 1/1 0/0 0/0 .data            @6173 */
SECTION_DATA static void* lit_6173[15] = {
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0xB4),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x104),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x6B0),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x6B0),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x6B0),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x6B0),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x6B0),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x6B0),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x6B0),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x6B0),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x1E8),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x264),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x264),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x2F4),
    (void*)(((char*)executeFly__10daB_ZANT_cFv) + 0x5A4),
};

/* 8064F094-8064F110 -00001 007C+00 1/1 0/0 0/0 .data            @6631 */
SECTION_DATA static void* lit_6631[31] = {
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0xB8),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x158),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x1E0),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x49C),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x58C),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x734),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x79C),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x80C),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9C4),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x844),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x94C),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x970),
    (void*)(((char*)executeWater__10daB_ZANT_cFv) + 0x9A8),
};

/* 8064F110-8064F140 -00001 0030+00 1/1 0/0 0/0 .data            @6869 */
SECTION_DATA static void* lit_6869[12] = {
    (void*)(((char*)executeSwim__10daB_ZANT_cFv) + 0x1AC),
    (void*)(((char*)executeSwim__10daB_ZANT_cFv) + 0x1F0),
    (void*)(((char*)executeSwim__10daB_ZANT_cFv) + 0x1F0),
    (void*)(((char*)executeSwim__10daB_ZANT_cFv) + 0x2DC),
    (void*)(((char*)executeSwim__10daB_ZANT_cFv) + 0x2DC),
    (void*)(((char*)executeSwim__10daB_ZANT_cFv) + 0x910),
    (void*)(((char*)executeSwim__10daB_ZANT_cFv) + 0x808),
    (void*)(((char*)executeSwim__10daB_ZANT_cFv) + 0x88C),
    (void*)(((char*)executeSwim__10daB_ZANT_cFv) + 0x910),
    (void*)(((char*)executeSwim__10daB_ZANT_cFv) + 0x910),
    (void*)(((char*)executeSwim__10daB_ZANT_cFv) + 0xC8),
    (void*)(((char*)executeSwim__10daB_ZANT_cFv) + 0x130),
};

/* 8064F140-8064F160 -00001 0020+00 1/1 0/0 0/0 .data            @7421 */
SECTION_DATA static void* lit_7421[8] = {
    (void*)(((char*)executeIceJump__10daB_ZANT_cFv) + 0x18C),
    (void*)(((char*)executeIceJump__10daB_ZANT_cFv) + 0x1E0),
    (void*)(((char*)executeIceJump__10daB_ZANT_cFv) + 0x214),
    (void*)(((char*)executeIceJump__10daB_ZANT_cFv) + 0x264),
    (void*)(((char*)executeIceJump__10daB_ZANT_cFv) + 0x2B8),
    (void*)(((char*)executeIceJump__10daB_ZANT_cFv) + 0x7C4),
    (void*)(((char*)executeIceJump__10daB_ZANT_cFv) + 0x7C4),
    (void*)(((char*)executeIceJump__10daB_ZANT_cFv) + 0xAB0),
};

/* 8064F160-8064F208 -00001 00A8+00 1/1 0/0 0/0 .data            @7981 */
SECTION_DATA static void* lit_7981[42] = {
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0xE4),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0xE4),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x1C4),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x350),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x3C0),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x660),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x6F4),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x774),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x78C),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x7E0),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x868),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x938),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x81C),
    (void*)(((char*)executeIceDamage__10daB_ZANT_cFv) + 0x850),
};

/* 8064F208-8064F25C -00001 0054+00 1/1 0/0 0/0 .data            @8454 */
SECTION_DATA static void* lit_8454[21] = {
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x44),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0xCC),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0xEC),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x124),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x234),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x2F8),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x338),
    (void*)(((char*)executeMonkeyFall__10daB_ZANT_cFv) + 0x44),
};

/* 8064F25C-8064F278 -00001 001C+00 1/1 0/0 0/0 .data            @8803 */
SECTION_DATA static void* lit_8803[7] = {
    (void*)(((char*)executeLastStartDemo__10daB_ZANT_cFv) + 0x68),
    (void*)(((char*)executeLastStartDemo__10daB_ZANT_cFv) + 0x12C),
    (void*)(((char*)executeLastStartDemo__10daB_ZANT_cFv) + 0x1A0),
    (void*)(((char*)executeLastStartDemo__10daB_ZANT_cFv) + 0x24C),
    (void*)(((char*)executeLastStartDemo__10daB_ZANT_cFv) + 0x2AC),
    (void*)(((char*)executeLastStartDemo__10daB_ZANT_cFv) + 0x368),
    (void*)(((char*)executeLastStartDemo__10daB_ZANT_cFv) + 0x3E0),
};

/* 8064F278-8064F2F8 -00001 0080+00 1/1 0/0 0/0 .data            @9169 */
SECTION_DATA static void* lit_9169[32] = {
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x60),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0xAC),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x1EC),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x318),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x404),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x978),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0xA74),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0xF20),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x1020),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x930),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x10C4),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0x978),
    (void*)(((char*)executeLastAttack__10daB_ZANT_cFv) + 0xA74),
};

/* 8064F2F8-8064F350 -00001 0058+00 1/1 0/0 0/0 .data            @9307 */
SECTION_DATA static void* lit_9307[22] = {
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x44),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x44),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x44),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x228),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x478),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x4D0),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x580),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x520),
    (void*)(((char*)executeLastDamage__10daB_ZANT_cFv) + 0x558),
};

/* 8064F350-8064F368 0004C4 0018+00 1/1 0/0 0/0 .data            mahojin_se$9642 */
SECTION_DATA static u8 mahojin_se[24] = {
    0x00, 0x07, 0x04, 0x13, 0x00, 0x07, 0x04, 0x14, 0x00, 0x07, 0x04, 0x15,
    0x00, 0x07, 0x04, 0x16, 0x00, 0x07, 0x04, 0x17, 0x00, 0x07, 0x04, 0x18,
};

/* 8064F368-8064F3AC -00001 0044+00 1/1 0/0 0/0 .data            @9790 */
SECTION_DATA static void* lit_9790[17] = {
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x68),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x1D4),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x8D4),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x8D4),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x210),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x8D4),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x8D4),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x8D4),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x8D4),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x8D4),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x3B4),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x4A0),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x520),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x540),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x5C4),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x76C),
    (void*)(((char*)executeRoomChange__10daB_ZANT_cFv) + 0x7E0),
};

/* 8064F3AC-8064F3C8 -00001 001C+00 1/1 0/0 0/0 .data            @9869 */
SECTION_DATA static void* lit_9869[7] = {
    (void*)(((char*)setBaseActionMode__10daB_ZANT_cFi) + 0x3BC),
    (void*)(((char*)setBaseActionMode__10daB_ZANT_cFi) + 0x44),
    (void*)(((char*)setBaseActionMode__10daB_ZANT_cFi) + 0x178),
    (void*)(((char*)setBaseActionMode__10daB_ZANT_cFi) + 0x238),
    (void*)(((char*)setBaseActionMode__10daB_ZANT_cFi) + 0x320),
    (void*)(((char*)setBaseActionMode__10daB_ZANT_cFi) + 0x1F0),
    (void*)(((char*)setBaseActionMode__10daB_ZANT_cFi) + 0x370),
};

/* 8064F3C8-8064F428 -00001 0060+00 1/1 0/0 0/0 .data            @9987 */
SECTION_DATA static void* lit_9987[24] = {
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x5C),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x68),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x74),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x80),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x8C),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x98),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0xA4),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0xB0),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0xBC),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0xC8),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0xD4),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0xE0),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0xEC),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0xF8),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x104),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x110),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x11C),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x128),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x134),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x140),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x14C),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x158),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x164),
    (void*)(((char*)action__10daB_ZANT_cFv) + 0x170),
};

/* 8064F428-8064F4AC 00059C 0084+00 1/1 0/0 0/0 .data            ice_sph_jnt$10159 */
SECTION_DATA static u8 ice_sph_jnt[132] = {
    0x00, 0x00, 0x00, 0x23, 0x41, 0x20, 0x00, 0x00, 0x41, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x22, 0x41, 0xA0, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00,
    0x00, 0x00, 0x41, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x41, 0xA0, 0x00, 0x00, 0x41,
    0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x41, 0x20, 0x00, 0x00, 0x41, 0x70, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x25, 0x41, 0xA0, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x25, 0x00, 0x00, 0x00, 0x00, 0x41, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x41, 0xA0,
    0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x42,
    0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x41, 0xA0, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x41, 0xA0, 0x00, 0x00, 0x41, 0xC8, 0x00, 0x00,
};

/* 8064F4AC-8064F4CC -00001 0020+00 1/0 0/0 0/0 .data            l_daB_ZANT_Method */
static actor_method_class l_daB_ZANT_Method = {
    (process_method_func)daB_ZANT_Create__FP10daB_ZANT_c,
    (process_method_func)daB_ZANT_Delete__FP10daB_ZANT_c,
    (process_method_func)daB_ZANT_Execute__FP10daB_ZANT_c,
    (process_method_func)daB_ZANT_IsDelete__FP10daB_ZANT_c,
    (process_method_func)daB_ZANT_Draw__FP10daB_ZANT_c,
};

/* 8064F4CC-8064F4FC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_ZANT */
extern actor_process_profile_definition g_profile_B_ZANT = {
  fpcLy_CURRENT_e,              // mLayerID
  4,                            // mListID
  fpcPi_CURRENT_e,              // mListPrio
  PROC_B_ZANT,                  // mProcName
  &g_fpcLf_Method.mBase,        // sub_method
  sizeof(daB_ZANT_c),           // mSize
  0,                            // mSizeOther
  0,                            // mParameters
  &g_fopAc_Method.base,         // sub_method
  226,                          // mPriority
  &l_daB_ZANT_Method,           // sub_method
  0x00040000,                   // mStatus
  fopAc_ENEMY_e,                // mActorType
  fopAc_CULLBOX_CUSTOM_e,       // cullType
};

/* 8064F4FC-8064F508 000670 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 8064F508-8064F514 00067C 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 8064F514-8064F520 000688 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 8064F520-8064F52C 000694 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 8064F52C-8064F550 0006A0 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8064EB00,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8064EAF8,
};

/* 8064F550-8064F55C 0006C4 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8064F55C-8064F58C 0006D0 0030+00 3/3 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8064EAE0,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8064EAF0,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8064EAE8,
};

/* 8064F58C-8064F598 000700 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 8064F598-8064F5A4 00070C 000C+00 5/5 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8064F5A4-8064F5B0 000718 000C+00 2/2 0/0 0/0 .data            __vt__14daB_ZANT_HIO_c */
SECTION_DATA extern void* __vt__14daB_ZANT_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daB_ZANT_HIO_cFv,
};

/* 8063E10C-8063E19C 0000EC 0090+00 1/1 0/0 0/0 .text            __ct__14daB_ZANT_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_ZANT_HIO_c::daB_ZANT_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__ct__14daB_ZANT_HIO_cFv.s"
}
#pragma pop

/* 8063E19C-8063E264 00017C 00C8+00 1/1 0/0 0/0 .text ctrlJoint__10daB_ZANT_cFP8J3DJointP8J3DModel
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/ctrlJoint__10daB_ZANT_cFP8J3DJointP8J3DModel.s"
}
#pragma pop

/* 8063E264-8063E2B0 000244 004C+00 1/1 0/0 0/0 .text JointCallBack__10daB_ZANT_cFP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::JointCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/JointCallBack__10daB_ZANT_cFP8J3DJointi.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EB5C-8064EB74 000040 0018+00 1/4 0/0 0/0 .rodata iron_tg_cc__24@unnamed@d_a_b_zant_cpp@ */
SECTION_RODATA static u8 const data_8064EB5C[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06,
};
COMPILER_STRIP_GATE(0x8064EB5C, &data_8064EB5C);

/* 8064EB74-8064EB78 000058 0004+00 0/1 0/0 0/0 .rodata          @4333 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4333 = 2000.0f;
COMPILER_STRIP_GATE(0x8064EB74, &lit_4333);
#pragma pop

/* 8064EB78-8064EB7C 00005C 0004+00 0/23 0/0 0/0 .rodata          @4334 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4334 = 3.0f;
COMPILER_STRIP_GATE(0x8064EB78, &lit_4334);
#pragma pop

/* 8064EB7C-8064EB80 000060 0004+00 0/2 0/0 0/0 .rodata          @4335 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4335 = 1500.0f;
COMPILER_STRIP_GATE(0x8064EB7C, &lit_4335);
#pragma pop

/* 8064EB80-8064EB84 000064 0004+00 0/4 0/0 0/0 .rodata          @4336 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4336 = 800.0f;
COMPILER_STRIP_GATE(0x8064EB80, &lit_4336);
#pragma pop

/* 8063E2B0-8063E568 000290 02B8+00 1/1 0/0 0/0 .text            draw__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::draw() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/draw__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8063E568-8063E5A4 000548 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__dt__4cXyzFv.s"
}
#pragma pop

/* 8063E5A4-8063E5C4 000584 0020+00 1/0 0/0 0/0 .text            daB_ZANT_Draw__FP10daB_ZANT_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_ZANT_Draw(daB_ZANT_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/daB_ZANT_Draw__FP10daB_ZANT_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EB84-8064EB88 000068 0004+00 1/2 0/0 0/0 .rodata          @4348 */
SECTION_RODATA static f32 const lit_4348 = -1.0f;
COMPILER_STRIP_GATE(0x8064EB84, &lit_4348);

/* 8064EE60-8064EE60 000344 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8064EE60 = "B_zan";
#pragma pop

/* 8063E5C4-8063E668 0005A4 00A4+00 23/23 0/0 0/0 .text            setBck__10daB_ZANT_cFiUcff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setBck(int param_0, u8 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setBck__10daB_ZANT_cFiUcff.s"
}
#pragma pop

/* 8063E668-8063E6C4 000648 005C+00 3/3 0/0 0/0 .text            checkBck__10daB_ZANT_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::checkBck(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/checkBck__10daB_ZANT_cFi.s"
}
#pragma pop

/* 8063E6C4-8063E6F8 0006A4 0034+00 24/24 0/0 0/0 .text            setActionMode__10daB_ZANT_cFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setActionMode(int param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setActionMode__10daB_ZANT_cFii.s"
}
#pragma pop

/* 8063E6F8-8063E79C 0006D8 00A4+00 2/2 0/0 0/0 .text            checkBigDamage__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::checkBigDamage() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/checkBigDamage__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8063E79C-8063E810 00077C 0074+00 2/2 0/0 0/0 .text            checkDamageType__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::checkDamageType() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/checkDamageType__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8063E810-8063E938 0007F0 0128+00 2/2 0/0 0/0 .text setDamageSe__10daB_ZANT_cFP8dCcD_Sphi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setDamageSe(dCcD_Sph* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setDamageSe__10daB_ZANT_cFP8dCcD_Sphi.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EB88-8064EB8C 00006C 0004+00 0/4 0/0 0/0 .rodata          @4706 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4706 = 19.0f / 10.0f;
COMPILER_STRIP_GATE(0x8064EB88, &lit_4706);
#pragma pop

/* 8064EB8C-8064EB94 000070 0008+00 0/5 0/0 0/0 .rodata          @4708 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4708[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8064EB8C, &lit_4708);
#pragma pop

/* 8064F5B8-8064F5BC 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8064F5BC-8064F5C0 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 8064F5C0-8064F5C4 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8064F5C4-8064F5C8 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 8064F5C8-8064F5CC 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 8064F5CC-8064F5D0 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 8064F5D0-8064F5D4 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8064F5D4-8064F5D8 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 8064F5D8-8064F5DC 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 8064F5DC-8064F5E0 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 8064F5E0-8064F5E4 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8064F5E4-8064F5E8 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 8064F5E8-8064F5EC 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 8064F5EC-8064F5F0 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 8064F5F0-8064F5F4 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8064F5F4-8064F5F8 -00001 0004+00 2/2 0/0 0/0 .bss             None */
/* 8064F5F4 0001+00 data_8064F5F4 @1009 */
/* 8064F5F5 0003+00 data_8064F5F5 None */
static u8 struct_8064F5F4[4];

/* 8064F5F8-8064F604 000048 000C+00 0/1 0/0 0/0 .bss             @4164 */
#pragma push
#pragma force_active on
static u8 lit_4164[12];
#pragma pop

/* 8064F604-8064F648 000054 0044+00 12/13 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[68];

/* 8064F648-8064F654 000098 000C+00 0/1 0/0 0/0 .bss             @4182 */
#pragma push
#pragma force_active on
static u8 lit_4182[12];
#pragma pop

/* 8064F654-8064F660 0000A4 000C+00 0/1 0/0 0/0 .bss             @4183 */
#pragma push
#pragma force_active on
static u8 lit_4183[12];
#pragma pop

/* 8064F660-8064F66C 0000B0 000C+00 0/1 0/0 0/0 .bss             @4184 */
#pragma push
#pragma force_active on
static u8 lit_4184[12];
#pragma pop

/* 8064F66C-8064F690 0000BC 0024+00 4/5 0/0 0/0 .bss fly_warp_pos__24@unnamed@d_a_b_zant_cpp@ */
static u8 data_8064F66C[36];

/* 8063E938-8063F0F4 000918 07BC+00 1/1 0/0 0/0 .text            damage_check__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::damage_check() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/damage_check__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8063F0F4-8063F180 0010D4 008C+00 1/1 0/0 0/0 .text            __as__8dCcD_SphFRC8dCcD_Sph */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void dCcD_Sph::operator=(dCcD_Sph const& param_0) {
extern "C" asm void __as__8dCcD_SphFRC8dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__as__8dCcD_SphFRC8dCcD_Sph.s"
}
#pragma pop

/* 8063F180-8063F3C8 001160 0248+00 1/1 0/0 0/0 .text __as__12dCcD_GObjInfFRC12dCcD_GObjInf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void dCcD_GObjInf::operator=(dCcD_GObjInf const& param_0) {
extern "C" asm void __as__12dCcD_GObjInfFRC12dCcD_GObjInf() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__as__12dCcD_GObjInfFRC12dCcD_GObjInf.s"
}
#pragma pop

/* 8063F3C8-8063F494 0013A8 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Sph::~dCcD_Sph() {
extern "C" asm void __dt__8dCcD_SphFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 8063F494-8063F4DC 001474 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 8063F4DC-8063F524 0014BC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8063F524-8063F84C 001504 0328+00 1/1 0/0 0/0 .text            ice_damage_check__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::ice_damage_check() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/ice_damage_check__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8063F84C-8063F970 00182C 0124+00 3/3 0/0 0/0 .text            setNextDamageMode__10daB_ZANT_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setNextDamageMode(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setNextDamageMode__10daB_ZANT_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EB94-8064EB98 000078 0004+00 0/11 0/0 0/0 .rodata          @4938 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4938 = 300.0f;
COMPILER_STRIP_GATE(0x8064EB94, &lit_4938);
#pragma pop

/* 8064EB98-8064EB9C 00007C 0004+00 0/5 0/0 0/0 .rodata          @4939 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4939 = 700.0f;
COMPILER_STRIP_GATE(0x8064EB98, &lit_4939);
#pragma pop

/* 8063F970-8063FAB4 001950 0144+00 1/1 0/0 0/0 .text            s_obj_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_obj_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/s_obj_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EB9C-8064EBA4 000080 0008+00 0/9 0/0 0/0 .rodata          @5084 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5084[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8064EB9C, &lit_5084);
#pragma pop

/* 8064EBA4-8064EBAC 000088 0008+00 0/9 0/0 0/0 .rodata          @5085 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5085[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8064EBA4, &lit_5085);
#pragma pop

/* 8064EBAC-8064EBB4 000090 0008+00 0/9 0/0 0/0 .rodata          @5086 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5086[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8064EBAC, &lit_5086);
#pragma pop

/* 8063FAB4-8063FF6C 001A94 04B8+00 3/3 0/0 0/0 .text            checkAvoidWeapon__10daB_ZANT_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::checkAvoidWeapon(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/checkAvoidWeapon__10daB_ZANT_cFi.s"
}
#pragma pop

/* 8063FF6C-8063FFAC 001F4C 0040+00 18/18 0/0 0/0 .text            setTgHitBit__10daB_ZANT_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setTgHitBit(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setTgHitBit__10daB_ZANT_cFi.s"
}
#pragma pop

/* 8063FFAC-8063FFEC 001F8C 0040+00 2/2 0/0 0/0 .text            setCoHitBit__10daB_ZANT_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setCoHitBit(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setCoHitBit__10daB_ZANT_cFi.s"
}
#pragma pop

/* 8063FFEC-806400BC 001FCC 00D0+00 2/2 0/0 0/0 .text            setTgShield__10daB_ZANT_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setTgShield(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setTgShield__10daB_ZANT_cFi.s"
}
#pragma pop

/* 806400BC-806400C8 00209C 000C+00 3/3 0/0 0/0 .text            setTgType__10daB_ZANT_cFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setTgType(u32 param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setTgType__10daB_ZANT_cFUl.s"
}
#pragma pop

/* 806400C8-80640104 0020A8 003C+00 1/1 0/0 0/0 .text            setZantMessage__10daB_ZANT_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setZantMessage(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setZantMessage__10daB_ZANT_cFi.s"
}
#pragma pop

/* 80640104-80640180 0020E4 007C+00 1/1 0/0 0/0 .text            doZantMessage__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::doZantMessage() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/doZantMessage__10daB_ZANT_cFv.s"
}
#pragma pop

/* 80640180-80640310 002160 0190+00 2/2 0/0 0/0 .text            setIceLandingEffect__10daB_ZANT_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setIceLandingEffect(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setIceLandingEffect__10daB_ZANT_cFi.s"
}
#pragma pop

/* 80640310-806403D4 0022F0 00C4+00 1/1 0/0 0/0 .text            setWaterBubble__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setWaterBubble() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setWaterBubble__10daB_ZANT_cFv.s"
}
#pragma pop

/* 806403D4-80640478 0023B4 00A4+00 1/1 0/0 0/0 .text            setMonkeyFallEffect__10daB_ZANT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setMonkeyFallEffect() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setMonkeyFallEffect__10daB_ZANT_cFv.s"
}
#pragma pop

/* 80640478-80640584 002458 010C+00 1/1 0/0 0/0 .text            setLastRollEffect__10daB_ZANT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setLastRollEffect() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setLastRollEffect__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064F690-8064F694 0000E0 0004+00 2/2 0/0 0/0 .bss             target_info_count */
static u8 target_info_count[4];

/* 80640584-80640654 002564 00D0+00 1/1 0/0 0/0 .text            s_pillar_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_pillar_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/s_pillar_sub__FPvPv.s"
}
#pragma pop

/* 80640654-80640664 002634 0010+00 0/0 0/0 1/1 .text            getMagicSpeed__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::getMagicSpeed() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/getMagicSpeed__10daB_ZANT_cFv.s"
}
#pragma pop

/* 80640664-80640674 002644 0010+00 0/0 0/0 1/1 .text            getMagicWaterSpeed__10daB_ZANT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::getMagicWaterSpeed() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/getMagicWaterSpeed__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EBB4-8064EBB8 000098 0004+00 0/2 0/0 0/0 .rodata          @5492 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5492 = 16.0f;
COMPILER_STRIP_GATE(0x8064EBB4, &lit_5492);
#pragma pop

/* 8064EBB8-8064EBBC 00009C 0004+00 0/3 0/0 0/0 .rodata          @5493 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5493 = 13.0f;
COMPILER_STRIP_GATE(0x8064EBB8, &lit_5493);
#pragma pop

/* 8064EBBC-8064EBC0 0000A0 0004+00 0/2 0/0 0/0 .rodata          @5494 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5494 = 9.0f;
COMPILER_STRIP_GATE(0x8064EBBC, &lit_5494);
#pragma pop

/* 8064EBC0-8064EBC4 0000A4 0004+00 0/4 0/0 0/0 .rodata          @5495 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5495 = 19.0f;
COMPILER_STRIP_GATE(0x8064EBC0, &lit_5495);
#pragma pop

/* 80640674-80640C20 002654 05AC+00 1/1 0/0 0/0 .text            executeSmallAttack__10daB_ZANT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeSmallAttack() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeSmallAttack__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EBC4-8064EBC8 0000A8 0004+00 0/1 0/0 0/0 .rodata          @5510 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5510 = 0.25f;
COMPILER_STRIP_GATE(0x8064EBC4, &lit_5510);
#pragma pop

/* 8064EBC8-8064EBCC 0000AC 0004+00 0/7 0/0 0/0 .rodata          @5511 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5511 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8064EBC8, &lit_5511);
#pragma pop

/* 8064EBCC-8064EBD0 0000B0 0004+00 0/2 0/0 0/0 .rodata          @5512 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5512 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x8064EBCC, &lit_5512);
#pragma pop

/* 80640C20-80640D14 002C00 00F4+00 3/3 0/0 0/0 .text            calcScale__10daB_ZANT_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::calcScale(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/calcScale__10daB_ZANT_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EBD0-8064EBD4 0000B4 0004+00 0/1 0/0 0/0 .rodata          @5606 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5606 = -1000000000.0f;
COMPILER_STRIP_GATE(0x8064EBD0, &lit_5606);
#pragma pop

/* 80640D14-80641230 002CF4 051C+00 1/1 0/0 0/0 .text            executeWarp__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeWarp() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeWarp__10daB_ZANT_cFv.s"
}
#pragma pop

/* 80641230-806412A8 003210 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
extern "C" asm void __dt__14dBgS_ObjGndChkFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* 806412A8-806414E4 003288 023C+00 1/1 0/0 0/0 .text            executeDamage__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeDamage() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeDamage__10daB_ZANT_cFv.s"
}
#pragma pop

/* 806414E4-80641640 0034C4 015C+00 1/1 0/0 0/0 .text            executeConfuse__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeConfuse() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeConfuse__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EBD4-8064EBD8 0000B8 0004+00 0/1 0/0 0/0 .rodata          @5990 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5990 = 160.0f;
COMPILER_STRIP_GATE(0x8064EBD4, &lit_5990);
#pragma pop

/* 8064EBD8-8064EBDC 0000BC 0004+00 0/1 0/0 0/0 .rodata          @5991 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5991 = -700.0f;
COMPILER_STRIP_GATE(0x8064EBD8, &lit_5991);
#pragma pop

/* 8064EBDC-8064EBE0 0000C0 0004+00 0/1 0/0 0/0 .rodata          @5992 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5992 = 220.0f;
COMPILER_STRIP_GATE(0x8064EBDC, &lit_5992);
#pragma pop

/* 8064EBE0-8064EBE4 0000C4 0004+00 0/2 0/0 0/0 .rodata          @5993 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5993 = 175.0f;
COMPILER_STRIP_GATE(0x8064EBE0, &lit_5993);
#pragma pop

/* 8064EBE4-8064EBE8 0000C8 0004+00 0/1 0/0 0/0 .rodata          @5994 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5994 = 270.0f;
COMPILER_STRIP_GATE(0x8064EBE4, &lit_5994);
#pragma pop

/* 8064EBE8-8064EBEC 0000CC 0004+00 0/1 0/0 0/0 .rodata          @5995 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5995 = -194.0f;
COMPILER_STRIP_GATE(0x8064EBE8, &lit_5995);
#pragma pop

/* 8064EBEC-8064EBF0 0000D0 0004+00 0/7 0/0 0/0 .rodata          @5996 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5996 = 30.0f;
COMPILER_STRIP_GATE(0x8064EBEC, &lit_5996);
#pragma pop

/* 8064EBF0-8064EBF4 0000D4 0004+00 0/1 0/0 0/0 .rodata          @5997 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5997 = 81.0f;
COMPILER_STRIP_GATE(0x8064EBF0, &lit_5997);
#pragma pop

/* 8064EBF4-8064EBF8 0000D8 0004+00 0/1 0/0 0/0 .rodata          @5998 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5998 = -187.0f;
COMPILER_STRIP_GATE(0x8064EBF4, &lit_5998);
#pragma pop

/* 8064EBF8-8064EBFC 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5999 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5999 = 67.0f;
COMPILER_STRIP_GATE(0x8064EBF8, &lit_5999);
#pragma pop

/* 8064EBFC-8064EC00 0000E0 0004+00 0/1 0/0 0/0 .rodata          @6000 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6000 = -408.0f;
COMPILER_STRIP_GATE(0x8064EBFC, &lit_6000);
#pragma pop

/* 8064EC00-8064EC04 0000E4 0004+00 0/1 0/0 0/0 .rodata          @6001 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6001 = 43.0f / 10.0f;
COMPILER_STRIP_GATE(0x8064EC00, &lit_6001);
#pragma pop

/* 8064EC04-8064EC08 0000E8 0004+00 0/3 0/0 0/0 .rodata          @6002 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6002 = 6.0f;
COMPILER_STRIP_GATE(0x8064EC04, &lit_6002);
#pragma pop

/* 8064EC08-8064EC0C 0000EC 0004+00 0/4 0/0 0/0 .rodata          @6003 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6003 = 5.0f;
COMPILER_STRIP_GATE(0x8064EC08, &lit_6003);
#pragma pop

/* 8064EC0C-8064EC10 0000F0 0004+00 0/1 0/0 0/0 .rodata          @6004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6004 = 86.0f;
COMPILER_STRIP_GATE(0x8064EC0C, &lit_6004);
#pragma pop

/* 8064EC10-8064EC14 0000F4 0004+00 0/1 0/0 0/0 .rodata          @6005 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6005 = -9.0f;
COMPILER_STRIP_GATE(0x8064EC10, &lit_6005);
#pragma pop

/* 8064EC14-8064EC18 0000F8 0004+00 0/1 0/0 0/0 .rodata          @6006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6006 = -209.0f;
COMPILER_STRIP_GATE(0x8064EC14, &lit_6006);
#pragma pop

/* 8064EC18-8064EC1C 0000FC 0004+00 0/2 0/0 0/0 .rodata          @6007 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6007 = 26.0f;
COMPILER_STRIP_GATE(0x8064EC18, &lit_6007);
#pragma pop

/* 8064EC1C-8064EC20 000100 0004+00 0/1 0/0 0/0 .rodata          @6008 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6008 = 225.0f;
COMPILER_STRIP_GATE(0x8064EC1C, &lit_6008);
#pragma pop

/* 8064EC20-8064EC24 000104 0004+00 0/1 0/0 0/0 .rodata          @6009 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6009 = -1700.0f;
COMPILER_STRIP_GATE(0x8064EC20, &lit_6009);
#pragma pop

/* 8064EC24-8064EC28 000108 0004+00 0/1 0/0 0/0 .rodata          @6010 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6010 = -500.0f;
COMPILER_STRIP_GATE(0x8064EC24, &lit_6010);
#pragma pop

/* 8064EC28-8064EC2C 00010C 0004+00 0/2 0/0 0/0 .rodata          @6011 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6011 = 70.0f;
COMPILER_STRIP_GATE(0x8064EC28, &lit_6011);
#pragma pop

/* 8064EC2C-8064EC30 000110 0004+00 0/1 0/0 0/0 .rodata          @6012 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6012 = -300.0f;
COMPILER_STRIP_GATE(0x8064EC2C, &lit_6012);
#pragma pop

/* 8064EC30-8064EC34 000114 0004+00 0/1 0/0 0/0 .rodata          @6013 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6013 = 68.0f;
COMPILER_STRIP_GATE(0x8064EC30, &lit_6013);
#pragma pop

/* 8064EC34-8064EC38 000118 0004+00 0/2 0/0 0/0 .rodata          @6014 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6014 = 32.0f;
COMPILER_STRIP_GATE(0x8064EC34, &lit_6014);
#pragma pop

/* 8064EC38-8064EC3C 00011C 0004+00 0/1 0/0 0/0 .rodata          @6015 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6015 = 290.0f;
COMPILER_STRIP_GATE(0x8064EC38, &lit_6015);
#pragma pop

/* 8064EC3C-8064EC40 000120 0004+00 0/1 0/0 0/0 .rodata          @6016 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6016 = -1678.0f;
COMPILER_STRIP_GATE(0x8064EC3C, &lit_6016);
#pragma pop

/* 8064EC40-8064EC44 000124 0004+00 0/1 0/0 0/0 .rodata          @6017 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6017 = 66.0f;
COMPILER_STRIP_GATE(0x8064EC40, &lit_6017);
#pragma pop

/* 8064EC44-8064EC48 000128 0004+00 0/1 0/0 0/0 .rodata          @6018 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6018 = 180.0f;
COMPILER_STRIP_GATE(0x8064EC44, &lit_6018);
#pragma pop

/* 8064EC48-8064EC4C 00012C 0004+00 0/1 0/0 0/0 .rodata          @6019 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6019 = -989.0f;
COMPILER_STRIP_GATE(0x8064EC48, &lit_6019);
#pragma pop

/* 8064EC4C-8064EC50 000130 0004+00 0/1 0/0 0/0 .rodata          @6020 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6020 = 60.0f;
COMPILER_STRIP_GATE(0x8064EC4C, &lit_6020);
#pragma pop

/* 8064EC50-8064EC54 000134 0004+00 0/2 0/0 0/0 .rodata          @6021 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6021 = -140.0f;
COMPILER_STRIP_GATE(0x8064EC50, &lit_6021);
#pragma pop

/* 8064EC54-8064EC58 000138 0004+00 0/4 0/0 0/0 .rodata          @6022 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6022 = 250.0f;
COMPILER_STRIP_GATE(0x8064EC54, &lit_6022);
#pragma pop

/* 8064EC58-8064EC5C 00013C 0004+00 0/2 0/0 0/0 .rodata          @6023 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6023 = -800.0f;
COMPILER_STRIP_GATE(0x8064EC58, &lit_6023);
#pragma pop

/* 8064EC5C-8064EC60 000140 0004+00 0/2 0/0 0/0 .rodata          @6024 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6024 = 58.0f;
COMPILER_STRIP_GATE(0x8064EC5C, &lit_6024);
#pragma pop

/* 8064EC60-8064EC64 000144 0004+00 0/1 0/0 0/0 .rodata          @6025 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6025 = -85.0f;
COMPILER_STRIP_GATE(0x8064EC60, &lit_6025);
#pragma pop

/* 8064EC64-8064EC68 000148 0004+00 0/1 0/0 0/0 .rodata          @6026 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6026 = 344.0f;
COMPILER_STRIP_GATE(0x8064EC64, &lit_6026);
#pragma pop

/* 8064EC68-8064EC6C 00014C 0004+00 0/1 0/0 0/0 .rodata          @6027 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6027 = 382.0f;
COMPILER_STRIP_GATE(0x8064EC68, &lit_6027);
#pragma pop

/* 8064EC6C-8064EC70 000150 0004+00 0/1 0/0 0/0 .rodata          @6028 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6028 = 258.0f;
COMPILER_STRIP_GATE(0x8064EC6C, &lit_6028);
#pragma pop

/* 8064EC70-8064EC74 000154 0004+00 0/1 0/0 0/0 .rodata          @6029 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6029 = 672.0f;
COMPILER_STRIP_GATE(0x8064EC70, &lit_6029);
#pragma pop

/* 8064EC74-8064EC78 000158 0004+00 0/1 0/0 0/0 .rodata          @6030 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6030 = 1374.0f;
COMPILER_STRIP_GATE(0x8064EC74, &lit_6030);
#pragma pop

/* 8064EC78-8064EC7C 00015C 0004+00 0/2 0/0 0/0 .rodata          @6031 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6031 = 550.0f;
COMPILER_STRIP_GATE(0x8064EC78, &lit_6031);
#pragma pop

/* 8064EC7C-8064EC80 000160 0004+00 0/1 0/0 0/0 .rodata          @6032 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6032 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x8064EC7C, &lit_6032);
#pragma pop

/* 8064EC80-8064EC84 000164 0004+00 0/1 0/0 0/0 .rodata          @6033 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6033 = 922.0f;
COMPILER_STRIP_GATE(0x8064EC80, &lit_6033);
#pragma pop

/* 8064EC84-8064EC88 000168 0004+00 0/3 0/0 0/0 .rodata          @6034 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6034 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x8064EC84, &lit_6034);
#pragma pop

/* 8064EC88-8064EC8C 00016C 0004+00 0/1 0/0 0/0 .rodata          @6035 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6035 = 0x3BC49BA6;
COMPILER_STRIP_GATE(0x8064EC88, &lit_6035);
#pragma pop

/* 8064EC8C-8064EC90 000170 0004+00 0/1 0/0 0/0 .rodata          @6036 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6036 = 110.0f;
COMPILER_STRIP_GATE(0x8064EC8C, &lit_6036);
#pragma pop

/* 8064EC90-8064EC94 000174 0004+00 0/1 0/0 0/0 .rodata          @6037 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6037 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x8064EC90, &lit_6037);
#pragma pop

/* 8064EC94-8064EC98 000178 0004+00 0/2 0/0 0/0 .rodata          @6038 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6038 = 140.0f;
COMPILER_STRIP_GATE(0x8064EC94, &lit_6038);
#pragma pop

/* 8064EC98-8064EC9C 00017C 0004+00 0/1 0/0 0/0 .rodata          @6039 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6039 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x8064EC98, &lit_6039);
#pragma pop

/* 8064EC9C-8064ECA4 000180 0008+00 0/4 0/0 0/0 .rodata          @6041 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_6041[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8064EC9C, &lit_6041);
#pragma pop

/* 8064EE60-8064EE60 000344 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8064EE66 = "force_start";
SECTION_DEAD static char const* const stringBase_8064EE72 = "force_end";
#pragma pop

/* 80641640-806427EC 003620 11AC+00 2/2 0/0 0/0 .text            executeOpening__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeOpening() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeOpening__10daB_ZANT_cFv.s"
}
#pragma pop

/* 806427EC-80642EC8 0047CC 06DC+00 2/1 0/0 0/0 .text            executeFly__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeFly() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeFly__10daB_ZANT_cFv.s"
}
#pragma pop

/* 80642EC8-806430E0 004EA8 0218+00 1/1 0/0 0/0 .text            executeFlyGround__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeFlyGround() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeFlyGround__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064ECA4-8064ECA8 000188 0004+00 0/1 0/0 0/0 .rodata          @6162 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6162 = 45.0f;
COMPILER_STRIP_GATE(0x8064ECA4, &lit_6162);
#pragma pop

/* 8064ECA8-8064ECAC 00018C 0004+00 0/4 0/0 0/0 .rodata          @6163 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6163 = -5.0f;
COMPILER_STRIP_GATE(0x8064ECA8, &lit_6163);
#pragma pop

/* 8064ECAC-8064ECB0 000190 0004+00 0/0 0/0 0/0 .rodata          @6164 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6164 = -10.0f;
COMPILER_STRIP_GATE(0x8064ECAC, &lit_6164);
#pragma pop

/* 8064ECB0-8064ECB4 000194 0004+00 0/0 0/0 0/0 .rodata          @6165 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6165 = -2.0f;
COMPILER_STRIP_GATE(0x8064ECB0, &lit_6165);
#pragma pop

/* 8064ECB4-8064ECB8 000198 0004+00 0/6 0/0 0/0 .rodata          @6166 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6166 = 50.0f;
COMPILER_STRIP_GATE(0x8064ECB4, &lit_6166);
#pragma pop

/* 8064ECB8-8064ECBC 00019C 0004+00 0/0 0/0 0/0 .rodata          @6167 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6167 = 4096.0f;
COMPILER_STRIP_GATE(0x8064ECB8, &lit_6167);
#pragma pop

/* 8064ECBC-8064ECC0 0001A0 0004+00 0/2 0/0 0/0 .rodata          @6168 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6168 = 29.0f / 10.0f;
COMPILER_STRIP_GATE(0x8064ECBC, &lit_6168);
#pragma pop

/* 8064ECC0-8064ECC4 0001A4 0004+00 0/0 0/0 0/0 .rodata          @6169 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6169 = 32768.0f;
COMPILER_STRIP_GATE(0x8064ECC0, &lit_6169);
#pragma pop

/* 8064ECC4-8064ECC8 0001A8 0004+00 0/0 0/0 0/0 .rodata          @6170 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6170 = 1.5f;
COMPILER_STRIP_GATE(0x8064ECC4, &lit_6170);
#pragma pop

/* 8064ECC8-8064ECCC 0001AC 0004+00 0/2 0/0 0/0 .rodata          @6171 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6171 = 18.0f;
COMPILER_STRIP_GATE(0x8064ECC8, &lit_6171);
#pragma pop

/* 8064ECCC-8064ECD0 0001B0 0004+00 0/2 0/0 0/0 .rodata          @6172 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6172 = 23.0f;
COMPILER_STRIP_GATE(0x8064ECCC, &lit_6172);
#pragma pop

/* 8064ECD0-8064ECD4 0001B4 0004+00 0/1 0/0 0/0 .rodata          @6282 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6282 = 900.0f;
COMPILER_STRIP_GATE(0x8064ECD0, &lit_6282);
#pragma pop

/* 8064ECD4-8064ECD8 0001B8 0004+00 0/4 0/0 0/0 .rodata          @6283 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6283 = 400.0f;
COMPILER_STRIP_GATE(0x8064ECD4, &lit_6283);
#pragma pop

/* 806430E0-806432F8 0050C0 0218+00 1/1 0/0 0/0 .text checkSwimLinkNearMouth__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::checkSwimLinkNearMouth() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/checkSwimLinkNearMouth__10daB_ZANT_cFv.s"
}
#pragma pop

/* 806432F8-8064350C 0052D8 0214+00 1/1 0/0 0/0 .text            checkSwimLinkNear__10daB_ZANT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::checkSwimLinkNear() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/checkSwimLinkNear__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064350C-80643690 0054EC 0184+00 1/1 0/0 0/0 .text            executeHook__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeHook() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeHook__10daB_ZANT_cFv.s"
}
#pragma pop

/* 80643690-80644074 005670 09E4+00 2/1 0/0 0/0 .text            executeWater__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeWater() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeWater__10daB_ZANT_cFv.s"
}
#pragma pop

/* 80644074-80644A3C 006054 09C8+00 2/1 0/0 0/0 .text            executeSwim__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeSwim() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeSwim__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064ECD8-8064ECDC 0001BC 0004+00 0/3 0/0 0/0 .rodata          @6630 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6630 = 1000.0f;
COMPILER_STRIP_GATE(0x8064ECD8, &lit_6630);
#pragma pop

/* 8064ECDC-8064ECE0 0001C0 0004+00 0/1 0/0 0/0 .rodata          @6864 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6864 = 600.0f;
COMPILER_STRIP_GATE(0x8064ECDC, &lit_6864);
#pragma pop

/* 8064ECE0-8064ECE4 0001C4 0004+00 0/1 0/0 0/0 .rodata          @6865 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6865 = 1200.0f;
COMPILER_STRIP_GATE(0x8064ECE0, &lit_6865);
#pragma pop

/* 8064ECE4-8064ECE8 0001C8 0004+00 0/0 0/0 0/0 .rodata          @6866 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6866 = 29.0f;
COMPILER_STRIP_GATE(0x8064ECE4, &lit_6866);
#pragma pop

/* 8064ECE8-8064ECEC 0001CC 0004+00 0/0 0/0 0/0 .rodata          @6867 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6867 = 12.0f;
COMPILER_STRIP_GATE(0x8064ECE8, &lit_6867);
#pragma pop

/* 8064ECEC-8064ECF0 0001D0 0004+00 0/1 0/0 0/0 .rodata          @6868 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6868 = 28.0f;
COMPILER_STRIP_GATE(0x8064ECEC, &lit_6868);
#pragma pop

/* 8064ECF0-8064ECF4 0001D4 0004+00 0/1 0/0 0/0 .rodata          @7002 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7002 = 55.0f;
COMPILER_STRIP_GATE(0x8064ECF0, &lit_7002);
#pragma pop

/* 8064ECF4-8064ECF8 0001D8 0004+00 0/2 0/0 0/0 .rodata          @7003 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7003 = 7.0f;
COMPILER_STRIP_GATE(0x8064ECF4, &lit_7003);
#pragma pop

/* 8064ECF8-8064ECFC 0001DC 0004+00 0/3 0/0 0/0 .rodata          @7004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7004 = 8.0f;
COMPILER_STRIP_GATE(0x8064ECF8, &lit_7004);
#pragma pop

/* 8064ECFC-8064ED00 0001E0 0004+00 0/1 0/0 0/0 .rodata          @7005 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7005 = 2048.0f;
COMPILER_STRIP_GATE(0x8064ECFC, &lit_7005);
#pragma pop

/* 8064ED00-8064ED04 0001E4 0004+00 0/2 0/0 0/0 .rodata          @7006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7006 = 4.0f;
COMPILER_STRIP_GATE(0x8064ED00, &lit_7006);
#pragma pop

/* 8064ED04-8064ED08 0001E8 0004+00 0/1 0/0 0/0 .rodata          @7007 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7007 = 1100.0f;
COMPILER_STRIP_GATE(0x8064ED04, &lit_7007);
#pragma pop

/* 80644A3C-80645014 006A1C 05D8+00 1/1 0/0 0/0 .text            executeSimaJump__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeSimaJump() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeSimaJump__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064ED08-8064ED0C 0001EC 0004+00 0/1 0/0 0/0 .rodata          @7062 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7062 = 115.0f;
COMPILER_STRIP_GATE(0x8064ED08, &lit_7062);
#pragma pop

/* 80645014-8064524C 006FF4 0238+00 1/1 0/0 0/0 .text            executeIceDemo__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeIceDemo() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeIceDemo__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064ED0C-8064ED10 0001F0 0004+00 0/1 0/0 0/0 .rodata          @7419 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7419 = 130.0f;
COMPILER_STRIP_GATE(0x8064ED0C, &lit_7419);
#pragma pop

/* 8064524C-80645DA4 00722C 0B58+00 2/1 0/0 0/0 .text            executeIceJump__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeIceJump() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeIceJump__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064ED10-8064ED14 0001F4 0004+00 0/3 0/0 0/0 .rodata          @7420 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7420 = 20.0f;
COMPILER_STRIP_GATE(0x8064ED10, &lit_7420);
#pragma pop

/* 8064ED14-8064ED18 0001F8 0004+00 0/1 0/0 0/0 .rodata          @7697 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7697 = 24.0f;
COMPILER_STRIP_GATE(0x8064ED14, &lit_7697);
#pragma pop

/* 8064ED18-8064ED1C 0001FC 0004+00 0/3 0/0 0/0 .rodata          @7698 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7698 = 14.0f;
COMPILER_STRIP_GATE(0x8064ED18, &lit_7698);
#pragma pop

/* 8064ED1C-8064ED20 000200 0004+00 0/1 0/0 0/0 .rodata          @7699 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7699 = 27.0f;
COMPILER_STRIP_GATE(0x8064ED1C, &lit_7699);
#pragma pop

/* 8064ED20-8064ED24 000204 0004+00 0/2 0/0 0/0 .rodata          @7700 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7700 = 17.0f;
COMPILER_STRIP_GATE(0x8064ED20, &lit_7700);
#pragma pop

/* 8064ED24-8064ED28 000208 0004+00 0/1 0/0 0/0 .rodata          @7701 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7701 = 31.0f;
COMPILER_STRIP_GATE(0x8064ED24, &lit_7701);
#pragma pop

/* 8064ED28-8064ED2C 00020C 0004+00 0/1 0/0 0/0 .rodata          @7702 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7702 = 21.0f;
COMPILER_STRIP_GATE(0x8064ED28, &lit_7702);
#pragma pop

/* 8064ED2C-8064ED30 000210 0004+00 0/1 0/0 0/0 .rodata          @7703 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7703 = 11.0f;
COMPILER_STRIP_GATE(0x8064ED2C, &lit_7703);
#pragma pop

/* 8064ED30-8064ED34 000214 0004+00 0/1 0/0 0/0 .rodata          @7704 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7704 = 35.0f;
COMPILER_STRIP_GATE(0x8064ED30, &lit_7704);
#pragma pop

/* 8064ED34-8064ED38 000218 0004+00 0/1 0/0 0/0 .rodata          @7705 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7705 = -35.0f;
COMPILER_STRIP_GATE(0x8064ED34, &lit_7705);
#pragma pop

/* 8064ED38-8064ED3C 00021C 0004+00 0/1 0/0 0/0 .rodata          @7706 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7706 = -30.0f;
COMPILER_STRIP_GATE(0x8064ED38, &lit_7706);
#pragma pop

/* 80645DA4-8064687C 007D84 0AD8+00 1/1 0/0 0/0 .text            executeIceStep__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeIceStep() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeIceStep__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064ED3C-8064ED68 000220 002C+00 0/1 0/0 0/0 .rodata          damage_scale$7711 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const damage_scale[44] = {
    0x41, 0x20, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x40, 0xF0, 0x00, 0x00, 0x40, 0xC0, 0x00,
    0x00, 0x40, 0x90, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x3F, 0xB3,
    0x33, 0x33, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x33, 0x33, 0x33, 0x3F, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8064ED3C, &damage_scale);
#pragma pop

/* 8064ED68-8064ED94 00024C 002C+00 0/1 0/0 0/0 .rodata          damage_jump_speed$7712 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const damage_jump_speed[44] = {
    0x42, 0xC8, 0x00, 0x00, 0x42, 0xBE, 0x00, 0x00, 0x42, 0xB4, 0x00, 0x00, 0x42, 0xAA, 0x00,
    0x00, 0x42, 0xA0, 0x00, 0x00, 0x42, 0x96, 0x00, 0x00, 0x42, 0x8C, 0x00, 0x00, 0x42, 0x82,
    0x00, 0x00, 0x42, 0x70, 0x00, 0x00, 0x42, 0x5C, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8064ED68, &damage_jump_speed);
#pragma pop

/* 8064ED94-8064ED98 000278 0004+00 0/1 0/0 0/0 .rodata          @7978 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7978 = 25.0f;
COMPILER_STRIP_GATE(0x8064ED94, &lit_7978);
#pragma pop

/* 8064ED98-8064ED9C 00027C 0004+00 0/1 0/0 0/0 .rodata          @7979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7979 = -15.0f;
COMPILER_STRIP_GATE(0x8064ED98, &lit_7979);
#pragma pop

/* 8064687C-806471CC 00885C 0950+00 2/1 0/0 0/0 .text            executeIceDamage__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeIceDamage() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeIceDamage__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064ED9C-8064EDA0 000280 0004+00 0/0 0/0 0/0 .rodata          @7980 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7980 = 49.0f / 10.0f;
COMPILER_STRIP_GATE(0x8064ED9C, &lit_7980);
#pragma pop

/* 8064EDA0-8064EDA4 000284 0004+00 2/4 0/0 0/0 .rodata          @8037 */
SECTION_RODATA static f32 const lit_8037 = 500.0f;
COMPILER_STRIP_GATE(0x8064EDA0, &lit_8037);

/* 806471CC-806473E4 0091AC 0218+00 1/1 0/0 0/0 .text            setFarPillarPos__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setFarPillarPos() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setFarPillarPos__10daB_ZANT_cFv.s"
}
#pragma pop

/* 806473E4-80647468 0093C4 0084+00 4/4 0/0 0/0 .text            setNearPillarPos__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setNearPillarPos() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setNearPillarPos__10daB_ZANT_cFv.s"
}
#pragma pop

/* 80647468-806474F4 009448 008C+00 1/1 0/0 0/0 .text            setNextPillarInfo__10daB_ZANT_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setNextPillarInfo(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setNextPillarInfo__10daB_ZANT_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EDA4-8064EDA8 000288 0004+00 0/1 0/0 0/0 .rodata          @8227 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8227 = 10000.0f;
COMPILER_STRIP_GATE(0x8064EDA4, &lit_8227);
#pragma pop

/* 806474F4-80647A34 0094D4 0540+00 1/1 0/0 0/0 .text            setNextPillarPos__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setNextPillarPos() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setNextPillarPos__10daB_ZANT_cFv.s"
}
#pragma pop

/* 80647A34-80647AC8 009A14 0094+00 1/1 0/0 0/0 .text            checkPillarSwing__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::checkPillarSwing() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/checkPillarSwing__10daB_ZANT_cFv.s"
}
#pragma pop

/* 80647AC8-806481F4 009AA8 072C+00 1/1 0/0 0/0 .text            executeMonkey__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeMonkey() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeMonkey__10daB_ZANT_cFv.s"
}
#pragma pop

/* 806481F4-80648544 00A1D4 0350+00 2/1 0/0 0/0 .text            executeMonkeyFall__10daB_ZANT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeMonkeyFall() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeMonkeyFall__10daB_ZANT_cFv.s"
}
#pragma pop

/* 80648544-80648778 00A524 0234+00 1/1 0/0 0/0 .text            executeMonkeyDamage__10daB_ZANT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeMonkeyDamage() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeMonkeyDamage__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EDA8-8064EDAC 00028C 0004+00 0/0 0/0 0/0 .rodata          @8452 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8452 = -170.0f;
COMPILER_STRIP_GATE(0x8064EDA8, &lit_8452);
#pragma pop

/* 8064EDAC-8064EDB0 000290 0004+00 0/0 0/0 0/0 .rodata          @8453 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8453 = -175.0f;
COMPILER_STRIP_GATE(0x8064EDAC, &lit_8453);
#pragma pop

/* 8064EDB0-8064EDB4 000294 0004+00 0/2 0/0 0/0 .rodata          @8683 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8683 = -200.0f;
COMPILER_STRIP_GATE(0x8064EDB0, &lit_8683);
#pragma pop

/* 8064EDB4-8064EDB8 000298 0004+00 0/1 0/0 0/0 .rodata          @8684 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8684 = 8192.0f;
COMPILER_STRIP_GATE(0x8064EDB4, &lit_8684);
#pragma pop

/* 8064EDB8-8064EDBC 00029C 0004+00 0/1 0/0 0/0 .rodata          @8685 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8685 = -1400.0f;
COMPILER_STRIP_GATE(0x8064EDB8, &lit_8685);
#pragma pop

/* 8064EDBC-8064EDC0 0002A0 0004+00 0/1 0/0 0/0 .rodata          @8686 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8686 = 39.0f / 10.0f;
COMPILER_STRIP_GATE(0x8064EDBC, &lit_8686);
#pragma pop

/* 80648778-80648F64 00A758 07EC+00 5/5 0/0 0/0 .text            setLastWarp__10daB_ZANT_cFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setLastWarp(int param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setLastWarp__10daB_ZANT_cFii.s"
}
#pragma pop

/* 80648F64-806494A8 00AF44 0544+00 2/1 0/0 0/0 .text executeLastStartDemo__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeLastStartDemo() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeLastStartDemo__10daB_ZANT_cFv.s"
}
#pragma pop

/* 806494A8-8064A58C 00B488 10E4+00 2/1 0/0 0/0 .text            executeLastAttack__10daB_ZANT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeLastAttack() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeLastAttack__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064A58C-8064A688 00C56C 00FC+00 1/1 0/0 0/0 .text            executeLastTired__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeLastTired() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeLastTired__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EDC0-8064EDC4 0002A4 0004+00 0/0 0/0 0/0 .rodata          @8793 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8793 = 480.0f;
COMPILER_STRIP_GATE(0x8064EDC0, &lit_8793);
#pragma pop

/* 8064EDC4-8064EDC8 0002A8 0004+00 0/2 0/0 0/0 .rodata          @8794 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8794 = -1000.0f;
COMPILER_STRIP_GATE(0x8064EDC4, &lit_8794);
#pragma pop

/* 8064EDC8-8064EDCC 0002AC 0004+00 0/0 0/0 0/0 .rodata          @8795 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8795 = -600.0f;
COMPILER_STRIP_GATE(0x8064EDC8, &lit_8795);
#pragma pop

/* 8064EDCC-8064EDD0 0002B0 0004+00 0/0 0/0 0/0 .rodata          @8796 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8796 = 90.0f;
COMPILER_STRIP_GATE(0x8064EDCC, &lit_8796);
#pragma pop

/* 8064EDD0-8064EDD4 0002B4 0004+00 0/0 0/0 0/0 .rodata          @8797 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8797 = -900.0f;
COMPILER_STRIP_GATE(0x8064EDD0, &lit_8797);
#pragma pop

/* 8064EDD4-8064EDD8 0002B8 0004+00 0/0 0/0 0/0 .rodata          @8798 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8798 = 97.0f;
COMPILER_STRIP_GATE(0x8064EDD4, &lit_8798);
#pragma pop

/* 8064EDD8-8064EDDC 0002BC 0004+00 0/0 0/0 0/0 .rodata          @8799 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8799 = 72.0f;
COMPILER_STRIP_GATE(0x8064EDD8, &lit_8799);
#pragma pop

/* 8064EDDC-8064EDE0 0002C0 0004+00 0/0 0/0 0/0 .rodata          @8800 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8800 = 103.0f;
COMPILER_STRIP_GATE(0x8064EDDC, &lit_8800);
#pragma pop

/* 8064EDE0-8064EDE4 0002C4 0004+00 0/0 0/0 0/0 .rodata          @8801 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8801 = 134.0f;
COMPILER_STRIP_GATE(0x8064EDE0, &lit_8801);
#pragma pop

/* 8064EDE4-8064EDE8 0002C8 0004+00 0/0 0/0 0/0 .rodata          @8802 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8802 = 128.0f;
COMPILER_STRIP_GATE(0x8064EDE4, &lit_8802);
#pragma pop

/* 8064EDE8-8064EDEC 0002CC 0004+00 0/0 0/0 0/0 .rodata          @9164 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9164 = 33.0f;
COMPILER_STRIP_GATE(0x8064EDE8, &lit_9164);
#pragma pop

/* 8064EDEC-8064EDF0 0002D0 0004+00 0/0 0/0 0/0 .rodata          @9165 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9165 = 512.0f;
COMPILER_STRIP_GATE(0x8064EDEC, &lit_9165);
#pragma pop

/* 8064EDF0-8064EDF4 0002D4 0004+00 0/0 0/0 0/0 .rodata          @9166 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9166 = 768.0f;
COMPILER_STRIP_GATE(0x8064EDF0, &lit_9166);
#pragma pop

/* 8064EDF4-8064EDF8 0002D8 0004+00 0/0 0/0 0/0 .rodata          @9167 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9167 = -45.0f;
COMPILER_STRIP_GATE(0x8064EDF4, &lit_9167);
#pragma pop

/* 8064EDF8-8064EDFC 0002DC 0004+00 0/1 0/0 0/0 .rodata          @9168 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9168 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x8064EDF8, &lit_9168);
#pragma pop

/* 8064EDFC-8064EE00 0002E0 0004+00 0/1 0/0 0/0 .rodata          @9306 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9306 = 38.0f;
COMPILER_STRIP_GATE(0x8064EDFC, &lit_9306);
#pragma pop

/* 8064A688-8064AC20 00C668 0598+00 2/1 0/0 0/0 .text            executeLastDamage__10daB_ZANT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeLastDamage() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeLastDamage__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064AC20-8064AC8C 00CC00 006C+00 1/1 0/0 0/0 .text            s_del_tp__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_del_tp(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/s_del_tp__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EE00-8064EE04 0002E4 0004+00 0/2 0/0 0/0 .rodata          @9432 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9432 = 120.0f;
COMPILER_STRIP_GATE(0x8064EE00, &lit_9432);
#pragma pop

/* 8064EE04-8064EE08 0002E8 0004+00 0/1 0/0 0/0 .rodata          @9433 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9433 = -750.0f;
COMPILER_STRIP_GATE(0x8064EE04, &lit_9433);
#pragma pop

/* 8064EE08-8064EE0C 0002EC 0004+00 0/1 0/0 0/0 .rodata          @9434 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9434 = 80.0f;
COMPILER_STRIP_GATE(0x8064EE08, &lit_9434);
#pragma pop

/* 8064EE0C-8064EE10 0002F0 0004+00 0/1 0/0 0/0 .rodata          @9435 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9435 = 44.0f;
COMPILER_STRIP_GATE(0x8064EE0C, &lit_9435);
#pragma pop

/* 8064EE10-8064EE14 0002F4 0004+00 0/1 0/0 0/0 .rodata          @9436 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9436 = 205.0f;
COMPILER_STRIP_GATE(0x8064EE10, &lit_9436);
#pragma pop

/* 8064EE14-8064EE18 0002F8 0004+00 0/1 0/0 0/0 .rodata          @9437 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9437 = 230.0f;
COMPILER_STRIP_GATE(0x8064EE14, &lit_9437);
#pragma pop

/* 8064EE18-8064EE1C 0002FC 0004+00 0/1 0/0 0/0 .rodata          @9438 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9438 = 150.0f;
COMPILER_STRIP_GATE(0x8064EE18, &lit_9438);
#pragma pop

/* 8064EE1C-8064EE20 000300 0004+00 0/1 0/0 0/0 .rodata          @9439 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9439 = 340.0f;
COMPILER_STRIP_GATE(0x8064EE1C, &lit_9439);
#pragma pop

/* 8064EE20-8064EE24 000304 0004+00 0/1 0/0 0/0 .rodata          @9440 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9440 = 360.0f;
COMPILER_STRIP_GATE(0x8064EE20, &lit_9440);
#pragma pop

/* 8064EE24-8064EE28 000308 0004+00 0/1 0/0 0/0 .rodata          @9441 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9441 = 375.0f;
COMPILER_STRIP_GATE(0x8064EE24, &lit_9441);
#pragma pop

/* 8064EE60-8064EE60 000344 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8064EE7C = "D_MN08A";
#pragma pop

/* 8064AC8C-8064B270 00CC6C 05E4+00 1/1 0/0 0/0 .text            executeLastEndDemo__10daB_ZANT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeLastEndDemo() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeLastEndDemo__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064B270-8064B49C 00D250 022C+00 1/1 0/0 0/0 .text            calcMahojinAnime__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::calcMahojinAnime() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/calcMahojinAnime__10daB_ZANT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EE28-8064EE2C 00030C 0004+00 0/1 0/0 0/0 .rodata          @9560 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9560 = 87.0f;
COMPILER_STRIP_GATE(0x8064EE28, &lit_9560);
#pragma pop

/* 8064EE2C-8064EE30 000310 0004+00 0/1 0/0 0/0 .rodata          @9561 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9561 = -160.0f;
COMPILER_STRIP_GATE(0x8064EE2C, &lit_9561);
#pragma pop

/* 8064EE30-8064EE34 000314 0004+00 0/1 0/0 0/0 .rodata          @9562 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9562 = 106.0f;
COMPILER_STRIP_GATE(0x8064EE30, &lit_9562);
#pragma pop

/* 8064EE34-8064EE38 000318 0004+00 0/1 0/0 0/0 .rodata          @9563 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9563 = 483.0f;
COMPILER_STRIP_GATE(0x8064EE34, &lit_9563);
#pragma pop

/* 8064EE38-8064EE3C 00031C 0004+00 0/1 0/0 0/0 .rodata          @9564 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9564 = 843.0f;
COMPILER_STRIP_GATE(0x8064EE38, &lit_9564);
#pragma pop

/* 8064EE3C-8064EE40 000320 0004+00 0/1 0/0 0/0 .rodata          @9565 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9565 = -20.0f;
COMPILER_STRIP_GATE(0x8064EE3C, &lit_9565);
#pragma pop

/* 8064EE40-8064EE44 000324 0004+00 0/1 0/0 0/0 .rodata          @9566 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9566 = -40.0f;
COMPILER_STRIP_GATE(0x8064EE40, &lit_9566);
#pragma pop

/* 8064EE44-8064EE48 000328 0004+00 0/1 0/0 0/0 .rodata          @9567 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9567 = 11.0f / 10.0f;
COMPILER_STRIP_GATE(0x8064EE44, &lit_9567);
#pragma pop

/* 8064B49C-8064B69C 00D47C 0200+00 2/2 0/0 0/0 .text calcRoomChangeCamera__10daB_ZANT_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::calcRoomChangeCamera(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/calcRoomChangeCamera__10daB_ZANT_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EE48-8064EE4C 00032C 0004+00 0/1 0/0 0/0 .rodata          @9604 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9604 = -3300.0f;
COMPILER_STRIP_GATE(0x8064EE48, &lit_9604);
#pragma pop

/* 8064B69C-8064B868 00D67C 01CC+00 3/3 0/0 0/0 .text            initNextRoom__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::initNextRoom() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/initNextRoom__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064B868-8064C1C0 00D848 0958+00 2/1 0/0 0/0 .text            executeRoomChange__10daB_ZANT_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::executeRoomChange() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/executeRoomChange__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064C1C0-8064C5A8 00E1A0 03E8+00 8/7 0/0 0/0 .text            setBaseActionMode__10daB_ZANT_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::setBaseActionMode(int param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/setBaseActionMode__10daB_ZANT_cFi.s"
}
#pragma pop

/* 8064C5A8-8064CB1C 00E588 0574+00 2/1 0/0 0/0 .text            action__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::action() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/action__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064CB1C-8064CD0C 00EAFC 01F0+00 2/2 0/0 0/0 .text            mtx_set__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::mtx_set() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/mtx_set__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064CD0C-8064CFA8 00ECEC 029C+00 1/1 0/0 0/0 .text            cc_set__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::cc_set() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/cc_set__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064CFA8-8064DA48 00EF88 0AA0+00 1/1 0/0 0/0 .text            cc_ice_set__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::cc_ice_set() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/cc_ice_set__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064DA48-8064DB48 00FA28 0100+00 1/1 0/0 0/0 .text            execute__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::execute() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/execute__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064DB48-8064DB68 00FB28 0020+00 1/0 0/0 0/0 .text            daB_ZANT_Execute__FP10daB_ZANT_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_ZANT_Execute(daB_ZANT_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/daB_ZANT_Execute__FP10daB_ZANT_c.s"
}
#pragma pop

/* 8064DB68-8064DB70 00FB48 0008+00 1/0 0/0 0/0 .text            daB_ZANT_IsDelete__FP10daB_ZANT_c
 */
static bool daB_ZANT_IsDelete(daB_ZANT_c* param_0) {
    return true;
}

/* 8064DB70-8064DBE4 00FB50 0074+00 1/1 0/0 0/0 .text            _delete__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::_delete() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/_delete__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064DBE4-8064DC04 00FBC4 0020+00 1/0 0/0 0/0 .text            daB_ZANT_Delete__FP10daB_ZANT_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_ZANT_Delete(daB_ZANT_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/daB_ZANT_Delete__FP10daB_ZANT_c.s"
}
#pragma pop

/* 8064DC04-8064E128 00FBE4 0524+00 1/1 0/0 0/0 .text            CreateHeap__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/CreateHeap__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064E128-8064E170 010108 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 8064E170-8064E190 010150 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EE60-8064EE60 000344 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8064EE84 = "B_zant";
#pragma pop

/* 8064E190-8064E724 010170 0594+00 1/1 0/0 0/0 .text            create__10daB_ZANT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANT_c::create() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/create__10daB_ZANT_cFv.s"
}
#pragma pop

/* 8064E724-8064E76C 010704 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 8064E76C-8064E7F0 01074C 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_Sph::dCcD_Sph() {
extern "C" asm void __ct__8dCcD_SphFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 8064E7F0-8064E84C 0107D0 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 8064E84C-8064E8BC 01082C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 8064E8BC-8064E92C 01089C 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 8064E92C-8064E94C 01090C 0020+00 1/0 0/0 0/0 .text            daB_ZANT_Create__FP10daB_ZANT_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_ZANT_Create(daB_ZANT_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/daB_ZANT_Create__FP10daB_ZANT_c.s"
}
#pragma pop

/* 8064E94C-8064E994 01092C 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 8064E994-8064E9DC 010974 0048+00 2/1 0/0 0/0 .text            __dt__14daB_ZANT_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_ZANT_HIO_c::~daB_ZANT_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__dt__14daB_ZANT_HIO_cFv.s"
}
#pragma pop

/* 8064E9DC-8064EAE0 0109BC 0104+00 0/0 1/0 0/0 .text            __sinit_d_a_b_zant_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_b_zant_cpp() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/__sinit_d_a_b_zant_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8064E9DC, __sinit_d_a_b_zant_cpp);
#pragma pop

/* 8064EAE0-8064EAE8 010AC0 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8064EAE0() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/func_8064EAE0.s"
}
#pragma pop

/* 8064EAE8-8064EAF0 010AC8 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8064EAE8() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/func_8064EAE8.s"
}
#pragma pop

/* 8064EAF0-8064EAF8 010AD0 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8064EAF0() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/func_8064EAF0.s"
}
#pragma pop

/* 8064EAF8-8064EB00 010AD8 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8064EAF8() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/func_8064EAF8.s"
}
#pragma pop

/* 8064EB00-8064EB08 010AE0 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8064EB00() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/d_a_b_zant/func_8064EB00.s"
}
#pragma pop

/* ############################################################################################## */
/* 8064EE4C-8064EE50 000330 0004+00 0/0 0/0 0/0 .rodata          @9786 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9786 = 65.0f;
COMPILER_STRIP_GATE(0x8064EE4C, &lit_9786);
#pragma pop

/* 8064EE50-8064EE54 000334 0004+00 0/0 0/0 0/0 .rodata          @9787 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9787 = -225.0f;
COMPILER_STRIP_GATE(0x8064EE50, &lit_9787);
#pragma pop

/* 8064EE54-8064EE58 000338 0004+00 0/0 0/0 0/0 .rodata          @9788 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9788 = 118.0f;
COMPILER_STRIP_GATE(0x8064EE54, &lit_9788);
#pragma pop

/* 8064EE58-8064EE5C 00033C 0004+00 0/0 0/0 0/0 .rodata          @9789 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9789 = 42.0f;
COMPILER_STRIP_GATE(0x8064EE58, &lit_9789);
#pragma pop

/* 8064EE5C-8064EE60 000340 0004+00 0/0 0/0 0/0 .rodata          @9868 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9868 = -4000.0f;
COMPILER_STRIP_GATE(0x8064EE5C, &lit_9868);
#pragma pop

/* 8064F694-8064F698 0000E4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8064F694[4];
#pragma pop

/* 8064F698-8064F69C 0000E8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_8064F698[4];
#pragma pop

/* 8064F69C-8064F6A0 0000EC 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_8064F69C[4];
#pragma pop

/* 8064F6A0-8064F6A4 0000F0 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8064F6A0[4];
#pragma pop

/* 8064F6A4-8064F6A8 0000F4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8064F6A4[4];
#pragma pop

/* 8064F6A8-8064F6AC 0000F8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8064F6A8[4];
#pragma pop

/* 8064F6AC-8064F6B0 0000FC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_8064F6AC[4];
#pragma pop

/* 8064F6B0-8064F6B4 000100 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_8064F6B0[4];
#pragma pop

/* 8064F6B4-8064F6B8 000104 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8064F6B4[4];
#pragma pop

/* 8064F6B8-8064F6BC 000108 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_8064F6B8[4];
#pragma pop

/* 8064F6BC-8064F6C0 00010C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_8064F6BC[4];
#pragma pop

/* 8064F6C0-8064F6C4 000110 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8064F6C0[4];
#pragma pop

/* 8064F6C4-8064F6C8 000114 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8064F6C4[4];
#pragma pop

/* 8064F6C8-8064F6CC 000118 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8064F6C8[4];
#pragma pop

/* 8064F6CC-8064F6D0 00011C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8064F6CC[4];
#pragma pop

/* 8064F6D0-8064F6D4 000120 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_8064F6D0[4];
#pragma pop

/* 8064F6D4-8064F6D8 000124 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8064F6D4[4];
#pragma pop

/* 8064F6D8-8064F6DC 000128 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8064F6D8[4];
#pragma pop

/* 8064F6DC-8064F6E0 00012C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_8064F6DC[4];
#pragma pop

/* 8064F6E0-8064F6E4 000130 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_8064F6E0[4];
#pragma pop

/* 8064F6E4-8064F6E8 000134 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8064F6E4[4];
#pragma pop

/* 8064F6E8-8064F6EC 000138 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8064F6E8[4];
#pragma pop

/* 8064F6EC-8064F6F0 00013C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8064F6EC[4];
#pragma pop

/* 8064F6F0-8064F6F4 000140 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8064F6F0[4];
#pragma pop

/* 8064F6F4-8064F6F8 000144 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8064F6F4[4];
#pragma pop

/* 8064F6F8-8064F6FC 000148 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JAUSectionHeap>             */
#pragma push
#pragma force_active on
static u8 data_8064F6F8[4];
#pragma pop

/* 8064EE60-8064EE60 000344 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
