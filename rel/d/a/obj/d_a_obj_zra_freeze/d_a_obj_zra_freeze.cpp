/**
 * d_a_obj_zra_freeze.cpp
 * Object - Frozen Zora
 */

#include "rel/d/a/obj/d_a_obj_zra_freeze/d_a_obj_zra_freeze.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "SSystem/SComponent/c_math.h"
#include "m_Do/m_Do_lib.h"
#include "f_op/f_op_actor_mng.h"
#include "d/com/d_com_inf_game.h"
#include "d/a/d_a_player.h"
#include "d/d_procname.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void setBaseMtx__13daZraFreeze_cFv();
extern "C" void chkActorInScreen__13daZraFreeze_cFv();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" void Create__13daZraFreeze_cFv();
extern "C" void CreateHeap__13daZraFreeze_cFv();
extern "C" void setHitodamaPrtcl__13daZraFreeze_cFv();
extern "C" void Execute__13daZraFreeze_cFv();
extern "C" void Draw__13daZraFreeze_cFv();
extern "C" void Delete__13daZraFreeze_cFv();
extern "C" static void daZraFreeze_Draw__FP13daZraFreeze_c();
extern "C" static void daZraFreeze_Execute__FP13daZraFreeze_c();
extern "C" static bool daZraFreeze_IsDelete__FP13daZraFreeze_c();
extern "C" static void daZraFreeze_Delete__FP13daZraFreeze_c();
extern "C" static void daZraFreeze_create__FP10fopAc_ac_c();
extern "C" extern char const* const d_a_obj_zra_freeze__stringBase0;

//
// External References:
//

extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void XYZrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGs_sense_type_change_Set__FSc();
extern "C" void dComIfGs_wolfeye_effect_check__Fv();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void checkNowWolfEyeUp__9daPy_py_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_rndF__Ff();
extern "C" void _savegpr_24();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 sincosTable___5JMath[65536];

//
// Declarations:
//

/* 80D44BC4-80D44BC8 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
static char* l_arcName = "zrF";

/* 80D44B48-80D44B50 000000 0008+00 3/3 0/0 0/0 .rodata          l_DATA */
static f32 const l_DATA[2] = { 800.0f, 0.0f };

/* 80D440B8-80D44124 000078 006C+00 2/2 0/0 0/0 .text            setBaseMtx__13daZraFreeze_cFv */
void daZraFreeze_c::setBaseMtx() {
    mDoMtx_stack_c::transS(current.pos.x, current.pos.y, current.pos.z);
    mDoMtx_stack_c::XYZrotM(shape_angle);
    mpModel->setBaseTRMtx(mDoMtx_stack_c::get());
    PSMTXCopy(mDoMtx_stack_c::get(), mMtx);
}

/* 80D44124-80D4429C 0000E4 0178+00 1/1 0/0 0/0 .text            chkActorInScreen__13daZraFreeze_cFv
 */
BOOL daZraFreeze_c::chkActorInScreen() {
    cXyz proj;
    cXyz vec[8];
    vec[0].set(mMin.x, mMax.y, mMin.z);
    vec[1].set(mMax.x, mMax.y, mMin.z);
    vec[2].set(mMin.x, mMax.y, mMax.y);
    vec[3].set(mMax.x, mMax.y, mMax.y);
    vec[4].set(mMin.x, mMin.y, mMin.z);
    vec[5].set(mMax.x, mMin.y, mMin.z);
    vec[6].set(mMin.x, mMin.y, mMax.y);
    vec[7].set(mMax.x, mMin.y, mMax.y);
    mDoMtx_stack_c::copy(mMtx);
    mDoMtx_stack_c::transM(0.0f, 0.0f, 0.0f);
    PSMTXMultVecArray(mDoMtx_stack_c::get(), vec, vec, 8);
    for (int i = 0; i < 8; i++) {
        mDoLib_project(&vec[i], &proj);
        if (0.0f < proj.x && proj.x < 608.0f && 0.0f < proj.y && proj.y < 448.0f) {
            continue;
        }
        return false;
    }
    return true;
}

/* 80D4429C-80D442BC 00025C 0020+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
static int createSolidHeap(fopAc_ac_c* i_this) {
    return static_cast<daZraFreeze_c*>(i_this)->CreateHeap();
}

/* 80D442BC-80D4443C 00027C 0180+00 1/1 0/0 0/0 .text            Create__13daZraFreeze_cFv */
cPhs__Step daZraFreeze_c::Create() {
    fopAcM_SetupActor(this, daZraFreeze_c);
    field_0x5b0 = (fopAcM_GetParam(this) >> 8) & 0xff;
    field_0x5b1 = (fopAcM_GetParam(this) >> 0x10) & 0xff;
    field_0x5b2 = (fopAcM_GetParam(this) >> 0x18) & 0xff;
    mMapToolId = fopAcM_GetParam(this) & 0xff;
    mEventId = -1;
    cPhs__Step step = (cPhs__Step)dComIfG_resLoad(&mPhaseReq, l_arcName);
    if (step == cPhs_COMPLEATE_e) {
        if (!fopAcM_entrySolidHeap(this, createSolidHeap, 0x1540)) {
            return cPhs_ERROR_e;
        }
        setBaseMtx();
        fopAcM_SetMtx(this, mpModel->getBaseTRMtx());
        J3DJoint* joint = mpModel->getModelData()->getJointNodePointer(0);
        fopAcM_setCullSizeBox(this, joint->getMin()->x, joint->getMin()->y, joint->getMin()->z,
                              joint->getMax()->x, joint->getMax()->y, joint->getMax()->z);
        mMin.set(joint->getMin()->x, joint->getMin()->y, joint->getMin()->z);
        mMax.set(joint->getMax()->x, joint->getMax()->y, joint->getMax()->z);
        mTwilight = dKy_darkworld_check();
        mParticleKey[0] = -1;
        mParticleKey[1] = -1;
        field_0x5cf = 0;
        field_0x5de = cM_rndF(65536.0f);
    }
    return step;
}

/* 80D4443C-80D444C0 0003FC 0084+00 1/1 0/0 0/0 .text            CreateHeap__13daZraFreeze_cFv */
int daZraFreeze_c::CreateHeap() {
    static char* l_bmdName[3] = {
        "zrA_a_TW.bmd",
        "zrA_pain_TW.bmd",
        "zrA_sol_TW.bmd",
    };
    J3DModelData* model_data = (J3DModelData*)dComIfG_getObjectRes(l_arcName, l_bmdName[subtype]);
    mpModel = mDoExt_J3DModel__create(model_data, 0x80000, 0x11000084);
    if (mpModel == NULL) {
        return 0;
    }
    return 1;
}

/* 80D44B60-80D44B64 000018 0004+00 0/1 0/0 0/0 .rodata          id$3856 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const id[4] = {
    0x84,
    0x97,
    0x84,
    0x98,
};
COMPILER_STRIP_GATE(0x80D44B60, &id);
#pragma pop

/* 80D44B64-80D44B68 00001C 0004+00 0/1 0/0 0/0 .rodata          @3917 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3917 = 8.0f;
COMPILER_STRIP_GATE(0x80D44B64, &lit_3917);
#pragma pop

/* 80D44B68-80D44B6C 000020 0004+00 0/1 0/0 0/0 .rodata          @3918 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3918 = 4.0f;
COMPILER_STRIP_GATE(0x80D44B68, &lit_3918);
#pragma pop

/* 80D44B6C-80D44B70 000024 0004+00 0/1 0/0 0/0 .rodata          @3919 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3919 = 1.0f;
COMPILER_STRIP_GATE(0x80D44B6C, &lit_3919);
#pragma pop

/* 80D444C0-80D44698 000480 01D8+00 1/1 0/0 0/0 .text            setHitodamaPrtcl__13daZraFreeze_cFv
 */
#ifdef NONMATCHING
void daZraFreeze_c::setHitodamaPrtcl() {
    cXyz pos = current.pos;
    field_0x5dc = (u16)(field_0x5de << 1);
    mParticleOffset.x = 8.0f * cM_ssin(field_0x5de);
    mParticleOffset.y = 4.0f * cM_ssin(field_0x5dc);
    mParticleOffset.z = mParticleOffset.x * -cM_ssin(shape_angle.y);
    mParticleOffset.x *= cM_scos(shape_angle.y);
    field_0x5de += 0x400;
    pos.x = current.pos.x + mParticleOffset.x;
    pos.y = current.pos.y + mParticleOffset.y;
    pos.z = current.pos.z + mParticleOffset.z;
    static u16 const id[2] = { 0x8497, 0x8498 };
    for (int i = 0; i < 2; i++) {
        mParticleKey[i] = dComIfGp_particle_set(mParticleKey[i], id[i], &pos, &shape_angle, NULL);
        JPABaseEmitter* emitter = dComIfGp_particle_getEmitter(mParticleKey[i]);
        if (emitter != NULL) {
            u8 alpha = dComIfGs_wolfeye_effect_check() == false ? 0xff : 0;
            emitter->setGlobalTranslation(pos.x, pos.y, pos.z);
            emitter->setGlobalAlpha(alpha);
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daZraFreeze_c::setHitodamaPrtcl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zra_freeze/d_a_obj_zra_freeze/setHitodamaPrtcl__13daZraFreeze_cFv.s"
}
#pragma pop
#endif

/* 80D44698-80D449E0 000658 0348+00 1/1 0/0 0/0 .text            Execute__13daZraFreeze_cFv */
int daZraFreeze_c::Execute() {
    if (field_0x5b0 == 0xff || dComIfGs_isSwitch(field_0x5b0, fopAcM_GetRoomNo(this))) {
        setBaseMtx();
        csXyz stored_shape_angle = shape_angle;
        shape_angle.x = 0;
        shape_angle.z = 0;
        setHitodamaPrtcl();
        shape_angle = stored_shape_angle;
        if (field_0x5b1 != 0xff && dComIfGs_isSwitch(field_0x5b1, fopAcM_GetRoomNo(this))) {
            if (!dComIfGs_isSwitch(field_0x5b2, fopAcM_GetRoomNo(this))) {
                if (mTwilight != 0 && daPy_py_c::checkNowWolfEyeUp()) {
                    cXyz delta = current.pos - daPy_getPlayerActorClass()->current.pos;
                    if (delta.absXZ() < l_DATA[0] && chkActorInScreen()) {
                        mEventId = dComIfGp_getEventManager().getEventIdx(this, "zora_koori", 0xff);
                        fopAcM_orderOtherEventId(this, mEventId, mMapToolId, 0xffff, 4, 1);
                        dComIfGs_onSwitch(field_0x5b2, fopAcM_GetRoomNo(this));
                        daPy_getPlayerActorClass()->onWolfEyeKeep();
                        dComIfGs_sense_type_change_Set(1);
                        field_0x5cf = 1;
                    }
                }
            } else {
                if (dComIfGp_event_runCheck()) {
                    if (eventInfo.i_checkCommandDemoAccrpt()) {
                        daPy_getPlayerActorClass()->onWolfEyeKeep();
                    } else if (field_0x5cf == 1) {
                        dComIfGs_sense_type_change_Set(-1);
                        field_0x5cf = 0;
                    }
                } else if (field_0x5cf == 1) {
                    dComIfGs_sense_type_change_Set(-1);
                    field_0x5cf = 0;
                }
            }
        }
    }
    return 1;
}

/* 80D449E0-80D44A84 0009A0 00A4+00 1/1 0/0 0/0 .text            Draw__13daZraFreeze_cFv */
int daZraFreeze_c::Draw() {
    if (field_0x5b0 == 0xff || dComIfGs_isSwitch(field_0x5b0, fopAcM_GetRoomNo(this))) {
        if (mTwilight != 0 && dComIfGs_wolfeye_effect_check() == true) {
            g_env_light.settingTevStruct(4, &current.pos, &tevStr);
            g_env_light.setLightTevColorType_MAJI(mpModel->mModelData, &tevStr);
            mDoExt_modelUpdateDL(mpModel);
        }
    }
    return 1;
}

/* 80D44A84-80D44AB8 000A44 0034+00 1/1 0/0 0/0 .text            Delete__13daZraFreeze_cFv */
int daZraFreeze_c::Delete() {
    dComIfG_resDelete(&mPhaseReq, l_arcName);
    return 1;
}

/* 80D44AB8-80D44AD8 000A78 0020+00 1/0 0/0 0/0 .text            daZraFreeze_Draw__FP13daZraFreeze_c
 */
static int daZraFreeze_Draw(daZraFreeze_c* i_this) {
    return i_this->Draw();
}

/* 80D44AD8-80D44AF8 000A98 0020+00 1/0 0/0 0/0 .text daZraFreeze_Execute__FP13daZraFreeze_c */
static int daZraFreeze_Execute(daZraFreeze_c* i_this) {
    return i_this->Execute();
}

/* 80D44AF8-80D44B00 000AB8 0008+00 1/0 0/0 0/0 .text daZraFreeze_IsDelete__FP13daZraFreeze_c */
static int daZraFreeze_IsDelete(daZraFreeze_c* i_this) {
    return 1;
}

/* 80D44B00-80D44B20 000AC0 0020+00 1/0 0/0 0/0 .text daZraFreeze_Delete__FP13daZraFreeze_c */
static int daZraFreeze_Delete(daZraFreeze_c* i_this) {
    return i_this->Delete();
}

/* 80D44B20-80D44B40 000AE0 0020+00 1/0 0/0 0/0 .text            daZraFreeze_create__FP10fopAc_ac_c
 */
static cPhs__Step daZraFreeze_create(fopAc_ac_c* i_this) {
    return static_cast<daZraFreeze_c*>(i_this)->Create();
}

/* ############################################################################################## */
/* 80D44BD4-80D44BF4 -00001 0020+00 1/0 0/0 0/0 .data            l_daZraFreeze_Method */
static actor_method_class l_daZraFreeze_Method = {
    (process_method_func)daZraFreeze_create,
    (process_method_func)daZraFreeze_Delete,
    (process_method_func)daZraFreeze_Execute,
    (process_method_func)daZraFreeze_IsDelete,
    (process_method_func)daZraFreeze_Draw,
};

/* 80D44BF4-80D44C24 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_ZRAFREEZE */
extern actor_process_profile_definition g_profile_OBJ_ZRAFREEZE = {
    fpcLy_CURRENT_e,
    7,
    fpcPi_CURRENT_e,
    PROC_OBJ_ZRAFREEZE,
    &g_fpcLf_Method.mBase,
    sizeof(daZraFreeze_c),
    0,
    0,
    &g_fopAc_Method.base,
    0x184,
    &l_daZraFreeze_Method,
    0x44100,
    fopAc_ACTOR_e,
    fopAc_CULLBOX_CUSTOM_e,
};
