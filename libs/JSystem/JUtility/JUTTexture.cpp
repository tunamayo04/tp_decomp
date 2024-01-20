#include "JSystem/JUtility/JUTTexture.h"
#include "JSystem/JUtility/JUTPalette.h"
#include "dolphin/gx.h"

/* 802DE234-802DE2A8 2D8B74 0074+00 0/0 30/30 0/0 .text            __dt__10JUTTextureFv */
JUTTexture::~JUTTexture() {
    if (getCaptureFlag()) {
        delete[] field_0x3c;
    }
    if (getEmbPaletteDelFlag()) {
        delete mEmbPalette;
    }
}

/* 802DE2A8-802DE44C 2D8BE8 01A4+00 0/0 18/18 0/0 .text storeTIMG__10JUTTextureFPC7ResTIMGUc */
void JUTTexture::storeTIMG(ResTIMG const* param_0, u8 param_1) {
    _GXTlut tlut;

    if (param_0 && param_1 < 0x10) {
        mTexInfo = param_0;
        mTexData = (void*)((int)mTexInfo + mTexInfo->imageOffset);

        if (mTexInfo->imageOffset == 0) {
            mTexData = (void*)((int)mTexInfo + 0x20);
        }

        field_0x2c = NULL;
        mTlutName = 0;
        mWrapS = mTexInfo->wrapS;
        mWrapT = mTexInfo->wrapT;
        mMinFilter = mTexInfo->minFilter;
        mMagFilter = mTexInfo->magFilter;
        mMinLOD = (s8)mTexInfo->minLOD;
        mMaxLOD = (s8)mTexInfo->maxLOD;
        mLODBias = mTexInfo->LODBias;

        if (mTexInfo->numColors == 0) {
            initTexObj();
        } else {
            if (mTexInfo->numColors > 0x100) {
                tlut = (_GXTlut)((param_1 % 4) + GX_BIGTLUT0);
            } else {
                tlut = (_GXTlut)param_1;
            }

            if (mEmbPalette == NULL || !getEmbPaletteDelFlag()) {
                mEmbPalette = new JUTPalette(tlut, (_GXTlutFmt)mTexInfo->colorFormat,
                                             (JUTTransparency)mTexInfo->alphaEnabled, mTexInfo->numColors,
                                             (void*)(&mTexInfo->format + mTexInfo->paletteOffset));
                mFlags = mFlags & 1 | 2;
            } else {
                mEmbPalette->storeTLUT(tlut, (_GXTlutFmt)mTexInfo->colorFormat,
                                       (JUTTransparency)mTexInfo->alphaEnabled, mTexInfo->numColors,
                                       (void*)(&mTexInfo->format + mTexInfo->paletteOffset));
            }
            attachPalette(mEmbPalette);
        }
    }
}

/* 802DE44C-802DE480 2D8D8C 0034+00 0/0 6/6 0/0 .text
 * storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette              */
void JUTTexture::storeTIMG(ResTIMG const* param_0, JUTPalette* param_1) {
    _GXTlut type;

    if (param_1 != NULL) {
        type = (_GXTlut)param_1->getTlutName();
    } else {
        type = GX_TLUT0;
    }
    storeTIMG(param_0, param_1, type);
}

/* 802DE480-802DE5B0 2D8DC0 0130+00 1/1 3/3 0/0 .text
 * storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut      */
void JUTTexture::storeTIMG(ResTIMG const* param_0, JUTPalette* param_1, _GXTlut param_2) {
    _GXTlut type;

    if (param_0 == NULL) {
        return;
    }
    mTexInfo = param_0;
    mTexData = ((u8*)mTexInfo) + mTexInfo->imageOffset;
    if (mTexInfo->imageOffset == 0) {
        mTexData = ((u8*)mTexInfo) + sizeof(ResTIMG);
    }
    if (getEmbPaletteDelFlag()) {
            delete mEmbPalette;
    }
    mEmbPalette = param_1;
    setEmbPaletteDelFlag(false);
    field_0x2c = NULL;
    if (param_1 != NULL) {
        mTlutName = param_2;
        if (param_2 != param_1->getTlutName()) {
            u8 format = param_1->getFormat();
            u8 transperancy = param_1->getTransparency();
            u16 numColors = param_1->getNumColors();
            ResTLUT* colorTable = param_1->getColorTable();
            param_1->storeTLUT(param_2, (_GXTlutFmt)format,
                            (JUTTransparency)transperancy,
                            numColors, colorTable);
        }
    }

    mWrapS = mTexInfo->wrapS;
    mWrapT = mTexInfo->wrapT;
    mMinFilter = mTexInfo->minFilter;
    mMagFilter = mTexInfo->magFilter;
    mMinLOD = mTexInfo->minLOD;
    mMaxLOD = mTexInfo->maxLOD;
    mLODBias = mTexInfo->LODBias;
    init();
}

/* 802DE5B0-802DE608 2D8EF0 0058+00 1/1 7/7 0/0 .text attachPalette__10JUTTextureFP10JUTPalette */
void JUTTexture::attachPalette(JUTPalette* param_0) {
    if (mTexInfo->indexTexture) {
        if (param_0 == NULL && mEmbPalette != NULL) {
            field_0x2c = mEmbPalette;
        } else {
            field_0x2c = param_0;
        }
        _GXTlut name = (_GXTlut)field_0x2c->getTlutName();
        initTexObj(name);
    }
}

/* 802DE608-802DE658 2D8F48 0050+00 1/1 0/0 0/0 .text            init__10JUTTextureFv */
void JUTTexture::init() {
    if (mTexInfo->numColors == 0) {
        initTexObj();
    } else {
        if (mEmbPalette != NULL) {
            field_0x2c = mEmbPalette;

            _GXTlut name = (_GXTlut)field_0x2c->getTlutName();
            initTexObj(name);
        }
    }
}

/* 802DE658-802DE744 2D8F98 00EC+00 2/2 0/0 0/0 .text            initTexObj__10JUTTextureFv */
void JUTTexture::initTexObj() {
    GXBool mipmapEnabled;
    if (mTexInfo->mipmapEnabled != 0) {
        mipmapEnabled = 1;
    } else {
        mipmapEnabled = 0;
    }
    u8* image = ((u8*)mTexInfo);
    image += (mTexInfo->imageOffset ? mTexInfo->imageOffset : 0x20);
    GXInitTexObj(&mTexObj, image, mTexInfo->width, mTexInfo->height,
                 (GXTexFmt)mTexInfo->format, (GXTexWrapMode)mWrapS,
                 (GXTexWrapMode)mWrapT, mipmapEnabled);
    GXInitTexObjLOD(&mTexObj, (GXTexFilter)mMinFilter, (GXTexFilter)mMagFilter,
                    mMinLOD / 8.0f, mMaxLOD / 8.0f, mLODBias / 100.0f, mTexInfo->biasClamp,
                    mTexInfo->doEdgeLOD, (GXAnisotropy)mTexInfo->maxAnisotropy);
}

/* 802DE744-802DE840 2D9084 00FC+00 2/2 0/0 0/0 .text            initTexObj__10JUTTextureF7_GXTlut
 */
void JUTTexture::initTexObj(_GXTlut param_0) {
    GXBool mipmapEnabled;
    if (mTexInfo->mipmapEnabled != 0) {
        mipmapEnabled = 1;
    } else {
        mipmapEnabled = 0;
    }
    mTlutName = param_0;
    u8* image = ((u8*)mTexInfo);
    image += (mTexInfo->imageOffset ? mTexInfo->imageOffset : 0x20);
    GXInitTexObjCI(&mTexObj, image, mTexInfo->width, mTexInfo->height,
                 (GXCITexFmt)mTexInfo->format, (GXTexWrapMode)mWrapS,
                 (GXTexWrapMode)mWrapT, mipmapEnabled, param_0);
    GXInitTexObjLOD(&mTexObj, (GXTexFilter)mMinFilter, (GXTexFilter)mMagFilter,
                    mMinLOD / 8.0f, mMaxLOD / 8.0f, mLODBias / 100.0f, mTexInfo->biasClamp,
                    mTexInfo->doEdgeLOD, (GXAnisotropy)mTexInfo->maxAnisotropy);
}

/* 802DE840-802DE890 2D9180 0050+00 0/0 14/14 0/0 .text            load__10JUTTextureF11_GXTexMapID
 */
void JUTTexture::load(_GXTexMapID param_0) {
    if (field_0x2c) {
        field_0x2c->load();
    }
    GXLoadTexObj(&mTexObj, param_0);
}
