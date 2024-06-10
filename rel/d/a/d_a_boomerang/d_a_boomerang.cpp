/**
 * @file d_a_boomerang.cpp
 * 
*/

#include "rel/d/a/d_a_boomerang/d_a_boomerang.h"
#include "JSystem/J2DGraph/J2DAnmLoader.h"
#include "d/a/d_a_alink.h"
#include "d/pane/d_pane_class.h"
#include "dol2asm.h"
#include "m_Do/m_Do_lib.h"
#include "rel/d/a/d_a_mirror/d_a_mirror.h"


//
// Forward References:
//

extern "C" void createHeap__19daBoomerang_sight_cFv();
extern "C" void initialize__19daBoomerang_sight_cFv();
extern "C" void playAnime__19daBoomerang_sight_cFii();
extern "C" void initFrame__19daBoomerang_sight_cFi();
extern "C" void copyNumData__19daBoomerang_sight_cFi();
extern "C" void __dt__4cXyzFv();
extern "C" void setSight__19daBoomerang_sight_cFPC4cXyzi();
extern "C" void draw__19daBoomerang_sight_cFv();
extern "C" void windModelCallBack__13daBoomerang_cFv();
extern "C" static void daBoomeang_windModelCallBack__FP8J3DJointi();
extern "C" void draw__13daBoomerang_cFv();
extern "C" static void daBoomerang_Draw__FP13daBoomerang_c();
extern "C" void lockLineCallback__13daBoomerang_cFP10fopAc_ac_c();
extern "C" static void
daBoomerang_lockLineCallback__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" void moveLineCallback__13daBoomerang_cFP10fopAc_ac_c();
extern "C" static void
daBoomerang_moveLineCallback__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" void pushLockList__13daBoomerang_cFi();
extern "C" void cancelLockActorBase__13daBoomerang_cFP10fopAc_ac_c();
extern "C" void setAimActorBase__13daBoomerang_cFP10fopAc_ac_c();
extern "C" void setLockActor__13daBoomerang_cFP10fopAc_ac_ci();
extern "C" void resetLockActor__13daBoomerang_cFv();
extern "C" void setRoomInfo__13daBoomerang_cFv();
extern "C" void setKeepMatrix__13daBoomerang_cFv();
extern "C" void setMoveMatrix__13daBoomerang_cFv();
extern "C" void setRotAngle__13daBoomerang_cFv();
extern "C" void setAimPos__13daBoomerang_cFv();
extern "C" void checkBgHit__13daBoomerang_cFP4cXyzP4cXyz();
extern "C" void setEffectTraceMatrix__13daBoomerang_cFPUlUs();
extern "C" void setEffect__13daBoomerang_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void procWait__13daBoomerang_cFv();
extern "C" void procMove__13daBoomerang_cFv();
extern "C" void execute__13daBoomerang_cFv();
extern "C" static void daBoomerang_Execute__FP13daBoomerang_c();
extern "C" void __dt__13daBoomerang_cFv();
extern "C" static void daBoomerang_Delete__FP13daBoomerang_c();
extern "C" void createHeap__13daBoomerang_cFv();
extern "C" static void daBoomerang_createHeap__FP10fopAc_ac_c();
extern "C" void create__13daBoomerang_cFv();
extern "C" void __ct__13daBoomerang_cFv();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static void daBoomerang_Create__FP10fopAc_ac_c();
extern "C" void draw__12dDlst_base_cFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" static void func_804A2764();
extern "C" static void func_804A276C();
extern "C" static void func_804A2774();
extern "C" static void func_804A277C();
extern "C" static void func_804A2784();
extern "C" void __dt__19daBoomerang_sight_cFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" u16 const m_lockWaitTime__18daBoomerang_HIO_c0;
extern "C" f32 const m_minCircleR__18daBoomerang_HIO_c0;
extern "C" f32 const m_middleCircleR__18daBoomerang_HIO_c0;
extern "C" f32 const m_maxCircleR__18daBoomerang_HIO_c0;
extern "C" f32 const m_scale__18daBoomerang_HIO_c0;
extern "C" f32 const m_lockWindScale__18daBoomerang_HIO_c0;
extern "C" extern char const* const d_a_boomerang__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XYZrotM__FPA4_fsss();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_modelEntryDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_setStageLayer__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void roofCheck__11fopAcM_rc_cFPC4cXyz();
extern "C" void waterCheck__11fopAcM_wt_cFPC4cXyz();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void entry__10daMirror_cFP8J3DModel();
extern "C" void getResInfo__14dRes_control_cFPCcP11dRes_info_ci();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void init__7dPaPo_cFP9dBgS_Acchff();
extern "C" void setEffectCenter__7dPaPo_cFPC12dKy_tevstr_cPC4cXyzUlUlPC4cXyzPC5csXyzPC4cXyzScff();
extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetUnderwaterRoofCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetPolyAtt0__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void dBgS_CheckBRoofPoly__FRC13cBgS_PolyInfo();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP10fopAc_ac_ciP12dBgS_AcchCir();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void __ct__14dBgS_ObjLinChkFv();
extern "C" void __dt__14dBgS_ObjLinChkFv();
extern "C" void __ct__20dBgS_BoomerangLinChkFv();
extern "C" void __dt__20dBgS_BoomerangLinChkFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ResetAtHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CpsFRC11dCcD_SrcCps();
extern "C" void CalcAtVec__8dCcD_CpsFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__12dCcMassS_MngFP8cCcD_ObjUc();
extern "C" void getAlinkArcName__9daAlink_cFv();
extern "C" void simpleAnmPlay__9daAlink_cFP10J3DAnmBase();
extern "C" void itemActionTrigger__9daAlink_cFv();
extern "C" void checkBoomerangLockAccept__9daAlink_cFv();
extern "C" void getBoomSpeed__9daAlink_cFv();
extern "C" void getBoomCatchSpeed__9daAlink_cCFv();
extern "C" void getBoomFlyMax__9daAlink_cCFv();
extern "C" void getBoomLockMax__9daAlink_cFv();
extern "C" void getBoomBgThroughTime__9daAlink_cCFv();
extern "C" void returnBoomerang__9daAlink_cFi();
extern "C" void dCam_getBody__Fv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __dv__4cXyzCFf();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void atan2sY_XZ__4cXyzCFv();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_rad2s__Ff();
extern "C" void cM_atan2s__Fff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __ct__8cM3dGCpsFv();
extern "C" void __dt__8cM3dGCpsFv();
extern "C" void Set__8cM3dGCpsFRC4cXyzRC4cXyzf();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseUC__FPUcUcUc();
extern "C" void cLib_chasePos__FP4cXyzRC4cXyzf();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void func_802807E0();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dt__14Z2SoundObjBaseFv();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void animation__9J2DScreenFv();
extern "C" void load__20J2DAnmLoaderDataBaseFPCv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void searchUpdateMaterialID__19J3DAnmTextureSRTKeyFP12J3DModelData();
extern "C" void entryTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_17();
extern "C" void _savegpr_20();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_17();
extern "C" void _restgpr_20();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__8dCcD_Cps[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__16Z2SoundObjSimple[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mRoofCheck__11fopAcM_rc_c[80];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" f32 mRoofY__11fopAcM_rc_c;
extern "C" f32 mWaterY__11fopAcM_wt_c[1 + 1 /* padding */];
extern "C" extern u8 m_dropAngleY__20daPy_boomerangMove_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 8049E0B8-8049E36C 000078 02B4+00 1/1 0/0 0/0 .text            createHeap__19daBoomerang_sight_cFv
 */
int daBoomerang_sight_c::createHeap() {
    void* resource;
    char* arcName = daAlink_c::getAlinkArcName();
    JKRArchive* loader = dComIfG_getObjectResInfo(arcName)->getArchive();

    field_0x4 = new J2DScreen();
    if (field_0x4 == NULL) {
        return 0;
    }
    field_0x4->setPriority("zelda_v_cursor_new_yellow.blo", 0x100000, loader);
    dPaneClass_showNullPane(field_0x4);
    resource = JKRFileLoader::getGlbResource("zelda_v_cursor_new_yellow.bpk", loader);
    field_0x58 = (J2DAnmColor*)J2DAnmLoaderDataBase::load(resource);
    if (field_0x58 == NULL) {
        return 0;
    }
    resource = JKRFileLoader::getGlbResource("zelda_v_cursor_new_yellow.bck", loader);
    field_0x5c = (J2DAnmTransform*)J2DAnmLoaderDataBase::load(resource);
    if (field_0x5c == NULL) {
        return 0;
    }
    resource = JKRFileLoader::getGlbResource("zelda_v_cursor_new_yellow_02.brk", loader);
    field_0x18 = (J2DAnmTevRegKey*)J2DAnmLoaderDataBase::load(resource);
    if (field_0x18 == NULL) {
        return 0;
    }
    resource = JKRFileLoader::getGlbResource("zelda_v_cursor_new_yellow.brk", loader);
    field_0x1c = (J2DAnmTevRegKey*)J2DAnmLoaderDataBase::load(resource);
    if (field_0x1c == NULL) {
        return 0;
    }

    field_0x20 = new J2DScreen();
    if (field_0x20 == NULL) {
        return 0;
    }
    field_0x20->setPriority("zelda_v_cursor_new_red.blo", 0x100000, loader);
    dPaneClass_showNullPane(field_0x20);
    resource = JKRFileLoader::getGlbResource("zelda_v_cursor_new_red_02.brk", loader);
    field_0x34 = (J2DAnmTevRegKey*)J2DAnmLoaderDataBase::load(resource);
    if (field_0x34 == NULL) {
        return 0;
    }
    resource = JKRFileLoader::getGlbResource("zelda_v_cursor_new_red.brk", loader);
    field_0x38 = (J2DAnmTevRegKey*)J2DAnmLoaderDataBase::load(resource);
    if (field_0x38 == NULL) {
        return 0;
    }

    field_0x3c = new J2DScreen();
    if (field_0x3c == NULL) {
        return 0;
    }
    field_0x3c->setPriority("zelda_v_cursor_new_orange.blo", 0x100000, loader);
    dPaneClass_showNullPane(field_0x3c);
    resource = JKRFileLoader::getGlbResource("zelda_v_cursor_new_orange_02.brk", loader);
    field_0x50 = (J2DAnmTevRegKey*)J2DAnmLoaderDataBase::load(resource);
    if (field_0x50 == NULL) {
        return 0;
    }
    resource = JKRFileLoader::getGlbResource("zelda_v_cursor_new_orange.brk", loader);
    field_0x54 = (J2DAnmTevRegKey*)J2DAnmLoaderDataBase::load(resource);
    if (field_0x54 == NULL) {
        return 0;
    }
    return 1;
}

/* ############################################################################################## */
/* 804A2850-804A285C 000000 000C+00 7/7 0/0 0/0 .rodata          @4078 */
SECTION_RODATA static u8 const lit_4078[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A2850, &lit_4078);

/* 804A285C-804A2868 00000C 000C+00 0/0 0/0 0/0 .rodata          l_blurTop */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_blurTop[12] = {
    0x42, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A285C, &l_blurTop);
#pragma pop

/* 804A2868-804A287A 000018 000C+06 0/0 0/0 0/0 .rodata          l_blurRoot */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_blurRoot[12 + 6 /* padding */] = {
    0xC2,
    0x20,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0xB4,
    0xA0,
    0x8C,
    0x3C,
    0x1E,
    0x1E,
};
COMPILER_STRIP_GATE(0x804A2868, &l_blurRoot);
#pragma pop

/* 804A287A-804A287C 00002A 0002+00 0/0 0/0 0/0 .rodata m_lockWaitTime__18daBoomerang_HIO_c0 */
#pragma push
#pragma force_active on
SECTION_RODATA u16 const daBoomerang_HIO_c0::m_lockWaitTime = 0x000A;
COMPILER_STRIP_GATE(0x804A287A, &daBoomerang_HIO_c0::m_lockWaitTime);
#pragma pop

/* 804A287C-804A2880 00002C 0004+00 0/0 0/0 0/0 .rodata          m_minCircleR__18daBoomerang_HIO_c0
 */
#pragma push
#pragma force_active on
SECTION_RODATA f32 const daBoomerang_HIO_c0::m_minCircleR = 28.0f;
COMPILER_STRIP_GATE(0x804A287C, &daBoomerang_HIO_c0::m_minCircleR);
#pragma pop

/* 804A2880-804A2884 000030 0004+00 0/0 0/0 0/0 .rodata m_middleCircleR__18daBoomerang_HIO_c0 */
#pragma push
#pragma force_active on
SECTION_RODATA f32 const daBoomerang_HIO_c0::m_middleCircleR = 35.0f;
COMPILER_STRIP_GATE(0x804A2880, &daBoomerang_HIO_c0::m_middleCircleR);
#pragma pop

/* 804A2884-804A2888 000034 0004+00 0/0 0/0 0/0 .rodata          m_maxCircleR__18daBoomerang_HIO_c0
 */
#pragma push
#pragma force_active on
SECTION_RODATA f32 const daBoomerang_HIO_c0::m_maxCircleR = 80.0f;
COMPILER_STRIP_GATE(0x804A2884, &daBoomerang_HIO_c0::m_maxCircleR);
#pragma pop

/* 804A2888-804A288C 000038 0004+00 0/0 0/0 0/0 .rodata          m_scale__18daBoomerang_HIO_c0 */
#pragma push
#pragma force_active on
SECTION_RODATA f32 const daBoomerang_HIO_c0::m_scale = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x804A2888, &daBoomerang_HIO_c0::m_scale);
#pragma pop

/* 804A288C-804A2890 00003C 0004+00 0/0 0/0 0/0 .rodata m_lockWindScale__18daBoomerang_HIO_c0 */
#pragma push
#pragma force_active on
SECTION_RODATA f32 const daBoomerang_HIO_c0::m_lockWindScale = 2.0f;
COMPILER_STRIP_GATE(0x804A288C, &daBoomerang_HIO_c0::m_lockWindScale);
#pragma pop

/* 804A2890-804A28A4 000040 0014+00 0/1 0/0 0/0 .rodata          l_lockSeFlg */
static const u32 l_lockSeFlg[5] = {
    104, 105, 106, 107, 108,
};

/* 804A28A4-804A28A8 000054 0004+00 2/6 0/0 0/0 .rodata          @4432 */
SECTION_RODATA static u8 const lit_4432[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x804A28A4, &lit_4432);

/* 8049E36C-8049EB64 00032C 07F8+00 1/1 0/0 0/0 .text            initialize__19daBoomerang_sight_cFv
 */
#ifdef NONMATCHING
// Matches with literals
void daBoomerang_sight_c::initialize() {
    field_0x8 = field_0x4->search('n_all');
    field_0xc = field_0x4->search('cursor0');
    field_0x10 = field_0x4->search('cursor1');
    field_0x14 = field_0x4->search('cursor2');

    field_0x5c->searchUpdateMaterialID(field_0x4);
    field_0x8->setAnimation(field_0x5c);
    field_0xc->setAnimation(field_0x5c);
    field_0x10->setAnimation(field_0x5c);
    field_0x14->setAnimation(field_0x5c);
    field_0x5c->setFrame(0.0f);

    field_0x58->searchUpdateMaterialID(field_0x4);
    field_0xc->setAnimation(field_0x58);
    field_0x10->setAnimation(field_0x58);
    field_0x14->setAnimation(field_0x58);
    field_0x4->search('flash')->setAnimation(field_0x58);
    field_0x58->setFrame(0.0f);

    field_0x18->searchUpdateMaterialID(field_0x4);
    field_0x1c->searchUpdateMaterialID(field_0x4);
    field_0xc->setAnimation(field_0x18);
    field_0x10->setAnimation(field_0x18);
    field_0x14->setAnimation(field_0x18);
    field_0xc->setAnimation(field_0x1c);
    field_0x10->setAnimation(field_0x1c);
    field_0x14->setAnimation(field_0x1c);
    field_0x18->setFrame(0.0f);
    field_0x1c->setFrame(0.0f);

    field_0x4->animation();
    field_0x4->setUserInfo('n_43');
    field_0x8->setUserInfo(' ');
    field_0x24 = field_0x20->search('n_all');
    field_0x28 = field_0x20->search('cursor0');
    field_0x2c = field_0x20->search('cursor1');
    field_0x30 = field_0x20->search('cursor2');

    field_0x24->setAnimation(field_0x5c);
    field_0x28->setAnimation(field_0x5c);
    field_0x2c->setAnimation(field_0x5c);
    field_0x30->setAnimation(field_0x5c);
    field_0x28->setAnimation(field_0x58);
    field_0x2c->setAnimation(field_0x58);
    field_0x30->setAnimation(field_0x58);
    field_0x20->search('flash')->setAnimation(field_0x58);

    field_0x34->searchUpdateMaterialID(field_0x20);
    field_0x38->searchUpdateMaterialID(field_0x20);
    field_0x28->setAnimation(field_0x34);
    field_0x2c->setAnimation(field_0x34);
    field_0x30->setAnimation(field_0x34);
    field_0x28->setAnimation(field_0x38);
    field_0x2c->setAnimation(field_0x38);
    field_0x30->setAnimation(field_0x38);
    field_0x34->setFrame(0.0f);
    field_0x38->setFrame(0.0f);

    field_0x20->animation();
    field_0x20->setUserInfo('n_43');
    field_0x24->setUserInfo(' ');
    field_0x40 = field_0x3c->search('n_all');
    field_0x44 = field_0x3c->search('cursor0');
    field_0x48 = field_0x3c->search('cursor1');
    field_0x4c = field_0x3c->search('cursor2');

    field_0x40->setAnimation(field_0x5c);
    field_0x44->setAnimation(field_0x5c);
    field_0x48->setAnimation(field_0x5c);
    field_0x4c->setAnimation(field_0x5c);
    field_0x44->setAnimation(field_0x58);
    field_0x48->setAnimation(field_0x58);
    field_0x4c->setAnimation(field_0x58);
    field_0x3c->search('flash')->setAnimation(field_0x58);

    field_0x50->searchUpdateMaterialID(field_0x3c);
    field_0x54->searchUpdateMaterialID(field_0x3c);
    field_0x44->setAnimation(field_0x50);
    field_0x48->setAnimation(field_0x50);
    field_0x4c->setAnimation(field_0x50);
    field_0x44->setAnimation(field_0x54);
    field_0x48->setAnimation(field_0x54);
    field_0x4c->setAnimation(field_0x54);
    field_0x50->setFrame(0.0f);
    field_0x54->setFrame(0.0f);

    field_0x3c->animation();
    field_0x3c->setUserInfo('n_43');
    field_0x40->setUserInfo(' ');
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBoomerang_sight_c::initialize() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/initialize__19daBoomerang_sight_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 804A28A8-804A28AC 000058 0004+00 0/1 0/0 0/0 .rodata          @4481 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4481 = 11.0f / 10.0f;
COMPILER_STRIP_GATE(0x804A28A8, &lit_4481);
#pragma pop

/* 804A28AC-804A28B0 00005C 0004+00 0/2 0/0 0/0 .rodata          @4482 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4482 = 50.0f;
COMPILER_STRIP_GATE(0x804A28AC, &lit_4482);
#pragma pop

/* 804A28B0-804A28B4 000060 0004+00 0/1 0/0 0/0 .rodata          @4483 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4483 = -29.0f;
COMPILER_STRIP_GATE(0x804A28B0, &lit_4483);
#pragma pop

/* 804A28B4-804A28B8 000064 0004+00 0/2 0/0 0/0 .rodata          @4484 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4484 = 21.0f;
COMPILER_STRIP_GATE(0x804A28B4, &lit_4484);
#pragma pop

/* 804A28B8-804A28C0 000068 0004+04 0/1 0/0 0/0 .rodata          @4485 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4485[1 + 1 /* padding */] = {
    9.0f / 10.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x804A28B8, &lit_4485);
#pragma pop

/* 804A28C0-804A28C8 000070 0008+00 1/2 0/0 0/0 .rodata          @4487 */
SECTION_RODATA static u8 const lit_4487[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A28C0, &lit_4487);

/* 8049EB64-8049EDA8 000B24 0244+00 1/1 0/0 0/0 .text            playAnime__19daBoomerang_sight_cFii
 */
#ifdef NONMATCHING
// Matches with literals
int daBoomerang_sight_c::playAnime(int param_0, int param_1) {
    int i;
    f32* pfVar3 = field_0x98;
    f32* pfVar6 = field_0xb0;
    u8* alphaPtr = mAlpha;

    for (i = 0; i < 5; i++, pfVar3++, pfVar6++, alphaPtr++) {
        *pfVar3 += 1.1f;
        if (*pfVar3 >= 50.0f) {
            *pfVar3 += 29.0f;
        }
        *pfVar6 += 1.1f;
        if (*pfVar6 >= (f32)field_0x18->getFrameMax()) {
            *pfVar6 -= (f32)field_0x18->getFrameMax();
        }
        if (param_0 <= i && param_1 > i) {
            cLib_chaseUC(alphaPtr, 0xff, 0x1e);
        } else {
            cLib_chaseUC(alphaPtr, 0, 0x1e);
            if (*alphaPtr == 0 && i == 0) {
                mRedSight = false;
            }
        }
    }
    if (*pfVar3 < 21.0f) {
        *pfVar3 = 21.0f;
    }
    *pfVar3 += 0.9f;
    if (*pfVar3 >= 50.0f) {
        *pfVar3 += 29.0f;
    }
    *pfVar6 += 0.9f;
    if (*pfVar6 >= field_0x18->getFrameMax()) {
        *pfVar6 -= (f32)field_0x18->getFrameMax();
    }
    if (mReserve != 0) {
        return cLib_chaseUC(alphaPtr, 0x80, 0x1e);
    }
    return cLib_chaseUC(alphaPtr, 0, 0x1e);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daBoomerang_sight_c::playAnime(int param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/playAnime__19daBoomerang_sight_cFii.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 804A28C8-804A28CC 000078 0004+00 1/2 0/0 0/0 .rodata          @4495 */
SECTION_RODATA static f32 const lit_4495 = 4.0f;
COMPILER_STRIP_GATE(0x804A28C8, &lit_4495);

/* 8049EDA8-8049EDE8 000D68 0040+00 2/2 0/0 0/0 .text            initFrame__19daBoomerang_sight_cFi
 */
#ifdef NONMATCHING
// Matches with literals
void daBoomerang_sight_c::initFrame(int i_idx) {
    mAlpha[i_idx] = 0;
    field_0x98[i_idx] = 4.0f;
    field_0xb0[i_idx] = 0.0f;
    if (i_idx == 0) {
        mRedSight = true;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBoomerang_sight_c::initFrame(int param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/initFrame__19daBoomerang_sight_cFi.s"
}
#pragma pop
#endif

/* 8049EDE8-8049EE8C 000DA8 00A4+00 1/1 0/0 0/0 .text copyNumData__19daBoomerang_sight_cFi */
void daBoomerang_sight_c::copyNumData(int i_idx) {
    int idx2 = i_idx + 1;

    u8 alpha = mAlpha[i_idx];
    mAlpha[i_idx] = mAlpha[idx2];
    mAlpha[idx2] = alpha;

    f32 some_float1 = field_0x98[i_idx];
    field_0x98[i_idx] = field_0x98[idx2];
    field_0x98[idx2] = some_float1;

    f32 some_float2 = field_0xb0[i_idx];
    field_0xb0[i_idx] = field_0xb0[idx2];
    field_0xb0[idx2] = some_float2;

    cXyz pos = field_0xc8[i_idx];
    field_0xc8[i_idx] = field_0xc8[idx2];
    field_0xc8[idx2] = pos;
}

/* 8049EEC8-8049EF60 000E88 0098+00 1/1 0/0 0/0 .text setSight__19daBoomerang_sight_cFPC4cXyzi */
void daBoomerang_sight_c::setSight(cXyz const* i_posP, int i_idx) {
    Vec pos;

    if (mAlpha[i_idx]) {
        if (i_posP) {
            field_0xc8[i_idx] = *i_posP;
        }
        mDoLib_project(&field_0xc8[i_idx], &pos);
        field_0x68[i_idx] = pos.x;
        field_0x80[i_idx] = pos.y;
    }
}

/* ############################################################################################## */
/* 804A28CC-804A28D0 00007C 0004+00 0/1 0/0 0/0 .rodata          @4643 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4643 = 80.0f;
COMPILER_STRIP_GATE(0x804A28CC, &lit_4643);
#pragma pop

/* 804A28D0-804A28D4 000080 0004+00 0/1 0/0 0/0 .rodata          @4644 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4644 = 35.0f;
COMPILER_STRIP_GATE(0x804A28D0, &lit_4644);
#pragma pop

/* 804A28D4-804A28D8 000084 0004+00 0/1 0/0 0/0 .rodata          @4645 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4645 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x804A28D4, &lit_4645);
#pragma pop

/* 804A28D8-804A28DC 000088 0004+00 0/2 0/0 0/0 .rodata          @4646 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4646 = 15.0f;
COMPILER_STRIP_GATE(0x804A28D8, &lit_4646);
#pragma pop

/* 804A28DC-804A28E0 00008C 0004+00 0/1 0/0 0/0 .rodata          @4647 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4647 = 1.0f / 6.0f;
COMPILER_STRIP_GATE(0x804A28DC, &lit_4647);
#pragma pop

/* 804A28E0-804A28E4 000090 0004+00 0/2 0/0 0/0 .rodata          @4648 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4648 = 0.5f;
COMPILER_STRIP_GATE(0x804A28E0, &lit_4648);
#pragma pop

/* 804A28E4-804A28E8 000094 0004+00 0/1 0/0 0/0 .rodata          @4649 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4649 = 0x3B800000;
COMPILER_STRIP_GATE(0x804A28E4, &lit_4649);
#pragma pop

/* 804A28E8-804A28EC 000098 0004+00 0/1 0/0 0/0 .rodata          @4650 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4650 = 0x3B008081;
COMPILER_STRIP_GATE(0x804A28E8, &lit_4650);
#pragma pop

/* 804A28EC-804A28F0 00009C 0004+00 0/1 0/0 0/0 .rodata          @4651 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4651 = 0x40278D36;
COMPILER_STRIP_GATE(0x804A28EC, &lit_4651);
#pragma pop

/* 804A28F0-804A28F8 0000A0 0004+04 0/1 0/0 0/0 .rodata          @4652 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4652[1 + 1 /* padding */] = {
    0x3F060A92,
    /* padding */
    0x00000000,
};
COMPILER_STRIP_GATE(0x804A28F0, &lit_4652);
#pragma pop

/* 804A28F8-804A2900 0000A8 0008+00 0/1 0/0 0/0 .rodata          @4654 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4654[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A28F8, &lit_4654);
#pragma pop

/* 8049EF60-8049F280 000F20 0320+00 1/0 0/0 0/0 .text            draw__19daBoomerang_sight_cFv */
#ifdef NONMATCHING
// Matches with literals
void daBoomerang_sight_c::draw() {
    J2DGrafContext* ctx = dComIfGp_getCurrentGrafPort();
    u8* puVar = mAlpha;
    J2DPane* pJVar5;
    J2DPane* pJVar9;
    J2DPane* pJVar8;
    J2DScreen* screen;
    J2DPane* pJVar4;
    f32 f30;
    f32 f31;

    for (int i = 0; i < 6; i++, puVar++) {
        if (*puVar != 0) {
            field_0x5c->setFrame(field_0x98[i]);
            field_0x58->setFrame(field_0x98[i] > 21.0f ? 21.0f : field_0x98[i]);
            if (i == 5) {
                field_0x18->setFrame(field_0xb0[i]);
                pJVar5 = field_0xc;
                pJVar9 = field_0x10;
                pJVar8 = field_0x14;
                screen = field_0x4;
                pJVar4 = field_0x8;
                f31 = 80.0f;
            } else if (i == 0 && mRedSight != false) {
                field_0x34->setFrame(field_0xb0[i]);
                pJVar5 = field_0x28;
                pJVar9 = field_0x2c;
                pJVar8 = field_0x30;
                screen = field_0x20;
                pJVar4 = field_0x24;
                f31 = 35.0f;
            } else {
                field_0x50->setFrame(field_0xb0[i]);
                pJVar5 = field_0x44;
                pJVar9 = field_0x48;
                pJVar8 = field_0x4c;
                screen = field_0x3c;
                pJVar4 = field_0x40;
                f31 = 35.0f;
            }
            screen->animation();
            pJVar4->scale(0.6f, 0.6f);
            pJVar4->translate(field_0x68[i], field_0x80[i]);
            field_0x98[i] = field_0x98[i];
            if (!(field_0x98[i] < 15.0f)) {
                if (field_0x98[i] < 21.0f) {
                    f30 = f31 * (field_0x98[i] - 15.0f) * 0.1666667f;
                } else if (i == 5) {
                    f30 = f31 * (*puVar * 0.00390625f + 0.5f);
                } else {
                    f30 = f31 * (*puVar * 0.001960784f + 0.5f);
                }

                pJVar5->translate(0.0f, -f30);
                pJVar9->translate(f30 * cM_fcos(2.617994f), f30 * cM_fsin(2.617994f));
                pJVar8->translate(f30 * cM_fcos(0.5235988f), f30 * cM_fsin(0.5235988f));
            }
            screen->draw(0.0f, 0.0f, ctx);
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBoomerang_sight_c::draw() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/draw__19daBoomerang_sight_cFv.s"
}
#pragma pop
#endif

/* 8049F280-8049F360 001240 00E0+00 1/1 0/0 0/0 .text windModelCallBack__13daBoomerang_cFv */
void daBoomerang_c::windModelCallBack() {
    mDoMtx_YrotS((MtxP)mDoMtx_stack_c::get(), shape_angle.y);
    mDoMtx_ZrotM((MtxP)mDoMtx_stack_c::get(), -shape_angle.z);
    mDoMtx_XrotM((MtxP)mDoMtx_stack_c::get(), -shape_angle.x);
    mDoMtx_YrotM((MtxP)mDoMtx_stack_c::get(), -shape_angle.y);

    MTXConcat(mDoMtx_stack_c::get(), J3DSys::mCurrentMtx, mDoMtx_stack_c::get());

    mDoMtx_stack_c::get()[0][3] = J3DSys::mCurrentMtx[0][3];
    mDoMtx_stack_c::get()[1][3] = J3DSys::mCurrentMtx[1][3];
    mDoMtx_stack_c::get()[2][3] = J3DSys::mCurrentMtx[2][3];

    MTXCopy(mDoMtx_stack_c::get(), J3DSys::mCurrentMtx);
    field_0x56c->setAnmMtx(4, mDoMtx_stack_c::get());

    return;
}

/* 8049F360-8049F39C 001320 003C+00 1/1 0/0 0/0 .text daBoomeang_windModelCallBack__FP8J3DJointi
 */
static int daBoomeang_windModelCallBack(J3DJoint* param_0, int param_1) {
    daBoomerang_c* boomerang = (daBoomerang_c*)j3dSys.getModel()->getUserArea();

    if (param_1 == 0) {
        boomerang->windModelCallBack();
    }

    return 1;
}

/* 8049F39C-8049F5D4 00135C 0238+00 1/1 0/0 0/0 .text            draw__13daBoomerang_cFv */
int daBoomerang_c::draw() {
    if (checkStateFlg0(FLG0_UNK) == 0) {
        for (int i = 0; i < 5; i++) {
            if (mSight.getAlpha(i) != 0) {
                if (mLockActors[i] != NULL) {
                    mLockActors[i] = fopAcM_SearchByID(field_0x6ac[i]);
                    if (mLockActors[i] == NULL) {
                        pushLockList(i);
                        i--;
                    } else {
                        mSight.setSight(&mLockActors[i]->eyePos, i);
                    }

                } else {
                    if (field_0x718[i] != 0) {
                        mSight.setSight(&mLockActorsPositions[i], i);
                    } else {
                        mSight.setSight(NULL, i);
                    }
                }
            }
        }
        if (mSight.getAlpha(5) != 0) {
            if (field_0x6d8 != NULL) {
                field_0x6d8 = fopAcM_SearchByID(field_0x6d4);
            }
            if (field_0x6d8 != 0) {
                mSight.setSight(&field_0x6d8->eyePos, 5);
            } else {
                mSight.setSight(NULL, 5);
            }
        }
        if (dComIfGp_event_runCheck() == 0) {
            dComIfGd_set2DXlu((dDlst_base_c*)&mSight);
        }
    }
    g_env_light.settingTevStruct(0, &current.pos, &tevStr);
    g_env_light.setLightTevColorType_MAJI(field_0x568, &tevStr);
    mDoExt_modelUpdateDL(field_0x568);
    daMirror_c::entry(field_0x568);
    if (fopAcM_GetParam(this) != 0) {
        g_env_light.setLightTevColorType_MAJI(field_0x56c, &tevStr);
        mDoExt_modelEntryDL(field_0x56c);
        daMirror_c::entry(field_0x56c);
    } else if (dComIfGp_checkPlayerStatus0(0, 0x80000) != 0) {
        g_env_light.setLightTevColorType_MAJI(field_0x590, &tevStr);
        mDoExt_modelUpdateDL(field_0x590);
    }
    return 1;
}

/* 8049F5D4-8049F5F4 001594 0020+00 1/0 0/0 0/0 .text            daBoomerang_Draw__FP13daBoomerang_c
 */
static int daBoomerang_Draw(daBoomerang_c* i_this) {
    return i_this->draw();
}

/* 8049F5F4-8049F63C 0015B4 0048+00 1/1 0/0 0/0 .text
 * lockLineCallback__13daBoomerang_cFP10fopAc_ac_c              */
void daBoomerang_c::lockLineCallback(fopAc_ac_c* i_actorP) {
    if (i_actorP && fopAcM_GetName(i_actorP) != PROC_Obj_glowSphere &&
        fopAcM_GetName(i_actorP) != PROC_E_VT && fopAcM_GetName(i_actorP) != PROC_OBJ_BRG)
    {
        setLockActor(i_actorP, 1);
    }
}

/* 8049F63C-8049F660 0015FC 0024+00 1/1 0/0 0/0 .text
 * daBoomerang_lockLineCallback__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
static void daBoomerang_lockLineCallback(fopAc_ac_c* i_actorP1, dCcD_GObjInf* param_1,
                                         fopAc_ac_c* i_actorP2, dCcD_GObjInf* param_3) {
    daBoomerang_c* boomerang = (daBoomerang_c*)i_actorP1;
    boomerang->lockLineCallback(i_actorP2);
}

/* 8049F660-8049F6EC 001620 008C+00 1/1 0/0 0/0 .text
 * moveLineCallback__13daBoomerang_cFP10fopAc_ac_c              */
void daBoomerang_c::moveLineCallback(fopAc_ac_c* i_actorP) {
    if (i_actorP) {
        for (int i = 0; i < 5; i++) {
            if (mLockActors[i] == i_actorP) {
                field_0x6ac[i] = -1;
                mLockActors[i] = 0;

                if (i == field_0x951) {
                    field_0x957 = 10;
                    field_0x9ac = i_actorP->eyePos;
                    field_0x9c4 = current.pos;
                }
            }
        }
    }
}

/* 8049F6EC-8049F710 0016AC 0024+00 1/1 0/0 0/0 .text
 * daBoomerang_moveLineCallback__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
static void daBoomerang_moveLineCallback(fopAc_ac_c* i_actorP1, dCcD_GObjInf* param_1,
                                         fopAc_ac_c* i_actorP2, dCcD_GObjInf* param_3) {
    daBoomerang_c* boomerang = (daBoomerang_c*)i_actorP1;
    boomerang->moveLineCallback(i_actorP2);
}

/* 8049F710-8049F818 0016D0 0108+00 3/3 0/0 0/0 .text            pushLockList__13daBoomerang_cFi */
void daBoomerang_c::pushLockList(int param_0) {
    if (param_0 == 0) {
        mSight.offRedSight();
    }
    if (fopAcM_GetParam(this) == 1 && param_0 < field_0x951) {
        field_0x951--;
    }

    int i;
    for (i = param_0; i < mLockCnt - 1; i++) {
        field_0x6ac[i] = field_0x6ac[i + 1];
        mLockActors[i] = mLockActors[i + 1];
        mLockActorsPositions[i] = mLockActorsPositions[i + 1];
        field_0x718[i] = field_0x718[i + 1];
        mSight.copyNumData(i);
    }
    field_0x6ac[i] = -1;
    mLockActors[i] = NULL;
    field_0x718[i] = 0;
    if (mLockCnt != 0) {
        mLockCnt--;
    }
}

/* 8049F818-8049F874 0017D8 005C+00 1/0 0/0 0/0 .text
 * cancelLockActorBase__13daBoomerang_cFP10fopAc_ac_c           */
void daBoomerang_c::cancelLockActorBase(fopAc_ac_c* i_actorP) {
    for (int i = 0; i < mLockCnt; i++) {
        if (mLockActors[i] == i_actorP) {
            pushLockList(i);
            break;
        }
    }
}

/* 8049F874-8049F8B0 001834 003C+00 1/0 0/0 0/0 .text
 * setAimActorBase__13daBoomerang_cFP10fopAc_ac_c               */
void daBoomerang_c::setAimActorBase(fopAc_ac_c* i_actorP) {
    if (mLockCnt == 0) {
        onStateFlg0(FLG0_UNK);
        setLockActor(i_actorP, 0);
    }
}

/* 8049F8B0-8049F9A4 001870 00F4+00 2/2 0/0 0/0 .text setLockActor__13daBoomerang_cFP10fopAc_ac_ci
 */
int daBoomerang_c::setLockActor(fopAc_ac_c* param_0, int param_1) {
    if (mLockCnt >= 5) {
        return 0;
    }
    u32 Id = fopAcM_GetID(param_0);
    for (int i = 0; i < mLockCnt; i++) {
        if (field_0x6ac[i] == Id) {
            return 0;
        }
    }
    if (param_1 != 0) {
        f32 squareDistance = param_0->eyePos.abs2(current.pos);
        if (squareDistance > field_0x984) {
            return 0;
        }
        field_0x984 = squareDistance;
        field_0x6a8 = Id;
    } else {
        field_0x6ac[mLockCnt] = Id;
        mLockActors[mLockCnt] = param_0;
        mSight.initFrame(mLockCnt);
        mLockCnt++;
    }
    return 1;
}

/* 8049F9A4-8049F9F0 001964 004C+00 3/3 0/0 0/0 .text            resetLockActor__13daBoomerang_cFv
 */
void daBoomerang_c::resetLockActor() {
    for (int i = 0; i < 5; i++) {
        field_0x6ac[i] = -1;
        mLockActors[i] = 0;
        field_0x718[i] = 0;
    }

    mLockCnt = 0;
    field_0x951 = 0;
}

/* 8049F9F0-8049FAA4 0019B0 00B4+00 2/2 0/0 0/0 .text            setRoomInfo__13daBoomerang_cFv */
void daBoomerang_c::setRoomInfo() {
    field_0xd6c.SetPos(&current.pos);
    field_0x980 = dComIfG_Bgsp().GroundCross(&field_0xd6c);
    int roomNo;
    if (field_0x980 != -1000000000.0f) {
        roomNo = dComIfG_Bgsp().GetRoomId(field_0xd6c);
        tevStr.mEnvrIdxOverride = dComIfG_Bgsp().GetPolyColor(field_0xd6c);
    } else {
        roomNo = dComIfGp_roomControl_getStayNo();
    }
    tevStr.mRoomNo = roomNo;
    field_0x953 = dComIfGp_getReverb(roomNo);
    field_0x9d0.SetRoomId(roomNo);
    fopAcM_SetRoomNo(this, roomNo);
}

/* 8049FAA4-8049FBAC 001A64 0108+00 2/2 0/0 0/0 .text            setKeepMatrix__13daBoomerang_cFv */
void daBoomerang_c::setKeepMatrix() {
    daAlink_c* link = daAlink_getAlinkActorClass();
    MTXCopy(link->getLeftItemMatrix(), mDoMtx_stack_c::now);
    mDoMtx_stack_c::transM(32.0f, -5.0f, -6.0f);
    mDoMtx_stack_c::XYZrotM(0xfd28, 0x1bbb, 0xf99a);
    MTXCopy(mDoMtx_stack_c::now, field_0x568->mBaseTransformMtx);
    MTXCopy(link->getLeftItemMatrix(), field_0x56c->mBaseTransformMtx);
    mDoMtx_stack_c::multVecZero(&current.pos);
    daAlink_c::simpleAnmPlay(m_waitEffBtk);
    MTXCopy(link->getLeftItemMatrix(), field_0x590->mBaseTransformMtx);
}

/* ############################################################################################## */
/* 804A2910-804A2914 0000C0 0004+00 5/8 0/0 0/0 .rodata          @4945 */
SECTION_RODATA static f32 const lit_4945 = 1.0f;
COMPILER_STRIP_GATE(0x804A2910, &lit_4945);

/* 8049FBAC-8049FCD0 001B6C 0124+00 1/1 0/0 0/0 .text            setMoveMatrix__13daBoomerang_cFv */
#ifdef NONMATCHING
// Matches with literals
void daBoomerang_c::setMoveMatrix() {
    mDoMtx_stack_c::transS(current.pos);
    mDoMtx_stack_c::ZXYrotM(shape_angle);
    MTXCopy(mDoMtx_stack_c::now, field_0x56c->mBaseTransformMtx);
    daAlink_c::simpleAnmPlay(m_windBtk);
    field_0x98c += 1.0f;
    s32 maxFrame = mBck.getBckAnm()->getFrameMax();
    if (field_0x98c >= maxFrame) {
        field_0x98c -= maxFrame;
    }
    mBck.entry(field_0x56c->getModelData(), field_0x98c);
    field_0x56c->calc();
    mDoMtx_stack_c::transS(current.pos);
    mDoMtx_stack_c::ZXYrotM(shape_angle);
    mDoMtx_stack_c::YrotM(field_0x95a);
    mDoMtx_stack_c::XrotM(0x7fff);
    MTXCopy(mDoMtx_stack_c::now, field_0x568->mBaseTransformMtx);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBoomerang_c::setMoveMatrix() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/setMoveMatrix__13daBoomerang_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 804A2914-804A2918 0000C4 0004+00 1/2 0/0 0/0 .rodata          @4961 */
SECTION_RODATA static f32 const lit_4961 = -1.0f;
COMPILER_STRIP_GATE(0x804A2914, &lit_4961);

/* 8049FCD0-8049FD6C 001C90 009C+00 1/1 0/0 0/0 .text            setRotAngle__13daBoomerang_cFv */
#ifdef NONMATCHING
// Matches with literals
void daBoomerang_c::setRotAngle() {
    s16 sVar = field_0x95a;
    field_0x95a -= 0x1f00;
    if (sVar >= 0 && field_0x95a < 0) {
        fopAcM_seStart(this, JA_SE_LK_BOOM_FLY, 0);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBoomerang_c::setRotAngle() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/setRotAngle__13daBoomerang_cFv.s"
}
#pragma pop
#endif

/* 8049FD6C-8049FE6C 001D2C 0100+00 2/2 0/0 0/0 .text            setAimPos__13daBoomerang_cFv */
void daBoomerang_c::setAimPos() {
    if (checkStateFlg0(FLG0_1) != 0) {
        if (fopAcM_GetParam(this) != 1)
            return;
        field_0x990 = daAlink_getAlinkActorClass()->getBoomerangCatchPos();
        return;
    }
    if (field_0x957 != 0) {
        field_0x990 = field_0x9ac;
        return;
    }
    for (int i = field_0x951; i < mLockCnt; i++, field_0x951++) {
        if (mLockActors[i] != NULL) {
            field_0x990 = mLockActors[i]->eyePos;
            return;
        }
        if (field_0x718[i] != 0) {
            field_0x990 = mLockActorsPositions[i];
            return;
        }
    }
}

/* 8049FE6C-804A006C 001E2C 0200+00 2/2 0/0 0/0 .text checkBgHit__13daBoomerang_cFP4cXyzP4cXyz */
void daBoomerang_c::checkBgHit(cXyz* i_start, cXyz* i_end) {
    field_0xcfc.Set(i_start, i_end, this);
    if (dComIfG_Bgsp().LineCross(&field_0xcfc) != 0) {
        current.pos = field_0xcfc.i_GetCross();
        onStateFlg0(FLG0_1);
        field_0x957 = 0;
        current.angle.y -= -0x8000;
        shape_angle.y = current.angle.y;
        resetLockActor();
        return;
    }
    if (field_0x962 != 0) {
        return;
    }
    field_0xc8c.Set(i_start, i_end, this);
    if (dComIfG_Bgsp().LineCross(&field_0xc8c) == 0)
        return;
    if (checkStateFlg0(FLG0_0x200) != 0) {
        return;
    }
    if (field_0x718[field_0x951] != 0) {
        if (mLockActorsPositions[field_0x951].abs2(field_0xc8c.i_GetCross()) < 2500.0f) {
            if (field_0x951 < mLockCnt - 1) {
                field_0x718[field_0x951] = 0;
                field_0x951++;
                return;
            }
        }
    }
    if (field_0x957 == 0) {
        if (checkStateFlg0(FLG0_10) == 0 && mLockCnt > field_0x951) {
            return;
        }
        current.pos = field_0xc8c.i_GetCross();
        onStateFlg0(FLG0_1);
        field_0x957 = 0;
        current.angle.y -= -0x8000;
        if (dBgS_CheckBRoofPoly(field_0xc8c) != 0) {
            current.angle.x *= -1;
            current.pos.y -= 30.0f;
        }
        shape_angle.y = current.angle.y;
        resetLockActor();
    }
}

/* 804A006C-804A012C 00202C 00C0+00 1/1 0/0 0/0 .text setEffectTraceMatrix__13daBoomerang_cFPUlUs
 */
#ifdef NONMATCHING
// Matches with literals
JPABaseEmitter* daBoomerang_c::setEffectTraceMatrix(u32* param_0, u16 param_1) {
    *param_0 = dComIfGp_particle_set(*param_0, param_1, &current.pos, &tevStr);
    JPABaseEmitter* emitter = dComIfGp_particle_getEmitter(*param_0);
    if (emitter != NULL) {
        emitter->setGlobalRTMatrix(field_0x568->getBaseTRMtx());
    }
    return emitter;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPABaseEmitter* daBoomerang_c::setEffectTraceMatrix(u32* param_0, u16 param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/setEffectTraceMatrix__13daBoomerang_cFPUlUs.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 804A2920-804A2924 0000D0 0004+00 0/1 0/0 0/0 .rodata          @5385 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5385 = 1.5f;
COMPILER_STRIP_GATE(0x804A2920, &lit_5385);
#pragma pop

/* 804A2924-804A2928 0000D4 0004+00 0/1 0/0 0/0 .rodata          @5386 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5386 = 9.0f / 5.0f;
COMPILER_STRIP_GATE(0x804A2924, &lit_5386);
#pragma pop

/* 804A2928-804A292C 0000D8 0004+00 0/1 0/0 0/0 .rodata          @5387 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5387 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x804A2928, &lit_5387);
#pragma pop

/* 804A292C-804A2930 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5388 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5388 = 3.0f;
COMPILER_STRIP_GATE(0x804A292C, &lit_5388);
#pragma pop

/* 804A2930-804A2934 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5389 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5389 = 5.0f;
COMPILER_STRIP_GATE(0x804A2930, &lit_5389);
#pragma pop

/* 804A2934-804A2938 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5390 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5390 = 10.0f;
COMPILER_STRIP_GATE(0x804A2934, &lit_5390);
#pragma pop

/* 804A2938-804A2940 0000E8 0008+00 0/2 0/0 0/0 .rodata          @5391 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5391[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A2938, &lit_5391);
#pragma pop

/* 804A2940-804A2948 0000F0 0008+00 0/2 0/0 0/0 .rodata          @5392 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5392[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A2940, &lit_5392);
#pragma pop

/* 804A2948-804A2950 0000F8 0008+00 0/2 0/0 0/0 .rodata          @5393 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5393[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A2948, &lit_5393);
#pragma pop

/* 804A2950-804A2954 000100 0004+00 0/1 0/0 0/0 .rodata          @5394 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5394 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x804A2950, &lit_5394);
#pragma pop

/* 804A2ADC-804A2AE8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804A2AE8-804A2AFC 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 804A2AFC-804A2B08 -00001 000C+00 1/1 0/0 0/0 .data            @5412 */
SECTION_DATA static void* lit_5412[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)procMove__13daBoomerang_cFv,
};

/* 804A2B08-804A2B14 -00001 000C+00 1/1 0/0 0/0 .data            @5579 */
SECTION_DATA static void* lit_5579[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)procWait__13daBoomerang_cFv,
};

/* 804A2B14-804A2B60 000038 004C+00 0/1 0/0 0/0 .data            l_atCpsSrc */
#pragma push
#pragma force_active on
static dCcD_SrcCps l_atCpsSrc = {
    {
        {0, {{AT_TYPE_BOOMERANG, 0, 0x3B}, {0, 0}, 0}},
        {dCcD_SE_WOOD, 4, 0, 0, {0}},
        {dCcD_SE_NONE, 0, 0, 0, {0}},
        {0},
    },
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            15.0f,
        },
    }
};
#pragma pop

/* 804A2B60-804A2BA4 000084 0044+00 0/1 0/0 0/0 .data            l_windAtCylSrc */
#pragma push
#pragma force_active on
static dCcD_SrcCyl l_windAtCylSrc = {
    {
        {0, {{AT_TYPE_BOOMERANG, 0, 0x1B}, {0, 0}, 0}},
        {dCcD_SE_13, 0, 0, 3, {2}},
        {dCcD_SE_NONE, 0, 0, 0, {0}},
        {0},
    },
    {
        {0.0f, 0.0f, 0.0f},
        150.0f,
        600.0f,
    }
};
#pragma pop

/* 804A2BA4-804A2BB0 -00001 000C+00 0/1 0/0 0/0 .data            @5999 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5999[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)procWait__13daBoomerang_cFv,
};
#pragma pop

/* 804A2BB0-804A2BBC -00001 000C+00 0/1 0/0 0/0 .data            @6005 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_6005[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)setAimActorBase__13daBoomerang_cFP10fopAc_ac_c,
};
#pragma pop

/* 804A2BBC-804A2BC8 -00001 000C+00 0/1 0/0 0/0 .data            @6006 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_6006[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cancelLockActorBase__13daBoomerang_cFP10fopAc_ac_c,
};
#pragma pop

/* 804A2BC8-804A2BE8 -00001 0020+00 1/0 0/0 0/0 .data            l_daBoomerang_Method */
static actor_method_class l_daBoomerang_Method = {
    (process_method_func)daBoomerang_Create__FP10fopAc_ac_c,
    (process_method_func)daBoomerang_Delete__FP13daBoomerang_c,
    (process_method_func)daBoomerang_Execute__FP13daBoomerang_c,
    0,
    (process_method_func)daBoomerang_Draw__FP13daBoomerang_c,
};

/* 804A2BE8-804A2C18 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_BOOMERANG */
extern actor_process_profile_definition g_profile_BOOMERANG = {
  fpcLy_CURRENT_e,       // mLayerID
  6,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_BOOMERANG,        // mProcName
  &g_fpcLf_Method.mBase, // sub_method
  0x00000DE4,            // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  686,                   // mPriority
  &l_daBoomerang_Method, // sub_method
  0x00060000,            // mStatus
  fopAc_UNK_GROUP_5_e,   // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};

/* 804A2C18-804A2C24 00013C 000C+00 1/1 0/0 0/0 .data            __vt__12dDlst_base_c */
SECTION_DATA extern void* __vt__12dDlst_base_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__12dDlst_base_cFv,
};

/* 804A2C24-804A2C30 000148 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 804A2C30-804A2C54 000154 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804A2784,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804A277C,
};

/* 804A2C54-804A2C60 000178 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 804A2C60-804A2C6C 000184 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 804A2C6C-804A2C78 000190 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 804A2C78-804A2C84 00019C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 804A2C84-804A2CB4 0001A8 0030+00 3/3 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804A2764,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804A2774,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804A276C,
};

/* 804A2CB4-804A2CC0 0001D8 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 804A2CD0-804A2CD4 000000 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 804A2CD4-804A2CD8 000004 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 804A2CD8-804A2CDC 000008 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 804A2CDC-804A2CE0 00000C 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 804A2CE0-804A2CE4 000010 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 804A2CE4-804A2CE8 000014 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 804A2CE8-804A2CEC 000018 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 804A2CEC-804A2CF0 00001C 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 804A2CF0-804A2CF4 000020 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 804A2CF4-804A2CF8 000024 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 804A2CF8-804A2CFC 000028 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 804A2CFC-804A2D00 00002C 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 804A2D00-804A2D04 000030 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 804A2D04-804A2D08 000034 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 804A2D08-804A2D0C 000038 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 804A2D0C-804A2D10 00003C 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 804A2D10-804A2D14 000040 0001+03 0/0 0/0 0/0 .bss             l_HIO */
#pragma push
#pragma force_active on
static u8 l_HIO[1 + 3 /* padding */];
#pragma pop

/* 804A2D14-804A2D24 000044 000C+04 0/1 0/0 0/0 .bss             effDirection$5075 */
#pragma push
#pragma force_active on
static u8 effDirection[12 + 4 /* padding */];
#pragma pop

/* 804A2D24-804A2D34 000054 000C+04 0/1 0/0 0/0 .bss             effScale0$5078 */
#pragma push
#pragma force_active on
static u8 effScale0[12 + 4 /* padding */];
#pragma pop

/* 804A2D34-804A2D44 000064 000C+04 0/1 0/0 0/0 .bss             effScaleSand$5081 */
#pragma push
#pragma force_active on
static u8 effScaleSand[12 + 4 /* padding */];
#pragma pop

/* 804A2D44-804A2D50 000074 000C+00 0/1 0/0 0/0 .bss             effScaleGrass$5084 */
#pragma push
#pragma force_active on
static u8 effScaleGrass[12];
#pragma pop

/* 804A012C-804A082C 0020EC 0700+00 1/1 0/0 0/0 .text            setEffect__13daBoomerang_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBoomerang_c::setEffect() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/setEffect__13daBoomerang_cFv.s"
}
#pragma pop

/* 804A082C-804A0874 0027EC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGPla::~cM3dGPla() {
extern "C" asm void __dt__8cM3dGPlaFv() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804A2954-804A2958 000104 0004+00 0/1 0/0 0/0 .rodata          @5561 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5561 = 60.0f;
COMPILER_STRIP_GATE(0x804A2954, &lit_5561);
#pragma pop

/* 804A2958-804A295C 000108 0004+00 0/1 0/0 0/0 .rodata          @5562 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5562 = 100.0f;
COMPILER_STRIP_GATE(0x804A2958, &lit_5562);
#pragma pop

/* 804A0874-804A0F0C 002834 0698+00 2/0 0/0 0/0 .text            procWait__13daBoomerang_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBoomerang_c::procWait() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/procWait__13daBoomerang_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804A295C-804A2968 00010C 000C+00 0/1 0/0 0/0 .rodata          @5574 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5574[12] = {
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A295C, &lit_5574);
#pragma pop

/* 804A2968-804A296C 000118 0004+00 0/1 0/0 0/0 .rodata          @5762 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5762 = 40.0f;
COMPILER_STRIP_GATE(0x804A2968, &lit_5762);
#pragma pop

/* 804A296C-804A2970 00011C 0004+00 0/1 0/0 0/0 .rodata          @5763 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5763 = 2.0f;
COMPILER_STRIP_GATE(0x804A296C, &lit_5763);
#pragma pop

/* 804A2970-804A2974 000120 0004+00 0/1 0/0 0/0 .rodata          @5764 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5764 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x804A2970, &lit_5764);
#pragma pop

/* 804A2974-804A2978 000124 0004+00 0/1 0/0 0/0 .rodata          @5765 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5765 = 20.0f;
COMPILER_STRIP_GATE(0x804A2974, &lit_5765);
#pragma pop

/* 804A2978-804A297C 000128 0004+00 0/1 0/0 0/0 .rodata          @5766 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5766 = 18.0f;
COMPILER_STRIP_GATE(0x804A2978, &lit_5766);
#pragma pop

/* 804A297C-804A2980 00012C 0004+00 0/1 0/0 0/0 .rodata          @5767 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5767 = 1024.0f;
COMPILER_STRIP_GATE(0x804A297C, &lit_5767);
#pragma pop

/* 804A2980-804A2984 000130 0004+00 0/1 0/0 0/0 .rodata          @5768 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5768 = 256.0f;
COMPILER_STRIP_GATE(0x804A2980, &lit_5768);
#pragma pop

/* 804A0F0C-804A1814 002ECC 0908+00 2/1 0/0 0/0 .text            procMove__13daBoomerang_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBoomerang_c::procMove() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/procMove__13daBoomerang_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804A2984-804A2988 000134 0004+00 0/1 0/0 0/0 .rodata          @5874 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5874 = 1000000000.0f;
COMPILER_STRIP_GATE(0x804A2984, &lit_5874);
#pragma pop

/* 804A2988-804A298C 000138 0004+00 0/1 0/0 0/0 .rodata          @5875 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5875 = 500.0f;
COMPILER_STRIP_GATE(0x804A2988, &lit_5875);
#pragma pop

/* 804A1814-804A1BD4 0037D4 03C0+00 1/1 0/0 0/0 .text            execute__13daBoomerang_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daBoomerang_c::execute() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/execute__13daBoomerang_cFv.s"
}
#pragma pop

/* 804A1BD4-804A1BF4 003B94 0020+00 1/0 0/0 0/0 .text daBoomerang_Execute__FP13daBoomerang_c */
static int daBoomerang_Execute(daBoomerang_c* i_this) {
    return i_this->execute();
}

/* ############################################################################################## */
/* 804A2CC0-804A2CD0 0001E4 0010+00 3/3 0/0 0/0 .data            __vt__19daBoomerang_sight_c */
SECTION_DATA extern void* __vt__19daBoomerang_sight_c[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__19daBoomerang_sight_cFv,
    (void*)__dt__19daBoomerang_sight_cFv,
};

/* 804A1BF4-804A1EBC 003BB4 02C8+00 1/1 0/0 0/0 .text            __dt__13daBoomerang_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daBoomerang_c::~daBoomerang_c() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/__dt__13daBoomerang_cFv.s"
}
#pragma pop

/* 804A1EBC-804A1EE4 003E7C 0028+00 1/0 0/0 0/0 .text daBoomerang_Delete__FP13daBoomerang_c */
static int daBoomerang_Delete(daBoomerang_c* i_this) {
    i_this->~daBoomerang_c();
    return 1;
}

/* 804A1EE4-804A2064 003EA4 0180+00 1/1 0/0 0/0 .text            createHeap__13daBoomerang_cFv */
#ifdef NONMATCHING
// Matches with literals
int daBoomerang_c::createHeap() {
    if (mSight.createHeap() == 0) {
        return 0;
    }
    mSight.initialize();
    J3DModelData* modelData =
        (J3DModelData*)dComIfG_getObjectRes(daAlink_c::getAlinkArcName(), 0x1f);
    field_0x568 = mDoExt_J3DModel__create(modelData, 0x80000, 0x11000084);
    if (field_0x568 == NULL) {
        return 0;
    }
    modelData = (J3DModelData*)dComIfG_getObjectRes(daAlink_c::getAlinkArcName(), 0x34);
    field_0x56c = mDoExt_J3DModel__create(modelData, 0, 0x11000284);
    if (field_0x56c == NULL) {
        return 0;
    }
    J3DAnmTransform* transform =
        (J3DAnmTransform*)dComIfG_getObjectRes(daAlink_c::getAlinkArcName(), 0x13);
    if (mBck.init(transform, 0, 2, 1.0f, 0, -1, false) == 0) {
        return 0;
    }
    modelData = (J3DModelData*)dComIfG_getObjectRes(daAlink_c::getAlinkArcName(), 0x19);
    field_0x590 = mDoExt_J3DModel__create(modelData, 0, 0x11000284);
    if (field_0x590 == NULL) {
        return 0;
    }
    field_0x720.init(&current.pos, 2);
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daBoomerang_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/createHeap__13daBoomerang_cFv.s"
}
#pragma pop
#endif

/* 804A2064-804A2084 004024 0020+00 1/1 0/0 0/0 .text daBoomerang_createHeap__FP10fopAc_ac_c */
static int daBoomerang_createHeap(fopAc_ac_c* i_this) {
    return static_cast<daBoomerang_c*>(i_this)->createHeap();
}

/* ############################################################################################## */
/* 804A298C-804A2990 00013C 0004+00 1/1 0/0 0/0 .rodata          @6077 */
SECTION_RODATA static f32 const lit_6077 = 600.0f;
COMPILER_STRIP_GATE(0x804A298C, &lit_6077);

/* 804A2084-804A230C 004044 0288+00 1/1 0/0 0/0 .text            create__13daBoomerang_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daBoomerang_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/create__13daBoomerang_cFv.s"
}
#pragma pop

/* 804A230C-804A2524 0042CC 0218+00 1/1 0/0 0/0 .text            __ct__13daBoomerang_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daBoomerang_c::daBoomerang_c() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/__ct__13daBoomerang_cFv.s"
}
#pragma pop

/* 804A2524-804A259C 0044E4 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
extern "C" asm void __dt__14dBgS_ObjGndChkFv() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* 804A259C-804A25E4 00455C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 804A25E4-804A262C 0045A4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 804A262C-804A2688 0045EC 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 804A2688-804A26F8 004648 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 804A26F8-804A2718 0046B8 0020+00 1/0 0/0 0/0 .text            daBoomerang_Create__FP10fopAc_ac_c
 */
static int daBoomerang_Create(fopAc_ac_c* i_this) {
    return static_cast<daBoomerang_c*>(i_this)->create();
}

/* 804A2718-804A271C 0046D8 0004+00 1/0 0/0 0/0 .text            draw__12dDlst_base_cFv */
void draw__12dDlst_base_cFv() {
    /* empty function */
}

/* 804A271C-804A2764 0046DC 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 804A2764-804A276C 004724 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_804A2764() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/func_804A2764.s"
}
#pragma pop

/* 804A276C-804A2774 00472C 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_804A276C() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/func_804A276C.s"
}
#pragma pop

/* 804A2774-804A277C 004734 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_804A2774() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/func_804A2774.s"
}
#pragma pop

/* 804A277C-804A2784 00473C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_804A277C() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/func_804A277C.s"
}
#pragma pop

/* 804A2784-804A278C 004744 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_804A2784() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/func_804A2784.s"
}
#pragma pop

/* 804A278C-804A27FC 00474C 0070+00 1/0 0/0 0/0 .text            __dt__19daBoomerang_sight_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daBoomerang_sight_c::~daBoomerang_sight_c() {
extern "C" asm void __dt__19daBoomerang_sight_cFv() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/__dt__19daBoomerang_sight_cFv.s"
}
#pragma pop

/* 804A27FC-804A2800 0047BC 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 804A2800-804A2848 0047C0 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/d_a_boomerang/d_a_boomerang/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804A2D50-804A2D54 000080 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_804A2D50[4];
#pragma pop

/* 804A2D54-804A2D58 000084 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_804A2D54[4];
#pragma pop

/* 804A2D58-804A2D5C 000088 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_804A2D58[4];
#pragma pop

/* 804A2D5C-804A2D60 00008C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804A2D5C[4];
#pragma pop

/* 804A2D60-804A2D64 000090 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804A2D60[4];
#pragma pop

/* 804A2D64-804A2D68 000094 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804A2D64[4];
#pragma pop

/* 804A2D68-804A2D6C 000098 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_804A2D68[4];
#pragma pop

/* 804A2D6C-804A2D70 00009C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_804A2D6C[4];
#pragma pop

/* 804A2D70-804A2D74 0000A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_804A2D70[4];
#pragma pop

/* 804A2D74-804A2D78 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_804A2D74[4];
#pragma pop

/* 804A2D78-804A2D7C 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_804A2D78[4];
#pragma pop

/* 804A2D7C-804A2D80 0000AC 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804A2D7C[4];
#pragma pop

/* 804A2D80-804A2D84 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_804A2D80[4];
#pragma pop

/* 804A2D84-804A2D88 0000B4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804A2D84[4];
#pragma pop

/* 804A2D88-804A2D8C 0000B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804A2D88[4];
#pragma pop

/* 804A2D8C-804A2D90 0000BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_804A2D8C[4];
#pragma pop

/* 804A2D90-804A2D94 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_804A2D90[4];
#pragma pop

/* 804A2D94-804A2D98 0000C4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804A2D94[4];
#pragma pop

/* 804A2D98-804A2D9C 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_804A2D98[4];
#pragma pop

/* 804A2D9C-804A2DA0 0000CC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_804A2D9C[4];
#pragma pop

/* 804A2DA0-804A2DA4 0000D0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_804A2DA0[4];
#pragma pop

/* 804A2DA4-804A2DA8 0000D4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804A2DA4[4];
#pragma pop

/* 804A2DA8-804A2DAC 0000D8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804A2DA8[4];
#pragma pop

/* 804A2DAC-804A2DB0 0000DC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804A2DAC[4];
#pragma pop

/* 804A2DB0-804A2DB4 0000E0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_804A2DB0[4];
#pragma pop

/* 804A2DB4-804A2DB8 0000E4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JAUSectionHeap>             */
#pragma push
#pragma force_active on
static u8 data_804A2DB4[4];
#pragma pop

/* 804A2990-804A2990 000140 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
