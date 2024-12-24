//
// Generated By: dol2asm
// Translation Unit: d/d_model
//

#include "d/d_model.h"
#include "JSystem/J3DGraphBase/J3DDrawBuffer.h"
#include "JSystem/J3DGraphBase/J3DMaterial.h"
#include "d/d_com_inf_game.h"

//
// Forward References:
//

//
// External References:
//

//
// Declarations:
//

/* 8009C4FC-8009C650 096E3C 0154+00 1/0 0/0 0/0 .text            draw__6dMdl_cFv */
void dMdl_c::draw() {
    j3dSys.setVtxPos(mpModelData->getVtxPosArray());
    j3dSys.setVtxNrm(mpModelData->getVtxNrmArray());
    j3dSys.setVtxCol(mpModelData->getVtxColorArray(0));
    J3DShape::resetVcdVatCache();

    J3DShape* shape = mpModelData->getMaterialNodePointer(mMaterialId)->getShape();
    mpModelData->getMaterialNodePointer(mMaterialId)->loadSharedDL();
    shape->loadPreDrawSetting();

    GXColor amb_color = {mpTevstr->AmbCol.r, mpTevstr->AmbCol.g, mpTevstr->AmbCol.b,
                         mpTevstr->AmbCol.a};
    GXSetChanAmbColor(GX_COLOR0A0, amb_color);
    GXSetChanMatColor(GX_COLOR0A0, g_whiteColor);
    dKy_setLight_nowroom_actor(mpTevstr);
    dKy_setLight_again();
    dKy_GxFog_tevstr_set(mpTevstr);

    Mtx m;
    for (dMdl_obj_c* obj = mpModelObj; obj != NULL; obj = obj->mpObj) {
        MTXConcat(j3dSys.getViewMtx(), obj->getMtx(), m);
        GXLoadPosMtxImm(m, GX_PNMTX0);
        GXLoadNrmMtxImm(m, GX_PNMTX0);
        shape->simpleDrawCache();
    }

    field_0x1a = false;
}

/* 8009C650-8009C668 096F90 0018+00 1/1 0/0 1/1 .text
 * create__6dMdl_cFP12J3DModelDataUsP12dKy_tevstr_c             */
void dMdl_c::create(J3DModelData* i_modelData, u16 i_materialId, dKy_tevstr_c* i_tevstr) {
    mpModelData = i_modelData;
    mMaterialId = i_materialId;
    mpTevstr = i_tevstr;
    field_0x1a = false;
}

/* 8009C668-8009C6DC 096FA8 0074+00 0/0 0/0 5/5 .text            entryObj__6dMdl_cFP10dMdl_obj_c */
void dMdl_c::entryObj(dMdl_obj_c* i_obj) {
    if (!field_0x1a) {
        dComIfGd_getListPacket()->entryImm(this, 0);
        field_0x1a = true;
        mpModelObj = NULL;
    }

    i_obj->mpObj = mpModelObj;
    mpModelObj = i_obj;
}

/* 8009C6DC-8009C724 09701C 0048+00 1/1 0/0 0/0 .text
 * search__10dMdl_mng_cFP12J3DModelDataUsP12dKy_tevstr_c        */
dMdl_c* dMdl_mng_c::search(J3DModelData* i_modelData, u16 i_materialId, dKy_tevstr_c* i_tevstr) {
    dMdl_c* model = field_0x0;
    for (int i = field_0x80; i > 0; i--) {
        if (model->getModelData() == i_modelData && model->getMaterialId() == i_materialId &&
            model->getTevstr() == i_tevstr) {
            return model;
        }
        model++;
    }
    return NULL;
}

/* 8009C724-8009C7AC 097064 0088+00 1/1 0/0 0/0 .text
 * entry__10dMdl_mng_cFP12J3DModelDataUsP12dKy_tevstr_c         */
dMdl_c* dMdl_mng_c::entry(J3DModelData* i_modelData, u16 i_materialId, dKy_tevstr_c* i_tevstr) {
    dMdl_c* model = search(i_modelData, i_materialId, i_tevstr);

    if (model == NULL) {
        if (field_0x80 >= 4) {
            return NULL;
        } else {
            model = &field_0x0[field_0x80];
            model->create(i_modelData, i_materialId, i_tevstr);
            field_0x80++;
        }
    }

    return model;
}

/* ############################################################################################## */
/* 80450FA0-80450FA8 0004A0 0004+04 4/4 0/0 0/0 .sbss            m_myObj__10dMdl_mng_c */
dMdl_mng_c* dMdl_mng_c::m_myObj;

/* 8009C7AC-8009C808 0970EC 005C+00 0/0 1/1 0/0 .text            create__10dMdl_mng_cFv */
void dMdl_mng_c::create() {
    m_myObj = new dMdl_mng_c();
}

/* 8009C808-8009C864 097148 005C+00 3/2 0/0 0/0 .text            __dt__6dMdl_cFv */
dMdl_c::~dMdl_c() {}

/* 8009C864-8009C8C0 0971A4 005C+00 0/0 1/1 0/0 .text            remove__10dMdl_mng_cFv */
void dMdl_mng_c::remove() {
    if (m_myObj != NULL) {
        delete m_myObj;
        m_myObj = NULL;
    }
}

/* 8009C8C0-8009C8D8 097200 0018+00 0/0 1/1 0/0 .text            reset__10dMdl_mng_cFv */
void dMdl_mng_c::reset() {
    if (m_myObj == NULL) {
        return;
    }

    m_myObj->field_0x80 = 0;
}

/* 8009C8D8-8009C930 097218 0058+00 0/0 0/0 4/4 .text entry__10dMdl_mng_cFP12J3DModelDataUsi */
dMdl_c* dMdl_mng_c::entry(J3DModelData* i_modelData, u16 i_materialId, int i_roomNo) {
    if (m_myObj == NULL) {
        return NULL;
    }
    dKy_tevstr_c* tevstr = dComIfGp_roomControl_getTevStr(i_roomNo);
    return m_myObj->entry(i_modelData, i_materialId, tevstr);
}

/* 8009C930-8009C964 097270 0034+00 1/1 0/0 0/0 .text            __ct__6dMdl_cFv */
dMdl_c::dMdl_c() {
    mpModelData = NULL;
    mMaterialId = 0;
}
