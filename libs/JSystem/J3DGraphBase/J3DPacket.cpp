// 
// Generated By: dol2asm
// Translation Unit: J3DPacket
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/J3DGraphBase/J3DPacket.h"

// 
// Types:
// 

struct J3DVertexBuffer {
	/* 8031106C */ void setArray() const;
};

struct J3DShapePacket {
	/* 80312B20 */ J3DShapePacket();
	/* 80312B74 */ ~J3DShapePacket();
	/* 80312BD4 */ void calcDifferedBufferSize(u32);
	/* 80312DBC */ void newDifferedDisplayList(u32);
	/* 80312E08 */ void prepareDraw() const;
	/* 80312F24 */ void draw();
	/* 80312FBC */ void drawFast();
};

struct J3DShape {
	/* 80315300 */ void loadPreDrawSetting() const;
};

struct J3DDrawBuffer {
};

struct J3DPacket {
	/* 8000E680 */ ~J3DPacket();
	/* 80312750 */ bool entry(J3DDrawBuffer*);
	/* 80312758 */ void addChildPacket(J3DPacket*);
	/* 80313044 */ void draw();
};

struct J3DModelData {
	/* 803260F8 */ void syncJ3DSysFlags() const;
};

struct J3DMatPacket {
	/* 80312948 */ J3DMatPacket();
	/* 803129A4 */ ~J3DMatPacket();
	/* 80312A04 */ void addShapePacket(J3DShapePacket*);
	/* 80312A24 */ void beginDiff();
	/* 80312A4C */ void endDiff();
	/* 80312A74 */ void isSame(J3DMatPacket*) const;
	/* 80312A9C */ void draw();
	/* 80313048 */ void entry(J3DDrawBuffer*);
};

struct J3DDrawPacket {
	/* 80312778 */ J3DDrawPacket();
	/* 803127B0 */ ~J3DDrawPacket();
	/* 8031280C */ void newDisplayList(u32);
	/* 80312898 */ void newSingleDisplayList(u32);
	/* 80312924 */ void draw();
};

struct J3DDisplayListObj {
	/* 80312488 */ void newDisplayList(u32);
	/* 80312508 */ void newSingleDisplayList(u32);
	/* 8031256C */ void single_To_Double();
	/* 803125E4 */ void setSingleDisplayList(void*, u32);
	/* 80312604 */ void swapBuffer();
	/* 80312618 */ void callDL() const;
	/* 80312644 */ void beginDL();
	/* 80312698 */ void endDL();
	/* 803126F4 */ void beginPatch();
	/* 80312714 */ void endPatch();
};

// 
// Forward References:
// 

extern "C" extern void* __vt__9J3DPacket[5];
extern "C" extern u8 sGDLObj__17J3DDisplayListObj[16];

extern "C" void newDisplayList__17J3DDisplayListObjFUl();
extern "C" void newSingleDisplayList__17J3DDisplayListObjFUl();
extern "C" void single_To_Double__17J3DDisplayListObjFv();
extern "C" void setSingleDisplayList__17J3DDisplayListObjFPvUl();
extern "C" void swapBuffer__17J3DDisplayListObjFv();
extern "C" void callDL__17J3DDisplayListObjCFv();
extern "C" void beginDL__17J3DDisplayListObjFv();
extern "C" void endDL__17J3DDisplayListObjFv();
extern "C" void beginPatch__17J3DDisplayListObjFv();
extern "C" void endPatch__17J3DDisplayListObjFv();
extern "C" bool entry__9J3DPacketFP13J3DDrawBuffer();
extern "C" void addChildPacket__9J3DPacketFP9J3DPacket();
extern "C" void __ct__13J3DDrawPacketFv();
extern "C" void __dt__13J3DDrawPacketFv();
extern "C" void newDisplayList__13J3DDrawPacketFUl();
extern "C" void newSingleDisplayList__13J3DDrawPacketFUl();
extern "C" void draw__13J3DDrawPacketFv();
extern "C" void __ct__12J3DMatPacketFv();
extern "C" void __dt__12J3DMatPacketFv();
extern "C" void addShapePacket__12J3DMatPacketFP14J3DShapePacket();
extern "C" void beginDiff__12J3DMatPacketFv();
extern "C" void endDiff__12J3DMatPacketFv();
extern "C" void isSame__12J3DMatPacketCFP12J3DMatPacket();
extern "C" void draw__12J3DMatPacketFv();
extern "C" void __ct__14J3DShapePacketFv();
extern "C" void __dt__14J3DShapePacketFv();
extern "C" void calcDifferedBufferSize__14J3DShapePacketFUl();
extern "C" void newDifferedDisplayList__14J3DShapePacketFUl();
extern "C" void prepareDraw__14J3DShapePacketCFv();
extern "C" void draw__14J3DShapePacketFv();
extern "C" void drawFast__14J3DShapePacketFv();
extern "C" void draw__9J3DPacketFv();
extern "C" void entry__12J3DMatPacketFP13J3DDrawBuffer();
extern "C" extern void* __vt__9J3DPacket[5];
extern "C" extern u8 sGDLObj__17J3DDisplayListObj[16];

// 
// External References:
// 

void* operator new(u32);
void* operator new[](u32, int);
void operator delete(void*);
extern "C" extern u8 sortFuncTable__13J3DDrawBuffer[72];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 struct_804515B0[4];
extern "C" extern u8 sTexGenBlock__17J3DDifferedTexMtx[4];
extern "C" extern u8 sTexMtxObj__17J3DDifferedTexMtx[4];
extern "C" extern u8 sOldVcdVatCmd__8J3DShape[4];
extern "C" extern u8 __GDCurrentDL[4];

SECTION_INIT void memcpy();
extern "C" void __dt__9J3DPacketFv();
extern "C" void* __nw__FUl();
extern "C" void* __nwa__FUli();
extern "C" void __dl__FPv();
extern "C" void setArray__15J3DVertexBufferCFv();
extern "C" void loadPreDrawSetting__8J3DShapeCFv();
extern "C" void syncJ3DSysFlags__12J3DModelDataCFv();
extern "C" void DCStoreRange();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void GXCallDisplayList();
extern "C" void GDInitGDLObj();
extern "C" void GDFlushCurrToMem();
extern "C" void GDPadCurr32();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern u8 sortFuncTable__13J3DDrawBuffer[72];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 struct_804515B0[4];
extern "C" extern u8 sTexGenBlock__17J3DDifferedTexMtx[4];
extern "C" extern u8 sTexMtxObj__17J3DDifferedTexMtx[4];
extern "C" extern u8 sOldVcdVatCmd__8J3DShape[4];
extern "C" extern u8 __GDCurrentDL[4];

// 
// Declarations:
// 

/* 80312488-80312508 0080+00 s=1 e=1 z=0  None .text      newDisplayList__17J3DDisplayListObjFUl                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDisplayListObj::newDisplayList(u32 param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/newDisplayList__17J3DDisplayListObjFUl.s"
}
#pragma pop


/* 80312508-8031256C 0064+00 s=1 e=1 z=0  None .text      newSingleDisplayList__17J3DDisplayListObjFUl                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDisplayListObj::newSingleDisplayList(u32 param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/newSingleDisplayList__17J3DDisplayListObjFUl.s"
}
#pragma pop


/* 8031256C-803125E4 0078+00 s=0 e=1 z=0  None .text      single_To_Double__17J3DDisplayListObjFv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDisplayListObj::single_To_Double() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/single_To_Double__17J3DDisplayListObjFv.s"
}
#pragma pop


/* 803125E4-80312604 0020+00 s=0 e=1 z=0  None .text      setSingleDisplayList__17J3DDisplayListObjFPvUl               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDisplayListObj::setSingleDisplayList(void* param_0, u32 param_1) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/setSingleDisplayList__17J3DDisplayListObjFPvUl.s"
}
#pragma pop


/* 80312604-80312618 0014+00 s=1 e=0 z=0  None .text      swapBuffer__17J3DDisplayListObjFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDisplayListObj::swapBuffer() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/swapBuffer__17J3DDisplayListObjFv.s"
}
#pragma pop


/* 80312618-80312644 002C+00 s=3 e=4 z=1  None .text      callDL__17J3DDisplayListObjCFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDisplayListObj::callDL() const {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/callDL__17J3DDisplayListObjCFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80434C70-80434C80 0010+00 s=2 e=3 z=0  None .bss       sGDLObj__17J3DDisplayListObj                                 */
u8 sGDLObj__17J3DDisplayListObj[16];

/* 804515A0-804515A8 0004+04 s=3 e=0 z=0  None .sbss      sInterruptFlag__17J3DDisplayListObj                          */
static u8 sInterruptFlag__17J3DDisplayListObj[4 + 4 /* padding */];

/* 80312644-80312698 0054+00 s=2 e=1 z=0  None .text      beginDL__17J3DDisplayListObjFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDisplayListObj::beginDL() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/beginDL__17J3DDisplayListObjFv.s"
}
#pragma pop


/* 80312698-803126F4 005C+00 s=1 e=1 z=0  None .text      endDL__17J3DDisplayListObjFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDisplayListObj::endDL() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/endDL__17J3DDisplayListObjFv.s"
}
#pragma pop


/* 803126F4-80312714 0020+00 s=0 e=1 z=0  None .text      beginPatch__17J3DDisplayListObjFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDisplayListObj::beginPatch() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/beginPatch__17J3DDisplayListObjFv.s"
}
#pragma pop


/* 80312714-80312750 003C+00 s=0 e=1 z=0  None .text      endPatch__17J3DDisplayListObjFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDisplayListObj::endPatch() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/endPatch__17J3DDisplayListObjFv.s"
}
#pragma pop


/* 80312750-80312758 0008+00 s=3 e=16 z=10  None .text      entry__9J3DPacketFP13J3DDrawBuffer                           */
bool J3DPacket::entry(J3DDrawBuffer* param_0) {
	return true;
}


/* 80312758-80312778 0020+00 s=0 e=2 z=0  None .text      addChildPacket__9J3DPacketFP9J3DPacket                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DPacket::addChildPacket(J3DPacket* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/addChildPacket__9J3DPacketFP9J3DPacket.s"
}
#pragma pop


/* ############################################################################################## */
/* 803CD900-803CD920 0020+00 s=1 e=0 z=0  None .data      sDifferedRegister                                            */
SECTION_DATA static u8 sDifferedRegister[32] = {
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00,
	0x10, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
};

/* 803CD920-803CD940 0020+00 s=1 e=0 z=0  None .data      sSizeOfDiffered                                              */
SECTION_DATA static u8 sSizeOfDiffered[32] = {
	0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x78,
	0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x2D,
};

/* 803CD940-803CD954 0014+00 s=2 e=0 z=0  None .data      __vt__14J3DShapePacket                                       */
SECTION_DATA static void* __vt__14J3DShapePacket[5] = {
	(void*)NULL,
	(void*)NULL,
	(void*)entry__9J3DPacketFP13J3DDrawBuffer,
	(void*)draw__14J3DShapePacketFv,
	(void*)__dt__14J3DShapePacketFv,
};

/* 803CD954-803CD968 0014+00 s=2 e=0 z=0  None .data      __vt__12J3DMatPacket                                         */
SECTION_DATA static void* __vt__12J3DMatPacket[5] = {
	(void*)NULL,
	(void*)NULL,
	(void*)entry__12J3DMatPacketFP13J3DDrawBuffer,
	(void*)draw__12J3DMatPacketFv,
	(void*)__dt__12J3DMatPacketFv,
};

/* 803CD968-803CD97C 0014+00 s=2 e=0 z=0  None .data      __vt__13J3DDrawPacket                                        */
SECTION_DATA static void* __vt__13J3DDrawPacket[5] = {
	(void*)NULL,
	(void*)NULL,
	(void*)entry__9J3DPacketFP13J3DDrawBuffer,
	(void*)draw__13J3DDrawPacketFv,
	(void*)__dt__13J3DDrawPacketFv,
};

/* 803CD97C-803CD990 0014+00 s=2 e=34 z=23  None .data      __vt__9J3DPacket                                             */
SECTION_DATA void* __vt__9J3DPacket[5] = {
	(void*)NULL,
	(void*)NULL,
	(void*)entry__9J3DPacketFP13J3DDrawBuffer,
	(void*)draw__9J3DPacketFv,
	(void*)__dt__9J3DPacketFv,
};

/* 80312778-803127B0 0038+00 s=2 e=0 z=0  None .text      __ct__13J3DDrawPacketFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DDrawPacket::J3DDrawPacket() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/__ct__13J3DDrawPacketFv.s"
}
#pragma pop


/* 803127B0-8031280C 005C+00 s=3 e=0 z=0  None .text      __dt__13J3DDrawPacketFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DDrawPacket::~J3DDrawPacket() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/__dt__13J3DDrawPacketFv.s"
}
#pragma pop


/* 8031280C-80312898 008C+00 s=1 e=1 z=0  None .text      newDisplayList__13J3DDrawPacketFUl                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDrawPacket::newDisplayList(u32 param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/newDisplayList__13J3DDrawPacketFUl.s"
}
#pragma pop


/* 80312898-80312924 008C+00 s=0 e=1 z=0  None .text      newSingleDisplayList__13J3DDrawPacketFUl                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDrawPacket::newSingleDisplayList(u32 param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/newSingleDisplayList__13J3DDrawPacketFUl.s"
}
#pragma pop


/* 80312924-80312948 0024+00 s=1 e=0 z=0  None .text      draw__13J3DDrawPacketFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DDrawPacket::draw() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/draw__13J3DDrawPacketFv.s"
}
#pragma pop


/* 80312948-803129A4 005C+00 s=0 e=1 z=0  None .text      __ct__12J3DMatPacketFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DMatPacket::J3DMatPacket() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/__ct__12J3DMatPacketFv.s"
}
#pragma pop


/* 803129A4-80312A04 0060+00 s=1 e=1 z=0  None .text      __dt__12J3DMatPacketFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DMatPacket::~J3DMatPacket() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/__dt__12J3DMatPacketFv.s"
}
#pragma pop


/* 80312A04-80312A24 0020+00 s=0 e=3 z=0  None .text      addShapePacket__12J3DMatPacketFP14J3DShapePacket             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMatPacket::addShapePacket(J3DShapePacket* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/addShapePacket__12J3DMatPacketFP14J3DShapePacket.s"
}
#pragma pop


/* 80312A24-80312A4C 0028+00 s=0 e=1 z=0  None .text      beginDiff__12J3DMatPacketFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMatPacket::beginDiff() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/beginDiff__12J3DMatPacketFv.s"
}
#pragma pop


/* 80312A4C-80312A74 0028+00 s=0 e=1 z=0  None .text      endDiff__12J3DMatPacketFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMatPacket::endDiff() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/endDiff__12J3DMatPacketFv.s"
}
#pragma pop


/* 80312A74-80312A9C 0028+00 s=0 e=1 z=0  None .text      isSame__12J3DMatPacketCFP12J3DMatPacket                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMatPacket::isSame(J3DMatPacket* param_0) const {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/isSame__12J3DMatPacketCFP12J3DMatPacket.s"
}
#pragma pop


/* 80312A9C-80312B20 0084+00 s=1 e=0 z=0  None .text      draw__12J3DMatPacketFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMatPacket::draw() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/draw__12J3DMatPacketFv.s"
}
#pragma pop


/* 80312B20-80312B74 0054+00 s=0 e=1 z=0  None .text      __ct__14J3DShapePacketFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DShapePacket::J3DShapePacket() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/__ct__14J3DShapePacketFv.s"
}
#pragma pop


/* 80312B74-80312BD4 0060+00 s=1 e=1 z=0  None .text      __dt__14J3DShapePacketFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DShapePacket::~J3DShapePacket() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/__dt__14J3DShapePacketFv.s"
}
#pragma pop


/* 80312BD4-80312DBC 01E8+00 s=1 e=0 z=0  None .text      calcDifferedBufferSize__14J3DShapePacketFUl                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapePacket::calcDifferedBufferSize(u32 param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/calcDifferedBufferSize__14J3DShapePacketFUl.s"
}
#pragma pop


/* 80312DBC-80312E08 004C+00 s=0 e=1 z=0  None .text      newDifferedDisplayList__14J3DShapePacketFUl                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapePacket::newDifferedDisplayList(u32 param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/newDifferedDisplayList__14J3DShapePacketFUl.s"
}
#pragma pop


/* 80312E08-80312F24 011C+00 s=2 e=0 z=0  None .text      prepareDraw__14J3DShapePacketCFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapePacket::prepareDraw() const {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/prepareDraw__14J3DShapePacketCFv.s"
}
#pragma pop


/* 80312F24-80312FBC 0098+00 s=1 e=0 z=0  None .text      draw__14J3DShapePacketFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapePacket::draw() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/draw__14J3DShapePacketFv.s"
}
#pragma pop


/* 80312FBC-80313044 0088+00 s=1 e=2 z=1  None .text      drawFast__14J3DShapePacketFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapePacket::drawFast() {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/drawFast__14J3DShapePacketFv.s"
}
#pragma pop


/* 80313044-80313048 0004+00 s=1 e=0 z=0  None .text      draw__9J3DPacketFv                                           */
void J3DPacket::draw() {
	/* empty function */
}


/* 80313048-803130A8 0060+00 s=1 e=0 z=0  None .text      entry__12J3DMatPacketFP13J3DDrawBuffer                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DMatPacket::entry(J3DDrawBuffer* param_0) {
	nofralloc
#include "asm/JSystem/J3DGraphBase/J3DPacket/entry__12J3DMatPacketFP13J3DDrawBuffer.s"
}
#pragma pop


