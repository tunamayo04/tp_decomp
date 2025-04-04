/**
 * @file d_a_obj_lv6SzGate.cpp
 * 
*/

#include "d/actor/d_a_obj_lv6SzGate.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__17daLv6SzGate_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daLv6SzGate_cFv();
extern "C" void CreateHeap__13daLv6SzGate_cFv();
extern "C" void create__13daLv6SzGate_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void Execute__13daLv6SzGate_cFPPA3_A4_f();
extern "C" void moveGate__13daLv6SzGate_cFv();
extern "C" void init_modeWait__13daLv6SzGate_cFv();
extern "C" void modeWait__13daLv6SzGate_cFv();
extern "C" void init_modeOpenWait0__13daLv6SzGate_cFv();
extern "C" void modeOpenWait0__13daLv6SzGate_cFv();
extern "C" void init_modeOpenWait__13daLv6SzGate_cFv();
extern "C" void modeOpenWait__13daLv6SzGate_cFv();
extern "C" void init_modeOpen__13daLv6SzGate_cFv();
extern "C" void modeOpen__13daLv6SzGate_cFv();
extern "C" void modeClose__13daLv6SzGate_cFv();
extern "C" void init_modeEnd__13daLv6SzGate_cFv();
extern "C" void modeEnd__13daLv6SzGate_cFv();
extern "C" void Draw__13daLv6SzGate_cFv();
extern "C" void Delete__13daLv6SzGate_cFv();
extern "C" static void daLv6SzGate_Draw__FP13daLv6SzGate_c();
extern "C" static void daLv6SzGate_Execute__FP13daLv6SzGate_c();
extern "C" static void daLv6SzGate_Delete__FP13daLv6SzGate_c();
extern "C" static void daLv6SzGate_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daLv6SzGate_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv6SzGate_cpp();
extern "C" extern char const* const d_a_obj_lv6SzGate__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C76630-80C76634 000000 0004+00 3/3 0/0 0/0 .rodata          @3627 */
SECTION_RODATA static f32 const lit_3627 = 4.0f;
COMPILER_STRIP_GATE(0x80C76630, &lit_3627);

/* 80C76634-80C76638 000004 0004+00 0/1 0/0 0/0 .rodata          @3628 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3628 = 30.0f;
COMPILER_STRIP_GATE(0x80C76634, &lit_3628);
#pragma pop

/* 80C76638-80C7663C 000008 0004+00 0/1 0/0 0/0 .rodata          @3629 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3629 = 15.0f;
COMPILER_STRIP_GATE(0x80C76638, &lit_3629);
#pragma pop

/* 80C7663C-80C76640 00000C 0004+00 0/1 0/0 0/0 .rodata          @3630 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3630 = 400.0f;
COMPILER_STRIP_GATE(0x80C7663C, &lit_3630);
#pragma pop

/* 80C76668-80C76674 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C76674-80C76688 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80C76688-80C766A0 000020 0018+00 1/1 0/0 0/0 .data            l_cull_box */
SECTION_DATA static u8 l_cull_box[24] = {
    0xC4, 0x96, 0x00, 0x00, 0xC3, 0x96, 0x00, 0x00, 0xC2, 0xC8, 0x00, 0x00,
    0x44, 0x96, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};

/* 80C766A0-80C766AC -00001 000C+00 0/1 0/0 0/0 .data            @3799 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3799[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__13daLv6SzGate_cFv,
};
#pragma pop

/* 80C766AC-80C766B8 -00001 000C+00 0/2 0/0 0/0 .data            @3800 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3800[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeOpenWait0__13daLv6SzGate_cFv,
};
#pragma pop

/* 80C766B8-80C766C4 -00001 000C+00 0/1 0/0 0/0 .data            @3801 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3801[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeOpenWait__13daLv6SzGate_cFv,
};
#pragma pop

/* 80C766C4-80C766D0 -00001 000C+00 0/1 0/0 0/0 .data            @3802 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3802[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeOpen__13daLv6SzGate_cFv,
};
#pragma pop

/* 80C766D0-80C766DC -00001 000C+00 0/1 0/0 0/0 .data            @3803 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3803[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeClose__13daLv6SzGate_cFv,
};
#pragma pop

/* 80C766DC-80C766E8 -00001 000C+00 0/1 0/0 0/0 .data            @3804 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3804[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeEnd__13daLv6SzGate_cFv,
};
#pragma pop

/* 80C766E8-80C76730 000080 0048+00 0/1 0/0 0/0 .data            mode_proc$3798 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[72] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C76730-80C76750 -00001 0020+00 1/0 0/0 0/0 .data            l_daLv6SzGate_Method */
static actor_method_class l_daLv6SzGate_Method = {
    (process_method_func)daLv6SzGate_Create__FP10fopAc_ac_c,
    (process_method_func)daLv6SzGate_Delete__FP13daLv6SzGate_c,
    (process_method_func)daLv6SzGate_Execute__FP13daLv6SzGate_c,
    0,
    (process_method_func)daLv6SzGate_Draw__FP13daLv6SzGate_c,
};

/* 80C76750-80C76780 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv6SzGate */
extern actor_process_profile_definition g_profile_Obj_Lv6SzGate = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Lv6SzGate,     // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daLv6SzGate_c),  // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  628,                    // mPriority
  &l_daLv6SzGate_Method,  // sub_method
  0x00040000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80C76780-80C7678C 000118 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C7678C-80C767B4 000124 0028+00 1/1 0/0 0/0 .data            __vt__13daLv6SzGate_c */
SECTION_DATA extern void* __vt__13daLv6SzGate_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daLv6SzGate_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__13daLv6SzGate_cFPPA3_A4_f,
    (void*)Draw__13daLv6SzGate_cFv,
    (void*)Delete__13daLv6SzGate_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C767B4-80C767C0 00014C 000C+00 2/2 0/0 0/0 .data            __vt__17daLv6SzGate_HIO_c */
SECTION_DATA extern void* __vt__17daLv6SzGate_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daLv6SzGate_HIO_cFv,
};

/* 80C767C0-80C767CC 000158 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C7586C-80C758B8 0000EC 004C+00 1/1 0/0 0/0 .text            __ct__17daLv6SzGate_HIO_cFv */
daLv6SzGate_HIO_c::daLv6SzGate_HIO_c() {
    // NONMATCHING
}

/* 80C758B8-80C75900 000138 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
// mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" void __dt__14mDoHIO_entry_cFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C76640-80C76644 000010 0004+00 1/1 0/0 0/0 .rodata          @3665 */
SECTION_RODATA static f32 const lit_3665 = -200.0f;
COMPILER_STRIP_GATE(0x80C76640, &lit_3665);

/* 80C76644-80C76648 000014 0004+00 2/4 0/0 0/0 .rodata          @3666 */
SECTION_RODATA static u8 const lit_3666[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C76644, &lit_3666);

/* 80C75900-80C75A54 000180 0154+00 2/2 0/0 0/0 .text            setBaseMtx__13daLv6SzGate_cFv */
void daLv6SzGate_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C76648-80C7664C 000018 0004+00 2/4 0/0 0/0 .rodata          @3697 */
SECTION_RODATA static f32 const lit_3697 = 1.0f;
COMPILER_STRIP_GATE(0x80C76648, &lit_3697);

/* 80C7665C-80C7665C 00002C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C7665C = "L6SzGate";
#pragma pop

/* 80C75A54-80C75C0C 0002D4 01B8+00 1/0 0/0 0/0 .text            CreateHeap__13daLv6SzGate_cFv */
void daLv6SzGate_c::CreateHeap() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C767D8-80C767E4 000008 000C+00 1/1 0/0 0/0 .bss             @3621 */
static u8 lit_3621[12];

/* 80C767E4-80C767FC 000014 0018+00 4/4 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[24];

/* 80C75C0C-80C75DD0 00048C 01C4+00 1/1 0/0 0/0 .text            create__13daLv6SzGate_cFv */
void daLv6SzGate_c::create() {
    // NONMATCHING
}

/* 80C75DD0-80C75E18 000650 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 80C75E18-80C75E78 000698 0060+00 1/0 0/0 0/0 .text            Execute__13daLv6SzGate_cFPPA3_A4_f
 */
void daLv6SzGate_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C767FC-80C76800 00002C 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80C767FC[4];

/* 80C75E78-80C75F64 0006F8 00EC+00 1/1 0/0 0/0 .text            moveGate__13daLv6SzGate_cFv */
void daLv6SzGate_c::moveGate() {
    // NONMATCHING
}

/* 80C75F64-80C75F70 0007E4 000C+00 2/2 0/0 0/0 .text            init_modeWait__13daLv6SzGate_cFv */
void daLv6SzGate_c::init_modeWait() {
    // NONMATCHING
}

/* 80C75F70-80C75FC0 0007F0 0050+00 1/0 0/0 0/0 .text            modeWait__13daLv6SzGate_cFv */
void daLv6SzGate_c::modeWait() {
    // NONMATCHING
}

/* 80C75FC0-80C75FD8 000840 0018+00 1/1 0/0 0/0 .text init_modeOpenWait0__13daLv6SzGate_cFv */
void daLv6SzGate_c::init_modeOpenWait0() {
    // NONMATCHING
}

/* 80C75FD8-80C76010 000858 0038+00 1/0 0/0 0/0 .text            modeOpenWait0__13daLv6SzGate_cFv */
void daLv6SzGate_c::modeOpenWait0() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C7664C-80C76650 00001C 0004+00 2/4 0/0 0/0 .rodata          @3843 */
SECTION_RODATA static f32 const lit_3843 = -1.0f;
COMPILER_STRIP_GATE(0x80C7664C, &lit_3843);

/* 80C76010-80C76094 000890 0084+00 1/1 0/0 0/0 .text init_modeOpenWait__13daLv6SzGate_cFv */
void daLv6SzGate_c::init_modeOpenWait() {
    // NONMATCHING
}

/* 80C76094-80C760F0 000914 005C+00 1/0 0/0 0/0 .text            modeOpenWait__13daLv6SzGate_cFv */
void daLv6SzGate_c::modeOpenWait() {
    // NONMATCHING
}

/* 80C760F0-80C760FC 000970 000C+00 1/1 0/0 0/0 .text            init_modeOpen__13daLv6SzGate_cFv */
void daLv6SzGate_c::init_modeOpen() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C76650-80C76654 000020 0004+00 0/1 0/0 0/0 .rodata          @3879 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3879 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C76650, &lit_3879);
#pragma pop

/* 80C76654-80C76658 000024 0004+00 0/1 0/0 0/0 .rodata          @3880 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3880 = 0.5f;
COMPILER_STRIP_GATE(0x80C76654, &lit_3880);
#pragma pop

/* 80C760FC-80C7624C 00097C 0150+00 1/0 0/0 0/0 .text            modeOpen__13daLv6SzGate_cFv */
void daLv6SzGate_c::modeOpen() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C76658-80C7665C 000028 0004+00 0/1 0/0 0/0 .rodata          @3901 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3901 = 5.0f;
COMPILER_STRIP_GATE(0x80C76658, &lit_3901);
#pragma pop

/* 80C7624C-80C76328 000ACC 00DC+00 1/0 0/0 0/0 .text            modeClose__13daLv6SzGate_cFv */
void daLv6SzGate_c::modeClose() {
    // NONMATCHING
}

/* 80C76328-80C76344 000BA8 001C+00 2/2 0/0 0/0 .text            init_modeEnd__13daLv6SzGate_cFv */
void daLv6SzGate_c::init_modeEnd() {
    // NONMATCHING
}

/* 80C76344-80C7637C 000BC4 0038+00 1/0 0/0 0/0 .text            modeEnd__13daLv6SzGate_cFv */
void daLv6SzGate_c::modeEnd() {
    // NONMATCHING
}

/* 80C7637C-80C76490 000BFC 0114+00 1/0 0/0 0/0 .text            Draw__13daLv6SzGate_cFv */
void daLv6SzGate_c::Draw() {
    // NONMATCHING
}

/* 80C76490-80C764F8 000D10 0068+00 1/0 0/0 0/0 .text            Delete__13daLv6SzGate_cFv */
void daLv6SzGate_c::Delete() {
    // NONMATCHING
}

/* 80C764F8-80C76524 000D78 002C+00 1/0 0/0 0/0 .text            daLv6SzGate_Draw__FP13daLv6SzGate_c
 */
static void daLv6SzGate_Draw(daLv6SzGate_c* param_0) {
    // NONMATCHING
}

/* 80C76524-80C76544 000DA4 0020+00 1/0 0/0 0/0 .text daLv6SzGate_Execute__FP13daLv6SzGate_c */
static void daLv6SzGate_Execute(daLv6SzGate_c* param_0) {
    // NONMATCHING
}

/* 80C76544-80C76564 000DC4 0020+00 1/0 0/0 0/0 .text daLv6SzGate_Delete__FP13daLv6SzGate_c */
static void daLv6SzGate_Delete(daLv6SzGate_c* param_0) {
    // NONMATCHING
}

/* 80C76564-80C76584 000DE4 0020+00 1/0 0/0 0/0 .text            daLv6SzGate_Create__FP10fopAc_ac_c
 */
static void daLv6SzGate_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80C76584-80C765E0 000E04 005C+00 2/1 0/0 0/0 .text            __dt__17daLv6SzGate_HIO_cFv */
daLv6SzGate_HIO_c::~daLv6SzGate_HIO_c() {
    // NONMATCHING
}

/* 80C765E0-80C7661C 000E60 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_lv6SzGate_cpp */
void __sinit_d_a_obj_lv6SzGate_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80C765E0, __sinit_d_a_obj_lv6SzGate_cpp);
#pragma pop

/* 80C7665C-80C7665C 00002C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
