// 
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/e_acos
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/e_acos.h"

// 
// Forward References:
// 


extern "C" void __ieee754_acos();

// 
// External References:
// 

extern "C" extern u32 __float_nan;

extern "C" void sqrt();
extern "C" extern u32 __float_nan;

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80456678-80456680 0008+00 s=1 e=0 z=0  None .sdata2    @83                                                          */
SECTION_SDATA2 static u8 lit_83[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80456680-80456688 0008+00 s=1 e=0 z=0  None .sdata2    @84                                                          */
SECTION_SDATA2 static u8 lit_84[8] = {
	0x40, 0x09, 0x21, 0xFB, 0x54, 0x44, 0x2D, 0x18,
};

/* 80456688-80456690 0008+00 s=1 e=0 z=0  None .sdata2    @85                                                          */
SECTION_SDATA2 static u8 lit_85[8] = {
	0x3F, 0xF9, 0x21, 0xFB, 0x54, 0x44, 0x2D, 0x18,
};

/* 80456690-80456698 0008+00 s=1 e=0 z=0  None .sdata2    @86                                                          */
SECTION_SDATA2 static u8 lit_86[8] = {
	0x3C, 0x91, 0xA6, 0x26, 0x33, 0x14, 0x5C, 0x07,
};

/* 80456698-804566A0 0008+00 s=1 e=0 z=0  None .sdata2    @87                                                          */
SECTION_SDATA2 static u8 lit_87[8] = {
	0x3F, 0xC5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
};

/* 804566A0-804566A8 0008+00 s=1 e=0 z=0  None .sdata2    @88                                                          */
SECTION_SDATA2 static u8 lit_88[8] = {
	0xBF, 0xD4, 0xD6, 0x12, 0x03, 0xEB, 0x6F, 0x7D,
};

/* 804566A8-804566B0 0008+00 s=1 e=0 z=0  None .sdata2    @89                                                          */
SECTION_SDATA2 static u8 lit_89[8] = {
	0x3F, 0xC9, 0xC1, 0x55, 0x0E, 0x88, 0x44, 0x55,
};

/* 804566B0-804566B8 0008+00 s=1 e=0 z=0  None .sdata2    @90                                                          */
SECTION_SDATA2 static u8 lit_90[8] = {
	0xBF, 0xA4, 0x82, 0x28, 0xB5, 0x68, 0x8F, 0x3B,
};

/* 804566B8-804566C0 0008+00 s=1 e=0 z=0  None .sdata2    @91                                                          */
SECTION_SDATA2 static u8 lit_91[8] = {
	0x3F, 0x49, 0xEF, 0xE0, 0x75, 0x01, 0xB2, 0x88,
};

/* 804566C0-804566C8 0008+00 s=1 e=0 z=0  None .sdata2    @92                                                          */
SECTION_SDATA2 static u8 lit_92[8] = {
	0x3F, 0x02, 0x3D, 0xE1, 0x0D, 0xFD, 0xF7, 0x09,
};

/* 804566C8-804566D0 0008+00 s=1 e=0 z=0  None .sdata2    @93                                                          */
SECTION_SDATA2 static u8 lit_93[8] = {
	0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804566D0-804566D8 0008+00 s=1 e=0 z=0  None .sdata2    @94                                                          */
SECTION_SDATA2 static u8 lit_94[8] = {
	0xC0, 0x03, 0x3A, 0x27, 0x1C, 0x8A, 0x2D, 0x4B,
};

/* 804566D8-804566E0 0008+00 s=1 e=0 z=0  None .sdata2    @95                                                          */
SECTION_SDATA2 static u8 lit_95[8] = {
	0x40, 0x00, 0x2A, 0xE5, 0x9C, 0x59, 0x8A, 0xC8,
};

/* 804566E0-804566E8 0008+00 s=1 e=0 z=0  None .sdata2    @96                                                          */
SECTION_SDATA2 static u8 lit_96[8] = {
	0xBF, 0xE6, 0x06, 0x6C, 0x1B, 0x8D, 0x01, 0x59,
};

/* 804566E8-804566F0 0008+00 s=1 e=0 z=0  None .sdata2    @97                                                          */
SECTION_SDATA2 static u8 lit_97[8] = {
	0x3F, 0xB3, 0xB8, 0xC5, 0xB1, 0x2E, 0x92, 0x82,
};

/* 804566F0-804566F8 0008+00 s=1 e=0 z=0  None .sdata2    @98                                                          */
SECTION_SDATA2 static u8 lit_98[8] = {
	0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804566F8-80456700 0008+00 s=1 e=0 z=0  None .sdata2    @99                                                          */
SECTION_SDATA2 static u8 lit_99[8] = {
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80369274-803694B0 023C+00 s=0 e=1 z=0  None .text      __ieee754_acos                                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __ieee754_acos() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/e_acos/__ieee754_acos.s"
}
#pragma pop


