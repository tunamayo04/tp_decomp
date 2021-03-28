// 
// Generated By: dol2asm
// Translation Unit: J2DOrthoGraph
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/J2DGraph/J2DOrthoGraph.h"

// 
// Types:
// 

struct JUtility {
	struct TColor {
	};

};

struct JGeometry {
	template <typename A1>
	struct TBox2 { };
	/* TBox2<f32> */
	struct TBox2__template0 {
	};

	template <typename A1>
	struct TVec2 { };
	/* TVec2<f32> */
	struct TVec2__template1 {
	};

};

struct J2DOrthoGraph {
	/* 8000B118 */ ~J2DOrthoGraph();
	/* 802E9670 */ J2DOrthoGraph();
	/* 802E96D0 */ J2DOrthoGraph(f32, f32, f32, f32, f32, f32);
	/* 802E97B4 */ void setPort();
	/* 802E980C */ void setOrtho(JGeometry::TBox2<f32> const&, f32, f32);
	/* 802E9840 */ void setLookat();
	/* 802E987C */ void scissorBounds(JGeometry::TBox2<f32>*, JGeometry::TBox2<f32> const*);
	/* 802E9C88 */ bool getGrafType() const;
};

struct J2DGrafContext {
	/* 802E8B08 */ J2DGrafContext(f32, f32, f32, f32);
	/* 802E8BB4 */ void setPort();
	/* 802E8C44 */ void setup2D();
	/* 802E8E20 */ void setScissor();
	/* 802E90E4 */ void place(JGeometry::TBox2<f32> const&);
	/* 802E961C */ void place(f32, f32, f32, f32);
	/* 802E9118 */ void setColor(JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
	/* 802E9234 */ void setLineWidth(u8);
	/* 802E9260 */ void fillBox(JGeometry::TBox2<f32> const&);
	/* 802E9368 */ void drawFrame(JGeometry::TBox2<f32> const&);
	/* 802E9564 */ void lineTo(JGeometry::TVec2<f32>);
};

// 
// Forward References:
// 

void J2DDrawLine(f32, f32, f32, f32, JUtility::TColor, int);
void J2DFillBox(f32, f32, f32, f32, JUtility::TColor);
static void J2DFillBox(JGeometry::TBox2__template0 const&, JUtility::TColor);
void J2DDrawFrame(f32, f32, f32, f32, JUtility::TColor, u8);
static void J2DDrawFrame(JGeometry::TBox2__template0 const&, JUtility::TColor, u8);
extern "C" extern void* __vt__13J2DOrthoGraph[10];

extern "C" void __ct__13J2DOrthoGraphFv();
extern "C" void __ct__13J2DOrthoGraphFffffff();
extern "C" void setPort__13J2DOrthoGraphFv();
extern "C" void func_802E980C();
extern "C" void setLookat__13J2DOrthoGraphFv();
extern "C" void func_802E987C();
extern "C" void J2DDrawLine__FffffQ28JUtility6TColori();
extern "C" void J2DFillBox__FffffQ28JUtility6TColor();
extern "C" static void func_802E9B0C();
extern "C" void J2DDrawFrame__FffffQ28JUtility6TColorUc();
extern "C" static void func_802E9BE8();
extern "C" bool getGrafType__13J2DOrthoGraphCFv();
extern "C" extern void* __vt__13J2DOrthoGraph[10];

// 
// External References:
// 

extern "C" extern void* __vt__14J2DGrafContext[10];

extern "C" void __dt__13J2DOrthoGraphFv();
extern "C" void __ct__14J2DGrafContextFffff();
extern "C" void setPort__14J2DGrafContextFv();
extern "C" void setup2D__14J2DGrafContextFv();
extern "C" void setScissor__14J2DGrafContextFv();
extern "C" void func_802E90E4();
extern "C" void setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void setLineWidth__14J2DGrafContextFUc();
extern "C" void func_802E9260();
extern "C" void func_802E9368();
extern "C" void func_802E9564();
extern "C" void place__14J2DGrafContextFffff();
extern "C" void PSMTXIdentity();
extern "C" void C_MTXOrtho();
extern "C" void GXSetProjection();
extern "C" void GXLoadPosMtxImm();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__14J2DGrafContext[10];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803CC9E0-803CCA08 0028+00 s=5 e=9 z=0  None .data      __vt__13J2DOrthoGraph                                        */
SECTION_DATA void* __vt__13J2DOrthoGraph[10] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__13J2DOrthoGraphFv,
	(void*)func_802E90E4,
	(void*)place__14J2DGrafContextFffff,
	(void*)setPort__13J2DOrthoGraphFv,
	(void*)setup2D__14J2DGrafContextFv,
	(void*)setScissor__14J2DGrafContextFv,
	(void*)getGrafType__13J2DOrthoGraphCFv,
	(void*)setLookat__13J2DOrthoGraphFv,
};

/* 80456160-80456168 0004+04 s=3 e=0 z=0  None .sdata2    @522                                                         */
SECTION_SDATA2 static u8 lit_522[4 + 4 /* padding */] = {
	0x00, 0x00, 0x00, 0x00,
	/* padding */
	0x00, 0x00, 0x00, 0x00,
};

/* 802E9670-802E96D0 0060+00 s=3 e=1 z=0  None .text      __ct__13J2DOrthoGraphFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DOrthoGraph::J2DOrthoGraph() {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DOrthoGraph/__ct__13J2DOrthoGraphFv.s"
}
#pragma pop


/* 802E96D0-802E97B4 00E4+00 s=0 e=7 z=0  None .text      __ct__13J2DOrthoGraphFffffff                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DOrthoGraph::J2DOrthoGraph(f32 param_0, f32 param_1, f32 param_2, f32 param_3, f32 param_4, f32 param_5) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DOrthoGraph/__ct__13J2DOrthoGraphFffffff.s"
}
#pragma pop


/* 802E97B4-802E980C 0058+00 s=1 e=6 z=0  None .text      setPort__13J2DOrthoGraphFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DOrthoGraph::setPort() {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DOrthoGraph/setPort__13J2DOrthoGraphFv.s"
}
#pragma pop


/* 802E980C-802E9840 0034+00 s=0 e=5 z=0  None .text      setOrtho__13J2DOrthoGraphFRCQ29JGeometry8TBox2<f>ff          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DOrthoGraph::setOrtho(JGeometry::TBox2<f32> const& param_0, f32 param_1, f32 param_2) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DOrthoGraph/func_802E980C.s"
}
#pragma pop


/* 802E9840-802E987C 003C+00 s=1 e=0 z=0  None .text      setLookat__13J2DOrthoGraphFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DOrthoGraph::setLookat() {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DOrthoGraph/setLookat__13J2DOrthoGraphFv.s"
}
#pragma pop


/* 802E987C-802E9998 011C+00 s=0 e=1 z=0  None .text      scissorBounds__13J2DOrthoGraphFPQ29JGeometry8TBox2<f>PCQ29JGeometry8TBox2<f> */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DOrthoGraph::scissorBounds(JGeometry::TBox2<f32>* param_0, JGeometry::TBox2<f32> const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DOrthoGraph/func_802E987C.s"
}
#pragma pop


/* 802E9998-802E9AC4 012C+00 s=0 e=6 z=0  None .text      J2DDrawLine__FffffQ28JUtility6TColori                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DDrawLine(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor param_4, int param_5) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DOrthoGraph/J2DDrawLine__FffffQ28JUtility6TColori.s"
}
#pragma pop


/* 802E9AC4-802E9B0C 0048+00 s=0 e=10 z=0  None .text      J2DFillBox__FffffQ28JUtility6TColor                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DFillBox(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor param_4) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DOrthoGraph/J2DFillBox__FffffQ28JUtility6TColor.s"
}
#pragma pop


/* 802E9B0C-802E9B9C 0090+00 s=1 e=0 z=0  None .text      J2DFillBox__FRCQ29JGeometry8TBox2<f>Q28JUtility6TColor       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void J2DFillBox(JGeometry::TBox2<f32> const& param_0, JUtility::TColor param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DOrthoGraph/func_802E9B0C.s"
}
#pragma pop


/* 802E9B9C-802E9BE8 004C+00 s=0 e=5 z=0  None .text      J2DDrawFrame__FffffQ28JUtility6TColorUc                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DDrawFrame(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor param_4, u8 param_5) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DOrthoGraph/J2DDrawFrame__FffffQ28JUtility6TColorUc.s"
}
#pragma pop


/* 802E9BE8-802E9C88 00A0+00 s=1 e=0 z=0  None .text      J2DDrawFrame__FRCQ29JGeometry8TBox2<f>Q28JUtility6TColorUc   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void J2DDrawFrame(JGeometry::TBox2<f32> const& param_0, JUtility::TColor param_1, u8 param_2) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DOrthoGraph/func_802E9BE8.s"
}
#pragma pop


/* 802E9C88-802E9C90 0008+00 s=1 e=0 z=0  None .text      getGrafType__13J2DOrthoGraphCFv                              */
bool J2DOrthoGraph::getGrafType() const {
	return true;
}


