/**
 * @file d_a_spinner.cpp
 * 
*/

#include "d/actor/d_a_spinner.h"
#include "dol2asm.h"
#include "d/actor/d_a_alink.h"
#include "SSystem/SComponent/c_math.h"

//
// Forward References:
//

extern "C" void createHeap__11daSpinner_cFv();
extern "C" static void daSpinner_createHeap__FP10fopAc_ac_c();
extern "C" void create__11daSpinner_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __dt__13dBgS_LinkAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daSpinner_Create__FP10fopAc_ac_c();
extern "C" void __dt__11daSpinner_cFv();
extern "C" static void daSpinner_Delete__FP11daSpinner_c();
extern "C" void setRoomInfo__11daSpinner_cFv();
extern "C" void setMatrix__11daSpinner_cFv();
extern "C" void setEffect__11daSpinner_cFv();
extern "C" void posMove__11daSpinner_cFv();
extern "C" void __dt__8cM3dGLinFv();
extern "C" void setReflectAngle__11daSpinner_cFv();
extern "C" void setWallHit__11daSpinner_cFsUl();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void setAnm__11daSpinner_cFv();
extern "C" void setNextPathNum__11daSpinner_cFv();
extern "C" void getPathNextPos__11daSpinner_cFv();
extern "C" void checkLineWallHit__11daSpinner_cFP4cXyzP4cXyz();
extern "C" void checkPathMove__11daSpinner_cFv();
extern "C" void setSpreadEffect__11daSpinner_cFv();
extern "C" void clearSpreadEffect__11daSpinner_cFv();
extern "C" void execute__11daSpinner_cFv();
extern "C" static void daSpinner_Execute__FP11daSpinner_c();
extern "C" void draw__11daSpinner_cFv();
extern "C" static void daSpinner_Draw__FP11daSpinner_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" static void func_804D4D70();
extern "C" static void func_804D4D78();
extern "C" extern char const* const d_a_spinner__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelEntryDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setStageLayer__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_getPolygonAngle__FRC13cBgS_PolyInfos();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_isZoneSwitch__Fii();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void dComIfG_getTrigA__FUl();
extern "C" void entry__10daMirror_cFP8J3DModel();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
setPoly__13dPa_control_cFUsR13cBgS_PolyInfoPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyziP18dPa_levelEcallBackScPC4cXyz();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void init__7dPaPo_cFP9dBgS_Acchff();
extern "C" void setEffectCenter__7dPaPo_cFPC12dKy_tevstr_cPC4cXyzUlUlPC4cXyzPC5csXyzPC4cXyzScff();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetSpecialCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetPolyAtt0__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetGroundCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void dBgS_CheckBWallPoly__FRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP10fopAc_ac_ciP12dBgS_AcchCir();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void __ct__15dBgS_LinkLinChkFv();
extern "C" void __dt__15dBgS_LinkLinChkFv();
extern "C" void SetLink__16dBgS_PolyPassChkFv();
extern "C" void GetAc__22dCcD_GAtTgCoCommonBaseFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void GetAtHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void StartCAt__8dCcD_CylFR4cXyz();
extern "C" void MoveCAt__8dCcD_CylFR4cXyz();
extern "C" void Set__12dCcMassS_MngFP8cCcD_ObjUc();
extern "C" void getAlinkArcName__9daAlink_cFv();
extern "C" void checkStageName__9daAlink_cFPCc();
extern "C" void getSpinnerGravity__9daAlink_cCFv();
extern "C" void getSpinnerMaxFallSpeed__9daAlink_cCFv();
extern "C" void getSpinnerJumpRate__9daAlink_cCFv();
extern "C" void getSpinnerRideMoveTime__9daAlink_cFv();
extern "C" void getSpinnerRideSpeedF__9daAlink_cFv();
extern "C" void getSpinnerRideDecSpeedMax__9daAlink_cCFv();
extern "C" void getSpinnerRideDecSpeedMin__9daAlink_cCFv();
extern "C" void getSpinnerRideDecSpeedRate__9daAlink_cCFv();
extern "C" void getSpinnerRideRotAngleMax__9daAlink_cCFv();
extern "C" void getSpinnerRideRotAngleMin__9daAlink_cCFv();
extern "C" void dCam_getControledAngleY__FP12camera_class();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_pol_sound_get__FPC13cBgS_PolyInfo();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void atan2sY_XZ__4cXyzCFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void cM3d_Len3dSqPntAndSegLine__FPC8cM3dGLinPC3VecP3VecPf();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetStartEnd__8cM3dGLinFRC3VecRC3Vec();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chasePosXZ__FP4cXyzRC4cXyzf();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_distanceAngleS__Fss();
extern "C" void func_802807E0();
extern "C" void __dt__14Z2SoundObjBaseFv();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void startHitItemSE__14Z2CreatureLinkFUlUlP14Z2SoundObjBasef();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_21();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_21();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();;
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__16Z2SoundObjSimple[8];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 804D4D90-804D4D9C 000000 000C+00 9/9 0/0 0/0 .rodata          @3768 */
SECTION_RODATA static u8 const lit_3768[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D4D90, &lit_3768);

/* 804D4D9C-804D4DA0 00000C 0004+00 1/8 0/0 0/0 .rodata          @4168 */
SECTION_RODATA static f32 const lit_4168 = 1.0f;
COMPILER_STRIP_GATE(0x804D4D9C, &lit_4168);

/* 804D198C-804D1A50 0000EC 00C4+00 1/1 0/0 0/0 .text            createHeap__11daSpinner_cFv */
int daSpinner_c::createHeap() {
    J3DModelData* modelData = (J3DModelData*)dComIfG_getObjectRes(daAlink_c::getAlinkArcName(), 0x21);
    mpModel = mDoExt_J3DModel__create(modelData, 0x80000, 0x11000084);
    if (mpModel == NULL) {
        return 0;
    }
    field_0x588 = (J3DAnmTransform*)dComIfG_getObjectRes(daAlink_c::getAlinkArcName(), 0x16);
    return mBck.init(field_0x588, 1, 2, 1.0f, 0, -1, false) != 0 ? 1 : 0;
}


/* 804D1A50-804D1A70 0001B0 0020+00 1/1 0/0 0/0 .text daSpinner_createHeap__FP10fopAc_ac_c */
static int daSpinner_createHeap(fopAc_ac_c* i_this) {
    return static_cast<daSpinner_c*>(i_this)->createHeap();
}

/* ############################################################################################## */
/* 804D4DA0-804D4DA4 000010 0004+00 0/1 0/0 0/0 .rodata          @4241 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4241 = 10000.0f;
COMPILER_STRIP_GATE(0x804D4DA0, &lit_4241);
#pragma pop

/* 804D4DA4-804D4DA8 000014 0004+00 0/1 0/0 0/0 .rodata          @4242 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4242 = 0x42480A3D;
COMPILER_STRIP_GATE(0x804D4DA4, &lit_4242);
#pragma pop

/* 804D4DA8-804D4DAC 000018 0004+00 0/4 0/0 0/0 .rodata          @4243 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4243 = 58.0f;
COMPILER_STRIP_GATE(0x804D4DA8, &lit_4243);
#pragma pop

/* 804D4DAC-804D4DB0 00001C 0004+00 0/1 0/0 0/0 .rodata          @4244 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4244 = 0x4301FD71;
COMPILER_STRIP_GATE(0x804D4DAC, &lit_4244);
#pragma pop

/* 804D4DB0-804D4DB4 000020 0004+00 0/1 0/0 0/0 .rodata          @4245 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4245 = 35.0f;
COMPILER_STRIP_GATE(0x804D4DB0, &lit_4245);
#pragma pop

/* 804D4DB4-804D4DB8 000024 0004+00 0/1 0/0 0/0 .rodata          @4246 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4246 = 85.0f;
COMPILER_STRIP_GATE(0x804D4DB4, &lit_4246);
#pragma pop

/* 804D4DB8-804D4DC0 000028 0004+04 0/9 0/0 0/0 .rodata          @4247 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4247[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x804D4DB8, &lit_4247);
#pragma pop

/* 804D4DC0-804D4DC8 000030 0008+00 0/2 0/0 0/0 .rodata          @4249 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4249[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D4DC0, &lit_4249);
#pragma pop

/* 804D4EA8-804D4EEC 000000 0044+00 1/1 0/0 0/0 .data            l_cylSrc */
static dCcD_SrcCyl l_cylSrc = {
    {
        {0, {{AT_TYPE_SPINNER, 1, 0x12}, {0, 0}, 0x69}},
        {dCcD_SE_SPINNER, 1, 0, 0, {0}},
        {dCcD_SE_NONE, 0, 0, 0, {0}},
        {0},
    },
    {
        {0.0f, 0.0f, 0.0f},
        40.0f,
        85.0f,
    }
};

/* 804D4EEC-804D4F0C -00001 0020+00 1/0 0/0 0/0 .data            l_daSpinner_Method */
static actor_method_class l_daSpinner_Method = {
    (process_method_func)daSpinner_Create__FP10fopAc_ac_c,
    (process_method_func)daSpinner_Delete__FP11daSpinner_c,
    (process_method_func)daSpinner_Execute__FP11daSpinner_c,
    0,
    (process_method_func)daSpinner_Draw__FP11daSpinner_c,
};

/* 804D4F0C-804D4F3C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_SPINNER */
extern actor_process_profile_definition g_profile_SPINNER = {
  fpcLy_CURRENT_e,       // mLayerID
  4,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_SPINNER,          // mProcName
  &g_fpcLf_Method.base, // sub_method
  0x00000ABC,            // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  687,                   // mPriority
  &l_daSpinner_Method,   // sub_method
  0x00060000,            // mStatus
  fopAc_UNK_GROUP_5_e,   // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};

/* 804D4F3C-804D4F48 000094 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 804D4F48-804D4F54 0000A0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGLin */
SECTION_DATA extern void* __vt__8cM3dGLin[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGLinFv,
};

/* 804D4F54-804D4F60 0000AC 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 804D4F60-804D4F6C 0000B8 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 804D4F6C-804D4F78 0000C4 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 804D4F78-804D4F84 0000D0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 804D4F84-804D4F90 0000DC 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 804D4F90-804D4FB4 0000E8 0024+00 3/3 0/0 0/0 .data            __vt__13dBgS_LinkAcch */
SECTION_DATA extern void* __vt__13dBgS_LinkAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13dBgS_LinkAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804D4D78,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804D4D70,
};

/* 804D4FB4-804D4FC0 00010C 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 804D1A70-804D1D60 0001D0 02F0+00 1/1 0/0 0/0 .text            create__11daSpinner_cFv */
int daSpinner_c::create() {
    // NONMATCHING
}

/* 804D1D60-804D1DA8 0004C0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl()
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 804D1DA8-804D1DF0 000508 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab()
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 804D1DF0-804D1E4C 000550 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts()
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 804D1E4C-804D1E88 0005AC 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz()
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 804D1E88-804D1EF8 0005E8 0070+00 3/2 0/0 0/0 .text            __dt__13dBgS_LinkAcchFv */
// dBgS_LinkAcch::~dBgS_LinkAcch()
extern "C" void __dt__13dBgS_LinkAcchFv() {
    // NONMATCHING
}

/* 804D1EF8-804D1F68 000658 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir()
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 804D1F68-804D1FB0 0006C8 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl()
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 804D1FB0-804D1FD0 000710 0020+00 1/0 0/0 0/0 .text            daSpinner_Create__FP10fopAc_ac_c */
static int daSpinner_Create(fopAc_ac_c* i_this) {
    return static_cast<daSpinner_c*>(i_this)->create();
}

/* 804D1FD0-804D21B8 000730 01E8+00 1/1 0/0 0/0 .text            __dt__11daSpinner_cFv */
daSpinner_c::~daSpinner_c() {
    // NONMATCHING
}

/* 804D21B8-804D21E0 000918 0028+00 1/0 0/0 0/0 .text            daSpinner_Delete__FP11daSpinner_c
 */
static int daSpinner_Delete(daSpinner_c* i_this) {
    i_this->~daSpinner_c();
    return 1;
}

/* 804D21E0-804D2278 000940 0098+00 2/2 0/0 0/0 .text            setRoomInfo__11daSpinner_cFv */
void daSpinner_c::setRoomInfo() {
    int roomNo;
    if (mAcch.GetGroundH() != -1000000000.0f) {
        roomNo = dComIfG_Bgsp().GetRoomId(mAcch.m_gnd);
        tevStr.YukaCol = dComIfG_Bgsp().GetPolyColor(mAcch.m_gnd);
    } else {
        roomNo = dComIfGp_roomControl_getStayNo();
        
    }
    tevStr.room_no = roomNo;
    field_0xa6e = dComIfGp_getReverb(roomNo);
    mStts.SetRoomId(roomNo);
    fopAcM_SetRoomNo(this, roomNo);
}

/* 804D2278-804D2320 0009D8 00A8+00 2/2 0/0 0/0 .text            setMatrix__11daSpinner_cFv */
void daSpinner_c::setMatrix() {
    mDoMtx_stack_c::transS(current.pos.x, current.pos.y + field_0xa84 + 90.0f, current.pos.z);
    mDoMtx_stack_c::ZXYrotM(shape_angle);
    mDoMtx_stack_c::YrotM(field_0xa7e);
    MTXCopy(mDoMtx_stack_c::now, mpModel->mBaseTransformMtx);
    mBck.entry(mpModel->getModelData());
    mpModel->calc();
}

/* ############################################################################################## */
/* 804D4DD0-804D4DD4 000040 0004+00 0/1 0/0 0/0 .rodata          @4591 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4591 = 1.5f;
COMPILER_STRIP_GATE(0x804D4DD0, &lit_4591);
#pragma pop

/* 804D4DD4-804D4DD8 000044 0004+00 0/2 0/0 0/0 .rodata          @4592 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4592 = 3.0f;
COMPILER_STRIP_GATE(0x804D4DD4, &lit_4592);
#pragma pop

/* 804D4DD8-804D4DDC 000048 0004+00 0/1 0/0 0/0 .rodata          @4593 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4593 = 2.0f;
COMPILER_STRIP_GATE(0x804D4DD8, &lit_4593);
#pragma pop

/* 804D4FC8-804D4FCC 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 804D4FCC-804D4FD0 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 804D4FD0-804D4FD4 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 804D4FD4-804D4FD8 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 804D4FD8-804D4FDC 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 804D4FDC-804D4FE0 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 804D4FE0-804D4FE4 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 804D4FE4-804D4FE8 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 804D4FE8-804D4FEC 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 804D4FEC-804D4FF0 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 804D4FF0-804D4FF4 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 804D4FF4-804D4FF8 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 804D4FF8-804D4FFC 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 804D4FFC-804D5000 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 804D5000-804D5004 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 804D5004-804D5008 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 804D5008-804D5014 000048 000C+00 0/1 0/0 0/0 .bss             effDirection$4433 */
#pragma push
#pragma force_active on
static u8 effDirection[12];
#pragma pop

/* 804D5014-804D5024 000054 000C+04 0/1 0/0 0/0 .bss             @4437 */
#pragma push
#pragma force_active on
static u8 lit_4437[12 + 4 /* padding */];
#pragma pop

/* 804D5024-804D5030 000064 000C+00 0/1 0/0 0/0 .bss             particleScale$4436 */
#pragma push
#pragma force_active on
static u8 particleScale[12];
#pragma pop

/* 804D2320-804D25F4 000A80 02D4+00 1/1 0/0 0/0 .text            setEffect__11daSpinner_cFv */
void daSpinner_c::setEffect() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D4DDC-804D4DE0 00004C 0004+00 0/2 0/0 0/0 .rodata          @4930 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4930 = -20.0f;
COMPILER_STRIP_GATE(0x804D4DDC, &lit_4930);
#pragma pop

/* 804D4DE0-804D4DE8 000050 0004+04 0/1 0/0 0/0 .rodata          @4931 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4931[1 + 1 /* padding */] = {
    0x4250CCCC,
    /* padding */
    0x00000000,
};
COMPILER_STRIP_GATE(0x804D4DE0, &lit_4931);
#pragma pop

/* 804D4DE8-804D4DF0 000058 0008+00 0/3 0/0 0/0 .rodata          @4932 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4932[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D4DE8, &lit_4932);
#pragma pop

/* 804D4DF0-804D4DF8 000060 0008+00 0/3 0/0 0/0 .rodata          @4933 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4933[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D4DF0, &lit_4933);
#pragma pop

/* 804D4DF8-804D4E00 000068 0008+00 0/3 0/0 0/0 .rodata          @4934 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4934[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D4DF8, &lit_4934);
#pragma pop

/* 804D4E00-804D4E04 000070 0004+00 0/1 0/0 0/0 .rodata          @4935 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4935 = 0x3BB6365E;
COMPILER_STRIP_GATE(0x804D4E00, &lit_4935);
#pragma pop

/* 804D4E04-804D4E08 000074 0004+00 0/1 0/0 0/0 .rodata          @4936 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4936 = 0x4333D588;
COMPILER_STRIP_GATE(0x804D4E04, &lit_4936);
#pragma pop

/* 804D4E08-804D4E0C 000078 0004+00 0/1 0/0 0/0 .rodata          @4937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4937 = 29.0f;
COMPILER_STRIP_GATE(0x804D4E08, &lit_4937);
#pragma pop

/* 804D4E0C-804D4E10 00007C 0004+00 0/1 0/0 0/0 .rodata          @4938 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4938 = 50.0f;
COMPILER_STRIP_GATE(0x804D4E0C, &lit_4938);
#pragma pop

/* 804D25F4-804D3048 000D54 0A54+00 1/1 0/0 0/0 .text            posMove__11daSpinner_cFv */
int daSpinner_c::posMove() {
    // NONMATCHING
}

/* 804D3048-804D3090 0017A8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGLinFv */
// cM3dGLin::~cM3dGLin()
extern "C" void __dt__8cM3dGLinFv() {
    // NONMATCHING
}

/* 804D3090-804D3174 0017F0 00E4+00 3/3 0/0 0/0 .text            setReflectAngle__11daSpinner_cFv */
void daSpinner_c::setReflectAngle() {
    if (mpPathMove != NULL) {
        current.angle.y += 0x8000;
        current.angle.x *= -1;
        setNextPathNum();
        field_0xa73 *= -1;
        field_0xa76 *= -1;
    } else {
        s16 angle = current.angle.y - field_0xa80;
        int l_abs = abs(angle);
        if (l_abs > 0x4800) {
            current.angle.y = (field_0xa80 << 1) - (current.angle.y + 0x8000);
        }
        else if (angle > 0x3800) {
            current.angle.y = field_0xa80 + 0x3800;
        }
        else if (angle < -0x3800) {
            current.angle.y = field_0xa80 - 0x3800;
        }
    } 
}

/* ############################################################################################## */
/* 804D4E10-804D4E14 000080 0004+00 0/1 0/0 0/0 .rodata          @5053 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5053 = -1.0f;
COMPILER_STRIP_GATE(0x804D4E10, &lit_5053);
#pragma pop

/* 804D3174-804D3468 0018D4 02F4+00 1/1 0/0 0/0 .text            setWallHit__11daSpinner_cFsUl */
void daSpinner_c::setWallHit(s16 param_0, u32 param_1) {
    // NONMATCHING
}

/* 804D3468-804D34B0 001BC8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla()
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D4E14-804D4E18 000084 0004+00 0/1 0/0 0/0 .rodata          @5091 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5091 = 20.0f;
COMPILER_STRIP_GATE(0x804D4E14, &lit_5091);
#pragma pop

/* 804D34B0-804D3618 001C10 0168+00 1/1 0/0 0/0 .text            setAnm__11daSpinner_cFv */
void daSpinner_c::setAnm() {
    if (mBck.isStop() && field_0xa75 != 0) {
        mBck.init(field_0x588, 1, -1, 1.0f, 0, -1, true);
        daAlink_getAlinkActorClass()->seStartOnlyReverb(Z2SE_AL_SPINNER_EXTEND);
        dComIfGp_getVibration().StartShock(2, 1, cXyz(0.0f, 1.0f, 0.0f));
        if (mJumpFlg == 0) {
            speed.y = 20.0f;
            mJumpFlg = 1;
            mButtonJump = 1;
        }
        if (mpPathMove != NULL) { 
            s16 targetAngle = cLib_targetAngleY(&mpPathMove->m_points[field_0xa72].m_position, &current.pos);
            if (s16(targetAngle - current.angle.y) > 0) {
                current.angle.y += 0x3000;
            } else {
                current.angle.y -= 0x3000;
            }
            clearPathMove();
            mAcch.ClrWallHit();
        }
    }
}


/* 804D3618-804D3694 001D78 007C+00 2/2 0/0 0/0 .text            setNextPathNum__11daSpinner_cFv */
int daSpinner_c::setNextPathNum() {
    if (field_0xa72 == 0 && field_0xa73 == -1) {
        field_0xa72 = mpPathMove->m_num - 1;
    } else if (field_0xa72 == mpPathMove->m_num - 1 && field_0xa73 == 1) {
        field_0xa72 = 0;  
    } else {
        field_0xa72 += field_0xa73;
        return 1;
    }
    return 0;
}

/* 804D3694-804D36F4 001DF4 0060+00 1/1 0/0 0/0 .text            getPathNextPos__11daSpinner_cFv */
Vec* daSpinner_c::getPathNextPos() {
    s32 add = field_0xa72 + field_0xa73;
    if (add < 0) {
        return &(mpPathMove->m_points + mpPathMove->m_num - 1)->m_position;
    }
    if (add >= mpPathMove->m_num) {
        return &mpPathMove->m_points->m_position;
    }
    return &mpPathMove->m_points[add].m_position;
}

/* 804D36F4-804D3774 001E54 0080+00 1/1 0/0 0/0 .text checkLineWallHit__11daSpinner_cFP4cXyzP4cXyz
 */
int daSpinner_c::checkLineWallHit(cXyz* i_start, cXyz* i_end) {
    mLinChk.Set(i_start, i_end, this);
    if (dComIfG_Bgsp().LineCross(&mLinChk) != 0) {
        if (dBgS_CheckBWallPoly(mLinChk) != 0 || daAlink_c::checkStageName("D_MN10A") != 0) {
            return 1;
        }
    }
    return 0;
}

/* ############################################################################################## */
/* 804D4E18-804D4E24 000088 000C+00 0/1 0/0 0/0 .rodata          sideCheckVec0$5143 */
#pragma push
#pragma force_active on
static const Vec sideCheckVec0 = {
    30.0f, 10.0f, 5.0f,
};
#pragma pop

/* 804D4E24-804D4E30 000094 000C+00 0/1 0/0 0/0 .rodata          sideCheckVec1$5144 */
#pragma push
#pragma force_active on
static const Vec sideCheckVec1 = {
    -30.0f, 10.0f, 5.0f,
};
#pragma pop

/* 804D4E30-804D4E3C 0000A0 000C+00 0/1 0/0 0/0 .rodata          initSide0$5145 */
#pragma push
#pragma force_active on
static const Vec initSide0 = {
    53.0f, 0.0f, 0.0f,
};
#pragma pop

/* 804D4E3C-804D4E48 0000AC 000C+00 0/1 0/0 0/0 .rodata          initSide1$5146 */
#pragma push
#pragma force_active on
static const Vec initSide1 = {
    -53.0f, 0.0f, 0.0f,
};
#pragma pop

/* 804D4E48-804D4E54 0000B8 000C+00 0/1 0/0 0/0 .rodata          initSideOld0$5147 */
#pragma push
#pragma force_active on
static const Vec initSideOld0 = {
    78.0f, 0.0f, 0.0f,
};
#pragma pop

/* 804D4E54-804D4E60 0000C4 000C+00 0/1 0/0 0/0 .rodata          initSideOld1$5148 */
#pragma push
#pragma force_active on
static const Vec initSideOld1 = {
    -78.0f, 0.0f, 0.0f,
};
#pragma pop

/* 804D4E60-804D4E68 0000D0 0008+00 0/1 0/0 0/0 .rodata          @5295 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5295[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D4E60, &lit_5295);
#pragma pop

/* 804D3774-804D3D60 001ED4 05EC+00 1/1 0/0 0/0 .text            checkPathMove__11daSpinner_cFv */
int daSpinner_c::checkPathMove() {
    // NONMATCHING
}

/* 804D4E68-804D4E6C 0000D8 0004+00 0/1 0/0 0/0 .rodata          effName$5299 */
#pragma push
#pragma force_active on
static const u16 effName[2] = {
    2245,
    2246,
};

#pragma pop

/* 804D4E6C-804D4E70 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5361 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5361 = 10.0f;
COMPILER_STRIP_GATE(0x804D4E6C, &lit_5361);
#pragma pop

/* 804D3D60-804D3F14 0024C0 01B4+00 1/1 0/0 0/0 .text            setSpreadEffect__11daSpinner_cFv */
void daSpinner_c::setSpreadEffect() {
    // NONMATCHING
}

/* 804D3F14-804D3F8C 002674 0078+00 2/2 0/0 0/0 .text            clearSpreadEffect__11daSpinner_cFv
 */
void daSpinner_c::clearSpreadEffect() {
    for (int i = 0; i < 2; i++) {
        JPABaseEmitter* emitter = dComIfGp_particle_getEmitter(field_0xa8c[i]);
        if (emitter != NULL) {
            emitter->stopDrawParticle();
        }
    }
}

/* ############################################################################################## */
/* 804D4E70-804D4E74 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5671 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5671 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x804D4E70, &lit_5671);
#pragma pop

/* 804D4E74-804D4E78 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5672 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5672 = 2330.0f;
COMPILER_STRIP_GATE(0x804D4E74, &lit_5672);
#pragma pop

/* 804D4E78-804D4E7C 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5673 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5673 = 17.0f / 20.0f;
COMPILER_STRIP_GATE(0x804D4E78, &lit_5673);
#pragma pop

/* 804D4E7C-804D4E80 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5674 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5674 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x804D4E7C, &lit_5674);
#pragma pop

/* 804D4E80-804D4E84 0000F0 0004+00 0/1 0/0 0/0 .rodata          @5675 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5675 = 5.0f;
COMPILER_STRIP_GATE(0x804D4E80, &lit_5675);
#pragma pop

/* 804D4E84-804D4E88 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5676 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5676 = 0.5f;
COMPILER_STRIP_GATE(0x804D4E84, &lit_5676);
#pragma pop

/* 804D4E88-804D4E8C 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5677 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5677 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x804D4E88, &lit_5677);
#pragma pop

/* 804D4E8C-804D4E90 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5678 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5678 = 2000.0f;
COMPILER_STRIP_GATE(0x804D4E8C, &lit_5678);
#pragma pop

/* 804D4E90-804D4E94 000100 0004+00 0/1 0/0 0/0 .rodata          @5679 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5679 = 9.0f;
COMPILER_STRIP_GATE(0x804D4E90, &lit_5679);
#pragma pop

/* 804D4E94-804D4E98 000104 0004+00 0/1 0/0 0/0 .rodata          @5680 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5680 = 100.0f;
COMPILER_STRIP_GATE(0x804D4E94, &lit_5680);
#pragma pop

/* 804D3F8C-804D4B94 0026EC 0C08+00 1/1 0/0 0/0 .text            execute__11daSpinner_cFv */
int daSpinner_c::execute() {
    // NONMATCHING
}

/* 804D4B94-804D4BB4 0032F4 0020+00 1/0 0/0 0/0 .text            daSpinner_Execute__FP11daSpinner_c
 */
static int daSpinner_Execute(daSpinner_c* i_this) {
    return i_this->execute();
}

/* ############################################################################################## */
/* 804D4E98-804D4E9C 000108 0004+00 0/1 0/0 0/0 .rodata          @5723 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5723 = 70.0f;
COMPILER_STRIP_GATE(0x804D4E98, &lit_5723);
#pragma pop

/* 804D4E9C-804D4EA0 00010C 0004+00 0/1 0/0 0/0 .rodata          @5724 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5724 = 300.0f;
COMPILER_STRIP_GATE(0x804D4E9C, &lit_5724);
#pragma pop

/* 804D4BB4-804D4D08 003314 0154+00 1/1 0/0 0/0 .text            draw__11daSpinner_cFv */
int daSpinner_c::draw() {
    // NONMATCHING
}

/* 804D4D08-804D4D28 003468 0020+00 1/0 0/0 0/0 .text            daSpinner_Draw__FP11daSpinner_c */
static int daSpinner_Draw(daSpinner_c* i_this) {
    return i_this->draw();
}

/* 804D4D28-804D4D70 003488 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts()
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 804D4D70-804D4D78 0034D0 0008+00 1/0 0/0 0/0 .text            @36@__dt__13dBgS_LinkAcchFv */
static void func_804D4D70() {
    // NONMATCHING
}

/* 804D4D78-804D4D80 0034D8 0008+00 1/0 0/0 0/0 .text            @20@__dt__13dBgS_LinkAcchFv */
static void func_804D4D78() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D5030-804D5034 000070 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_804D5030[4];
#pragma pop

/* 804D5034-804D5038 000074 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_804D5034[4];
#pragma pop

/* 804D5038-804D503C 000078 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_804D5038[4];
#pragma pop

/* 804D503C-804D5040 00007C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804D503C[4];
#pragma pop

/* 804D5040-804D5044 000080 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804D5040[4];
#pragma pop

/* 804D5044-804D5048 000084 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804D5044[4];
#pragma pop

/* 804D5048-804D504C 000088 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_804D5048[4];
#pragma pop

/* 804D504C-804D5050 00008C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_804D504C[4];
#pragma pop

/* 804D5050-804D5054 000090 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_804D5050[4];
#pragma pop

/* 804D5054-804D5058 000094 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_804D5054[4];
#pragma pop

/* 804D5058-804D505C 000098 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_804D5058[4];
#pragma pop

/* 804D505C-804D5060 00009C 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804D505C[4];
#pragma pop

/* 804D5060-804D5064 0000A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_804D5060[4];
#pragma pop

/* 804D5064-804D5068 0000A4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804D5064[4];
#pragma pop

/* 804D5068-804D506C 0000A8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804D5068[4];
#pragma pop

/* 804D506C-804D5070 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_804D506C[4];
#pragma pop

/* 804D5070-804D5074 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_804D5070[4];
#pragma pop

/* 804D5074-804D5078 0000B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804D5074[4];
#pragma pop

/* 804D5078-804D507C 0000B8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_804D5078[4];
#pragma pop

/* 804D507C-804D5080 0000BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_804D507C[4];
#pragma pop

/* 804D5080-804D5084 0000C0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_804D5080[4];
#pragma pop

/* 804D5084-804D5088 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804D5084[4];
#pragma pop

/* 804D5088-804D508C 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804D5088[4];
#pragma pop

/* 804D508C-804D5090 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804D508C[4];
#pragma pop

/* 804D5090-804D5094 0000D0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_804D5090[4];
#pragma pop

/* 804D5094-804D5098 0000D4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JAUSectionHeap>             */
#pragma push
#pragma force_active on
static u8 data_804D5094[4];
#pragma pop

/* 804D4EA0-804D4EA0 000110 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
