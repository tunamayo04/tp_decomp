// 
// Generated By: dol2asm
// Translation Unit: J2DMaterialFactory
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/J2DGraph/J2DMaterialFactory.h"

// 
// Types:
// 

struct JKRArchive {
};

struct JUTResReference {
	/* 802DE120 */ void getResource(void const*, u32, JKRArchive*);
};

struct J2DTexMtx {
	/* 802E9CC4 */ void calc();
};

struct J2DTevStageInfo {
};

struct J2DTevStage {
	/* 802F4110 */ J2DTevStage(J2DTevStageInfo const&);
	/* 802F1940 */ J2DTevStage();
	/* 802F19A8 */ void setTevStageInfo(J2DTevStageInfo const&);
};

struct J2DResReference {
	/* 8030CF10 */ void getResReference(u16) const;
	/* 8030CF44 */ void getName(u16) const;
};

struct J2DMaterialBlock {
};

struct J2DMaterial {
	/* 802EA410 */ void createTevBlock(int, bool);
	/* 802EA5C4 */ void createIndBlock(int, bool);
};

struct J2DMaterialFactory {
	/* 802F2AD0 */ J2DMaterialFactory(J2DMaterialBlock const&);
	/* 802F2C94 */ void countStages(int) const;
	/* 802F2D1C */ void create(J2DMaterial*, int, u32, J2DResReference*, J2DResReference*, JKRArchive*) const;
	/* 802F362C */ void newMatColor(int, int) const;
	/* 802F36CC */ void newColorChanNum(int) const;
	/* 802F3704 */ void newColorChan(int, int) const;
	/* 802F3758 */ void newTexGenNum(int) const;
	/* 802F3790 */ void newTexCoord(int, int) const;
	/* 802F3804 */ void newTexMtx(int, int) const;
	/* 802F38E0 */ void newCullMode(int) const;
	/* 802F3920 */ void newTexNo(int, int) const;
	/* 802F3968 */ void newFontNo(int) const;
	/* 802F39A8 */ void newTevOrder(int, int) const;
	/* 802F3A1C */ void newTevColor(int, int) const;
	/* 802F3AB4 */ void newTevKColor(int, int) const;
	/* 802F3B54 */ void newTevStageNum(int) const;
	/* 802F3B8C */ void newTevStage(int, int) const;
	/* 802F3BEC */ void newTevSwapModeTable(int, int) const;
	/* 802F3C88 */ void newIndTexStageNum(int) const;
	/* 802F3CB8 */ void newIndTexOrder(int, int) const;
	/* 802F3D20 */ void newIndTexMtx(int, int) const;
	/* 802F3E24 */ void newIndTevStage(int, int) const;
	/* 802F3F78 */ void newIndTexCoordScale(int, int) const;
	/* 802F3FE0 */ void newAlphaComp(int) const;
	/* 802F405C */ void newBlend(int) const;
	/* 802F40D8 */ void newDither(int) const;
};

struct J2DDataManage {
	/* 8030CE18 */ void get(char const*);
};

// 
// Forward References:
// 

static void JSUConvertOffsetToPtr__template14(void const*, void const*);
static void JSUConvertOffsetToPtr__template15(void const*, void const*);
static void JSUConvertOffsetToPtr__template16(void const*, void const*);
static void JSUConvertOffsetToPtr__template17(void const*, void const*);
static void JSUConvertOffsetToPtr__template18(void const*, void const*);
void JSUConvertOffsetToPtr__template19(void const*, void const*);
static void JSUConvertOffsetToPtr__template20(void const*, void const*);
static void JSUConvertOffsetToPtr__template21(void const*, void const*);
static void JSUConvertOffsetToPtr__template22(void const*, void const*);
static void JSUConvertOffsetToPtr__template23(void const*, void const*);
void JSUConvertOffsetToPtr__template24(void const*, void const*);
void JSUConvertOffsetToPtr__template25(void const*, void const*);
void JSUConvertOffsetToPtr__template26(void const*, void const*);
static void JSUConvertOffsetToPtr__template27(void const*, void const*);
void JSUConvertOffsetToPtr__template28(void const*, void const*);
static void JSUConvertOffsetToPtr__template29(void const*, void const*);

extern "C" void __ct__18J2DMaterialFactoryFRC16J2DMaterialBlock();
extern "C" void countStages__18J2DMaterialFactoryCFi();
extern "C" void create__18J2DMaterialFactoryCFP11J2DMaterialiUlP15J2DResReferenceP15J2DResReferenceP10JKRArchive();
extern "C" void newMatColor__18J2DMaterialFactoryCFii();
extern "C" void newColorChanNum__18J2DMaterialFactoryCFi();
extern "C" void newColorChan__18J2DMaterialFactoryCFii();
extern "C" void newTexGenNum__18J2DMaterialFactoryCFi();
extern "C" void newTexCoord__18J2DMaterialFactoryCFii();
extern "C" void newTexMtx__18J2DMaterialFactoryCFii();
extern "C" void newCullMode__18J2DMaterialFactoryCFi();
extern "C" void newTexNo__18J2DMaterialFactoryCFii();
extern "C" void newFontNo__18J2DMaterialFactoryCFi();
extern "C" void newTevOrder__18J2DMaterialFactoryCFii();
extern "C" void newTevColor__18J2DMaterialFactoryCFii();
extern "C" void newTevKColor__18J2DMaterialFactoryCFii();
extern "C" void newTevStageNum__18J2DMaterialFactoryCFi();
extern "C" void newTevStage__18J2DMaterialFactoryCFii();
extern "C" void newTevSwapModeTable__18J2DMaterialFactoryCFii();
extern "C" void newIndTexStageNum__18J2DMaterialFactoryCFi();
extern "C" void newIndTexOrder__18J2DMaterialFactoryCFii();
extern "C" void newIndTexMtx__18J2DMaterialFactoryCFii();
extern "C" void newIndTevStage__18J2DMaterialFactoryCFii();
extern "C" void newIndTexCoordScale__18J2DMaterialFactoryCFii();
extern "C" void newAlphaComp__18J2DMaterialFactoryCFi();
extern "C" void newBlend__18J2DMaterialFactoryCFi();
extern "C" void newDither__18J2DMaterialFactoryCFi();
extern "C" void __ct__11J2DTevStageFRC15J2DTevStageInfo();
extern "C" static void func_802F4170();
extern "C" static void func_802F4188();
extern "C" static void func_802F41A0();
extern "C" static void func_802F41B8();
extern "C" static void func_802F41D0();
extern "C" void func_802F41E8();
extern "C" static void func_802F4200();
extern "C" static void func_802F4218();
extern "C" static void func_802F4230();
extern "C" static void func_802F4248();
extern "C" void func_802F4260();
extern "C" void func_802F4278();
extern "C" void func_802F4290();
extern "C" static void func_802F42A8();
extern "C" void func_802F42C0();
extern "C" static void func_802F42D8();

// 
// External References:
// 

void* operator new(u32);
extern "C" extern u8 const j2dDefaultTexCoordInfo[32];
extern "C" extern u8 const j2dDefaultIndTexMtxInfo[28];
extern "C" extern u8 const j2dDefaultIndTevStageInfo[12];
extern "C" extern u8 mDataManage__9J2DScreen[4 + 4 /* padding */];
extern "C" extern u32 j2dDefaultTevOrderInfoNull;
extern "C" extern u16 j2dDefaultIndTexOrderNull[1 + 1 /* padding */];
extern "C" extern u8 j2dDefaultIndTexCoordScaleInfo[2 + 2 /* padding */];
extern "C" extern u8 j2dDefaultTevSwapMode[4];
extern "C" extern u32 j2dDefaultTevSwapModeTable;
extern "C" extern u32 j2dDefaultBlendInfo;
extern "C" extern u32 j2dDefaultColorChanInfo;
extern "C" extern u8 struct_804561AC[4];

extern "C" void* __nw__FUl();
extern "C" void getResource__15JUTResReferenceFPCvUlP10JKRArchive();
extern "C" void calc__9J2DTexMtxFv();
extern "C" void createTevBlock__11J2DMaterialFib();
extern "C" void createIndBlock__11J2DMaterialFib();
extern "C" void __ct__11J2DTevStageFv();
extern "C" void setTevStageInfo__11J2DTevStageFRC15J2DTevStageInfo();
extern "C" void get__13J2DDataManageFPCc();
extern "C" void getResReference__15J2DResReferenceCFUs();
extern "C" void getName__15J2DResReferenceCFUs();
extern "C" void _savegpr_19();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_29();
extern "C" void strcpy();
extern "C" extern u8 const j2dDefaultTexCoordInfo[32];
extern "C" extern u8 const j2dDefaultIndTexMtxInfo[28];
extern "C" extern u8 const j2dDefaultIndTevStageInfo[12];
extern "C" extern u8 mDataManage__9J2DScreen[4 + 4 /* padding */];
extern "C" extern u32 j2dDefaultTevOrderInfoNull;
extern "C" extern u16 j2dDefaultIndTexOrderNull[1 + 1 /* padding */];
extern "C" extern u8 j2dDefaultIndTexCoordScaleInfo[2 + 2 /* padding */];
extern "C" extern u8 j2dDefaultTevSwapMode[4];
extern "C" extern u32 j2dDefaultTevSwapModeTable;
extern "C" extern u32 j2dDefaultBlendInfo;
extern "C" extern u32 j2dDefaultColorChanInfo;
extern "C" extern u8 struct_804561AC[4];

// 
// Declarations:
// 

/* 802F2AD0-802F2C94 01C4+00 s=0 e=1 z=0  None .text      __ct__18J2DMaterialFactoryFRC16J2DMaterialBlock              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DMaterialFactory::J2DMaterialFactory(J2DMaterialBlock const& param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/__ct__18J2DMaterialFactoryFRC16J2DMaterialBlock.s"
}
#pragma pop


/* 802F2C94-802F2D1C 0088+00 s=1 e=0 z=0  None .text      countStages__18J2DMaterialFactoryCFi                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::countStages(int param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/countStages__18J2DMaterialFactoryCFi.s"
}
#pragma pop


/* 802F2D1C-802F362C 0910+00 s=0 e=1 z=0  None .text      create__18J2DMaterialFactoryCFP11J2DMaterialiUlP15J2DResReferenceP15J2DResReferenceP10JKRArchive */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::create(J2DMaterial* param_0, int param_1, u32 param_2, J2DResReference* param_3, J2DResReference* param_4, JKRArchive* param_5) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F2D1C.s"
}
#pragma pop


/* ############################################################################################## */
/* 804561C0-804561C4 0004+00 s=1 e=0 z=0  None .sdata2    @1887                                                        */
SECTION_SDATA2 static u32 lit_1887 = 0xFFFFFFFF;

/* 802F362C-802F36CC 00A0+00 s=1 e=0 z=0  None .text      newMatColor__18J2DMaterialFactoryCFii                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newMatColor(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newMatColor__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* 802F36CC-802F3704 0038+00 s=1 e=0 z=0  None .text      newColorChanNum__18J2DMaterialFactoryCFi                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newColorChanNum(int param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newColorChanNum__18J2DMaterialFactoryCFi.s"
}
#pragma pop


/* 802F3704-802F3758 0054+00 s=1 e=0 z=0  None .text      newColorChan__18J2DMaterialFactoryCFii                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newColorChan(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newColorChan__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* 802F3758-802F3790 0038+00 s=1 e=0 z=0  None .text      newTexGenNum__18J2DMaterialFactoryCFi                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTexGenNum(int param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTexGenNum__18J2DMaterialFactoryCFi.s"
}
#pragma pop


/* 802F3790-802F3804 0074+00 s=1 e=0 z=0  None .text      newTexCoord__18J2DMaterialFactoryCFii                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTexCoord(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTexCoord__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* 802F3804-802F38E0 00DC+00 s=1 e=0 z=0  None .text      newTexMtx__18J2DMaterialFactoryCFii                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTexMtx(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTexMtx__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* 802F38E0-802F3920 0040+00 s=1 e=0 z=0  None .text      newCullMode__18J2DMaterialFactoryCFi                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newCullMode(int param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newCullMode__18J2DMaterialFactoryCFi.s"
}
#pragma pop


/* 802F3920-802F3968 0048+00 s=1 e=0 z=0  None .text      newTexNo__18J2DMaterialFactoryCFii                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTexNo(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTexNo__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* 802F3968-802F39A8 0040+00 s=1 e=0 z=0  None .text      newFontNo__18J2DMaterialFactoryCFi                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newFontNo(int param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newFontNo__18J2DMaterialFactoryCFi.s"
}
#pragma pop


/* 802F39A8-802F3A1C 0074+00 s=1 e=0 z=0  None .text      newTevOrder__18J2DMaterialFactoryCFii                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTevOrder(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTevOrder__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* ############################################################################################## */
/* 80456BB0-80456BB4 0004+00 s=1 e=0 z=0  None .sbss2     @2018                                                        */
SECTION_SBSS2 static u8 lit_2018[4];

/* 80456BB4-80456BB8 0004+00 s=1 e=0 z=0  None .sbss2     None                                                         */
SECTION_SBSS2 static u8 data_80456BB4[4];

/* 802F3A1C-802F3AB4 0098+00 s=1 e=0 z=0  None .text      newTevColor__18J2DMaterialFactoryCFii                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTevColor(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTevColor__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* ############################################################################################## */
/* 804561C4-804561C8 0004+00 s=1 e=0 z=0  None .sdata2    @2039                                                        */
SECTION_SDATA2 static u32 lit_2039 = 0xFFFFFFFF;

/* 802F3AB4-802F3B54 00A0+00 s=1 e=0 z=0  None .text      newTevKColor__18J2DMaterialFactoryCFii                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTevKColor(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTevKColor__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* 802F3B54-802F3B8C 0038+00 s=1 e=0 z=0  None .text      newTevStageNum__18J2DMaterialFactoryCFi                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTevStageNum(int param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTevStageNum__18J2DMaterialFactoryCFi.s"
}
#pragma pop


/* 802F3B8C-802F3BEC 0060+00 s=1 e=0 z=0  None .text      newTevStage__18J2DMaterialFactoryCFii                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTevStage(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTevStage__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* 802F3BEC-802F3C88 009C+00 s=1 e=0 z=0  None .text      newTevSwapModeTable__18J2DMaterialFactoryCFii                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newTevSwapModeTable(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newTevSwapModeTable__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* 802F3C88-802F3CB8 0030+00 s=1 e=0 z=0  None .text      newIndTexStageNum__18J2DMaterialFactoryCFi                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newIndTexStageNum(int param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newIndTexStageNum__18J2DMaterialFactoryCFi.s"
}
#pragma pop


/* 802F3CB8-802F3D20 0068+00 s=1 e=0 z=0  None .text      newIndTexOrder__18J2DMaterialFactoryCFii                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newIndTexOrder(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newIndTexOrder__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* 802F3D20-802F3E24 0104+00 s=1 e=0 z=0  None .text      newIndTexMtx__18J2DMaterialFactoryCFii                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newIndTexMtx(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newIndTexMtx__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* 802F3E24-802F3F78 0154+00 s=1 e=0 z=0  None .text      newIndTevStage__18J2DMaterialFactoryCFii                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newIndTevStage(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newIndTevStage__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* 802F3F78-802F3FE0 0068+00 s=1 e=0 z=0  None .text      newIndTexCoordScale__18J2DMaterialFactoryCFii                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newIndTexCoordScale(int param_0, int param_1) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newIndTexCoordScale__18J2DMaterialFactoryCFii.s"
}
#pragma pop


/* 802F3FE0-802F405C 007C+00 s=1 e=0 z=0  None .text      newAlphaComp__18J2DMaterialFactoryCFi                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newAlphaComp(int param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newAlphaComp__18J2DMaterialFactoryCFi.s"
}
#pragma pop


/* 802F405C-802F40D8 007C+00 s=1 e=0 z=0  None .text      newBlend__18J2DMaterialFactoryCFi                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newBlend(int param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newBlend__18J2DMaterialFactoryCFi.s"
}
#pragma pop


/* 802F40D8-802F4110 0038+00 s=1 e=0 z=0  None .text      newDither__18J2DMaterialFactoryCFi                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DMaterialFactory::newDither(int param_0) const {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/newDither__18J2DMaterialFactoryCFi.s"
}
#pragma pop


/* 802F4110-802F4170 0060+00 s=1 e=0 z=0  None .text      __ct__11J2DTevStageFRC15J2DTevStageInfo                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DTevStage::J2DTevStage(J2DTevStageInfo const& param_0) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/__ct__11J2DTevStageFRC15J2DTevStageInfo.s"
}
#pragma pop


/* 802F4170-802F4188 0018+00 s=1 e=0 z=0  None .text      JSUConvertOffsetToPtr<12J2DBlendInfo>__FPCvPCv               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JSUConvertOffsetToPtr__template14(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4170.s"
}
#pragma pop


/* 802F4188-802F41A0 0018+00 s=1 e=0 z=0  None .text      JSUConvertOffsetToPtr<16J2DAlphaCompInfo>__FPCvPCv           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JSUConvertOffsetToPtr__template15(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4188.s"
}
#pragma pop


/* 802F41A0-802F41B8 0018+00 s=1 e=0 z=0  None .text      JSUConvertOffsetToPtr<23J2DTevSwapModeTableInfo>__FPCvPCv    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JSUConvertOffsetToPtr__template16(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F41A0.s"
}
#pragma pop


/* 802F41B8-802F41D0 0018+00 s=1 e=0 z=0  None .text      JSUConvertOffsetToPtr<18J2DTevSwapModeInfo>__FPCvPCv         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JSUConvertOffsetToPtr__template17(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F41B8.s"
}
#pragma pop


/* 802F41D0-802F41E8 0018+00 s=1 e=0 z=0  None .text      JSUConvertOffsetToPtr<15J2DTevStageInfo>__FPCvPCv            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JSUConvertOffsetToPtr__template18(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F41D0.s"
}
#pragma pop


/* 802F41E8-802F4200 0018+00 s=1 e=2 z=0  None .text      JSUConvertOffsetToPtr<11_GXColorS10>__FPCvPCv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUConvertOffsetToPtr__template19(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F41E8.s"
}
#pragma pop


/* 802F4200-802F4218 0018+00 s=1 e=0 z=0  None .text      JSUConvertOffsetToPtr<15J2DTevOrderInfo>__FPCvPCv            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JSUConvertOffsetToPtr__template20(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4200.s"
}
#pragma pop


/* 802F4218-802F4230 0018+00 s=1 e=0 z=0  None .text      JSUConvertOffsetToPtr<13J2DTexMtxInfo>__FPCvPCv              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JSUConvertOffsetToPtr__template21(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4218.s"
}
#pragma pop


/* 802F4230-802F4248 0018+00 s=1 e=0 z=0  None .text      JSUConvertOffsetToPtr<15J2DTexCoordInfo>__FPCvPCv            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JSUConvertOffsetToPtr__template22(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4230.s"
}
#pragma pop


/* 802F4248-802F4260 0018+00 s=1 e=0 z=0  None .text      JSUConvertOffsetToPtr<16J2DColorChanInfo>__FPCvPCv           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JSUConvertOffsetToPtr__template23(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4248.s"
}
#pragma pop


/* 802F4260-802F4278 0018+00 s=1 e=13 z=0  None .text      JSUConvertOffsetToPtr<Uc>__FPCvPCv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUConvertOffsetToPtr__template24(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4260.s"
}
#pragma pop


/* 802F4278-802F4290 0018+00 s=1 e=2 z=0  None .text      JSUConvertOffsetToPtr<8_GXColor>__FPCvPCv                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUConvertOffsetToPtr__template25(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4278.s"
}
#pragma pop


/* 802F4290-802F42A8 0018+00 s=1 e=2 z=0  None .text      JSUConvertOffsetToPtr<11_GXCullMode>__FPCvPCv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUConvertOffsetToPtr__template26(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F4290.s"
}
#pragma pop


/* 802F42A8-802F42C0 0018+00 s=1 e=0 z=0  None .text      JSUConvertOffsetToPtr<14J2DIndInitData>__FPCvPCv             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JSUConvertOffsetToPtr__template27(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F42A8.s"
}
#pragma pop


/* 802F42C0-802F42D8 0018+00 s=1 e=19 z=0  None .text      JSUConvertOffsetToPtr<Us>__FPCvPCv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUConvertOffsetToPtr__template28(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F42C0.s"
}
#pragma pop


/* 802F42D8-802F42F0 0018+00 s=1 e=0 z=0  None .text      JSUConvertOffsetToPtr<19J2DMaterialInitData>__FPCvPCv        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void JSUConvertOffsetToPtr__template29(void const* param_0, void const* param_1) {
	nofralloc
#include "asm/JSystem/J2DGraph/J2DMaterialFactory/func_802F42D8.s"
}
#pragma pop


