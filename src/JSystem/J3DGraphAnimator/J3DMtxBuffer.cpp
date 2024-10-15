//
// Generated By: dol2asm
// Translation Unit: J3DMtxBuffer
//

#include "JSystem/J3DGraphAnimator/J3DMtxBuffer.h"
#include "JSystem/J3DGraphBase/J3DMaterial.h"
#include "JSystem/JKernel/JKRHeap.h"

/* 80326214-80326258 320B54 0044+00 0/0 1/1 0/0 .text            initialize__12J3DMtxBufferFv */
void J3DMtxBuffer::initialize() {
    mJointTree = NULL;
    mpScaleFlagArr = NULL;
    mpEvlpScaleFlagArr = NULL;
    mpAnmMtx = NULL;
    mpWeightEvlpMtx = NULL;
    mpDrawMtxArr[0] = NULL;
    mpDrawMtxArr[1] = NULL;
    mpNrmMtxArr[0] = NULL;
    mpNrmMtxArr[1] = NULL;
    mpBumpMtxArr[0] = NULL;
    mpBumpMtxArr[1] = NULL;
    mFlags = 1;
    mCurrentViewNo = 0;
    mpUserAnmMtx = NULL;
}

/* 80326258-80326364 320B98 010C+00 0/0 1/1 0/0 .text create__12J3DMtxBufferFP12J3DModelDataUl */
enum {
    J3DMdlDataFlag_ConcatView = 0x10,
    J3DMdlDataFlag_NoAnimation = 0x100,
};

static inline u32 getMdlDataFlag_MtxLoadType(u32 flag) {
    return flag & 0x10;
}

s32 J3DMtxBuffer::create(J3DModelData* p_modelData, u32 flag) {
    s32 ret;
    
    mFlags = flag;
    mJointTree = &p_modelData->getJointTree();

    ret = createAnmMtx(p_modelData);
    if (ret != kJ3DError_Success)
        return ret;

    ret = createWeightEnvelopeMtx(p_modelData);
    if (ret != kJ3DError_Success)
        return ret;

    if (p_modelData->checkFlag(J3DMdlDataFlag_NoAnimation)) {
        setNoUseDrawMtx();
    } else {
        switch (getMdlDataFlag_MtxLoadType(p_modelData->getFlag())) {
        case J3DMdlDataFlag_ConcatView:
            ret = setNoUseDrawMtx();
            break;
        case 0:
        default:
            ret = createDoubleDrawMtx(p_modelData, flag);
            break;
        }
    }

    if (ret != kJ3DError_Success)
        return ret;

    if (p_modelData->getFlag() & J3DMdlDataFlag_ConcatView) {
        p_modelData->setBumpFlag(0);
    } else {
        ret = createBumpMtxArray(p_modelData, flag);

        if (ret != kJ3DError_Success)
            return ret;
    }

    return ret;
}

/* 80326364-803263F0 320CA4 008C+00 1/1 0/0 0/0 .text createAnmMtx__12J3DMtxBufferFP12J3DModelData
 */
s32 J3DMtxBuffer::createAnmMtx(J3DModelData* p_modelData) {
    if (p_modelData->getJointNum() != 0) {
        mpScaleFlagArr = new u8[p_modelData->getJointNum()];
        mpAnmMtx = new Mtx[p_modelData->getJointNum()];
        mpUserAnmMtx = mpAnmMtx;
    }

    if (mpScaleFlagArr == NULL)
        return kJ3DError_Alloc;

    return mpAnmMtx == NULL ? kJ3DError_Alloc : kJ3DError_Success;
}

/* 803263F0-8032648C 320D30 009C+00 1/1 0/0 0/0 .text
 * createWeightEnvelopeMtx__12J3DMtxBufferFP12J3DModelData      */
s32 J3DMtxBuffer::createWeightEnvelopeMtx(J3DModelData* p_modelData) {
    if (p_modelData->getWEvlpMtxNum() != 0) {
        mpEvlpScaleFlagArr = new u8[p_modelData->getWEvlpMtxNum()];
        mpWeightEvlpMtx = new Mtx[p_modelData->getWEvlpMtxNum()];
    }

    if (p_modelData->getWEvlpMtxNum() != 0 && mpEvlpScaleFlagArr == NULL)
        return kJ3DError_Alloc;
    if (p_modelData->getWEvlpMtxNum() != 0 && mpWeightEvlpMtx == NULL)
        return kJ3DError_Alloc;

    return kJ3DError_Success;
}

/* 804371C0-804371F0 063EE0 0030+00 1/0 0/0 0/0 .bss             sNoUseDrawMtx__12J3DMtxBuffer */
Mtx J3DMtxBuffer::sNoUseDrawMtx;

/* 804371F0-80437218 063F10 0024+04 1/0 0/0 0/0 .bss             sNoUseNrmMtx__12J3DMtxBuffer */
Mtx33 J3DMtxBuffer::sNoUseNrmMtx;

/* 80450970-80450974 -00001 0004+00 1/1 0/0 0/0 .sdata           sNoUseDrawMtxPtr__12J3DMtxBuffer */
Mtx* J3DMtxBuffer::sNoUseDrawMtxPtr = &J3DMtxBuffer::sNoUseDrawMtx;

/* 80450974-80450978 -00001 0004+00 1/1 0/0 0/0 .sdata           sNoUseNrmMtxPtr__12J3DMtxBuffer */
Mtx33* J3DMtxBuffer::sNoUseNrmMtxPtr = &J3DMtxBuffer::sNoUseNrmMtx;

/* 8032648C-803264B8 320DCC 002C+00 1/1 0/0 0/0 .text            setNoUseDrawMtx__12J3DMtxBufferFv
 */
s32 J3DMtxBuffer::setNoUseDrawMtx() {
    mpDrawMtxArr[1] = &sNoUseDrawMtxPtr;
    mpDrawMtxArr[0] = &sNoUseDrawMtxPtr;
    mpNrmMtxArr[1] = &sNoUseNrmMtxPtr;
    mpNrmMtxArr[0] = &sNoUseNrmMtxPtr;
    mpBumpMtxArr[1] = NULL;
    mpBumpMtxArr[0] = NULL;
    return kJ3DError_Success;
}

/* 803264B8-80326664 320DF8 01AC+00 1/1 0/0 0/0 .text
 * createDoubleDrawMtx__12J3DMtxBufferFP12J3DModelDataUl        */
s32 J3DMtxBuffer::createDoubleDrawMtx(J3DModelData* p_modelData, u32 num) {
    if (num != 0) {
        for (s32 i = 0; i < 2; i++) {
            mpDrawMtxArr[i] = new Mtx*[num];
            mpNrmMtxArr[i] = new Mtx33*[num];
            mpBumpMtxArr[i] = NULL;
        }
    }

    if (num != 0) {
        for (u32 i = 0; i < 2; i++) {
            if (mpDrawMtxArr[i] == NULL)
                return kJ3DError_Alloc;
            if (mpNrmMtxArr[i] == NULL)
                return kJ3DError_Alloc;
        }
    }

    for (s32 i = 0; i < 2; i++) {
        for (u32 j = 0; j < num; j++) {
            if (p_modelData->getDrawMtxNum() != 0) {
                mpDrawMtxArr[i][j] = new (0x20) Mtx[p_modelData->getDrawMtxNum()];
                mpNrmMtxArr[i][j] = new (0x20) Mtx33[p_modelData->getDrawMtxNum()];
            }
        }
    }

    for (s32 i = 0; i < 2; i++) {
        for (u32 j = 0; j < num; j++) {
            if (p_modelData->getDrawMtxNum() != 0) {
                if (mpDrawMtxArr[i][j] == NULL)
                    return kJ3DError_Alloc;
                if (mpNrmMtxArr[i][j] == NULL)
                    return kJ3DError_Alloc;
            }
        }
    }

    return kJ3DError_Success;
}

/* 80326664-803268D4 320FA4 0270+00 1/1 0/0 0/0 .text
 * createBumpMtxArray__12J3DMtxBufferFP12J3DModelDataUl         */
s32 J3DMtxBuffer::createBumpMtxArray(J3DModelData* i_modelData, u32 param_1) {
    if (i_modelData->getModelDataType() == 0) {
        u32 bumpMtxNum = 0;
        u16 materialCount = 0;
        u16 materialNum = i_modelData->getMaterialNum();
        for (u16 j = 0; j < materialNum; j++) {
            J3DMaterial* material = i_modelData->getMaterialNodePointer(j);
            if (material->getNBTScale()->mbHasScale == true) {
                bumpMtxNum += material->getShape()->countBumpMtxNum();
                materialCount++;
            }
        }

        if ((u16)bumpMtxNum != 0 && param_1 != 0) {
            for (int i = 0; i < 2; i++) {
                mpBumpMtxArr[i] = new Mtx33**[(u16)materialCount];
                if (mpBumpMtxArr[i] == NULL) {
                    return kJ3DError_Alloc;
                }
            }
        }

        for (int i = 0; i < 2; i++) {
            u32 offset = 0;
            u16 materialNum = i_modelData->getMaterialNum();
            for (u16 j = 0; j < materialNum; j++) {
                J3DMaterial* material = i_modelData->getMaterialNodePointer(j);
                if (material->getNBTScale()->mbHasScale == true) {
                    mpBumpMtxArr[i][offset] = new Mtx33*[param_1];
                    if (mpBumpMtxArr[i][offset] == NULL) {
                        return kJ3DError_Alloc;
                    }
                    material->getShape()->setBumpMtxOffset(offset);
                    offset++;
                }
            }
        }

        for (int i = 0; i < 2; i++) {
            u32 offset = 0;
            u16 materialNum = i_modelData->getMaterialNum();
            for (u16 j = 0; j < materialNum; j++) {
                J3DMaterial* material = i_modelData->getMaterialNodePointer(j);
                if (material->getNBTScale()->mbHasScale == true) {
                    for (int k = 0; k < param_1; k++) {
                        mpBumpMtxArr[i][offset][k] = new (0x20) Mtx33[i_modelData->getDrawMtxNum()];
                        if (mpBumpMtxArr[i][offset][k] == NULL) {
                            return kJ3DError_Alloc;
                        }
                    }
                    offset++;
                }
            }
        }

        if (materialCount != 0) {
            i_modelData->setBumpFlag(1);
        }
    }

    return kJ3DError_Success;
}

/* 80450978-80450980 0003F8 0008+00 1/1 0/0 0/0 .sdata           J3DUnit01 */
static u8 J3DUnit01[8] = {
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};

/* 803268D4-80326ACC 321214 01F8+00 0/0 1/1 0/0 .text calcWeightEnvelopeMtx__12J3DMtxBufferFv */
void J3DMtxBuffer::calcWeightEnvelopeMtx() {
    // NONMATCHING
}

/* 80326ACC-80326D3C 32140C 0270+00 0/0 1/1 0/0 .text
 * calcDrawMtx__12J3DMtxBufferFUlRC3VecRA3_A4_Cf                */
void J3DMtxBuffer::calcDrawMtx(u32 param_0, Vec const& param_1, Mtx const& param_2) {
    MtxP viewMtx;
    Mtx viewBaseMtx;
    u16 fullWgtNum;

    switch (param_0) {
    case 0:
        viewMtx = j3dSys.getViewMtx();
        fullWgtNum = mJointTree->getDrawFullWgtMtxNum();
        for (u16 i = 0; i < fullWgtNum; i++) {
            MTXConcat(viewMtx, getAnmMtx(mJointTree->getDrawMtxIndex(i)), *getDrawMtx(i));
        }
        if (mJointTree->getDrawMtxNum() > fullWgtNum) {
            J3DPSMtxArrayConcat(viewMtx, *mpWeightEvlpMtx, *getDrawMtx(fullWgtNum),
                                mJointTree->getWEvlpMtxNum());
        }
        break;

    case 1:
        fullWgtNum = mJointTree->getDrawFullWgtMtxNum();
        for (u16 i = 0; i < fullWgtNum; i++) {
            MTXCopy(getAnmMtx(mJointTree->getDrawMtxIndex(i)), *getDrawMtx(i));
        }
        fullWgtNum = mJointTree->getDrawFullWgtMtxNum();
        for (u16 i = 0; i < fullWgtNum; i++) {
            MTXCopy(getWeightAnmMtx(i), *getDrawMtx(mJointTree->getDrawFullWgtMtxNum() + i));
        }
        break;

    case 2:
        J3DCalcViewBaseMtx(j3dSys.getViewMtx(), param_1, param_2, viewBaseMtx);
        fullWgtNum = mJointTree->getDrawFullWgtMtxNum();
        for (u16 i = 0; i < fullWgtNum; i++) {
            MTXConcat(viewBaseMtx, getAnmMtx(mJointTree->getDrawMtxIndex(i)), *getDrawMtx(i));
        }
        if (mJointTree->getDrawMtxNum() > mJointTree->getDrawFullWgtMtxNum()) {
            J3DPSMtxArrayConcat(viewBaseMtx, *mpWeightEvlpMtx,
                                *getDrawMtx(mJointTree->getDrawFullWgtMtxNum()),
                                mJointTree->getWEvlpMtxNum());
        }
        break;
    }
}

extern void J3DPSCalcInverseTranspose(Mtx p1, Mtx33 p2);

/* 80326D3C-80326EF0 32167C 01B4+00 0/0 1/1 0/0 .text            calcNrmMtx__12J3DMtxBufferFv */
void J3DMtxBuffer::calcNrmMtx() {
    u16 drawMtxNum = mJointTree->getDrawMtxNum();
    for (u16 i = 0; i < drawMtxNum; i++) {
        if (mJointTree->getDrawMtxFlag(i) == 0) {
            if (getScaleFlag(mJointTree->getDrawMtxIndex(i)) == 1) {
                setNrmMtx(i, getDrawMtx(i));
            } else {
                J3DPSCalcInverseTranspose(*getDrawMtx(i), *getNrmMtx(i));
            }
        } else {
            if (getEnvScaleFlag(mJointTree->getDrawMtxIndex(i)) == 1) {
                setNrmMtx(i, getDrawMtx(i));
            } else {
                J3DPSCalcInverseTranspose(*getDrawMtx(i), *getNrmMtx(i));
            }
        }
    }
}

/* 80326EF0-80327048 321830 0158+00 0/0 1/1 0/0 .text            calcBBoardMtx__12J3DMtxBufferFv */
void J3DMtxBuffer::calcBBoardMtx() {
    u16 drawMtxNum = mJointTree->getDrawMtxNum();
    for (u16 i = 0; i < drawMtxNum; i++) {
        if (mJointTree->getDrawMtxFlag(i) == 0) {
            u16 index = mJointTree->getDrawMtxIndex(i);
            if (mJointTree->getJointNodePointer(index)->getMtxType() == 1) {
                MtxP drawMtx = *getDrawMtx(i);
                J3DCalcBBoardMtx(drawMtx);
                Mtx33* nrmMtx = getNrmMtx(i);
                (*nrmMtx)[0][0] = 1.0f / drawMtx[0][0];
                (*nrmMtx)[0][1] = 0.0f;
                (*nrmMtx)[0][2] = 0.0f;
                (*nrmMtx)[1][0] = 0.0f;
                (*nrmMtx)[1][1] = 1.0f / drawMtx[1][1];
                (*nrmMtx)[1][2] = 0.0f;
                (*nrmMtx)[2][0] = 0.0f;
                (*nrmMtx)[2][1] = 0.0f;
                (*nrmMtx)[2][2] = 1.0f / drawMtx[2][2];
            } else if (mJointTree->getJointNodePointer(index)->getMtxType() == 2) {
                MtxP drawMtx = *getDrawMtx(i);
                J3DCalcYBBoardMtx(drawMtx);
                Mtx33* nrmMtx = getNrmMtx(i);
                J3DPSCalcInverseTranspose(drawMtx, *nrmMtx);
            }
        }
    }
}

/* 80327048-80327100 321988 00B8+00 1/1 1/1 0/0 .text
 * J3DCalcViewBaseMtx__FPA4_fRC3VecRA3_A4_CfPA4_f               */
void J3DCalcViewBaseMtx(Mtx view, Vec const& scale, const Mtx& base, Mtx dst) {
    Mtx m;

    m[0][0] = base[0][0] * scale.x;
    m[0][1] = base[0][1] * scale.y;
    m[0][2] = base[0][2] * scale.z;
    m[0][3] = base[0][3];

    m[1][0] = base[1][0] * scale.x;
    m[1][1] = base[1][1] * scale.y;
    m[1][2] = base[1][2] * scale.z;
    m[1][3] = base[1][3];

    m[2][0] = base[2][0] * scale.x;
    m[2][1] = base[2][1] * scale.y;
    m[2][2] = base[2][2] * scale.z;
    m[2][3] = base[2][3];

    MTXConcat(view, m, dst);
}
