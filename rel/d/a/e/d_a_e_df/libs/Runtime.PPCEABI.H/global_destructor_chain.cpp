// 
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_df/libs/Runtime.PPCEABI.H/global_destructor_chain.h"

// 
// Forward References:
// 

#pragma section ".dtors$10"
__declspec(section ".dtors$10") extern void* const __destroy_global_chain_reference;
extern void* const pad_806A9F28[2];

extern "C" void __register_global_object();
extern "C" static void __destroy_global_chain();
#pragma section ".dtors$10"
__declspec(section ".dtors$10") extern void* const __destroy_global_chain_reference;
extern void* const pad_806A9F28[2];

// 
// External References:
// 



// 
// Declarations:
// 

/* ############################################################################################## */
#pragma section ".dtors$10"
/* 806A9F24-806A9F28 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference                             */
__declspec(section ".dtors$10") void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

#pragma section ".dtors$15"
/* ############################################################################################## */
/* 806AA0C8-806AA0D0 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain                                    */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 806A7678-806A7694 001C+00 s=0 e=1 z=0  None .text      __register_global_object                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __register_global_object() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_df/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop


/* 806A7694-806A76EC 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __destroy_global_chain() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_df/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop


