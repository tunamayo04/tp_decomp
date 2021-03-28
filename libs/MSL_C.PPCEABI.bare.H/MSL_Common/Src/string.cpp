// 
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/string
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "MSL_C.PPCEABI.bare.H/MSL_Common/Src/string.h"

// 
// Forward References:
// 


extern "C" void strrchr();
extern "C" void strchr();
extern "C" void strncmp();
extern "C" void strcmp();
extern "C" void strcat();
extern "C" void strncpy();
extern "C" void strcpy();
extern "C" void strlen();

// 
// External References:
// 


extern "C" void _epilog();

// 
// Declarations:
// 

/* 803688DC-80368924 0048+00 s=0 e=1 z=0  None .text      strrchr                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void strrchr() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/string/strrchr.s"
}
#pragma pop


/* 80368924-80368954 0030+00 s=0 e=3 z=0  None .text      strchr                                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void strchr() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/string/strchr.s"
}
#pragma pop


/* 80368954-80368994 0040+00 s=0 e=6 z=0  None .text      strncmp                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void strncmp() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/string/strncmp.s"
}
#pragma pop


/* 80368994-80368ABC 0128+00 s=0 e=155 z=279  None .text      strcmp                                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void strcmp() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/string/strcmp.s"
}
#pragma pop


/* 80368ABC-80368AE8 002C+00 s=0 e=20 z=8  None .text      strcat                                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void strcat() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/string/strcat.s"
}
#pragma pop


/* 80368AE8-80368B2C 0044+00 s=0 e=9 z=1  None .text      strncpy                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void strncpy() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/string/strncpy.s"
}
#pragma pop


/* 80368B2C-80368BE4 00B8+00 s=0 e=131 z=13  None .text      strcpy                                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void strcpy() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/string/strcpy.s"
}
#pragma pop


/* 80368BE4-80368C00 001C+00 s=0 e=28 z=8  None .text      strlen                                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void strlen() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/string/strlen.s"
}
#pragma pop


