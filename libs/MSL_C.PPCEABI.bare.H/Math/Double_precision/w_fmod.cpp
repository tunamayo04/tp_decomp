// 
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/w_fmod
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/w_fmod.h"

// 
// Forward References:
// 


extern "C" void fmod();

// 
// External References:
// 


extern "C" void __ieee754_fmod();

// 
// Declarations:
// 

/* 8036C760-8036C780 0020+00 s=0 e=8 z=0  None .text      fmod                                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void fmod() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/w_fmod/fmod.s"
}
#pragma pop


