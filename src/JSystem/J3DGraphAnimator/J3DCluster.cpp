//
// Generated By: dol2asm
// Translation Unit: J3DCluster
//

#include "JSystem/J3DGraphAnimator/J3DCluster.h"
#include "JSystem/J3DGraphAnimator/J3DAnimation.h"
#include "JSystem/J3DGraphAnimator/J3DModel.h"
#include "JSystem/JMath/JMATrigonometric.h"
#include "dolphin/base/PPCArch.h"
#include "dolphin/os.h"

#ifdef DEBUG
#define J3D_ASSERT(COND)                                                                           \
    if ((COND) == 0) {                                                                             \
        JUTAssertion::showAssert(JUTAssertion::getSDevice(), __FILE__, __LINE__,                   \
                                 "Error : null pointer");                                          \
        OSPanic(__FILE__, __LINE__, "Halt");                                                       \
    }
#else
#define J3D_ASSERT(COND)
#endif

/* 8032E1F8-8032E230 328B38 0038+00 0/0 1/1 0/0 .text            __ct__13J3DDeformDataFv */
J3DDeformData::J3DDeformData() {
    mClusterNum = 0;
    mClusterKeyNum = 0;
    mClusterVertexNum = 0;
    mClusterPointer = NULL;
    mClusterKeyPointer = NULL;
    mClusterVertex = NULL;
    mVtxPosNum = 0;
    mVtxNrmNum = 0;
    mVtxPos = NULL;
    mVtxNrm = NULL;
    mClusterName = NULL;
    mClusterKeyName = NULL;
}

/* 8032E230-8032E274 328B70 0044+00 0/0 1/1 0/0 .text            offAllFlag__13J3DDeformDataFUl */
void J3DDeformData::offAllFlag(u32 i_flag) {
    for (u16 i = 0; i < mClusterNum; i++) {
        mClusterPointer[i].getDeformer()->offFlag(i_flag);
    }
}

/* 8032E274-8032E298 328BB4 0024+00 0/0 1/1 0/0 .text            deform__13J3DDeformDataFP8J3DModel
 */
void J3DDeformData::deform(J3DModel* model) {
    J3D_ASSERT(model != NULL);

    deform(model->getVertexBuffer());
}

/* 8032E298-8032E364 328BD8 00CC+00 1/1 0/0 0/0 .text deform__13J3DDeformDataFP15J3DVertexBuffer
 */
void J3DDeformData::deform(J3DVertexBuffer* buffer) {
    J3D_ASSERT(buffer != NULL);

    buffer->swapVtxPosArrayPointer();
    buffer->swapVtxNrmArrayPointer();

    for (u16 i = 0; i < mClusterNum; i++) {
        mClusterPointer[i].getDeformer()->deform(buffer, i);
    }

    DCStoreRangeNoSync(buffer->getVtxPosArrayPointer(0),
                       buffer->getVertexData()->getVtxNum() * sizeof(Vec));
    DCStoreRangeNoSync(buffer->getVtxNrmArrayPointer(0),
                       buffer->getVertexData()->getNrmNum() * sizeof(Vec));
    PPCSync();

    buffer->setCurrentVtxPos(buffer->getVtxPosArrayPointer(0));
    buffer->setCurrentVtxNrm(buffer->getVtxNrmArrayPointer(0));
}

/* 8032E364-8032E39C 328CA4 0038+00 0/0 1/1 0/0 .text setAnm__13J3DDeformDataFP13J3DAnmCluster */
void J3DDeformData::setAnm(J3DAnmCluster* anm) {
    for (u16 i = 0; i < mClusterNum; i++) {
        mClusterPointer[i].getDeformer()->setAnmCluster(anm);
    }
}

/* 8032E39C-8032E3BC 328CDC 0020+00 0/0 1/1 0/0 .text __ct__11J3DDeformerFP13J3DDeformData */
J3DDeformer::J3DDeformer(J3DDeformData* data) {
    mDeformData = data;
    mAnmCluster = NULL;
    field_0x8 = NULL;
    field_0xc = NULL;
    mFlags = 3;
}

/* 8032E3BC-8032E4A4 328CFC 00E8+00 1/1 0/0 0/0 .text deform__11J3DDeformerFP15J3DVertexBufferUs
 */
void J3DDeformer::deform(J3DVertexBuffer* buffer, u16 param_1) {
    J3D_ASSERT(buffer != 0);

    u16 var_r31 = 0;
    if (mAnmCluster != NULL) {
        for (u16 i = 0; i < param_1; i++) {
            var_r31 += mDeformData->getClusterPointer(i)->mKeyNum;
        }

        u16 num = mDeformData->getClusterPointer(param_1)->mKeyNum;
        for (u16 i = 0; i < num; i++) {
            field_0x8[i] = mAnmCluster->getWeight(var_r31++);
        }

        deform(buffer, param_1, field_0x8);
    }
}

/* 8032E4A4-8032E60C 328DE4 0168+00 1/1 0/0 0/0 .text
 * deform_VtxPosF32__11J3DDeformerFP15J3DVertexBufferP10J3DClusterP13J3DClusterKeyPf */
void J3DDeformer::deform_VtxPosF32(J3DVertexBuffer* i_buffer, J3DCluster* i_cluster,
                                   J3DClusterKey* i_key, f32* i_weights) {
    int posNum = i_cluster->mPosNum;
    int keyNum = i_cluster->mKeyNum;
    f32* vtxPosArray = (f32*)i_buffer->getVtxPosArrayPointer(0);
    f32* deformVtxPos = mDeformData->getVtxPos();
    u16* iVar9 = i_cluster->field_0x18;

    for (int i = 0; i < posNum; i++) {
        int index = iVar9[i] * 3;
        vtxPosArray[index] = 0.0f;
        vtxPosArray[index + 1] = 0.0f;
        vtxPosArray[index + 2] = 0.0f;
    }

    f32 local_58[2] = {1.0f, -1.0f};

    for (u16 i = 0; i < posNum; i++) {
        int index = i_cluster->field_0x18[i] * 3;
        for (u16 j = 0; j < keyNum; j++) {
            int uVar7 = ((u16*)i_key[j].field_0x4)[i];
            f32* deform = &deformVtxPos[(uVar7 & ~0xE000) * 3];
            f32 deform0 = deform[0];
            f32 deform1 = deform[1];
            f32 deform2 = deform[2];
            deform0 *= local_58[((uVar7 & 0x8000) >> 0xF)];
            deform1 *= local_58[((uVar7 & 0x4000) >> 0xE)];
            deform2 *= local_58[((uVar7 & 0x2000) >> 0xD)];
            vtxPosArray[index] += deform0 * i_weights[j];
            vtxPosArray[index + 1] += deform1 * i_weights[j];
            vtxPosArray[index + 2] += deform2 * i_weights[j];
        }
    }
}

/* 8032E60C-8032EAB4 328F4C 04A8+00 1/1 0/0 0/0 .text
 * deform_VtxNrmF32__11J3DDeformerFP15J3DVertexBufferP10J3DClusterP13J3DClusterKeyPf */
// NONMATCHING one missing mr
void J3DDeformer::deform_VtxNrmF32(J3DVertexBuffer* i_buffer, J3DCluster* i_cluster,
                                   J3DClusterKey* i_key, f32* i_weights) {
    f32* vtxNrmArray = (f32*)i_buffer->getVtxNrmArrayPointer(0);
    f32* deformVtxNrm = mDeformData->getVtxNrm();
    f32* iVar13 = field_0xc;
    u16 keyNum = i_cluster->mKeyNum;
    int uVar2 = i_cluster->field_0x16;

    for (u16 i = 0; i < i_cluster->field_0x14; i++) {
        int index = i * 3;
        iVar13[index] = 0.0f;
        iVar13[index + 1] = 0.0f;
        iVar13[index + 2] = 0.0f;
        for (u16 j = 0; j < keyNum; j++) {
            int uVar3 = ((u16*)i_key[j].field_0x8)[i];
            f32 deform0, deform1, deform2;
            if (uVar3 & 0x8000) {
                deform0 = -deformVtxNrm[(uVar3 & ~0xE000) * 3];
            } else {
                deform0 = deformVtxNrm[(uVar3 & ~0xE000) * 3];
            }
            if (uVar3 & 0x4000) {
                deform1 = -deformVtxNrm[(uVar3 & ~0xE000) * 3 + 1];
            } else {
                deform1 = deformVtxNrm[(uVar3 & ~0xE000) * 3 + 1];
            }
            if (uVar3 & 0x2000) {
                deform2 = -deformVtxNrm[(uVar3 & ~0xE000) * 3 + 2];
            } else {
                deform2 = deformVtxNrm[(uVar3 & ~0xE000) * 3 + 2];
            }
            iVar13[index] += deform0 * i_weights[j];
            iVar13[index + 1] += deform1 * i_weights[j];
            iVar13[index + 2] += deform2 * i_weights[j];
        }
        normalize(&iVar13[index]);
    }

    for (u16 i = 0; i < uVar2; i++) {
        J3DClusterVertex* clusterVtx = &i_cluster->mClusterVertex[i];
        Vec vec;
        vec.x = 0.0f;
        vec.y = 0.0f;
        vec.z = 0.0f;
        f32 scale = 1.0f / clusterVtx->mNum;
        for (u16 j = 0; j < clusterVtx->mNum; j++) {
            int index = clusterVtx->field_0x4[j] * 3;
            vec.x += scale * iVar13[index];
            vec.y += scale * iVar13[index + 1];
            vec.z += scale * iVar13[index + 2];
        }
        normalize((f32*)&vec);

        for (u16 j = 0; j < clusterVtx->mNum; j++) {
            u16 tmp = clusterVtx->field_0x8[j];
            if (tmp == 0xffff) {
                continue;
            }
            int index = tmp * 3;
            int index2 = clusterVtx->field_0x4[j] * 3;
            
            f32 dot = vec.x * iVar13[index2] + vec.y * iVar13[index2 + 1]
                                             + vec.z * iVar13[index2 + 2];
            f32 angle;
            if (dot >= 1.0f) {
                angle = 0.0f;
            } else if (dot > -1.0f) {
                angle = JMath::acosDegree(dot);
            } else {
                angle = 180.0f;
            }

            if (angle <= i_cluster->mMinAngle) {
                vtxNrmArray[index] = vec.x;
                vtxNrmArray[index + 1] = vec.y;
                vtxNrmArray[index + 2] = vec.z;
            } else if (angle > i_cluster->mMaxAngle) {
                int index3 = clusterVtx->field_0x4[j];
                Vec* iVar13a = (Vec*)iVar13;
                vtxNrmArray[index] = iVar13a[index3].x;
                vtxNrmArray[index + 1] = iVar13a[index3].y;
                vtxNrmArray[index + 2] = iVar13a[index3].z;
            } else {
                f32 weight1 = (angle - i_cluster->mMinAngle)
                    / (i_cluster->mMaxAngle - i_cluster->mMinAngle);
                f32 weight2 = 1.0f - weight1;
                vtxNrmArray[index] = weight1 * iVar13[index2] + weight2 * vec.x;
                vtxNrmArray[index + 1] = weight1 * iVar13[index2 + 1] + weight2 * vec.y;
                vtxNrmArray[index + 2] = weight1 * iVar13[index2 + 2] + weight2 * vec.z;
            }
        }
    }
}

/* 8032EAB4-8032EBCC 3293F4 0118+00 1/1 0/0 0/0 .text deform__11J3DDeformerFP15J3DVertexBufferUsPf
 */
void J3DDeformer::deform(J3DVertexBuffer* i_buffer, u16 param_1, f32* i_weights) {
    if (checkFlag(2) && i_buffer->getVertexData()->getVtxPosType() == 4) {
        J3DCluster* cluster = mDeformData->getClusterPointer(param_1);
        u16 offset = 0;
        for (u16 i = 0; i < param_1; i++) {
            offset += mDeformData->getClusterPointer(i)->mKeyNum + 1;
        }
        J3DClusterKey* clusterKey = mDeformData->getClusterKeyPointer(offset);
        
        normalizeWeight(cluster->mKeyNum, i_weights);
        deform_VtxPosF32(i_buffer, cluster, clusterKey, i_weights);
        if (checkFlag(1) && cluster->mFlags != 0 && i_buffer->getVertexData()->getVtxNrmType() == 4)
        {
            deform_VtxNrmF32(i_buffer, cluster, clusterKey, i_weights);
        }
    }
}

/* 8032EBCC-8032EC28 32950C 005C+00 1/1 0/0 0/0 .text            normalizeWeight__11J3DDeformerFiPf
 */
void J3DDeformer::normalizeWeight(int i_keyNum, f32* i_weights) {
    f32 totalWeight = 0.0f;
    for (u16 i = 0; i < i_keyNum; i++) {
        totalWeight += i_weights[i];
    }
    f32 scale = 1.0f / totalWeight;
    for (u16 i = 0; i < i_keyNum; i++) {
        i_weights[i] *= scale;
    }
}