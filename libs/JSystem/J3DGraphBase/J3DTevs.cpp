// 
// Generated By: dol2asm
// Translation Unit: J3DTevs
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/J3DGraphBase/J3DTevs.h"

// 
// Types:
// 

struct _GXTlutSize {
};

struct _GXTlutFmt {
};

struct _GXTexWrapMode {
};

struct _GXTexMtxType {
};

struct _GXTexMapID {
};

struct _GXTexGenType {
};

struct _GXTexGenSrc {
};

struct _GXTexFmt {
};

struct _GXTexFilter {
};

struct _GXLightID {
};

struct _GXColor {
};

struct _GXAnisotropy {
};

struct Vec {
};

struct J3DTextureSRTInfo {
};

struct J3DTexMtx {
	/* 803238C4 */ void load(u32) const;
	/* 80323900 */ void calc(f32 const (* )[4]);
	/* 80323920 */ void calcTexMtx(f32 const (* )[4]);
	/* 80323C0C */ void calcPostTexMtx(f32 const (* )[4]);
	/* 80324358 */ void loadTexMtx(u32) const;
	/* 803243BC */ void loadPostTexMtx(u32) const;
};

struct J3DTexCoord {
};

struct J3DNBTScale {
};

struct J3DLightObj {
	/* 80323590 */ void load(u32) const;
};

// 
// Forward References:
// 

void loadTexCoordGens(u32, J3DTexCoord*);
void isTexNoReg(void*);
void getTexNoReg(void*);
void loadTexNo(u32, u16 const&);
void patchTexNo_PtrToIdx(u32, u16 const&);
void loadNBTScale(J3DNBTScale&);
void makeTexCoordTable();
void makeAlphaCmpTable();
void makeZModeTable();
void makeTevSwapTable();
static void J3DGDLoadTexMtxImm(f32 (* )[4], u32, _GXTexMtxType);
static void J3DGDLoadPostTexMtxImm(f32 (* )[4], u32);
extern "C" extern u8 const j3dDefaultLightInfo[52];
extern "C" extern u8 const j3dDefaultTexCoordInfo[32];
extern "C" extern u8 const j3dDefaultTexMtxInfo[100];
extern "C" extern u8 const j3dDefaultIndTexMtxInfo[28];
extern "C" extern u8 const j3dDefaultTevStageInfo[20];
extern "C" extern u8 const j3dDefaultIndTevStageInfo[12];
extern "C" extern u8 const j3dDefaultFogInfo[44];
extern "C" extern u8 const j3dDefaultNBTScaleInfo[16];
extern "C" extern u8 j3dTevSwapTableTable[1024];
extern "C" extern u8 j3dAlphaCmpTable[768];
extern "C" extern u8 j3dZModeTable[96];
extern "C" extern u32 j3dDefaultColInfo;
extern "C" extern u32 j3dDefaultAmbInfo;
extern "C" extern u32 data_804563C8;
extern "C" extern u32 j3dDefaultTevOrderInfoNull;
extern "C" extern u32 j3dDefaultIndTexOrderNull;
extern "C" extern u32 j3dDefaultTevColor;
extern "C" extern u32 data_804563D8;
extern "C" extern u8 j3dDefaultIndTexCoordScaleInfo[4];
extern "C" extern u32 j3dDefaultTevKColor;
extern "C" extern u8 j3dDefaultTevSwapMode[4];
extern "C" extern u32 j3dDefaultTevSwapModeTable;
extern "C" extern u32 j3dDefaultBlendInfo;
extern "C" extern u8 j3dDefaultColorChanInfo[8];
extern "C" extern u8 struct_804563F8[4];
extern "C" extern u16 j3dDefaultZModeID[1 + 1 /* padding */];

extern "C" void load__11J3DLightObjCFUl();
extern "C" void loadTexCoordGens__FUlP11J3DTexCoord();
extern "C" void load__9J3DTexMtxCFUl();
extern "C" void calc__9J3DTexMtxFPA4_Cf();
extern "C" void calcTexMtx__9J3DTexMtxFPA4_Cf();
extern "C" void calcPostTexMtx__9J3DTexMtxFPA4_Cf();
extern "C" void isTexNoReg__FPv();
extern "C" void getTexNoReg__FPv();
extern "C" void loadTexNo__FUlRCUs();
extern "C" void patchTexNo_PtrToIdx__FUlRCUs();
extern "C" void loadNBTScale__FR11J3DNBTScale();
extern "C" void makeTexCoordTable__Fv();
extern "C" void makeAlphaCmpTable__Fv();
extern "C" void makeZModeTable__Fv();
extern "C" void makeTevSwapTable__Fv();
extern "C" void loadTexMtx__9J3DTexMtxCFUl();
extern "C" void loadPostTexMtx__9J3DTexMtxCFUl();
extern "C" static void J3DGDLoadTexMtxImm__FPA4_fUl13_GXTexMtxType();
extern "C" static void J3DGDLoadPostTexMtxImm__FPA4_fUl();
extern "C" extern u8 const j3dDefaultLightInfo[52];
extern "C" extern u8 const j3dDefaultTexCoordInfo[32];
extern "C" extern u8 const j3dDefaultTexMtxInfo[100];
extern "C" extern u8 const j3dDefaultIndTexMtxInfo[28];
extern "C" extern u8 const j3dDefaultTevStageInfo[20];
extern "C" extern u8 const j3dDefaultIndTevStageInfo[12];
extern "C" extern u8 const j3dDefaultFogInfo[44];
extern "C" extern u8 const j3dDefaultNBTScaleInfo[16];
extern "C" extern u8 j3dTevSwapTableTable[1024];
extern "C" extern u8 j3dAlphaCmpTable[768];
extern "C" extern u8 j3dZModeTable[96];
extern "C" extern u32 j3dDefaultColInfo;
extern "C" extern u32 j3dDefaultAmbInfo;
extern "C" extern u32 data_804563C8;
extern "C" extern u32 j3dDefaultTevOrderInfoNull;
extern "C" extern u32 j3dDefaultIndTexOrderNull;
extern "C" extern u32 j3dDefaultTevColor;
extern "C" extern u32 data_804563D8;
extern "C" extern u8 j3dDefaultIndTexCoordScaleInfo[4];
extern "C" extern u32 j3dDefaultTevKColor;
extern "C" extern u8 j3dDefaultTevSwapMode[4];
extern "C" extern u32 j3dDefaultTevSwapModeTable;
extern "C" extern u32 j3dDefaultBlendInfo;
extern "C" extern u8 j3dDefaultColorChanInfo[8];
extern "C" extern u8 struct_804563F8[4];
extern "C" extern u16 j3dDefaultZModeID[1 + 1 /* padding */];

// 
// External References:
// 

void J3DGDSetLightAttn(_GXLightID, f32, f32, f32, f32, f32, f32);
void J3DGDSetLightColor(_GXLightID, _GXColor);
void J3DGDSetLightPos(_GXLightID, f32, f32, f32);
void J3DGDSetLightDir(_GXLightID, f32, f32, f32);
void J3DGDSetTexCoordGen(_GXTexGenType, _GXTexGenSrc);
void J3DGDSetTexLookupMode(_GXTexMapID, _GXTexWrapMode, _GXTexWrapMode, _GXTexFilter, _GXTexFilter, f32, f32, f32, u8, u8, _GXAnisotropy);
void J3DGDSetTexImgAttr(_GXTexMapID, u16, u16, _GXTexFmt);
void J3DGDSetTexImgPtr(_GXTexMapID, void*);
void J3DGDSetTexImgPtrRaw(_GXTexMapID, u32);
void J3DGDSetTexTlut(_GXTexMapID, u32, _GXTlutFmt);
void J3DGDLoadTlut(void*, u32, _GXTlutSize);
void J3DGetTextureMtx(J3DTextureSRTInfo const&, Vec const&, f32 (* )[4]);
void J3DGetTextureMtxOld(J3DTextureSRTInfo const&, Vec const&, f32 (* )[4]);
void J3DGetTextureMtxMaya(J3DTextureSRTInfo const&, f32 (* )[4]);
void J3DGetTextureMtxMayaOld(J3DTextureSRTInfo const&, f32 (* )[4]);
void J3DMtxProjConcat(f32 (* )[4], f32 (* )[4], f32 (* )[4]);
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sTexCoordScaleTable__6J3DSys[64 + 4 /* padding */];
extern "C" extern u8 __GDCurrentDL[4];

extern "C" void J3DGDSetLightAttn__F10_GXLightIDffffff();
extern "C" void J3DGDSetLightColor__F10_GXLightID8_GXColor();
extern "C" void J3DGDSetLightPos__F10_GXLightIDfff();
extern "C" void J3DGDSetLightDir__F10_GXLightIDfff();
extern "C" void J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc();
extern "C" void J3DGDSetTexLookupMode__F11_GXTexMapID14_GXTexWrapMode14_GXTexWrapMode12_GXTexFilter12_GXTexFilterfffUcUc13_GXAnisotropy();
extern "C" void J3DGDSetTexImgAttr__F11_GXTexMapIDUsUs9_GXTexFmt();
extern "C" void J3DGDSetTexImgPtr__F11_GXTexMapIDPv();
extern "C" void J3DGDSetTexImgPtrRaw__F11_GXTexMapIDUl();
extern "C" void J3DGDSetTexTlut__F11_GXTexMapIDUl10_GXTlutFmt();
extern "C" void J3DGDLoadTlut__FPvUl11_GXTlutSize();
extern "C" void J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f();
extern "C" void J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f();
extern "C" void J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f();
extern "C" void J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f();
extern "C" void J3DMtxProjConcat__FPA4_fPA4_fPA4_f();
extern "C" void PSMTXConcat();
extern "C" void GDOverflowed();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sTexCoordScaleTable__6J3DSys[64 + 4 /* padding */];
extern "C" extern u8 __GDCurrentDL[4];

// 
// Declarations:
// 

/* 80323590-80323644 00B4+00 s=0 e=3 z=0  None .text      load__11J3DLightObjCFUl                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DLightObj::load(u32 param_0) const {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/load__11J3DLightObjCFUl.s"
}
#pragma pop


/* 80323644-803238C4 0280+00 s=0 e=3 z=0  None .text      loadTexCoordGens__FUlP11J3DTexCoord                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void loadTexCoordGens(u32 param_0, J3DTexCoord* param_1) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/loadTexCoordGens__FUlP11J3DTexCoord.s"
}
#pragma pop


/* 803238C4-80323900 003C+00 s=0 e=6 z=0  None .text      load__9J3DTexMtxCFUl                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DTexMtx::load(u32 param_0) const {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/load__9J3DTexMtxCFUl.s"
}
#pragma pop


/* 80323900-80323920 0020+00 s=0 e=2 z=0  None .text      calc__9J3DTexMtxFPA4_Cf                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DTexMtx::calc(f32 const (* param_0)[4]) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/calc__9J3DTexMtxFPA4_Cf.s"
}
#pragma pop


/* ############################################################################################## */
/* 803CEAC8-803CEAF8 0030+00 s=1 e=0 z=0  None .data      qMtx$1001                                                    */
SECTION_DATA static u8 qMtx_1001[48] = {
	0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CEAF8-803CEB28 0030+00 s=1 e=0 z=0  None .data      qMtx2$1002                                                   */
SECTION_DATA static u8 qMtx2_1002[48] = {
	0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CEB28-803CEB58 0030+00 s=1 e=0 z=0  None .data      @1059                                                        */
SECTION_DATA static void* lit_1059[12] = {
	(void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf)+0x2A4),
	(void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf)+0x1C8),
	(void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf)+0x20C),
	(void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf)+0x20C),
	(void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf)+0x260),
	(void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf)+0x20C),
	(void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf)+0x170),
	(void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf)+0xB0),
	(void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf)+0x48),
	(void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf)+0x48),
	(void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf)+0x108),
	(void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf)+0x48),
};

/* 80323920-80323C0C 02EC+00 s=2 e=0 z=0  None .text      calcTexMtx__9J3DTexMtxFPA4_Cf                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DTexMtx::calcTexMtx(f32 const (* param_0)[4]) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/calcTexMtx__9J3DTexMtxFPA4_Cf.s"
}
#pragma pop


/* ############################################################################################## */
/* 803CEB58-803CEB88 0030+00 s=1 e=0 z=0  None .data      qMtx$1063                                                    */
SECTION_DATA static u8 qMtx_1063[48] = {
	0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CEB88-803CEBB8 0030+00 s=1 e=0 z=0  None .data      qMtx2$1064                                                   */
SECTION_DATA static u8 qMtx2_1064[48] = {
	0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CEBB8-803CEBE8 0030+00 s=1 e=0 z=0  None .data      @1131                                                        */
SECTION_DATA static void* lit_1131[12] = {
	(void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf)+0x310),
	(void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf)+0x200),
	(void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf)+0x234),
	(void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf)+0x288),
	(void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf)+0x2CC),
	(void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf)+0x234),
	(void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf)+0x1B8),
	(void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf)+0x108),
	(void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf)+0x48),
	(void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf)+0xB0),
	(void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf)+0x150),
	(void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf)+0x48),
};

/* 80323C0C-80323F64 0358+00 s=1 e=2 z=0  None .text      calcPostTexMtx__9J3DTexMtxFPA4_Cf                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DTexMtx::calcPostTexMtx(f32 const (* param_0)[4]) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/calcPostTexMtx__9J3DTexMtxFPA4_Cf.s"
}
#pragma pop


/* 80323F64-80323F88 0024+00 s=0 e=1 z=0  None .text      isTexNoReg__FPv                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void isTexNoReg(void* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/isTexNoReg__FPv.s"
}
#pragma pop


/* 80323F88-80323F94 000C+00 s=0 e=1 z=0  None .text      getTexNoReg__FPv                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void getTexNoReg(void* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/getTexNoReg__FPv.s"
}
#pragma pop


/* ############################################################################################## */
/* 804563B0-804563B4 0004+00 s=1 e=0 z=0  None .sdata2    @1167                                                        */
SECTION_SDATA2 static u32 lit_1167 = 0x3E000000;

/* 804563B4-804563B8 0004+00 s=1 e=0 z=0  None .sdata2    @1168                                                        */
SECTION_SDATA2 static u32 lit_1168 = 0x3C23D70A;

/* 804563B8-804563C0 0008+00 s=1 e=0 z=0  None .sdata2    @1171                                                        */
SECTION_SDATA2 static u8 lit_1171[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80323F94-8032413C 01A8+00 s=0 e=20 z=0  None .text      loadTexNo__FUlRCUs                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void loadTexNo(u32 param_0, u16 const& param_1) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/loadTexNo__FUlRCUs.s"
}
#pragma pop


/* 8032413C-80324160 0024+00 s=0 e=2 z=0  None .text      patchTexNo_PtrToIdx__FUlRCUs                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void patchTexNo_PtrToIdx(u32 param_0, u16 const& param_1) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/patchTexNo_PtrToIdx__FUlRCUs.s"
}
#pragma pop


/* 80324160-80324194 0034+00 s=0 e=2 z=0  None .text      loadNBTScale__FR11J3DNBTScale                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void loadNBTScale(J3DNBTScale& param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/loadNBTScale__FR11J3DNBTScale.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A1EC8-803A1EFC 0034+00 s=0 e=9 z=24  None .rodata    j3dDefaultLightInfo                                          */
SECTION_RODATA u8 const j3dDefaultLightInfo[52] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xBF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

/* 803A1EFC-803A1F1C 0020+00 s=0 e=5 z=0  None .rodata    j3dDefaultTexCoordInfo                                       */
SECTION_RODATA u8 const j3dDefaultTexCoordInfo[32] = {
	0x01, 0x04, 0x3C, 0x00, 0x01, 0x05, 0x3C, 0x00, 0x01, 0x06, 0x3C, 0x00, 0x01, 0x07, 0x3C, 0x00,
	0x01, 0x08, 0x3C, 0x00, 0x01, 0x09, 0x3C, 0x00, 0x01, 0x0A, 0x3C, 0x00, 0x01, 0x0B, 0x3C, 0x00,
};

/* 803A1F1C-803A1F80 0064+00 s=0 e=1 z=0  None .rodata    j3dDefaultTexMtxInfo                                         */
SECTION_RODATA u8 const j3dDefaultTexMtxInfo[100] = {
	0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3F, 0x80, 0x00, 0x00,
};

/* 803A1F80-803A1F9C 001C+00 s=0 e=2 z=0  None .rodata    j3dDefaultIndTexMtxInfo                                      */
SECTION_RODATA u8 const j3dDefaultIndTexMtxInfo[28] = {
	0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
};

/* 803A1F9C-803A1FB0 0014+00 s=0 e=1 z=0  None .rodata    j3dDefaultTevStageInfo                                       */
SECTION_RODATA u8 const j3dDefaultTevStageInfo[20] = {
	0x04, 0x0A, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x05, 0x07, 0x07, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x00, 0x00,
};

/* 803A1FB0-803A1FBC 000C+00 s=0 e=2 z=0  None .rodata    j3dDefaultIndTevStageInfo                                    */
SECTION_RODATA u8 const j3dDefaultIndTevStageInfo[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803A1FBC-803A1FE8 002C+00 s=0 e=3 z=0  None .rodata    j3dDefaultFogInfo                                            */
SECTION_RODATA u8 const j3dDefaultFogInfo[44] = {
	0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3D, 0xCC, 0xCC, 0xCD,
	0x46, 0x1C, 0x40, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803A1FE8-803A1FF8 0010+00 s=0 e=3 z=0  None .rodata    j3dDefaultNBTScaleInfo                                       */
SECTION_RODATA u8 const j3dDefaultNBTScaleInfo[16] = {
	0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};

/* 803A1FF8-803A2008 000B+05 s=1 e=0 z=0  None .rodata    @1197                                                        */
SECTION_RODATA static u8 const lit_1197[11 + 5 /* padding */] = {
	0x1E, 0x21, 0x24, 0x27, 0x2A, 0x2D, 0x30, 0x33, 0x36, 0x39, 0x3C,
	/* padding */
	0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80434C98-80436A60 1DC7+01 s=1 e=0 z=0  None .bss       j3dTexCoordTable                                             */
static u8 j3dTexCoordTable[7623 + 1 /* padding */];

/* 80324194-8032423C 00A8+00 s=0 e=1 z=0  None .text      makeTexCoordTable__Fv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void makeTexCoordTable() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/makeTexCoordTable__Fv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80436A60-80436E60 0400+00 s=1 e=3 z=0  None .bss       j3dTevSwapTableTable                                         */
u8 j3dTevSwapTableTable[1024];

/* 80436E60-80437160 0300+00 s=1 e=2 z=0  None .bss       j3dAlphaCmpTable                                             */
u8 j3dAlphaCmpTable[768];

/* 8032423C-803242A8 006C+00 s=0 e=1 z=0  None .text      makeAlphaCmpTable__Fv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void makeAlphaCmpTable() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/makeAlphaCmpTable__Fv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80437160-804371C0 0060+00 s=1 e=4 z=5  None .bss       j3dZModeTable                                                */
u8 j3dZModeTable[96];

/* 803242A8-80324314 006C+00 s=0 e=1 z=0  None .text      makeZModeTable__Fv                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void makeZModeTable() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/makeZModeTable__Fv.s"
}
#pragma pop


/* 80324314-80324358 0044+00 s=0 e=1 z=0  None .text      makeTevSwapTable__Fv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void makeTevSwapTable() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/makeTevSwapTable__Fv.s"
}
#pragma pop


/* 80324358-803243BC 0064+00 s=1 e=0 z=0  None .text      loadTexMtx__9J3DTexMtxCFUl                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DTexMtx::loadTexMtx(u32 param_0) const {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/loadTexMtx__9J3DTexMtxCFUl.s"
}
#pragma pop


/* 803243BC-8032441C 0060+00 s=1 e=0 z=0  None .text      loadPostTexMtx__9J3DTexMtxCFUl                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DTexMtx::loadPostTexMtx(u32 param_0) const {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/loadPostTexMtx__9J3DTexMtxCFUl.s"
}
#pragma pop


/* 8032441C-8032499C 0580+00 s=1 e=0 z=0  None .text      J3DGDLoadTexMtxImm__FPA4_fUl13_GXTexMtxType                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void J3DGDLoadTexMtxImm(f32 (* param_0)[4], u32 param_1, _GXTexMtxType param_2) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/J3DGDLoadTexMtxImm__FPA4_fUl13_GXTexMtxType.s"
}
#pragma pop


/* 8032499C-80324F08 056C+00 s=1 e=0 z=0  None .text      J3DGDLoadPostTexMtxImm__FPA4_fUl                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void J3DGDLoadPostTexMtxImm(f32 (* param_0)[4], u32 param_1) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/J3DGDLoadPostTexMtxImm__FPA4_fUl.s"
}
#pragma pop


/* ############################################################################################## */
/* 804563C0-804563C4 0004+00 s=0 e=4 z=0  None .sdata2    j3dDefaultColInfo                                            */
SECTION_SDATA2 u32 j3dDefaultColInfo = 0xFFFFFFFF;

/* 804563C4-804563C8 0004+00 s=0 e=2 z=0  None .sdata2    j3dDefaultAmbInfo                                            */
SECTION_SDATA2 u32 j3dDefaultAmbInfo = 0x32323232;

/* 804563C8-804563CC 0004+00 s=0 e=1 z=0  None .sdata2    None                                                         */
SECTION_SDATA2 u32 data_804563C8 = 0x01000000;

/* 804563CC-804563D0 0004+00 s=0 e=3 z=0  None .sdata2    j3dDefaultTevOrderInfoNull                                   */
SECTION_SDATA2 u32 j3dDefaultTevOrderInfoNull = 0xFFFFFF00;

/* 804563D0-804563D4 0004+00 s=0 e=2 z=0  None .sdata2    j3dDefaultIndTexOrderNull                                    */
SECTION_SDATA2 u32 j3dDefaultIndTexOrderNull = 0xFFFF0000;

/* 804563D4-804563D8 0004+00 s=0 e=5 z=0  None .sdata2    j3dDefaultTevColor                                           */
SECTION_SDATA2 u32 j3dDefaultTevColor = 0x00FF00FF;

/* 804563D8-804563DC 0004+00 s=0 e=5 z=0  None .sdata2    None                                                         */
SECTION_SDATA2 u32 data_804563D8 = 0x00FF00FF;

/* 804563DC-804563E0 0004+00 s=0 e=2 z=0  None .sdata2    j3dDefaultIndTexCoordScaleInfo                               */
SECTION_SDATA2 u8 j3dDefaultIndTexCoordScaleInfo[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 804563E0-804563E4 0004+00 s=0 e=5 z=0  None .sdata2    j3dDefaultTevKColor                                          */
SECTION_SDATA2 u32 j3dDefaultTevKColor = 0xFFFFFFFF;

/* 804563E4-804563E8 0004+00 s=0 e=2 z=0  None .sdata2    j3dDefaultTevSwapMode                                        */
SECTION_SDATA2 u8 j3dDefaultTevSwapMode[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 804563E8-804563EC 0004+00 s=0 e=2 z=0  None .sdata2    j3dDefaultTevSwapModeTable                                   */
SECTION_SDATA2 u32 j3dDefaultTevSwapModeTable = 0x00010203;

/* 804563EC-804563F0 0004+00 s=0 e=3 z=0  None .sdata2    j3dDefaultBlendInfo                                          */
SECTION_SDATA2 u32 j3dDefaultBlendInfo = 0x01040505;

/* 804563F0-804563F8 0008+00 s=0 e=3 z=0  None .sdata2    j3dDefaultColorChanInfo                                      */
SECTION_SDATA2 u8 j3dDefaultColorChanInfo[8] = {
	0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0xFF, 0xFF,
};

/* 804563F8-804563FC 0004+00 s=0 e=2 z=0  None .sdata2    None                                                         */
SECTION_SDATA2 u8 struct_804563F8[4] = {
	/* 804563F8 0002 data_804563F8 None */
	0x1B, 0x00,
	/* 804563FA 0002 data_804563FA j3dDefaultAlphaCmpID */
	0x00, 0xE7,
};

/* 804563FC-80456400 0002+02 s=0 e=3 z=0  None .sdata2    j3dDefaultZModeID                                            */
SECTION_SDATA2 u16 j3dDefaultZModeID[1 + 1 /* padding */] = {
	0x0017,
	/* padding */
	0x0000,
};

