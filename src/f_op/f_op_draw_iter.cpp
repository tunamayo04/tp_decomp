//
// Generated By: dol2asm
// Translation Unit: f_op/f_op_draw_iter
//

#include "f_op/f_op_draw_iter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" static void fopDwIt_GetTag__Fv();
extern "C" void fopDwIt_Begin__Fv();
extern "C" void fopDwIt_Next__FP16create_tag_class();

//
// External References:
//

extern "C" extern u8 g_fopDwTg_Queue[8];

//
// Declarations:
//

/* ############################################################################################## */
/* 80450CF8-80450D00 0001F8 0004+04 2/2 0/0 0/0 .sbss            l_fopDwTg_id */
static u8 l_fopDwTg_id[4 + 4 /* padding */];

/* 80020400-80020444 01AD40 0044+00 2/2 0/0 0/0 .text            fopDwIt_GetTag__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm create_tag_class* fopDwIt_GetTag() {
    nofralloc
#include "asm/f_op/f_op_draw_iter/fopDwIt_GetTag__Fv.s"
}
#pragma pop

/* 80020444-80020480 01AD84 003C+00 0/0 1/1 0/0 .text            fopDwIt_Begin__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm create_tag_class* fopDwIt_Begin() {
    nofralloc
#include "asm/f_op/f_op_draw_iter/fopDwIt_Begin__Fv.s"
}
#pragma pop

/* 80020480-800204AC 01ADC0 002C+00 0/0 1/1 0/0 .text            fopDwIt_Next__FP16create_tag_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm create_tag_class* fopDwIt_Next(create_tag_class* param_0) {
    nofralloc
#include "asm/f_op/f_op_draw_iter/fopDwIt_Next__FP16create_tag_class.s"
}
#pragma pop
