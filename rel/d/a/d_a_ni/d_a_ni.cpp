/**
 * @file d_a_ni.cpp
 * 
*/

#include "rel/d/a/d_a_ni/d_a_ni.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"
#include "d/d_camera.h"

//
// Forward References:
//

extern "C" void __ct__10daNi_HIO_cFv();
extern "C" static void anm_init__FP8ni_classifUcf();
extern "C" static void hane_set__FP8ni_classff();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daNi_Draw__FP8ni_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void s_play_sub__FPvPv();
extern "C" static void damage_check__FP8ni_class();
extern "C" static void s_t_sub__FPvPv();
extern "C" static void search_test__FP8ni_class();
extern "C" static void ni_carry_check__FP8ni_class();
extern "C" static void move_gake_check__FP8ni_classf();
extern "C" static void ni_normal__FP8ni_class();
extern "C" static void ni_away__FP8ni_class();
extern "C" static void ni_swim__FP8ni_class();
extern "C" static void ni_carry__FP8ni_class();
extern "C" static void ni_fly__FP8ni_class();
extern "C" static void ni_drop__FP8ni_class();
extern "C" static void ni_return__FP8ni_class();
extern "C" static void ni_damage__FP8ni_class();
extern "C" static void s_b_sub__FPvPv();
extern "C" static void ni_windspin__FP8ni_class();
extern "C" static void ni_demo0__FP8ni_class();
extern "C" static void ni_message__FP8ni_class();
extern "C" static void playwallcheck__FP8ni_class();
extern "C" static void ni_play__FP8ni_class();
extern "C" static void play_camera__FP8ni_class();
extern "C" static void action__FP8ni_class();
extern "C" static void message__FP8ni_class();
extern "C" static void daNi_Execute__FP8ni_class();
extern "C" static bool daNi_IsDelete__FP8ni_class();
extern "C" static void daNi_Delete__FP8ni_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daNi_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__10daNi_HIO_cFv();
extern "C" void __sinit_d_a_ni_cpp();
extern "C" static void func_8095119C();
extern "C" static void func_809511A4();
extern "C" extern char const* const d_a_ni__stringBase0;

//
// External References:
//

extern "C" void fadeOut__13mDoGph_gInf_cFfR8_GXColor();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void setAnm__14mDoExt_McaMorfFP15J3DAnmTransformiffffPv();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void cDmrNowMidnaTalk__Fv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_wayBgCheck__FPC10fopAc_ac_cff();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" bool fopAcM_riverStream__FP4cXyzPsPff();
extern "C" void fopAcM_carryOffRevise__FP10fopAc_ac_c();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void forceOnEventMove__Q213dPa_control_c7level_cFUl();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void __ct__14dBgS_CamLinChkFv();
extern "C" void __dt__14dBgS_CamLinChkFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void checkBoomerangCharge__9daPy_py_cFv();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyzfs();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u32 g_blackColor;
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 809511C0-809511C4 000000 0004+00 23/23 0/0 0/0 .rodata          @3958 */
SECTION_RODATA static f32 const lit_3958 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x809511C0, &lit_3958);

/* 809511C4-809511C8 000004 0004+00 0/1 0/0 0/0 .rodata          @3959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3959 = 4.0f;
COMPILER_STRIP_GATE(0x809511C4, &lit_3959);
#pragma pop

/* 809511C8-809511CC 000008 0004+00 0/3 0/0 0/0 .rodata          @3960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3960 = 1.5f;
COMPILER_STRIP_GATE(0x809511C8, &lit_3960);
#pragma pop

/* 809511CC-809511D0 00000C 0004+00 0/4 0/0 0/0 .rodata          @3961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3961 = 200.0f;
COMPILER_STRIP_GATE(0x809511CC, &lit_3961);
#pragma pop

/* 809511D0-809511D4 000010 0004+00 0/3 0/0 0/0 .rodata          @3962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3962 = 15.0f;
COMPILER_STRIP_GATE(0x809511D0, &lit_3962);
#pragma pop

/* 809511D4-809511D8 000014 0004+00 0/10 0/0 0/0 .rodata          @3963 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3963 = 20.0f;
COMPILER_STRIP_GATE(0x809511D4, &lit_3963);
#pragma pop

/* 809511D8-809511DC 000018 0004+00 0/5 0/0 0/0 .rodata          @3964 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3964 = 40.0f;
COMPILER_STRIP_GATE(0x809511D8, &lit_3964);
#pragma pop

/* 809511DC-809511E0 00001C 0004+00 0/3 0/0 0/0 .rodata          @3965 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3965 = -1.0f;
COMPILER_STRIP_GATE(0x809511DC, &lit_3965);
#pragma pop

/* 80951330-8095133C 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8095133C-80951350 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80951350-80951358 000020 0008+00 1/1 0/0 0/0 .data            hane_id$3986 */
SECTION_DATA static u8 hane_id[8] = {
    0x82, 0xC2, 0x82, 0xC0, 0x82, 0xC1, 0x82, 0xC3,
};

/* 80951358-809513D4 -00001 007C+00 1/1 0/0 0/0 .data            @5125 */
SECTION_DATA static void* lit_5125[31] = {
    (void*)(((char*)ni_play__FP8ni_class) + 0x11C), (void*)(((char*)ni_play__FP8ni_class) + 0x148),
    (void*)(((char*)ni_play__FP8ni_class) + 0x1E4), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x3A0), (void*)(((char*)ni_play__FP8ni_class) + 0x27C),
    (void*)(((char*)ni_play__FP8ni_class) + 0x3A0), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x3A0), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x2B8), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x3A0), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x3A0), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x3A0), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x3A0), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x320), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x3A0), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x3A0), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x3A0), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x3A0), (void*)(((char*)ni_play__FP8ni_class) + 0x3A0),
    (void*)(((char*)ni_play__FP8ni_class) + 0x340),
};

/* 809513D4-809513E4 0000A4 0010+00 0/0 0/0 0/0 .data            j_w$5390 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 j_w[16] = {
    0x45, 0xBB, 0x80, 0x00, 0x46, 0x1C, 0x40, 0x00, 0x45, 0xBB, 0x80, 0x00, 0x46, 0x1C, 0x40, 0x00,
};
#pragma pop

/* 809513E4-809513F4 0000B4 0010+00 0/0 0/0 0/0 .data            j_a$5391 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 j_a[16] = {
    0xC4, 0x7A, 0x00, 0x00, 0x46, 0x1C, 0x40, 0x00, 0xC4, 0x7A, 0x00, 0x00, 0x46, 0x1C, 0x40, 0x00,
};
#pragma pop

/* 809513F4-809513FC 0000C4 0008+00 0/0 0/0 0/0 .data            w_eff_id$5418 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 w_eff_id[8] = {
    0x01, 0xB8, 0x01, 0xB9, 0x01, 0xBA, 0x01, 0xBB,
};
#pragma pop

/* 809513FC-8095143C -00001 0040+00 1/1 0/0 0/0 .data            @5666 */
SECTION_DATA static void* lit_5666[16] = {
    (void*)(((char*)action__FP8ni_class) + 0xD4),  (void*)(((char*)action__FP8ni_class) + 0xF4),
    (void*)(((char*)action__FP8ni_class) + 0x10C), (void*)(((char*)action__FP8ni_class) + 0x128),
    (void*)(((char*)action__FP8ni_class) + 0x138), (void*)(((char*)action__FP8ni_class) + 0x148),
    (void*)(((char*)action__FP8ni_class) + 0x158), (void*)(((char*)action__FP8ni_class) + 0x198),
    (void*)(((char*)action__FP8ni_class) + 0x164), (void*)(((char*)action__FP8ni_class) + 0x178),
    (void*)(((char*)action__FP8ni_class) + 0x188), (void*)(((char*)action__FP8ni_class) + 0x1C4),
    (void*)(((char*)action__FP8ni_class) + 0x1C4), (void*)(((char*)action__FP8ni_class) + 0x1C4),
    (void*)(((char*)action__FP8ni_class) + 0x1C4), (void*)(((char*)action__FP8ni_class) + 0x1B8),
};

/* 8095143C-80951440 00010C 0004+00 1/1 0/0 0/0 .data            key_eno$5736 */
SECTION_DATA static u8 key_eno[4] = {
    0x82,
    0x7A,
    0x82,
    0x7B,
};

/* 80951440-80951480 000110 0040+00 1/1 0/0 0/0 .data            cc_sph_src$5915 */
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 20.0f} // mSph
    } // mSphAttr
};

/* 80951480-809514A0 -00001 0020+00 1/0 0/0 0/0 .data            l_daNi_Method */
static actor_method_class l_daNi_Method = {
    (process_method_func)daNi_Create__FP10fopAc_ac_c,
    (process_method_func)daNi_Delete__FP8ni_class,
    (process_method_func)daNi_Execute__FP8ni_class,
    (process_method_func)daNi_IsDelete__FP8ni_class,
    (process_method_func)daNi_Draw__FP8ni_class,
};

/* 809514A0-809514D0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NI */
extern actor_process_profile_definition g_profile_NI = {
  fpcLy_CURRENT_e,       // mLayerID
  7,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_NI,               // mProcName
  &g_fpcLf_Method.mBase, // sub_method
  sizeof(ni_class),      // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  695,                   // mPriority
  &l_daNi_Method,        // sub_method
  0x080C4000,            // mStatus
  fopAc_NPC_e,           // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};

/* 809514D0-809514DC 0001A0 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 809514DC-809514E8 0001AC 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 809514E8-809514F4 0001B8 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 809514F4-80951500 0001C4 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80951500-8095150C 0001D0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8095150C-80951530 0001DC 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_809511A4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8095119C,
};

/* 80951530-8095153C 000200 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8095153C-80951548 00020C 000C+00 2/2 0/0 0/0 .data            __vt__10daNi_HIO_c */
SECTION_DATA extern void* __vt__10daNi_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10daNi_HIO_cFv,
};

/* 8094BC2C-8094BCA8 0000EC 007C+00 1/1 0/0 0/0 .text            __ct__10daNi_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNi_HIO_c::daNi_HIO_c() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/__ct__10daNi_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809511E0-809511E4 000020 0004+00 2/19 0/0 0/0 .rodata          @3981 */
SECTION_RODATA static f32 const lit_3981 = 1.0f;
COMPILER_STRIP_GATE(0x809511E0, &lit_3981);

/* 809511E4-809511E8 000024 0004+00 1/16 0/0 0/0 .rodata          @3982 */
SECTION_RODATA static u8 const lit_3982[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x809511E4, &lit_3982);

/* 8095131C-8095131C 00015C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8095131C = "Ni";
#pragma pop

/* 8094BCA8-8094BD68 000168 00C0+00 13/13 0/0 0/0 .text            anm_init__FP8ni_classifUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_init(ni_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/anm_init__FP8ni_classifUcf.s"
}
#pragma pop

/* 8094BD68-8094BE60 000228 00F8+00 10/10 0/0 0/0 .text            hane_set__FP8ni_classff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void hane_set(ni_class* param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/hane_set__FP8ni_classff.s"
}
#pragma pop

/* 8094BE60-8094C110 000320 02B0+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void nodeCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop

/* ############################################################################################## */
/* 809511E8-809511EC 000028 0004+00 0/11 0/0 0/0 .rodata          @4128 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4128 = 100.0f;
COMPILER_STRIP_GATE(0x809511E8, &lit_4128);
#pragma pop

/* 809511EC-809511F0 00002C 0004+00 0/3 0/0 0/0 .rodata          @4129 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4129 = 400.0f;
COMPILER_STRIP_GATE(0x809511EC, &lit_4129);
#pragma pop

/* 8094C110-8094C204 0005D0 00F4+00 1/0 0/0 0/0 .text            daNi_Draw__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNi_Draw(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/daNi_Draw__FP8ni_class.s"
}
#pragma pop

/* 8094C204-8094C240 0006C4 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/__dt__4cXyzFv.s"
}
#pragma pop

/* 8094C240-8094C298 000700 0058+00 1/1 0/0 0/0 .text            s_play_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_play_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/s_play_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809511F0-809511F4 000030 0004+00 0/3 0/0 0/0 .rodata          @4172 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4172 = 2000.0f;
COMPILER_STRIP_GATE(0x809511F0, &lit_4172);
#pragma pop

/* 809511F4-809511F8 000034 0004+00 0/7 0/0 0/0 .rodata          @4173 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4173 = 30.0f;
COMPILER_STRIP_GATE(0x809511F4, &lit_4173);
#pragma pop

/* 809511F8-80951200 000038 0004+04 0/7 0/0 0/0 .rodata          @4174 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4174[1 + 1 /* padding */] = {
    10.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x809511F8, &lit_4174);
#pragma pop

/* 80951200-80951208 000040 0008+00 0/2 0/0 0/0 .rodata          @4176 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4176[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80951200, &lit_4176);
#pragma pop

/* 8094C298-8094C4B0 000758 0218+00 1/1 0/0 0/0 .text            damage_check__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void damage_check(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/damage_check__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80951550-80951554 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80951554-80951558 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80951558-8095155C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8095155C-80951560 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80951560-80951564 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80951564-80951568 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80951568-8095156C 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8095156C-80951570 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80951570-80951574 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80951574-80951578 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80951578-8095157C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8095157C-80951580 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80951580-80951584 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80951584-80951588 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80951588-8095158C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8095158C-80951590 -00001 0004+00 2/2 0/0 0/0 .bss             None */
/* 8095158C 0001+00 data_8095158C @1009 */
/* 8095158D 0003+00 data_8095158D None */
static u8 struct_8095158C[4];

/* 80951590-8095159C 000048 000C+00 1/1 0/0 0/0 .bss             @3953 */
static u8 lit_3953[12];

/* 8095159C-809515D8 000054 003C+00 9/9 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[60];

/* 809515D8-80951600 000090 0028+00 2/2 0/0 0/0 .bss             target_info */
static u8 target_info[40];

/* 80951600-80951604 0000B8 0004+00 2/2 0/0 0/0 .bss             target_info_count */
static u8 target_info_count[4];

/* 8094C4B0-8094C520 000970 0070+00 1/1 0/0 0/0 .text            s_t_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_t_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/s_t_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80951208-8095120C 000048 0004+00 0/3 0/0 0/0 .rodata          @4238 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4238 = 1000.0f;
COMPILER_STRIP_GATE(0x80951208, &lit_4238);
#pragma pop

/* 8094C520-8094C688 0009E0 0168+00 1/1 0/0 0/0 .text            search_test__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void search_test(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/search_test__FP8ni_class.s"
}
#pragma pop

/* 8094C688-8094C6C4 000B48 003C+00 1/1 0/0 0/0 .text            ni_carry_check__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_carry_check(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_carry_check__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8095120C-80951210 00004C 0004+00 0/2 0/0 0/0 .rodata          @4274 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4274 = 300.0f;
COMPILER_STRIP_GATE(0x8095120C, &lit_4274);
#pragma pop

/* 8094C6C4-8094C7B4 000B84 00F0+00 1/1 0/0 0/0 .text            move_gake_check__FP8ni_classf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void move_gake_check(ni_class* param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/move_gake_check__FP8ni_classf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80951210-80951214 000050 0004+00 0/7 0/0 0/0 .rodata          @4414 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4414 = 50.0f;
COMPILER_STRIP_GATE(0x80951210, &lit_4414);
#pragma pop

/* 80951214-80951218 000054 0004+00 0/1 0/0 0/0 .rodata          @4415 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4415 = 70.0f;
COMPILER_STRIP_GATE(0x80951214, &lit_4415);
#pragma pop

/* 80951218-8095121C 000058 0004+00 0/6 0/0 0/0 .rodata          @4416 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4416 = 3.0f;
COMPILER_STRIP_GATE(0x80951218, &lit_4416);
#pragma pop

/* 8095121C-80951220 00005C 0004+00 0/2 0/0 0/0 .rodata          @4417 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4417 = 8000.0f;
COMPILER_STRIP_GATE(0x8095121C, &lit_4417);
#pragma pop

/* 80951220-80951224 000060 0004+00 0/3 0/0 0/0 .rodata          @4418 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4418 = 500.0f;
COMPILER_STRIP_GATE(0x80951220, &lit_4418);
#pragma pop

/* 80951224-80951228 000064 0004+00 0/3 0/0 0/0 .rodata          @4419 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4419 = 60.0f;
COMPILER_STRIP_GATE(0x80951224, &lit_4419);
#pragma pop

/* 80951228-8095122C 000068 0004+00 0/8 0/0 0/0 .rodata          @4420 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4420 = 5.0f;
COMPILER_STRIP_GATE(0x80951228, &lit_4420);
#pragma pop

/* 8095122C-80951230 00006C 0004+00 0/2 0/0 0/0 .rodata          @4421 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4421 = 16.0f;
COMPILER_STRIP_GATE(0x8095122C, &lit_4421);
#pragma pop

/* 80951230-80951238 000070 0008+00 0/3 0/0 0/0 .rodata          @4422 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4422[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80951230, &lit_4422);
#pragma pop

/* 80951238-80951240 000078 0008+00 0/3 0/0 0/0 .rodata          @4423 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4423[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80951238, &lit_4423);
#pragma pop

/* 80951240-80951248 000080 0008+00 0/3 0/0 0/0 .rodata          @4424 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4424[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80951240, &lit_4424);
#pragma pop

/* 80951248-8095124C 000088 0004+00 0/2 0/0 0/0 .rodata          @4425 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4425 = 3000.0f;
COMPILER_STRIP_GATE(0x80951248, &lit_4425);
#pragma pop

/* 8095124C-80951250 00008C 0004+00 0/1 0/0 0/0 .rodata          @4426 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4426 = -914.0f;
COMPILER_STRIP_GATE(0x8095124C, &lit_4426);
#pragma pop

/* 80951250-80951254 000090 0004+00 0/1 0/0 0/0 .rodata          @4427 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4427 = 160.0f;
COMPILER_STRIP_GATE(0x80951250, &lit_4427);
#pragma pop

/* 80951254-80951258 000094 0004+00 0/1 0/0 0/0 .rodata          @4428 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4428 = 3931.0f;
COMPILER_STRIP_GATE(0x80951254, &lit_4428);
#pragma pop

/* 8094C7B4-8094CE7C 000C74 06C8+00 1/1 0/0 0/0 .text            ni_normal__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_normal(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_normal__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80951258-8095125C 000098 0004+00 0/5 0/0 0/0 .rodata          @4513 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4513 = 2.0f;
COMPILER_STRIP_GATE(0x80951258, &lit_4513);
#pragma pop

/* 8095125C-80951260 00009C 0004+00 0/1 0/0 0/0 .rodata          @4514 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4514 = 8.0f;
COMPILER_STRIP_GATE(0x8095125C, &lit_4514);
#pragma pop

/* 80951260-80951264 0000A0 0004+00 0/3 0/0 0/0 .rodata          @4515 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4515 = 25.0f;
COMPILER_STRIP_GATE(0x80951260, &lit_4515);
#pragma pop

/* 80951264-80951268 0000A4 0004+00 0/2 0/0 0/0 .rodata          @4516 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4516 = 10000.0f;
COMPILER_STRIP_GATE(0x80951264, &lit_4516);
#pragma pop

/* 8094CE7C-8094D2A4 00133C 0428+00 1/1 0/0 0/0 .text            ni_away__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_away(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_away__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80951268-8095126C 0000A8 0004+00 0/2 0/0 0/0 .rodata          @4578 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4578 = 65536.0f;
COMPILER_STRIP_GATE(0x80951268, &lit_4578);
#pragma pop

/* 8094D2A4-8094D60C 001764 0368+00 1/1 0/0 0/0 .text            ni_swim__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_swim(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_swim__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8095126C-80951270 0000AC 0004+00 0/8 0/0 0/0 .rodata          @4623 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4623 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8095126C, &lit_4623);
#pragma pop

/* 80951270-80951274 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4624 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4624 = 2500.0f;
COMPILER_STRIP_GATE(0x80951270, &lit_4624);
#pragma pop

/* 8094D60C-8094D7BC 001ACC 01B0+00 1/1 0/0 0/0 .text            ni_carry__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_carry(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_carry__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80951274-80951278 0000B4 0004+00 0/2 0/0 0/0 .rodata          @4649 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4649 = -20.0f;
COMPILER_STRIP_GATE(0x80951274, &lit_4649);
#pragma pop

/* 8094D7BC-8094D8EC 001C7C 0130+00 1/1 0/0 0/0 .text            ni_fly__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_fly(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_fly__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80951278-8095127C 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4668 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4668 = -20000.0f;
COMPILER_STRIP_GATE(0x80951278, &lit_4668);
#pragma pop

/* 8094D8EC-8094DA0C 001DAC 0120+00 1/1 0/0 0/0 .text            ni_drop__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_drop(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_drop__FP8ni_class.s"
}
#pragma pop

/* 8094DA0C-8094DB98 001ECC 018C+00 1/1 0/0 0/0 .text            ni_return__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_return(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_return__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8095127C-80951280 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4712 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4712 = 7.0f / 20.0f;
COMPILER_STRIP_GATE(0x8095127C, &lit_4712);
#pragma pop

/* 8094DB98-8094DD10 002058 0178+00 1/1 0/0 0/0 .text            ni_damage__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_damage(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_damage__FP8ni_class.s"
}
#pragma pop

/* 8094DD10-8094DD74 0021D0 0064+00 1/1 0/0 0/0 .text            s_b_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_b_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/s_b_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80951280-80951284 0000C0 0004+00 0/2 0/0 0/0 .rodata          @4744 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4744 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80951280, &lit_4744);
#pragma pop

/* 8094DD74-8094DED0 002234 015C+00 1/1 0/0 0/0 .text            ni_windspin__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_windspin(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_windspin__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80951284-80951288 0000C4 0004+00 0/2 0/0 0/0 .rodata          @4843 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4843 = -5.0f;
COMPILER_STRIP_GATE(0x80951284, &lit_4843);
#pragma pop

/* 80951288-8095128C 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4844 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4844 = 20000.0f;
COMPILER_STRIP_GATE(0x80951288, &lit_4844);
#pragma pop

/* 8095128C-80951290 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4845 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4845 = -37864.0f;
COMPILER_STRIP_GATE(0x8095128C, &lit_4845);
#pragma pop

/* 80951290-80951294 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4846 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4846 = 1012.0f;
COMPILER_STRIP_GATE(0x80951290, &lit_4846);
#pragma pop

/* 80951294-80951298 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4847 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4847 = -22106.0f;
COMPILER_STRIP_GATE(0x80951294, &lit_4847);
#pragma pop

/* 8094DED0-8094E2B0 002390 03E0+00 1/2 0/0 0/0 .text            ni_demo0__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_demo0(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_demo0__FP8ni_class.s"
}
#pragma pop

/* 8094E2B0-8094E378 002770 00C8+00 1/1 0/0 0/0 .text            ni_message__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_message(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_message__FP8ni_class.s"
}
#pragma pop

/* 8094E378-8094E4FC 002838 0184+00 1/1 0/0 0/0 .text            playwallcheck__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void playwallcheck(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/playwallcheck__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80951298-8095129C 0000D8 0004+00 0/2 0/0 0/0 .rodata          @5117 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5117 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80951298, &lit_5117);
#pragma pop

/* 8094E4FC-8094ED90 0029BC 0894+00 2/1 0/0 0/0 .text            ni_play__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ni_play(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/ni_play__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8095129C-809512A0 0000DC 0004+00 0/0 0/0 0/0 .rodata          @5118 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5118 = -10.0f;
COMPILER_STRIP_GATE(0x8095129C, &lit_5118);
#pragma pop

/* 809512A0-809512A4 0000E0 0004+00 0/0 0/0 0/0 .rodata          @5119 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5119 = -2.0f;
COMPILER_STRIP_GATE(0x809512A0, &lit_5119);
#pragma pop

/* 809512A4-809512A8 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5120 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5120 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x809512A4, &lit_5120);
#pragma pop

/* 809512A8-809512AC 0000E8 0004+00 0/0 0/0 0/0 .rodata          @5121 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5121 = 0.25f;
COMPILER_STRIP_GATE(0x809512A8, &lit_5121);
#pragma pop

/* 809512AC-809512B0 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5122 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5122 = 0.5f;
COMPILER_STRIP_GATE(0x809512AC, &lit_5122);
#pragma pop

/* 809512B0-809512B4 0000F0 0004+00 0/0 0/0 0/0 .rodata          @5123 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5123 = 0.75f;
COMPILER_STRIP_GATE(0x809512B0, &lit_5123);
#pragma pop

/* 809512B4-809512B8 0000F4 0004+00 0/0 0/0 0/0 .rodata          @5124 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5124 = -15.0f;
COMPILER_STRIP_GATE(0x809512B4, &lit_5124);
#pragma pop

/* 809512B8-809512BC 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5300 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5300 = -1.0f / 20.0f;
COMPILER_STRIP_GATE(0x809512B8, &lit_5300);
#pragma pop

/* 809512BC-809512C0 0000FC 0004+00 0/2 0/0 0/0 .rodata          @5301 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5301 = 55.0f;
COMPILER_STRIP_GATE(0x809512BC, &lit_5301);
#pragma pop

/* 809512C0-809512C4 000100 0004+00 0/1 0/0 0/0 .rodata          @5302 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5302 = 180.0f;
COMPILER_STRIP_GATE(0x809512C0, &lit_5302);
#pragma pop

/* 809512C4-809512C8 000104 0004+00 0/1 0/0 0/0 .rodata          @5303 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5303 = 230.0f;
COMPILER_STRIP_GATE(0x809512C4, &lit_5303);
#pragma pop

/* 809512C8-809512CC 000108 0004+00 0/1 0/0 0/0 .rodata          @5304 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5304 = 150.0f;
COMPILER_STRIP_GATE(0x809512C8, &lit_5304);
#pragma pop

/* 809512CC-809512D0 00010C 0004+00 0/1 0/0 0/0 .rodata          @5305 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5305 = 5000.0f;
COMPILER_STRIP_GATE(0x809512CC, &lit_5305);
#pragma pop

/* 809512D0-809512D4 000110 0004+00 0/1 0/0 0/0 .rodata          @5306 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5306 = -25.0f;
COMPILER_STRIP_GATE(0x809512D0, &lit_5306);
#pragma pop

/* 809512D4-809512D8 000114 0004+00 0/1 0/0 0/0 .rodata          @5307 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5307 = 800.0f;
COMPILER_STRIP_GATE(0x809512D4, &lit_5307);
#pragma pop

/* 809512D8-809512DC 000118 0004+00 0/1 0/0 0/0 .rodata          @5308 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5308 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x809512D8, &lit_5308);
#pragma pop

/* 809512DC-809512E0 00011C 0004+00 0/1 0/0 0/0 .rodata          @5309 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5309 = -250.0f;
COMPILER_STRIP_GATE(0x809512DC, &lit_5309);
#pragma pop

/* 809512E0-809512E4 000120 0004+00 0/1 0/0 0/0 .rodata          @5310 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5310 = 120.0f;
COMPILER_STRIP_GATE(0x809512E0, &lit_5310);
#pragma pop

/* 809512E4-809512E8 000124 0004+00 0/1 0/0 0/0 .rodata          @5311 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5311 = 250.0f;
COMPILER_STRIP_GATE(0x809512E4, &lit_5311);
#pragma pop

/* 8094ED90-8094F5D8 003250 0848+00 1/1 0/0 0/0 .text            play_camera__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void play_camera(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/play_camera__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8095131C-8095131C 00015C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8095131F = "F_SP103";
#pragma pop

/* 8094F5D8-809502B4 003A98 0CDC+00 2/1 0/0 0/0 .text            action__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/action__FP8ni_class.s"
}
#pragma pop

/* 809502B4-809503D8 004774 0124+00 1/1 0/0 0/0 .text            message__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void message(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/message__FP8ni_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 809512E8-809512EC 000128 0004+00 0/0 0/0 0/0 .rodata          @5661 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5661 = -80.0f;
COMPILER_STRIP_GATE(0x809512E8, &lit_5661);
#pragma pop

/* 809512EC-809512F0 00012C 0004+00 0/0 0/0 0/0 .rodata          @5662 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5662 = 32768.0f;
COMPILER_STRIP_GATE(0x809512EC, &lit_5662);
#pragma pop

/* 809512F0-809512F4 000130 0004+00 0/0 0/0 0/0 .rodata          @5663 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5663 = 1076.0f;
COMPILER_STRIP_GATE(0x809512F0, &lit_5663);
#pragma pop

/* 809512F4-809512F8 000134 0004+00 0/0 0/0 0/0 .rodata          @5664 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5664 = 4128.0f;
COMPILER_STRIP_GATE(0x809512F4, &lit_5664);
#pragma pop

/* 809512F8-809512FC 000138 0004+00 0/0 0/0 0/0 .rodata          @5665 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5665 = 50000.0f;
COMPILER_STRIP_GATE(0x809512F8, &lit_5665);
#pragma pop

/* 809512FC-80951300 00013C 0004+00 0/1 0/0 0/0 .rodata          @5803 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5803 = 23.0f;
COMPILER_STRIP_GATE(0x809512FC, &lit_5803);
#pragma pop

/* 80951300-80951304 000140 0004+00 0/1 0/0 0/0 .rodata          @5804 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5804 = 9.0f;
COMPILER_STRIP_GATE(0x80951300, &lit_5804);
#pragma pop

/* 80951304-80951308 000144 0004+00 0/1 0/0 0/0 .rodata          @5805 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5805 = 13.0f;
COMPILER_STRIP_GATE(0x80951304, &lit_5805);
#pragma pop

/* 80951308-8095130C 000148 0004+00 0/1 0/0 0/0 .rodata          @5806 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5806 = 17.0f;
COMPILER_STRIP_GATE(0x80951308, &lit_5806);
#pragma pop

/* 8095130C-80951310 00014C 0004+00 0/1 0/0 0/0 .rodata          @5807 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5807 = 21.0f;
COMPILER_STRIP_GATE(0x8095130C, &lit_5807);
#pragma pop

/* 809503D8-80950870 004898 0498+00 2/1 0/0 0/0 .text            daNi_Execute__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNi_Execute(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/daNi_Execute__FP8ni_class.s"
}
#pragma pop

/* 80950870-80950878 004D30 0008+00 1/0 0/0 0/0 .text            daNi_IsDelete__FP8ni_class */
static bool daNi_IsDelete(ni_class* param_0) {
    return true;
}

/* 80950878-809508E0 004D38 0068+00 1/0 0/0 0/0 .text            daNi_Delete__FP8ni_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNi_Delete(ni_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/daNi_Delete__FP8ni_class.s"
}
#pragma pop

/* 809508E0-80950AE8 004DA0 0208+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80950AE8-80950B30 004FA8 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80951310-80951314 000150 0004+00 0/1 0/0 0/0 .rodata          @6033 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6033 = 0x403FEF9E;
COMPILER_STRIP_GATE(0x80951310, &lit_6033);
#pragma pop

/* 80951314-80951318 000154 0004+00 0/1 0/0 0/0 .rodata          @6034 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6034 = 45.0f;
COMPILER_STRIP_GATE(0x80951314, &lit_6034);
#pragma pop

/* 80951318-8095131C 000158 0004+00 0/1 0/0 0/0 .rodata          @6035 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6035 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80951318, &lit_6035);
#pragma pop

/* 8095131C-8095131C 00015C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80951327 = "F_SP108";
#pragma pop

/* 80950B30-80950F04 004FF0 03D4+00 1/0 0/0 0/0 .text            daNi_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNi_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/daNi_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80950F04-80950F4C 0053C4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80950F4C-80950F94 00540C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80950F94-80950FF0 005454 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dCcD_GStts::~dCcD_GStts() {
extern "C" asm void __dt__10dCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80950FF0-80951060 0054B0 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80951060-809510D0 005520 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 809510D0-80951118 005590 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_GStts::~cCcD_GStts() {
extern "C" asm void __dt__10cCcD_GSttsFv() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80951118-80951160 0055D8 0048+00 2/1 0/0 0/0 .text            __dt__10daNi_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNi_HIO_c::~daNi_HIO_c() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/__dt__10daNi_HIO_cFv.s"
}
#pragma pop

/* 80951160-8095119C 005620 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_ni_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_ni_cpp() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/__sinit_d_a_ni_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80951160, __sinit_d_a_ni_cpp);
#pragma pop

/* 8095119C-809511A4 00565C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8095119C() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/func_8095119C.s"
}
#pragma pop

/* 809511A4-809511AC 005664 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_809511A4() {
    nofralloc
#include "asm/rel/d/a/d_a_ni/d_a_ni/func_809511A4.s"
}
#pragma pop

/* ############################################################################################## */
/* 80951604-80951614 0000BC 000C+04 0/0 0/0 0/0 .bss             @5415 */
#pragma push
#pragma force_active on
static u8 lit_5415[12 + 4 /* padding */];
#pragma pop

/* 80951614-80951620 0000CC 000C+00 0/0 0/0 0/0 .bss             sc$5414 */
#pragma push
#pragma force_active on
static u8 sc[12];
#pragma pop

/* 80951620-80951624 0000D8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80951620[4];
#pragma pop

/* 80951624-80951628 0000DC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80951624[4];
#pragma pop

/* 80951628-8095162C 0000E0 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80951628[4];
#pragma pop

/* 8095162C-80951630 0000E4 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8095162C[4];
#pragma pop

/* 80951630-80951634 0000E8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80951630[4];
#pragma pop

/* 80951634-80951638 0000EC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80951634[4];
#pragma pop

/* 80951638-8095163C 0000F0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80951638[4];
#pragma pop

/* 8095163C-80951640 0000F4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_8095163C[4];
#pragma pop

/* 80951640-80951644 0000F8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80951640[4];
#pragma pop

/* 80951644-80951648 0000FC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80951644[4];
#pragma pop

/* 80951648-8095164C 000100 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80951648[4];
#pragma pop

/* 8095164C-80951650 000104 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8095164C[4];
#pragma pop

/* 80951650-80951654 000108 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80951650[4];
#pragma pop

/* 80951654-80951658 00010C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80951654[4];
#pragma pop

/* 80951658-8095165C 000110 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80951658[4];
#pragma pop

/* 8095165C-80951660 000114 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_8095165C[4];
#pragma pop

/* 80951660-80951664 000118 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80951660[4];
#pragma pop

/* 80951664-80951668 00011C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80951664[4];
#pragma pop

/* 80951668-8095166C 000120 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80951668[4];
#pragma pop

/* 8095166C-80951670 000124 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_8095166C[4];
#pragma pop

/* 80951670-80951674 000128 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80951670[4];
#pragma pop

/* 80951674-80951678 00012C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80951674[4];
#pragma pop

/* 80951678-8095167C 000130 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80951678[4];
#pragma pop

/* 8095167C-80951680 000134 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8095167C[4];
#pragma pop

/* 80951680-80951684 000138 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80951680[4];
#pragma pop

/* 8095131C-8095131C 00015C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
