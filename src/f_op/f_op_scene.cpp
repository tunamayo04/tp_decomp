//
// Generated By: dol2asm
// Translation Unit: f_op/f_op_scene
//

#include "f_op/f_op_scene.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" static void fopScn_Draw__FP11scene_class();
extern "C" static void fopScn_Execute__FP11scene_class();
extern "C" static void fopScn_IsDelete__FPv();
extern "C" static void fopScn_Delete__FPv();
extern "C" static void fopScn_Create__FPv();
extern "C" extern void* g_fopScn_Method[5 + 1 /* padding */];

//
// External References:
//

extern "C" void fopScnTg_QueueTo__FP15scene_tag_class();
extern "C" void fopScnTg_ToQueue__FP15scene_tag_class();
extern "C" void fopScnTg_Init__FP15scene_tag_classPv();
extern "C" void fpcMtd_Execute__FP20process_method_classPv();
extern "C" void fpcMtd_IsDelete__FP20process_method_classPv();
extern "C" void fpcMtd_Delete__FP20process_method_classPv();
extern "C" void fpcMtd_Create__FP20process_method_classPv();
extern "C" void fpcNd_DrawMethod__FP21nodedraw_method_classPv();

//
// Declarations:
//

/* 8001EB34-8001EB5C 019474 0028+00 1/0 0/0 0/0 .text            fopScn_Draw__FP11scene_class */
static void fopScn_Draw(scene_class* pScene) {
    fpcNd_DrawMethod((nodedraw_method_class*)pScene->mpProcessMtd, pScene);
}

/* 8001EB5C-8001EB84 01949C 0028+00 1/0 0/0 0/0 .text            fopScn_Execute__FP11scene_class */
static void fopScn_Execute(scene_class* pScene) {
    fpcMtd_Execute(pScene->mpProcessMtd, pScene);
}

/* 8001EB84-8001EBAC 0194C4 0028+00 1/0 0/0 0/0 .text            fopScn_IsDelete__FPv */
static s32 fopScn_IsDelete(void* param_1) {
    return fpcMtd_IsDelete(((scene_class*)param_1)->mpProcessMtd, param_1);
}

/* 8001EBAC-8001EC00 0194EC 0054+00 1/0 0/0 0/0 .text            fopScn_Delete__FPv */
#ifdef NON_MATCHING
static s32 fopScn_Delete(void* param_1) {
    scene_class* pScene = (scene_class*)param_1;
    s32 ret = fpcMtd_Delete(pScene->mpProcessMtd, param_1);
    if (ret == 1) {
        fopScnTg_QueueTo(pScene->field_0x1b0);
    }
    return ret;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm s32 fopScn_Delete(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_scene/fopScn_Delete__FPv.s"
}
#pragma pop
#endif

/* 8001EC00-8001EC74 019540 0074+00 1/0 0/0 0/0 .text            fopScn_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fopScn_Create(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_scene/fopScn_Create__FPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A38B0-803A38C8 -00001 0014+04 0/0 9/0 0/0 .data            g_fopScn_Method */
SECTION_DATA extern void* g_fopScn_Method[5 + 1 /* padding */] = {
    (void*)fopScn_Create,
    (void*)fopScn_Delete,
    (void*)fopScn_Execute,
    (void*)fopScn_IsDelete,
    (void*)fopScn_Draw,
    /* padding */
    NULL,
};
