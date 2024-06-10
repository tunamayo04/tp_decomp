/**
 * @file d_a_b_bh.cpp
 * 
*/

#include "rel/d/a/b/d_a_b_bh/d_a_b_bh.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void __ct__12daB_BH_HIO_cFv();
extern "C" static void anm_init__FP10b_bh_classifUcf();
extern "C" static void daB_BH_Draw__FP10b_bh_class();
extern "C" static void b_bh_wait__FP10b_bh_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void b_bh_attack_1__FP10b_bh_class();
extern "C" static void b_bh_bombeat__FP10b_bh_class();
extern "C" static void b_bh_down__FP10b_bh_class();
extern "C" static void b_bh_b_wait__FP10b_bh_class();
extern "C" static void b_bh_b_attack_1__FP10b_bh_class();
extern "C" static void b_bh_b_bombeat__FP10b_bh_class();
extern "C" static void b_bh_b_down__FP10b_bh_class();
extern "C" static void b_bh_start__FP10b_bh_class();
extern "C" static void kuki_control1__FP10b_bh_class();
extern "C" static void kuki_control2__FP10b_bh_class();
extern "C" static void kuki_control3__FP10b_bh_class();
extern "C" static void s_b_sub__FPvPv();
extern "C" static void damage_check__FP10b_bh_class();
extern "C" static void action__FP10b_bh_class();
extern "C" static void anm_se_set__FP10b_bh_class();
extern "C" static void daB_BH_Execute__FP10b_bh_class();
extern "C" static bool daB_BH_IsDelete__FP10b_bh_class();
extern "C" static void daB_BH_Delete__FP10b_bh_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daB_BH_Create__FP10fopAc_ac_c();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__12daB_BH_HIO_cFv();
extern "C" void __sinit_d_a_b_bh_cpp();
extern "C" static void func_805B311C();
extern "C" static void func_805B3124();
extern "C" extern char const* const d_a_b_bh__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
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
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_onOneZoneSwitch__Fii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxScale__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void MtxPush__Fv();
extern "C" void MtxPull__Fv();
extern "C" void func_80280808();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void _savegpr_21();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_21();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u8 struct_80450C98[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 805B3140-805B3144 000000 0004+00 19/19 0/0 0/0 .rodata          @3764 */
SECTION_RODATA static f32 const lit_3764 = 1.25f;
COMPILER_STRIP_GATE(0x805B3140, &lit_3764);

/* 805B3234-805B3258 000000 0022+02 1/1 0/0 0/0 .data            pow_xa$4538 */
SECTION_DATA static u8 pow_xa[34 + 2 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x10,
    0x00,
    0x18,
    0x00,
    0x20,
    0x00,
    0x28,
    0x00,
    0x30,
    0x00,
    0x38,
    0x00,
    0x40,
    0x00,
    0x38,
    0x00,
    0x30,
    0x00,
    0x28,
    0x00,
    0x20,
    0x00,
    0x18,
    0x00,
    0x10,
    0x00,
    0x08,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 805B3258-805B3264 000024 000A+02 1/1 0/0 0/0 .data            eno$4831 */
SECTION_DATA static u8 eno_4831[10 + 2 /* padding */] = {
    0x82,
    0xCD,
    0x82,
    0xCE,
    0x82,
    0xF3,
    0x82,
    0xCB,
    0x82,
    0xCC,
    /* padding */
    0x00,
    0x00,
};

/* 805B3264-805B326C 000030 0008+00 1/1 0/0 0/0 .data            eno$4839 */
SECTION_DATA static u8 eno_4839[8] = {
    0x82, 0xD9, 0x82, 0xDA, 0x82, 0xDB, 0x82, 0xDC,
};

/* 805B326C-805B3278 000038 000A+02 1/1 0/0 0/0 .data            g_y_i$5031 */
SECTION_DATA static u8 g_y_i[10 + 2 /* padding */] = {
    0x82,
    0xF5,
    0x82,
    0xF6,
    0x82,
    0xF7,
    0x82,
    0xF8,
    0x82,
    0xF4,
    /* padding */
    0x00,
    0x00,
};

/* 805B3278-805B328C 000044 0014+00 1/1 0/0 0/0 .data            g_y_ji$5032 */
SECTION_DATA static u8 g_y_ji[20] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00,
    0x00, 0x0F, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0C,
};

/* 805B328C-805B32CC 000058 0040+00 1/1 0/0 0/0 .data            cc_sph_src$5408 */
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x2, 0xd}, {0xd8fbfdff, 0x3}, 0x75}}, // mObj
        {dCcD_SE_HARD_BODY, 0x0, 0x1, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_STONE, 0x2, 0x0, 0x0, 0x3}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};

/* 805B32CC-805B330C 000098 0040+00 1/1 0/0 0/0 .data            tg_sph_src$5409 */
static dCcD_SrcSph tg_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x0}}, // mObj
        {dCcD_SE_HARD_BODY, 0x0, 0x1, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};

/* 805B330C-805B332C -00001 0020+00 1/0 0/0 0/0 .data            l_daB_BH_Method */
static actor_method_class l_daB_BH_Method = {
    (process_method_func)daB_BH_Create__FP10fopAc_ac_c,
    (process_method_func)daB_BH_Delete__FP10b_bh_class,
    (process_method_func)daB_BH_Execute__FP10b_bh_class,
    (process_method_func)daB_BH_IsDelete__FP10b_bh_class,
    (process_method_func)daB_BH_Draw__FP10b_bh_class,
};

/* 805B332C-805B335C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_BH */
extern actor_process_profile_definition g_profile_B_BH = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_B_BH,              // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(b_bh_class),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  211,                    // mPriority
  &l_daB_BH_Method,       // sub_method
  0x00044000,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 805B335C-805B3380 000128 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_805B3124,
    (void*)NULL,
    (void*)NULL,
    (void*)func_805B311C,
};

/* 805B3380-805B338C 00014C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 805B338C-805B3398 000158 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 805B3398-805B33A4 000164 000C+00 2/2 0/0 0/0 .data            __vt__12daB_BH_HIO_c */
SECTION_DATA extern void* __vt__12daB_BH_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daB_BH_HIO_cFv,
};

/* 805AE26C-805AE2A4 0000EC 0038+00 1/1 0/0 0/0 .text            __ct__12daB_BH_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_BH_HIO_c::daB_BH_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/__ct__12daB_BH_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B3144-805B3148 000004 0004+00 2/18 0/0 0/0 .rodata          @3778 */
SECTION_RODATA static u8 const lit_3778[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x805B3144, &lit_3778);

/* 805B3148-805B314C 000008 0004+00 1/2 0/0 0/0 .rodata          @3779 */
SECTION_RODATA static f32 const lit_3779 = -1.0f;
COMPILER_STRIP_GATE(0x805B3148, &lit_3779);

/* 805B322C-805B322C 0000EC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805B322C = "B_BH";
#pragma pop

/* 805AE2A4-805AE350 000124 00AC+00 10/10 0/0 0/0 .text            anm_init__FP10b_bh_classifUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_init(b_bh_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/anm_init__FP10b_bh_classifUcf.s"
}
#pragma pop

/* 805AE350-805AE430 0001D0 00E0+00 1/0 0/0 0/0 .text            daB_BH_Draw__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_BH_Draw(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/daB_BH_Draw__FP10b_bh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B314C-805B3150 00000C 0004+00 0/8 0/0 0/0 .rodata          @3946 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3946 = 100.0f;
COMPILER_STRIP_GATE(0x805B314C, &lit_3946);
#pragma pop

/* 805B3150-805B3154 000010 0004+00 0/10 0/0 0/0 .rodata          @3947 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3947 = 50.0f;
COMPILER_STRIP_GATE(0x805B3150, &lit_3947);
#pragma pop

/* 805B3154-805B3158 000014 0004+00 0/2 0/0 0/0 .rodata          @3948 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3948 = 350.0f;
COMPILER_STRIP_GATE(0x805B3154, &lit_3948);
#pragma pop

/* 805B3158-805B315C 000018 0004+00 0/4 0/0 0/0 .rodata          @3949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3949 = 250.0f;
COMPILER_STRIP_GATE(0x805B3158, &lit_3949);
#pragma pop

/* 805B315C-805B3160 00001C 0004+00 0/5 0/0 0/0 .rodata          @3950 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3950 = 10.0f;
COMPILER_STRIP_GATE(0x805B315C, &lit_3950);
#pragma pop

/* 805B3160-805B3164 000020 0004+00 0/14 0/0 0/0 .rodata          @3951 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3951 = 1.0f;
COMPILER_STRIP_GATE(0x805B3160, &lit_3951);
#pragma pop

/* 805B3164-805B3168 000024 0004+00 0/2 0/0 0/0 .rodata          @3952 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3952 = 0.5f;
COMPILER_STRIP_GATE(0x805B3164, &lit_3952);
#pragma pop

/* 805B3168-805B316C 000028 0004+00 0/6 0/0 0/0 .rodata          @3953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3953 = 30.0f;
COMPILER_STRIP_GATE(0x805B3168, &lit_3953);
#pragma pop

/* 805B316C-805B3170 00002C 0004+00 0/5 0/0 0/0 .rodata          @3954 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3954 = 300.0f;
COMPILER_STRIP_GATE(0x805B316C, &lit_3954);
#pragma pop

/* 805B3170-805B3174 000030 0004+00 0/5 0/0 0/0 .rodata          @3955 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3955 = 550.0f;
COMPILER_STRIP_GATE(0x805B3170, &lit_3955);
#pragma pop

/* 805B3174-805B3178 000034 0004+00 0/7 0/0 0/0 .rodata          @3956 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3956 = 200.0f;
COMPILER_STRIP_GATE(0x805B3174, &lit_3956);
#pragma pop

/* 805B3178-805B3180 000038 0008+00 0/7 0/0 0/0 .rodata          @3957 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3957[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805B3178, &lit_3957);
#pragma pop

/* 805B3180-805B3188 000040 0008+00 0/7 0/0 0/0 .rodata          @3958 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3958[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805B3180, &lit_3958);
#pragma pop

/* 805B3188-805B3190 000048 0008+00 0/7 0/0 0/0 .rodata          @3959 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3959[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805B3188, &lit_3959);
#pragma pop

/* 805B3190-805B3194 000050 0004+00 0/2 0/0 0/0 .rodata          @3960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3960 = 2800.0f;
COMPILER_STRIP_GATE(0x805B3190, &lit_3960);
#pragma pop

/* 805B3194-805B3198 000054 0004+00 0/2 0/0 0/0 .rodata          @3961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3961 = 2.0f;
COMPILER_STRIP_GATE(0x805B3194, &lit_3961);
#pragma pop

/* 805B3198-805B319C 000058 0004+00 0/1 0/0 0/0 .rodata          @3962 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3962 = 0x403F5C29;
COMPILER_STRIP_GATE(0x805B3198, &lit_3962);
#pragma pop

/* 805B319C-805B31A0 00005C 0004+00 0/4 0/0 0/0 .rodata          @3963 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3963 = 150.0f;
COMPILER_STRIP_GATE(0x805B319C, &lit_3963);
#pragma pop

/* 805B31A0-805B31A4 000060 0004+00 0/7 0/0 0/0 .rodata          @3964 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3964 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x805B31A0, &lit_3964);
#pragma pop

/* 805B31A4-805B31A8 000064 0004+00 0/8 0/0 0/0 .rodata          @3965 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3965 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x805B31A4, &lit_3965);
#pragma pop

/* 805B31A8-805B31AC 000068 0004+00 0/2 0/0 0/0 .rodata          @3966 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3966 = 400.0f;
COMPILER_STRIP_GATE(0x805B31A8, &lit_3966);
#pragma pop

/* 805B31AC-805B31B0 00006C 0004+00 0/2 0/0 0/0 .rodata          @3967 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3967 = -23.0f;
COMPILER_STRIP_GATE(0x805B31AC, &lit_3967);
#pragma pop

/* 805B31B0-805B31B8 000070 0004+04 0/2 0/0 0/0 .rodata          @3968 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3968[1 + 1 /* padding */] = {
    3.5f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x805B31B0, &lit_3968);
#pragma pop

/* 805B31B8-805B31C0 000078 0008+00 0/4 0/0 0/0 .rodata          @3970 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3970[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805B31B8, &lit_3970);
#pragma pop

/* 805B33B0-805B33B4 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 805B33B4-805B33B8 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 805B33B8-805B33BC 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 805B33BC-805B33C0 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 805B33C0-805B33C4 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 805B33C4-805B33C8 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 805B33C8-805B33CC 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 805B33CC-805B33D0 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 805B33D0-805B33D4 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 805B33D4-805B33D8 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 805B33D8-805B33DC 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 805B33DC-805B33E0 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 805B33E0-805B33E4 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 805B33E4-805B33E8 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 805B33E8-805B33EC 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 805B33EC-805B33F0 -00001 0004+00 1/2 0/0 0/0 .bss             None */
/* 805B33EC 0001+00 data_805B33EC @1009 */
/* 805B33ED 0003+00 data_805B33ED None */
static u8 struct_805B33EC[4];

/* 805B33F0-805B33FC 000048 000C+00 1/1 0/0 0/0 .bss             @3759 */
static u8 lit_3759[12];

/* 805B33FC-805B3414 000054 0018+00 10/11 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[24];

/* 805B3414-805B341C 00006C 0008+00 2/3 0/0 0/0 .bss             bh */
static u8 bh[8];

/* 805AE430-805AEB04 0002B0 06D4+00 1/1 0/0 0/0 .text            b_bh_wait__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bh_wait(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/b_bh_wait__FP10b_bh_class.s"
}
#pragma pop

/* 805AEB04-805AEB40 000984 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B31C0-805B31C4 000080 0004+00 0/2 0/0 0/0 .rodata          @4038 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4038 = 5.0f;
COMPILER_STRIP_GATE(0x805B31C0, &lit_4038);
#pragma pop

/* 805B31C4-805B31C8 000084 0004+00 0/5 0/0 0/0 .rodata          @4039 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4039 = 3.0f;
COMPILER_STRIP_GATE(0x805B31C4, &lit_4039);
#pragma pop

/* 805B31C8-805B31CC 000088 0004+00 0/2 0/0 0/0 .rodata          @4040 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4040 = -300.0f;
COMPILER_STRIP_GATE(0x805B31C8, &lit_4040);
#pragma pop

/* 805B31CC-805B31D0 00008C 0004+00 0/4 0/0 0/0 .rodata          @4041 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4041 = 500.0f;
COMPILER_STRIP_GATE(0x805B31CC, &lit_4041);
#pragma pop

/* 805B31D0-805B31D4 000090 0004+00 0/2 0/0 0/0 .rodata          @4042 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4042 = 1700.0f;
COMPILER_STRIP_GATE(0x805B31D0, &lit_4042);
#pragma pop

/* 805B31D4-805B31D8 000094 0004+00 0/3 0/0 0/0 .rodata          @4043 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4043 = 60.0f;
COMPILER_STRIP_GATE(0x805B31D4, &lit_4043);
#pragma pop

/* 805B31D8-805B31DC 000098 0004+00 0/2 0/0 0/0 .rodata          @4044 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4044 = 20.0f;
COMPILER_STRIP_GATE(0x805B31D8, &lit_4044);
#pragma pop

/* 805AEB40-805AEF78 0009C0 0438+00 1/1 0/0 0/0 .text            b_bh_attack_1__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bh_attack_1(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/b_bh_attack_1__FP10b_bh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B31DC-805B31E0 00009C 0004+00 0/4 0/0 0/0 .rodata          @4091 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4091 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x805B31DC, &lit_4091);
#pragma pop

/* 805AEF78-805AF1F8 000DF8 0280+00 1/1 0/0 0/0 .text            b_bh_bombeat__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bh_bombeat(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/b_bh_bombeat__FP10b_bh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B31E0-805B31E4 0000A0 0004+00 0/2 0/0 0/0 .rodata          @4179 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4179 = 600.0f;
COMPILER_STRIP_GATE(0x805B31E0, &lit_4179);
#pragma pop

/* 805B31E4-805B31E8 0000A4 0004+00 0/3 0/0 0/0 .rodata          @4180 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4180 = 700.0f;
COMPILER_STRIP_GATE(0x805B31E4, &lit_4180);
#pragma pop

/* 805B31E8-805B31EC 0000A8 0004+00 0/2 0/0 0/0 .rodata          @4181 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4181 = 1600.0f;
COMPILER_STRIP_GATE(0x805B31E8, &lit_4181);
#pragma pop

/* 805B31EC-805B31F0 0000AC 0004+00 0/2 0/0 0/0 .rodata          @4182 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4182 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x805B31EC, &lit_4182);
#pragma pop

/* 805AF1F8-805AF6E0 001078 04E8+00 1/1 0/0 0/0 .text            b_bh_down__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bh_down(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/b_bh_down__FP10b_bh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B31F0-805B31F4 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4280 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4280 = 70.0f;
COMPILER_STRIP_GATE(0x805B31F0, &lit_4280);
#pragma pop

/* 805AF6E0-805AFCA8 001560 05C8+00 1/1 0/0 0/0 .text            b_bh_b_wait__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bh_b_wait(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/b_bh_b_wait__FP10b_bh_class.s"
}
#pragma pop

/* 805AFCA8-805B00A8 001B28 0400+00 1/1 0/0 0/0 .text            b_bh_b_attack_1__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bh_b_attack_1(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/b_bh_b_attack_1__FP10b_bh_class.s"
}
#pragma pop

/* 805B00A8-805B0274 001F28 01CC+00 1/1 0/0 0/0 .text            b_bh_b_bombeat__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bh_b_bombeat(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/b_bh_b_bombeat__FP10b_bh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B31F4-805B31F8 0000B4 0004+00 0/3 0/0 0/0 .rodata          @4450 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4450 = 1000.0f;
COMPILER_STRIP_GATE(0x805B31F4, &lit_4450);
#pragma pop

/* 805B0274-805B060C 0020F4 0398+00 1/1 0/0 0/0 .text            b_bh_b_down__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bh_b_down(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/b_bh_b_down__FP10b_bh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B31F8-805B31FC 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4532 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4532 = 800.0f;
COMPILER_STRIP_GATE(0x805B31F8, &lit_4532);
#pragma pop

/* 805B31FC-805B3200 0000BC 0004+00 0/2 0/0 0/0 .rodata          @4533 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4533 = 12000.0f;
COMPILER_STRIP_GATE(0x805B31FC, &lit_4533);
#pragma pop

/* 805B060C-805B0B04 00248C 04F8+00 1/1 0/0 0/0 .text            b_bh_start__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void b_bh_start(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/b_bh_start__FP10b_bh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B3200-805B3204 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4593 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4593 = -200.0f;
COMPILER_STRIP_GATE(0x805B3200, &lit_4593);
#pragma pop

/* 805B0B04-805B0D6C 002984 0268+00 1/1 0/0 0/0 .text            kuki_control1__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void kuki_control1(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/kuki_control1__FP10b_bh_class.s"
}
#pragma pop

/* 805B0D6C-805B0EE0 002BEC 0174+00 1/1 0/0 0/0 .text            kuki_control2__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void kuki_control2(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/kuki_control2__FP10b_bh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B3204-805B3208 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4670 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4670 = 17.0f;
COMPILER_STRIP_GATE(0x805B3204, &lit_4670);
#pragma pop

/* 805B0EE0-805B10AC 002D60 01CC+00 1/1 0/0 0/0 .text            kuki_control3__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void kuki_control3(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/kuki_control3__FP10b_bh_class.s"
}
#pragma pop

/* 805B10AC-805B1254 002F2C 01A8+00 1/1 0/0 0/0 .text            s_b_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_b_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/s_b_sub__FPvPv.s"
}
#pragma pop

/* 805B1254-805B15A8 0030D4 0354+00 1/1 0/0 0/0 .text            damage_check__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void damage_check(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/damage_check__FP10b_bh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B3208-805B320C 0000C8 0004+00 0/1 0/0 0/0 .rodata          @5023 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5023 = -150.0f;
COMPILER_STRIP_GATE(0x805B3208, &lit_5023);
#pragma pop

/* 805B320C-805B3210 0000CC 0004+00 0/1 0/0 0/0 .rodata          @5024 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5024 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x805B320C, &lit_5024);
#pragma pop

/* 805B15A8-805B1F4C 003428 09A4+00 1/1 0/0 0/0 .text            action__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/action__FP10b_bh_class.s"
}
#pragma pop

/* 805B1F4C-805B2110 003DCC 01C4+00 1/1 0/0 0/0 .text            anm_se_set__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_se_set(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/anm_se_set__FP10b_bh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B3210-805B3214 0000D0 0004+00 0/1 0/0 0/0 .rodata          @5330 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5330 = -500.0f;
COMPILER_STRIP_GATE(0x805B3210, &lit_5330);
#pragma pop

/* 805B3214-805B3218 0000D4 0004+00 0/1 0/0 0/0 .rodata          @5331 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5331 = 2.5f;
COMPILER_STRIP_GATE(0x805B3214, &lit_5331);
#pragma pop

/* 805B3218-805B321C 0000D8 0004+00 0/1 0/0 0/0 .rodata          @5332 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5332 = 0x3B03126F;
COMPILER_STRIP_GATE(0x805B3218, &lit_5332);
#pragma pop

/* 805B321C-805B3220 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5333 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5333 = -10.0f;
COMPILER_STRIP_GATE(0x805B321C, &lit_5333);
#pragma pop

/* 805B2110-805B2840 003F90 0730+00 2/1 0/0 0/0 .text            daB_BH_Execute__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_BH_Execute(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/daB_BH_Execute__FP10b_bh_class.s"
}
#pragma pop

/* 805B2840-805B2848 0046C0 0008+00 1/0 0/0 0/0 .text            daB_BH_IsDelete__FP10b_bh_class */
static bool daB_BH_IsDelete(b_bh_class* param_0) {
    return true;
}

/* 805B2848-805B28B0 0046C8 0068+00 1/0 0/0 0/0 .text            daB_BH_Delete__FP10b_bh_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_BH_Delete(b_bh_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/daB_BH_Delete__FP10b_bh_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B3220-805B3224 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5390 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5390 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x805B3220, &lit_5390);
#pragma pop

/* 805B3224-805B3228 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5391 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5391 = 65536.0f;
COMPILER_STRIP_GATE(0x805B3224, &lit_5391);
#pragma pop

/* 805B28B0-805B2AF8 004730 0248+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B3228-805B322C 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5513 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5513 = 65535.0f;
COMPILER_STRIP_GATE(0x805B3228, &lit_5513);
#pragma pop

/* 805B2AF8-805B2F54 004978 045C+00 1/0 0/0 0/0 .text            daB_BH_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_BH_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/daB_BH_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 805B2F54-805B2FC4 004DD4 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 805B2FC4-805B300C 004E44 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 805B300C-805B3054 004E8C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 805B3054-805B3090 004ED4 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm csXyz::~csXyz() {
extern "C" asm void __dt__5csXyzFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/__dt__5csXyzFv.s"
}
#pragma pop

/* 805B3090-805B3094 004F10 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" asm void __ct__5csXyzFv() {
    /* empty function */
}

/* 805B3094-805B3098 004F14 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" asm void __ct__4cXyzFv() {
    /* empty function */
}

/* 805B3098-805B30E0 004F18 0048+00 2/1 0/0 0/0 .text            __dt__12daB_BH_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_BH_HIO_c::~daB_BH_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/__dt__12daB_BH_HIO_cFv.s"
}
#pragma pop

/* 805B30E0-805B311C 004F60 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_b_bh_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_b_bh_cpp() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/__sinit_d_a_b_bh_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x805B30E0, __sinit_d_a_b_bh_cpp);
#pragma pop

/* 805B311C-805B3124 004F9C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_805B311C() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/func_805B311C.s"
}
#pragma pop

/* 805B3124-805B312C 004FA4 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_805B3124() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/d_a_b_bh/func_805B3124.s"
}
#pragma pop

/* ############################################################################################## */
/* 805B341C-805B3420 000074 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_805B341C[4];
#pragma pop

/* 805B3420-805B3424 000078 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_805B3420[4];
#pragma pop

/* 805B3424-805B3428 00007C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_805B3424[4];
#pragma pop

/* 805B3428-805B342C 000080 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_805B3428[4];
#pragma pop

/* 805B342C-805B3430 000084 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805B342C[4];
#pragma pop

/* 805B3430-805B3434 000088 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805B3430[4];
#pragma pop

/* 805B3434-805B3438 00008C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_805B3434[4];
#pragma pop

/* 805B3438-805B343C 000090 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_805B3438[4];
#pragma pop

/* 805B343C-805B3440 000094 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_805B343C[4];
#pragma pop

/* 805B3440-805B3444 000098 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_805B3440[4];
#pragma pop

/* 805B3444-805B3448 00009C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_805B3444[4];
#pragma pop

/* 805B3448-805B344C 0000A0 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_805B3448[4];
#pragma pop

/* 805B344C-805B3450 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_805B344C[4];
#pragma pop

/* 805B3450-805B3454 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805B3450[4];
#pragma pop

/* 805B3454-805B3458 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_805B3454[4];
#pragma pop

/* 805B3458-805B345C 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_805B3458[4];
#pragma pop

/* 805B345C-805B3460 0000B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_805B345C[4];
#pragma pop

/* 805B3460-805B3464 0000B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_805B3460[4];
#pragma pop

/* 805B3464-805B3468 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_805B3464[4];
#pragma pop

/* 805B3468-805B346C 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_805B3468[4];
#pragma pop

/* 805B346C-805B3470 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_805B346C[4];
#pragma pop

/* 805B3470-805B3474 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805B3470[4];
#pragma pop

/* 805B3474-805B3478 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805B3474[4];
#pragma pop

/* 805B3478-805B347C 0000D0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805B3478[4];
#pragma pop

/* 805B347C-805B3480 0000D4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_805B347C[4];
#pragma pop

/* 805B322C-805B322C 0000EC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
