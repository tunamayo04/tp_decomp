//
// Generated By: dol2asm
// Translation Unit: d_a_kytag08
//

#include "rel/d/a/kytag/d_a_kytag08/d_a_kytag08.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_procname.h"
#include "dol2asm.h"

//
// Types:
//

//
// Forward References:
//

extern "C" static bool daKytag08_Draw__FP13kytag08_class();
extern "C" static void daKytag08_Execute__FP13kytag08_class();
extern "C" static bool daKytag08_IsDelete__FP13kytag08_class();
extern "C" static void daKytag08_Delete__FP13kytag08_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daKytag08_Create__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" extern char const* const d_a_kytag08__stringBase0;

//
// External References:
//

extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGs_BossLife_public_Set__FSc();
extern "C" void dComIfGs_BossLife_public_Get__Fv();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void dKy_shadow_mode_check__FUc();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void deleteAllParticle__14JPABaseEmitterFv();
extern "C" void startFogWipeTrigger__10Z2EnvSeMgrFP3Vec();
extern "C" void setFogWipeWidth__10Z2EnvSeMgrFf();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();

//
// Declarations:
//

/* 8085A578-8085A580 000078 0008+00 1/0 0/0 0/0 .text            daKytag08_Draw__FP13kytag08_class
 */
static int daKytag08_Draw(kytag08_class* i_this) {
    return 1;
}

/* ############################################################################################## */
/* 8085B28C-8085B290 000000 0004+00 2/2 0/0 0/0 .rodata          @4012 */
SECTION_RODATA static f32 const lit_4012 = 100.0f;
COMPILER_STRIP_GATE(0x8085B28C, &lit_4012);

/* 8085B290-8085B294 000004 0004+00 0/2 0/0 0/0 .rodata          @4013 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4013[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8085B290, &lit_4013);
#pragma pop

/* 8085B294-8085B29C 000008 0008+00 0/1 0/0 0/0 .rodata          @4014 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4014[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8085B294, &lit_4014);
#pragma pop

/* 8085B29C-8085B2A4 000010 0008+00 0/1 0/0 0/0 .rodata          @4015 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4015[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8085B29C, &lit_4015);
#pragma pop

/* 8085B2A4-8085B2AC 000018 0008+00 0/1 0/0 0/0 .rodata          @4016 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4016[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8085B2A4, &lit_4016);
#pragma pop

/* 8085B2AC-8085B2B0 000020 0004+00 0/1 0/0 0/0 .rodata          @4017 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4017 = 2000.0f;
COMPILER_STRIP_GATE(0x8085B2AC, &lit_4017);
#pragma pop

/* 8085B2B0-8085B2B4 000024 0004+00 0/2 0/0 0/0 .rodata          @4018 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4018 = 20.0f;
COMPILER_STRIP_GATE(0x8085B2B0, &lit_4018);
#pragma pop

/* 8085B2B4-8085B2B8 000028 0004+00 0/1 0/0 0/0 .rodata          @4019 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4019 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8085B2B4, &lit_4019);
#pragma pop

/* 8085B2B8-8085B2BC 00002C 0004+00 0/1 0/0 0/0 .rodata          @4020 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4020 = 10.0f;
COMPILER_STRIP_GATE(0x8085B2B8, &lit_4020);
#pragma pop

/* 8085B2BC-8085B2C0 000030 0004+00 0/1 0/0 0/0 .rodata          @4021 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4021 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x8085B2BC, &lit_4021);
#pragma pop

/* 8085B2C0-8085B2C4 000034 0004+00 0/1 0/0 0/0 .rodata          @4022 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4022 = 0x3727C5AC;
COMPILER_STRIP_GATE(0x8085B2C0, &lit_4022);
#pragma pop

/* 8085B2C4-8085B2C8 000038 0004+00 0/1 0/0 0/0 .rodata          @4023 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4023 = 5.0f;
COMPILER_STRIP_GATE(0x8085B2C4, &lit_4023);
#pragma pop

/* 8085B2C8-8085B2CC 00003C 0004+00 0/1 0/0 0/0 .rodata          @4024 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4024 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x8085B2C8, &lit_4024);
#pragma pop

/* 8085B2CC-8085B2D0 000040 0004+00 0/1 0/0 0/0 .rodata          @4025 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4025 = 8.0f;
COMPILER_STRIP_GATE(0x8085B2CC, &lit_4025);
#pragma pop

/* 8085B2D0-8085B2D4 000044 0004+00 0/1 0/0 0/0 .rodata          @4026 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4026 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x8085B2D0, &lit_4026);
#pragma pop

/* 8085B2D4-8085B2D8 000048 0004+00 0/1 0/0 0/0 .rodata          @4027 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4027 = 0x3BA3D70A;
COMPILER_STRIP_GATE(0x8085B2D4, &lit_4027);
#pragma pop

/* 8085B2D8-8085B2DC 00004C 0004+00 0/1 0/0 0/0 .rodata          @4028 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4028 = 0x3A83126F;
COMPILER_STRIP_GATE(0x8085B2D8, &lit_4028);
#pragma pop

/* 8085B2DC-8085B2E0 000050 0004+00 0/2 0/0 0/0 .rodata          @4029 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4029 = 1.0f;
COMPILER_STRIP_GATE(0x8085B2DC, &lit_4029);
#pragma pop

/* 8085B2E0-8085B2E4 000054 0004+00 0/1 0/0 0/0 .rodata          @4030 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4030 = 0.5f;
COMPILER_STRIP_GATE(0x8085B2E0, &lit_4030);
#pragma pop

/* 8085B2E4-8085B2E8 000058 0004+00 0/1 0/0 0/0 .rodata          @4031 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4031 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x8085B2E4, &lit_4031);
#pragma pop

/* 8085B2E8-8085B2EC 00005C 0004+00 0/1 0/0 0/0 .rodata          @4032 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4032 = 0.25f;
COMPILER_STRIP_GATE(0x8085B2E8, &lit_4032);
#pragma pop

/* 8085B2EC-8085B2F0 000060 0004+00 0/1 0/0 0/0 .rodata          @4033 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4033 = 0x3B03126F;
COMPILER_STRIP_GATE(0x8085B2EC, &lit_4033);
#pragma pop

/* 8085B2F0-8085B2F4 000064 0004+00 0/1 0/0 0/0 .rodata          @4034 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4034 = 37.5f;
COMPILER_STRIP_GATE(0x8085B2F0, &lit_4034);
#pragma pop

/* 8085B2F4-8085B2F8 000068 0004+00 0/1 0/0 0/0 .rodata          @4035 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4035 = 4000.0f;
COMPILER_STRIP_GATE(0x8085B2F4, &lit_4035);
#pragma pop

/* 8085B2F8-8085B2FC 00006C 0004+00 0/1 0/0 0/0 .rodata          @4036 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4036 = 4.0f;
COMPILER_STRIP_GATE(0x8085B2F8, &lit_4036);
#pragma pop

/* 8085B2FC-8085B300 000070 0004+00 0/1 0/0 0/0 .rodata          @4037 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4037 = 1.0f / 40.0f;
COMPILER_STRIP_GATE(0x8085B2FC, &lit_4037);
#pragma pop

/* 8085B300-8085B304 000074 0004+00 0/1 0/0 0/0 .rodata          @4038 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4038 = 50.0f;
COMPILER_STRIP_GATE(0x8085B300, &lit_4038);
#pragma pop

/* 8085B304-8085B308 000078 0004+00 0/1 0/0 0/0 .rodata          @4039 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4039 = 56.0f;
COMPILER_STRIP_GATE(0x8085B304, &lit_4039);
#pragma pop

/* 8085B308-8085B30C 00007C 0004+00 0/1 0/0 0/0 .rodata          @4040 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4040 = 45.0f;
COMPILER_STRIP_GATE(0x8085B308, &lit_4040);
#pragma pop

/* 8085B30C-8085B310 000080 0004+00 0/1 0/0 0/0 .rodata          @4041 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4041 = 30.0f;
COMPILER_STRIP_GATE(0x8085B30C, &lit_4041);
#pragma pop

/* 8085A580-8085AEA0 000080 0920+00 1/0 0/0 0/0 .text daKytag08_Execute__FP13kytag08_class */
// matches with literals
#ifdef NONMATCHING
static int daKytag08_Execute(kytag08_class* i_this) {
    dScnKy_env_light_c* env_light = dKy_getEnvlight();
    daPy_py_c* player_p = daPy_getPlayerActorClass();
    JGeometry::TVec3<f32> particle_scale;

    i_this->field_0x5d8 = 1;
    if (i_this->field_0x5d8 == 0) {
        i_this->current.pos.x = player_p->current.pos.x;
        i_this->current.pos.y = 100.0f;
        i_this->current.pos.z = player_p->current.pos.z;
    } else if (env_light->field_0x0c18[0].field_0x26 == 1) {
        i_this->current.pos.x = env_light->field_0x0c18[0].mPos.x;
        i_this->current.pos.y = 100.0f;
        i_this->current.pos.z = env_light->field_0x0c18[0].mPos.z;
    }

    if (i_this->field_0x5b8.abs(i_this->current.pos) < 2000.0f && !dComIfGp_event_runCheck()) {
        if (i_this->field_0x5d4 > 100) {
            f32 var_f30;
            f32 var_f31;
            if (i_this->field_0x5d8 != 0) {
                var_f30 = 20.0f;
                var_f31 = 0.1f;
            } else {
                var_f30 = 10.0f;
                var_f31 = 0.2f;
            }

            cLib_addCalc(&i_this->field_0x5b8.x, i_this->field_0x5c4.x, var_f31, var_f30, 1.0E-5f);
            cLib_addCalc(&i_this->field_0x5b8.z, i_this->field_0x5c4.z, var_f31, var_f30, 1.0E-5f);
        } else {
            f32 var_f30;
            f32 var_f31;
            if (i_this->field_0x5d8 != 0) {
                var_f30 = 20.0f;
                var_f31 = 0.1f;
            } else {
                var_f30 = 10.0f;
                var_f31 = 0.2f;
            }

            cLib_addCalc(&i_this->field_0x5b8.x, i_this->field_0x5c4.x, var_f31, var_f30, 1.0E-5f);
            cLib_addCalc(&i_this->field_0x5b8.z, i_this->field_0x5c4.z, var_f31, var_f30, 1.0E-5f);
        }
    } else {
        i_this->field_0x5b8.x = i_this->current.pos.x;
        i_this->field_0x5b8.z = i_this->current.pos.z;
    }

    if (!dKy_shadow_mode_check(2)) {
        if (!dComIfGp_event_runCheck()) {
            cLib_addCalc(&i_this->field_0x5d0, 0.0f, 0.2f, 0.005f, 0.001f);
        }
    } else if (i_this->field_0x5d4 != 0) {
        cLib_addCalc(&i_this->field_0x5d0, 1.0f, 0.5f, 0.01f, 0.001f);
    } else if (!dComIfGp_event_runCheck()) {
        cLib_addCalc(&i_this->field_0x5d0, 0.25f, 0.01f, 0.002f, 0.001f);
    }

    mDoAud_setFogWipeWidth(i_this->field_0x5d0);

    if (i_this->field_0x5d8 != 0) {
        f32 tmp2 = 37.5f;
        if (i_this->field_0x5b8.abs(i_this->current.pos) >
            i_this->field_0x5d0 * tmp2 * i_this->field_0x5ac.x)
        {
            dComIfGs_BossLife_public_Set(2);
        }
    }

    if ((daPy_getPlayerActorClass()->checkKandelaarSwing(1) && i_this->field_0x5d4 < 100) ||
        dComIfGs_BossLife_public_Get() == 1)
    {
        dComIfGs_BossLife_public_Set(0);
        i_this->field_0x5c4 = i_this->current.pos;
        i_this->field_0x5d4 = 180;
        mDoAud_startFogWipeTrigger(&i_this->current.pos);
    } else {
        f32 var_f30_3;
        f32 var_f31_3;
        if (i_this->field_0x5d8 != 0) {
            var_f30_3 = 4000.0f;
            var_f31_3 = 0.5f;
        } else {
            var_f30_3 = 4.0f;
            var_f31_3 = 0.025f;
        }

        cLib_addCalc(&i_this->field_0x5c4.x, i_this->current.pos.x, var_f31_3, var_f30_3, 0.01f);
        cLib_addCalc(&i_this->field_0x5c4.z, i_this->current.pos.z, var_f31_3, var_f30_3, 0.01f);
    }

    if (i_this->field_0x5d4 != 0) {
        i_this->field_0x5d4--;
    }

    if (i_this->mpEmitter1 != NULL) {
        i_this->mpEmitter1->setGlobalTranslation(i_this->field_0x5b8.x, i_this->field_0x5b8.y,
                                                  i_this->field_0x5b8.z);
        i_this->mpEmitter1->setVolumeSize(i_this->field_0x5ac.x * 50.0f * i_this->field_0x5d0);

        f32 temp_f0_7 = 1.0f - i_this->field_0x5d0;
        particle_scale.x = 1.0f - (temp_f0_7 * temp_f0_7);
        particle_scale.y = 1.0f - (temp_f0_7 * temp_f0_7);
        particle_scale.z = 1.0f - (temp_f0_7 * temp_f0_7);
        i_this->mpEmitter1->setGlobalParticleScale(particle_scale);
    }

    if (i_this->field_0x5d0 <= 0.001f) {
        i_this->field_0x5b8.x = i_this->current.pos.x;
        i_this->field_0x5b8.z = i_this->current.pos.z;

        i_this->field_0x5c4 = i_this->field_0x5b8;
    }

    f32 var_f30_4 = 20.0f;
    if (dKy_darkworld_check()) {
        var_f30_4 = 56.0f;
    }

    f32 var_f0;
    if (player_p->getSpinnerActor()) {
        var_f0 = player_p->getSpinnerActor()->current.pos.y;
    } else {
        var_f0 = player_p->current.pos.y;
    }

    if (var_f0 < var_f30_4) {
        cXyz sp24(player_p->current.pos);
        sp24.y = 100.0f;

        if (i_this->field_0x5b8.abs(sp24) > i_this->field_0x5ac.x * 45.0f * i_this->field_0x5d0 ||
            i_this->field_0x5d0 <= 0.01f)
        {
            player_p->onFogFade();
        }
    }

    if (player_p != NULL && i_this->mpEmitter2 != NULL) {
        i_this->mpEmitter2->setGlobalTranslation(player_p->current.pos.x, 100.0f,
                                                  player_p->current.pos.z);

        particle_scale.z = 0.0f;
        particle_scale.y = 0.0f;
        particle_scale.x = 0.0f;

        if (player_p->current.pos.y < 100.0f) {
            cXyz sp18(player_p->current.pos);
            sp18.y = 100.0f;

            if (i_this->field_0x5b8.abs(sp18) > i_this->field_0x5ac.x * 45.0f * i_this->field_0x5d0)
            {
                f32 scale_factor = (100.0f - player_p->current.pos.y) / 30.0f;

                if (scale_factor > 1.0f) {
                    scale_factor = 1.0f;
                }

                particle_scale.z = scale_factor;
                particle_scale.y = scale_factor;
                particle_scale.x = scale_factor;
            }
        }

        i_this->mpEmitter2->setGlobalParticleScale(particle_scale);
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daKytag08_Execute(kytag08_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag08/d_a_kytag08/daKytag08_Execute__FP13kytag08_class.s"
}
#pragma pop
#endif

/* 8085AEA0-8085AEA8 0009A0 0008+00 1/0 0/0 0/0 .text daKytag08_IsDelete__FP13kytag08_class */
static int daKytag08_IsDelete(kytag08_class* i_this) {
    return 1;
}

/* 8085AEA8-8085AF74 0009A8 00CC+00 1/0 0/0 0/0 .text            daKytag08_Delete__FP13kytag08_class
 */
static int daKytag08_Delete(kytag08_class* i_this) {
    if (i_this->mpEmitter1 != NULL) {
        i_this->mpEmitter1->deleteAllParticle();
        i_this->mpEmitter1->becomeInvalidEmitter();
        i_this->mpEmitter1->quitImmortalEmitter();
        i_this->mpEmitter1->setEmitterCallBackPtr(NULL);
        i_this->mpEmitter1 = NULL;
    }

    if (i_this->mpEmitter2 != NULL) {
        i_this->mpEmitter2->deleteAllParticle();
        i_this->mpEmitter2->becomeInvalidEmitter();
        i_this->mpEmitter2->quitImmortalEmitter();
        i_this->mpEmitter2->setEmitterCallBackPtr(NULL);
        i_this->mpEmitter2 = NULL;
    }

    dComIfG_resDelete(&i_this->mPhase, "Kytag08");
    return 1;
}

/* 8085AF74-8085AFEC 000A74 0078+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
// getting optimized when it shouldnt be?
#ifdef NONMATCHING
static int useHeapInit(fopAc_ac_c* i_this) {
    kytag08_class* this_ = (kytag08_class*)i_this;

    J3DModelData* modelData = (J3DModelData*)dComIfG_getObjectRes("Kytag08", 3);
    this_->mpModel = mDoExt_J3DModel__create(modelData, 0x80000, 0x11020202);
    if (this_->mpModel == NULL) {
        return 0;
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag08/d_a_kytag08/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8085B318-8085B338 -00001 0020+00 1/0 0/0 0/0 .data            l_daKytag08_Method */
SECTION_DATA static void* l_daKytag08_Method[8] = {
    (void*)daKytag08_Create__FP10fopAc_ac_c,
    (void*)daKytag08_Delete__FP13kytag08_class,
    (void*)daKytag08_Execute__FP13kytag08_class,
    (void*)daKytag08_IsDelete__FP13kytag08_class,
    (void*)daKytag08_Draw__FP13kytag08_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8085B338-8085B368 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_KYTAG08 */
SECTION_DATA extern void* g_profile_KYTAG08[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02B20000, (void*)&g_fpcLf_Method,
    (void*)0x000005DC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00660000, (void*)&l_daKytag08_Method,
    (void*)0x00044000, (void*)NULL,
};

/* 8085B368-8085B374 000050 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8085AFEC-8085B23C 000AEC 0250+00 1/0 0/0 0/0 .text            daKytag08_Create__FP10fopAc_ac_c */
// regswap
#ifdef NONMATCHING
static int daKytag08_Create(fopAc_ac_c* i_this) {
    cXyz sp(1.0f, 1.0f, 1.0f);
    dScnKy_env_light_c* env_light = dKy_getEnvlight();
    
    fopAcM_SetupActor(i_this, kytag08_class);
    
    kytag08_class* this_ = (kytag08_class*)i_this;

    int phase = dComIfG_resLoad(&this_->mPhase, "Kytag08");
    if (phase == cPhs_COMPLEATE_e) {
        if (!fopAcM_entrySolidHeap(this_, useHeapInit, 0x550)) {
            return cPhs_ERROR_e;
        }

        this_->field_0x5ac.x = 20.0f;
        this_->field_0x5ac.y = 20.0f;
        this_->field_0x5ac.z = 20.0f;
        this_->field_0x5d0 = 0.0f;

        this_->mpEmitter1 = dComIfGp_particle_set(0x84A0, &this_->current.pos, NULL, &sp);

        if (!dKy_darkworld_check()) {
            this_->mpEmitter2 = dComIfGp_particle_set(0x84A1, &this_->current.pos, NULL, &sp);
        } else {
            this_->mpEmitter2 = dComIfGp_particle_set(0x84A2, &this_->current.pos, NULL, &sp);
        }

        this_->field_0x5b8 = this_->current.pos;
        this_->field_0x5b8.y = 100.0f;
        this_->field_0x5c4 = this_->field_0x5b8;

        env_light->field_0x1060 = this_;
    }

    return phase;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daKytag08_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag08/d_a_kytag08/daKytag08_Create__FP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* 8085B23C-8085B284 000D3C 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag08/d_a_kytag08/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 8085B310-8085B310 000084 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
