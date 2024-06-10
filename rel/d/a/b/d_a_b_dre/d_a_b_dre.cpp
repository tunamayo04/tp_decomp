/**
 * @file d_a_b_dre.cpp
 * 
*/

#include "rel/d/a/b/d_a_b_dre/d_a_b_dre.h"
#include "dol2asm.h"
#include "d/d_camera.h"
#include "rel/d/a/obj/d_a_obj_ystone/d_a_obj_ystone.h"



//
// Forward References:
//

extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daB_DRE_Create__FP10fopAc_ac_c();
extern "C" void SetAnm__9daB_DRE_cFP16mDoExt_McaMorfSOiiff();
extern "C" static void daB_DRE_Delete__FP9daB_DRE_c();
extern "C" void CameraSet__9daB_DRE_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void SetStopingCam__9daB_DRE_cFv();
extern "C" void SetStopCam__9daB_DRE_cF4cXyzffs();
extern "C" void SetCMoveCam__9daB_DRE_cF4cXyzf();
extern "C" void SetCMoveCam__9daB_DRE_cF4cXyzff();
extern "C" void SetEyeMoveCam__9daB_DRE_cF4cXyzffsf();
extern "C" void SetEyeMoveCam__9daB_DRE_cF4cXyzffsff();
extern "C" void SetMoveCam__9daB_DRE_cFff();
extern "C" void SetReleaseCam__9daB_DRE_cFv();
extern "C" void CamAction2__9daB_DRE_cFv();
extern "C" void DrAction2__9daB_DRE_cFv();
extern "C" void CamAction__9daB_DRE_cFv();
extern "C" void Action__9daB_DRE_cFv();
extern "C" void DrAction__9daB_DRE_cFv();
extern "C" void SoundChk__9daB_DRE_cFv();
extern "C" void Execute__9daB_DRE_cFv();
extern "C" void SpeedSet__9daB_DRE_cFv();
extern "C" void BreathSet__9daB_DRE_cFv();
extern "C" void Delete__9daB_DRE_cFv();
extern "C" void setBaseMtx__9daB_DRE_cFv();
extern "C" static void daB_DRE_Draw__FP9daB_DRE_c();
extern "C" static void daB_DRE_Execute__FP9daB_DRE_c();
extern "C" void create__9daB_DRE_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static bool daB_DRE_IsDelete__FP9daB_DRE_c();
extern "C" void __sinit_d_a_b_dre_cpp();
extern "C" static void func_805CAD1C();
extern "C" static void func_805CAD24();
extern "C" void setCurrentPos__16obj_ystone_classF4cXyz();
extern "C" extern char const* const d_a_b_dre__stringBase0;

//
// External References:
//

extern "C" void onBlure__13mDoGph_gInf_cFv();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_SearchByName__FsPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_createItemForBoss__FPC4cXyziiPC5csXyzPC4cXyzffi();
extern "C" void fopAcM_createWarpHole__FPC4cXyzPC5csXyziUcUcUc();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setPtT__14dEvt_control_cFPv();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
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
extern "C" void cM_rndF__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcPos__FP4cXyzRC4cXyzfff();
extern "C" void cLib_addCalcPos2__FP4cXyzRC4cXyzff();
extern "C" void cLib_chasePos__FP4cXyzRC4cXyzf();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void func_80280808();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void removeTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey();
extern "C" void _savegpr_22();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 mBlureFlag__13mDoGph_gInf_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 805CAD5C-805CAD60 000000 0004+00 10/10 0/0 0/0 .rodata          @3844 */
SECTION_RODATA static f32 const lit_3844 = 1.0f;
COMPILER_STRIP_GATE(0x805CAD5C, &lit_3844);

/* 805CAECC-805CAECC 000170 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805CAECC = "B_DR";
#pragma pop

/* 805CAED4-805CAEFC -00001 0028+00 1/1 0/0 0/0 .data            @4416 */
SECTION_DATA static void* lit_4416[10] = {
    (void*)(((char*)CamAction__9daB_DRE_cFv) + 0x74),
    (void*)(((char*)CamAction__9daB_DRE_cFv) + 0x194),
    (void*)(((char*)CamAction__9daB_DRE_cFv) + 0x200),
    (void*)(((char*)CamAction__9daB_DRE_cFv) + 0x2AC),
    (void*)(((char*)CamAction__9daB_DRE_cFv) + 0x30C),
    (void*)(((char*)CamAction__9daB_DRE_cFv) + 0x38C),
    (void*)(((char*)CamAction__9daB_DRE_cFv) + 0x3B4),
    (void*)(((char*)CamAction__9daB_DRE_cFv) + 0x3BC),
    (void*)(((char*)CamAction__9daB_DRE_cFv) + 0x3CC),
    (void*)(((char*)CamAction__9daB_DRE_cFv) + 0x414),
};

/* 805CAEFC-805CAF24 -00001 0028+00 1/1 0/0 0/0 .data            @4621 */
SECTION_DATA static void* lit_4621[10] = {
    (void*)(((char*)DrAction__9daB_DRE_cFv) + 0x50),
    (void*)(((char*)DrAction__9daB_DRE_cFv) + 0x58),
    (void*)(((char*)DrAction__9daB_DRE_cFv) + 0xCC),
    (void*)(((char*)DrAction__9daB_DRE_cFv) + 0x19C),
    (void*)(((char*)DrAction__9daB_DRE_cFv) + 0x2D0),
    (void*)(((char*)DrAction__9daB_DRE_cFv) + 0x3C0),
    (void*)(((char*)DrAction__9daB_DRE_cFv) + 0x4A8),
    (void*)(((char*)DrAction__9daB_DRE_cFv) + 0x560),
    (void*)(((char*)DrAction__9daB_DRE_cFv) + 0x58C),
    (void*)(((char*)DrAction__9daB_DRE_cFv) + 0x688),
};

/* 805CAF24-805CAFAC -00001 0088+00 1/1 0/0 0/0 .data            @4782 */
SECTION_DATA static void* lit_4782[34] = {
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x23C),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x48C),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x78),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x48),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x1F4),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x600),
    (void*)(((char*)SoundChk__9daB_DRE_cFv) + 0x534),
};

/* 805CAFAC-805CAFB4 0000D8 0008+00 1/1 0/0 0/0 .data            effId$4884 */
SECTION_DATA static u8 effId[8] = {
    0x89, 0x9B, 0x89, 0x9C, 0x89, 0x9D, 0x89, 0x9E,
};

/* 805CAFB4-805CAFD4 -00001 0020+00 1/0 0/0 0/0 .data            l_daB_DRE_Method */
static actor_method_class l_daB_DRE_Method = {
    (process_method_func)daB_DRE_Create__FP10fopAc_ac_c,
    (process_method_func)daB_DRE_Delete__FP9daB_DRE_c,
    (process_method_func)daB_DRE_Execute__FP9daB_DRE_c,
    (process_method_func)daB_DRE_IsDelete__FP9daB_DRE_c,
    (process_method_func)daB_DRE_Draw__FP9daB_DRE_c,
};

/* 805CAFD4-805CB004 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_DRE */
extern actor_process_profile_definition g_profile_B_DRE = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_B_DRE,             // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daB_DRE_c),      // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  231,                    // mPriority
  &l_daB_DRE_Method,      // sub_method
  0x00044100,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 805CB004-805CB028 000130 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_805CAD24,
    (void*)NULL,
    (void*)NULL,
    (void*)func_805CAD1C,
};

/* 805CB028-805CB034 000154 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 805C7B2C-805C7D6C 0000EC 0240+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 805C7D6C-805C7DB4 00032C 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 805C7DB4-805C7DD4 000374 0020+00 1/0 0/0 0/0 .text            daB_DRE_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_DRE_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/daB_DRE_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 805CAD60-805CAD64 000004 0004+00 5/11 0/0 0/0 .rodata          @3862 */
SECTION_RODATA static u8 const lit_3862[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x805CAD60, &lit_3862);

/* 805CAD64-805CAD68 000008 0004+00 1/1 0/0 0/0 .rodata          @3863 */
SECTION_RODATA static f32 const lit_3863 = -1.0f;
COMPILER_STRIP_GATE(0x805CAD64, &lit_3863);

/* 805C7DD4-805C7E88 000394 00B4+00 4/4 0/0 0/0 .text SetAnm__9daB_DRE_cFP16mDoExt_McaMorfSOiiff
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::SetAnm(mDoExt_McaMorfSO* param_0, int param_1, int param_2, f32 param_3,
                           f32 param_4) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/SetAnm__9daB_DRE_cFP16mDoExt_McaMorfSOiiff.s"
}
#pragma pop

/* 805C7E88-805C7EAC 000448 0024+00 1/0 0/0 0/0 .text            daB_DRE_Delete__FP9daB_DRE_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_DRE_Delete(daB_DRE_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/daB_DRE_Delete__FP9daB_DRE_c.s"
}
#pragma pop

/* 805C7EAC-805C7FCC 00046C 0120+00 1/1 0/0 0/0 .text            CameraSet__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::CameraSet() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/CameraSet__9daB_DRE_cFv.s"
}
#pragma pop

/* 805C7FCC-805C8008 00058C 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/__dt__4cXyzFv.s"
}
#pragma pop

/* 805C8008-805C808C 0005C8 0084+00 2/2 0/0 0/0 .text            SetStopingCam__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::SetStopingCam() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/SetStopingCam__9daB_DRE_cFv.s"
}
#pragma pop

/* 805C808C-805C81B8 00064C 012C+00 3/3 0/0 0/0 .text            SetStopCam__9daB_DRE_cF4cXyzffs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::SetStopCam(cXyz param_0, f32 param_1, f32 param_2, s16 param_3) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/SetStopCam__9daB_DRE_cF4cXyzffs.s"
}
#pragma pop

/* 805C81B8-805C8208 000778 0050+00 1/1 0/0 0/0 .text            SetCMoveCam__9daB_DRE_cF4cXyzf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::SetCMoveCam(cXyz param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/SetCMoveCam__9daB_DRE_cF4cXyzf.s"
}
#pragma pop

/* 805C8208-805C824C 0007C8 0044+00 2/2 0/0 0/0 .text            SetCMoveCam__9daB_DRE_cF4cXyzff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::SetCMoveCam(cXyz param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/SetCMoveCam__9daB_DRE_cF4cXyzff.s"
}
#pragma pop

/* 805C824C-805C8348 00080C 00FC+00 2/2 0/0 0/0 .text            SetEyeMoveCam__9daB_DRE_cF4cXyzffsf
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::SetEyeMoveCam(cXyz param_0, f32 param_1, f32 param_2, s16 param_3,
                                  f32 param_4) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/SetEyeMoveCam__9daB_DRE_cF4cXyzffsf.s"
}
#pragma pop

/* 805C8348-805C8458 000908 0110+00 1/1 0/0 0/0 .text SetEyeMoveCam__9daB_DRE_cF4cXyzffsff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::SetEyeMoveCam(cXyz param_0, f32 param_1, f32 param_2, s16 param_3, f32 param_4,
                                  f32 param_5) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/SetEyeMoveCam__9daB_DRE_cF4cXyzffsff.s"
}
#pragma pop

/* 805C8458-805C8544 000A18 00EC+00 1/1 0/0 0/0 .text            SetMoveCam__9daB_DRE_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::SetMoveCam(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/SetMoveCam__9daB_DRE_cFff.s"
}
#pragma pop

/* 805C8544-805C85E8 000B04 00A4+00 1/1 0/0 0/0 .text            SetReleaseCam__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::SetReleaseCam() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/SetReleaseCam__9daB_DRE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805CAD68-805CAD6C 00000C 0004+00 0/1 0/0 0/0 .rodata          @4209 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4209 = -1800.0f;
COMPILER_STRIP_GATE(0x805CAD68, &lit_4209);
#pragma pop

/* 805CAD6C-805CAD70 000010 0004+00 0/3 0/0 0/0 .rodata          @4210 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4210 = 1000.0f;
COMPILER_STRIP_GATE(0x805CAD6C, &lit_4210);
#pragma pop

/* 805CAD70-805CAD74 000014 0004+00 0/1 0/0 0/0 .rodata          @4211 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4211 = 600.0f;
COMPILER_STRIP_GATE(0x805CAD70, &lit_4211);
#pragma pop

/* 805CAD74-805CAD78 000018 0004+00 0/3 0/0 0/0 .rodata          @4212 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4212 = 200.0f;
COMPILER_STRIP_GATE(0x805CAD74, &lit_4212);
#pragma pop

/* 805CAD78-805CAD7C 00001C 0004+00 0/1 0/0 0/0 .rodata          @4213 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4213 = 9.0f;
COMPILER_STRIP_GATE(0x805CAD78, &lit_4213);
#pragma pop

/* 805CAD7C-805CAD80 000020 0004+00 0/1 0/0 0/0 .rodata          @4214 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4214 = 300.0f;
COMPILER_STRIP_GATE(0x805CAD7C, &lit_4214);
#pragma pop

/* 805CAD80-805CAD84 000024 0004+00 0/1 0/0 0/0 .rodata          @4215 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4215 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x805CAD80, &lit_4215);
#pragma pop

/* 805CAD84-805CAD88 000028 0004+00 0/2 0/0 0/0 .rodata          @4216 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4216 = 30.0f;
COMPILER_STRIP_GATE(0x805CAD84, &lit_4216);
#pragma pop

/* 805CAD88-805CAD8C 00002C 0004+00 0/1 0/0 0/0 .rodata          @4217 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4217 = 120.0f;
COMPILER_STRIP_GATE(0x805CAD88, &lit_4217);
#pragma pop

/* 805CAD8C-805CAD90 000030 0004+00 0/1 0/0 0/0 .rodata          @4218 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4218 = -700.0f;
COMPILER_STRIP_GATE(0x805CAD8C, &lit_4218);
#pragma pop

/* 805CAD90-805CAD94 000034 0004+00 0/1 0/0 0/0 .rodata          @4219 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4219 = -40.0f;
COMPILER_STRIP_GATE(0x805CAD90, &lit_4219);
#pragma pop

/* 805CAD94-805CAD98 000038 0004+00 0/2 0/0 0/0 .rodata          @4220 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4220 = 800.0f;
COMPILER_STRIP_GATE(0x805CAD94, &lit_4220);
#pragma pop

/* 805CAD98-805CAD9C 00003C 0004+00 0/2 0/0 0/0 .rodata          @4221 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4221 = 5.0f;
COMPILER_STRIP_GATE(0x805CAD98, &lit_4221);
#pragma pop

/* 805CAD9C-805CADA0 000040 0004+00 0/2 0/0 0/0 .rodata          @4222 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4222 = 80.0f;
COMPILER_STRIP_GATE(0x805CAD9C, &lit_4222);
#pragma pop

/* 805CADA0-805CADA4 000044 0004+00 0/1 0/0 0/0 .rodata          @4223 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4223 = 250.0f;
COMPILER_STRIP_GATE(0x805CADA0, &lit_4223);
#pragma pop

/* 805CADA4-805CADA8 000048 0004+00 0/4 0/0 0/0 .rodata          @4224 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4224 = 100.0f;
COMPILER_STRIP_GATE(0x805CADA4, &lit_4224);
#pragma pop

/* 805CADA8-805CADAC 00004C 0004+00 0/2 0/0 0/0 .rodata          @4225 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4225 = 130.0f;
COMPILER_STRIP_GATE(0x805CADA8, &lit_4225);
#pragma pop

/* 805CADAC-805CADB0 000050 0004+00 0/1 0/0 0/0 .rodata          @4226 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4226 = 1650.0f;
COMPILER_STRIP_GATE(0x805CADAC, &lit_4226);
#pragma pop

/* 805CADB0-805CADB4 000054 0004+00 1/3 0/0 0/0 .rodata          @4227 */
SECTION_RODATA static f32 const lit_4227 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x805CADB0, &lit_4227);

/* 805CADB4-805CADB8 000058 0004+00 0/1 0/0 0/0 .rodata          @4228 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4228 = 2.0f;
COMPILER_STRIP_GATE(0x805CADB4, &lit_4228);
#pragma pop

/* 805CADB8-805CADBC 00005C 0004+00 0/1 0/0 0/0 .rodata          @4229 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4229 = 2500.0f;
COMPILER_STRIP_GATE(0x805CADB8, &lit_4229);
#pragma pop

/* 805CADBC-805CADC4 000060 0008+00 0/1 0/0 0/0 .rodata          @4231 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4231[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805CADBC, &lit_4231);
#pragma pop

/* 805CB040-805CB044 000008 0001+03 3/3 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 805CB044-805CB048 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 805CB048-805CB04C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 805CB04C-805CB050 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 805CB050-805CB054 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 805CB054-805CB058 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 805CB058-805CB05C 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 805CB05C-805CB060 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 805CB060-805CB064 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 805CB064-805CB068 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 805CB068-805CB06C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 805CB06C-805CB070 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 805CB070-805CB074 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 805CB074-805CB078 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 805CB078-805CB07C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 805CB07C-805CB080 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 805CB080-805CB084 000048 0004+00 0/1 0/0 0/0 .bss             s_dis__23@unnamed@d_a_b_dre_cpp@ */
#pragma push
#pragma force_active on
static u8 data_805CB080[4];
#pragma pop

/* 805CB084-805CB088 00004C 0004+00 1/2 0/0 0/0 .bss s_LinkPos__23@unnamed@d_a_b_dre_cpp@ */
static u8 data_805CB084[4];

/* 805CB088-805CB08C 000050 0002+02 0/1 0/0 0/0 .bss s_TargetAngle__23@unnamed@d_a_b_dre_cpp@ */
#pragma push
#pragma force_active on
static u8 data_805CB088[2 + 2 /* padding */];
#pragma pop

/* 805CB08C-805CB098 000054 000C+00 0/1 0/0 0/0 .bss             @3768 */
#pragma push
#pragma force_active on
static u8 lit_3768[12];
#pragma pop

/* 805CB098-805CB0A4 000060 000C+00 3/6 0/0 0/0 .bss s_HeadPos__23@unnamed@d_a_b_dre_cpp@ */
static u8 data_805CB098[12];

/* 805CB0A4-805CB0B0 00006C 000C+00 0/1 0/0 0/0 .bss             @3769 */
#pragma push
#pragma force_active on
static u8 lit_3769[12];
#pragma pop

/* 805CB0B0-805CB0BC 000078 000C+00 0/3 0/0 0/0 .bss s_BodyPos__23@unnamed@d_a_b_dre_cpp@ */
#pragma push
#pragma force_active on
static u8 data_805CB0B0[12];
#pragma pop

/* 805CB0BC-805CB0C8 000084 000C+00 0/1 0/0 0/0 .bss             @3770 */
#pragma push
#pragma force_active on
static u8 lit_3770[12];
#pragma pop

/* 805CB0C8-805CB0D4 000090 000C+00 0/3 0/0 0/0 .bss s_TalePos__23@unnamed@d_a_b_dre_cpp@ */
#pragma push
#pragma force_active on
static u8 data_805CB0C8[12];
#pragma pop

/* 805C85E8-805C8BF8 000BA8 0610+00 1/1 0/0 0/0 .text            CamAction2__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::CamAction2() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/CamAction2__9daB_DRE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805CADC4-805CADC8 000068 0004+00 0/1 0/0 0/0 .rodata          @4309 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4309 = 150.0f;
COMPILER_STRIP_GATE(0x805CADC4, &lit_4309);
#pragma pop

/* 805CADC8-805CADCC 00006C 0004+00 0/1 0/0 0/0 .rodata          @4310 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4310 = 110.0f;
COMPILER_STRIP_GATE(0x805CADC8, &lit_4310);
#pragma pop

/* 805CADCC-805CADD0 000070 0004+00 0/1 0/0 0/0 .rodata          @4311 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4311 = 270.0f;
COMPILER_STRIP_GATE(0x805CADCC, &lit_4311);
#pragma pop

/* 805CADD0-805CADD4 000074 0004+00 0/1 0/0 0/0 .rodata          @4312 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4312 = 5000.0f;
COMPILER_STRIP_GATE(0x805CADD0, &lit_4312);
#pragma pop

/* 805CADD4-805CADD8 000078 0004+00 0/1 0/0 0/0 .rodata          @4313 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4313 = 1500.0f;
COMPILER_STRIP_GATE(0x805CADD4, &lit_4313);
#pragma pop

/* 805C8BF8-805C8EDC 0011B8 02E4+00 1/1 0/0 0/0 .text            DrAction2__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::DrAction2() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/DrAction2__9daB_DRE_cFv.s"
}
#pragma pop

/* 805C8EDC-805C9318 00149C 043C+00 2/1 0/0 0/0 .text            CamAction__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::CamAction() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/CamAction__9daB_DRE_cFv.s"
}
#pragma pop

/* 805C9318-805C9378 0018D8 0060+00 1/1 0/0 0/0 .text            Action__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::Action() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/Action__9daB_DRE_cFv.s"
}
#pragma pop

/* 805C9378-805C9B40 001938 07C8+00 2/1 0/0 0/0 .text            DrAction__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::DrAction() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/DrAction__9daB_DRE_cFv.s"
}
#pragma pop

/* 805C9B40-805CA158 002100 0618+00 2/1 0/0 0/0 .text            SoundChk__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::SoundChk() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/SoundChk__9daB_DRE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805CADD8-805CADDC 00007C 0004+00 0/0 0/0 0/0 .rodata          @4408 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4408 = 500.0f;
COMPILER_STRIP_GATE(0x805CADD8, &lit_4408);
#pragma pop

/* 805CADDC-805CADE0 000080 0004+00 0/2 0/0 0/0 .rodata          @4409 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4409 = 50.0f;
COMPILER_STRIP_GATE(0x805CADDC, &lit_4409);
#pragma pop

/* 805CADE0-805CADE4 000084 0004+00 0/0 0/0 0/0 .rodata          @4410 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4410 = -500.0f;
COMPILER_STRIP_GATE(0x805CADE0, &lit_4410);
#pragma pop

/* 805CADE4-805CADE8 000088 0004+00 1/1 0/0 0/0 .rodata          @4411 */
SECTION_RODATA static f32 const lit_4411 = 10.0f;
COMPILER_STRIP_GATE(0x805CADE4, &lit_4411);

/* 805CADE8-805CADEC 00008C 0004+00 0/0 0/0 0/0 .rodata          @4412 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4412 = 20.0f;
COMPILER_STRIP_GATE(0x805CADE8, &lit_4412);
#pragma pop

/* 805CADEC-805CADF0 000090 0004+00 0/0 0/0 0/0 .rodata          @4413 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4413 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x805CADEC, &lit_4413);
#pragma pop

/* 805CADF0-805CADF4 000094 0004+00 0/0 0/0 0/0 .rodata          @4414 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4414 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x805CADF0, &lit_4414);
#pragma pop

/* 805CADF4-805CADF8 000098 0004+00 0/0 0/0 0/0 .rodata          @4415 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4415 = 280.0f;
COMPILER_STRIP_GATE(0x805CADF4, &lit_4415);
#pragma pop

/* 805CADF8-805CADFC 00009C 0004+00 0/0 0/0 0/0 .rodata          @4606 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4606 = -800.0f;
COMPILER_STRIP_GATE(0x805CADF8, &lit_4606);
#pragma pop

/* 805CADFC-805CAE00 0000A0 0004+00 0/0 0/0 0/0 .rodata          @4607 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4607 = 4100.0f;
COMPILER_STRIP_GATE(0x805CADFC, &lit_4607);
#pragma pop

/* 805CAE00-805CAE04 0000A4 0004+00 0/0 0/0 0/0 .rodata          @4608 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4608 = 40.0f;
COMPILER_STRIP_GATE(0x805CAE00, &lit_4608);
#pragma pop

/* 805CAE04-805CAE08 0000A8 0004+00 0/0 0/0 0/0 .rodata          @4609 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4609 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x805CAE04, &lit_4609);
#pragma pop

/* 805CAE08-805CAE0C 0000AC 0004+00 0/0 0/0 0/0 .rodata          @4610 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4610 = 12000.0f;
COMPILER_STRIP_GATE(0x805CAE08, &lit_4610);
#pragma pop

/* 805CAE0C-805CAE10 0000B0 0004+00 0/0 0/0 0/0 .rodata          @4611 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4611 = 7000.0f;
COMPILER_STRIP_GATE(0x805CAE0C, &lit_4611);
#pragma pop

/* 805CAE10-805CAE14 0000B4 0004+00 0/0 0/0 0/0 .rodata          @4612 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4612 = 6500.0f;
COMPILER_STRIP_GATE(0x805CAE10, &lit_4612);
#pragma pop

/* 805CAE14-805CAE18 0000B8 0004+00 0/0 0/0 0/0 .rodata          @4613 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4613 = -7000.0f;
COMPILER_STRIP_GATE(0x805CAE14, &lit_4613);
#pragma pop

/* 805CAE18-805CAE1C 0000BC 0004+00 0/0 0/0 0/0 .rodata          @4614 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4614 = 3000.0f;
COMPILER_STRIP_GATE(0x805CAE18, &lit_4614);
#pragma pop

/* 805CAE1C-805CAE20 0000C0 0004+00 0/0 0/0 0/0 .rodata          @4615 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4615 = 6.0f;
COMPILER_STRIP_GATE(0x805CAE1C, &lit_4615);
#pragma pop

/* 805CAE20-805CAE24 0000C4 0004+00 0/0 0/0 0/0 .rodata          @4616 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4616 = 400.0f;
COMPILER_STRIP_GATE(0x805CAE20, &lit_4616);
#pragma pop

/* 805CAE24-805CAE28 0000C8 0004+00 0/0 0/0 0/0 .rodata          @4617 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4617 = -325.0f;
COMPILER_STRIP_GATE(0x805CAE24, &lit_4617);
#pragma pop

/* 805CAE28-805CAE2C 0000CC 0004+00 0/0 0/0 0/0 .rodata          @4618 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4618 = 215.0f;
COMPILER_STRIP_GATE(0x805CAE28, &lit_4618);
#pragma pop

/* 805CAE2C-805CAE30 0000D0 0004+00 0/0 0/0 0/0 .rodata          @4619 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4619 = 350.0f;
COMPILER_STRIP_GATE(0x805CAE2C, &lit_4619);
#pragma pop

/* 805CAE30-805CAE34 0000D4 0004+00 0/0 0/0 0/0 .rodata          @4620 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4620 = 70.0f;
COMPILER_STRIP_GATE(0x805CAE30, &lit_4620);
#pragma pop

/* 805CAE34-805CAE38 0000D8 0004+00 0/0 0/0 0/0 .rodata          @4758 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4758 = 43.0f;
COMPILER_STRIP_GATE(0x805CAE34, &lit_4758);
#pragma pop

/* 805CAE38-805CAE3C 0000DC 0004+00 0/0 0/0 0/0 .rodata          @4759 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4759 = 91.0f;
COMPILER_STRIP_GATE(0x805CAE38, &lit_4759);
#pragma pop

/* 805CAE3C-805CAE40 0000E0 0004+00 0/0 0/0 0/0 .rodata          @4760 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4760 = 113.0f;
COMPILER_STRIP_GATE(0x805CAE3C, &lit_4760);
#pragma pop

/* 805CAE40-805CAE44 0000E4 0004+00 0/0 0/0 0/0 .rodata          @4761 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4761 = 133.0f;
COMPILER_STRIP_GATE(0x805CAE40, &lit_4761);
#pragma pop

/* 805CAE44-805CAE48 0000E8 0004+00 0/0 0/0 0/0 .rodata          @4762 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4762 = 160.0f;
COMPILER_STRIP_GATE(0x805CAE44, &lit_4762);
#pragma pop

/* 805CAE48-805CAE4C 0000EC 0004+00 0/0 0/0 0/0 .rodata          @4763 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4763 = 186.0f;
COMPILER_STRIP_GATE(0x805CAE48, &lit_4763);
#pragma pop

/* 805CAE4C-805CAE50 0000F0 0004+00 0/0 0/0 0/0 .rodata          @4764 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4764 = 213.0f;
COMPILER_STRIP_GATE(0x805CAE4C, &lit_4764);
#pragma pop

/* 805CAE50-805CAE54 0000F4 0004+00 0/0 0/0 0/0 .rodata          @4765 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4765 = 238.0f;
COMPILER_STRIP_GATE(0x805CAE50, &lit_4765);
#pragma pop

/* 805CAE54-805CAE58 0000F8 0004+00 0/0 0/0 0/0 .rodata          @4766 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4766 = 261.0f;
COMPILER_STRIP_GATE(0x805CAE54, &lit_4766);
#pragma pop

/* 805CAE58-805CAE5C 0000FC 0004+00 0/0 0/0 0/0 .rodata          @4767 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4767 = 7.0f;
COMPILER_STRIP_GATE(0x805CAE58, &lit_4767);
#pragma pop

/* 805CAE5C-805CAE60 000100 0004+00 0/0 0/0 0/0 .rodata          @4768 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4768 = 75.0f;
COMPILER_STRIP_GATE(0x805CAE5C, &lit_4768);
#pragma pop

/* 805CAE60-805CAE64 000104 0004+00 0/0 0/0 0/0 .rodata          @4769 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4769 = 143.0f;
COMPILER_STRIP_GATE(0x805CAE60, &lit_4769);
#pragma pop

/* 805CAE64-805CAE68 000108 0004+00 0/0 0/0 0/0 .rodata          @4770 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4770 = 177.0f;
COMPILER_STRIP_GATE(0x805CAE64, &lit_4770);
#pragma pop

/* 805CAE68-805CAE6C 00010C 0004+00 0/0 0/0 0/0 .rodata          @4771 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4771 = 210.0f;
COMPILER_STRIP_GATE(0x805CAE68, &lit_4771);
#pragma pop

/* 805CAE6C-805CAE70 000110 0004+00 0/0 0/0 0/0 .rodata          @4772 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4772 = 243.0f;
COMPILER_STRIP_GATE(0x805CAE6C, &lit_4772);
#pragma pop

/* 805CAE70-805CAE74 000114 0004+00 0/0 0/0 0/0 .rodata          @4773 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4773 = 309.0f;
COMPILER_STRIP_GATE(0x805CAE70, &lit_4773);
#pragma pop

/* 805CAE74-805CAE78 000118 0004+00 0/0 0/0 0/0 .rodata          @4774 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4774 = 268.0f;
COMPILER_STRIP_GATE(0x805CAE74, &lit_4774);
#pragma pop

/* 805CAE78-805CAE7C 00011C 0004+00 0/0 0/0 0/0 .rodata          @4775 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4775 = 35.0f;
COMPILER_STRIP_GATE(0x805CAE78, &lit_4775);
#pragma pop

/* 805CAE7C-805CAE80 000120 0004+00 0/0 0/0 0/0 .rodata          @4776 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4776 = 65.0f;
COMPILER_STRIP_GATE(0x805CAE7C, &lit_4776);
#pragma pop

/* 805CAE80-805CAE84 000124 0004+00 0/0 0/0 0/0 .rodata          @4777 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4777 = 95.0f;
COMPILER_STRIP_GATE(0x805CAE80, &lit_4777);
#pragma pop

/* 805CAE84-805CAE88 000128 0004+00 0/0 0/0 0/0 .rodata          @4778 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4778 = 125.0f;
COMPILER_STRIP_GATE(0x805CAE84, &lit_4778);
#pragma pop

/* 805CAE88-805CAE8C 00012C 0004+00 0/0 0/0 0/0 .rodata          @4779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4779 = 102.0f;
COMPILER_STRIP_GATE(0x805CAE88, &lit_4779);
#pragma pop

/* 805CAE8C-805CAE90 000130 0004+00 0/0 0/0 0/0 .rodata          @4780 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4780 = 157.0f;
COMPILER_STRIP_GATE(0x805CAE8C, &lit_4780);
#pragma pop

/* 805CAE90-805CAE94 000134 0004+00 0/0 0/0 0/0 .rodata          @4781 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4781 = 180.0f;
COMPILER_STRIP_GATE(0x805CAE90, &lit_4781);
#pragma pop

/* 805CAE94-805CAE9C 000138 0008+00 0/1 0/0 0/0 .rodata          @4874 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4874[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805CAE94, &lit_4874);
#pragma pop

/* 805CAE9C-805CAEA4 000140 0008+00 0/1 0/0 0/0 .rodata          @4875 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4875[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805CAE9C, &lit_4875);
#pragma pop

/* 805CAEA4-805CAEAC 000148 0008+00 0/1 0/0 0/0 .rodata          @4876 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4876[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805CAEA4, &lit_4876);
#pragma pop

/* 805CA158-805CA49C 002718 0344+00 1/1 0/0 0/0 .text            Execute__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::Execute() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/Execute__9daB_DRE_cFv.s"
}
#pragma pop

/* 805CA49C-805CA4FC 002A5C 0060+00 1/1 0/0 0/0 .text            SpeedSet__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::SpeedSet() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/SpeedSet__9daB_DRE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805CAEAC-805CAEB0 000150 0004+00 0/1 0/0 0/0 .rodata          @4942 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4942 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x805CAEAC, &lit_4942);
#pragma pop

/* 805CAEB0-805CAEB4 000154 0004+00 0/1 0/0 0/0 .rodata          @4943 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4943 = 4.0f;
COMPILER_STRIP_GATE(0x805CAEB0, &lit_4943);
#pragma pop

/* 805CB0D4-805CB0D8 00009C 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_805CB0D4[4];

/* 805CA4FC-805CA670 002ABC 0174+00 1/1 0/0 0/0 .text            BreathSet__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::BreathSet() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/BreathSet__9daB_DRE_cFv.s"
}
#pragma pop

/* 805CA670-805CA6C0 002C30 0050+00 1/1 0/0 0/0 .text            Delete__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::Delete() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/Delete__9daB_DRE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805CAEB4-805CAEB8 000158 0004+00 1/1 0/0 0/0 .rodata          @5006 */
SECTION_RODATA static f32 const lit_5006 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x805CAEB4, &lit_5006);

/* 805CA6C0-805CA780 002C80 00C0+00 2/2 0/0 0/0 .text            setBaseMtx__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/setBaseMtx__9daB_DRE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805CAEB8-805CAEBC 00015C 0004+00 0/1 0/0 0/0 .rodata          @5084 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5084 = 6000.0f;
COMPILER_STRIP_GATE(0x805CAEB8, &lit_5084);
#pragma pop

/* 805CA780-805CA924 002D40 01A4+00 1/0 0/0 0/0 .text            daB_DRE_Draw__FP9daB_DRE_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_DRE_Draw(daB_DRE_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/daB_DRE_Draw__FP9daB_DRE_c.s"
}
#pragma pop

/* 805CA924-805CA944 002EE4 0020+00 2/1 0/0 0/0 .text            daB_DRE_Execute__FP9daB_DRE_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daB_DRE_Execute(daB_DRE_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/daB_DRE_Execute__FP9daB_DRE_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 805CAEBC-805CAEC0 000160 0004+00 0/1 0/0 0/0 .rodata          @5227 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5227 = -40000.0f;
COMPILER_STRIP_GATE(0x805CAEBC, &lit_5227);
#pragma pop

/* 805CAEC0-805CAEC4 000164 0004+00 0/1 0/0 0/0 .rodata          @5228 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5228 = 40000.0f;
COMPILER_STRIP_GATE(0x805CAEC0, &lit_5228);
#pragma pop

/* 805CAEC4-805CAEC8 000168 0004+00 0/1 0/0 0/0 .rodata          @5229 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5229 = 9600.0f;
COMPILER_STRIP_GATE(0x805CAEC4, &lit_5229);
#pragma pop

/* 805CAEC8-805CAECC 00016C 0004+00 0/1 0/0 0/0 .rodata          @5230 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5230 = 1800.0f;
COMPILER_STRIP_GATE(0x805CAEC8, &lit_5230);
#pragma pop

/* 805CA944-805CAC3C 002F04 02F8+00 1/1 0/0 0/0 .text            create__9daB_DRE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_DRE_c::create() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/create__9daB_DRE_cFv.s"
}
#pragma pop

/* 805CAC3C-805CACAC 0031FC 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 805CACAC-805CACB4 00326C 0008+00 1/0 0/0 0/0 .text            daB_DRE_IsDelete__FP9daB_DRE_c */
static bool daB_DRE_IsDelete(daB_DRE_c* param_0) {
    return true;
}

/* 805CACB4-805CAD1C 003274 0068+00 0/0 1/0 0/0 .text            __sinit_d_a_b_dre_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_b_dre_cpp() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/__sinit_d_a_b_dre_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x805CACB4, __sinit_d_a_b_dre_cpp);
#pragma pop

/* 805CAD1C-805CAD24 0032DC 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_805CAD1C() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/func_805CAD1C.s"
}
#pragma pop

/* 805CAD24-805CAD2C 0032E4 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_805CAD24() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/func_805CAD24.s"
}
#pragma pop

/* 805CAD2C-805CAD48 0032EC 001C+00 1/1 0/0 0/0 .text setCurrentPos__16obj_ystone_classF4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void obj_ystone_class::setCurrentPos(cXyz param_0) {
extern "C" asm void setCurrentPos__16obj_ystone_classF4cXyz() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dre/d_a_b_dre/setCurrentPos__16obj_ystone_classF4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 805CB0D8-805CB0DC 0000A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_805CB0D8[4];
#pragma pop

/* 805CB0DC-805CB0E0 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_805CB0DC[4];
#pragma pop

/* 805CB0E0-805CB0E4 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_805CB0E0[4];
#pragma pop

/* 805CB0E4-805CB0E8 0000AC 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_805CB0E4[4];
#pragma pop

/* 805CB0E8-805CB0EC 0000B0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805CB0E8[4];
#pragma pop

/* 805CB0EC-805CB0F0 0000B4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805CB0EC[4];
#pragma pop

/* 805CB0F0-805CB0F4 0000B8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_805CB0F0[4];
#pragma pop

/* 805CB0F4-805CB0F8 0000BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_805CB0F4[4];
#pragma pop

/* 805CB0F8-805CB0FC 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_805CB0F8[4];
#pragma pop

/* 805CB0FC-805CB100 0000C4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_805CB0FC[4];
#pragma pop

/* 805CB100-805CB104 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_805CB100[4];
#pragma pop

/* 805CB104-805CB108 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_805CB104[4];
#pragma pop

/* 805CB108-805CB10C 0000D0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_805CB108[4];
#pragma pop

/* 805CB10C-805CB110 0000D4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805CB10C[4];
#pragma pop

/* 805CB110-805CB114 0000D8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_805CB110[4];
#pragma pop

/* 805CB114-805CB118 0000DC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_805CB114[4];
#pragma pop

/* 805CB118-805CB11C 0000E0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_805CB118[4];
#pragma pop

/* 805CB11C-805CB120 0000E4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_805CB11C[4];
#pragma pop

/* 805CB120-805CB124 0000E8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_805CB120[4];
#pragma pop

/* 805CB124-805CB128 0000EC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_805CB124[4];
#pragma pop

/* 805CB128-805CB12C 0000F0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_805CB128[4];
#pragma pop

/* 805CB12C-805CB130 0000F4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805CB12C[4];
#pragma pop

/* 805CB130-805CB134 0000F8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805CB130[4];
#pragma pop

/* 805CB134-805CB138 0000FC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805CB134[4];
#pragma pop

/* 805CB138-805CB13C 000100 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_805CB138[4];
#pragma pop

/* 805CAECC-805CAECC 000170 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
