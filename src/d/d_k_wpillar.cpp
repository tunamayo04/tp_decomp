//
// Generated By: dol2asm
// Translation Unit: d/d_k_wpillar
//

#include "d/d_k_wpillar.h"
#include "JSystem/J3DGraphBase/J3DMaterial.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "SSystem/SComponent/c_math.h"
#include "d/a/d_a_player.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_procname.h"
#include "f_op/f_op_actor_mng.h"

/* 80454FF0-80454FF8 0035F0 0007+01 1/1 0/0 0/0 .sdata2          l_arcName */
static const char l_arcName[] = "Always";

/* 80261B54-80261F04 25C494 03B0+00 1/1 0/0 0/0 .text            create__11dkWpillar_cFv */
int dkWpillar_c::create() {
    new (this) dkWpillar_c();

    int roomNo;
    u8 envrOverride;
    if (fopAcM_gc_c::gndCheck(&mPos)) {
        roomNo = fopAcM_gc_c::getRoomId();
        envrOverride = fopAcM_gc_c::getPolyColor();
    } else {
        roomNo = dComIfGp_roomControl_getStayNo();
        envrOverride = 0xFF;
    }

    dKy_tevstr_init(&mTevstr, roomNo, envrOverride);
    g_env_light.settingTevStruct(0x10, &mPos, &mTevstr);

    dComIfGp_particle_set(0x1BD, &mPos, &mTevstr, NULL, &mScale, 255, NULL, roomNo, NULL, NULL,
                          NULL);
    if ((int)mParam != 3) {
        dComIfGp_particle_set(0x1BE, &mPos, &mTevstr, NULL, &mScale, 255, NULL, roomNo, NULL, NULL,
                              NULL);
    }

    if ((int)mParam == 1) {
        return cPhs_ERROR_e;
    }

    BOOL var_r30;

    mpHeap = mDoExt_createSolidHeapFromGameToCurrent(0x2200, 0x20);
    if (mpHeap != NULL) {
        J3DModelData* modelData = (J3DModelData*)dComIfG_getObjectRes(l_arcName, 0x1C);
        JUT_ASSERT(96, modelData);

        mpModel = mDoExt_J3DModel__create(modelData, 0x80000, 0x11000284);

        J3DAnmTransform* bckAnm = (J3DAnmTransform*)dComIfG_getObjectRes(l_arcName, 0xB);
        JUT_ASSERT(106, bckAnm);

        var_r30 = mBck.init(bckAnm, TRUE, J3DFrameCtrl::LOOP_ONCE_e, 1.0f, 0, -1, false);

        J3DAnmTextureSRTKey* btkAnm = (J3DAnmTextureSRTKey*)dComIfG_getObjectRes(l_arcName, 0x3B);
        var_r30 &= mBtk.init(modelData, btkAnm, FALSE, J3DFrameCtrl::LOOP_REPEAT_e, 1.0f, 0, -1);

        J3DAnmTevRegKey* brkAnm = (J3DAnmTevRegKey*)dComIfG_getObjectRes(l_arcName, 0x2E);
        var_r30 &= mBrk.init(modelData, brkAnm, FALSE, J3DFrameCtrl::LOOP_REPEAT_e, 1.0f, 0, -1);

        mDoExt_restoreCurrentHeap();
        mDoExt_adjustSolidHeap(mpHeap);
    } else {
        return cPhs_ERROR_e;
    }

    if (mpModel == NULL || !var_r30) {
        return cPhs_ERROR_e;
    }

    if ((int)mParam == 2) {
        mScale.set(0.5f, 0.25f, 0.5f);
    }

    mpModel->setBaseScale(mScale);
    mDoMtx_stack_c::transS(mPos.x, mPos.y, mPos.z);
    mpModel->setBaseTRMtx(mDoMtx_stack_c::get());
    return cPhs_COMPLEATE_e;
}

/* 80261F04-80261F24 25C844 0020+00 1/0 0/0 0/0 .text            dkWpillar_Create__FP12kankyo_class
 */
static int dkWpillar_Create(kankyo_class* i_this) {
    return static_cast<dkWpillar_c*>(i_this)->create();
}

/* 80261F24-80261FEC 25C864 00C8+00 1/1 0/0 0/0 .text            __dt__11dkWpillar_cFv */
dkWpillar_c::~dkWpillar_c() {
    if (mpHeap != NULL) {
        mDoExt_destroySolidHeap(mpHeap);
    }
}

/* 80261FEC-80262014 25C92C 0028+00 1/0 0/0 0/0 .text            dkWpillar_Delete__FP11dkWpillar_c
 */
static int dkWpillar_Delete(dkWpillar_c* i_this) {
    i_this->~dkWpillar_c();
    return 1;
}

/* 80262014-802620A8 25C954 0094+00 1/1 0/0 0/0 .text            execute__11dkWpillar_cFv */
int dkWpillar_c::execute() {
    mBck.play();

    if (mBck.isStop()) {
        fopKyM_Delete(this);
    } else {
        f32 sp8;
        if (fopAcM_getWaterY(&mPos, &sp8) != 0) {
            mpModel->getBaseTRMtx()[1][3] = sp8;
            mPos.y = sp8;
        }
    }

    return 1;
}

/* 802620A8-802620C8 25C9E8 0020+00 1/0 0/0 0/0 .text            dkWpillar_Execute__FP11dkWpillar_c
 */
static int dkWpillar_Execute(dkWpillar_c* i_this) {
    return i_this->execute();
}

/* 802620C8-802621AC 25CA08 00E4+00 1/1 0/0 0/0 .text            draw__11dkWpillar_cFv */
int dkWpillar_c::draw() {
    g_env_light.settingTevStruct(0x10, &mPos, &mTevstr);
    g_env_light.setLightTevColorType_MAJI(mpModel, &mTevstr);

    dComIfGd_setListIndScreen();
    mBck.entry(mpModel->getModelData());
    mBtk.entry(mpModel->getModelData(), mBck.getFrame());
    mBrk.entry(mpModel->getModelData(), mBck.getFrame());
    mDoExt_modelUpdateDL(mpModel);
    dComIfGd_setList();
    return 1;
}

/* 802621AC-802621CC 25CAEC 0020+00 1/0 0/0 0/0 .text            dkWpillar_Draw__FP11dkWpillar_c */
static int dkWpillar_Draw(dkWpillar_c* i_this) {
    return i_this->draw();
}

/* ############################################################################################## */
/* 803C3470-803C3484 -00001 0014+00 1/0 0/0 0/0 .data            l_dkWpillar_Method */
static leafdraw_method_class l_dkWpillar_Method = {
    (process_method_func)dkWpillar_Create,  (process_method_func)dkWpillar_Delete,
    (process_method_func)dkWpillar_Execute, (process_method_func)NULL,
    (process_method_func)dkWpillar_Draw,
};

/* 803C3484-803C34B0 -00001 0028+04 0/0 0/0 1/0 .data            g_profile_WPILLAR */
extern kankyo_process_profile_definition g_profile_WPILLAR = {
    fpcLy_CURRENT_e,
    9,
    fpcPi_CURRENT_e,
    PROC_WPILLAR,
    &g_fpcLf_Method.mBase,
    sizeof(dkWpillar_c),
    0,
    0,
    &g_fopKy_Method,
    759,
    &l_dkWpillar_Method,
};
