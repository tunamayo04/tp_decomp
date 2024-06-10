/**
 * @file d_a_do.cpp
 * 
*/

// See d_a_do_NONMATCHING.cpp

#include "rel/d/a/d_a_do/d_a_do.h"
#include "SSystem/SComponent/c_math.h"
#include "d/com/d_com_inf_game.h"
#include "d/a/d_a_player.h"
#include "dol2asm.h"
#include "f_op/f_op_actor_mng.h"

//
// Forward References:
//

extern "C" void __ct__10daDo_HIO_cFv();
extern "C" static void anm_init__FP8do_classifUcf();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daDo_Draw__FP8do_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void daDo_other_bg_check__FP8do_classP10fopAc_ac_c();
extern "C" static void daDo_other_bg_check2__FP8do_classP4cXyz();
extern "C" static void s_w_sub__FPvPv();
extern "C" static void search_food__FP8do_class();
extern "C" static void food_check__FP8do_class();
extern "C" static void do_carry_check__FP8do_class();
extern "C" static void depth_check__FP8do_class4cXyzf();
extern "C" static void water_check__FP8do_class();
extern "C" static void dansa_check__FP8do_class4cXyzf();
extern "C" static void dansa_check2__FP8do_classf();
extern "C" static void move_dansa_check__FP8do_classf();
extern "C" static void area_check__FP8do_class();
extern "C" static void do_stay__FP8do_class();
extern "C" static void do_walk__FP8do_class();
extern "C" static void do_walk_run__FP8do_class();
extern "C" static void do_run__FP8do_class();
extern "C" static void do_run_walk__FP8do_class();
extern "C" static void do_wait_1__FP8do_class();
extern "C" static void do_wait_2__FP8do_class();
extern "C" static void do_sit__FP8do_class();
extern "C" static void hang_set__FP8do_class();
extern "C" static void do_hang__FP8do_class();
extern "C" static void do_food__FP8do_class();
extern "C" static void do_swim__FP8do_class();
extern "C" static void s_c_sub__FPvPv();
extern "C" static void do_help__FP8do_class();
extern "C" static void do_boat__FP8do_class();
extern "C" static void do_a_swim__FP8do_class();
extern "C" static void do_carry__FP8do_class();
extern "C" static void do_message__FP8do_class();
extern "C" static void action__FP8do_class();
extern "C" static void message__FP8do_class();
extern "C" static void daDo_Execute__FP8do_class();
extern "C" static bool daDo_IsDelete__FP8do_class();
extern "C" static void daDo_Delete__FP8do_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daDo_Create__FP10fopAc_ac_c();
extern "C" void __ct__8do_classFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__10daDo_HIO_cFv();
extern "C" void __sinit_d_a_do_cpp();
extern "C" static void func_8066EDC4();
extern "C" static void func_8066EDCC();
extern "C" extern char const* const d_a_do__stringBase0;

//
// External References:
//

extern "C" void fopAcM_riverStream__FP4cXyzPsPff();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void init__13mDoExt_btpAnmFP16J3DMaterialTableP16J3DAnmTexPatterniifss();
extern "C" void entry__13mDoExt_btpAnmFP16J3DMaterialTables();
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
extern "C" void fopAcM_createItem__FPC4cXyziiiPC5csXyzPC4cXyzi();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void startControl__8daItem_cFv();
extern "C" void endControl__8daItem_cFv();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
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
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void linkGrabSubjectNoDraw__9daPy_py_cFP10fopAc_ac_c();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void func_802807E0();
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
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8066EDE8-8066EDEC 000000 0004+00 29/29 0/0 0/0 .rodata          @3662 */
SECTION_RODATA static f32 const lit_3662 = 1.0f;
COMPILER_STRIP_GATE(0x8066EDE8, &lit_3662);

/* 8066EDEC-8066EDF0 000004 0004+00 0/1 0/0 0/0 .rodata          @3663 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3663 = 2.5f;
COMPILER_STRIP_GATE(0x8066EDEC, &lit_3663);
#pragma pop

/* 8066EDF0-8066EDF4 000008 0004+00 0/1 0/0 0/0 .rodata          @3664 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3664 = 12.0f;
COMPILER_STRIP_GATE(0x8066EDF0, &lit_3664);
#pragma pop

/* 8066EDF4-8066EDF8 00000C 0004+00 0/13 0/0 0/0 .rodata          @3665 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3665 = 2.0f;
COMPILER_STRIP_GATE(0x8066EDF4, &lit_3665);
#pragma pop

/* 8066EDF8-8066EDFC 000010 0004+00 0/1 0/0 0/0 .rodata          @3666 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3666 = 600.0f;
COMPILER_STRIP_GATE(0x8066EDF8, &lit_3666);
#pragma pop

/* 8066EFBC-8066EFF4 -00001 0038+00 1/1 0/0 0/0 .data            @4195 */
SECTION_DATA static void* lit_4195[14] = {
    (void*)(((char*)do_stay__FP8do_class) + 0x44),  (void*)(((char*)do_stay__FP8do_class) + 0x90),
    (void*)(((char*)do_stay__FP8do_class) + 0xE4),  (void*)(((char*)do_stay__FP8do_class) + 0x12C),
    (void*)(((char*)do_stay__FP8do_class) + 0x2CC), (void*)(((char*)do_stay__FP8do_class) + 0x2CC),
    (void*)(((char*)do_stay__FP8do_class) + 0x2CC), (void*)(((char*)do_stay__FP8do_class) + 0x2CC),
    (void*)(((char*)do_stay__FP8do_class) + 0x2CC), (void*)(((char*)do_stay__FP8do_class) + 0x2CC),
    (void*)(((char*)do_stay__FP8do_class) + 0x17C), (void*)(((char*)do_stay__FP8do_class) + 0x19C),
    (void*)(((char*)do_stay__FP8do_class) + 0x220), (void*)(((char*)do_stay__FP8do_class) + 0x280),
};

/* 8066EFF4-8066F028 -00001 0034+00 1/1 0/0 0/0 .data            @4346 */
SECTION_DATA static void* lit_4346[13] = {
    (void*)(((char*)do_walk__FP8do_class) + 0x60),  (void*)(((char*)do_walk__FP8do_class) + 0xD4),
    (void*)(((char*)do_walk__FP8do_class) + 0x11C), (void*)(((char*)do_walk__FP8do_class) + 0x15C),
    (void*)(((char*)do_walk__FP8do_class) + 0x378), (void*)(((char*)do_walk__FP8do_class) + 0x544),
    (void*)(((char*)do_walk__FP8do_class) + 0x648), (void*)(((char*)do_walk__FP8do_class) + 0x648),
    (void*)(((char*)do_walk__FP8do_class) + 0x648), (void*)(((char*)do_walk__FP8do_class) + 0x648),
    (void*)(((char*)do_walk__FP8do_class) + 0x648), (void*)(((char*)do_walk__FP8do_class) + 0x56C),
    (void*)(((char*)do_walk__FP8do_class) + 0x618),
};

/* 8066F028-8066F05C -00001 0034+00 1/1 0/0 0/0 .data            @4557 */
SECTION_DATA static void* lit_4557[13] = {
    (void*)(((char*)do_wait_1__FP8do_class) + 0x118),
    (void*)(((char*)do_wait_1__FP8do_class) + 0xAC),
    (void*)(((char*)do_wait_1__FP8do_class) + 0x118),
    (void*)(((char*)do_wait_1__FP8do_class) + 0x370),
    (void*)(((char*)do_wait_1__FP8do_class) + 0x398),
    (void*)(((char*)do_wait_1__FP8do_class) + 0x4F8),
    (void*)(((char*)do_wait_1__FP8do_class) + 0x3F4),
    (void*)(((char*)do_wait_1__FP8do_class) + 0x464),
    (void*)(((char*)do_wait_1__FP8do_class) + 0x4F8),
    (void*)(((char*)do_wait_1__FP8do_class) + 0x4F8),
    (void*)(((char*)do_wait_1__FP8do_class) + 0x4F8),
    (void*)(((char*)do_wait_1__FP8do_class) + 0x490),
    (void*)(((char*)do_wait_1__FP8do_class) + 0x4BC),
};

/* 8066F05C-8066F0C4 -00001 0068+00 1/1 0/0 0/0 .data            @4969 */
SECTION_DATA static void* lit_4969[26] = {
    (void*)(((char*)do_food__FP8do_class) + 0xDC),  (void*)(((char*)do_food__FP8do_class) + 0x10C),
    (void*)(((char*)do_food__FP8do_class) + 0x34C), (void*)(((char*)do_food__FP8do_class) + 0xAC0),
    (void*)(((char*)do_food__FP8do_class) + 0xAC0), (void*)(((char*)do_food__FP8do_class) + 0xAC0),
    (void*)(((char*)do_food__FP8do_class) + 0xAC0), (void*)(((char*)do_food__FP8do_class) + 0xAC0),
    (void*)(((char*)do_food__FP8do_class) + 0xAC0), (void*)(((char*)do_food__FP8do_class) + 0xAC0),
    (void*)(((char*)do_food__FP8do_class) + 0x364), (void*)(((char*)do_food__FP8do_class) + 0x3E0),
    (void*)(((char*)do_food__FP8do_class) + 0xAC0), (void*)(((char*)do_food__FP8do_class) + 0xAC0),
    (void*)(((char*)do_food__FP8do_class) + 0xAC0), (void*)(((char*)do_food__FP8do_class) + 0xAC0),
    (void*)(((char*)do_food__FP8do_class) + 0xAC0), (void*)(((char*)do_food__FP8do_class) + 0xAC0),
    (void*)(((char*)do_food__FP8do_class) + 0xAC0), (void*)(((char*)do_food__FP8do_class) + 0xAC0),
    (void*)(((char*)do_food__FP8do_class) + 0x8A8), (void*)(((char*)do_food__FP8do_class) + 0x960),
    (void*)(((char*)do_food__FP8do_class) + 0xAC0), (void*)(((char*)do_food__FP8do_class) + 0xAC0),
    (void*)(((char*)do_food__FP8do_class) + 0xAC0), (void*)(((char*)do_food__FP8do_class) + 0xA00),
};

/* 8066F0C4-8066F0E4 -00001 0020+00 1/1 0/0 0/0 .data            @5348 */
SECTION_DATA static void* lit_5348[8] = {
    (void*)(((char*)do_boat__FP8do_class) + 0x210), (void*)(((char*)do_boat__FP8do_class) + 0x2C8),
    (void*)(((char*)do_boat__FP8do_class) + 0x5EC), (void*)(((char*)do_boat__FP8do_class) + 0x6B4),
    (void*)(((char*)do_boat__FP8do_class) + 0x970), (void*)(((char*)do_boat__FP8do_class) + 0x810),
    (void*)(((char*)do_boat__FP8do_class) + 0x83C), (void*)(((char*)do_boat__FP8do_class) + 0x944),
};

/* 8066F0E4-8066F0EC 000128 0008+00 1/1 0/0 0/0 .data            w_eff_id$5581 */
SECTION_DATA static u8 w_eff_id[8] = {
    0x01, 0xB8, 0x01, 0xB9, 0x01, 0xBA, 0x01, 0xBB,
};

/* 8066F0EC-8066F18C -00001 00A0+00 1/1 0/0 0/0 .data            @5955 */
SECTION_DATA static void* lit_5955[40] = {
    (void*)(((char*)action__FP8do_class) + 0x13C), (void*)(((char*)action__FP8do_class) + 0x158),
    (void*)(((char*)action__FP8do_class) + 0x174), (void*)(((char*)action__FP8do_class) + 0x190),
    (void*)(((char*)action__FP8do_class) + 0x1AC), (void*)(((char*)action__FP8do_class) + 0x1C8),
    (void*)(((char*)action__FP8do_class) + 0x1DC), (void*)(((char*)action__FP8do_class) + 0x1F8),
    (void*)(((char*)action__FP8do_class) + 0x214), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x230), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x2B8), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x2B8), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x2B8), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x2B8), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x23C), (void*)(((char*)action__FP8do_class) + 0x260),
    (void*)(((char*)action__FP8do_class) + 0x26C), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x2B8), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x2B8), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x2B8), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x27C), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x2B8), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x2B8), (void*)(((char*)action__FP8do_class) + 0x288),
    (void*)(((char*)action__FP8do_class) + 0x2B8), (void*)(((char*)action__FP8do_class) + 0x2B8),
    (void*)(((char*)action__FP8do_class) + 0x2B8), (void*)(((char*)action__FP8do_class) + 0x2A8),
};

/* 8066F18C-8066F1CC 0001D0 0040+00 1/1 0/0 0/0 .data            cc_sph_src$6355 */
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x0, 0x0}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 20.0f} // mSph
    } // mSphAttr
};

/* 8066F1CC-8066F1EC -00001 0020+00 1/0 0/0 0/0 .data            l_daDo_Method */
static actor_method_class l_daDo_Method = {
    (process_method_func)daDo_Create__FP10fopAc_ac_c,
    (process_method_func)daDo_Delete__FP8do_class,
    (process_method_func)daDo_Execute__FP8do_class,
    (process_method_func)daDo_IsDelete__FP8do_class,
    (process_method_func)daDo_Draw__FP8do_class,
};

/* 8066F1EC-8066F21C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_DO */
extern actor_process_profile_definition g_profile_DO = {
  fpcLy_CURRENT_e,       // mLayerID
  7,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_DO,               // mProcName
  &g_fpcLf_Method.mBase, // sub_method
  0x00000CC4,            // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  699,                   // mPriority
  &l_daDo_Method,        // sub_method
  0x08044000,            // mStatus
  fopAc_NPC_e,           // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};

/* 8066F21C-8066F228 000260 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 8066F228-8066F234 00026C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8066F234-8066F258 000278 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8066EDCC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8066EDC4,
};

/* 8066F258-8066F264 00029C 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8066F264-8066F270 0002A8 000C+00 2/2 0/0 0/0 .data            __vt__10daDo_HIO_c */
SECTION_DATA extern void* __vt__10daDo_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10daDo_HIO_cFv,
};

/* 80667D4C-80667DA8 0000EC 005C+00 1/1 0/0 0/0 .text            __ct__10daDo_HIO_cFv */
daDo_HIO_c::daDo_HIO_c() {
    field_0x04 = -1;
    mBaseSize = FLOAT_LABEL(lit_3662);
    mWalkSpeed = FLOAT_LABEL(lit_3663);
    mRunSpeed = FLOAT_LABEL(lit_3664);
    mSwimSpeed = FLOAT_LABEL(lit_3665);
    mPlayerRecognitionDist = FLOAT_LABEL(lit_3666);
    mWaitType = 0;
    mSwimming = 1;
    mWaterHuntAnimType = 0;
}

/* ############################################################################################## */
/* 8066EDFC-8066EE00 000014 0004+00 0/16 0/0 0/0 .rodata          @3682 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3682[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8066EDFC, &lit_3682);
#pragma pop

/* 8066EE00-8066EE04 000018 0004+00 0/2 0/0 0/0 .rodata          @3683 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3683 = -1.0f;
COMPILER_STRIP_GATE(0x8066EE00, &lit_3683);
#pragma pop

/* 8066EFB0-8066EFB0 0001C8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8066EFB0 = "Do";
#pragma pop

/* 80667DA8-80667E68 000148 00C0+00 16/16 0/0 0/0 .text            anm_init__FP8do_classifUcf */
static void anm_init(do_class* i_this, int i_resIdx, f32 param_2, u8 param_3, f32 param_4) {
    if (!(i_this->field_0x608 > FLOAT_LABEL(lit_3662))) {
        i_this->mpMorf->setAnm((J3DAnmTransform*)dComIfG_getObjectRes("Do", i_resIdx), param_3,
                               param_2, param_4, FLOAT_LABEL(lit_3682), FLOAT_LABEL(lit_3683), 0);
        i_this->mAnmID = i_resIdx;
    }
}

/* 80667E68-80667FE4 000208 017C+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
static int nodeCallBack(J3DJoint* i_jntP, int param_1) {
    if (param_1 == 0) {
        int joint_num = i_jntP->getJntNo();
        J3DModel* model = j3dSys.getModel();
        do_class* user_area = (do_class*)model->getUserArea();

        if (user_area) {
            MTXCopy(model->getAnmMtx(joint_num), *calc_mtx);

            if (joint_num == 9 || joint_num == 10) {
                cMtx_YrotM(*calc_mtx, user_area->mHeadAngle.y + user_area->mHeadBob.y);
                cMtx_XrotM(*calc_mtx, user_area->mHeadAngle.z + user_area->mHeadBob.z);
                cMtx_ZrotM(*calc_mtx, user_area->mHeadAngle.x);
            } else if (joint_num == 22) {
                cMtx_YrotM(*calc_mtx, user_area->mTailAngle.y << 1);
                cMtx_ZrotM(*calc_mtx, user_area->mTailAngle.x << 1);
            } else {
                cMtx_YrotM(*calc_mtx, user_area->mTailAngle.y);
                cMtx_ZrotM(*calc_mtx, user_area->mTailAngle.x);
            }

            model->setAnmMtx(joint_num, *calc_mtx);
            MTXCopy(*calc_mtx, j3dSys.mCurrentMtx);
        }
    }
    return 1;
}

/* ############################################################################################## */
/* 8066EE04-8066EE08 00001C 0004+00 0/8 0/0 0/0 .rodata          @3772 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3772 = 100.0f;
COMPILER_STRIP_GATE(0x8066EE04, &lit_3772);
#pragma pop

/* 8066EE08-8066EE0C 000020 0004+00 0/3 0/0 0/0 .rodata          @3773 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3773 = 400.0f;
COMPILER_STRIP_GATE(0x8066EE08, &lit_3773);
#pragma pop

/* 80667FE4-80668134 000384 0150+00 1/0 0/0 0/0 .text            daDo_Draw__FP8do_class */
#ifdef NONMATCHING
static void daDo_Draw(do_class* i_this) {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDo_Draw(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/daDo_Draw__FP8do_class.s"
}
#pragma pop
#endif

/* 80668134-80668170 0004D4 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8066EE0C-8066EE10 000024 0004+00 1/8 0/0 0/0 .rodata          @3816 */
SECTION_RODATA static f32 const lit_3816 = 50.0f;
COMPILER_STRIP_GATE(0x8066EE0C, &lit_3816);

/* 80668170-80668264 000510 00F4+00 1/1 0/0 0/0 .text
 * daDo_other_bg_check__FP8do_classP10fopAc_ac_c                */
static int daDo_other_bg_check(do_class* i_this, fopAc_ac_c* i_actorP) {
    Vec dog_pos;    // defining as cXyz moves the destructor above this function, breaking the TU
    Vec actor_pos;  // defining as cXyz moves the destructor above this function, breaking the TU

    fopAc_ac_c* actor = (fopAc_ac_c*)i_actorP;  // required for match, maybe fake match?
    do_class* dog = (do_class*)i_this;          // required for match, maybe fake match?

    dBgS_LinChk lin_chk;

    if (actor) {
        actor_pos = actor->current.pos;
        actor_pos.y += FLOAT_LABEL(lit_3816);

        dog_pos = dog->current.pos;
        dog_pos.y = dog->eyePos.y;

        lin_chk.Set((cXyz*)&dog_pos, (cXyz*)&actor_pos, dog);
        if (dComIfG_Bgsp().LineCross(&lin_chk)) {
            return 1;
        } else {
            return 0;
        }

    } else {
        return 1;
    }
}

/* ############################################################################################## */
/* 8066EE10-8066EE14 000028 0004+00 1/7 0/0 0/0 .rodata          @3846 */
SECTION_RODATA static f32 const lit_3846 = 30.0f;
COMPILER_STRIP_GATE(0x8066EE10, &lit_3846);

/* 80668264-8066833C 000604 00D8+00 1/1 0/0 0/0 .text daDo_other_bg_check2__FP8do_classP4cXyz */
static int daDo_other_bg_check2(do_class* i_this, cXyz* i_posP) {
    Vec dog_pos;  // defining as cXyz moves the destructor above this function, breaking the TU
    Vec i_pos;    // defining as cXyz moves the destructor above this function, breaking the TU

    cXyz* pos = (cXyz*)i_posP;          // required for match, maybe fake match?
    do_class* dog = (do_class*)i_this;  // required for match, maybe fake match?

    dBgS_LinChk lin_chk;

    i_pos = *pos;
    i_pos.y += FLOAT_LABEL(lit_3846);

    dog_pos = dog->current.pos;
    dog_pos.y += FLOAT_LABEL(lit_3846);

    lin_chk.Set((cXyz*)&dog_pos, (cXyz*)&i_pos, dog);
    if (dComIfG_Bgsp().LineCross(&lin_chk)) {
        return 1;
    } else {
        return 0;
    }
}

/* ############################################################################################## */
/* 8066F278-8066F27C 000008 0001+03 3/3 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8066F27C-8066F280 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 8066F280-8066F284 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8066F284-8066F288 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 8066F288-8066F28C 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 8066F28C-8066F290 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 8066F290-8066F294 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8066F294-8066F298 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 8066F298-8066F29C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 8066F29C-8066F2A0 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 8066F2A0-8066F2A4 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8066F2A4-8066F2A8 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 8066F2A8-8066F2AC 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 8066F2AC-8066F2B0 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 8066F2B0-8066F2B4 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8066F2B4-8066F2B8 -00001 0004+00 1/2 0/0 0/0 .bss             None */
/* 8066F2B4 0001+01 data_8066F2B4 @1009 */
/* 8066F2B6 0002+00 data_8066F2B6 None */
static u8 struct_8066F2B4[4];

/* 8066F2B8-8066F2C4 000048 000C+00 1/1 0/0 0/0 .bss             @3657 */
static u8 lit_3657[12];

/* 8066F2C4-8066F2E4 000054 0020+00 11/12 0/0 0/0 .bss             l_HIO */
static daDo_HIO_tmp l_HIO;

/* 8066F2E4-8066F2F8 000074 0014+00 1/2 0/0 0/0 .bss             target_info */
static fopAc_ac_c* target_info[5];

/* 8066F2F8-8066F2FC 000088 0004+00 1/2 0/0 0/0 .bss             target_info_count */
static int target_info_count;

/* 8066833C-806683C0 0006DC 0084+00 1/1 0/0 0/0 .text            s_w_sub__FPvPv */
static int s_w_sub(void* param_0, void* param_1) {
    if (fopAcM_IsActor(param_0) &&
        (fopAcM_GetName(param_0) == PROC_OBJ_FOOD || fopAcM_GetName(param_0) == PROC_OBJ_KANBAN2) &&
        fopAcM_checkCarryNow((fopAc_ac_c*)param_0) && target_info_count < 5)
    {
        target_info[target_info_count] = (fopAc_ac_c*)param_0;
        target_info_count++;
    }
    return 0;
}

/* ############################################################################################## */
/* 8066EE14-8066EE18 00002C 0004+00 1/4 0/0 0/0 .rodata          @3922 */
SECTION_RODATA static f32 const lit_3922 = 200.0f;
COMPILER_STRIP_GATE(0x8066EE14, &lit_3922);

/* 8066EE18-8066EE1C 000030 0004+00 0/3 0/0 0/0 .rodata          @3923 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3923 = 240.0f;
COMPILER_STRIP_GATE(0x8066EE18, &lit_3923);
#pragma pop

/* 8066F2FC-8066F310 00008C 0014+00 0/1 0/0 0/0 .bss             target_bgc */
#pragma push
#pragma force_active on
static int target_bgc[5];
#pragma pop

/* 806683C0-8066858C 000760 01CC+00 1/1 0/0 0/0 .text            search_food__FP8do_class */
#ifdef NONMATCHING
// gave up. ghidra is not even close
static u32 search_food(do_class* i_this) {
    int ret;
    target_info_count = 0;

    for (int i = 0; i < 5; i++) {
        target_info[i] = 0;
        target_bgc[i] = 0;
    }

    fpcM_Search((fpcLyIt_JudgeFunc)s_w_sub, i_this);
    f32 tmp = FLOAT_LABEL(lit_3662);

    if (target_info_count != 0) {
        int i = 0;
        f32 pos_check = 0.0f;

        do {
            // for (int j = 0; j != target_info_count; j++) {
            fopAc_ac_c* actorP = target_info[i];
            f32 x_pos = actorP->current.pos.x - i_this->eyePos.x;
            f32 z_pos = actorP->current.pos.z - i_this->eyePos.z;
            f32 f_pos = JMAFastSqrt(x_pos * x_pos + z_pos * z_pos);

            if (f_pos < tmp) {
                if (target_bgc[i] == 0) {
                    if (daDo_other_bg_check(i_this, actorP) == 0) {
                        target_bgc[i] = 1;

                        if (!actorP) {
                            ret = -1;
                        } else {
                            ret = actorP->mBase.mBsPcId;
                        }
                    }
                }
            }

            if (target_info_count == i) {
                ret = 0;
            }
            // }

            i++;
            pos_check += 100.0f;
        } while (pos_check <= i_this->mScale.z * 240.0f);
    } else {
        ret = -1;
    }

    return ret;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm u32 search_food(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/search_food__FP8do_class.s"
}
#pragma pop
#endif

/* 8066858C-806685EC 00092C 0060+00 1/1 0/0 0/0 .text            food_check__FP8do_class */
static void food_check(do_class* i_this) {
    i_this->mFoodActorID = search_food(i_this);

    if (fopAcM_SearchByID(i_this->mFoodActorID)) {
        i_this->mAction = ACT_FOOD;
        i_this->mMode = 0;
    }
}

/* 806685EC-80668624 00098C 0038+00 1/1 0/0 0/0 .text            do_carry_check__FP8do_class */
static int do_carry_check(do_class* i_this) {
    if (i_this->mAction != ACT_CARRY && fopAcM_checkCarryNow(i_this)) {
        i_this->mAction = ACT_CARRY;
        i_this->mMode = 0;
        return 1;
    }

    return 0;
}

/* ############################################################################################## */
/* 8066EE1C-8066EE20 000034 0004+00 0/2 0/0 0/0 .rodata          @3981 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3981 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x8066EE1C, &lit_3981);
#pragma pop

/* 80668624-80668754 0009C4 0130+00 1/1 0/0 0/0 .text            depth_check__FP8do_class4cXyzf */
static BOOL depth_check(do_class* i_this, cXyz i_pos, f32 param_2) {
    dBgS_GndChk gnd_chk;
    Vec pos;
    f32 f_gnd_chk;
    f32 f_gnd_chk_spl;
    f32 sub_res;
    f32 mul_res;
    f32 f_res;

    pos.x = i_pos.x;
    pos.y = FLOAT_LABEL(lit_3922) + i_pos.y;
    pos.z = i_pos.z;

    gnd_chk.SetPos(&pos);
    f_gnd_chk = dComIfG_Bgsp().GroundCross(&gnd_chk);

    dBgS_ObjGndChk_Spl gnd_chk_spl;
    gnd_chk_spl.SetPos(&pos);
    f_gnd_chk_spl = dComIfG_Bgsp().GroundCross(&gnd_chk_spl);

    sub_res = f_gnd_chk_spl - f_gnd_chk;
    mul_res = FLOAT_LABEL(lit_3665) * param_2 * FLOAT_LABEL(lit_3981);
    f_res = mul_res * i_this->mScale.z;

    if (sub_res > f_res) {
        return 1;
    } else {
        return 0;
    }
}

/* ############################################################################################## */
/* 8066EE20-8066EE24 000038 0004+00 1/1 0/0 0/0 .rodata          @3994 */
SECTION_RODATA static f32 const lit_3994 = 8.0f;
COMPILER_STRIP_GATE(0x8066EE20, &lit_3994);

/* 80668754-8066886C 000AF4 0118+00 1/1 0/0 0/0 .text            water_check__FP8do_class */
static bool water_check(do_class* i_this) {
    dBgS_GndChk gnd_chk;
    Vec pos;

    pos = i_this->current.pos;
    pos.y += FLOAT_LABEL(lit_3922);

    gnd_chk.SetPos(&pos);
    f32 f_gnd_chk = dComIfG_Bgsp().GroundCross(&gnd_chk);

    dBgS_ObjGndChk_Spl gnd_chk_spl;
    gnd_chk_spl.SetPos(&pos);
    i_this->mWaterY = dComIfG_Bgsp().GroundCross(&gnd_chk_spl);
    f32 sub_res = i_this->mWaterY - f_gnd_chk;
    f32 mul_res = FLOAT_LABEL(lit_3994) * i_this->mScale.z;

    if (sub_res > mul_res) {
        return 1;
    } else {
        return 0;
    }
}

/* ############################################################################################## */
/* 8066EE24-8066EE28 00003C 0004+00 0/2 0/0 0/0 .rodata          @4025 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4025 = 25.0f;
COMPILER_STRIP_GATE(0x8066EE24, &lit_4025);
#pragma pop

/* 8066EE28-8066EE2C 000040 0004+00 0/1 0/0 0/0 .rodata          @4026 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4026 = 60.0f;
COMPILER_STRIP_GATE(0x8066EE28, &lit_4026);
#pragma pop

/* 8066EE2C-8066EE30 000044 0004+00 0/11 0/0 0/0 .rodata          @4027 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4027 = 5.0f;
COMPILER_STRIP_GATE(0x8066EE2C, &lit_4027);
#pragma pop

/* 8066886C-80668A30 000C0C 01C4+00 4/4 0/0 0/0 .text            dansa_check__FP8do_class4cXyzf */
#ifdef NONMATCHING
// regalloc
static int dansa_check(do_class* i_this, cXyz i_pos, f32 param_2) {
    i_pos.y = i_pos.y + FLOAT_LABEL(lit_4025);
    dBgS_GndChk gnd_chk;

    Vec pos;
    pos.x = i_pos.x;
    pos.y = FLOAT_LABEL(lit_4025) + i_pos.y;
    pos.z = i_pos.z;

    gnd_chk.SetPos(&pos);
    f32 f_gnd_chk = dComIfG_Bgsp().GroundCross(&gnd_chk);

    if (i_this->current.pos.y - f_gnd_chk > param_2) {
        return 1;
    } else {
        dBgS_LinChk lin_chk;
        cXyz pos2;

        pos2.x = i_this->current.pos.x;
        pos2.y = i_this->current.pos.y;
        pos2.z = i_this->current.pos.z;
        pos2.y = i_this->current.pos.y + FLOAT_LABEL(lit_4026);

        lin_chk.Set(&pos2, &i_pos, i_this);

        if (dComIfG_Bgsp().LineCross(&lin_chk) != 0) {
            return -1;
        } else {
            if (depth_check(i_this, i_pos, FLOAT_LABEL(lit_4027)) && l_HIO.mSwimming == 0) {
                return 0xffffff9c;

            } else {
                return 0;
            }
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int dansa_check(do_class* i_this, cXyz param_1, f32 param_2) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/dansa_check__FP8do_class4cXyzf.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8066EE30-8066EE34 000048 0004+00 0/1 0/0 0/0 .rodata          @4057 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4057 = 70.0f;
COMPILER_STRIP_GATE(0x8066EE30, &lit_4057);
#pragma pop

/* 8066EE34-8066EE38 00004C 0004+00 0/1 0/0 0/0 .rodata          @4058 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4058 = 9.0f;
COMPILER_STRIP_GATE(0x8066EE34, &lit_4058);
#pragma pop

/* 80668A30-80668B18 000DD0 00E8+00 3/3 0/0 0/0 .text            dansa_check2__FP8do_classf */
#ifdef NONMATCHING
// float regalloc
static bool dansa_check2(do_class* i_this, f32 param_1) {
    cXyz pos;
    cXyz pos2;

    mDoMtx_YrotS((MtxP)calc_mtx, i_this->current.angle.y);
    pos.x = FLOAT_LABEL(lit_3682);
    pos.y = FLOAT_LABEL(lit_4057);
    f32 tmp = i_this->mScale.z;
    pos.z = tmp * (FLOAT_LABEL(lit_3981) * param_1) +
            tmp * (FLOAT_LABEL(lit_3981) * i_this->speedF) * FLOAT_LABEL(lit_4058);

    MtxPosition(&pos, &pos2);
    pos2 += i_this->current.pos;
    return dansa_check(i_this, pos2, FLOAT_LABEL(lit_3772)) != 0;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int dansa_check2(do_class* i_this, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/dansa_check2__FP8do_classf.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8066EE38-8066EE3C 000050 0004+00 1/1 0/0 0/0 .rodata          @4068 */
SECTION_RODATA static f32 const lit_4068 = 130.0f;
COMPILER_STRIP_GATE(0x8066EE38, &lit_4068);

/* 8066EE3C-8066EE40 000054 0004+00 1/4 0/0 0/0 .rodata          @4069 */
SECTION_RODATA static f32 const lit_4069 = 15.0f;
COMPILER_STRIP_GATE(0x8066EE3C, &lit_4069);

/* 80668B18-80668BA0 000EB8 0088+00 4/4 0/0 0/0 .text            move_dansa_check__FP8do_classf */
static int move_dansa_check(do_class* i_this, f32 i_speed) {
    if (dansa_check2(i_this, FLOAT_LABEL(lit_4068)) != 0) {
        i_this->mAction = ACT_WAIT_1;

        if (i_speed > FLOAT_LABEL(lit_4069)) {
            i_this->mMode = 10;
        } else {
            i_this->mMode = 0;
        }

        return 1;
    } else {
        return 0;
    }
}

/* ############################################################################################## */
/* 8066EE40-8066EE48 000058 0008+00 0/3 0/0 0/0 .rodata          @4134 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4134[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8066EE40, &lit_4134);
#pragma pop

/* 8066EE48-8066EE50 000060 0008+00 0/3 0/0 0/0 .rodata          @4135 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4135[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8066EE48, &lit_4135);
#pragma pop

/* 8066EE50-8066EE58 000068 0008+00 0/3 0/0 0/0 .rodata          @4136 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4136[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8066EE50, &lit_4136);
#pragma pop

/* 8066EE58-8066EE60 000070 0008+00 0/1 0/0 0/0 .rodata          @4138 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4138[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8066EE58, &lit_4138);
#pragma pop

/* 80668BA0-80668D5C 000F40 01BC+00 5/5 0/0 0/0 .text            area_check__FP8do_class */
#ifdef NONMATCHING
// matches with literals
static void area_check(do_class* i_this) {
    cXyz pos_delta = i_this->home.pos - i_this->current.pos;

    if (i_this->field_0x5b6 != 255) {
        if ((i_this->field_0x5b6 * FLOAT_LABEL(lit_3772) * FLOAT_LABEL(lit_3665)) > pos_delta.abs())
        {
            i_this->mAction = ACT_WALK;
            i_this->mMode = -1;
            i_this->mTimer[2] = cM_rndF(FLOAT_LABEL(lit_3772)) +
                                     FLOAT_LABEL(lit_3772);  // random value between 100 and 200
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void area_check(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/area_check__FP8do_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8066EE60-8066EE64 000078 0004+00 0/5 0/0 0/0 .rodata          @4189 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4189 = 20.0f;
COMPILER_STRIP_GATE(0x8066EE60, &lit_4189);
#pragma pop

/* 8066EE64-8066EE68 00007C 0004+00 0/4 0/0 0/0 .rodata          @4190 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4190 = 1000.0f;
COMPILER_STRIP_GATE(0x8066EE64, &lit_4190);
#pragma pop

/* 8066EE68-8066EE6C 000080 0004+00 0/5 0/0 0/0 .rodata          @4191 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4191 = 2000.0f;
COMPILER_STRIP_GATE(0x8066EE68, &lit_4191);
#pragma pop

/* 8066EE6C-8066EE70 000084 0004+00 0/9 0/0 0/0 .rodata          @4192 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4192 = 10.0f;
COMPILER_STRIP_GATE(0x8066EE6C, &lit_4192);
#pragma pop

/* 8066EE70-8066EE74 000088 0004+00 0/0 0/0 0/0 .rodata          @4193 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4193 = 1500.0f;
COMPILER_STRIP_GATE(0x8066EE70, &lit_4193);
#pragma pop

/* 8066EE74-8066EE78 00008C 0004+00 0/8 0/0 0/0 .rodata          @4194 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4194 = 3.0f;
COMPILER_STRIP_GATE(0x8066EE74, &lit_4194);
#pragma pop

/* 8066EE78-8066EE7C 000090 0004+00 0/4 0/0 0/0 .rodata          @4336 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4336 = 4.0f;
COMPILER_STRIP_GATE(0x8066EE78, &lit_4336);
#pragma pop

/* 8066EE7C-8066EE80 000094 0004+00 0/1 0/0 0/0 .rodata          @4337 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4337 = 17.0f / 10.0f;
COMPILER_STRIP_GATE(0x8066EE7C, &lit_4337);
#pragma pop

/* 8066EE80-8066EE84 000098 0004+00 0/1 0/0 0/0 .rodata          @4338 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4338 = 65536.0f;
COMPILER_STRIP_GATE(0x8066EE80, &lit_4338);
#pragma pop

/* 8066EE84-8066EE88 00009C 0004+00 0/1 0/0 0/0 .rodata          @4339 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4339 = 300.0f;
COMPILER_STRIP_GATE(0x8066EE84, &lit_4339);
#pragma pop

/* 80668D5C-80669050 0010FC 02F4+00 2/1 0/0 0/0 .text            do_stay__FP8do_class */
#ifdef NONMATCHING
// regalloc and float literals
static void do_stay(do_class* i_this) {
    switch (i_this->mMode) {
    case 0: {
        if (i_this->field_0x5b4 == 0) {
            anm_init(i_this, ANM_DOWN_WT, FLOAT_LABEL(lit_4069), 2, FLOAT_LABEL(lit_3662));
            i_this->mMode++;
            i_this->mTimer[0] = 10;
        } else {
            i_this->mAction = ACT_WALK;
            i_this->mMode = 0;
            return;
        }
    }
    case 1: {
        if (i_this->mTimer[0] == 0 && i_this->mDistFromPlayer < l_HIO.mRunSpeed) {
            i_this->mMode++;
            i_this->mTimer[0] = cM_rndF(FLOAT_LABEL(lit_3816)) +
                                     FLOAT_LABEL(lit_4189);  // random number between 20 and 70
        }
        break;
    }
    case 2: {
        i_this->field_0x616 = 1;
        i_this->field_0x614 = 0xe764;
        i_this->mTailWagTarget = FLOAT_LABEL(lit_4190);
        if (i_this->mTimer[0] == 0) {
            anm_init(i_this, ANM_DOWN, FLOAT_LABEL(lit_4027), 0, FLOAT_LABEL(lit_3662));
            i_this->mMode++;
        }
        break;
    }
    case 3: {
        i_this->field_0x616 = 1;
        i_this->mTailWagTarget = FLOAT_LABEL(lit_4191);

        if (i_this->mpMorf->isStop()) {
            i_this->mAction = ACT_WALK_RUN;
            i_this->mMode = 0;
        }
        break;
    }
    case 10: {
        anm_init(i_this, ANM_DOWN_WT, FLOAT_LABEL(lit_4069), 2, FLOAT_LABEL(lit_3662));
        i_this->mMode++;
    }
    case 11: {
        i_this->field_0x616 = 1;
        i_this->field_0x614 = 0xe764;
        i_this->mTailWagTarget = FLOAT_LABEL(lit_4190);

        if (i_this->mEyePosYDistFromPlayer > FLOAT_LABEL(lit_3846)) {
            i_this->mMode++;
            i_this->mTimer[0] = cM_rndF(FLOAT_LABEL(lit_4192)) +
                                     FLOAT_LABEL(lit_4192);  // random number between 10 and 20
        }

        if (i_this->mDistFromPlayer > FLOAT_LABEL(lit_3772) + l_HIO.mPlayerRecognitionDist) {
            i_this->field_0x5f4 = 0;
            i_this->mMode = 0;
        }
        break;
    }
    case 12: {
        i_this->field_0x616 = 1;
        i_this->field_0x614 = 0xe764;
        i_this->mTailWagTarget = FLOAT_LABEL(lit_4193);

        if (i_this->mEyePosYDistFromPlayer > FLOAT_LABEL(lit_3846)) {
            if (i_this->mTimer[0] == 0) {
                anm_init(i_this, ANM_DOWN, FLOAT_LABEL(lit_4194), 0, FLOAT_LABEL(lit_3662));
                i_this->mMode = 13;
            }
        } else {
            i_this->mMode = 11;
        }
        break;
    }
    case 13: {
        i_this->field_0x616 = 1;
        i_this->mTailWagTarget = FLOAT_LABEL(lit_4193);

        if (i_this->mpMorf->isStop()) {
            i_this->mAction = ACT_WAIT_1;
            i_this->mMode = 0;
        }
    }
    }

    f32* speedF = (f32*)&i_this->speedF;

    cLib_addCalc0(speedF, FLOAT_LABEL(lit_3662), FLOAT_LABEL(lit_3662));
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void do_stay(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/do_stay__FP8do_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8066EE88-8066EE8C 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4340 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4340 = 13.0f / 10.0f;
COMPILER_STRIP_GATE(0x8066EE88, &lit_4340);
#pragma pop

/* 8066EE8C-8066EE90 0000A4 0004+00 0/3 0/0 0/0 .rodata          @4341 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4341 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x8066EE8C, &lit_4341);
#pragma pop

/* 8066EE90-8066EE94 0000A8 0004+00 0/4 0/0 0/0 .rodata          @4342 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4342 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x8066EE90, &lit_4342);
#pragma pop

/* 8066EE94-8066EE98 0000AC 0004+00 0/2 0/0 0/0 .rodata          @4343 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4343 = 150.0f;
COMPILER_STRIP_GATE(0x8066EE94, &lit_4343);
#pragma pop

/* 8066EE98-8066EE9C 0000B0 0004+00 0/3 0/0 0/0 .rodata          @4344 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4344 = 3000.0f;
COMPILER_STRIP_GATE(0x8066EE98, &lit_4344);
#pragma pop

/* 8066EE9C-8066EEA0 0000B4 0004+00 0/3 0/0 0/0 .rodata          @4345 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4345 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x8066EE9C, &lit_4345);
#pragma pop

/* 80669050-8066973C 0013F0 06EC+00 2/1 0/0 0/0 .text            do_walk__FP8do_class */
#ifdef NONMATCHING
// float literals + regalloc
static void do_walk(do_class* i_this) {
    cXyz local_5c;
    i_this->mTailWagTarget = 1000.0;

    switch (i_this->mMode + 1) {
    case 12: {
        i_this->mTargetPos = i_this->home.pos;
        i_this->speedF >= l_HIO.mRunSpeed ? i_this->mAnmSpeed = 1.7 : i_this->mAnmSpeed = 4.0;

        i_this->mTargetAnmSpeed = 1.7;
        anm_init(i_this, ANM_WALK, 0.0, 2, i_this->mAnmSpeed);
        i_this->mMode = 3;
        break;
    }
    case 0: {
        if (i_this->field_0x5f4 == 8) {
            anm_init(i_this, ANM_SIT, 0.0, 0, 1.0);
        } else {
            anm_init(i_this, ANM_DOWN, 0.0, 0, 1.0);
        }

        i_this->mMode++;
        break;
    }

    case 1: {
        if (i_this->mpMorf->isStop()) {
            i_this->mMode++;
            ;
        }
        break;
    }

    case 2: {
        local_5c.x = 0.0;
        local_5c.y = 20.0;

        for (int i = 0; i < 100; i++) {
            mDoMtx_YrotS((MtxP)calc_mtx, cM_rndF(65536.0));

            local_5c.z = cM_rndF(100.0f * i_this->field_0x5b6);
            MtxPosition(&local_5c, &i_this->mTargetPos);

            i_this->mTargetPos += i_this->home.pos;

            if (dansa_check(i_this, i_this->mTargetPos, 0.0) == 0) {
                local_5c = i_this->mTargetPos - i_this->current.pos;

                if (local_5c.abs() > 300.0f)
                    break;
            }
        }

        f32 rnd_number = cM_rndF(0.6);
        i_this->mTargetAnmSpeed = rnd_number + 1.3;
        i_this->mAnmSpeed = rnd_number + 1.3;

        anm_init(i_this, ANM_WALK, 0.0, 2, i_this->mAnmSpeed);

        i_this->mMode++;
    }

    case 3: {
        local_5c = i_this->mTargetPos - i_this->current.pos;

        cLib_addCalcAngleS2(&i_this->current.angle.y, (s16)cM_atan2s(local_5c.x, local_5c.z), 0x10,
                            0x100);
        cLib_addCalc2(&i_this->speedF, i_this->mAnmSpeed * l_HIO.mWalkSpeed, 1.0,
                      l_HIO.mWalkSpeed * 0.2);

        if (local_5c.abs() < 150.0) {
            if (i_this->field_0x5b4 == 0) {
                i_this->mAction = ACT_STAY;
                i_this->mMode = 0;
            } else {
                anm_init(i_this, ANM_WAIT, 0.0, 2, 1.0);
                i_this->mTimer[0] = cM_rndF(50.0) + 20.0;
                i_this->mTargetAnmSpeed = 1.0;
                i_this->mMode++;
            }
        }

        break;
    }

    case 4: {
        cLib_addCalc0(&i_this->speedF, 1.0, 1.0);

        if (i_this->mTimer[0] == 0) {
            i_this->mMode = 2;
        }

        break;
    }

    case 10: {
        cLib_addCalc0(&i_this->speedF, 1.0, 1.0);
        cLib_addCalcAngleS2(&i_this->current.angle.y, i_this->mTargetAngleY, 4, 0x400);

        i_this->field_0x616 = 1;
        i_this->mTailWagTarget = 2000.0;

        s16 angle_diff = i_this->current.angle.y - i_this->mTargetAngleY;

        if (angle_diff < 0) {
            angle_diff *= -1;
        }

        if (angle_diff < 0x800) {
            i_this->mMode++;
            anm_init(i_this, ANM_WAIT, 0.0, 2, 1.0);
            i_this->mTargetAnmSpeed = 1.0;
            i_this->mTimer[0] = cM_rndF(10.0) + 10.0;
        }

        break;
    }

    case 11: {
        i_this->field_0x616 = 1;
        i_this->mTailWagTarget = 3000.0;
        if (i_this->mTimer[0] == 0) {
            i_this->mAction = ACT_WALK_RUN;
            i_this->mMode = 0;
            return;
        }
        break;
    }
    }

    cLib_addCalc2(&i_this->mAnmSpeed, i_this->mTargetAnmSpeed, 1.0, 0.05);
    i_this->mpMorf->setPlaySpeed(i_this->mAnmSpeed);

    if (i_this->mTimer[2] == 0 && i_this->mMode < 10 &&
        i_this->mDistFromPlayer < l_HIO.mPlayerRecognitionDist)
    {
        anm_init(i_this, ANM_STEP_2, 0.0, 2, 1.0);
        i_this->mMode = 10;
    }

    move_dansa_check(i_this, i_this->speedF);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void do_walk(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/do_walk__FP8do_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8066EEA0-8066EEA4 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4377 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4377 = 0.25f;
COMPILER_STRIP_GATE(0x8066EEA0, &lit_4377);
#pragma pop

/* 8066EEA4-8066EEA8 0000BC 0004+00 0/2 0/0 0/0 .rodata          @4378 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4378 = 160.0f;
COMPILER_STRIP_GATE(0x8066EEA4, &lit_4378);
#pragma pop

/* 8066973C-806698D0 001ADC 0194+00 1/1 0/0 0/0 .text            do_walk_run__FP8do_class */
static void do_walk_run(do_class* i_this) {
    i_this->field_0x616 = 1;
    i_this->mTailWagTarget = FLOAT_LABEL(lit_4344);

    switch (i_this->mMode) {
    case 0: {
        i_this->mAnmSpeed = FLOAT_LABEL(lit_4377);
        anm_init(i_this, 22, FLOAT_LABEL(lit_4192), 2, i_this->mAnmSpeed);
        i_this->mMode++;
    }
    case 1: {
        cLib_addCalc2(&i_this->mAnmSpeed, FLOAT_LABEL(lit_3665), FLOAT_LABEL(lit_3662),
                      FLOAT_LABEL(lit_4345));
        i_this->mpMorf->setPlaySpeed(i_this->mAnmSpeed);

        if (i_this->mAnmSpeed >= FLOAT_LABEL(lit_3665)) {
            i_this->mAction = ACT_RUN;
            i_this->mMode = 0;
            i_this->mSound.startSound(Z2SE_DOG_BARK, 0, -1);
        }
    }
    default: {
        cLib_addCalc2(&i_this->speedF, i_this->mAnmSpeed * l_HIO.mWalkSpeed,
                      FLOAT_LABEL(lit_3662), FLOAT_LABEL(lit_4342) * l_HIO.mWalkSpeed);
        cLib_addCalcAngleS2(&i_this->current.angle.y, i_this->mTargetAngleY, 8, 0x400);

        if (i_this->mDistFromPlayer < FLOAT_LABEL(lit_4378) * i_this->mScale.z) {
            l_HIO.mWaitType != 0 ? i_this->mAction = ACT_WAIT_2 : i_this->mAction = ACT_WAIT_1;
            i_this->mMode = 0;
        }

        area_check(i_this);
        move_dansa_check(i_this, i_this->speedF);
    }
    }
}

/* ############################################################################################## */
/* 8066EEA8-8066EEAC 0000C0 0004+00 0/3 0/0 0/0 .rodata          @4400 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4400 = 4000.0f;
COMPILER_STRIP_GATE(0x8066EEA8, &lit_4400);
#pragma pop

/* 8066EEAC-8066EEB0 0000C4 0004+00 0/3 0/0 0/0 .rodata          @4401 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4401 = 1.5f;
COMPILER_STRIP_GATE(0x8066EEAC, &lit_4401);
#pragma pop

/* 8066EEB0-8066EEB4 0000C8 0004+00 0/5 0/0 0/0 .rodata          @4402 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4402 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8066EEB0, &lit_4402);
#pragma pop

/* 8066EEB4-8066EEB8 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4403 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4403 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x8066EEB4, &lit_4403);
#pragma pop

/* 8066EEB8-8066EEBC 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4404 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4404 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x8066EEB8, &lit_4404);
#pragma pop

/* 8066EEBC-8066EEC0 0000D4 0004+00 0/2 0/0 0/0 .rodata          @4405 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4405 = 320.0f;
COMPILER_STRIP_GATE(0x8066EEBC, &lit_4405);
#pragma pop

/* 8066EEC0-8066EEC4 0000D8 0004+00 0/1 0/0 0/0 .rodata          @4406 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4406 = 7.0f / 5.0f;
COMPILER_STRIP_GATE(0x8066EEC0, &lit_4406);
#pragma pop

/* 806698D0-80669A1C 001C70 014C+00 1/1 0/0 0/0 .text            do_run__FP8do_class */
static void do_run(do_class* i_this) {
    i_this->field_0x616 = 1;
    i_this->mTailWagTarget = FLOAT_LABEL(lit_4400);

    switch (i_this->mMode) {
    case 0: {
        i_this->mAnmSpeed = FLOAT_LABEL(lit_3662);
        i_this->mTargetAnmSpeed = cM_rndF(FLOAT_LABEL(lit_4402)) + FLOAT_LABEL(lit_4401);
        anm_init(i_this, 14, FLOAT_LABEL(lit_3665), 2, FLOAT_LABEL(lit_4403) * i_this->mAnmSpeed);
        i_this->mMode++;
    }
    case 1: {
        cLib_addCalc2(&i_this->mAnmSpeed, i_this->mTargetAnmSpeed, FLOAT_LABEL(lit_3662),
                      FLOAT_LABEL(lit_4404));
        i_this->mpMorf->setPlaySpeed(i_this->mAnmSpeed);

        if (i_this->mDistFromPlayer < FLOAT_LABEL(lit_4405) * i_this->mScale.z) {
            i_this->mAction = ACT_RUN_WALK;
            i_this->mMode = 0;
        }
    }
    default: {
        cLib_addCalc2(&i_this->speedF,
                      i_this->mAnmSpeed * l_HIO.mRunSpeed * FLOAT_LABEL(lit_4406),
                      FLOAT_LABEL(lit_3662), FLOAT_LABEL(lit_4342) * l_HIO.mRunSpeed);
        cLib_addCalcAngleS2(&i_this->current.angle.y, i_this->mTargetAngleY, 8, 0x800);
        area_check(i_this);
        move_dansa_check(i_this, i_this->speedF);
    }
    }
}

/* ############################################################################################## */
/* 8066EEC4-8066EEC8 0000DC 0004+00 0/1 0/0 0/0 .rodata          @4435 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4435 = 360.0f;
COMPILER_STRIP_GATE(0x8066EEC4, &lit_4435);
#pragma pop

/* 80669A1C-80669B80 001DBC 0164+00 1/1 0/0 0/0 .text            do_run_walk__FP8do_class */
static void do_run_walk(do_class* i_this) {
    i_this->field_0x616 = 1;
    i_this->mTailWagTarget = FLOAT_LABEL(lit_4344);

    switch (i_this->mMode) {
    case 0: {
        i_this->mAnmSpeed = FLOAT_LABEL(lit_4336);
        anm_init(i_this, 22, FLOAT_LABEL(lit_4194), 2, i_this->mAnmSpeed);
        i_this->mMode++;
    }
    case 1: {
        cLib_addCalc2(&i_this->mAnmSpeed, FLOAT_LABEL(lit_4401), FLOAT_LABEL(lit_3662),
                      FLOAT_LABEL(lit_4345));
        i_this->mpMorf->setPlaySpeed(i_this->mAnmSpeed);
    }
    default: {
        cLib_addCalc2(&i_this->speedF, i_this->mAnmSpeed * l_HIO.mWalkSpeed,
                      FLOAT_LABEL(lit_3662), FLOAT_LABEL(lit_4027));
        cLib_addCalcAngleS2(&i_this->current.angle.y, i_this->mTargetAngleY, 8, 0x400);

        if (i_this->mDistFromPlayer < FLOAT_LABEL(lit_4378) * i_this->mScale.z) {
            l_HIO.mWaitType != 0 ? i_this->mAction = ACT_WAIT_2 : i_this->mAction = ACT_WAIT_1;
            i_this->mMode = 0;
        } else {
            if (i_this->mDistFromPlayer > FLOAT_LABEL(lit_4435) * i_this->mScale.z) {
                i_this->mAction = ACT_RUN;
                i_this->mMode = 0;
            }
        }

        area_check(i_this);
        move_dansa_check(i_this, i_this->speedF);
    }
    }
}

/* 80669B80-8066A1C4 001F20 0644+00 2/1 0/0 0/0 .text            do_wait_1__FP8do_class */
#ifdef NONMATCHING
static void do_wait_1(do_class* i_this) {
    fopAc_ac_c* player = dComIfGp_getPlayer(0);
    i_this->field_0x616 = 1;
    i_this->mTailWagTarget = 2000.0;

    s16 player_angle = i_this->mTargetAngleY;
    s16 angle_diff = i_this->current.angle.y - player_angle;

    if (angle_diff < 0) {
        angle_diff *= -1;
    }

    s16 some_val = 0x3000;

    if ((i_this->field_0x5f0 & 0x7fU) == 0) {
        some_val = 0x1000;
    }

    switch (i_this->mMode) {
    case 0: {
        if (i_this->mDistFromPlayer <= i_this->mScale.z * 320.0) {
            anm_init(i_this, ANM_WAIT, 0.0, 2, 0.0);
            i_this->mMode++;
        } else {
            anm_init(i_this, ANM_JOYFUL, 0.0, 2, cM_rndFX(0.1) + 0.6);
            i_this->mMode = -1;
        }
        // goto default;
    }
    case 2: {
        cLib_addCalcAngleS2(&i_this->current.angle.y, player_angle, 4, 0x400);

        if (angle_diff < 0x800) {
            i_this->mMode = 0;
        }

        break;
    }
    case 3: {
        if (75.0 <= i_this->mEyePosYDistFromPlayer) {
            i_this->mMode = 1;
        } else if (i_this->mTimer[0] == 0) {
            if (30.0 <= i_this->mEyePosYDistFromPlayer) {
                i_this->mAction = ACT_SIT;
                i_this->mMode = 0;
            } else {
                i_this->mAction = ACT_STAY;
                i_this->mMode = 10;
            }
        }
        break;
    }
    case 5: {
        cLib_addCalcAngleS2(&i_this->current.angle.y, player_angle + i_this->mRandomAngleY, 4, 0x800);
        cLib_addCalcAngleS2(&i_this->mRandomAngleY, i_this->mRandomTargetAngleY, 4, 0x1000);
        cLib_addCalc2(&i_this->current.pos.x, i_this->mTargetPos.x, 0.2, 3.5);
        cLib_addCalc2(&i_this->current.pos.z, i_this->mTargetPos.z, 0.2, 3.5);

        if (i_this->mTimer[0] == 0) {
            i_this->mMode = 0;
        }
        break;
    }
    case 6: {
        i_this->mTailWagTarget = 4000.0;

        if (i_this->mScale.z * 176.0 < i_this->mDistFromPlayer) {
            i_this->mMode = 0;
        }
    }
    default: {
        if (some_val < angle_diff) {
            anm_init(i_this, ANM_STEP_2, 0.0, 2, 0.0);
            i_this->mMode = 2;
        } else if (75.0 <= i_this->mEyePosYDistFromPlayer) {
            // i_this->mScale.z might be a store in a variable
            if (i_this->mScale.z * 96.0 <= i_this->mDistFromPlayer) {
                if ((i_this->mMode != 6) &&
                    (i_this->mDistFromPlayer < i_this->mScale.z * 120.0))
                {
                    anm_init(i_this, ANM_JOYFUL, 0.0, 2, cM_rndFX(0.1) + 1.0);
                    i_this->mMode = 6;
                }
            } else {
                cXyz local_68;
                local_68.x = 0.0;
                f32 dVar10 = 20.0;
                local_68.y = 20.0;

                f32 dVar11 = -176.0;
                f32 dVar12 = 0.2000000029802322;

                for (int i = 0; i < 20; i++) {
                    if (i < 10) {
                        mDoMtx_YrotS((MtxP)calc_mtx, i_this->mTargetAngleY + cM_rndFX(5000.0));
                    } else {
                        mDoMtx_YrotS((MtxP)calc_mtx, cM_rndF(65536.0));
                    }

                    local_68.z = dVar11 * i_this->mScale.z;

                    MtxPosition(&local_68, &i_this->mTargetPos);
                    i_this->mTargetPos += player->current.pos;

                    if (cM_rndF(1.0) < dVar12)
                        break;

                    // local_74 = i_this->field6_0x5b8;
                    if (dansa_check(i_this, i_this->mTargetPos, 0.0) == 0)
                        break;

                    i_this->mUnkPos = i_this->mTargetPos;
                    i_this->field_0x624 = dVar10 + cM_rndF(10.0);
                }

                i_this->mMode = 5;
                i_this->mRandomTargetAngleY = cM_rndFX(10000.0);

                anm_init(i_this, ANM_WALK, 0.0, 2, 0.0);
                i_this->mTimer[0] = cM_rndF(10.0) + 15.0;
            }
        } else {
            i_this->mMode = 3;
            i_this->mTimer[0] = cM_rndF(10.0) + 10.0;
        }
        break;
    }
    case 10: {
        i_this->mAnmSpeed = 5.0;
        anm_init(i_this, ANM_WALK, 0.0, 2, i_this->mAnmSpeed);

        i_this->mMode++;
    }
    case 11: {
        cLib_addCalc2(&i_this->mAnmSpeed, 2.0, 1.0, 0.2);
        i_this->mpMorf->setPlaySpeed(i_this->mAnmSpeed);

        if (i_this->mAnmSpeed <= 2.2) {
            i_this->mMode = 0;
        }

        break;
    }
    case -1: {
    }
    case 1: {
        // goto default;
    }
    }

    cLib_addCalc0(&i_this->speedF, 1.0, 1.0);

    if (i_this->mScale.z * 240.0 < i_this->mDistFromPlayer && !dansa_check2(i_this, 0.0) &&
        i_this->mMode < 10)
    {
        i_this->mAction = ACT_WALK_RUN;
        i_this->mAnmSpeed = 1.5;
        anm_init(i_this, ANM_WALK, 0.0, 2, i_this->mAnmSpeed);
        i_this->mMode = 1;
    }

    // might be a seperate variable for link
    if (daPy_getLinkPlayerActorClass()->checkCanoeRide() && i_this->mDistFromPlayer < 1000.0) {
        i_this->mAction = ACT_HELP;
        i_this->mMode = 0;
    }

    if (i_this->field_0x5b4 == 2) {
        f32 distance = i_this->mDistFromPlayer * 0.0215;

        if (127.0 < distance) {
            distance = 127.0;
        }

        i_this->mSound.startLevelSound(Z2SE_DOG_V_CALL_HELP, distance, -1);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void do_wait_1(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/do_wait_1__FP8do_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8066EEC8-8066EECC 0000E0 0004+00 0/1 0/0 0/0 .rodata          @4545 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4545 = 75.0f;
COMPILER_STRIP_GATE(0x8066EEC8, &lit_4545);
#pragma pop

/* 8066EECC-8066EED0 0000E4 0004+00 0/0 0/0 0/0 .rodata          @4546 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4546 = 96.0f;
COMPILER_STRIP_GATE(0x8066EECC, &lit_4546);
#pragma pop

/* 8066EED0-8066EED4 0000E8 0004+00 0/0 0/0 0/0 .rodata          @4547 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4547 = 5000.0f;
COMPILER_STRIP_GATE(0x8066EED0, &lit_4547);
#pragma pop

/* 8066EED4-8066EED8 0000EC 0004+00 0/0 0/0 0/0 .rodata          @4548 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4548 = -176.0f;
COMPILER_STRIP_GATE(0x8066EED4, &lit_4548);
#pragma pop

/* 8066EED8-8066EEDC 0000F0 0004+00 0/0 0/0 0/0 .rodata          @4549 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4549 = 10000.0f;
COMPILER_STRIP_GATE(0x8066EED8, &lit_4549);
#pragma pop

/* 8066EEDC-8066EEE0 0000F4 0004+00 0/0 0/0 0/0 .rodata          @4550 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4550 = -3.0f;
COMPILER_STRIP_GATE(0x8066EEDC, &lit_4550);
#pragma pop

/* 8066EEE0-8066EEE4 0000F8 0004+00 0/2 0/0 0/0 .rodata          @4551 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4551 = 120.0f;
COMPILER_STRIP_GATE(0x8066EEE0, &lit_4551);
#pragma pop

/* 8066EEE4-8066EEE8 0000FC 0004+00 0/0 0/0 0/0 .rodata          @4552 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4552 = 3.5f;
COMPILER_STRIP_GATE(0x8066EEE4, &lit_4552);
#pragma pop

/* 8066EEE8-8066EEEC 000100 0004+00 0/0 0/0 0/0 .rodata          @4553 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4553 = 176.0f;
COMPILER_STRIP_GATE(0x8066EEE8, &lit_4553);
#pragma pop

/* 8066EEEC-8066EEF0 000104 0004+00 0/0 0/0 0/0 .rodata          @4554 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4554 = 11.0f / 5.0f;
COMPILER_STRIP_GATE(0x8066EEEC, &lit_4554);
#pragma pop

/* 8066EEF0-8066EEF4 000108 0004+00 0/1 0/0 0/0 .rodata          @4555 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4555 = 0x3CB020C5;
COMPILER_STRIP_GATE(0x8066EEF0, &lit_4555);
#pragma pop

/* 8066EEF4-8066EEF8 00010C 0004+00 0/1 0/0 0/0 .rodata          @4556 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4556 = 127.0f;
COMPILER_STRIP_GATE(0x8066EEF4, &lit_4556);
#pragma pop

/* 8066EEF8-8066EEFC 000110 0004+00 0/2 0/0 0/0 .rodata          @4587 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4587 = 15000.0f;
COMPILER_STRIP_GATE(0x8066EEF8, &lit_4587);
#pragma pop

/* 8066EEFC-8066EF00 000114 0004+00 0/5 0/0 0/0 .rodata          @4588 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4588 = 0.5f;
COMPILER_STRIP_GATE(0x8066EEFC, &lit_4588);
#pragma pop

/* 8066A1C4-8066A3D0 002564 020C+00 1/1 0/0 0/0 .text            do_wait_2__FP8do_class */
static void do_wait_2(do_class* i_this) {
    fopAc_ac_c* player = dComIfGp_getPlayer(0);

    i_this->field_0x616 = 1;
    i_this->mTailWagTarget = FLOAT_LABEL(lit_4400);

    switch (i_this->mMode) {
    case 0: {
        i_this->mMode++;
    }
    case 1: {
        if (i_this->mTimer[0] == 0) {
            i_this->mTimer[0] = cM_rndF(FLOAT_LABEL(lit_4189)) + FLOAT_LABEL(lit_4192);
            i_this->mRandomTargetAngleY = cM_rndFX(FLOAT_LABEL(lit_4587));

            cM_rndF(FLOAT_LABEL(lit_3662)) < FLOAT_LABEL(lit_4588) ?
                i_this->mAnmSpeed = cM_rndF(FLOAT_LABEL(lit_4342)) + FLOAT_LABEL(lit_3665) :
                i_this->mAnmSpeed = -(cM_rndF(FLOAT_LABEL(lit_4342)) + FLOAT_LABEL(lit_3665));

            anm_init(i_this, ANM_STEP, FLOAT_LABEL(lit_4194), 2, i_this->mAnmSpeed);
            mDoMtx_YrotS((MtxP)calc_mtx, player->shape_angle.y);

            Vec local_38;

            local_38.x = cM_rndFX(FLOAT_LABEL(lit_3772));
            local_38.y = FLOAT_LABEL(lit_3682);
            local_38.z = cM_rndF(FLOAT_LABEL(lit_3816)) + FLOAT_LABEL(lit_4551);

            MtxPosition((cXyz*)&local_38, &i_this->mTargetPos);
            i_this->mTargetPos += player->current.pos;
        }

        break;
    }
    }

    cLib_addCalc2(&i_this->current.pos.x, i_this->mTargetPos.x, FLOAT_LABEL(lit_4342),
                  FLOAT_LABEL(lit_3665));
    cLib_addCalc2(&i_this->current.pos.z, i_this->mTargetPos.z, FLOAT_LABEL(lit_4342),
                  FLOAT_LABEL(lit_3665));
    cLib_addCalc0(&i_this->speedF, FLOAT_LABEL(lit_3662), FLOAT_LABEL(lit_3665));
    cLib_addCalcAngleS2(&i_this->current.angle.y, i_this->mTargetAngleY + i_this->mRandomAngleY,
                        4, 0x800);
    cLib_addCalcAngleS2(&i_this->mRandomAngleY, i_this->mRandomTargetAngleY, 4, 0x1000);

    if (i_this->mDistFromPlayer > FLOAT_LABEL(lit_3923) * i_this->mScale.z) {
        i_this->mAction = ACT_RUN;
        i_this->mMode = 0;
    }

    area_check(i_this);
}

/* 8066A3D0-8066A5DC 002770 020C+00 1/1 0/0 0/0 .text            do_sit__FP8do_class */
#ifdef NONMATCHING
// matches except float literal in inline
static void do_sit(do_class* i_this) {
    i_this->field_0x616 = 1;
    i_this->mTailWagTarget = FLOAT_LABEL(lit_4190);

    switch (i_this->mMode) {
    case 0: {
        anm_init(i_this, ANM_SIT_WAIT, FLOAT_LABEL(lit_4192), 2, FLOAT_LABEL(lit_3662));
        i_this->mMode++;
    }

    case 1: {
        if (i_this->mEyePosYDistFromPlayer > FLOAT_LABEL(lit_4545)) {
            i_this->mMode = 3;
            i_this->mTimer[0] = cM_rndF(FLOAT_LABEL(lit_4192)) + FLOAT_LABEL(lit_4192);
        } else {
            if (i_this->mEyePosYDistFromPlayer < FLOAT_LABEL(lit_3846)) {
                i_this->mMode = 2;
                i_this->mTimer[0] = cM_rndF(FLOAT_LABEL(lit_4192)) + FLOAT_LABEL(lit_4192);
            }
        }
        break;
    }

    case 2: {
        if (i_this->mEyePosYDistFromPlayer < FLOAT_LABEL(lit_3846)) {
            if (i_this->mTimer[0] == 0) {
                i_this->mAction = ACT_STAY;
                i_this->mMode = 10;
            }
        } else {
            i_this->mMode = 1;
        }
        break;
    }

    case 3: {
        if (i_this->mEyePosYDistFromPlayer > FLOAT_LABEL(lit_4545)) {
            if (i_this->mTimer[0] == 0) {
                anm_init(i_this, ANM_SIT, FLOAT_LABEL(lit_4194), 0, FLOAT_LABEL(lit_3662));
                i_this->mMode++;
            }
        } else {
            i_this->mMode = 1;
        }

        break;
    }

    case 4: {
        if (i_this->mpMorf->isStop()) {
            i_this->mAction = ACT_WAIT_1;
            i_this->mMode = 0;
        }
        break;
    }
    }

    cLib_addCalc0(&i_this->speedF, FLOAT_LABEL(lit_3662), FLOAT_LABEL(lit_3665));

    if (i_this->mDistFromPlayer > FLOAT_LABEL(lit_3773) * i_this->mScale.z) {
        i_this->mAction = ACT_STAY;
        i_this->field_0x5f4 = 8;
        i_this->mMode = 0;
    }

    area_check(i_this);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void do_sit(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/do_sit__FP8do_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8066EF00-8066EF04 000118 0004+00 0/1 0/0 0/0 .rodata          @4709 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4709 = -100.0f;
COMPILER_STRIP_GATE(0x8066EF00, &lit_4709);
#pragma pop

/* 8066EF04-8066EF08 00011C 0004+00 0/1 0/0 0/0 .rodata          @4710 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4710 = 250.0f;
COMPILER_STRIP_GATE(0x8066EF04, &lit_4710);
#pragma pop

/* 8066A5DC-8066A80C 00297C 0230+00 1/1 0/0 0/0 .text            hang_set__FP8do_class */
#ifdef NONMATCHING
static u16 hang_set(do_class* i_this) {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm u16 hang_set(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/hang_set__FP8do_class.s"
}
#pragma pop

#endif
/* ############################################################################################## */
/* 8066EF08-8066EF0C 000120 0004+00 0/1 0/0 0/0 .rodata          @4763 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4763 = 28.0f;
COMPILER_STRIP_GATE(0x8066EF08, &lit_4763);
#pragma pop

/* 8066EF0C-8066EF10 000124 0004+00 0/1 0/0 0/0 .rodata          @4764 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4764 = -60.0f;
COMPILER_STRIP_GATE(0x8066EF0C, &lit_4764);
#pragma pop

/* 8066A80C-8066AB78 002BAC 036C+00 1/1 0/0 0/0 .text            do_hang__FP8do_class */
#ifdef NONMATCHING
static void do_hang(do_class* i_this) {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void do_hang(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/do_hang__FP8do_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8066EFB0-8066EFB0 0001C8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8066EFB3 = "F_SP116";
#pragma pop

/* 8066AB78-8066B650 002F18 0AD8+00 2/1 0/0 0/0 .text            do_food__FP8do_class */
#ifdef NONMATCHING
static void do_food(do_class* i_this) {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void do_food(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/do_food__FP8do_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8066EF10-8066EF14 000128 0004+00 0/0 0/0 0/0 .rodata          @4962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4962 = 0.75f;
COMPILER_STRIP_GATE(0x8066EF10, &lit_4962);
#pragma pop

/* 8066EF14-8066EF18 00012C 0004+00 0/0 0/0 0/0 .rodata          @4963 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4963 = -1050.0f;
COMPILER_STRIP_GATE(0x8066EF14, &lit_4963);
#pragma pop

/* 8066EF18-8066EF1C 000130 0004+00 0/0 0/0 0/0 .rodata          @4964 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4964 = -4314.0f;
COMPILER_STRIP_GATE(0x8066EF18, &lit_4964);
#pragma pop

/* 8066EF1C-8066EF20 000134 0004+00 0/0 0/0 0/0 .rodata          @4965 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4965 = 728.0f;
COMPILER_STRIP_GATE(0x8066EF1C, &lit_4965);
#pragma pop

/* 8066EF20-8066EF24 000138 0004+00 0/0 0/0 0/0 .rodata          @4966 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4966 = 11.0f;
COMPILER_STRIP_GATE(0x8066EF20, &lit_4966);
#pragma pop

/* 8066EF24-8066EF28 00013C 0004+00 0/0 0/0 0/0 .rodata          @4967 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4967 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x8066EF24, &lit_4967);
#pragma pop

/* 8066EF28-8066EF2C 000140 0004+00 0/0 0/0 0/0 .rodata          @4968 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4968 = 8.0f / 5.0f;
COMPILER_STRIP_GATE(0x8066EF28, &lit_4968);
#pragma pop

/* 8066EF2C-8066EF30 000144 0004+00 0/1 0/0 0/0 .rodata          @4991 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4991 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(0x8066EF2C, &lit_4991);
#pragma pop

/* 8066EF30-8066EF34 000148 0004+00 0/2 0/0 0/0 .rodata          @4992 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4992 = 45.0f;
COMPILER_STRIP_GATE(0x8066EF30, &lit_4992);
#pragma pop

/* 8066EF34-8066EF38 00014C 0004+00 0/1 0/0 0/0 .rodata          @4993 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4993 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x8066EF34, &lit_4993);
#pragma pop

/* 8066B650-8066B774 0039F0 0124+00 1/1 0/0 0/0 .text            do_swim__FP8do_class */
static void do_swim(do_class* i_this) {
    Vec pos;  // this is probably cXyz but defining it as such moves ~cXyz to right after this
              // function, breaking the TU match
    i_this->field_0x616 = 1;
    i_this->mTailWagTarget = FLOAT_LABEL(lit_4191);

    switch (i_this->mMode) {
    case 1: {
        break;
    }
    case 0: {
        anm_init(i_this, 19, FLOAT_LABEL(lit_4027), 2,
                 cM_rndF(FLOAT_LABEL(lit_4991)) + FLOAT_LABEL(lit_4340));
        i_this->mMode++;
        break;
    }
    }

    cLib_addCalc2(&i_this->speedF, l_HIO.mSwimSpeed, FLOAT_LABEL(lit_3662),
                  FLOAT_LABEL(lit_4588) * l_HIO.mSwimSpeed);
    cLib_addCalcAngleS2(&i_this->current.angle.y, i_this->mTargetAngleY, 16, 0x100);

    i_this->speed.y = FLOAT_LABEL(lit_3682);
    i_this->gravity = FLOAT_LABEL(lit_3682);

    cLib_addCalc2(&i_this->current.pos.y, i_this->mWaterY - FLOAT_LABEL(lit_4992),
                  FLOAT_LABEL(lit_3662), FLOAT_LABEL(lit_4027));

    pos = i_this->eyePos;
    pos.y = i_this->mWaterY;

    fopAcM_effHamonSet(&i_this->mRippleKey, (cXyz*)&pos, FLOAT_LABEL(lit_4993),
                       FLOAT_LABEL(lit_4402));
}

/* 8066B774-8066B7C0 003B14 004C+00 2/2 0/0 0/0 .text            s_c_sub__FPvPv */
static void* s_c_sub(void* param_0, void* param_1) {
    if (fopAcM_IsActor(param_0) != 0 && fopAcM_GetName(param_0) == PROC_CANOE) {
        return param_0;
    }
    return 0;
}

/* ############################################################################################## */
/* 8066EF38-8066EF3C 000150 0004+00 0/1 0/0 0/0 .rodata          @5110 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5110 = 800.0f;
COMPILER_STRIP_GATE(0x8066EF38, &lit_5110);
#pragma pop

/* 8066EF3C-8066EF40 000154 0004+00 0/1 0/0 0/0 .rodata          @5111 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5111 = 500.0f;
COMPILER_STRIP_GATE(0x8066EF3C, &lit_5111);
#pragma pop

/* 8066EF40-8066EF44 000158 0004+00 0/1 0/0 0/0 .rodata          @5112 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5112 = 550.0f;
COMPILER_STRIP_GATE(0x8066EF40, &lit_5112);
#pragma pop

/* 8066EF44-8066EF48 00015C 0004+00 0/2 0/0 0/0 .rodata          @5113 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5113 = 52.0f;
COMPILER_STRIP_GATE(0x8066EF44, &lit_5113);
#pragma pop

/* 8066EF48-8066EF4C 000160 0004+00 0/1 0/0 0/0 .rodata          @5114 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5114 = 230.0f;
COMPILER_STRIP_GATE(0x8066EF48, &lit_5114);
#pragma pop

/* 8066B7C0-8066BD3C 003B60 057C+00 1/1 0/0 0/0 .text            do_help__FP8do_class */
#ifdef NONMATCHING
static void do_help(do_class* i_this) {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void do_help(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/do_help__FP8do_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8066EF4C-8066EF50 000164 0004+00 0/1 0/0 0/0 .rodata          @5344 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5344 = 3.0f / 40.0f;
COMPILER_STRIP_GATE(0x8066EF4C, &lit_5344);
#pragma pop

/* 8066EF50-8066EF54 000168 0004+00 0/1 0/0 0/0 .rodata          @5345 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5345 = -80.0f;
COMPILER_STRIP_GATE(0x8066EF50, &lit_5345);
#pragma pop

/* 8066BD3C-8066C894 0040DC 0B58+00 2/1 0/0 0/0 .text            do_boat__FP8do_class */
#ifdef NONMATCHING
static u8 do_boat(do_class* i_this) {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm u8 do_boat(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/do_boat__FP8do_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8066EF54-8066EF58 00016C 0004+00 0/0 0/0 0/0 .rodata          @5346 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5346 = 40.0f;
COMPILER_STRIP_GATE(0x8066EF54, &lit_5346);
#pragma pop

/* 8066EF58-8066EF5C 000170 0004+00 0/0 0/0 0/0 .rodata          @5347 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5347 = 180.0f;
COMPILER_STRIP_GATE(0x8066EF58, &lit_5347);
#pragma pop

/* 8066EF5C-8066EF60 000174 0004+00 0/1 0/0 0/0 .rodata          @5407 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5407 = 1.0f / 40.0f;
COMPILER_STRIP_GATE(0x8066EF5C, &lit_5407);
#pragma pop

/* 8066C894-8066CAA8 004C34 0214+00 1/1 0/0 0/0 .text            do_a_swim__FP8do_class */
#ifdef NONMATCHING
static void do_a_swim(do_class* i_this) {
    i_this->mTailWagTarget = 2000.0;
    cLib_addCalc0(&i_this->speedF, 1.0, 1.0);

    switch (i_this->mMode) {
    case 2: {
        l_HIO.mWaterHuntAnimType == 1 ? i_this->mpMorf->setPlaySpeed(i_this->field46_0x634 * 5.0) :
                                        i_this->mpMorf->setPlaySpeed(i_this->field46_0x634 * 5.0);

        if (0.025 < i_this->field_0x634) {
            break;
        }

        i_this->field_0x634 = 0.0;
        i_this->mAction = ACT_WAIT_1;
        i_this->mMode = 0;
        break;
    }
    case 0: {
        l_HIO.mWaterHuntAnimType == 1 ? anm_init(param_1, ANM_JOYFUL, 0.0, 2, 0.0) :
                                        anm_init(param_1, ANM_BULBUL, 0.0, 2, 0.0);
        i_this->mMode = 1;
        i_this->field32_0x5fc[0] = 0x14;

        JPABaseEmitter* emitter = dComIfGp_particle_set(0x2a3, &i_this->.current.pos, 0, 0);

        if (emitter) {
            emitter->setGlobalRTMatrix(i_this->mpMorf->getModel()->getAnmMtx(2));
            cXyz pos = cXyz(0.6, 0.6, 0.6);
            emitter->setGlobalScale(pTVar3);
        }
    }
    }

    if (i_this->mTimer[0] == 0) {
        i_this->mMode = 2;
        i_this->field_0x634 = 0.1;
        i_this->field_0x638 = 1.0;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void do_a_swim(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/do_a_swim__FP8do_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8066EF60-8066EF68 000178 0004+04 0/1 0/0 0/0 .rodata          @5477 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5477[1 + 1 /* padding */] = {
    -1.0f / 10.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8066EF60, &lit_5477);
#pragma pop

/* 8066EF68-8066EF70 000180 0008+00 0/2 0/0 0/0 .rodata          @5480 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5480[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8066EF68, &lit_5480);
#pragma pop

/* 8066CAA8-8066CDEC 004E48 0344+00 1/1 0/0 0/0 .text            do_carry__FP8do_class */
#ifdef NONMATCHING
static asm u8 do_carry(do_class* i_this) {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm u8 do_carry(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/do_carry__FP8do_class.s"
}
#pragma pop
#endif

/* 8066CDEC-8066CEC4 00518C 00D8+00 1/1 0/0 0/0 .text            do_message__FP8do_class */
static void do_message(do_class* i_this) {
    i_this->mTailWagTarget = FLOAT_LABEL(lit_4191);

    switch (i_this->mMode) {
    case 1: {
        break;
    }
    case 0: {
        anm_init(i_this, 21, FLOAT_LABEL(lit_4027), 2, FLOAT_LABEL(lit_3662));
        i_this->mMode++;
        break;
    }
    }

    cLib_addCalc0(&i_this->speedF, FLOAT_LABEL(lit_3662), FLOAT_LABEL(lit_3665));
    i_this->field_0x616 = 1;
    cLib_addCalcAngleS2(&i_this->current.angle.y, i_this->mTargetAngleY, 2, 0x1000);

    if (dComIfGp_event_runCheck() == 0 && i_this->mDistFromPlayer > FLOAT_LABEL(lit_3773)) {
        i_this->mAction = ACT_STAY;
        i_this->mMode = 0;
    }
}

/* ############################################################################################## */
/* 8066EF70-8066EF74 000188 0004+00 0/2 0/0 0/0 .rodata          @5948 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5948 = -7.0f;
COMPILER_STRIP_GATE(0x8066EF70, &lit_5948);
#pragma pop

/* 8066EF74-8066EF78 00018C 0004+00 0/0 0/0 0/0 .rodata          @5949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5949 = 6.0f;
COMPILER_STRIP_GATE(0x8066EF74, &lit_5949);
#pragma pop

/* 8066EF78-8066EF7C 000190 0004+00 0/0 0/0 0/0 .rodata          @5950 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5950 = -25.0f;
COMPILER_STRIP_GATE(0x8066EF78, &lit_5950);
#pragma pop

/* 8066EF7C-8066EF80 000194 0004+00 0/0 0/0 0/0 .rodata          @5951 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5951 = 35.0f;
COMPILER_STRIP_GATE(0x8066EF7C, &lit_5951);
#pragma pop

/* 8066EF80-8066EF84 000198 0004+00 0/0 0/0 0/0 .rodata          @5952 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5952 = -16.0f;
COMPILER_STRIP_GATE(0x8066EF80, &lit_5952);
#pragma pop

/* 8066EF84-8066EF88 00019C 0004+00 0/0 0/0 0/0 .rodata          @5953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5953 = 80.0f;
COMPILER_STRIP_GATE(0x8066EF84, &lit_5953);
#pragma pop

/* 8066EF88-8066EF8C 0001A0 0004+00 0/0 0/0 0/0 .rodata          @5954 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5954 = 1.0f / 25.0f;
COMPILER_STRIP_GATE(0x8066EF88, &lit_5954);
#pragma pop

/* 8066EF8C-8066EF90 0001A4 0004+00 0/1 0/0 0/0 .rodata          @6210 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6210 = 16.0f;
COMPILER_STRIP_GATE(0x8066EF8C, &lit_6210);
#pragma pop

/* 8066EF90-8066EF94 0001A8 0004+00 0/1 0/0 0/0 .rodata          @6211 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6211 = 13.0f;
COMPILER_STRIP_GATE(0x8066EF90, &lit_6211);
#pragma pop

/* 8066EF94-8066EF98 0001AC 0004+00 0/1 0/0 0/0 .rodata          @6212 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6212 = -15.0f;
COMPILER_STRIP_GATE(0x8066EF94, &lit_6212);
#pragma pop

/* 8066EF98-8066EF9C 0001B0 0004+00 0/1 0/0 0/0 .rodata          @6213 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6213 = 13000.0f;
COMPILER_STRIP_GATE(0x8066EF98, &lit_6213);
#pragma pop

/* 8066EF9C-8066EFA0 0001B4 0004+00 0/1 0/0 0/0 .rodata          @6214 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6214 = -24.0f;
COMPILER_STRIP_GATE(0x8066EF9C, &lit_6214);
#pragma pop

/* 8066CEC4-8066DD48 005264 0E84+00 2/1 0/0 0/0 .text            action__FP8do_class */
#ifdef NONMATCHING
extern "C" u8 scc[12];
static void action(do_class* i_this) {
    cXyz pos1;
    cXyz pos2;
    cXyz pos3;
    u8* tmp_lit = lit_1109;

    fopAc_ac_c* player = dComIfGp_getPlayer(0);

    i_this->gravity = FLOAT_LABEL(lit_5948);
    i_this->mDistFromPlayer = fopAcM_searchPlayerDistance(i_this);

    daPy_py_c* player2 = daPy_getPlayerActorClass();

    if (player2->checkHorseRide()) {
        i_this->mDistFromPlayer -= FLOAT_LABEL(lit_3772);
    }

    i_this->mTargetAngleY = fopAcM_searchPlayerAngleY(i_this);
    i_this->mEyePosYDistFromPlayer = fabsf(i_this->eyePos.y - player->current.pos.y);

    if (!mDoCPd_c::getHoldR(PAD_1) ||
        fabsf(i_this->current.pos.y - player->current.pos.y) > FLOAT_LABEL(lit_3816))
    {
        i_this->mEyePosYDistFromPlayer = FLOAT_LABEL(lit_4339);
    }

    i_this->mEyePosYDistFromPlayer *= FLOAT_LABEL(lit_4341);

    u8 tmp1 = 1;
    s8 tmp2 = 1;
    bool tmp3 = true;

    i_this->mCcD_GObjInf1.OnCoSetBit();

    if (i_this->field_0x608 < FLOAT_LABEL(lit_3662)) {
        i_this->mMessageState = 0;

        switch (i_this->mAction) {
        case ACT_STAY: {
            do_stay(i_this);
            food_check(i_this);
            i_this->mMessageState = 1;
            break;
        }
        case ACT_WALK: {
            do_walk(i_this);
            food_check(i_this);
            i_this->mMessageState = 1;
            break;
        }
        case ACT_WALK_RUN: {
            do_walk_run(i_this);
            food_check(i_this);
            i_this->mMessageState = 1;
            break;
        }
        case ACT_RUN: {
            do_run(i_this);
            food_check(i_this);
            i_this->mMessageState = 1;
            break;
        }
        case ACT_RUN_WALK: {
            do_run_walk(i_this);
            food_check(i_this);
            i_this->mMessageState = 1;
            break;
        }
        case ACT_FOOD: {
            do_food(i_this);
            i_this->mMessageState = 1;
            break;
        }
        case ACT_WAIT_1: {
            do_wait_1(i_this);
            food_check(i_this);
            i_this->mMessageState = 1;
            break;
        }
        case ACT_WAIT_2: {
            do_wait_2(i_this);
            food_check(i_this);
            i_this->mMessageState = 1;
            break;
        }
        case ACT_SIT: {
            do_sit(i_this);
            food_check(i_this);
            i_this->mMessageState = 1;
            break;
        }
        case ACT_A_SWIM: {
            do_a_swim(i_this);
            break;
        }
        case ACT_SWIM: {
            do_swim(i_this);
            tmp3 = false;
            fopAcM_riverStream(&i_this->current.pos, &i_this->field_0x6b0, &i_this->field_0x6b4,
                               FLOAT_LABEL(lit_4588));
            break;
        }
        case ACT_HELP: {
            do_help(i_this);
            break;
        }
        case ACT_BOAT: {
            tmp1 = do_boat(i_this);
            break;
        }
        case ACT_HANG: {
            do_hang(i_this);
            break;
        }
        case ACT_CARRY: {
            tmp1 = do_carry(i_this);
            i_this->mCcD_GObjInf1.OffCoSetBit();
            tmp2 = 0;
            break;
        }
        case ACT_MESSAGE: {
            do_message(i_this);
            i_this->mMessageState = 2;
        }
        }
    }

    if (i_this->mItemPcId != -1 &&
        i_this->mDistFromPlayer < FLOAT_LABEL(lit_4378) * i_this->mScale.z)
    {
        daItem_c* item = (daItem_c*)fopAcM_SearchByID(i_this->mItemPcId);

        if (item) {
            item->endControl();
        }

        i_this->field_0x6b8 = 0;
        i_this->mItemPcId = -1;
    }

    if (i_this->field_0x6ae != 0) {
        i_this->field_0x6ae--;
        if (i_this->field_0x6ae == 0) {
            i_this->mSound.startSound(Z2SE_M007_DOG_COME_RUNNING, 0, -1);
        }
    }

    if (i_this->mMessageState == 1 && daPy_py_c::i_checkNowWolf() &&
        i_this->mDistFromPlayer < FLOAT_LABEL(lit_4339))
    {
        i_this->mAction = ACT_MESSAGE;
        i_this->mMode = 0;
    }

    if (tmp2 != 0 && player->mSpeedF < FLOAT_LABEL(lit_3665)) {
        cLib_onBit<u32>(i_this->attention_info.flags, 0x10);

        if (do_carry_check(i_this)) {
            return;
        }
    } else {
        cLib_offBit<u32>(i_this->attention_info.flags, 0x10);
    }

    cLib_addCalcAngleS2(&i_this->current.angle.x, 0, 1, 0x400);

    if (i_this->mAction != ACT_HANG) {
        mDoMtx_YrotS((MtxP)calc_mtx, i_this->current.angle.y);

        pos1.x = FLOAT_LABEL(lit_3682);
        pos1.y = FLOAT_LABEL(lit_3682);
        pos1.z = FLOAT_LABEL(lit_3981) * i_this->speedF;
        pos1.z *= i_this->mScale.z;

        MtxPosition(&pos1, &pos2);

        i_this->speed.x = pos2.x;
        i_this->speed.z = pos2.z;
        i_this->speed.y += i_this->gravity;
        ;

        i_this->current.pos += i_this->speed;

        if (i_this->speed.y < FLOAT_LABEL(lit_5345)) {
            i_this->speed.y = FLOAT_LABEL(lit_5345);
        }

        cXyz* posP;

        if (!fopAcM_checkCarryNow(i_this) && (posP = i_this->mCcD_Stts.GetCCMoveP(), posP)) {
            i_this->current.pos.x = i_this->current.pos.x + FLOAT_LABEL(lit_4967) * posP->x;
            i_this->current.pos.z = i_this->current.pos.z + FLOAT_LABEL(lit_4967) * posP->z;
        }

        if (i_this->field_0x608 > FLOAT_LABEL(lit_3662)) {
            pos1.x = FLOAT_LABEL(lit_3682);
            pos1.y = FLOAT_LABEL(lit_3682);
            pos1.z = -i_this->field_0x608;

            mDoMtx_YrotS((MtxP)calc_mtx, i_this->field_0x60c);
            MtxPosition(&pos1, &pos2);

            i_this->current.pos += pos2;
            cLib_addCalc0(&i_this->field_0x608, FLOAT_LABEL(lit_3662), FLOAT_LABEL(lit_5949));

            i_this->speedF = FLOAT_LABEL(lit_3682);
            tmp1 = 1;
        }
        if ((s8)tmp1 != 0) {
            i_this->mBgS_AcchCir.SetWall(FLOAT_LABEL(lit_3846),
                                         (fabsf(i_this->field_0x608) + fabsf(i_this->speedF)) +
                                             FLOAT_LABEL(lit_3846));
            i_this->mBgS_Acch.CrrPos(dComIfG_Bgsp());

            if (i_this->mBgS_Acch.ChkGroundHit() && tmp_lit[0x3d] == 0 &&
                !fopAcM_checkCarryNow(i_this))
            {
                dBgS_GndChk gnd_chk;

                mDoMtx_YrotS((MtxP)calc_mtx, i_this->shape_angle.y);

                pos1.x = FLOAT_LABEL(lit_3682);
                pos1.y = FLOAT_LABEL(lit_3682);
                pos1.z = FLOAT_LABEL(lit_5950) * i_this->mScale.z;

                MtxPosition(&pos1, &pos2);
                pos2 += i_this->current.pos;

                pos3.x = pos2.x;
                pos3.y = pos2.y + FLOAT_LABEL(lit_3772);
                pos3.z = pos2.z;

                gnd_chk.SetPos(&pos3);
                pos2.y = dComIfG_Bgsp().GroundCross(&gnd_chk);

                pos1 = pos2 - i_this->current.pos;

                if (fabsf(pos1.y) < FLOAT_LABEL(lit_3816)) {
                    i_this->current.angle.x =
                        cM_atan2s(pos1.y, JMAFastSqrt(pos1.x * pos1.x + pos1.z * pos1.z));
                }
            }
        }
    } else {
        if (i_this->field_0x608 < FLOAT_LABEL(lit_3662)) {
            cXyz pos = i_this->current.pos;
            int check = dansa_check(i_this, pos, pos.x);

            if ((-check & ~check) < 0) {
                i_this->field_0x660 = hang_set(i_this);

                if (i_this->field_0x660 == 0xdcf) {
                    i_this->mAction = ACT_HANG;
                    i_this->mMode = 0;
                    i_this->field_0x63c = 0;
                }
            }
        }
    }

    water_check(i_this);

    if (tmp3) {
        if (i_this->mAction == ACT_CARRY) {
            if (i_this->field_0x63c != 0 && i_this->field_0x63c--, i_this->field_0x63c == 0) {
                i_this->mAction = ACT_A_SWIM;
                i_this->mMode = 0;
            }

            if (45.0f < i_this->mWaterY - i_this->current.pos.y) {
                i_this->mAction = ACT_SWIM;
                i_this->mMode = 0;
                i_this->field_0x608 = FLOAT_LABEL(lit_3682);

                if (i_this->field_0x606 == 0) {
                    i_this->field_0x606 = 0x14;
                    cXyz pos = i_this->current.pos;
                    pos.y = i_this->mWaterY;

                    if (l_HIO.mRunSpeed == 0) {
                        scc[0] = 0;  // fix later
                        l_HIO.mWalkSpeed = FLOAT_LABEL(lit_3682);
                        l_HIO.mRunSpeed = FLOAT_LABEL(lit_3682);
                        l_HIO.mWaitType = 1;
                    }

                    for (int i = 0; i < 4; i++) {
                        // wrong
                        i_this->mMsg.setMsg(dComIfGp_particle_set(
                            (u32)0, (u16)l_HIO.mWaitType, &pos, &i_this->tevStr, (csXyz*)0,
                            (cXyz*)&scc, (u8)0xFF, (dPa_levelEcallBack*)0, (s8)-1, (GXColor*)0,
                            (GXColor*)0, (cXyz*)0));
                    }

                    i_this->mSound.startSound(Z2SE_CM_BODYFALL_WATER_S, 0, -1);
                }
            }
        }
    } else {
        i_this->field_0x63c = cM_rndF(FLOAT_LABEL(lit_4025)) + FLOAT_LABEL(lit_3846);

        if (i_this->mWaterY - i_this->current.pos.y < FLOAT_LABEL(lit_5951)) {
            i_this->mAction = ACT_WAIT_1;
            i_this->mMode = 0;
        }
    }

    cLib_addCalcAngleS2(&i_this->shape_angle.y, i_this->current.angle.y, 2, 0x2000);
    cLib_addCalcAngleS2(&i_this->shape_angle.x, i_this->current.angle.x, 4, 0x1000);
    i_this->shape_angle.z = i_this->current.angle.z;

    int tmp4 = 0;
    int tmp5 = 0;

    if (i_this->field_0x616 != 0 || i_this->field_0x624 != 0) {
        if (i_this->field_0x616 == 2) {
            i_this->field_0x5f0& 8U ? tmp4 = -10000 : tmp4 = 10000;
        } else {
            cXyz eyePosDiff;

            if (i_this->field_0x624 == 0) {
                eyePosDiff = player->eyePos - i_this->eyePos;

            } else {
                i_this->field_0x624++;
                eyePosDiff = i_this->mUnkPos - i_this->eyePos;
            }

            eyePosDiff.y += i_this->mScale.z * FLOAT_LABEL(lit_5952);

            s16 some_angle = cM_atan2s(eyePosDiff.x, eyePosDiff.z) - i_this->shape_angle.y;
            s16 some_angle2 = cM_atan2s(eyePosDiff.y, JMAFastSqrt(eyePosDiff.x * eyePosDiff.x +
                                                                  eyePosDiff.z * eyePosDiff.z));
            tmp5 = i_this->shape_angle.x + some_angle2;

            if (i_this->field_0x624 == 0 && some_angle > 24000 || some_angle < -24000) {
                some_angle = 0;
            }

            if (some_angle < 12001) {
                if (some_angle < -12000) {
                    some_angle = -12000;
                }
            } else {
                some_angle = 12000;
            }

            if (tmp5 < 12001) {
                if (tmp5 < -12000) {
                    tmp5 = -12000;
                }
            } else {
                tmp5 = 12000;
            }

            tmp4 = some_angle + i_this->field_0x614;
        }

        i_this->field_0x616 = 0;
    }

    cLib_addCalcAngleS2(&i_this->field_0x610, tmp4 / 2, 4, 0x2000);
    cLib_addCalcAngleS2(&i_this->mHeadAngle, tmp5 / 2, 4, 0x2000);
    cLib_addCalcAngleS2(&i_this->field_0x614, 0, 2, 0x300);
    cLib_addCalcAngleS2(&i_this->field_0x628, i_this->field_0x62e, 4, 0x400);
    cLib_addCalcAngleS2(&i_this->field_0x62a, i_this->field_0x630, 4, 0x400);

    if (FLOAT_LABEL(lit_3682) <= fabsf(player->mSpeedF) ||
        FLOAT_LABEL(lit_3682) <= fabsf(i_this->speedF))
    {
        i_this->field_0x630 = 0;
        i_this->field_0x62e = 0;
        i_this->field_0x632 = cM_rndF(FLOAT_LABEL(lit_3772)) + FLOAT_LABEL(lit_5953);
    } else if (i_this->field_0x632 != 0 && i_this->field_0x632--, i_this->field_0x632 == 0) {
        i_this->field_0x632 = cM_rndF(FLOAT_LABEL(lit_3772)) + FLOAT_LABEL(lit_4189);

        if (cM_rndF(1.0) < 0.5) {
            i_this->field_0x62e = cM_rndFX(FLOAT_LABEL(lit_4191));
        }

        if (cM_rndF(1.0) < 0.5) {
            i_this->field_0x630 = cM_rndFX(FLOAT_LABEL(lit_4191));
        }
    }

    if (0.025 <= i_this->field_0x634) {
        if (l_HIO.mWaitType == 0) {
            i_this->field_0x612 = 0;
            i_this->field_0x610 = 0;
        } else {
            i_this->field_0x610 = cM_ssin(i_this->field_0x634 * FLOAT_LABEL(lit_4344));
            i_this->field_0x612 = cM_ssin(i_this->field_0x634 * FLOAT_LABEL(lit_4344));
        }
    }

    cLib_addCalc2(&i_this->field_0x634, i_this->field_0x638, FLOAT_LABEL(lit_3662),
                  FLOAT_LABEL(lit_5407));
    cLib_addCalc0(&i_this->field_0x638, FLOAT_LABEL(lit_3662), FLOAT_LABEL(lit_5954));

    i_this->field_0x640 = cM_ssin(i_this->mTailWagTarget * i_this->field_0x64c);
    i_this->mTailAngle = cM_ssin(i_this->mTailWagTarget * i_this->field_0x650);
    i_this->field_0x64c += i_this->mTailWagTarget * FLOAT_LABEL(lit_3682);

    if (65536.0 < i_this->field_0x64c) {
        i_this->field_0x64c -= FLOAT_LABEL(lit_4338);
    }

    i_this->field_0x650 += i_this->mTailWagTarget * FLOAT_LABEL(lit_4401);

    if (65536.0 < i_this->field_0x650) {
        i_this->field_0x650 -= FLOAT_LABEL(lit_4338);
    }

    cLib_addCalc2(&i_this->mTailWagTarget, i_this->mTailWagTarget, FLOAT_LABEL(lit_3662),
                  FLOAT_LABEL(lit_3772));
    i_this->mTailWagTarget = FLOAT_LABEL(lit_3682);

    if (i_this->field_0x5e2 == 0) {
        if (i_this->field_0x5e0 == 0) {
            i_this->field_0x5e0 = cM_rndF(FLOAT_LABEL(lit_3772)) + FLOAT_LABEL(lit_3846);
        } else {
            i_this->field_0x5e0--;
            i_this->field_0x5e0 < 6 ? i_this->field_0x5de = 5 - i_this->field_0x5e0 :
                                      i_this->field_0x5e0 = 0;
        }
    } else {
        cLib_addCalcAngleS2(&i_this->field_0x5de, 3, 1, 1);
        i_this->field_0x5e2 = 0;
        i_this->field_0x5e0 = 0x3c;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/action__FP8do_class.s"
}
#pragma pop
#endif

/* 8066DD48-8066DE64 0060E8 011C+00 1/1 0/0 0/0 .text            message__FP8do_class */
static void message(do_class* i_this) {
    if (i_this->mIsTalking != 0) {
        i_this->mCcDisableTimer = 10;

        if (i_this->mMsg.doFlow(i_this, 0, 0)) {
            dComIfGp_event_reset();
            i_this->mIsTalking = 0;
        }

    } else {
        if (dComIfGp_event_runCheck() && i_this->eventInfo.checkCommandTalk()) {
            i_this->mMsg.init(i_this, i_this->mFlowID, 0, 0);
            i_this->mIsTalking = 1;
        }

        if (i_this->mMessageState == 2 && i_this->mFlowID != -1 && daPy_py_c::i_checkNowWolf()) {
            fopAcM_OnStatus(i_this, 0);
            cLib_onBit<u32>(i_this->attention_info.flags, 0xa);
            i_this->eventInfo.i_onCondition(dEvtCnd_CANTALK_e);
        } else {
            fopAcM_OffStatus(i_this, 0);
            cLib_offBit<u32>(i_this->attention_info.flags, 0xa);
        }
    }
}

/* ############################################################################################## */

/* 8066DE64-8066E494 006204 0630+00 2/1 0/0 0/0 .text            daDo_Execute__FP8do_class */
#ifdef NONMATCHING
static void daDo_Execute(do_class* i_this) {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDo_Execute(do_class* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/daDo_Execute__FP8do_class.s"
}
#pragma pop
#endif

/* 8066E494-8066E49C 006834 0008+00 1/0 0/0 0/0 .text            daDo_IsDelete__FP8do_class */
static int daDo_IsDelete(do_class* i_this) {
    return 1;
}

/* 8066E49C-8066E504 00683C 0068+00 1/0 0/0 0/0 .text            daDo_Delete__FP8do_class */
#ifdef NONMATCHING
int dComIfG_resDelete(request_of_phase_process_class* i_phase, char const* resName);
static int daDo_Delete(do_class* i_this) {
    u32 actor_id = fopAcM_GetID(i_this);
    dComIfG_resDelete(&i_this->mPhase, "Do");
    if (i_this->field_0xcc0 != 0) {
        u8* tmp = (u8*)struct_8066F2B4 + 2;
        *tmp = 0;
    }
    if (i_this->heap) {
        i_this->mSound.deleteObject();
    }
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDo_Delete(do_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/daDo_Delete__FP8do_class.s"
}
#pragma pop
#endif

/* 8066E504-8066E7D4 0068A4 02D0+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#ifdef NONMATCHING
static int useHeapInit(fopAc_ac_c* i_this) {
    do_class* _this = (do_class*)i_this;

    _this->mpMorf = new mDoExt_McaMorf((J3DModelData*)dComIfG_getObjectRes("Do", 25), NULL, NULL,
                                       (J3DAnmTransform*)dComIfG_getObjectRes("Do", 14), 2,
                                       FLOAT_LABEL(lit_3662), 0, -1, 1, NULL, 0x80000, 0x11020284);

    if (_this->mpMorf == NULL || _this->mpMorf->getModel() == NULL) {
        return 0;
    }

    J3DModel* model = _this->mpMorf->getModel();
    _this->model = model;
    model->setUserArea((u32)i_this);

    for (u16 jnt_no = 0; jnt_no < model->getModelData()->getJointNum(); jnt_no++) {
        if (jnt_no == 9 || jnt_no == 10 || jnt_no == 22 || jnt_no == 23) {
            model->getModelData()->getJointNodePointer(jnt_no)->setCallBack(nodeCallBack);
        }
    }

    _this->mpBtk = new mDoExt_btkAnm();
    if (_this->mpBtk == NULL) {
        return 0;
    }

    if (!_this->mpBtk->init(_this->mpMorf->getModel()->getModelData(),
                            (J3DAnmTextureSRTKey*)dComIfG_getObjectRes("Do", 29), TRUE, 0,
                            FLOAT_LABEL(lit_3662), 0, -1))
    {
        return 0;
    }

    _this->mpBtp = new mDoExt_btpAnm();
    if (_this->mpBtp == NULL) {
        return 0;
    }

    if (!_this->mpBtp->init(_this->mpMorf->getModel()->getModelData(),
                            (J3DAnmTexPattern*)dComIfG_getObjectRes("Do", 32), TRUE, 0,
                            FLOAT_LABEL(lit_3662), 0, -1))
    {
        return 0;
    }

    _this->mSound.init(&_this->current.pos, 1);
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

#endif
/* 8066E7D4-8066E81C 006B74 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8066EFA0-8066EFA4 0001B8 0004+00 0/1 0/0 0/0 .rodata          @6421 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6421 = 0x407FEF9E;
COMPILER_STRIP_GATE(0x8066EFA0, &lit_6421);
#pragma pop

/* 8066EFA4-8066EFA8 0001BC 0004+00 0/1 0/0 0/0 .rodata          @6422 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6422 = 7216.0f;
COMPILER_STRIP_GATE(0x8066EFA4, &lit_6422);
#pragma pop

/* 8066EFA8-8066EFAC 0001C0 0004+00 0/1 0/0 0/0 .rodata          @6423 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6423 = 220.0f;
COMPILER_STRIP_GATE(0x8066EFA8, &lit_6423);
#pragma pop

/* 8066EFAC-8066EFB0 0001C4 0004+00 0/1 0/0 0/0 .rodata          @6424 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6424 = -4808.0f;
COMPILER_STRIP_GATE(0x8066EFAC, &lit_6424);
#pragma pop

/* 8066E81C-8066EAE4 006BBC 02C8+00 1/0 0/0 0/0 .text            daDo_Create__FP10fopAc_ac_c */
#ifdef NONMATCHING
static void daDo_Create(fopAc_ac_c* param_0) {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDo_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/daDo_Create__FP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* 8066EAE4-8066EC40 006E84 015C+00 1/1 0/0 0/0 .text            __ct__8do_classFv */
#ifdef NONMATCHING
do_class::do_class() {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm do_class::do_class() {
extern "C" asm void __ct__8do_classFv() {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/__ct__8do_classFv.s"
}
#pragma pop
#endif

/* 8066EC40-8066EC88 006FE0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 8066EC88-8066ECD0 007028 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8066ECD0-8066ED40 007070 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 8066ED40-8066ED88 0070E0 0048+00 2/1 0/0 0/0 .text            __dt__10daDo_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm daDo_HIO_c::~daDo_HIO_c() {
extern "C" asm void __dt__10daDo_HIO_cFv() {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/__dt__10daDo_HIO_cFv.s"
}
#pragma pop

/* 8066ED88-8066EDC4 007128 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_do_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_do_cpp(){nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/__sinit_d_a_do_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8066ED88, __sinit_d_a_do_cpp);
#pragma pop

/* 8066EDC4-8066EDCC 007164 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8066EDC4() {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/func_8066EDC4.s"
}
#pragma pop

/* 8066EDCC-8066EDD4 00716C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8066EDCC() {
    nofralloc
#include "asm/rel/d/a/d_a_do/d_a_do/func_8066EDCC.s"
}
#pragma pop

/* ############################################################################################## */
/* 8066F310-8066F320 0000A0 000C+04 0/0 0/0 0/0 .bss             @5578 */
#pragma push
#pragma force_active on
static u8 lit_5578[12 + 4 /* padding */];
#pragma pop

/* 8066F320-8066F32C 0000B0 000C+00 0/0 0/0 0/0 .bss             scc$5577 */
#pragma push
#pragma force_active on
static u8 scc[12];
#pragma pop

/* 8066F32C-8066F330 0000BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8066F32C[4];
#pragma pop

/* 8066F330-8066F334 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_8066F330[4];
#pragma pop

/* 8066F334-8066F338 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_8066F334[4];
#pragma pop

/* 8066F338-8066F33C 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8066F338[4];
#pragma pop

/* 8066F33C-8066F340 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8066F33C[4];
#pragma pop

/* 8066F340-8066F344 0000D0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8066F340[4];
#pragma pop

/* 8066F344-8066F348 0000D4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_8066F344[4];
#pragma pop

/* 8066F348-8066F34C 0000D8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_8066F348[4];
#pragma pop

/* 8066F34C-8066F350 0000DC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8066F34C[4];
#pragma pop

/* 8066F350-8066F354 0000E0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_8066F350[4];
#pragma pop

/* 8066F354-8066F358 0000E4 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_8066F354[4];
#pragma pop

/* 8066F358-8066F35C 0000E8 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8066F358[4];
#pragma pop

/* 8066F35C-8066F360 0000EC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8066F35C[4];
#pragma pop

/* 8066F360-8066F364 0000F0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8066F360[4];
#pragma pop

/* 8066F364-8066F368 0000F4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8066F364[4];
#pragma pop

/* 8066F368-8066F36C 0000F8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_8066F368[4];
#pragma pop

/* 8066F36C-8066F370 0000FC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8066F36C[4];
#pragma pop

/* 8066F370-8066F374 000100 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8066F370[4];
#pragma pop

/* 8066F374-8066F378 000104 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_8066F374[4];
#pragma pop

/* 8066F378-8066F37C 000108 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_8066F378[4];
#pragma pop

/* 8066F37C-8066F380 00010C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8066F37C[4];
#pragma pop

/* 8066F380-8066F384 000110 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8066F380[4];
#pragma pop

/* 8066F384-8066F388 000114 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8066F384[4];
#pragma pop

/* 8066F388-8066F38C 000118 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8066F388[4];
#pragma pop

/* 8066F38C-8066F390 00011C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8066F38C[4];
#pragma pop

/* 8066EFB0-8066EFB0 0001C8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
