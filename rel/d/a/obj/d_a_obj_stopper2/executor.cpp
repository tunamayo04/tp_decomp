// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_stopper2/executor.h"

// 
// Forward References:
// 


extern "C" void _prolog();
extern "C" void _epilog();
extern "C" void _unresolved();

// 
// External References:
// 

extern u8 const data_80CEFE88[4];
extern u8 const data_80CEFE8C[4];

extern "C" void ModuleProlog();
extern "C" void ModuleEpilog();
extern "C" void ModuleUnresolved();
extern "C" void ModuleConstructorsX();
extern "C" void ModuleDestructorsX();
extern u8 const data_80CEFE88[4];
extern u8 const data_80CEFE8C[4];

// 
// Declarations:
// 

/* 80CEF2C0-80CEF2EC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/executor/_prolog.s"
}
#pragma pop


/* 80CEF2EC-80CEF318 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/executor/_epilog.s"
}
#pragma pop


/* 80CEF318-80CEF338 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/executor/_unresolved.s"
}
#pragma pop


