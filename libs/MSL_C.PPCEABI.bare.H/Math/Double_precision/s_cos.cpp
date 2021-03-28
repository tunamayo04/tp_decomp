// 
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/s_cos
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/s_cos.h"

// 
// Forward References:
// 


extern "C" void cos();

// 
// External References:
// 


extern "C" void __ieee754_rem_pio2();
extern "C" void __kernel_cos();
extern "C" void __kernel_sin();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80456AF0-80456AF8 0008+00 s=1 e=0 z=0  None .sdata2    @67                                                          */
SECTION_SDATA2 static u8 lit_67[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8036C028-8036C0FC 00D4+00 s=0 e=12 z=0  None .text      cos                                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void cos() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/s_cos/cos.s"
}
#pragma pop


