// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_ss_item/executor.h"

// 
// Forward References:
// 


extern "C" void _prolog();
extern "C" void _epilog();
extern "C" void _unresolved();

// 
// External References:
// 

extern void* const data_80CE7EA4[2];
extern u8 const data_80CE7EAC[4];

extern "C" void ModuleProlog();
extern "C" void ModuleEpilog();
extern "C" void ModuleUnresolved();
extern "C" void ModuleConstructorsX();
extern "C" void ModuleDestructorsX();
extern void* const data_80CE7EA4[2];
extern u8 const data_80CE7EAC[4];

// 
// Declarations:
// 

/* 80CE6BA0-80CE6BCC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/executor/_prolog.s"
}
#pragma pop


/* 80CE6BCC-80CE6BF8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/executor/_epilog.s"
}
#pragma pop


/* 80CE6BF8-80CE6C18 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/executor/_unresolved.s"
}
#pragma pop


