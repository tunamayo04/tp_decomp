/**
 * @file d_a_mg_fshop.cpp
 * 
*/

#include "rel/d/a/d_a_mg_fshop/d_a_mg_fshop.h"
#include "d/bg/d_bg_w.h"
#include "d/kankyo/d_kankyo.h"
#include "f_op/f_op_actor_mng.h"
#include "d/d_timer.h"
#include "dol2asm.h"
#include "f_pc/f_pc_executor.h"
#include "m_Do/m_Do_controller_pad.h"

//
// Forward References:
//

extern "C" static void ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void Reel_CallBack__FP8J3DJointi();
extern "C" static void frog_CallBack__FP8J3DJointi();
extern "C" static void koro2_draw__FP11fshop_class();
extern "C" static void daFshop_Draw__FP11fshop_class();
extern "C" static void lure_set__FP11fshop_class();
extern "C" static void rod_set__FP11fshop_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void s_fish_sub__FPvPv();
extern "C" static void tsubo_set__FP11fshop_class();
extern "C" static void weed_control__FP11fshop_classP9fs_weed_s();
extern "C" static void stage_copy__FP11fshop_classP11fshop_class();
extern "C" static void koro2_mtx_set__FP11fshop_class();
extern "C" static void s_sel_sub__FPvPv();
extern "C" static void s_ball_sub__FPvPv();
extern "C" static void koro2_game__FP11fshop_class();
extern "C" static void ball_wall_check__FP11fshop_class();
extern "C" static void daFshop_Execute__FP11fshop_class();
extern "C" static bool daFshop_IsDelete__FP11fshop_class();
extern "C" static void daFshop_Delete__FP11fshop_class();
extern "C" static void koro2_heapinit__FP10fopAc_ac_c();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void BalluseHeapInit__FP10fopAc_ac_c();
extern "C" static void daFshop_Create__FP10fopAc_ac_c();
extern "C" void __dt__10fs_koro2_sFv();
extern "C" void __ct__10fs_koro2_sFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10fs_tsubo_sFv();
extern "C" void __ct__10fs_tsubo_sFv();
extern "C" void __dt__9fs_weed_sFv();
extern "C" void __ct__9fs_weed_sFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__8fs_rod_sFv();
extern "C" void __ct__8fs_rod_sFv();
extern "C" void __dt__9fs_lure_sFv();
extern "C" void __ct__9fs_lure_sFv();
extern "C" void __sinit_d_a_mg_fshop_cpp();
extern "C" static void func_80870070();
extern "C" static void func_80870078();
extern "C" extern char const* const d_a_mg_fshop__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void init__19mDoExt_3DlineMat0_cFUsUsi();
extern "C" void update__19mDoExt_3DlineMat0_cFifR8_GXColorUsP12dKy_tevstr_c();
extern "C" void update__19mDoExt_3DlineMat0_cFiR8_GXColorP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGd_setSimpleShadow__FP4cXyzffR13cBgS_PolyInfosfP9_GXTexObj();
extern "C" void getEventReg__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void OnWallSort__9dBgS_AcchFv();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dTimer_getRestTimeMs__Fv();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cM_initRnd2__Fiii();
extern "C" void cM_rndF2__Ff();
extern "C" void cM_rndFX2__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxScale__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_14();
extern "C" void _savegpr_17();
extern "C" void _savegpr_18();
extern "C" void _savegpr_19();
extern "C" void _savegpr_20();
extern "C" void _savegpr_21();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_14();
extern "C" void _restgpr_17();
extern "C" void _restgpr_18();
extern "C" void _restgpr_19();
extern "C" void _restgpr_20();
extern "C" void _restgpr_21();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19mDoExt_3DlineMat0_c[5];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" void __register_global_object();

//
// Declarations:
//

/* 8086C06C-8086C08C 0000EC 0020+00 1/1 0/0 0/0 .text
 * ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c            */
static void ride_call_back(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    if (param_2->field_0x567 == 0) {
        param_2->field_0x567 = 1;
        ((fshop_class*)param_2)->field_0x428c = 0;
    }
}

/* 8086C08C-8086C140 00010C 00B4+00 1/1 0/0 0/0 .text            Reel_CallBack__FP8J3DJointi */
static int Reel_CallBack(J3DJoint* param_0, int param_1) {
    if (param_1 == 0) {
        u16 uVar1 = param_0->getJntNo();
        J3DModel* model = j3dSys.getModel();
        s32 iVar2 = model->getUserArea();
        MTXCopy(model->getAnmMtx(uVar1), (MtxP)calc_mtx);
        cMtx_XrotM((MtxP)calc_mtx, (int)*(short*)(iVar2 + 0x58));
        model->setAnmMtx(uVar1, (MtxP)calc_mtx);
        PSMTXCopy((MtxP)calc_mtx, (MtxP) J3DSys::mCurrentMtx);
    }
    return 1;
}

/* ############################################################################################## */
/* 80870094-80870098 000000 0004+00 13/13 0/0 0/0 .rodata          @3829 */
SECTION_RODATA static f32 const lit_3829 = 2.0f;
COMPILER_STRIP_GATE(0x80870094, &lit_3829);

/* 80870098-8087009C 000004 0004+00 0/7 0/0 0/0 .rodata          @3830 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3830 = 1.0f;
COMPILER_STRIP_GATE(0x80870098, &lit_3830);
#pragma pop

/* 8087009C-808700A0 000008 0004+00 0/2 0/0 0/0 .rodata          @3831 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3831 = 1.5f;
COMPILER_STRIP_GATE(0x8087009C, &lit_3831);
#pragma pop

/* 8086C140-8086C214 0001C0 00D4+00 1/1 0/0 0/0 .text            frog_CallBack__FP8J3DJointi */
// Matches with literals
#ifdef NONMATCHING
static int frog_CallBack(J3DJoint* param_0, int param_1) {
    if (param_1 == 0) {
        s32 sVar2 = param_0->getJntNo();
        J3DModel* model = j3dSys.getModel();
        model->getUserArea();
        if (sVar2 == 1) {
            MtxP uVar1 = model->getAnmMtx(sVar2);
            MTXCopy(uVar1, (MtxP)calc_mtx);
            cMtx_YrotM((MtxP)calc_mtx, -8800);
            MtxScale(2.0f, 1.0f, 1.5f, 1);
            model->setAnmMtx(sVar2, (MtxP)calc_mtx);
            MTXCopy((MtxP)calc_mtx, (MtxP)J3DSys::mCurrentMtx);
        }
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int frog_CallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/frog_CallBack__FP8J3DJointi.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 808700A0-808700A4 00000C 0004+00 2/3 0/0 0/0 .rodata          @3871 */
SECTION_RODATA static f32 const lit_3871 = 5.0f;
COMPILER_STRIP_GATE(0x808700A0, &lit_3871);

/* 80870958-8087095C 000008 0001+03 2/2 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8087095C-80870960 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80870960-80870964 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80870964-80870968 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80870968-8087096C 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 8087096C-80870970 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80870970-80870974 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80870974-80870978 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80870978-8087097C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 8087097C-80870980 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80870980-80870984 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80870984-80870988 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80870988-8087098C 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 8087098C-80870990 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80870990-80870994 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80870994-80870998 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80870998-808709A4 000048 000C+00 0/1 0/0 0/0 .bss             @3770 */
#pragma push
#pragma force_active on
static u8 lit_3770[12];
#pragma pop

/* 808709A4-808709B0 000054 000C+00 2/3 0/0 0/0 .bss             BallStartPos */
static Vec BallStartPos;

/* 808709B0-808709BC 000060 000C+00 0/1 0/0 0/0 .bss             @3771 */
#pragma push
#pragma force_active on
static u8 lit_3771[12];
#pragma pop

/* 808709BC-808709C8 00006C 000C+00 2/3 0/0 0/0 .bss             BallEndPos */
static Vec BallEndPos;

/* 808709C8-808709CC 000078 0004+00 2/3 0/0 0/0 .bss             ArcIX_A_crwaku_model */
static J3DModel* ArcIX_A_crwaku_model[1];

/* 8086C214-8086C310 000294 00FC+00 1/1 0/0 0/0 .text            koro2_draw__FP11fshop_class */
// Matches with literals
#ifdef NONMATCHING
static void koro2_draw(fshop_class* param_1) {

    if (param_1->scale.x > 5.0f) {
        dComIfGd_setListBG();
    }
    g_env_light.setLightTevColorType_MAJI(ArcIX_A_crwaku_model[0], &param_1->tevStr);
    mDoExt_modelUpdateDL(ArcIX_A_crwaku_model[0]);
    for (s32 iVar1 = 0; iVar1 < (s32)ARRAY_SIZE(param_1->mKoro2); iVar1++) {
        if (param_1->mKoro2[iVar1].mpModel != NULL) {
            g_env_light.setLightTevColorType_MAJI(param_1->mKoro2[iVar1].mpModel, &param_1->tevStr);
            mDoExt_modelUpdateDL(param_1->mKoro2[iVar1].mpModel);
        }
    }
    dComIfGd_setList();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void koro2_draw(fshop_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/koro2_draw__FP11fshop_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 808709CC-808709D0 00007C 0004+00 1/1 0/0 0/0 .bss             ArcIX_A_crstart_model */
extern J3DModel* ArcIX_A_crstart_model[1];

/* 808709D0-808709D4 000080 0004+00 1/1 0/0 0/0 .bss             ArcIX_A_crgoal_model */
extern J3DModel* ArcIX_A_crgoal_model[1];

/* 808709D4-80870A50 000084 007C+00 1/1 0/0 0/0 .bss             ArcIX_A_crbox_model */
extern J3DModel* ArcIX_A_crbox_model[31];

/* 80870A50-80870A90 000100 0040+00 1/1 0/0 0/0 .bss             ArcIX_A_crcurve_a_model */
extern J3DModel* ArcIX_A_crcurve_a_model[16];

/* 80870A90-80870AA0 000140 0010+00 1/1 0/0 0/0 .bss             ArcIX_A_crcurve_b_model */
extern J3DModel* ArcIX_A_crcurve_b_model[4];

/* 80870AA0-80870AC0 000150 0020+00 1/1 0/0 0/0 .bss             ArcIX_A_crsaka_model */
extern J3DModel* ArcIX_A_crsaka_model[8];

/* 808700A4-808700A8 000010 0004+00 0/1 0/0 0/0 .rodata          @3977 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3977 = 66.6f;
COMPILER_STRIP_GATE(0x808700A4, &lit_3977);
#pragma pop

/* 808700A8-808700AC 000014 0004+00 0/2 0/0 0/0 .rodata          @3978 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3978 = 1200.0f;
COMPILER_STRIP_GATE(0x808700A8, &lit_3978);
#pragma pop

/* 808700AC-808700B0 000018 0004+00 0/2 0/0 0/0 .rodata          @3979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3979 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x808700AC, &lit_3979);
#pragma pop

/* 808700B0-808700B4 00001C 0004+00 1/11 0/0 0/0 .rodata          @3980 */
SECTION_RODATA static u8 const lit_3980[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x808700B0, &lit_3980);

/* 80870284-80870290 000000 000C+00 3/3 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80870290-808702A4 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 808702A4-8087032C 000020 0087+01 1/1 0/0 0/0 .data            koro2_map_LV1 */
SECTION_DATA static u8 koro2_map_LV1[135 + 1 /* padding */] = {
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
    0x00,
    0x00,
    0x00,
    0x07,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x05,
    0x01,
    0x01,
    0x02,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x03,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x04,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x05,
    0x01,
    0x01,
    0x02,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x06,
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
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
};

/* 8087032C-808703B4 0000A8 0087+01 1/0 0/0 0/0 .data            koro2_map_LV2 */
SECTION_DATA static u8 koro2_map_LV2[135 + 1 /* padding */] = {
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
    0x00,
    0x00,
    0x00,
    0x07,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x05,
    0x01,
    0x01,
    0x02,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x03,
    0x01,
    0x02,
    0x00,
    0x03,
    0x01,
    0x04,
    0x00,
    0x00,
    0x01,
    0x00,
    0x05,
    0x01,
    0x04,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x05,
    0x01,
    0x01,
    0x02,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x06,
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
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
};

/* 808703B4-8087043C 000130 0087+01 1/0 0/0 0/0 .data            koro2_map_LV3 */
SECTION_DATA static u8 koro2_map_LV3[135 + 1 /* padding */] = {
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
    0x00,
    0x00,
    0x00,
    0x07,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x05,
    0x01,
    0x01,
    0x02,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x03,
    0x01,
    0x02,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x05,
    0x01,
    0x01,
    0x01,
    0x04,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x03,
    0x01,
    0x01,
    0x02,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x05,
    0x01,
    0x01,
    0x04,
    0x00,
    0x00,
    0x06,
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
    0x00,
};

/* 8087043C-808704C4 0001B8 0087+01 1/0 0/0 0/0 .data            koro2_map_LV4 */
SECTION_DATA static u8 koro2_map_LV4[135 + 1 /* padding */] = {
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
    0x07,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x03,
    0x01,
    0x02,
    0x00,
    0x00,
    0x00,
    0x00,
    0x05,
    0x01,
    0x04,
    0x00,
    0x05,
    0x01,
    0x02,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x03,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x04,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x05,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x02,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x03,
    0x01,
    0x01,
    0x01,
    0x01,
    0x01,
    0x04,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x03,
    0x01,
    0x01,
    0x02,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x05,
    0x01,
    0x01,
    0x04,
    0x00,
    0x00,
    0x06,
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
    0x00,
};

/* 808704C4-8087054C 000240 0087+01 1/0 0/0 0/0 .data            koro2_map_LV5 */
SECTION_DATA static u8 koro2_map_LV5[135 + 1 /* padding */] = {
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
    0x07,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x09,
    0x00,
    0x00,
    0x08,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x0C,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0B,
    0x00,
    0x00,
    0x0A,
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
    0x00,
    0x0D,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x06,
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
    0x00,
};

/* 8087054C-808705D4 0002C8 0087+01 1/0 0/0 0/0 .data            koro2_map_LV7 */
SECTION_DATA static u8 koro2_map_LV7[135 + 1 /* padding */] = {
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
    0x07,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x05,
    0x0E,
    0x00,
    0x00,
    0x0F,
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
    0x08,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0C,
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
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0D,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x06,
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
    0x00,
};

/* 808705D4-8087065C 000350 0087+01 1/0 0/0 0/0 .data            koro2_map_LV6 */
SECTION_DATA static u8 koro2_map_LV6[135 + 1 /* padding */] = {
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
    0x00,
    0x00,
    0x00,
    0x07,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x03,
    0x04,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x03,
    0x01,
    0x04,
    0x00,
    0x03,
    0x01,
    0x02,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x01,
    0x00,
    0x00,
    0x01,
    0x00,
    0x03,
    0x01,
    0x04,
    0x00,
    0x0C,
    0x00,
    0x00,
    0x01,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x05,
    0x01,
    0x04,
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
    0x00,
    0x00,
    0x0D,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x06,
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
    0x00,
};

/* 8087065C-808706E4 0003D8 0087+01 1/0 0/0 0/0 .data            koro2_map_LV8 */
SECTION_DATA static u8 koro2_map_LV8[15][9] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x05, 0x0E, 0x00, 0x00, 0x0F, 0x02, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00},
    {0x00, 0x03, 0x01, 0x01, 0x02, 0x00, 0x00, 0x01, 0x00},
    {0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00},
    {0x00, 0x0C, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x0C, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x0D, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x0D, 0x00},
    {0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00},
    {0x00, 0x06, 0x00, 0x00, 0x05, 0x01, 0x01, 0x04, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
};

/* 808706E4-80870704 -00001 0020+00 0/1 0/0 0/0 .data            koro2_map_d */
#pragma push
#pragma force_active on
SECTION_DATA static void* koro2_map_d[8] = {
    (void*)&koro2_map_LV1, (void*)&koro2_map_LV2, (void*)&koro2_map_LV3, (void*)&koro2_map_LV4,
    (void*)&koro2_map_LV5, (void*)&koro2_map_LV6, (void*)&koro2_map_LV7, (void*)&koro2_map_LV8,
};
#pragma pop

/* 80870704-8087071C -00001 0018+00 0/1 0/0 0/0 .data            koro2_union_model */
#pragma push
#pragma force_active on
SECTION_DATA static void* koro2_union_model[6] = {
    (void*)&ArcIX_A_crstart_model,   (void*)&ArcIX_A_crgoal_model,    (void*)&ArcIX_A_crbox_model,
    (void*)&ArcIX_A_crcurve_a_model, (void*)&ArcIX_A_crcurve_b_model, (void*)&ArcIX_A_crsaka_model,
};
#pragma pop

/* 8087071C-80870728 000498 000C+00 1/1 0/0 0/0 .data            rod_color$3900 */
SECTION_DATA static GXColor rod_color[3] = {
    {0x96, 0x50, 0x14, 0xFF}, {0x64, 0x96, 0x14, 0xFF}, {0x96, 0x14, 0x14, 0xFF},
};

/* 80870728-8087072C 0004A4 0004+00 1/1 0/0 0/0 .data            l_color$3912 */
SECTION_DATA static GXColor l_color = {
    0x32,
    0x64,
    0x1E,
    0xFF,
};

/* 808709CC-808709D0 00007C 0004+00 1/1 0/0 0/0 .bss             ArcIX_A_crstart_model */
static J3DModel* ArcIX_A_crstart_model[1];

/* 808709D0-808709D4 000080 0004+00 1/1 0/0 0/0 .bss             ArcIX_A_crgoal_model */
static J3DModel* ArcIX_A_crgoal_model[1];

/* 808709D4-80870A50 000084 007C+00 1/1 0/0 0/0 .bss             ArcIX_A_crbox_model */
static J3DModel* ArcIX_A_crbox_model[31];

/* 80870A50-80870A90 000100 0040+00 1/1 0/0 0/0 .bss             ArcIX_A_crcurve_a_model */
static J3DModel* ArcIX_A_crcurve_a_model[16];

/* 80870A90-80870AA0 000140 0010+00 1/1 0/0 0/0 .bss             ArcIX_A_crcurve_b_model */
static J3DModel* ArcIX_A_crcurve_b_model[4];

/* 80870AA0-80870AC0 000150 0020+00 1/1 0/0 0/0 .bss             ArcIX_A_crsaka_model */
static J3DModel* ArcIX_A_crsaka_model[8];

/* 8086C310-8086C6E4 000390 03D4+00 1/0 0/0 0/0 .text            daFshop_Draw__FP11fshop_class */
// regalloc
#ifdef NONMATCHING
static int daFshop_Draw(fshop_class* param_0) {
    g_env_light.settingTevStruct(0x10, &param_0->current.pos, &param_0->tevStr);

    if (param_0->field_0x4070 != NULL) {
        g_env_light.setLightTevColorType_MAJI(param_0->field_0x4070, &param_0->tevStr);
        param_0->field_0x4070->getModelData()->getMaterialNodePointer(0)->getTevKColor(1)->r = 0;
        mDoExt_modelUpdateDL(param_0->field_0x4070);
        dComIfGd_setSimpleShadow(
            &param_0->current.pos, param_0->field_0x40b4.GetGroundH(), 66.6f * param_0->scale.x,
            param_0->field_0x40b4.m_gnd, 0, 1.0f, dDlst_shadowControl_c::getSimpleTex());
       return 1;
    }
    
    if (param_0->field_0x400e != 0) {
        if (param_0->field_0x400d == 0) {
            koro2_draw(param_0);
            param_0->field_0x400d = 1;
        }
        return 1;
    }
    
    int cVar11 = fopAcM_GetRoomNo(param_0);
    camera_class* camera = dComIfGp_getCamera(0);
    
    for (int iVar12 = 0; iVar12 < 48; iVar12++) {
        f32 fVar4 = param_0->mLure[iVar12].field_0x00.x - camera->mLookat.mEye.x;
        f32 fVar5 = param_0->mLure[iVar12].field_0x00.z - camera->mLookat.mEye.z;
        if (fVar4 * fVar4 + fVar5 * fVar5 > 1200.0f) {
            g_env_light.setLightTevColorType_MAJI(param_0->mLure[iVar12].field_0x14, &param_0->tevStr);
            mDoExt_modelUpdateDL(param_0->mLure[iVar12].field_0x14);
            if (param_0->mLure[iVar12].field_0x24 != 3) {
                for (int local_50 = 0; local_50 < 2; local_50++) {
                    dComIfGp_entrySimpleModel(param_0->mLure[iVar12].field_0x18[local_50], cVar11);
                }
            }
        }
    }

    for (int iVar9 = 0; iVar9 < 3; iVar9++) {
        g_env_light.setLightTevColorType_MAJI(param_0->mRod[iVar9].field_0x14, &param_0->tevStr);
        mDoExt_modelUpdateDL(param_0->mRod[iVar9].field_0x14);
        param_0->mRod[iVar9].line_mat.update(8, rod_color[iVar9], &param_0->tevStr);
        dComIfGd_set3DlineMat(&param_0->mRod[iVar9].line_mat);
        for (int local_54 = 0; local_54 < 6; local_54++) {
            dComIfGp_entrySimpleModel(param_0->mRod[iVar9].field_0x18[local_54], cVar11);
        }
    }
    for (int local_58 = 0; local_58 < 2; local_58++) {
        g_env_light.setLightTevColorType_MAJI(param_0->mTsubo[local_58].field_0x14, &param_0->tevStr);
        mDoExt_modelUpdateDL(param_0->mTsubo[local_58].field_0x14);
    }

    param_0->field_0x3f88.update(0xf, 1.2f, l_color, 2, &param_0->tevStr);
    dComIfGd_set3DlineMat(&param_0->field_0x3f88);
    g_env_light.setLightTevColorType_MAJI(param_0->field_0x6b30, &param_0->tevStr);
    mDoExt_modelUpdateDL(param_0->field_0x6b30);
    g_env_light.setLightTevColorType_MAJI(param_0->field_0x3ff4, &param_0->tevStr);
    mDoExt_modelUpdateDL(param_0->field_0x3ff4);
    if (param_0->field_0x4004 != NULL) {
        mDoMtx_stack_c::transS(0.0f, 0.0f, 0.0f);
        MtxP pfVar10 = mDoMtx_stack_c::get();
        param_0->field_0x4004->setBaseTRMtx(pfVar10);
        g_env_light.setLightTevColorType_MAJI(param_0->field_0x4004, &param_0->tevStr);
        mDoExt_modelUpdateDL(param_0->field_0x4004);
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daFshop_Draw(fshop_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/daFshop_Draw__FP11fshop_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 808700B4-808700B8 000020 0004+00 0/5 0/0 0/0 .rodata          @4049 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4049 = 65536.0f;
COMPILER_STRIP_GATE(0x808700B4, &lit_4049);
#pragma pop

/* 808700B8-808700BC 000024 0004+00 0/1 0/0 0/0 .rodata          @4050 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4050 = 500.0f;
COMPILER_STRIP_GATE(0x808700B8, &lit_4050);
#pragma pop

/* 808700BC-808700C0 000028 0004+00 0/1 0/0 0/0 .rodata          @4051 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4051 = 1000.0f;
COMPILER_STRIP_GATE(0x808700BC, &lit_4051);
#pragma pop

/* 808700C0-808700C4 00002C 0004+00 0/3 0/0 0/0 .rodata          @4052 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4052 = 40.0f;
COMPILER_STRIP_GATE(0x808700C0, &lit_4052);
#pragma pop

/* 808700C4-808700C8 000030 0004+00 0/2 0/0 0/0 .rodata          @4053 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4053 = 25.0f;
COMPILER_STRIP_GATE(0x808700C4, &lit_4053);
#pragma pop

/* 808700C8-808700CC 000034 0004+00 0/2 0/0 0/0 .rodata          @4054 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4054 = 13.0f;
COMPILER_STRIP_GATE(0x808700C8, &lit_4054);
#pragma pop

/* 808700CC-808700D0 000038 0004+00 0/1 0/0 0/0 .rodata          @4055 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4055 = 12.0f;
COMPILER_STRIP_GATE(0x808700CC, &lit_4055);
#pragma pop

/* 8087072C-80870738 0004A8 000C+00 0/0 0/0 0/0 .data            lure_scale */
#pragma push
#pragma force_active on
SECTION_DATA static f32 lure_scale[3] = {
    0.75f, 0.75f, 0.6f,
};
#pragma pop

/* 80870738-80870744 0004B4 000C+00 0/0 0/0 0/0 .data            lure_eye_off */
#pragma push
#pragma force_active on
SECTION_DATA static f32 lure_eye_off[3] = {
    17.0f, 11.0f, 16.5f,
};
#pragma pop

/* 80870744-80870750 0004C0 000C+00 0/1 0/0 0/0 .data            hook_1_offy */
#pragma push
#pragma force_active on
SECTION_DATA static f32 hook_1_offy[3] = {
    -3.5f, -3.5f, -5.0f,
};
#pragma pop

/* 80870750-8087075C 0004CC 000C+00 0/1 0/0 0/0 .data            hook_2_offz */
#pragma push
#pragma force_active on
SECTION_DATA static f32 hook_2_offz[3] = {
    -19.0f, -16.0f, -21.0f,
};
#pragma pop

/* 8087075C-80870768 0004D8 000C+00 0/1 0/0 0/0 .data            hook_2_offy */
#pragma push
#pragma force_active on
SECTION_DATA static f32 hook_2_offy[3] = {
    -1.0f, 0.0f, 0.0f,
};
#pragma pop

/* 80870768-80870774 0004E4 000C+00 0/1 0/0 0/0 .data            lure_ofy$3993 */
#pragma push
#pragma force_active on
SECTION_DATA static f32 lure_ofy[3] = {
    -12.0f, -10.0f, -14.0f,
};
#pragma pop

/* 8086C6E4-8086C9D0 000764 02EC+00 1/1 0/0 0/0 .text            lure_set__FP11fshop_class */
// Matches with literals
#ifdef NONMATCHING
static void lure_set(fshop_class* param_0) {
    fs_lure_s* pLure = param_0->mLure;
    for (int i = 0; i < 48; i++, pLure++) {
        if (daPy_getPlayerActorClass()->checkFrontRollCrash()) {
            pLure->field_0x34 = cM_rndF(65536.0f);
            pLure->field_0x36 = cM_rndF(65536.0f);
            pLure->field_0x38 = cM_rndF(1000.0f) + 500.0f;
            pLure->field_0x3c = cM_rndF(1000.0f) + 500.0f;
        }
        pLure->field_0x34 += 4000;
        pLure->field_0x36 += 4000;
        pLure->field_0x32 = pLure->field_0x3c * cM_ssin(pLure->field_0x36);
        pLure->field_0x30 = pLure->field_0x38 * cM_ssin(pLure->field_0x34);
        cLib_addCalc0(&pLure->field_0x3c, 1.0f, 40.0f);
        cLib_addCalc0(&pLure->field_0x38, 1.0f, 40.0f);
        f32 fVar1 = 0.0f;
        f32 fVar2;
        if (pLure->field_0x24 != 3) {
            fVar2 = 25.0f;
            fVar1 = 13.0f / pLure->field_0x28 + lure_ofy[pLure->field_0x24];
        } else {
            fVar2 = 12.0f;
        }
        mDoMtx_stack_c::transS(
            pLure->field_0x00.x,
            pLure->field_0x00.y + fVar1,
            pLure->field_0x00.z);
        mDoMtx_stack_c::transM(0.0f, fVar2, 0.0f);
        mDoMtx_stack_c::ZrotM(pLure->field_0x32);
        mDoMtx_stack_c::XrotM(pLure->field_0x30);
        mDoMtx_stack_c::transM(0.0f, -fVar2, 0.0f);
        mDoMtx_stack_c::YrotM(pLure->field_0x0e);
        mDoMtx_stack_c::XrotM(pLure->field_0x0c);
        mDoMtx_stack_c::ZrotM(pLure->field_0x10);
        mDoMtx_stack_c::scaleM(pLure->field_0x2c, pLure->field_0x2c, pLure->field_0x28);
        mDoMtx_stack_c::transM(0.0f, 0.0f, 0.0f);
        pLure->field_0x14->setBaseTRMtx(mDoMtx_stack_c::get());
        if (pLure->field_0x24 != 3) {
            mDoMtx_stack_c::push();
            mDoMtx_stack_c::transM(0.0f, hook_1_offy[pLure->field_0x24], 1.0f);
            mDoMtx_stack_c::XrotM(-10000);
            pLure->field_0x18[0]->setBaseTRMtx(mDoMtx_stack_c::get());
            mDoMtx_stack_c::pop();
            mDoMtx_stack_c::transM(0.0f, hook_2_offy[pLure->field_0x24],
                                   hook_2_offz[pLure->field_0x24]);
            mDoMtx_stack_c::XrotM(0x4000);
            pLure->field_0x18[1]->setBaseTRMtx(mDoMtx_stack_c::get());
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void lure_set(fshop_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/lure_set__FP11fshop_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 808700D0-808700D4 00003C 0004+00 0/2 0/0 0/0 .rodata          @4164 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4164 = 15.0f;
COMPILER_STRIP_GATE(0x808700D0, &lit_4164);
#pragma pop

/* 808700D4-808700D8 000040 0004+00 0/2 0/0 0/0 .rodata          @4165 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4165 = -4.0f / 5.0f;
COMPILER_STRIP_GATE(0x808700D4, &lit_4165);
#pragma pop

/* 808700D8-808700DC 000044 0004+00 0/2 0/0 0/0 .rodata          @4166 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4166 = 4.0f;
COMPILER_STRIP_GATE(0x808700D8, &lit_4166);
#pragma pop

/* 80870774-8087078C 0004F0 0018+00 1/1 0/0 0/0 .data            guide_p$4084 */
SECTION_DATA static f32 guide_p[6] = {
    0.0f, 0.1f, 0.22f,
    0.36f, 0.52f, 0.7f,
};

/* 8087078C-808707A4 000508 0018+00 1/1 0/0 0/0 .data            guide_s$4085 */
SECTION_DATA static f32 guide_s[6] = {
    0.5f, 0.5f, 0.55f,
    0.6f, 0.65f, 0.8f,
};

/* 8086C9D0-8086CC30 000A50 0260+00 1/1 0/0 0/0 .text            rod_set__FP11fshop_class */
// Matches with literals
#ifdef NONMATCHING
static void rod_set(fshop_class* param_0) {
    fs_rod_s* pRod = param_0->mRod;
    for (s32 i = 0; i < 3; i++, pRod++) {
        mDoMtx_stack_c::transS(pRod->field_0x00.x, pRod->field_0x00.y, pRod->field_0x00.z);
        if (i == 0) {
            mDoMtx_stack_c::YrotM(-12000.0f);
        } else if (i == 1) {
            mDoMtx_stack_c::YrotM(-9000.0f);
        } else {
            mDoMtx_stack_c::YrotM(-16000.0f);
        }
        mDoMtx_stack_c::XrotM(1300);
        mDoMtx_stack_c::YrotM(0);
        pRod->field_0x14->setBaseTRMtx(mDoMtx_stack_c::get());
        cXyz* local_64 = pRod->line_mat.getPos(0);
        if (pRod->field_0x4c == 0) {
            mDoMtx_stack_c::transM(0.0f, 15.0f, 0.0f);
        } else {
            mDoMtx_stack_c::transM(0.0f, 15.0f, -0.8f);
        }

        cXyz cStack_1c;
        cXyz cStack_28;
        cXyz local_34;
        for (s32 local_68 = 0; local_68 < 8; local_68++) {
            mDoMtx_stack_c::multVecZero(local_64);
            if (local_68 == 0) {
                cStack_1c = *local_64;
            } else if (local_68 == 7) {
                cStack_28 = *local_64;
            }
            mDoMtx_stack_c::transM(0.0f, pRod->field_0x54, 0.0f);
            local_64++;
        }

        for (s32 local_6c = 0; local_6c < 6; local_6c++) {
            cXyz local_34 = cStack_28 + (cStack_1c - cStack_28) * guide_p[local_6c];
            mDoMtx_stack_c::transS(local_34.x, local_34.y, local_34.z);
            mDoMtx_stack_c::scaleM(guide_s[local_6c], guide_s[local_6c], guide_s[local_6c]);
            mDoMtx_stack_c::transM(0.0f, 4.0f, 0.0f);
            mDoMtx_stack_c::YrotM(0x4000);
            pRod->field_0x18[local_6c]->setBaseTRMtx(mDoMtx_stack_c::get());
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void rod_set(fshop_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/rod_set__FP11fshop_class.s"
}
#pragma pop
#endif

/* 8086CC30-8086CC6C 000CB0 003C+00 3/3 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 808700DC-808700E0 000048 0004+00 0/3 0/0 0/0 .rodata          @4190 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4190 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x808700DC, &lit_4190);
#pragma pop

/* 808700E0-808700E4 00004C 0004+00 0/1 0/0 0/0 .rodata          @4191 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4191 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x808700E0, &lit_4191);
#pragma pop

/* 808700E4-808700E8 000050 0004+00 0/1 0/0 0/0 .rodata          @4192 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4192 = 60.0f;
COMPILER_STRIP_GATE(0x808700E4, &lit_4192);
#pragma pop

/* 808700E8-808700EC 000054 0004+00 0/1 0/0 0/0 .rodata          @4193 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4193 = 35.0f;
COMPILER_STRIP_GATE(0x808700E8, &lit_4193);
#pragma pop

/* 808700EC-808700F0 000058 0004+00 0/3 0/0 0/0 .rodata          @4194 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4194 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x808700EC, &lit_4194);
#pragma pop

/* 8086CC6C-8086CD70 000CEC 0104+00 1/1 0/0 0/0 .text            s_fish_sub__FPvPv */
// Matches with literals
#ifdef NONMATCHING
static void* s_fish_sub(void* param_1, void* param_2) {
    fopAc_ac_c* actor = (fopAc_ac_c*)param_1;
    fs_weed_s* weed = (fs_weed_s*)param_2;
    if (fopAcM_IsActor(param_1) && fopAcM_GetName(param_1) == PROC_MG_FISH && actor->speedF > 0.1f) {
        f32 dVar9 = actor->current.pos.x - weed->field_0x00[0].x;
        f32 dVar8 = actor->current.pos.y - weed->field_0x00[0].y;
        f32 dVar10 = actor->current.pos.z - weed->field_0x00[0].z;
        f32 dVar3 = ((f32*)actor)[0x16F];
        if (dVar3 > 0.7f) {
            dVar3 = 0.7f;
        }
        if (fabsf(dVar8) < 60.0f * weed->field_0xb4 &&
            JMAFastSqrt(((dVar9 * dVar9) + (dVar10 * dVar10))) < dVar3 * 35.0f){
            cLib_addCalc2(&weed->field_0xb8, dVar3, 0.1f, 0.05f);
            return (fopAc_ac_c*)param_1;
        }
    }

    return NULL;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void* s_fish_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/s_fish_sub__FPvPv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 808700F0-808700F4 00005C 0004+00 0/2 0/0 0/0 .rodata          @4248 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4248 = 150.0f;
COMPILER_STRIP_GATE(0x808700F0, &lit_4248);
#pragma pop

/* 808700F4-808700F8 000060 0004+00 0/1 0/0 0/0 .rodata          @4249 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4249 = 1800.0f;
COMPILER_STRIP_GATE(0x808700F4, &lit_4249);
#pragma pop

/* 808700F8-808700FC 000064 0004+00 0/1 0/0 0/0 .rodata          @4250 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4250 = 50.0f;
COMPILER_STRIP_GATE(0x808700F8, &lit_4250);
#pragma pop

/* 8086CD70-8086CF8C 000DF0 021C+00 1/1 0/0 0/0 .text            tsubo_set__FP11fshop_class */
// Matches with literals
#ifdef NONMATCHING
static void tsubo_set(fshop_class* param_1) {
    fopAc_ac_c* pfVar5 = dComIfGp_getPlayer(0);
    fs_tsubo_s* pTsubo = param_1->mTsubo;
    cXyz local_40;
    s16 xrot;
    s16 zrot;
    for (s32 local_48 = 0; local_48 < 2; local_48++, pTsubo++) {
        local_40.x = pTsubo->field_0x00.x - pfVar5->current.pos.x;
        local_40.z = pTsubo->field_0x00.z - pfVar5->current.pos.z;
        if (daPy_getPlayerActorClass()->checkFrontRollCrash() && 
            JMAFastSqrt((local_40.x * local_40.x + local_40.z * local_40.z)) < 150.0f)
        {
            if (local_48 == 0) {
                pTsubo->field_0x1c = 1200.0f;
                pTsubo->field_0x24 = 0x708;
            } else {
                pTsubo->field_0x1c = 1800.0f;
                pTsubo->field_0x24 = 0xaf0;
            }
            pTsubo->field_0x20 = cM_rndF(65536.0f);
            pTsubo->field_0x22 = cM_rndF(65536.0f);
            fopAc_ac_c* henna = fopAcM_SearchByName(PROC_NPC_HENNA);
            if (henna != NULL) {
                // TODO: include henna header file
                ((u8*)henna)[0x7b5] = 0x3c;
            }
        }
        xrot = cM_ssin(pTsubo->field_0x20) * pTsubo->field_0x1c;
        zrot = cM_ssin(pTsubo->field_0x22) * pTsubo->field_0x1c;
        pTsubo->field_0x20 += pTsubo->field_0x24;
        pTsubo->field_0x22 += pTsubo->field_0x24 + 700;
        cLib_addCalcAngleS2(&pTsubo->field_0x24, 9000, 1, 200);
        mDoMtx_stack_c::transS(pTsubo->field_0x00.x, pTsubo->field_0x00.y, pTsubo->field_0x00.z);
        mDoMtx_stack_c::XrotM(xrot);
        mDoMtx_stack_c::ZrotM(zrot);
        mDoMtx_stack_c::scaleM(1.0f, 1.0f, 1.0f);
        pTsubo->field_0x14->setBaseTRMtx(mDoMtx_stack_c::get());
        cLib_addCalc0(&pTsubo->field_0x1c, 1.0f, 50.0f);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void tsubo_set(fshop_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/tsubo_set__FP11fshop_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 808700FC-80870100 000068 0004+00 0/2 0/0 0/0 .rodata          @4289 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4289 = 0.5f;
COMPILER_STRIP_GATE(0x808700FC, &lit_4289);
#pragma pop

/* 80870100-80870104 00006C 0004+00 0/1 0/0 0/0 .rodata          @4290 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4290 = 200.0f;
COMPILER_STRIP_GATE(0x80870100, &lit_4290);
#pragma pop

/* 80870104-80870108 000070 0004+00 0/2 0/0 0/0 .rodata          @4291 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4291 = 600.0f;
COMPILER_STRIP_GATE(0x80870104, &lit_4291);
#pragma pop

/* 80870108-8087010C 000074 0004+00 0/1 0/0 0/0 .rodata          @4292 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4292 = 0.02f;
COMPILER_STRIP_GATE(0x80870108, &lit_4292);
#pragma pop

/* 8087010C-80870110 000078 0004+00 0/1 0/0 0/0 .rodata          @4293 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4293 = 3.0f;
COMPILER_STRIP_GATE(0x8087010C, &lit_4293);
#pragma pop

/* 8086CF8C-8086D1A0 00100C 0214+00 1/1 0/0 0/0 .text weed_control__FP11fshop_classP9fs_weed_s */
// Matches with literals
#ifdef NONMATCHING
static void weed_control(fshop_class* param_1, fs_weed_s* param_2) {
    int iVar6;
    cXyz local_84;
    cXyz local_90;
    cXyz* pfVar7 = param_2->field_0x00 + 1;
    local_84.x = 0.0f;
    local_84.y = 0.0f;
    local_84.z = param_2->field_0xb4 * 5.0f;
    f32 dVar11 = param_2->field_0xb8 + 0.5f;
    param_2->field_0xbc += (s16)(param_2->field_0xb8 * 600.0f + 200.0f);
    cLib_addCalc0(&param_2->field_0xb8, 0.05f, 0.02f);
    for (iVar6 = 1; iVar6 < 0xf; iVar6++, pfVar7++) {
        f32 dVar10 = dVar11 * cM_ssin(param_2->field_0xbc + iVar6 * -5000);
        f32 dVar8 = cM_ssin(param_2->field_0xbc + iVar6 * -5500);
        f32 dVar4 = dVar10 + (pfVar7[0].x - pfVar7[0 - 1].x);
        f32 dVar12 = (pfVar7[0].y - pfVar7[0 - 1].y) + 3.0f;
        f32 dVar6 = dVar11 * dVar8 + (pfVar7[0].z - pfVar7[0 - 1].z);
        mDoMtx_XrotS((MtxP)calc_mtx, -cM_atan2s(dVar12, dVar6));
        mDoMtx_YrotM((MtxP)calc_mtx, (s32)cM_atan2s(dVar4, JMAFastSqrt(dVar12 * dVar12 + dVar6 * dVar6)));
        MtxPosition(&local_84, &local_90);
        pfVar7[0].x = pfVar7[0 - 1].x + local_90.x;
        pfVar7[0].y = pfVar7[0 - 1].y + local_90.y;
        pfVar7[0].z = pfVar7[0 - 1].z + local_90.z;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void weed_control(fshop_class* param_0, fs_weed_s* param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/weed_control__FP11fshop_classP9fs_weed_s.s"
}
#pragma pop
#endif

/* 8086D1A0-8086D1EC 001220 004C+00 1/1 0/0 0/0 .text stage_copy__FP11fshop_classP11fshop_class */
static void stage_copy(fshop_class* param_0, fshop_class* param_1) {
    param_0->field_0x4014 = param_1->field_0x4014;
    param_0->field_0x4020 = param_1->field_0x4020;
    param_0->scale = param_1->scale;
}

/* ############################################################################################## */
/* 80870110-80870114 00007C 0004+00 0/1 0/0 0/0 .rodata          @4376 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4376 = -10000.0f;
COMPILER_STRIP_GATE(0x80870110, &lit_4376);
#pragma pop

/* 80870114-80870118 000080 0004+00 0/1 0/0 0/0 .rodata          @4377 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4377 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80870114, &lit_4377);
#pragma pop

/* 80870118-8087011C 000084 0004+00 0/2 0/0 0/0 .rodata          @4378 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4378 = -10.0f;
COMPILER_STRIP_GATE(0x80870118, &lit_4378);
#pragma pop

/* 8087011C-80870120 000088 0004+00 0/1 0/0 0/0 .rodata          @4379 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4379 = -18.0f;
COMPILER_STRIP_GATE(0x8087011C, &lit_4379);
#pragma pop

/* 80870120-80870124 00008C 0004+00 1/4 0/0 0/0 .rodata          @4380 */
SECTION_RODATA static f32 const lit_4380 = 2.5f;
COMPILER_STRIP_GATE(0x80870120, &lit_4380);

/* 80870124-80870128 000090 0004+00 0/1 0/0 0/0 .rodata          @4381 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4381 = -2.0f;
COMPILER_STRIP_GATE(0x80870124, &lit_4381);
#pragma pop

/* 8086D1EC-8086D48C 00126C 02A0+00 1/1 0/0 0/0 .text            koro2_mtx_set__FP11fshop_class */
// float load order
#ifdef NONMATCHING
static void koro2_mtx_set(fshop_class* param_1) {
    cXyz cStack_44;
    cXyz cStack_50;
    if (param_1->field_0x400d) {
        mDoMtx_stack_c::transS(0.0f, -10000.0f, 0.0f);
        MTXCopy(mDoMtx_stack_c::get(), param_1->field_0x4030);
        param_1->field_0x402c->Move();
        for (int local_58 = 0; local_58 < 100; local_58++) {
            fs_koro2_s* pmVar4 = &param_1->mKoro2[local_58];
            if (param_1->mKoro2[local_58].mpModel != NULL) {
                MTXCopy(mDoMtx_stack_c::get(), param_1->mKoro2[local_58].field_0x04);
                param_1->mKoro2[local_58].mpBgW->Move();
            }
        }
    } else {
        mDoMtx_stack_c::transS(param_1->field_0x4014.x, param_1->field_0x4014.y, param_1->field_0x4014.z);
        mDoMtx_stack_c::YrotM(param_1->field_0x4020.y);
        mDoMtx_stack_c::XrotM(param_1->field_0x4020.x);
        mDoMtx_stack_c::ZrotM(param_1->field_0x4020.z);
        mDoMtx_stack_c::scaleM(param_1->scale.x, param_1->scale.x, param_1->scale.x);
        mDoMtx_stack_c::push();
        mDoMtx_stack_c::scaleM(0.01f, 0.01f, 0.01f);
        param_1->mpA_crwaku_model->setBaseTRMtx(mDoMtx_stack_c::get());
        MTXCopy(mDoMtx_stack_c::get(), param_1->field_0x4030);
        param_1->field_0x402c->Move();
        mDoMtx_stack_c::pop();
        for (int iVar8 = 0; iVar8 < 100; iVar8++) {
            if (param_1->mKoro2[iVar8].mpModel != NULL) {
                mDoMtx_stack_c::push();
                mDoMtx_stack_c::transM(param_1->mKoro2[iVar8].field_0x38.x + -10.0f,
                                       param_1->mKoro2[iVar8].field_0x38.y,
                                       param_1->mKoro2[iVar8].field_0x38.z + -18.0f);
                mDoMtx_stack_c::YrotM(param_1->mKoro2[iVar8].field_0x50);
                mDoMtx_stack_c::scaleM(param_1->mKoro2[iVar8].field_0x44.x,
                                       param_1->mKoro2[iVar8].field_0x44.y,
                                       param_1->mKoro2[iVar8].field_0x44.z);
                mDoMtx_stack_c::push();
                mDoMtx_stack_c::scaleM(0.01f, 0.01f, 0.01f);
                param_1->mKoro2[iVar8].mpModel->setBaseTRMtx(mDoMtx_stack_c::get());
                MTXCopy(mDoMtx_stack_c::get(), param_1->mKoro2[iVar8].field_0x04);
                param_1->mKoro2[iVar8].mpBgW->Move();
                mDoMtx_stack_c::pop();
                mDoMtx_stack_c::multVecZero(&param_1->mKoro2[iVar8].field_0x54);
                if (param_1->mKoro2[iVar8].field_0x34 == 6) {
                    cStack_44.set(0.0f, 0.0f, 2.5f);
                    mDoMtx_stack_c::multVec(&cStack_44, &BallStartPos);
                } else if (param_1->mKoro2[iVar8].field_0x34 == 7) {
                    cStack_44.set(0.0f, 0.0f, -2.0f);
                    mDoMtx_stack_c::multVec(&cStack_44, &BallEndPos);
                }
                mDoMtx_stack_c::pop();
            }
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void koro2_mtx_set(fshop_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/koro2_mtx_set__FP11fshop_class.s"
}
#pragma pop
#endif

/* 8086D48C-8086D500 00150C 0074+00 1/1 0/0 0/0 .text            s_sel_sub__FPvPv */
static void* s_sel_sub(void* param_1, void* param_2) {
    if (fopAcM_IsActor(param_1) && fopAcM_GetName(param_1) == PROC_FSHOP) {
        u8 uVar1 = ((fshop_class*)param_1)->field_0x400e;
        u8 uVar2 = (((fshop_class*)param_2)->field_0x400c & 7) + 1;
        if (uVar1 == uVar2) {
            return param_1;
        }
    }
        
    return NULL;
}

/* 8086D500-8086D55C 001580 005C+00 1/1 0/0 0/0 .text            s_ball_sub__FPvPv */
static void* s_ball_sub(void* param_1, void* param_2) {
    if (fopAcM_IsActor(param_1) && fopAcM_GetName(param_1) == PROC_FSHOP &&
        (u8)fopAcM_GetParam(param_1) == 0x23) {
        return param_1;
    }

    return NULL;
}

/* ############################################################################################## */
/* 80870128-8087012C 000094 0004+00 0/1 0/0 0/0 .rodata          @4459 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4459 = 284.0f;
COMPILER_STRIP_GATE(0x80870128, &lit_4459);
#pragma pop

/* 8087012C-80870130 000098 0004+00 0/1 0/0 0/0 .rodata          @4460 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4460 = 0x42AF999A;
COMPILER_STRIP_GATE(0x8087012C, &lit_4460);
#pragma pop

/* 80870130-80870134 00009C 0004+00 0/1 0/0 0/0 .rodata          @4461 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4461 = 432.0f;
COMPILER_STRIP_GATE(0x80870130, &lit_4461);
#pragma pop

/* 80870134-80870138 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4462 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4462 = 204.0f;
COMPILER_STRIP_GATE(0x80870134, &lit_4462);
#pragma pop

/* 80870138-8087013C 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4463 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4463 = 0xC4A90666;
COMPILER_STRIP_GATE(0x80870138, &lit_4463);
#pragma pop

/* 8087013C-80870140 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4464 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4464 = 430.0f;
COMPILER_STRIP_GATE(0x8087013C, &lit_4464);
#pragma pop

/* 80870140-80870144 0000AC 0004+00 0/2 0/0 0/0 .rodata          @4465 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4465 = 10.0f;
COMPILER_STRIP_GATE(0x80870140, &lit_4465);
#pragma pop

/* 80870144-80870148 0000B0 0004+00 0/2 0/0 0/0 .rodata          @4466 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4466 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80870144, &lit_4466);
#pragma pop

/* 80870148-8087014C 0000B4 0004+00 0/2 0/0 0/0 .rodata          @4467 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4467 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(0x80870148, &lit_4467);
#pragma pop

/* 8087014C-80870150 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4468 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4468 = -3.0f / 20.0f;
COMPILER_STRIP_GATE(0x8087014C, &lit_4468);
#pragma pop

/* 80870150-80870154 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4469 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4469 = -6000.0f;
COMPILER_STRIP_GATE(0x80870150, &lit_4469);
#pragma pop

/* 80870AC0-80870AC4 000170 0004+00 1/1 0/0 0/0 .bss             old_stick_x$4410 */
static u8 old_stick_x[4];

/* 80870AC4-80870AC8 000174 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80870AC4[4];

/* 8086D55C-8086D854 0015DC 02F8+00 1/1 0/0 0/0 .text            koro2_game__FP11fshop_class */
// Matches with literals
#ifdef NONMATCHING
static void koro2_game(fshop_class* i_this) {
    cXyz sp5C;
    cXyz sp68;
    i_this->scale.x = 1.0f;

    switch (i_this->field_0x4010) {
    case 0:
        i_this->field_0x4014.x = 284.0f;
        i_this->field_0x4014.y = 87.8f;
        i_this->field_0x4014.z = 432.0;
        i_this->field_0x4020.z = 0;
        i_this->field_0x4020.x = 0;
        break;
    case 1:
        i_this->field_0x4014.x = 204.0f;
        i_this->field_0x4014.y = -1352.2f;
        i_this->field_0x4014.z = 430.0;
        i_this->field_0x4020.y = -0x4000;

        cLib_addCalcAngleS2(&i_this->field_0x4020.x, 0, 2, 0x200);
        cLib_addCalcAngleS2(&i_this->field_0x4020.z, 0, 2, 0x200);
    case 2:
        i_this->scale.x = 10.0f;
        if (i_this->field_0x4010 == 2) {
            static f32 old_stick_x = 0.0f;

            if ((mDoCPd_c::getSubStickX(PAD_1) >= 0.8f && old_stick_x < 0.8f) ||
                (mDoCPd_c::getSubStickX(PAD_1) <= -0.8f && old_stick_x > -0.8f))
            {
                if (mDoCPd_c::getSubStickX(PAD_1) > 0.0f) {
                    i_this->field_0x4062 += 0x4000;
                } else {
                    i_this->field_0x4062 += -0x4000;
                }
            }

            old_stick_x = mDoCPd_c::getSubStickX(PAD_1);
            cLib_addCalcAngleS2(&i_this->field_0x4060, i_this->field_0x4062, 4, 0x1000);
            mDoMtx_YrotS(*calc_mtx, -i_this->field_0x4060);

            sp5C.x = mDoCPd_c::getStickX3D(PAD_1);
            sp5C.y = 0.0f;
            sp5C.z = mDoCPd_c::getStickY(PAD_1);
            MtxPosition(&sp5C, &sp68);

            f32 var_f2 = sp68.x;
            f32 var_f3 = sp68.z;

            f32 var_f31 = var_f2;;
            if (var_f2 > 0.15f) {
                var_f31-= 0.15f;
            } else if (var_f2 < -0.15f) {
                var_f31 += 0.15f;
            } else {
                var_f31 = 0.0f;
            }

            if (var_f3 > 0.15f) {
                var_f3 -= 0.15f;
            } else if (var_f3 < -0.15f) {
                var_f3 += 0.15f;
            } else {
                var_f3 = 0.0f;
            }

            cLib_addCalcAngleS2(&i_this->field_0x4020.x, var_f3 * -6000.0f, 4, 0x200);
            cLib_addCalcAngleS2(&i_this->field_0x4020.z, var_f31 * -6000.0f, 4, 0x200);
        }
        break;
    }

    i_this->field_0x4008 = (fshop_class*)fpcM_Search(s_sel_sub, i_this);
    if (i_this->field_0x4008 != NULL) {
        stage_copy(i_this->field_0x4008, i_this);
        i_this->field_0x4008->field_0x400d = 0;

        fshop_class* ball_p = (fshop_class*)fpcM_Search(s_ball_sub, i_this);
        if (ball_p != NULL) {
            ball_p->field_0x4008 = i_this->field_0x4008;
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void koro2_game(fshop_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/koro2_game__FP11fshop_class.s"
}
#pragma pop
#endif

/* 8086D854-8086DA00 0018D4 01AC+00 1/1 0/0 0/0 .text            ball_wall_check__FP11fshop_class */
// Matches with literals
#ifdef NONMATCHING
static int ball_wall_check(fshop_class* param_1) {
    if (!param_1->field_0x40b4.ChkWallHit()) {
        return 0;
    }

    fopAc_ac_c* actor = param_1;
    dBgS_LinChk adStack_88;
    cXyz cStack_94;
    cXyz cStack_a0;
    cXyz local_ac;
    local_ac.y = 0.0f;
    cStack_94 = actor->current.pos;
    cStack_94.y +=5.0f;
    for (int iVar1 = 0; iVar1 < 4; iVar1++) {
        static f32 c_x[4] = {14.0f, -14.0f, 0.0f, 0.0f};
        static f32 c_z[4] = {0.0f, 0.0f, 14.0f, -14.0f};
        local_ac.x = c_x[iVar1];
        local_ac.z = c_z[iVar1];
        cStack_a0 = cStack_94 + local_ac;
        adStack_88.Set(&cStack_94, &cStack_a0, actor);
        if (dComIfG_Bgsp().LineCross(&adStack_88)) {
            if ((iVar1 == 0 && actor->speed.x > 0.0f) ||
                (iVar1 == 1 && actor->speed.x < 0.0f))
            {
                actor->speed.x = 0.0f;
            }
            if ((iVar1 == 2 && actor->speed.z > 0.0f) ||
                (iVar1 == 3 && actor->speed.z < 0.0f))
            {
                actor->speed.z = 0.0f;
            }
        }
    }
    return 0;
}
#else
/* ############################################################################################## */
/* 808707A4-808707B4 000520 0010+00 1/1 0/0 0/0 .data            c_x$4477 */
SECTION_DATA static u8 c_x[16] = {
    0x41, 0x60, 0x00, 0x00, 0xC1, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 808707B4-808707C4 000530 0010+00 1/1 0/0 0/0 .data            c_z$4478 */
SECTION_DATA static u8 c_z[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x60, 0x00, 0x00, 0xC1, 0x60, 0x00, 0x00,
};

#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int ball_wall_check(fshop_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/ball_wall_check__FP11fshop_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80870154-80870158 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4838 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4838 = 3.0f / 125.0f;
COMPILER_STRIP_GATE(0x80870154, &lit_4838);
#pragma pop

/* 80870158-8087015C 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4839 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4839 = 0x3E75C290;
COMPILER_STRIP_GATE(0x80870158, &lit_4839);
#pragma pop

/* 8087015C-80870160 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4840 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4840 = 3.5f;
COMPILER_STRIP_GATE(0x8087015C, &lit_4840);
#pragma pop

/* 80870160-80870164 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4841 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4841 = -15.0f;
COMPILER_STRIP_GATE(0x80870160, &lit_4841);
#pragma pop

/* 80870164-8087016C 0000D0 0004+04 0/1 0/0 0/0 .rodata          @4842 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4842[1 + 1 /* padding */] = {
    -2500.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80870164, &lit_4842);
#pragma pop

/* 8087016C-80870174 0000D8 0008+00 0/1 0/0 0/0 .rodata          @4843 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4843[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8087016C, &lit_4843);
#pragma pop

/* 80870174-8087017C 0000E0 0008+00 0/1 0/0 0/0 .rodata          @4844 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4844[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80870174, &lit_4844);
#pragma pop

/* 8087017C-80870184 0000E8 0008+00 0/1 0/0 0/0 .rodata          @4845 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4845[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8087017C, &lit_4845);
#pragma pop

/* 80870184-80870188 0000F0 0004+00 0/1 0/0 0/0 .rodata          @4846 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4846 = 65.0f;
COMPILER_STRIP_GATE(0x80870184, &lit_4846);
#pragma pop

/* 80870188-8087018C 0000F4 0004+00 0/1 0/0 0/0 .rodata          @4847 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4847 = 7.0f;
COMPILER_STRIP_GATE(0x80870188, &lit_4847);
#pragma pop

/* 8087018C-80870190 0000F8 0004+00 0/1 0/0 0/0 .rodata          @4848 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4848 = -5.0f;
COMPILER_STRIP_GATE(0x8087018C, &lit_4848);
#pragma pop

/* 80870190-80870194 0000FC 0004+00 0/2 0/0 0/0 .rodata          @4849 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4849 = 30.0f;
COMPILER_STRIP_GATE(0x80870190, &lit_4849);
#pragma pop

/* 80870194-80870198 000100 0004+00 0/1 0/0 0/0 .rodata          @4850 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4850 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80870194, &lit_4850);
#pragma pop

/* 80870198-8087019C 000104 0004+00 0/1 0/0 0/0 .rodata          @4851 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4851 = 190.0f;
COMPILER_STRIP_GATE(0x80870198, &lit_4851);
#pragma pop

/* 8087019C-808701A0 000108 0004+00 0/2 0/0 0/0 .rodata          @4852 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4852 = -720.0f;
COMPILER_STRIP_GATE(0x8087019C, &lit_4852);
#pragma pop

/* 808701A0-808701A4 00010C 0004+00 0/1 0/0 0/0 .rodata          @4853 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4853 = 70.0f;
COMPILER_STRIP_GATE(0x808701A0, &lit_4853);
#pragma pop

/* 808701A4-808701A8 000110 0004+00 0/2 0/0 0/0 .rodata          @4854 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4854 = -30.0f;
COMPILER_STRIP_GATE(0x808701A4, &lit_4854);
#pragma pop

/* 808701A8-808701AC 000114 0004+00 0/2 0/0 0/0 .rodata          @4855 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4855 = 220.0f;
COMPILER_STRIP_GATE(0x808701A8, &lit_4855);
#pragma pop

/* 808701AC-808701B0 000118 0004+00 0/2 0/0 0/0 .rodata          @4856 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4856 = -450.0f;
COMPILER_STRIP_GATE(0x808701AC, &lit_4856);
#pragma pop

/* 808701B0-808701B4 00011C 0004+00 0/1 0/0 0/0 .rodata          @4857 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4857 = -250.0f;
COMPILER_STRIP_GATE(0x808701B0, &lit_4857);
#pragma pop

/* 808701B4-808701B8 000120 0004+00 0/1 0/0 0/0 .rodata          @4858 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4858 = 325.0f;
COMPILER_STRIP_GATE(0x808701B4, &lit_4858);
#pragma pop

/* 808701B8-808701BC 000124 0004+00 0/1 0/0 0/0 .rodata          @4859 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4859 = 237.0f;
COMPILER_STRIP_GATE(0x808701B8, &lit_4859);
#pragma pop

/* 808701BC-808701C0 000128 0004+00 0/1 0/0 0/0 .rodata          @4860 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4860 = 1300.0f;
COMPILER_STRIP_GATE(0x808701BC, &lit_4860);
#pragma pop

/* 808701C0-808701C4 00012C 0004+00 0/1 0/0 0/0 .rodata          @4861 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4861 = 140.0f;
COMPILER_STRIP_GATE(0x808701C0, &lit_4861);
#pragma pop

/* 808701C4-808701CC 000130 0004+04 0/1 0/0 0/0 .rodata          @4862 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4862[1 + 1 /* padding */] = {
    -7.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x808701C4, &lit_4862);
#pragma pop

/* 808701CC-808701D4 000138 0008+00 1/3 0/0 0/0 .rodata          @4864 */
SECTION_RODATA static u8 const lit_4864[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x808701CC, &lit_4864);

/* 8086DA00-8086E6C4 001A80 0CC4+00 2/1 0/0 0/0 .text            daFshop_Execute__FP11fshop_class */
// Regalloc, instruction order issues
#ifdef NONMATCHING
static int daFshop_Execute(fshop_class* param_1) {
    fopAc_ac_c* pPlayer = dComIfGp_getPlayer(0);
    cXyz local_c0;
    param_1->field_0x0570++;
    if (param_1->field_0x400e != 0) {
        if (param_1->field_0x428d != 0) {
            param_1->field_0x428d--;
        }
        koro2_mtx_set(param_1);
        return;
    }
    if (param_1->field_0x4070 != NULL) {
        param_1->scale.x = 0.024f;
        cXyz local_cc;
        cXyz local_d8;
        BOOL bVar5 = FALSE;
        if (param_1->field_0x428d != 0) {
            param_1->field_0x428d--;
        }
        switch (param_1->field_0x0572) {
        case 0:
            param_1->current.pos = BallStartPos;
            param_1->current.pos.y += 4.0f;
            param_1->old.pos = param_1->current.pos;
            param_1->field_0x428d = 10;
            break;
        case 1:
            param_1->current.pos = BallStartPos;
            param_1->current.pos.y += 4.0f;
            param_1->old.pos = param_1->current.pos;
            param_1->speed.zero();
            param_1->field_0x0572++;
            param_1->field_0x428c = 3;
            param_1->field_0x567 = 0;
            param_1->field_0x428d = 10;
        case 2:
            bVar5 = TRUE;
            param_1->scale.x = 0.24f;
            break;
        }

        if (bVar5) {
            cMtx_YrotS((MtxP)calc_mtx, param_1->field_0x4020.y);
            cMtx_XrotM((MtxP)calc_mtx, param_1->field_0x4020.x);
            cMtx_ZrotM((MtxP)calc_mtx, param_1->field_0x4020.z);
            MtxPosition(&param_1->speed, &param_1->field_0x4064);
            param_1->field_0x4064 = param_1->speed;
            param_1->current.pos += param_1->field_0x4064;
            if (param_1->speed.x != 0.0f || param_1->speed.z != 0.0f) {
                param_1->current.angle.y = cM_atan2s(param_1->speed.x, param_1->speed.z);
            }
            param_1->speed.y -= 3.5f;
            if (param_1->speed.y <= -15.0f) {
                param_1->speed.y = -15.0f;
            }
            param_1->field_0x40b4.m_gnd.OffWall();
            param_1->field_0x40b4.CrrPos(dComIfG_Bgsp());
            ball_wall_check(param_1);
            fshop_class* iVar6 = param_1->field_0x4008;
            for (int local_124 = 0; local_124 < 100; local_124++) {
                if (iVar6->mKoro2[local_124].mpModel != NULL) {
                    local_cc.x = iVar6->mKoro2[local_124].field_0x54.x - param_1->current.pos.x;
                    local_cc.z = iVar6->mKoro2[local_124].field_0x54.z - param_1->current.pos.z;
                    if (JMAFastSqrt(local_cc.x * local_cc.x + local_cc.z * local_cc.z) < 40.0f) {
                        iVar6->mKoro2[local_124].field_0x60 = 0;
                    }
                }
            }
            if (param_1->current.pos.y < -2500.0f) {
                param_1->field_0x567 = 1;
            }
            
            // TODO: include henna npc header
            fopAc_ac_c* iVar9 = fopAcM_SearchByName(PROC_NPC_HENNA);
            if (iVar9 != NULL && ((u8*)iVar9)[0x7b9] != 0 &&
                (param_1->field_0x567 == 1 || dTimer_getRestTimeMs() == 0))
            {
                BOOL bVar5 = FALSE;
                for (int local_130 = 0; local_130 < 100; local_130++) {
                    if (iVar6->mKoro2[local_130].mpModel != NULL && iVar6->mKoro2[local_130].field_0x60) {
                        bVar5 = TRUE;
                        break;
                    }
                }
                if (!bVar5) {
                    iVar9->health = 1;
                } else if (param_1->field_0x567 == 1) {
                    iVar9->health = 0;
                } else {
                    iVar9->health = 2;
                }
                
                *(u16*)((u8*)iVar9 + 0x752) = 0x49;
                *(u16*)((u8*)iVar9 + 0x754) = 0;
                ((u8*)iVar9)[0x7b9] = 0;
                param_1->field_0x567 = 2;
            } else {
                if (param_1->field_0x567 == 0) {
                    local_cc = *(cXyz*)&BallEndPos - param_1->current.pos;
                    if (local_cc.abs() < 65.0f) {
                        // TODO: include henna npc header
                        fopAc_ac_c* uVar19 = fopAcM_SearchByName(PROC_NPC_HENNA);
                        if (uVar19 != NULL) {
                            BOOL bVar5 = FALSE;
                            for (int local_13c = 0; local_13c < 100; local_13c++) {
                                if (iVar6->mKoro2[local_13c].mpModel != NULL && iVar6->mKoro2[local_13c].field_0x60) {
                                    bVar5 = TRUE;
                                    break;
                                }
                            }

                            if (bVar5) {
                                uVar19->health = 3;
                                *(u16*)((u8*)uVar19 + 0x752) = 0x49;
                            } else {
                                *(u16*)((u8*)uVar19 + 0x752) = 0x4c;
                            }
                            *(u16*)((u8*)uVar19 + 0x754) = 0;
                            ((u8*)uVar19)[0x7b9] = 0;
                            param_1->field_0x567 = 2;
                        }
                    }
                }
            }
            if (param_1->field_0x40b4.ChkGroundHit()) {
                if (param_1->field_0x428c == 0) {
                    param_1->speed.y = 7.0f;
                } else if (param_1->field_0x428c == 1) {
                    param_1->speed.y = 2.5f;
                } else if (param_1->field_0x428c == 2) {
                    param_1->speed.y = 1.0f;
                } else {
                    param_1->speed.y = -5.0f;
                    param_1->field_0x428c = 2;
                }
                param_1->field_0x428c++;
                dBgS_GndChk adStack_b4;
                cXyz local_e4 = param_1->current.pos;
                local_e4.y += 10.0f;
                local_e4.z += 1.0f;
                adStack_b4.SetPos(&local_e4);
                local_e4.y = dComIfG_Bgsp().GroundCross(&adStack_b4);
                s16 local_160 = -cM_atan2s(local_e4.y - param_1->current.pos.y,
                                          local_e4.z - param_1->current.pos.z);
                if (local_160 > 0x3000) {
                    local_160 = 0x3000;
                } else if (local_160 < -0x3000) {
                    local_160 = -0x3000;
                }
                local_e4 = param_1->current.pos;
                local_e4.y += 10.0f;
                local_e4.x += 1.0f;
                adStack_b4.SetPos(&local_e4);
                local_e4.y = dComIfG_Bgsp().GroundCross(&adStack_b4);
                s16 local_162 = cM_atan2s(local_e4.y - param_1->current.pos.y,
                                          local_e4.x - param_1->current.pos.x);
                if (local_162 > 0x3000) {
                    local_162 = 0x3000;
                } else if (local_162 < -0x3000) {
                    local_162 = -0x3000;
                }
                cMtx_XrotS((MtxP)calc_mtx, local_160);
                cMtx_ZrotM((MtxP)calc_mtx, local_162);
                local_cc.x = 0.0f;
                local_cc.y = 30.0f;
                local_cc.z = 0.0f;
                MtxPosition(&local_cc, &local_d8);
                cLib_addCalc2(&param_1->speed.x, local_d8.x, 0.05f,
                                           (fabsf(local_d8.x) * 0.1f + 0.2f));
                cLib_addCalc2(&param_1->speed.z, local_d8.z, 0.05f,
                                           (fabsf(local_d8.z) * 0.1f + 0.2f));
            }
        }
        camera_class* pmVar11 = dComIfGp_getCamera(0);
        mDoMtx_stack_c::transS(param_1->current.pos.x, param_1->current.pos.y,
                               param_1->current.pos.z);
        mDoMtx_stack_c::scaleM(param_1->scale.x, param_1->scale.x,
                               param_1->scale.x);
        mDoMtx_stack_c::transM(0.0f, 190.0f * param_1->scale.x, 0.0f);
        local_cc = pmVar11->mLookat.mEye - param_1->current.pos;
        mDoMtx_stack_c::YrotM(cM_atan2s(local_cc.x, local_cc.z));
        mDoMtx_stack_c::XrotM(-cM_atan2s(local_cc.y, JMAFastSqrt((local_cc.x * local_cc.x + local_cc.z * local_cc.z))));
        param_1->field_0x4070->setBaseTRMtx(mDoMtx_stack_c::get());
        return 1;
    } else {
        lure_set(param_1);
        rod_set(param_1);
        tsubo_set(param_1);
        fs_weed_s* pWeed = param_1->mWeed;
        for (s32 local_14c = 0; local_14c < 60; local_14c++) {
            weed_control(param_1, &pWeed[local_14c]);
            cXyz* local_148 = param_1->field_0x3f88.getPos(local_14c);
            for (s32 local_150 = 0; local_150 < 15; local_150++, local_148++) {
                *local_148 = pWeed[local_14c].field_0x00[local_150];
            }
            fpcM_Search(s_fish_sub, &pWeed[local_14c]);
        }
        cXyz cStack_f0(-720.0f, 30.0f, 70.0f);
        cXyz cStack_fc(0.5f, 0.5f, 0.5f);
        for (int local_154 = 0; local_154 < 2; local_154++) {
            if (local_154 == 0) {
                cStack_f0.z = -30.0f;
            } else {
                cStack_f0.z = 220.0f;
            }
            param_1->field_0x6b6c[local_154] = dComIfGp_particle_set(
                param_1->field_0x6b6c[local_154], 0x1e8, &cStack_f0, 0, &cStack_fc);
        }
        if (daPy_getPlayerActorClass()->checkFrontRollCrash()) {
            param_1->field_0x6b34 = 0x1e;
        }
        s16 iVar6 = 30.0f * param_1->field_0x6b34 * cM_ssin(param_1->field_0x6b34 * 5000);
        if (param_1->field_0x6b34 != 0) {
            param_1->field_0x6b34--;
        }
        mDoMtx_stack_c::transS(-450.0f, 25.0f, -250.0f);
        mDoMtx_stack_c::YrotM(0x4000);
        mDoMtx_stack_c::ZrotM(iVar6 + 2000);
        param_1->field_0x6b30->setBaseTRMtx(mDoMtx_stack_c::get());
        mDoMtx_stack_c::transS(-450.0f, 0.0f, -250.0f);
        mDoMtx_stack_c::scaleM(4.0f, 1.5f, 1.0f);
        MTXCopy(mDoMtx_stack_c::get(), param_1->field_0x6b38);
        param_1->field_0x6b68->Move();
        local_c0.x = 325.0f - pPlayer->current.pos.x;
        local_c0.z = 237.0f - pPlayer->current.pos.z;
        if (daPy_getPlayerActorClass()->checkFrontRollCrash() &&
            JMAFastSqrt((local_c0.x * local_c0.x + local_c0.z * local_c0.z)) < 150.0)
        {
            param_1->field_0x3ff8 = cM_rndF(65536.0f);
            param_1->field_0x3ffa = cM_rndF(65536.0f);
            param_1->field_0x3ffc = cM_rndF(600.0) + 1300.0f;
            param_1->field_0x4000 = cM_rndF(600.0) + 1300.0f;
        }
        param_1->field_0x3ff8 += 4000;
        param_1->field_0x3ffa += 4000;
        s16 iVar10 = param_1->field_0x3ffc * cM_ssin(param_1->field_0x3ff8);
        s16 iVar11 = param_1->field_0x4000 * cM_ssin(param_1->field_0x3ffa);
        cLib_addCalc0(&param_1->field_0x3ffc, 1.0f, 40.0f);
        cLib_addCalc0(&param_1->field_0x4000, 1.0f, 40.0f);
        mDoMtx_stack_c::transS(325.0f, 140.0f, 237.0f);
        mDoMtx_stack_c::XrotM(iVar10);
        mDoMtx_stack_c::ZrotM(iVar11);
        mDoMtx_stack_c::transM(-10.0f, -7.0f, 65.0f);
        param_1->field_0x3ff4->setBaseTRMtx(mDoMtx_stack_c::get());
        koro2_game(param_1);
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daFshop_Execute(fshop_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/daFshop_Execute__FP11fshop_class.s"
}
#pragma pop
#endif

/* 8086E6C4-8086E6CC 002744 0008+00 1/0 0/0 0/0 .text            daFshop_IsDelete__FP11fshop_class
 */
static bool daFshop_IsDelete(fshop_class* param_0) {
    return true;
}

/* 8086E6CC-8086E7F0 00274C 0124+00 1/0 0/0 0/0 .text            daFshop_Delete__FP11fshop_class */
static int daFshop_Delete(fshop_class* param_1) {
    fopAcM_GetID(param_1);
    if (param_1->field_0x6b7c != 0) {
        J3DModelData* pModelData = (J3DModelData*) dComIfG_getObjectRes("Fshop", 5);
        dComIfGp_removeSimpleModel(pModelData, fopAcM_GetRoomNo(param_1));
        pModelData = (J3DModelData*) dComIfG_getObjectRes("Fshop", 6);
        dComIfGp_removeSimpleModel(pModelData, fopAcM_GetRoomNo(param_1));
    }
    dComIfG_resDelete(&param_1->mPhase, "Fshop");
    dComIfG_Bgsp().Release(param_1->field_0x6b68);
    if (param_1->field_0x400e != 0) {
        dComIfG_Bgsp().Release(param_1->field_0x402c);
        for (int i = 0; i < 100; i++) {
            if (param_1->mKoro2[i].mpBgW != NULL) {
                dComIfG_Bgsp().Release(param_1->mKoro2[i].mpBgW);
            }
        }
    }
    return 1;
}

/* ############################################################################################## */
/* 808707C4-80870800 000540 003C+00 0/1 0/0 0/0 .data            koro2_bmd$4909 */
#pragma push
#pragma force_active on
SECTION_DATA static s32 koro2_bmd[15] = {
    {0x0A}, {0x0B}, {0x0B},
    {0x0B}, {0x0B}, {0x0F},
    {0x0D}, {0x0C}, {0x0C},
    {0x0C}, {0x0C}, {0x0E},
    {0x0E}, {0x0E}, {0x0E},
};
#pragma pop

/* 80870800-8087083C 00057C 003C+00 0/1 0/0 0/0 .data            koro2_dzb$4910 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 koro2_dzb[15] = {
    {0x1F}, {0x20}, {0x20},
    {0x20}, {0x20}, {0x24},
    {0x22}, {0x21}, {0x21},
    {0x21}, {0x21}, {0x23},
    {0x23}, {0x23}, {0x23},
};
#pragma pop

/* 8087083C-8087084C 0005B8 0010+00 0/1 0/0 0/0 .data            pande_d$4911 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 pande_d[16] = {
    0x00, 0x01, 0x03, 0x02, 0x05, 0x04, 0x06, 0x07, 0x09, 0x08, 0x0B, 0x0A, 0x0C, 0x0D, 0x0F, 0x0E,
};
#pragma pop

/* 8086E7F0-8086ECC8 002870 04D8+00 1/1 0/0 0/0 .text            koro2_heapinit__FP10fopAc_ac_c */
// mapPtr definition and stack issue
#ifdef NONMATCHING
static int koro2_heapinit(fopAc_ac_c* param_1) {
    fshop_class* pShop = (fshop_class*) param_1;
    pShop->field_0x402c = new dBgW();
    if (pShop->field_0x402c == NULL) {
        return 0;
    }
    cBgD_t* pcVar3 = (cBgD_t*)dComIfG_getObjectRes("Fshop", 37);
    if (pShop->field_0x402c->Set(pcVar3, 1, &pShop->field_0x4030) == 1) {
        return 0;
    }
    pShop->field_0x402c->SetCrrFunc(dBgS_MoveBGProc_Typical);
    pShop->field_0x402c->SetRideCallback(ride_call_back);
    pShop->mpA_crwaku_model = ArcIX_A_crwaku_model[0];

    int local_30 = 0;
    int flag567 = pShop->field_0x567 & 8;
    int r29 = 0;
    int r28 = 0;
    int r30 = 0;
    int r27 = 0;
    int r26 = 0;
    int r25 = 0;
    s8 (*mapPtr)[9] = (s8(*)[9])koro2_map_d[pShop->field_0x567 & 7];
    for (int local_5c = 0; local_5c < 9; local_5c++) {
        for (int local_60 = 0; local_60 < 15; local_60++) {
            if (mapPtr[local_60][local_5c] != 0) {
                if (flag567 != 0) {
                    pShop->mKoro2[local_30].field_0x34 = pande_d[mapPtr[local_60][local_5c]];
                    pShop->mKoro2[local_30].field_0x38.x = 2.5f * (8 - local_5c);
                } else {
                    pShop->mKoro2[local_30].field_0x34 = mapPtr[local_60][local_5c];
                    pShop->mKoro2[local_30].field_0x38.x = 2.5f * local_5c;
                }
                pShop->mKoro2[local_30].field_0x38.y = 2.0f;
                pShop->mKoro2[local_30].field_0x38.z = 2.5f * local_60;
                if (pShop->mKoro2[local_30].field_0x34 == 6) {
                    pShop->mKoro2[local_30].field_0x38.z -= 2.5f;
                } else if (pShop->mKoro2[local_30].field_0x34 == 8) {
                    pShop->mKoro2[local_30].field_0x38.z -= 2.5f;
                    pShop->mKoro2[local_30].field_0x38.x -= 2.5f;
                } else if (pShop->mKoro2[local_30].field_0x34 == 11) {
                    pShop->mKoro2[local_30].field_0x38.z += 2.5f;
                    pShop->mKoro2[local_30].field_0x38.x += 2.5f;
                }
                pShop->mKoro2[local_30].field_0x44.set(2.5f, 2.5f, 2.5f);
                if (pShop->mKoro2[local_30].field_0x34 == 2 ||
                    pShop->mKoro2[local_30].field_0x34 == 8)
                {
                    pShop->mKoro2[local_30].field_0x50 = -16384;
                } else if (pShop->mKoro2[local_30].field_0x34 == 4 ||
                            pShop->mKoro2[local_30].field_0x34 == 10)
                {
                    pShop->mKoro2[local_30].field_0x50 = -32768;
                } else if (pShop->mKoro2[local_30].field_0x34 == 5 ||
                            pShop->mKoro2[local_30].field_0x34 == 11)
                {
                    pShop->mKoro2[local_30].field_0x50 = 16384;
                } else if (pShop->mKoro2[local_30].field_0x34 == 12) {
                    pShop->mKoro2[local_30].field_0x50 = -32768;
                } else if (pShop->mKoro2[local_30].field_0x34 == 14) {
                    pShop->mKoro2[local_30].field_0x50 = -16384;
                } else if (pShop->mKoro2[local_30].field_0x34 == 15) {
                    pShop->mKoro2[local_30].field_0x50 = 16384;
                }
                
                if (koro2_bmd[pShop->mKoro2[local_30].field_0x34 - 1] == 10) {
                    pShop->mKoro2[local_30].mpModel = ArcIX_A_crbox_model[r30];
                    r30++;
                } else if (koro2_bmd[pShop->mKoro2[local_30].field_0x34 - 1] == 15) {
                    pShop->mKoro2[local_30].mpModel = ArcIX_A_crstart_model[r29];
                    r29++;
                } else if (koro2_bmd[pShop->mKoro2[local_30].field_0x34 - 1] == 13) {
                    pShop->mKoro2[local_30].mpModel = ArcIX_A_crgoal_model[r28];
                    r28++;
                } else if (koro2_bmd[pShop->mKoro2[local_30].field_0x34 - 1] == 11) {
                    pShop->mKoro2[local_30].mpModel = ArcIX_A_crcurve_a_model[r27];
                    r27++;
                } else if (koro2_bmd[pShop->mKoro2[local_30].field_0x34 - 1] == 12) {
                    pShop->mKoro2[local_30].mpModel = ArcIX_A_crcurve_b_model[r26];
                    r26++;
                } else if (koro2_bmd[pShop->mKoro2[local_30].field_0x34 - 1] == 14) {
                    pShop->mKoro2[local_30].mpModel = ArcIX_A_crsaka_model[r25];
                    r25++;
                }
                
                if (pShop->mKoro2[local_30].mpModel == NULL) {
                    return 0;
                }
                
                pShop->mKoro2[local_30].mpBgW = new dBgW();
                if (pShop->mKoro2[local_30].mpBgW == NULL) {
                    return 0;
                }
                cBgD_t* pcVar3 = (cBgD_t*)dComIfG_getObjectRes("Fshop",koro2_dzb[pShop->mKoro2[local_30].field_0x34 - 1]);
                if (pShop->mKoro2[local_30].mpBgW->Set(pcVar3, 1, &pShop->mKoro2[local_30].field_0x04) == 1) {
                    return 0;
                }
                pShop->mKoro2[local_30].mpBgW->SetCrrFunc(dBgS_MoveBGProc_Typical);
                local_30++;
                if (local_30 >= 100) {
                    return 0;
                }
            }
        }
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int koro2_heapinit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/koro2_heapinit__FP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 808701D4-808701D8 000140 0004+00 0/1 0/0 0/0 .rodata          @5206 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5206 = -370.0f;
COMPILER_STRIP_GATE(0x808701D4, &lit_5206);
#pragma pop

/* 808701D8-808701DC 000144 0004+00 0/1 0/0 0/0 .rodata          @5207 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5207 = 16.0f;
COMPILER_STRIP_GATE(0x808701D8, &lit_5207);
#pragma pop

/* 808701DC-808701E0 000148 0004+00 0/2 0/0 0/0 .rodata          @5208 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5208 = 215.0f;
COMPILER_STRIP_GATE(0x808701DC, &lit_5208);
#pragma pop

/* 808701E0-808701E4 00014C 0004+00 0/1 0/0 0/0 .rodata          @5209 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5209 = 43.0f;
COMPILER_STRIP_GATE(0x808701E0, &lit_5209);
#pragma pop

/* 808701E4-808701E8 000150 0004+00 0/1 0/0 0/0 .rodata          @5210 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5210 = 593.0f;
COMPILER_STRIP_GATE(0x808701E4, &lit_5210);
#pragma pop

/* 808701E8-808701EC 000154 0004+00 0/1 0/0 0/0 .rodata          @5211 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5211 = 32768.0f;
COMPILER_STRIP_GATE(0x808701E8, &lit_5211);
#pragma pop

/* 808701EC-808701F0 000158 0004+00 0/1 0/0 0/0 .rodata          @5212 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5212 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x808701EC, &lit_5212);
#pragma pop

/* 808701F0-808701F4 00015C 0004+00 0/1 0/0 0/0 .rodata          @5213 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5213 = 0x403F5C29;
COMPILER_STRIP_GATE(0x808701F0, &lit_5213);
#pragma pop

/* 808701F4-808701F8 000160 0004+00 0/1 0/0 0/0 .rodata          @5214 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5214 = 0x3F3851EB;
COMPILER_STRIP_GATE(0x808701F4, &lit_5214);
#pragma pop

/* 808701F8-808701FC 000164 0004+00 0/1 0/0 0/0 .rodata          @5215 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5215 = 0x3FFEB852;
COMPILER_STRIP_GATE(0x808701F8, &lit_5215);
#pragma pop

/* 808701FC-80870200 000168 0004+00 0/1 0/0 0/0 .rodata          @5216 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5216 = -685.0f;
COMPILER_STRIP_GATE(0x808701FC, &lit_5216);
#pragma pop

/* 80870200-80870204 00016C 0004+00 0/1 0/0 0/0 .rodata          @5217 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5217 = 18.0f;
COMPILER_STRIP_GATE(0x80870200, &lit_5217);
#pragma pop

/* 80870204-80870208 000170 0004+00 0/1 0/0 0/0 .rodata          @5218 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5218 = 565.0f;
COMPILER_STRIP_GATE(0x80870204, &lit_5218);
#pragma pop

/* 80870208-8087020C 000174 0004+00 0/1 0/0 0/0 .rodata          @5219 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5219 = 177.0f;
COMPILER_STRIP_GATE(0x80870208, &lit_5219);
#pragma pop

/* 8087020C-80870210 000178 0004+00 0/1 0/0 0/0 .rodata          @5220 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5220 = 290.0f;
COMPILER_STRIP_GATE(0x8087020C, &lit_5220);
#pragma pop

/* 80870210-80870214 00017C 0004+00 0/1 0/0 0/0 .rodata          @5221 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5221 = 550.0f;
COMPILER_STRIP_GATE(0x80870210, &lit_5221);
#pragma pop

/* 80870214-80870218 000180 0004+00 0/1 0/0 0/0 .rodata          @5222 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5222 = 560.0f;
COMPILER_STRIP_GATE(0x80870214, &lit_5222);
#pragma pop

/* 80870218-8087021C 000184 0004+00 0/1 0/0 0/0 .rodata          @5223 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5223 = -16384.0f;
COMPILER_STRIP_GATE(0x80870218, &lit_5223);
#pragma pop

/* 8087021C-80870220 000188 0004+00 0/2 0/0 0/0 .rodata          @5224 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5224 = 2000.0f;
COMPILER_STRIP_GATE(0x8087021C, &lit_5224);
#pragma pop

/* 8087084C-8087085C 0005C8 0010+00 0/1 0/0 0/0 .data            lure_d$5019 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lure_d[16] = {
    0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x14,
};
#pragma pop

/* 8087085C-80870864 0005D8 0008+00 0/1 0/0 0/0 .data            rod_d$5056 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 rod_d[8] = {
    0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x18,
};
#pragma pop

/* 80870864-80870884 0005E0 0020+00 0/1 0/0 0/0 .data            rod_w$5087 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 rod_w[32] = {
    0x3F, 0x80, 0x00, 0x00, 0x3F, 0x66, 0x66, 0x66, 0x3F, 0x4C, 0xCC, 0xCD, 0x3F, 0x33, 0x33, 0x33,
    0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x00, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD, 0x3E, 0x99, 0x99, 0x9A,
};
#pragma pop

/* 80870884-8087089C 000600 0018+00 0/1 0/0 0/0 .data            koro2_union_bmd$5117 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 koro2_union_bmd[24] = {
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0A,
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0E,
};
#pragma pop

/* 8087089C-808708B4 000618 0018+00 0/1 0/0 0/0 .data            koro2_union_no$5118 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 koro2_union_no[24] = {
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1F,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08,
};
#pragma pop

/* 8086ECC8-8086F5C8 002D48 0900+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8086F5C8-8086F634 003648 006C+00 1/1 0/0 0/0 .text            BalluseHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void BalluseHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/BalluseHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80870220-80870240 00018C 0020+00 0/0 0/0 0/0 .rodata          @5249 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5249[32] = {
    0x00, 0x00, 0x84, 0xA0, 0x00, 0x00, 0x9A, 0xC0, 0x00, 0x00, 0xB4, 0x40, 0x00, 0x00, 0xE1, 0x00,
    0x00, 0x00, 0x82, 0x20, 0x00, 0x00, 0x9A, 0x40, 0x00, 0x00, 0x64, 0xE0, 0x00, 0x00, 0xA9, 0xE0,
};
COMPILER_STRIP_GATE(0x80870220, &lit_5249);
#pragma pop

/* 80870240-80870244 0001AC 0004+00 0/1 0/0 0/0 .rodata          @5476 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5476 = 9.0f;
COMPILER_STRIP_GATE(0x80870240, &lit_5476);
#pragma pop

/* 80870244-80870248 0001B0 0004+00 0/1 0/0 0/0 .rodata          @5477 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5477 = 11.0f;
COMPILER_STRIP_GATE(0x80870244, &lit_5477);
#pragma pop

/* 80870248-8087024C 0001B4 0004+00 0/1 0/0 0/0 .rodata          @5478 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5478 = 20.0f;
COMPILER_STRIP_GATE(0x80870248, &lit_5478);
#pragma pop

/* 8087024C-80870250 0001B8 0004+00 0/1 0/0 0/0 .rodata          @5479 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5479 = 67.0f;
COMPILER_STRIP_GATE(0x8087024C, &lit_5479);
#pragma pop

/* 80870250-80870254 0001BC 0004+00 0/1 0/0 0/0 .rodata          @5480 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5480 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x80870250, &lit_5480);
#pragma pop

/* 80870254-80870258 0001C0 0004+00 0/1 0/0 0/0 .rodata          @5481 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5481 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x80870254, &lit_5481);
#pragma pop

/* 80870258-8087025C 0001C4 0004+00 0/1 0/0 0/0 .rodata          @5482 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5482 = 127.0f / 50.0f;
COMPILER_STRIP_GATE(0x80870258, &lit_5482);
#pragma pop

/* 8087025C-80870260 0001C8 0004+00 0/1 0/0 0/0 .rodata          @5483 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5483 = -648.0f;
COMPILER_STRIP_GATE(0x8087025C, &lit_5483);
#pragma pop

/* 80870260-80870264 0001CC 0004+00 0/1 0/0 0/0 .rodata          @5484 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5484 = 380.0f;
COMPILER_STRIP_GATE(0x80870260, &lit_5484);
#pragma pop

/* 80870264-80870268 0001D0 0004+00 0/1 0/0 0/0 .rodata          @5485 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5485 = -131.0f;
COMPILER_STRIP_GATE(0x80870264, &lit_5485);
#pragma pop

/* 80870268-8087026C 0001D4 0004+00 0/1 0/0 0/0 .rodata          @5486 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5486 = 3000.0f;
COMPILER_STRIP_GATE(0x80870268, &lit_5486);
#pragma pop

/* 8087026C-80870270 0001D8 0004+00 0/1 0/0 0/0 .rodata          @5487 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5487 = -4500.0f;
COMPILER_STRIP_GATE(0x8087026C, &lit_5487);
#pragma pop

/* 80870270-80870274 0001DC 0004+00 0/1 0/0 0/0 .rodata          @5488 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5488 = -878.0f;
COMPILER_STRIP_GATE(0x80870270, &lit_5488);
#pragma pop

/* 80870274-8087027C 0001E0 0008+00 0/1 0/0 0/0 .rodata          @5490 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5490[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80870274, &lit_5490);
#pragma pop

/* 808708B4-808708BC 000630 0008+00 1/1 0/0 0/0 .data            check_kind$5285 */
SECTION_DATA static u8 check_kind[8] = {
    0xF5, 0x7F, 0xF4, 0x7F, 0xF3, 0x7F, 0xF2, 0x7F,
};

/* 808708BC-808708DC -00001 0020+00 1/0 0/0 0/0 .data            l_daFshop_Method */
static actor_method_class l_daFshop_Method = {
    (process_method_func)daFshop_Create__FP10fopAc_ac_c,
    (process_method_func)daFshop_Delete__FP11fshop_class,
    (process_method_func)daFshop_Execute__FP11fshop_class,
    (process_method_func)daFshop_IsDelete__FP11fshop_class,
    (process_method_func)daFshop_Draw__FP11fshop_class,
};

/* 808708DC-8087090C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_FSHOP */
extern actor_process_profile_definition g_profile_FSHOP = {
  fpcLy_CURRENT_e,       // mLayerID
  7,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_FSHOP,            // mProcName
  &g_fpcLf_Method.mBase, // sub_method
  0x00006B80,            // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  721,                   // mPriority
  &l_daFshop_Method,     // sub_method
  0x00044000,            // mStatus
  fopAc_ACTOR_e,         // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};

/* 8087090C-80870918 000688 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80870918-8087093C 000694 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80870078,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80870070,
};

/* 8087093C-80870950 0006B8 0014+00 2/2 0/0 0/0 .data            __vt__18mDoExt_3DlineMat_c */
SECTION_DATA extern void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 8086F634-8086FD78 0036B4 0744+00 1/0 0/0 0/0 .text            daFshop_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFshop_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/daFshop_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8086FD78-8086FDB4 003DF8 003C+00 1/1 0/0 0/0 .text            __dt__10fs_koro2_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fs_koro2_s::~fs_koro2_s() {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/__dt__10fs_koro2_sFv.s"
}
#pragma pop

/* 8086FDB4-8086FDB8 003E34 0004+00 1/1 0/0 0/0 .text            __ct__10fs_koro2_sFv */
// fs_koro2_s::fs_koro2_s() {
extern "C" void __ct__10fs_koro2_sFv() {
    /* empty function */
}

/* 8086FDB8-8086FE28 003E38 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 8086FE28-8086FE98 003EA8 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" asm void __dt__12dBgS_AcchCirFv() {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 8086FE98-8086FED4 003F18 003C+00 1/1 0/0 0/0 .text            __dt__10fs_tsubo_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fs_tsubo_s::~fs_tsubo_s() {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/__dt__10fs_tsubo_sFv.s"
}
#pragma pop

/* 8086FED4-8086FED8 003F54 0004+00 1/1 0/0 0/0 .text            __ct__10fs_tsubo_sFv */
// fs_tsubo_s::fs_tsubo_s() {
extern "C" void __ct__10fs_tsubo_sFv() {
    /* empty function */
}

/* 8086FED8-8086FF38 003F58 0060+00 1/1 0/0 0/0 .text            __dt__9fs_weed_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fs_weed_s::~fs_weed_s() {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/__dt__9fs_weed_sFv.s"
}
#pragma pop

/* 8086FF38-8086FF80 003FB8 0048+00 1/1 0/0 0/0 .text            __ct__9fs_weed_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm fs_weed_s::fs_weed_s() {
extern "C" asm void __ct__9fs_weed_sFv() {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/__ct__9fs_weed_sFv.s"
}
#pragma pop

/* 8086FF80-8086FF84 004000 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 8086FF84-8086FFC0 004004 003C+00 1/1 0/0 0/0 .text            __dt__8fs_rod_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fs_rod_s::~fs_rod_s() {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/__dt__8fs_rod_sFv.s"
}
#pragma pop

/* 8086FFC0-8086FFDC 004040 001C+00 1/1 0/0 0/0 .text            __ct__8fs_rod_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm fs_rod_s::fs_rod_s() {
extern "C" asm void __ct__8fs_rod_sFv() {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/__ct__8fs_rod_sFv.s"
}
#pragma pop

/* 8086FFDC-80870018 00405C 003C+00 1/1 0/0 0/0 .text            __dt__9fs_lure_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fs_lure_s::~fs_lure_s() {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/__dt__9fs_lure_sFv.s"
}
#pragma pop

/* 80870018-8087001C 004098 0004+00 1/1 0/0 0/0 .text            __ct__9fs_lure_sFv */
// fs_lure_s::fs_lure_s() {
extern "C" void __ct__9fs_lure_sFv() {
    /* empty function */
}

/* 8087001C-80870070 00409C 0054+00 0/0 1/0 0/0 .text            __sinit_d_a_mg_fshop_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_mg_fshop_cpp(){nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/__sinit_d_a_mg_fshop_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8087001C, __sinit_d_a_mg_fshop_cpp);
#pragma pop

/* 80870070-80870078 0040F0 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80870070() {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/func_80870070.s"
}
#pragma pop

/* 80870078-80870080 0040F8 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80870078() {
    nofralloc
#include "asm/rel/d/a/d_a_mg_fshop/d_a_mg_fshop/func_80870078.s"
}
#pragma pop

/* ############################################################################################## */
/* 80870AC8-80870ACC 000178 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80870AC8[4];
#pragma pop

/* 80870ACC-80870AD0 00017C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80870ACC[4];
#pragma pop

/* 80870AD0-80870AD4 000180 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80870AD0[4];
#pragma pop

/* 80870AD4-80870AD8 000184 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80870AD4[4];
#pragma pop

/* 80870AD8-80870ADC 000188 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80870AD8[4];
#pragma pop

/* 80870ADC-80870AE0 00018C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80870ADC[4];
#pragma pop

/* 80870AE0-80870AE4 000190 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80870AE0[4];
#pragma pop

/* 80870AE4-80870AE8 000194 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80870AE4[4];
#pragma pop

/* 80870AE8-80870AEC 000198 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80870AE8[4];
#pragma pop

/* 80870AEC-80870AF0 00019C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80870AEC[4];
#pragma pop

/* 80870AF0-80870AF4 0001A0 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80870AF0[4];
#pragma pop

/* 80870AF4-80870AF8 0001A4 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80870AF4[4];
#pragma pop

/* 80870AF8-80870AFC 0001A8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80870AF8[4];
#pragma pop

/* 80870AFC-80870B00 0001AC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80870AFC[4];
#pragma pop

/* 80870B00-80870B04 0001B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80870B00[4];
#pragma pop

/* 80870B04-80870B08 0001B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80870B04[4];
#pragma pop

/* 80870B08-80870B0C 0001B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80870B08[4];
#pragma pop

/* 80870B0C-80870B10 0001BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80870B0C[4];
#pragma pop

/* 80870B10-80870B14 0001C0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80870B10[4];
#pragma pop

/* 80870B14-80870B18 0001C4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80870B14[4];
#pragma pop

/* 80870B18-80870B1C 0001C8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80870B18[4];
#pragma pop

/* 80870B1C-80870B20 0001CC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80870B1C[4];
#pragma pop

/* 80870B20-80870B24 0001D0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80870B20[4];
#pragma pop

/* 80870B24-80870B28 0001D4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80870B24[4];
#pragma pop

/* 80870B28-80870B2C 0001D8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80870B28[4];
#pragma pop

/* 8087027C-8087027C 0001E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
