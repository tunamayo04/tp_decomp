// 
// Generated By: dol2asm
// Translation Unit: OSReboot
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/os/OSReboot.h"

// 
// Forward References:
// 


extern "C" void __OSReboot();
extern "C" void OSSetSaveRegion();
extern "C" void OSGetSaveRegion();

// 
// External References:
// 


extern "C" void OSSetArenaHi();
extern "C" void OSSetArenaLo();
extern "C" void OSSetCurrentContext();
extern "C" void OSClearContext();
extern "C" void __OSBootDol();
extern "C" void OSDisableInterrupts();

// 
// Declarations:
// 

/* 8033F5D0-8033F640 0070+00 s=0 e=1 z=0  None .text      __OSReboot                                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __OSReboot() {
	nofralloc
#include "asm/dolphin/os/OSReboot/__OSReboot.s"
}
#pragma pop


/* ############################################################################################## */
/* 80451688-8045168C 0004+00 s=2 e=0 z=0  None .sbss      SaveStart                                                    */
static u8 SaveStart[4];

/* 8045168C-80451690 0004+00 s=2 e=0 z=0  None .sbss      SaveEnd                                                      */
static u8 SaveEnd[4];

/* 8033F640-8033F64C 000C+00 s=0 e=1 z=0  None .text      OSSetSaveRegion                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSSetSaveRegion() {
	nofralloc
#include "asm/dolphin/os/OSReboot/OSSetSaveRegion.s"
}
#pragma pop


/* 8033F64C-8033F660 0014+00 s=0 e=1 z=0  None .text      OSGetSaveRegion                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSGetSaveRegion() {
	nofralloc
#include "asm/dolphin/os/OSReboot/OSGetSaveRegion.s"
}
#pragma pop


