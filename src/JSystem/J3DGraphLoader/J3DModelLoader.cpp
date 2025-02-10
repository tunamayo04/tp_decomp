//
// Generated By: dol2asm
// Translation Unit: J3DModelLoader
//

#include "JSystem/J3DGraphLoader/J3DModelLoader.h"
#include "JSystem/J3DGraphLoader/J3DJointFactory.h"
#include "JSystem/J3DGraphLoader/J3DMaterialFactory.h"
#include "JSystem/J3DGraphLoader/J3DMaterialFactory_v21.h"
#include "JSystem/J3DGraphLoader/J3DShapeFactory.h"
#include "JSystem/J3DGraphAnimator/J3DModelData.h"
#include "JSystem/J3DGraphBase/J3DMaterial.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSupport.h"
#include "dolphin/os.h"

/* 8033468C-803346BC 32EFCC 0030+00 1/1 0/0 0/0 .text            __ct__14J3DModelLoaderFv */
J3DModelLoader::J3DModelLoader() :
                mpModelData(NULL),
                mpMaterialTable(NULL),
                mpShapeBlock(NULL),
                mpMaterialBlock(NULL),
                mpModelHierarchy(NULL),
                field_0x18(0),
                mEnvelopeSize(0) {
    /* empty function */
}

/* 803346BC-803347E0 32EFFC 0124+00 0/0 4/4 0/0 .text load__22J3DModelLoaderDataBaseFPCvUl */
J3DModelData* J3DModelLoaderDataBase::load(void const* i_data, u32 i_flags) {
    if (i_data == NULL) {
        return NULL;
    }
    if (*(u32*)i_data == 'J3D1' && *(u32*)((u32)i_data + 4) == 'bmd1') {
        return NULL;
    }
    if (*(u32*)i_data == 'J3D2' && *(u32*)((u32)i_data + 4) == 'bmd2') {
        J3DModelLoader_v21 loader;
        return loader.load(i_data, i_flags);
    }
    if (*(u32*)i_data == 'J3D2' && *(u32*)((u32)i_data + 4) == 'bmd3') {
        J3DModelLoader_v26 loader;
        return loader.load(i_data, i_flags);
    }
    return NULL;
}

/* 803347E0-80334ABC 32F120 02DC+00 4/1 0/0 0/0 .text            load__14J3DModelLoaderFPCvUl */
J3DModelData* J3DModelLoader::load(void const* i_data, u32 i_flags) {
    JKRGetCurrentHeap()->getTotalFreeSize();
    mpModelData = new J3DModelData();
    mpModelData->clear();
    mpModelData->mpRawData = i_data;
    mpModelData->setModelDataType(0);
    mpMaterialTable = &mpModelData->mMaterialTable;
    J3DModelFileData const* data = (J3DModelFileData*)i_data;
    J3DModelBlock const* block = data->mBlocks;
    for (u32 block_no = 0; block_no < data->mBlockNum; block_no++) {
        switch (block->mBlockType) {
            case 'INF1':
                readInformation((J3DModelInfoBlock*)block, (s32)i_flags);
                break;
            case 'VTX1':
                readVertex((J3DVertexBlock*)block);
                break;
            case 'EVP1':
                readEnvelop((J3DEnvelopeBlock*)block);
                break;
            case 'DRW1':
                readDraw((J3DDrawBlock*)block);
                break;
            case 'JNT1':
                readJoint((J3DJointBlock*)block);
                break;
            case 'MAT3':
                readMaterial((J3DMaterialBlock*)block, (s32)i_flags);
                break;
            case 'MAT2':
                readMaterial_v21((J3DMaterialBlock_v21*)block, (s32)i_flags);
                break;
            case 'SHP1':
                readShape((J3DShapeBlock*)block, (s32)i_flags);
                break;
            case 'TEX1':
                readTexture((J3DTextureBlock*)block);
                break;
            default:
                OSReport("Unknown data block\n");
                break;
        }
        block = (J3DModelBlock*)((u32)block + block->mBlockSize);
    }
    J3DModelHierarchy const* hierarchy = mpModelData->getHierarchy();
    mpModelData->makeHierarchy(NULL, &hierarchy);
    mpModelData->getShapeTable()->sortVcdVatCmd();
    mpModelData->getJointTree().findImportantMtxIndex();
    setupBBoardInfo();
    if (mpModelData->getFlag() & 0x100) {
        for (u16 shape_no = 0; shape_no < mpModelData->getShapeNum(); shape_no++) {
            mpModelData->getShapeNodePointer(shape_no)->onFlag(0x200);
        }
    }
    return mpModelData;
}


/* 80334ABC-80334C20 32F3FC 0164+00 3/0 0/0 0/0 .text loadMaterialTable__14J3DModelLoaderFPCv */
J3DMaterialTable* J3DModelLoader::loadMaterialTable(void const* i_data) {
    mpMaterialTable = new J3DMaterialTable();
    mpMaterialTable->clear();
    J3DModelFileData const* data = (J3DModelFileData*)i_data;
    J3DModelBlock const* block = data->mBlocks;
    for (u32 block_no = 0; block_no < data->mBlockNum; block_no++) {
        switch (block->mBlockType) {
            case 'MAT3':
                readMaterialTable((J3DMaterialBlock*)block, 0x51100000);
                break;
            case 'MAT2':
                readMaterialTable_v21((J3DMaterialBlock_v21*)block, 0x51100000);
                break;
            case 'TEX1':
                readTextureTable((J3DTextureBlock*)block);
                break;
            default:
                OSReport("Unknown data block\n");
                break;
        }
        block = (J3DModelBlock*)((u32)block + block->mBlockSize);
    }
    if (mpMaterialTable->mTexture == NULL) {
        mpMaterialTable->mTexture = new J3DTexture(0, NULL);
    }
    return mpMaterialTable;
}

/* 80334C20-80334EE0 32F560 02C0+00 3/0 0/0 0/0 .text
 * loadBinaryDisplayList__14J3DModelLoaderFPCvUl                */
J3DModelData* J3DModelLoader::loadBinaryDisplayList(void const* i_data, u32 i_flags) {
    mpModelData = new J3DModelData();
    mpModelData->clear();
    mpModelData->mpRawData = i_data;
    mpModelData->setModelDataType(1);
    mpMaterialTable = &mpModelData->mMaterialTable;
    J3DModelFileData const* data = (J3DModelFileData*)i_data;
    J3DModelBlock const* block = data->mBlocks;
    for (u32 block_no = 0; block_no < data->mBlockNum; block_no++) {
        s32 flags;
        switch (block->mBlockType) {
            case 'INF1':
                flags = i_flags;
                readInformation((J3DModelInfoBlock*)block, flags);
                break;
            case 'VTX1':
                readVertex((J3DVertexBlock*)block);
                break;
            case 'EVP1':
                readEnvelop((J3DEnvelopeBlock*)block);
                break;
            case 'DRW1':
                readDraw((J3DDrawBlock*)block);
                break;
            case 'JNT1':
                readJoint((J3DJointBlock*)block);
                break;
            case 'SHP1':
                readShape((J3DShapeBlock*)block, i_flags);
                break;
            case 'TEX1':
                readTexture((J3DTextureBlock*)block);
                break;
            case 'MDL3':
                readMaterialDL((J3DMaterialDLBlock*)block, i_flags);
                modifyMaterial(i_flags);
                break;
            case 'MAT3':
                flags = 0x50100000;
                flags |= (i_flags & 0x3000000);
                mpMaterialBlock = (J3DMaterialBlock*)block;
                if (((u32)i_flags & 0x3000) == 0) {
                    readMaterial((J3DMaterialBlock*)block, flags);
                } else if (((u32)i_flags & 0x3000) == 0x2000) {
                    readPatchedMaterial((J3DMaterialBlock*)block, flags);
                }
                break;
            default:
                OSReport("Unknown data block\n");
                break;
        }
        block = (J3DModelBlock*)((u32)block + block->mBlockSize);
    }
    J3DModelHierarchy const* hierarchy = mpModelData->getHierarchy();
    mpModelData->makeHierarchy(NULL, &hierarchy);
    mpModelData->getShapeTable()->sortVcdVatCmd();
    mpModelData->getJointTree().findImportantMtxIndex();
    setupBBoardInfo();
    mpModelData->indexToPtr();
    return mpModelData;
}

/* 80334EE0-80335048 32F820 0168+00 3/0 0/0 0/0 .text            setupBBoardInfo__14J3DModelLoaderFv
 */
void J3DModelLoader::setupBBoardInfo() {
    for (u16 i = 0; i < mpModelData->getJointNum(); i++) {
        J3DMaterial* mesh = mpModelData->getJointNodePointer(i)->getMesh();
        if (mesh != NULL) {
            u16 shape_index = mesh->getShape()->getIndex();
            u16* index_table = JSUConvertOffsetToPtr<u16>(mpShapeBlock,
                                                          (u32)mpShapeBlock->mpIndexTable);
            J3DShapeInitData* shape_init_data =
                JSUConvertOffsetToPtr<J3DShapeInitData>(mpShapeBlock,
                                                        (u32)mpShapeBlock->mpShapeInitData);
            J3DJoint* joint;
            switch (shape_init_data[index_table[shape_index]].mShapeMtxType) {
                case 0:
                    joint = mpModelData->getJointNodePointer(i);
                    joint->setMtxType(0);
                    break;
                case 1:
                    joint = mpModelData->getJointNodePointer(i);
                    joint->setMtxType(1);
                    mpModelData->mbHasBillboard = true;
                    break;
                case 2:
                    joint = mpModelData->getJointNodePointer(i);
                    joint->setMtxType(2);
                    mpModelData->mbHasBillboard = true;
                    break;
                case 3:
                    joint = mpModelData->getJointNodePointer(i);
                    joint->setMtxType(0);
                    break;
                default:
                    OSReport("WRONG SHAPE MATRIX TYPE (__FILE__)\n");
                    break;
            }
        }
    }
}

/* 80335048-803351A4 32F988 015C+00 2/2 0/0 0/0 .text
 * readInformation__14J3DModelLoaderFPC17J3DModelInfoBlockUl    */
void J3DModelLoader::readInformation(J3DModelInfoBlock const* i_block, u32 i_flags) {
    mpModelData->mFlags = i_flags | i_block->mFlags;
    mpModelData->getJointTree().setFlag(mpModelData->mFlags);
    J3DMtxCalc* mtx_calc = NULL;
    switch (mpModelData->mFlags & 0xf) {
        case 0:
            mtx_calc = new J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformBasic,J3DMtxCalcJ3DSysInitBasic>();
            break;
        case 1:
            mtx_calc = new J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformSoftimage,J3DMtxCalcJ3DSysInitSoftimage>();
            break;
        case 2:
            mtx_calc = new J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformMaya,J3DMtxCalcJ3DSysInitMaya>();
            break;
    }
    mpModelData->setBasicMtxCalc(mtx_calc);
    mpModelData->getVertexData().mPacketNum = i_block->mPacketNum;
    mpModelData->getVertexData().mVtxNum = i_block->mVtxNum;
    mpModelData->setHierarchy(JSUConvertOffsetToPtr<J3DModelHierarchy>(i_block, i_block->mpHierarchy));
}

/* 803351A4-803351D0 32FAE4 002C+00 1/1 0/0 0/0 .text getFmtType__FP17_GXVtxAttrFmtList7_GXAttr */
static _GXCompType getFmtType(_GXVtxAttrFmtList* i_fmtList, _GXAttr i_attr) {
    for (; i_fmtList->attr != GX_VA_NULL; i_fmtList++) {
        if (i_fmtList->attr == i_attr) {
            return i_fmtList->type;
        }
    }
    return GX_F32;
}

/* 803351D0-803353F0 32FB10 0220+00 2/2 0/0 0/0 .text
 * readVertex__14J3DModelLoaderFPC14J3DVertexBlock              */
void J3DModelLoader::readVertex(J3DVertexBlock const* i_block) {
    J3DVertexData& vertex_data = mpModelData->getVertexData();
    vertex_data.mVtxAttrFmtList =
        JSUConvertOffsetToPtr<GXVtxAttrFmtList>(i_block, i_block->mpVtxAttrFmtList);
    vertex_data.mVtxPosArray = JSUConvertOffsetToPtr<void>(i_block, i_block->mpVtxPosArray);
    vertex_data.mVtxNrmArray = JSUConvertOffsetToPtr<void>(i_block, i_block->mpVtxNrmArray);
    vertex_data.mVtxNBTArray = JSUConvertOffsetToPtr<void>(i_block, i_block->mpVtxNBTArray);
    for (int i = 0; i < 2; i++) {
        vertex_data.mVtxColorArray[i] =
            (GXColor*)JSUConvertOffsetToPtr<void>(i_block, i_block->mpVtxColorArray[i]);
    }
    for (int i = 0; i < 8; i++) {
        vertex_data.mVtxTexCoordArray[i] =
            JSUConvertOffsetToPtr<void>(i_block, i_block->mpVtxTexCoordArray[i]);
    }

    _GXCompType nrm_type = getFmtType(vertex_data.mVtxAttrFmtList, GX_VA_NRM);
    u32 nrm_size = nrm_type == GX_F32 ? 12 : 6;

    void* nrm_end = NULL;
    if (vertex_data.mVtxNBTArray != NULL) {
        nrm_end = vertex_data.mVtxNBTArray;
    } else if (vertex_data.mVtxColorArray[0] != NULL) {
        nrm_end = vertex_data.mVtxColorArray[0];
    } else if (vertex_data.mVtxTexCoordArray[0] != NULL) {
        nrm_end = vertex_data.mVtxTexCoordArray[0];
    }

    if (vertex_data.mVtxNrmArray == NULL) {
        vertex_data.mNrmNum = 0;
    } else if (nrm_end != NULL) {
        vertex_data.mNrmNum = ((u32)nrm_end - (u32)vertex_data.mVtxNrmArray) / nrm_size + 1;
    } else {
        vertex_data.mNrmNum = (i_block->mBlockSize - (u32)i_block->mpVtxNrmArray) / nrm_size + 1;
    }

    void* color0_end = NULL;
    if (vertex_data.mVtxColorArray[1] != NULL) {
        color0_end = vertex_data.mVtxColorArray[1];
    } else if (vertex_data.mVtxTexCoordArray[0] != NULL) {
        color0_end = vertex_data.mVtxTexCoordArray[0];
    }

    if (vertex_data.mVtxColorArray[0] == NULL) {
        vertex_data.mColNum = 0;
    } else if (color0_end != NULL) {
        vertex_data.mColNum = ((u32)color0_end - (u32)vertex_data.mVtxColorArray[0]) / 4 + 1;
    } else {
        vertex_data.mColNum = (i_block->mBlockSize - (u32)i_block->mpVtxColorArray[0]) / 4 + 1;
    }

    if (vertex_data.mVtxTexCoordArray[0] == NULL) {
        vertex_data.mTexCoordNum = 0;
    } else {
        vertex_data.mTexCoordNum = (i_block->mBlockSize - (u32)i_block->mpVtxTexCoordArray[0]) / 8 + 1;
    }
}

/* 803353F0-80335480 32FD30 0090+00 2/2 0/0 0/0 .text
 * readEnvelop__14J3DModelLoaderFPC16J3DEnvelopeBlock           */
void J3DModelLoader::readEnvelop(J3DEnvelopeBlock const* i_block) {
    mpModelData->getJointTree().mWEvlpMtxNum = i_block->mWEvlpMtxNum;
    mpModelData->getJointTree().mWEvlpMixMtxNum =
        JSUConvertOffsetToPtr<u8>(i_block, i_block->mpWEvlpMixMtxNum);
    mpModelData->getJointTree().mWEvlpMixMtxIndex =
        JSUConvertOffsetToPtr<u16>(i_block, i_block->mpWEvlpMixIndex);
    mpModelData->getJointTree().mWEvlpMixWeight =
        JSUConvertOffsetToPtr<f32>(i_block, i_block->mpWEvlpMixWeight);
    mpModelData->getJointTree().mInvJointMtx =
        JSUConvertOffsetToPtr<Mtx>(i_block, i_block->mpInvJointMtx);
}

/* 80335480-80335530 32FDC0 00B0+00 2/2 0/0 0/0 .text readDraw__14J3DModelLoaderFPC12J3DDrawBlock
 */
void J3DModelLoader::readDraw(J3DDrawBlock const* i_block) {
    J3DJointTree& joint_tree = mpModelData->getJointTree();
    joint_tree.mDrawMtxData.mEntryNum = i_block->mMtxNum - mpModelData->getJointTree().mWEvlpMtxNum;
    joint_tree.mDrawMtxData.mDrawMtxFlag = JSUConvertOffsetToPtr<u8>(i_block, i_block->mpDrawMtxFlag);
    joint_tree.mDrawMtxData.mDrawMtxIndex = JSUConvertOffsetToPtr<u16>(i_block, i_block->mpDrawMtxIndex);
    u16 i;
    for (i = 0; i < joint_tree.mDrawMtxData.mEntryNum; i++) {
        if (joint_tree.mDrawMtxData.mDrawMtxFlag[i] == 1) {
            break;
        }
    }
    joint_tree.mDrawMtxData.mDrawFullWgtMtxNum = i;
    mpModelData->getJointTree().mWEvlpImportantMtxIdx = new u16[joint_tree.mDrawMtxData.mEntryNum];

}

/* 80335530-80335614 32FE70 00E4+00 2/2 0/0 0/0 .text
 * readJoint__14J3DModelLoaderFPC13J3DJointBlock                */
void J3DModelLoader::readJoint(J3DJointBlock const* i_block) {
    J3DJointFactory factory(*i_block);
    mpModelData->getJointTree().mJointNum = i_block->mJointNum;
    if (i_block->mpNameTable != NULL) {
        mpModelData->getJointTree().mJointName =
            new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(i_block, i_block->mpNameTable));
    } else {
        mpModelData->getJointTree().mJointName = NULL;
    }
    mpModelData->getJointTree().mJointNodePointer =
        new J3DJoint*[mpModelData->getJointTree().mJointNum];
    for (u16 i = 0; i < mpModelData->getJointTree().getJointNum(); i++) {
        mpModelData->getJointTree().mJointNodePointer[i] = factory.create(i);
    }
}

/* 80335614-80335890 32FF54 027C+00 1/0 0/0 0/0 .text
 * readMaterial__18J3DModelLoader_v26FPC16J3DMaterialBlockUl    */
void J3DModelLoader_v26::readMaterial(J3DMaterialBlock const* i_block, u32 i_flags) {
    J3DMaterialFactory factory(*i_block);
    mpMaterialTable->mMaterialNum = i_block->mMaterialNum;
    mpMaterialTable->mUniqueMatNum = factory.countUniqueMaterials();
    if (i_block->mpNameTable != NULL) {
        mpMaterialTable->mMaterialName =
            new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(i_block, i_block->mpNameTable));
    } else {
        mpMaterialTable->mMaterialName = NULL;
    }
    mpMaterialTable->mMaterialNodePointer = new J3DMaterial*[mpMaterialTable->mMaterialNum];
    if (i_flags & 0x200000) {
        mpMaterialTable->field_0x10 = new (0x20) J3DMaterial[mpMaterialTable->mUniqueMatNum];
    } else {
        mpMaterialTable->field_0x10 = NULL;
    }
    if (i_flags & 0x200000) {
        for (u16 i = 0; i < mpMaterialTable->mUniqueMatNum; i++) {
            factory.create(&mpMaterialTable->field_0x10[i],
                           J3DMaterialFactory::MATERIAL_TYPE_NORMAL, i, i_flags);
            mpMaterialTable->field_0x10[i].mDiffFlag = (u32)&mpMaterialTable->field_0x10[i] >> 4;
        }
    }
    for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
        mpMaterialTable->mMaterialNodePointer[i] =
            factory.create(NULL, J3DMaterialFactory::MATERIAL_TYPE_NORMAL, i, i_flags);
    }
    if (i_flags & 0x200000) {
        for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
            mpMaterialTable->mMaterialNodePointer[i]->mDiffFlag =
                (u32)&mpMaterialTable->field_0x10[factory.getMaterialID(i)] >> 4;
            mpMaterialTable->mMaterialNodePointer[i]->mpOrigMaterial =
                &mpMaterialTable->field_0x10[factory.getMaterialID(i)];
        }
    } else {
        for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
            mpMaterialTable->mMaterialNodePointer[i]->mDiffFlag =
                ((u32)mpMaterialTable->mMaterialNodePointer >> 4) + factory.getMaterialID(i);
        }
    }
}

/* 80335890-80335AF4 3301D0 0264+00 1/0 0/0 0/0 .text
 * readMaterial_v21__18J3DModelLoader_v21FPC20J3DMaterialBlock_v21Ul */
void J3DModelLoader_v21::readMaterial_v21(J3DMaterialBlock_v21 const* i_block, u32 i_flags) {
    J3DMaterialFactory_v21 factory(*i_block);
    mpMaterialTable->mMaterialNum = i_block->mMaterialNum;
    mpMaterialTable->mUniqueMatNum = factory.countUniqueMaterials();
    if (i_block->mpNameTable != NULL) {
        mpMaterialTable->mMaterialName =
            new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(i_block, i_block->mpNameTable));
    } else {
        mpMaterialTable->mMaterialName = NULL;
    }
    mpMaterialTable->mMaterialNodePointer = new J3DMaterial*[mpMaterialTable->mMaterialNum];
    if (i_flags & 0x200000) {
        mpMaterialTable->field_0x10 = new (0x20) J3DMaterial[mpMaterialTable->mUniqueMatNum];
    } else {
        mpMaterialTable->field_0x10 = NULL;
    }
    if (i_flags & 0x200000) {
        for (u16 i = 0; i < mpMaterialTable->mUniqueMatNum; i++) {
            factory.create(&mpMaterialTable->field_0x10[i], i, i_flags);
            mpMaterialTable->field_0x10[i].mDiffFlag = (u32)&mpMaterialTable->field_0x10[i] >> 4;
        }
    }
    for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
        mpMaterialTable->mMaterialNodePointer[i] = factory.create(NULL, i, i_flags);
    }
    if (i_flags & 0x200000) {
        for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
            mpMaterialTable->mMaterialNodePointer[i]->mDiffFlag =
                (u32)&mpMaterialTable->field_0x10[factory.getMaterialID(i)] >> 4;
            mpMaterialTable->mMaterialNodePointer[i]->mpOrigMaterial =
                &mpMaterialTable->field_0x10[factory.getMaterialID(i)];
        }
    } else {
        for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
            mpMaterialTable->mMaterialNodePointer[i]->mDiffFlag = 0xc0000000;
        }
    }
}

/* 80335AF4-80335C18 330434 0124+00 2/2 0/0 0/0 .text
 * readShape__14J3DModelLoaderFPC13J3DShapeBlockUl              */
void J3DModelLoader::readShape(J3DShapeBlock const* i_block, u32 i_flags) {
    mpShapeBlock = i_block;
    J3DShapeTable* shape_table = mpModelData->getShapeTable();
    J3DShapeFactory factory(*i_block);
    shape_table->mShapeNum = i_block->mShapeNum;
    if (i_block->mpNameTable != NULL) {
        shape_table->mShapeName =
            new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(i_block, i_block->mpNameTable));
    } else {
        shape_table->mShapeName = NULL;
    }
    shape_table->mShapeNodePointer = new J3DShape*[shape_table->mShapeNum];
    factory.allocVcdVatCmdBuffer(shape_table->mShapeNum);
    J3DModelHierarchy const* hierarchy_entry = mpModelData->getHierarchy();
    GXVtxDescList* vtx_desc_list = NULL;
    for (; hierarchy_entry->mType != 0; hierarchy_entry++) {
        if (hierarchy_entry->mType == 0x12) {
            shape_table->mShapeNodePointer[hierarchy_entry->mValue] =
                factory.create(hierarchy_entry->mValue, i_flags, vtx_desc_list);
            vtx_desc_list = factory.getVtxDescList(hierarchy_entry->mValue);
        }
    }
}

/* 80335C18-80335CE4 330558 00CC+00 2/2 0/0 0/0 .text
 * readTexture__14J3DModelLoaderFPC15J3DTextureBlock            */
void J3DModelLoader::readTexture(J3DTextureBlock const* i_block) {
    u16 texture_num = i_block->mTextureNum;
    ResTIMG* texture_res = JSUConvertOffsetToPtr<ResTIMG>(i_block, i_block->mpTextureRes);
    if (i_block->mpNameTable != NULL) {
        mpMaterialTable->mTextureName =
            new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(i_block, i_block->mpNameTable));
    } else {
        mpMaterialTable->mTextureName = NULL;
    }
    mpMaterialTable->mTexture = new J3DTexture(texture_num, texture_res);
}

/* 80335CE4-80335E20 330624 013C+00 1/0 0/0 0/0 .text
 * readMaterialTable__18J3DModelLoader_v26FPC16J3DMaterialBlockUl */
void J3DModelLoader_v26::readMaterialTable(J3DMaterialBlock const* i_block, u32 i_flags) {
    J3DMaterialFactory factory(*i_block);
    mpMaterialTable->mMaterialNum = i_block->mMaterialNum;
    if (i_block->mpNameTable != NULL) {
        mpMaterialTable->mMaterialName =
            new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(i_block, i_block->mpNameTable));
    } else {
        mpMaterialTable->mMaterialName = NULL;
    }
    mpMaterialTable->mMaterialNodePointer = new J3DMaterial*[mpMaterialTable->mMaterialNum];
    for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
        mpMaterialTable->mMaterialNodePointer[i] =
            factory.create(NULL, J3DMaterialFactory::MATERIAL_TYPE_NORMAL, i, i_flags);
    }
    for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
        mpMaterialTable->mMaterialNodePointer[i]->mDiffFlag =
            (u32)mpMaterialTable->mMaterialNodePointer + factory.getMaterialID(i);
    }
}

/* 80335E20-80335F5C 330760 013C+00 1/0 0/0 0/0 .text
 * readMaterialTable_v21__18J3DModelLoader_v21FPC20J3DMaterialBlock_v21Ul */
void J3DModelLoader_v21::readMaterialTable_v21(J3DMaterialBlock_v21 const* i_block, u32 i_flags) {
    J3DMaterialFactory_v21 factory(*i_block);
    mpMaterialTable->mMaterialNum = i_block->mMaterialNum;
    if (i_block->mpNameTable != NULL) {
        mpMaterialTable->mMaterialName =
            new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(i_block, i_block->mpNameTable));
    } else {
        mpMaterialTable->mMaterialName = NULL;
    }
    mpMaterialTable->mMaterialNodePointer = new J3DMaterial*[mpMaterialTable->mMaterialNum];
    for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
        mpMaterialTable->mMaterialNodePointer[i] =
            factory.create(NULL, i, i_flags);
    }
    for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
        mpMaterialTable->mMaterialNodePointer[i]->mDiffFlag =
            ((u32)mpMaterialTable->mMaterialNodePointer >> 4) + factory.getMaterialID(i);
    }
}

/* 80335F5C-80336028 33089C 00CC+00 1/1 0/0 0/0 .text
 * readTextureTable__14J3DModelLoaderFPC15J3DTextureBlock       */
void J3DModelLoader::readTextureTable(J3DTextureBlock const* i_block) {
    u16 texture_num = i_block->mTextureNum;
    ResTIMG* texture_res = JSUConvertOffsetToPtr<ResTIMG>(i_block, i_block->mpTextureRes);
    if (i_block->mpNameTable != NULL) {
        mpMaterialTable->mTextureName =
            new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(i_block, i_block->mpNameTable));
    } else {
        mpMaterialTable->mTextureName = NULL;
    }
    mpMaterialTable->mTexture = new J3DTexture(texture_num, texture_res);
}

/* 80336028-80336168 330968 0140+00 1/1 0/0 0/0 .text
 * readPatchedMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl */
void J3DModelLoader::readPatchedMaterial(J3DMaterialBlock const* i_block, u32 i_flags) {
    J3DMaterialFactory factory(*i_block);
    mpMaterialTable->mMaterialNum = i_block->mMaterialNum;
    mpMaterialTable->mUniqueMatNum = factory.countUniqueMaterials();
    if (i_block->mpNameTable != NULL) {
        mpMaterialTable->mMaterialName =
            new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(i_block, i_block->mpNameTable));
    } else {
        mpMaterialTable->mMaterialName = NULL;
    }
    mpMaterialTable->mMaterialNodePointer = new J3DMaterial*[mpMaterialTable->mMaterialNum];
    mpMaterialTable->field_0x10 = NULL;
    for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
        mpMaterialTable->mMaterialNodePointer[i] =
            factory.create(NULL, J3DMaterialFactory::MATERIAL_TYPE_PATCHED, i, i_flags);
        mpMaterialTable->mMaterialNodePointer[i]->mDiffFlag =
            ((u32)mpMaterialTable->mMaterialNodePointer >> 4) + factory.getMaterialID(i);
    }
}

/* 80336168-8033631C 330AA8 01B4+00 1/1 0/0 0/0 .text
 * readMaterialDL__14J3DModelLoaderFPC18J3DMaterialDLBlockUl    */
void J3DModelLoader::readMaterialDL(J3DMaterialDLBlock const* i_block, u32 i_flags) {
    J3DMaterialFactory factory(*i_block);
    s32 flags;
    if (mpMaterialTable->mMaterialNum == 0) {
        mpMaterialTable->field_0x1c = 1;
        mpMaterialTable->mMaterialNum = i_block->mMaterialNum;
        mpMaterialTable->mUniqueMatNum = i_block->mMaterialNum;
        if (i_block->mpNameTable != NULL) {
            mpMaterialTable->mMaterialName =
                new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(i_block, i_block->mpNameTable));
        } else {
            mpMaterialTable->mMaterialName = NULL;
        }
        mpMaterialTable->mMaterialNodePointer = new J3DMaterial*[mpMaterialTable->mMaterialNum];
        mpMaterialTable->field_0x10 = NULL;
        for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
            flags = i_flags;
            mpMaterialTable->mMaterialNodePointer[i] =
                factory.create(NULL, J3DMaterialFactory::MATERIAL_TYPE_LOCKED, i, flags);
        }
        for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
            mpMaterialTable->mMaterialNodePointer[i]->mDiffFlag = 0xc0000000;
        }
    } else {
        for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
            flags = i_flags;
            mpMaterialTable->mMaterialNodePointer[i] =
                factory.create(mpMaterialTable->mMaterialNodePointer[i],
                               J3DMaterialFactory::MATERIAL_TYPE_LOCKED, i, flags);
        }
    }
}

/* 8033631C-80336398 330C5C 007C+00 1/1 0/0 0/0 .text            modifyMaterial__14J3DModelLoaderFUl
 */
void J3DModelLoader::modifyMaterial(u32 i_flags) {
    if (i_flags & 0x2000) {
        J3DMaterialFactory factory(*mpMaterialBlock);
        for (u16 i = 0; i < mpMaterialTable->mMaterialNum; i++) {
            factory.modifyPatchedCurrentMtx(mpMaterialTable->mMaterialNodePointer[i], i);
        }
    }
}
