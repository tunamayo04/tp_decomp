// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_scannon_crs/executor.h"

// 
// Forward References:
// 


extern "C" void _prolog();
extern "C" void _epilog();
extern "C" void _unresolved();

// 
// External References:
// 

extern void* const data_80CCB074[2];
extern u8 const data_80CCB07C[4];

extern "C" void ModuleProlog();
extern "C" void ModuleEpilog();
extern "C" void ModuleUnresolved();
extern "C" void ModuleConstructorsX();
extern "C" void ModuleDestructorsX();
extern void* const data_80CCB074[2];
extern u8 const data_80CCB07C[4];

// 
// Declarations:
// 

/* 80CC9600-80CC962C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_scannon_crs/executor/_prolog.s"
}
#pragma pop


/* 80CC962C-80CC9658 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_scannon_crs/executor/_epilog.s"
}
#pragma pop


/* 80CC9658-80CC9678 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_scannon_crs/executor/_unresolved.s"
}
#pragma pop


