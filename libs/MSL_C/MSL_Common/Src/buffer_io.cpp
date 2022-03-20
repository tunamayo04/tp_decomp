//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/buffer_io
//

#include "MSL_C/MSL_Common/Src/buffer_io.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __flush_buffer();
extern "C" void __prep_buffer();

//
// External References:
//

//
// Declarations:
//

/* 803650E0-803651A4 35FA20 00C4+00 0/0 5/5 0/0 .text            __flush_buffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __flush_buffer() {
    nofralloc
#include "asm/MSL_C/MSL_Common/Src/buffer_io/__flush_buffer.s"
}
#pragma pop

/* 803651A4-803651D8 35FAE4 0034+00 0/0 2/2 0/0 .text            __prep_buffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __prep_buffer() {
    nofralloc
#include "asm/MSL_C/MSL_Common/Src/buffer_io/__prep_buffer.s"
}
#pragma pop
