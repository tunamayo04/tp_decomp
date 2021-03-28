// 
// Generated By: dol2asm
// Translation Unit: J2DWindowEx
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/J2DGraph/J2DWindowEx.h"

// 
// Types:
// 

struct _GXCullMode {
};

struct _GXColor {
};

struct ResTIMG {
};

struct ResFONT {
};

struct JUtility {
	struct TColor {
	};

};

struct JSUStreamSeekFrom {
};

struct JSURandomInputStream {
	/* 802DC458 */ void peek(void*, s32);
	/* 802DC4DC */ void seek(s32, JSUStreamSeekFrom);
};

struct JSUInputStream {
	/* 802DC298 */ void read(void*, s32);
};

struct JGeometry {
	template <typename A1>
	struct TBox2 { };
	/* TBox2<f32> */
	struct TBox2__template0 {
	};

};

struct J2DAnmTextureSRTKey {
};

struct J2DAnmTexPattern {
};

struct J2DAnmTevRegKey {
};

struct J2DAnmColor {
};

struct J2DAnmTransform {
};

struct J2DAnmVtxColor {
	/* 8030363C */ void getColor(u8, u16, _GXColor*) const;
};

struct J2DAnmVisibilityFull {
	/* 8030C048 */ void getVisibility(u16, u8*) const;
};

struct J2DWindow {
	struct TMaterial {
	};

	/* 802F9A7C */ J2DWindow();
	/* 802FA880 */ ~J2DWindow();
	/* 802FB000 */ void resize(f32, f32);
	/* 802FB1D8 */ void drawSelf(f32, f32);
	/* 802FBF98 */ s32 getTypeID() const;
};

struct J2DAnmBase {
};

struct J2DTevStage {
};

struct J2DMaterial {
	/* 802EA38C */ void setGX();
	/* 802EAB0C */ void setAnimation(J2DAnmTevRegKey*);
	/* 802EAA2C */ void setAnimation(J2DAnmTexPattern*);
	/* 802EA94C */ void setAnimation(J2DAnmTextureSRTKey*);
	/* 802EA89C */ void setAnimation(J2DAnmColor*);
};

struct J2DPane {
	/* 80053BC0 */ void calcMtx();
	/* 80053C00 */ void makeMatrix(f32, f32);
	/* 802F7540 */ void makeMatrix(f32, f32, f32, f32);
	/* 802F6F60 */ void move(f32, f32);
	/* 802F6FB4 */ void add(f32, f32);
	/* 802F7264 */ void clip(JGeometry::TBox2<f32> const&);
	/* 802F72E0 */ void search(u64);
	/* 802F7388 */ void searchUserInfo(u64);
	/* 802F7430 */ void isUsed(ResTIMG const*);
	/* 802F74B8 */ void isUsed(ResFONT const*);
	/* 802F7680 */ void setCullBack(_GXCullMode);
	/* 802F7AFC */ void getParentPane();
	/* 802F7B18 */ void makePaneExStream(J2DPane*, JSURandomInputStream*);
	/* 802F7EF4 */ void setAnimation(J2DAnmBase*);
	/* 802F8004 */ void clearAnmTransform();
	/* 802F8080 */ void animationTransform(J2DAnmTransform const*);
	/* 802F8118 */ void setVisibileAnimation(J2DAnmVisibilityFull*);
	/* 802F81A0 */ void setVtxColorAnimation(J2DAnmVtxColor*);
	/* 802F8228 */ void animationPane(J2DAnmTransform const*);
	/* 802F83D0 */ void setAnimationVF(J2DAnmVisibilityFull*);
	/* 802F83FC */ void setAnimationVC(J2DAnmVtxColor*);
	/* 802F8464 */ void setConnectParent(bool);
	/* 802F8474 */ void update();
};

struct J2DWindowEx {
	struct stage_enum {
	};

	/* 8030327C */ void setAnimation(J2DAnmVtxColor*);
	/* 80303084 */ void setAnimation(J2DAnmTextureSRTKey*);
	/* 80256084 */ void setAnimation(J2DAnmTransform*);
	/* 8030310C */ void setAnimation(J2DAnmTexPattern*);
	/* 80303194 */ void setAnimation(J2DAnmTevRegKey*);
	/* 8030361C */ void setAnimation(J2DAnmBase*);
	/* 80303274 */ void setAnimation(J2DAnmVisibilityFull*);
	/* 80302FFC */ void setAnimation(J2DAnmColor*);
	/* 80300C94 */ J2DWindowEx(J2DPane*, JSURandomInputStream*, u32, J2DMaterial*);
	/* 80300F80 */ void setMinSize();
	/* 80301144 */ ~J2DWindowEx();
	/* 8030122C */ void drawSelf(f32, f32, f32 (* )[3][4]);
	/* 803012CC */ void draw_private(JGeometry::TBox2<f32> const&, JGeometry::TBox2<f32> const&);
	/* 80301994 */ void drawContents(JGeometry::TBox2<f32> const&);
	/* 80301D74 */ void drawFrameTexture(f32, f32, f32, f32, u16, u16, u16, u16, J2DMaterial*, bool);
	/* 80301FC8 */ void draw(JGeometry::TBox2<f32> const&);
	/* 80302164 */ void draw(JGeometry::TBox2<f32> const&, JGeometry::TBox2<f32> const&);
	/* 80303568 */ void draw(f32, f32, f32, f32);
	/* 80302284 */ void setTevOrder(bool);
	/* 80302388 */ void setTevStage(bool);
	/* 803024B4 */ void setStage(J2DTevStage*, J2DWindowEx::stage_enum);
	/* 80302764 */ void setBlack(JUtility::TColor);
	/* 803027EC */ void setWhite(JUtility::TColor);
	/* 80302874 */ void setBlackWhite(JUtility::TColor, JUtility::TColor);
	/* 80302A4C */ void getBlackWhite(JUtility::TColor*, JUtility::TColor*) const;
	/* 80302BE8 */ void isSetBlackWhite(JUtility::TColor, JUtility::TColor) const;
	/* 80302C88 */ void getBlack() const;
	/* 80302CE8 */ void getWhite() const;
	/* 80302D48 */ void setAlpha(u8);
	/* 80302D98 */ void setCullBack(_GXCullMode);
	/* 803035C0 */ void setCullBack(bool);
	/* 80302DF4 */ void rewriteAlpha();
	/* 80302E0C */ void getFrameTexture(u8, u8) const;
	/* 80302E74 */ void getContentsTexture(u8) const;
	/* 803035FC */ void isUsed(ResFONT const*);
	/* 80302EDC */ void isUsed(ResTIMG const*);
	/* 8030321C */ void isNeedSetAnm(u8);
	/* 80303370 */ void animationPane(J2DAnmTransform const*);
	/* 80303510 */ void getFrameMaterial(u8) const;
	/* 80303534 */ void getContentsMaterial() const;
	/* 8030353C */ void getMaterial(J2DWindow::TMaterial&) const;
};

// 
// Forward References:
// 

extern "C" extern u8 const lit_1557[16];
extern "C" extern u8 const lit_1566[16];
extern "C" extern u8 const lit_1575[16];
extern "C" extern u8 const lit_1581[16];
extern "C" extern u8 const lit_1587[16];
extern "C" extern u8 const lit_1596[16];
extern "C" extern u8 const lit_1605[16];
extern "C" extern u8 const lit_1612[16];
extern "C" extern u8 const lit_2530[24];
extern "C" extern u8 const lit_2531[24];
extern "C" extern u8 const lit_2532[30 + 2 /* padding */];

extern "C" void __ct__11J2DWindowExFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial();
extern "C" void setMinSize__11J2DWindowExFv();
extern "C" void __dt__11J2DWindowExFv();
extern "C" void drawSelf__11J2DWindowExFffPA3_A4_f();
extern "C" void func_803012CC();
extern "C" void func_80301994();
extern "C" void drawFrameTexture__11J2DWindowExFffffUsUsUsUsP11J2DMaterialb();
extern "C" void func_80301FC8();
extern "C" void func_80302164();
extern "C" void setTevOrder__11J2DWindowExFb();
extern "C" void setTevStage__11J2DWindowExFb();
extern "C" void setStage__11J2DWindowExFP11J2DTevStageQ211J2DWindowEx10stage_enum();
extern "C" void setBlack__11J2DWindowExFQ28JUtility6TColor();
extern "C" void setWhite__11J2DWindowExFQ28JUtility6TColor();
extern "C" void setBlackWhite__11J2DWindowExFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void getBlackWhite__11J2DWindowExCFPQ28JUtility6TColorPQ28JUtility6TColor();
extern "C" void isSetBlackWhite__11J2DWindowExCFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void getBlack__11J2DWindowExCFv();
extern "C" void getWhite__11J2DWindowExCFv();
extern "C" void setAlpha__11J2DWindowExFUc();
extern "C" void setCullBack__11J2DWindowExF11_GXCullMode();
extern "C" void rewriteAlpha__11J2DWindowExFv();
extern "C" void getFrameTexture__11J2DWindowExCFUcUc();
extern "C" void getContentsTexture__11J2DWindowExCFUc();
extern "C" void isUsed__11J2DWindowExFPC7ResTIMG();
extern "C" void setAnimation__11J2DWindowExFP11J2DAnmColor();
extern "C" void setAnimation__11J2DWindowExFP19J2DAnmTextureSRTKey();
extern "C" void setAnimation__11J2DWindowExFP16J2DAnmTexPattern();
extern "C" void setAnimation__11J2DWindowExFP15J2DAnmTevRegKey();
extern "C" void isNeedSetAnm__11J2DWindowExFUc();
extern "C" void setAnimation__11J2DWindowExFP20J2DAnmVisibilityFull();
extern "C" void setAnimation__11J2DWindowExFP14J2DAnmVtxColor();
extern "C" void animationPane__11J2DWindowExFPC15J2DAnmTransform();
extern "C" void getFrameMaterial__11J2DWindowExCFUc();
extern "C" void getContentsMaterial__11J2DWindowExCFv();
extern "C" void getMaterial__11J2DWindowExCFRQ29J2DWindow9TMaterial();
extern "C" void draw__11J2DWindowExFffff();
extern "C" void setCullBack__11J2DWindowExFb();
extern "C" void isUsed__11J2DWindowExFPC7ResFONT();
extern "C" void setAnimation__11J2DWindowExFP10J2DAnmBase();
extern "C" void getColor__14J2DAnmVtxColorCFUcUsP8_GXColor();
extern "C" extern u8 const lit_1557[16];
extern "C" extern u8 const lit_1566[16];
extern "C" extern u8 const lit_1575[16];
extern "C" extern u8 const lit_1581[16];
extern "C" extern u8 const lit_1587[16];
extern "C" extern u8 const lit_1596[16];
extern "C" extern u8 const lit_1605[16];
extern "C" extern u8 const lit_1612[16];
extern "C" extern u8 const lit_2530[24];
extern "C" extern u8 const lit_2531[24];
extern "C" extern u8 const lit_2532[30 + 2 /* padding */];

// 
// External References:
// 

void operator delete(void*);

extern "C" void calcMtx__7J2DPaneFv();
extern "C" void makeMatrix__7J2DPaneFff();
extern "C" void setAnimation__11J2DWindowExFP15J2DAnmTransform();
extern "C" void __dl__FPv();
extern "C" void read__14JSUInputStreamFPvl();
extern "C" void peek__20JSURandomInputStreamFPvl();
extern "C" void seek__20JSURandomInputStreamFl17JSUStreamSeekFrom();
extern "C" void setGX__11J2DMaterialFv();
extern "C" void setAnimation__11J2DMaterialFP11J2DAnmColor();
extern "C" void setAnimation__11J2DMaterialFP19J2DAnmTextureSRTKey();
extern "C" void setAnimation__11J2DMaterialFP16J2DAnmTexPattern();
extern "C" void setAnimation__11J2DMaterialFP15J2DAnmTevRegKey();
extern "C" void move__7J2DPaneFff();
extern "C" void add__7J2DPaneFff();
extern "C" void func_802F7264();
extern "C" void search__7J2DPaneFUx();
extern "C" void searchUserInfo__7J2DPaneFUx();
extern "C" void isUsed__7J2DPaneFPC7ResTIMG();
extern "C" void isUsed__7J2DPaneFPC7ResFONT();
extern "C" void makeMatrix__7J2DPaneFffff();
extern "C" void setCullBack__7J2DPaneF11_GXCullMode();
extern "C" void getParentPane__7J2DPaneFv();
extern "C" void makePaneExStream__7J2DPaneFP7J2DPaneP20JSURandomInputStream();
extern "C" void setAnimation__7J2DPaneFP10J2DAnmBase();
extern "C" void clearAnmTransform__7J2DPaneFv();
extern "C" void animationTransform__7J2DPaneFPC15J2DAnmTransform();
extern "C" void setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull();
extern "C" void setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor();
extern "C" void animationPane__7J2DPaneFPC15J2DAnmTransform();
extern "C" void setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull();
extern "C" void setAnimationVC__7J2DPaneFP14J2DAnmVtxColor();
extern "C" void setConnectParent__7J2DPaneFb();
extern "C" void update__7J2DPaneFv();
extern "C" void __ct__9J2DWindowFv();
extern "C" void __dt__9J2DWindowFv();
extern "C" void resize__9J2DWindowFff();
extern "C" void drawSelf__9J2DWindowFff();
extern "C" s32 getTypeID__9J2DWindowCFv();
extern "C" void getVisibility__20J2DAnmVisibilityFullCFUsPUc();
extern "C" void PSMTXIdentity();
extern "C" void PSMTXConcat();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXSetNumTexGens();
extern "C" void GXBegin();
extern "C" void GXSetChanMatColor();
extern "C" void GXSetNumIndStages();
extern "C" void GXSetTevDirect();
extern "C" void GXSetTevOp();
extern "C" void GXSetTevSwapModeTable();
extern "C" void GXSetTevOrder();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXSetCurrentMtx();
extern "C" void _savegpr_20();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803A1C60-803A1C70 0010+00 s=2 e=0 z=0  None .rodata    @1508                                                        */
SECTION_RODATA static u8 const lit_1508[16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CD3E8-803CD4B8 00CC+04 s=2 e=0 z=0  None .data      __vt__11J2DWindowEx                                          */
SECTION_DATA static void* __vt__11J2DWindowEx[51 + 1 /* padding */] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__11J2DWindowExFv,
	(void*)getTypeID__9J2DWindowCFv,
	(void*)move__7J2DPaneFff,
	(void*)add__7J2DPaneFff,
	(void*)resize__9J2DWindowFff,
	(void*)setCullBack__11J2DWindowExFb,
	(void*)setCullBack__11J2DWindowExF11_GXCullMode,
	(void*)setAlpha__11J2DWindowExFUc,
	(void*)setConnectParent__7J2DPaneFb,
	(void*)calcMtx__7J2DPaneFv,
	(void*)update__7J2DPaneFv,
	(void*)drawSelf__9J2DWindowFff,
	(void*)drawSelf__11J2DWindowExFffPA3_A4_f,
	(void*)search__7J2DPaneFUx,
	(void*)searchUserInfo__7J2DPaneFUx,
	(void*)makeMatrix__7J2DPaneFff,
	(void*)makeMatrix__7J2DPaneFffff,
	(void*)isUsed__11J2DWindowExFPC7ResTIMG,
	(void*)isUsed__11J2DWindowExFPC7ResFONT,
	(void*)clearAnmTransform__7J2DPaneFv,
	(void*)rewriteAlpha__11J2DWindowExFv,
	(void*)setAnimation__11J2DWindowExFP10J2DAnmBase,
	(void*)setAnimation__11J2DWindowExFP15J2DAnmTransform,
	(void*)setAnimation__11J2DWindowExFP11J2DAnmColor,
	(void*)setAnimation__11J2DWindowExFP16J2DAnmTexPattern,
	(void*)setAnimation__11J2DWindowExFP19J2DAnmTextureSRTKey,
	(void*)setAnimation__11J2DWindowExFP15J2DAnmTevRegKey,
	(void*)setAnimation__11J2DWindowExFP20J2DAnmVisibilityFull,
	(void*)setAnimation__11J2DWindowExFP14J2DAnmVtxColor,
	(void*)animationTransform__7J2DPaneFPC15J2DAnmTransform,
	(void*)setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull,
	(void*)setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull,
	(void*)setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor,
	(void*)setAnimationVC__7J2DPaneFP14J2DAnmVtxColor,
	(void*)animationPane__11J2DWindowExFPC15J2DAnmTransform,
	(void*)func_80301FC8,
	(void*)func_80302164,
	(void*)draw__11J2DWindowExFffff,
	(void*)setBlack__11J2DWindowExFQ28JUtility6TColor,
	(void*)setWhite__11J2DWindowExFQ28JUtility6TColor,
	(void*)setBlackWhite__11J2DWindowExFQ28JUtility6TColorQ28JUtility6TColor,
	(void*)getBlack__11J2DWindowExCFv,
	(void*)getWhite__11J2DWindowExCFv,
	(void*)getFrameTexture__11J2DWindowExCFUcUc,
	(void*)getContentsTexture__11J2DWindowExCFUc,
	(void*)getMaterial__11J2DWindowExCFRQ29J2DWindow9TMaterial,
	(void*)getFrameMaterial__11J2DWindowExCFUc,
	(void*)getContentsMaterial__11J2DWindowExCFv,
	(void*)func_80301994,
	/* padding */
	NULL,
};

/* 804562A0-804562A8 0008+00 s=4 e=0 z=0  None .sdata2    @1549                                                        */
SECTION_SDATA2 static u8 lit_1549[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 804562A8-804562B0 0008+00 s=1 e=0 z=0  None .sdata2    @1552                                                        */
SECTION_SDATA2 static u8 lit_1552[8] = {
	0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80300C94-80300F80 02EC+00 s=0 e=1 z=0  None .text      __ct__11J2DWindowExFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DWindowEx::J2DWindowEx(J2DPane* param_0, JSURandomInputStream* param_1, u32 param_2, J2DMaterial* param_3) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/__ct__11J2DWindowExFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial.s"
}
#pragma pop


/* 80300F80-80301144 01C4+00 s=1 e=0 z=0  None .text      setMinSize__11J2DWindowExFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setMinSize() {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setMinSize__11J2DWindowExFv.s"
}
#pragma pop


/* 80301144-8030122C 00E8+00 s=1 e=0 z=0  None .text      __dt__11J2DWindowExFv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DWindowEx::~J2DWindowEx() {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/__dt__11J2DWindowExFv.s"
}
#pragma pop


/* 8030122C-803012CC 00A0+00 s=1 e=0 z=0  None .text      drawSelf__11J2DWindowExFffPA3_A4_f                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::drawSelf(f32 param_0, f32 param_1, f32 (* param_2)[3][4]) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/drawSelf__11J2DWindowExFffPA3_A4_f.s"
}
#pragma pop


/* 803012CC-80301994 06C8+00 s=2 e=0 z=0  None .text      draw_private__11J2DWindowExFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f> */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::draw_private(JGeometry::TBox2<f32> const& param_0, JGeometry::TBox2<f32> const& param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/func_803012CC.s"
}
#pragma pop


/* ############################################################################################## */
/* 804562B0-804562B4 0004+00 s=4 e=0 z=0  None .sdata2    @1827                                                        */
SECTION_SDATA2 static u8 lit_1827[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 804562B4-804562B8 0004+00 s=1 e=0 z=0  None .sdata2    @2256                                                        */
SECTION_SDATA2 static u32 lit_2256 = 0x3F800000;

/* 804562B8-804562C0 0004+04 s=1 e=0 z=0  None .sdata2    @2257                                                        */
SECTION_SDATA2 static f32 lit_2257[1 + 1 /* padding */] = {
	0.5f,
	/* padding */
	0.0f,
};

/* 80301994-80301D74 03E0+00 s=1 e=0 z=0  None .text      drawContents__11J2DWindowExFRCQ29JGeometry8TBox2<f>          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::drawContents(JGeometry::TBox2<f32> const& param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/func_80301994.s"
}
#pragma pop


/* 80301D74-80301FC8 0254+00 s=1 e=0 z=0  None .text      drawFrameTexture__11J2DWindowExFffffUsUsUsUsP11J2DMaterialb  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::drawFrameTexture(f32 param_0, f32 param_1, f32 param_2, f32 param_3, u16 param_4, u16 param_5, u16 param_6, u16 param_7, J2DMaterial* param_8, bool param_9) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/drawFrameTexture__11J2DWindowExFffffUsUsUsUsP11J2DMaterialb.s"
}
#pragma pop


/* 80301FC8-80302164 019C+00 s=1 e=0 z=0  None .text      draw__11J2DWindowExFRCQ29JGeometry8TBox2<f>                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::draw(JGeometry::TBox2<f32> const& param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/func_80301FC8.s"
}
#pragma pop


/* 80302164-80302284 0120+00 s=1 e=0 z=0  None .text      draw__11J2DWindowExFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f> */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::draw(JGeometry::TBox2<f32> const& param_0, JGeometry::TBox2<f32> const& param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/func_80302164.s"
}
#pragma pop


/* 80302284-80302388 0104+00 s=1 e=0 z=0  None .text      setTevOrder__11J2DWindowExFb                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setTevOrder(bool param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setTevOrder__11J2DWindowExFb.s"
}
#pragma pop


/* 80302388-803024B4 012C+00 s=1 e=0 z=0  None .text      setTevStage__11J2DWindowExFb                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setTevStage(bool param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setTevStage__11J2DWindowExFb.s"
}
#pragma pop


/* 803024B4-80302764 02B0+00 s=1 e=0 z=0  None .text      setStage__11J2DWindowExFP11J2DTevStageQ211J2DWindowEx10stage_enum */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setStage(J2DTevStage* param_0, J2DWindowEx::stage_enum param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setStage__11J2DWindowExFP11J2DTevStageQ211J2DWindowEx10stage_enum.s"
}
#pragma pop


/* 80302764-803027EC 0088+00 s=1 e=0 z=0  None .text      setBlack__11J2DWindowExFQ28JUtility6TColor                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setBlack(JUtility::TColor param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setBlack__11J2DWindowExFQ28JUtility6TColor.s"
}
#pragma pop


/* 803027EC-80302874 0088+00 s=1 e=0 z=0  None .text      setWhite__11J2DWindowExFQ28JUtility6TColor                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setWhite(JUtility::TColor param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setWhite__11J2DWindowExFQ28JUtility6TColor.s"
}
#pragma pop


/* 80302874-80302A4C 01D8+00 s=1 e=0 z=0  None .text      setBlackWhite__11J2DWindowExFQ28JUtility6TColorQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setBlackWhite(JUtility::TColor param_0, JUtility::TColor param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setBlackWhite__11J2DWindowExFQ28JUtility6TColorQ28JUtility6TColor.s"
}
#pragma pop


/* 80302A4C-80302BE8 019C+00 s=4 e=0 z=0  None .text      getBlackWhite__11J2DWindowExCFPQ28JUtility6TColorPQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::getBlackWhite(JUtility::TColor* param_0, JUtility::TColor* param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/getBlackWhite__11J2DWindowExCFPQ28JUtility6TColorPQ28JUtility6TColor.s"
}
#pragma pop


/* 80302BE8-80302C88 00A0+00 s=1 e=0 z=0  None .text      isSetBlackWhite__11J2DWindowExCFQ28JUtility6TColorQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::isSetBlackWhite(JUtility::TColor param_0, JUtility::TColor param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/isSetBlackWhite__11J2DWindowExCFQ28JUtility6TColorQ28JUtility6TColor.s"
}
#pragma pop


/* 80302C88-80302CE8 0060+00 s=1 e=0 z=0  None .text      getBlack__11J2DWindowExCFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::getBlack() const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/getBlack__11J2DWindowExCFv.s"
}
#pragma pop


/* 80302CE8-80302D48 0060+00 s=1 e=0 z=0  None .text      getWhite__11J2DWindowExCFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::getWhite() const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/getWhite__11J2DWindowExCFv.s"
}
#pragma pop


/* 80302D48-80302D98 0050+00 s=1 e=0 z=0  None .text      setAlpha__11J2DWindowExFUc                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setAlpha(u8 param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setAlpha__11J2DWindowExFUc.s"
}
#pragma pop


/* 80302D98-80302DF4 005C+00 s=1 e=0 z=0  None .text      setCullBack__11J2DWindowExF11_GXCullMode                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setCullBack(_GXCullMode param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setCullBack__11J2DWindowExF11_GXCullMode.s"
}
#pragma pop


/* 80302DF4-80302E0C 0018+00 s=1 e=0 z=0  None .text      rewriteAlpha__11J2DWindowExFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::rewriteAlpha() {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/rewriteAlpha__11J2DWindowExFv.s"
}
#pragma pop


/* 80302E0C-80302E74 0068+00 s=1 e=0 z=0  None .text      getFrameTexture__11J2DWindowExCFUcUc                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::getFrameTexture(u8 param_0, u8 param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/getFrameTexture__11J2DWindowExCFUcUc.s"
}
#pragma pop


/* 80302E74-80302EDC 0068+00 s=1 e=0 z=0  None .text      getContentsTexture__11J2DWindowExCFUc                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::getContentsTexture(u8 param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/getContentsTexture__11J2DWindowExCFUc.s"
}
#pragma pop


/* 80302EDC-80302FFC 0120+00 s=1 e=0 z=0  None .text      isUsed__11J2DWindowExFPC7ResTIMG                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::isUsed(ResTIMG const* param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/isUsed__11J2DWindowExFPC7ResTIMG.s"
}
#pragma pop


/* 80302FFC-80303084 0088+00 s=1 e=0 z=0  None .text      setAnimation__11J2DWindowExFP11J2DAnmColor                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setAnimation(J2DAnmColor* param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setAnimation__11J2DWindowExFP11J2DAnmColor.s"
}
#pragma pop


/* 80303084-8030310C 0088+00 s=1 e=0 z=0  None .text      setAnimation__11J2DWindowExFP19J2DAnmTextureSRTKey           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setAnimation(J2DAnmTextureSRTKey* param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setAnimation__11J2DWindowExFP19J2DAnmTextureSRTKey.s"
}
#pragma pop


/* 8030310C-80303194 0088+00 s=1 e=0 z=0  None .text      setAnimation__11J2DWindowExFP16J2DAnmTexPattern              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setAnimation(J2DAnmTexPattern* param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setAnimation__11J2DWindowExFP16J2DAnmTexPattern.s"
}
#pragma pop


/* 80303194-8030321C 0088+00 s=1 e=0 z=0  None .text      setAnimation__11J2DWindowExFP15J2DAnmTevRegKey               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setAnimation(J2DAnmTevRegKey* param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setAnimation__11J2DWindowExFP15J2DAnmTevRegKey.s"
}
#pragma pop


/* 8030321C-80303274 0058+00 s=4 e=0 z=0  None .text      isNeedSetAnm__11J2DWindowExFUc                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::isNeedSetAnm(u8 param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/isNeedSetAnm__11J2DWindowExFUc.s"
}
#pragma pop


/* 80303274-8030327C 0008+00 s=1 e=0 z=0  None .text      setAnimation__11J2DWindowExFP20J2DAnmVisibilityFull          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setAnimation(J2DAnmVisibilityFull* param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setAnimation__11J2DWindowExFP20J2DAnmVisibilityFull.s"
}
#pragma pop


/* 8030327C-80303370 00F4+00 s=1 e=0 z=0  None .text      setAnimation__11J2DWindowExFP14J2DAnmVtxColor                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setAnimation(J2DAnmVtxColor* param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setAnimation__11J2DWindowExFP14J2DAnmVtxColor.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A1C70-803A1C80 0010+00 s=0 e=0 z=0  None .rodata    @1557                                                        */
SECTION_RODATA u8 const lit_1557[16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803A1C80-803A1C90 0010+00 s=0 e=0 z=0  None .rodata    @1566                                                        */
SECTION_RODATA u8 const lit_1566[16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803A1C90-803A1CA0 0010+00 s=0 e=0 z=0  None .rodata    @1575                                                        */
SECTION_RODATA u8 const lit_1575[16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803A1CA0-803A1CB0 0010+00 s=0 e=0 z=0  None .rodata    @1581                                                        */
SECTION_RODATA u8 const lit_1581[16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803A1CB0-803A1CC0 0010+00 s=0 e=0 z=0  None .rodata    @1587                                                        */
SECTION_RODATA u8 const lit_1587[16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803A1CC0-803A1CD0 0010+00 s=0 e=0 z=0  None .rodata    @1596                                                        */
SECTION_RODATA u8 const lit_1596[16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803A1CD0-803A1CE0 0010+00 s=0 e=0 z=0  None .rodata    @1605                                                        */
SECTION_RODATA u8 const lit_1605[16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803A1CE0-803A1CF0 0010+00 s=0 e=0 z=0  None .rodata    @1612                                                        */
SECTION_RODATA u8 const lit_1612[16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803A1CF0-803A1D08 0018+00 s=0 e=0 z=0  None .rodata    @2530                                                        */
SECTION_RODATA u8 const lit_2530[24] = {
	0x0F, 0x08, 0x0A, 0x0F, 0x0F, 0x08, 0x0A, 0x0F, 0x0F, 0x0A, 0x00, 0x0F, 0x02, 0x04, 0x08, 0x0F,
	0x02, 0x04, 0x08, 0x0F, 0x0F, 0x0F, 0x0F, 0x0A,
};

/* 803A1D08-803A1D20 0018+00 s=0 e=0 z=0  None .rodata    @2531                                                        */
SECTION_RODATA u8 const lit_2531[24] = {
	0x07, 0x04, 0x05, 0x07, 0x05, 0x07, 0x07, 0x07, 0x07, 0x05, 0x00, 0x07, 0x01, 0x02, 0x04, 0x07,
	0x07, 0x07, 0x07, 0x02, 0x07, 0x07, 0x07, 0x05,
};

/* 803A1D20-803A1D40 001E+02 s=0 e=0 z=0  None .rodata    @2532                                                        */
SECTION_RODATA u8 const lit_2532[30 + 2 /* padding */] = {
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
	/* padding */
	0x00, 0x00,
};

/* 803A1D40-803A1D50 0010+00 s=1 e=0 z=0  None .rodata    @3089                                                        */
SECTION_RODATA static u8 const lit_3089[16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80303370-80303510 01A0+00 s=1 e=0 z=0  None .text      animationPane__11J2DWindowExFPC15J2DAnmTransform             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::animationPane(J2DAnmTransform const* param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/animationPane__11J2DWindowExFPC15J2DAnmTransform.s"
}
#pragma pop


/* 80303510-80303534 0024+00 s=1 e=0 z=0  None .text      getFrameMaterial__11J2DWindowExCFUc                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::getFrameMaterial(u8 param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/getFrameMaterial__11J2DWindowExCFUc.s"
}
#pragma pop


/* 80303534-8030353C 0008+00 s=1 e=0 z=0  None .text      getContentsMaterial__11J2DWindowExCFv                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::getContentsMaterial() const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/getContentsMaterial__11J2DWindowExCFv.s"
}
#pragma pop


/* 8030353C-80303568 002C+00 s=1 e=0 z=0  None .text      getMaterial__11J2DWindowExCFRQ29J2DWindow9TMaterial          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::getMaterial(J2DWindow::TMaterial& param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/getMaterial__11J2DWindowExCFRQ29J2DWindow9TMaterial.s"
}
#pragma pop


/* 80303568-803035C0 0058+00 s=1 e=0 z=0  None .text      draw__11J2DWindowExFffff                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::draw(f32 param_0, f32 param_1, f32 param_2, f32 param_3) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/draw__11J2DWindowExFffff.s"
}
#pragma pop


/* 803035C0-803035FC 003C+00 s=1 e=0 z=0  None .text      setCullBack__11J2DWindowExFb                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setCullBack(bool param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setCullBack__11J2DWindowExFb.s"
}
#pragma pop


/* 803035FC-8030361C 0020+00 s=1 e=0 z=0  None .text      isUsed__11J2DWindowExFPC7ResFONT                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::isUsed(ResFONT const* param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/isUsed__11J2DWindowExFPC7ResFONT.s"
}
#pragma pop


/* 8030361C-8030363C 0020+00 s=1 e=0 z=0  None .text      setAnimation__11J2DWindowExFP10J2DAnmBase                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setAnimation(J2DAnmBase* param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DWindowEx/setAnimation__11J2DWindowExFP10J2DAnmBase.s"
}
#pragma pop


/* 8030363C-80303640 0004+00 s=0 e=1 z=0  None .text      getColor__14J2DAnmVtxColorCFUcUsP8_GXColor                   */
void J2DAnmVtxColor::getColor(u8 param_0, u16 param_1, _GXColor* param_2) const {
	/* empty function */
}


