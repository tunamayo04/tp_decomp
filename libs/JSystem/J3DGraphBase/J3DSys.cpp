//
// Generated By: dol2asm
// Translation Unit: J3DSys
//

#include "JSystem/J3DGraphBase/J3DSys.h"
#include "dol2asm.h"
#include "dolphin/gx/GXPixel.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ct__6J3DSysFv();
extern "C" void loadPosMtxIndx__6J3DSysCFiUs();
extern "C" void loadNrmMtxIndx__6J3DSysCFiUs();
extern "C" void setTexCacheRegion__6J3DSysF15_GXTexCacheSize();
extern "C" void drawInit__6J3DSysFv();
extern "C" void reinitGX__6J3DSysFv();
extern "C" void reinitGenMode__6J3DSysFv();
extern "C" void reinitLighting__6J3DSysFv();
extern "C" void reinitTransform__6J3DSysFv();
extern "C" void reinitTexture__6J3DSysFv();
extern "C" void reinitTevStages__6J3DSysFv();
extern "C" void reinitIndStages__6J3DSysFv();
extern "C" void reinitPixelProc__6J3DSysFv();
extern "C" void __sinit_J3DSys_cpp();
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" f32 mCurrentS__6J3DSys[3];
extern "C" f32 mParentS__6J3DSys[3];
extern "C" u8 sTexCoordScaleTable__6J3DSys[64 + 4 /* padding */];
extern "C" extern u8 j3dDefaultViewNo[4 + 4 /* padding */];

//
// External References:
//

extern "C" void J3DFifoLoadTexCached__F11_GXTexMapIDUl15_GXTexCacheSizeUl15_GXTexCacheSize();
extern "C" void makeTexCoordTable__Fv();
extern "C" void makeAlphaCmpTable__Fv();
extern "C" void makeZModeTable__Fv();
extern "C" void makeTevSwapTable__Fv();
extern "C" void GXInvalidateVtxCache();
extern "C" void GXFlush();
extern "C" void GXInitTexCacheRegion();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" extern u8 const j3dDefaultTexCoordInfo[32];
extern "C" extern GXColor j3dDefaultColInfo;
extern "C" extern u8 data_804563C8;
extern "C" extern u32 j3dDefaultTevColor;
extern "C" extern u32 data_804563D8;
extern "C" extern GXColor j3dDefaultTevKColor;

//
// Declarations:
//

/* ############################################################################################## */
/* 80434AC8-80434BE4 0617E8 011C+00 1/1 151/151 486/486 .bss             j3dSys */
J3DSys j3dSys;

/* 80434BE4-80434C14 061904 0030+00 0/0 17/17 154/154 .bss             mCurrentMtx__6J3DSys */
Mtx J3DSys::mCurrentMtx;

/* 80434C14-80434C20 061934 000C+00 0/0 6/6 0/0 .bss             mCurrentS__6J3DSys */
Vec J3DSys::mCurrentS;

/* 80434C20-80434C2C 061940 000C+00 0/0 5/5 0/0 .bss             mParentS__6J3DSys */
Vec J3DSys::mParentS;

/* 80434C2C-80434C70 06194C 0040+04 1/1 17/17 0/0 .bss             sTexCoordScaleTable__6J3DSys */
u16 J3DSys::sTexCoordScaleTable[34];

/* 8030FDE8-8030FEC0 30A728 00D8+00 1/1 0/0 0/0 .text            __ct__6J3DSysFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DSys::J3DSys() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DSys/__ct__6J3DSysFv.s"
}
#pragma pop

static inline void J3DFifoLoadIndx(u8 cmd, u16 indx, u16 addr) {
    GFX_FIFO(u8) = cmd;
    GFX_FIFO(u16) = indx;
    GFX_FIFO(u16) = addr;
}

/* 8030FEC0-8030FEE4 30A800 0024+00 0/0 1/1 0/0 .text            loadPosMtxIndx__6J3DSysCFiUs */
void J3DSys::loadPosMtxIndx(int addr, u16 indx) const {
    J3DFifoLoadIndx(GX_CMD_LOAD_INDX_A, indx, 0xB000 | ((u16)(addr * 0x0C)));
}

/* 8030FEE4-8030FF0C 30A824 0028+00 0/0 1/1 0/0 .text            loadNrmMtxIndx__6J3DSysCFiUs */
void J3DSys::loadNrmMtxIndx(int addr, u16 indx) const {
    J3DFifoLoadIndx(GX_CMD_LOAD_INDX_B, indx, 0x8000 | ((u16)((addr * 0x09) + 0x400)));
}

/* ############################################################################################## */
/* 803A1DF8-803A1E08 02E458 0010+00 1/1 0/0 0/0 .rodata          @695 */
SECTION_RODATA static u8 const lit_695[16] = {
    0x00, 0x00, 0x80, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1DF8, &lit_695);

/* 803A1E08-803A1E18 02E468 0010+00 1/1 0/0 0/0 .rodata          @696 */
SECTION_RODATA static u8 const lit_696[16] = {
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1E08, &lit_696);

/* 8030FF0C-803100BC 30A84C 01B0+00 1/1 0/0 0/0 .text setTexCacheRegion__6J3DSysF15_GXTexCacheSize
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSys::setTexCacheRegion(_GXTexCacheSize param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DSys/setTexCacheRegion__6J3DSysF15_GXTexCacheSize.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A1E18-803A1E30 02E478 0018+00 1/1 0/0 0/0 .rodata          @737 */
SECTION_RODATA static u8 const lit_737[24] = {
    0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1E18, &lit_737);

/* 803CD8A0-803CD8B0 02A9C0 0010+00 1/1 0/0 0/0 .data            NullTexData */
SECTION_DATA static u8 NullTexData[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CD8B0-803CD8E0 02A9D0 0030+00 1/1 0/0 0/0 .data            j3dIdentityMtx */
SECTION_DATA static u8 j3dIdentityMtx[48] = {
    0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803100BC-8031073C 30A9FC 0680+00 0/0 3/3 0/0 .text            drawInit__6J3DSysFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSys::drawInit() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DSys/drawInit__6J3DSysFv.s"
}
#pragma pop

/* 8031073C-8031079C 30B07C 0060+00 0/0 16/16 6/6 .text            reinitGX__6J3DSysFv */
void J3DSys::reinitGX() {
    reinitGenMode();
    reinitLighting();
    reinitTransform();
    reinitTexture();
    reinitTevStages();
    reinitIndStages();
    reinitPixelProc();
    GXFlush();
}

/* 8031079C-803107E8 30B0DC 004C+00 1/1 0/0 0/0 .text            reinitGenMode__6J3DSysFv */
void J3DSys::reinitGenMode() {
    GXSetNumChans(0);
    GXSetNumTexGens(1);
    GXSetNumTevStages(1);
    GXSetNumIndStages(0);
    GXSetCullMode(GX_CULL_BACK);
    GXSetCoPlanar(GX_FALSE);
}

/* ############################################################################################## */
/* 80450950-80450954 0003D0 0004+00 2/2 0/0 0/0 .sdata           ColorBlack */
SECTION_SDATA static GXColor ColorBlack = {0x00, 0x00, 0x00, 0x00};

/* 80450954-80450958 0003D4 0004+00 2/2 0/0 0/0 .sdata           ColorWhite */
SECTION_SDATA static GXColor ColorWhite = {0xFF, 0xFF, 0xFF, 0xFF};

/* 803107E8-80310894 30B128 00AC+00 1/1 0/0 0/0 .text            reinitLighting__6J3DSysFv */
void J3DSys::reinitLighting() {
    GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE,
                  GX_AF_NONE);
    GXSetChanCtrl(GX_COLOR1A1, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE,
                  GX_AF_NONE);
    GXSetChanAmbColor(GX_COLOR0A0, ColorBlack);
    GXSetChanAmbColor(GX_COLOR1A1, ColorBlack);
    GXSetChanMatColor(GX_COLOR0A0, ColorWhite);
    GXSetChanMatColor(GX_COLOR1A1, ColorWhite);
}

/* 80310894-80310998 30B1D4 0104+00 1/1 0/0 0/0 .text            reinitTransform__6J3DSysFv */
void J3DSys::reinitTransform() {
    GXSetCurrentMtx(GX_PNMTX0);
    GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX2x4, GX_TG_TEX0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD1, GX_TG_MTX2x4, GX_TG_TEX1, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD2, GX_TG_MTX2x4, GX_TG_TEX2, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD3, GX_TG_MTX2x4, GX_TG_TEX3, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD4, GX_TG_MTX2x4, GX_TG_TEX4, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD5, GX_TG_MTX2x4, GX_TG_TEX5, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD6, GX_TG_MTX2x4, GX_TG_TEX6, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
    GXSetTexCoordGen2(GX_TEXCOORD7, GX_TG_MTX2x4, GX_TG_TEX7, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
}

/* 80310998-80310A3C 30B2D8 00A4+00 2/2 0/0 0/0 .text            reinitTexture__6J3DSysFv */
void J3DSys::reinitTexture() {
    GXTexObj texObj;
    GXInitTexObj(&texObj, NullTexData, 4, 4, GX_TF_IA8, GX_CLAMP, GX_CLAMP, GX_FALSE);
    GXLoadTexObj(&texObj, GX_TEXMAP0);
    GXLoadTexObj(&texObj, GX_TEXMAP1);
    GXLoadTexObj(&texObj, GX_TEXMAP2);
    GXLoadTexObj(&texObj, GX_TEXMAP3);
    GXLoadTexObj(&texObj, GX_TEXMAP4);
    GXLoadTexObj(&texObj, GX_TEXMAP5);
    GXLoadTexObj(&texObj, GX_TEXMAP6);
    GXLoadTexObj(&texObj, GX_TEXMAP7);
}

/* 80310A3C-80310D44 30B37C 0308+00 1/1 0/0 0/0 .text            reinitTevStages__6J3DSysFv */
void J3DSys::reinitTevStages() {
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE2, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE3, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE4, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE5, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE6, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE7, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE8, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE9, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE10, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE11, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE12, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE13, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE14, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
    GXSetTevOrder(GX_TEVSTAGE15, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);

    GXSetTevColor(GX_TEVREG0, ColorWhite);
    GXSetTevColor(GX_TEVREG1, ColorWhite);
    GXSetTevColor(GX_TEVREG2, ColorWhite);
    GXSetTevKColor(GX_KCOLOR0, ColorWhite);
    GXSetTevKColor(GX_KCOLOR1, ColorWhite);
    GXSetTevKColor(GX_KCOLOR2, ColorWhite);
    GXSetTevKColor(GX_KCOLOR3, ColorWhite);

    for (u32 i = 0; i < GX_MAX_TEVSTAGE; i++) {
        GXSetTevColorIn((GXTevStageID)i, GX_CC_RASC, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO);
        GXSetTevColorOp((GXTevStageID)i, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE,
                        GX_TEVPREV);
        GXSetTevAlphaIn((GXTevStageID)i, GX_CA_RASA, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO);
        GXSetTevAlphaOp((GXTevStageID)i, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE,
                        GX_TEVPREV);
        GXSetTevKColorSel((GXTevStageID)i, GX_TEV_KCSEL_1_4);
        GXSetTevKAlphaSel((GXTevStageID)i, GX_TEV_KASEL_1);
        GXSetTevSwapMode((GXTevStageID)i, GX_TEV_SWAP0, GX_TEV_SWAP0);
    }

    GXSetTevSwapModeTable(GX_TEV_SWAP0, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
    GXSetTevSwapModeTable(GX_TEV_SWAP1, GX_CH_RED, GX_CH_RED, GX_CH_RED, GX_CH_ALPHA);
    GXSetTevSwapModeTable(GX_TEV_SWAP2, GX_CH_GREEN, GX_CH_GREEN, GX_CH_GREEN, GX_CH_ALPHA);
    GXSetTevSwapModeTable(GX_TEV_SWAP3, GX_CH_BLUE, GX_CH_BLUE, GX_CH_BLUE, GX_CH_ALPHA);
    GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_ALWAYS, 0);
}

/* ############################################################################################## */
/* 803CD8E0-803CD8F8 02AA00 0018+00 1/1 0/0 0/0 .data            IndMtx */
SECTION_DATA static Mtx23 IndMtx = {0.5f, 0.0f, 0.0f, 0.0f, 0.5f, 0.0f};

/* 80310D44-80310E3C 30B684 00F8+00 1/1 0/0 0/0 .text            reinitIndStages__6J3DSysFv */
void J3DSys::reinitIndStages() {
    for (u32 i = 0; i < GX_MAX_TEVSTAGE; i++) {
        GXSetTevDirect((GXTevStageID)i);
    }

    GXSetIndTexOrder(GX_INDTEXSTAGE0, GX_TEXCOORD0, GX_TEXMAP0);
    GXSetIndTexOrder(GX_INDTEXSTAGE1, GX_TEXCOORD1, GX_TEXMAP1);
    GXSetIndTexOrder(GX_INDTEXSTAGE2, GX_TEXCOORD2, GX_TEXMAP2);
    GXSetIndTexOrder(GX_INDTEXSTAGE3, GX_TEXCOORD3, GX_TEXMAP3);
    GXSetIndTexCoordScale(GX_INDTEXSTAGE0, GX_ITS_1, GX_ITS_1);
    GXSetIndTexCoordScale(GX_INDTEXSTAGE1, GX_ITS_1, GX_ITS_1);
    GXSetIndTexCoordScale(GX_INDTEXSTAGE2, GX_ITS_1, GX_ITS_1);
    GXSetIndTexCoordScale(GX_INDTEXSTAGE3, GX_ITS_1, GX_ITS_1);
    GXSetIndTexMtx(GX_ITM_0, IndMtx, 1);
    GXSetIndTexMtx(GX_ITM_1, IndMtx, 1);
    GXSetIndTexMtx(GX_ITM_2, IndMtx, 1);
}

/* 80310E3C-80310ED0 30B77C 0094+00 1/1 0/0 0/0 .text            reinitPixelProc__6J3DSysFv */
void J3DSys::reinitPixelProc() {
    GXSetBlendMode(GX_BM_NONE, GX_BL_SRC_ALPHA, GX_BL_INV_SRC_ALPHA, GX_LO_CLEAR);
    GXSetColorUpdate(GX_TRUE);
    GXSetAlphaUpdate(GX_FALSE);
    GXSetDither(GX_TRUE);
    GXSetFog(GX_FOG_NONE, 0.0f, 1.0f, 0.1f, 1.0f, ColorBlack);
    GXSetFogRangeAdj(GX_FALSE, 0, NULL);
    GXSetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE);
    GXSetZCompLoc(GX_TRUE);
}

/* ############################################################################################## */
/* 80451598-804515A0 000A98 0004+04 0/0 1/1 0/0 .sbss            j3dDefaultViewNo */
extern u8 j3dDefaultViewNo[4 + 4 /* padding */];
u8 j3dDefaultViewNo[4 + 4 /* padding */];
