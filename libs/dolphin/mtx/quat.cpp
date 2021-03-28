// 
// Generated By: dol2asm
// Translation Unit: quat
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/mtx/quat.h"

// 
// Forward References:
// 


extern "C" void PSQUATMultiply();
extern "C" void C_QUATRotAxisRad();
extern "C" void C_QUATSlerp();

// 
// External References:
// 


extern "C" void PSVECNormalize();
extern "C" void sinf();
extern "C" void cosf();
extern "C" void acosf();

// 
// Declarations:
// 

/* 80347418-80347474 005C+00 s=0 e=0 z=2  None .text      PSQUATMultiply                                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void PSQUATMultiply() {
	nofralloc
#include "asm/dolphin/mtx/quat/PSQUATMultiply.s"
}
#pragma pop


/* ############################################################################################## */
/* 80456550-80456554 0004+00 s=1 e=0 z=0  None .sdata2    @130                                                         */
SECTION_SDATA2 static u8 lit_130[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80456554-80456558 0004+00 s=1 e=0 z=0  None .sdata2    @133                                                         */
SECTION_SDATA2 static u32 lit_133 = 0x3F800000;

/* 80456558-8045655C 0004+00 s=1 e=0 z=0  None .sdata2    @135                                                         */
SECTION_SDATA2 static u32 lit_135 = 0x3F000000;

/* 80347474-80347500 008C+00 s=0 e=1 z=0  None .text      C_QUATRotAxisRad                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void C_QUATRotAxisRad() {
	nofralloc
#include "asm/dolphin/mtx/quat/C_QUATRotAxisRad.s"
}
#pragma pop


/* ############################################################################################## */
/* 8045655C-80456560 0004+00 s=1 e=0 z=0  None .sdata2    @261                                                         */
SECTION_SDATA2 static u32 lit_261 = 0x3F7FFF58;

/* 80347500-80347674 0174+00 s=0 e=0 z=2  None .text      C_QUATSlerp                                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void C_QUATSlerp() {
	nofralloc
#include "asm/dolphin/mtx/quat/C_QUATSlerp.s"
}
#pragma pop


