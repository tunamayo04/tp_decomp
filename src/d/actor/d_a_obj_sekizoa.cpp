//
// Generated By: dol2asm
// Translation Unit: d_a_obj_sekizoa
//

#include "d/actor/d_a_obj_sekizoa.h"
#include "dolphin/types.h"
#include "Z2AudioLib/Z2Instances.h"
#include "dol2asm.h"

UNK_REL_DATA

/* 80CD5EF8-80CD5F40 000020 0048+00 1/1 0/0 0/0 .data            l_bmdData */
static u32 l_bmdData[18] = {
    0x24, 0x01, 0x24, 0x01, 0x23, 0x01, 0x25, 0x01, 0x26,
    0x01, 0x03, 0x02, 0x03, 0x02, 0x04, 0x02, 0x05, 0x02,
};

/* 80CD5F40-80CD5F90 -00001 0050+00 3/4 0/0 0/0 .data            l_evtList */
static daNpcT_evtData_c l_evtList[10] = {
    {"", 1},     {"NO_RESPONSE", 1}, {"START", 1}, {"RESTART", 1}, {"TURN", 1},
    {"JUMP", 1}, {"GOAL", 1},        {"EXIT", 1},  {"FREE", 1},    {"EXTINCTION", 1},
};

/* 80CD5F90-80CD5F9C -00001 000C+00 3/4 0/0 0/0 .data            l_resNameList */
static char* l_resNameList[3] = {
    "",
    "sekizoA",
    "seki_1k",
};

/* 80CD5F9C-80CD5FA0 0000C4 0002+02 1/0 0/0 0/0 .data            l_loadResPtrn0 */
static u8 l_loadResPtrn0[2] = {
    0x01, 0xFF,
};

/* 80CD5FA0-80CD5FA4 0000C8 0003+01 1/0 0/0 0/0 .data            l_loadResPtrn1 */
static u8 l_loadResPtrn1[3] = {
    0x01,
    0x02,
    0xFF,
};

/* 80CD5FA4-80CD5FC4 -00001 0020+00 1/2 0/0 0/0 .data            l_loadResPtrnList */
static u8* l_loadResPtrnList[8] = {
    l_loadResPtrn0, l_loadResPtrn0, l_loadResPtrn0, l_loadResPtrn0,
    l_loadResPtrn1, l_loadResPtrn1, l_loadResPtrn1, l_loadResPtrn1,
};

/* 80CD5FC4-80CD5FE0 0000EC 001C+00 0/1 0/0 0/0 .data            l_faceMotionAnmData */
static daNpcT_faceMotionAnmData_c l_faceMotionAnmData = {
    -1, 0, 0, -1, 0, 0, 0,
};

/* 80CD5FE0-80CD6280 000108 02A0+00 0/1 0/0 0/0 .data            l_motionAnmData */
static daNpcT_motionAnmData_c l_motionAnmData[24] = {
    {20, 2, 1, -1, 0, 0, 0}, {24, 2, 1, -1, 0, 0, 0}, {19, 2, 1, -1, 0, 0, 0},
    {13, 0, 1, -1, 0, 0, 0}, {14, 0, 1, -1, 0, 0, 0}, {22, 2, 1, -1, 0, 0, 0},
    {8, 0, 1, -1, 0, 0, 0},  {26, 0, 1, -1, 0, 0, 0}, {26, 0, 1, -1, 0, 0, 0},
    {26, 0, 1, -1, 0, 0, 0}, {12, 0, 1, -1, 0, 0, 0}, {17, 0, 1, -1, 0, 0, 0},
    {23, 2, 1, -1, 0, 0, 0}, {18, 2, 1, -1, 0, 0, 0}, {9, 0, 1, -1, 0, 0, 0},
    {10, 0, 1, -1, 0, 0, 0}, {21, 2, 1, -1, 0, 0, 0}, {7, 0, 1, -1, 0, 0, 0},
    {25, 0, 1, -1, 0, 0, 0}, {25, 0, 1, -1, 0, 0, 0}, {25, 0, 1, -1, 0, 0, 0},
    {11, 0, 1, -1, 0, 0, 0}, {16, 0, 1, -1, 0, 0, 0}, {20, 2, 1, -1, 0, 0, 0}};

/* 80CD6280-80CD6290 0003A8 0010+00 0/1 0/0 0/0 .data            l_faceMotionSequenceData */
static daNpcT_MotionSeqMngr_c::sequenceStepData_c l_faceMotionSequenceData[4] = {
    {0, -1, 0},
    {-1, 0, 0},
    {-1, 0, 0},
    {-1, 0, 0},
};

/* 80CD6290-80CD6410 0003B8 0180+00 0/1 0/0 0/0 .data            l_motionSequenceData */
static daNpcT_MotionSeqMngr_c::sequenceStepData_c l_motionSequenceData[96] = {
    {0, -1, 0},  {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {1, -1, 0},  {-1, 0, 0},  {-1, 0, 0},
    {-1, 0, 0},  {2, -1, 0},  {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {3, -1, 1},  {-1, 0, 0},
    {-1, 0, 0},  {-1, 0, 0},  {4, -1, 1},  {2, 0, 0},   {-1, 0, 0},  {-1, 0, 0},  {5, -1, 0},
    {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {6, 0, 1},   {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},
    {7, -1, 1},  {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {8, 0, 1},   {-1, 0, 0},  {-1, 0, 0},
    {-1, 0, 0},  {9, 4, 1},   {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {10, -1, 1}, {-1, 0, 0},
    {-1, 0, 0},  {-1, 0, 0},  {11, 4, 1},  {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {12, -1, 0},
    {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {13, -1, 0}, {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},
    {14, -1, 1}, {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {15, -1, 1}, {13, 0, 0},  {-1, 0, 0},
    {-1, 0, 0},  {16, -1, 0}, {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {17, 0, 1},  {-1, 0, 0},
    {-1, 0, 0},  {-1, 0, 0},  {18, -1, 1}, {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {19, 0, 1},
    {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {20, 4, 1},  {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},
    {21, -1, 1}, {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {22, 4, 1},  {-1, 0, 0},  {-1, 0, 0},
    {-1, 0, 0},  {23, 0, 0},  {-1, 0, 0},  {-1, 0, 0},  {-1, 0, 0}};

/* 80CD6410-80CD6434 -00001 0024+00 1/1 0/0 0/0 .data            mCutNameList__15daObj_Sekizoa_c */
char* daObj_Sekizoa_c::mCutNameList[9] = {
    "",
    "START",
    "START",
    "TURN",
    "JUMP",
    "GOAL",
    "EXIT",
    "FREE",
    "EXTINCTION",
};

/* 80CD6494-80CD6500 0005BC 006C+00 1/2 0/0 0/0 .data            mCutList__15daObj_Sekizoa_c */
daObj_Sekizoa_c::cutFunc daObj_Sekizoa_c::mCutList[9] = {
    &daObj_Sekizoa_c::cutStart,
    &daObj_Sekizoa_c::cutStart,
    &daObj_Sekizoa_c::cutTurn,
    &daObj_Sekizoa_c::cutJump,
    &daObj_Sekizoa_c::cutGoal,
    &daObj_Sekizoa_c::cutExit,
    &daObj_Sekizoa_c::cutFree,
    &daObj_Sekizoa_c::cutExtinction,
    NULL,
};


// /* 80CD651C-80CD6528 -00001 000C+00 1/1 0/0 0/0 .data            @4906 */
// SECTION_DATA static void* lit_4906[3] = {
//     (void*)NULL,
//     (void*)0xFFFFFFFF,
//     (void*)talk__15daObj_Sekizoa_cFPv,
// };

// /* 80CD6528-80CD6534 -00001 000C+00 1/1 0/0 0/0 .data            @4916 */
// SECTION_DATA static void* lit_4916[3] = {
//     (void*)NULL,
//     (void*)0xFFFFFFFF,
//     (void*)talk__15daObj_Sekizoa_cFPv,
// };

/* 80CD6534-80CD65F4 00065C 00C0+00 1/1 0/0 0/0 .data            yariAnmData$5297 */
SECTION_DATA static u8 yariAnmData[192] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CD65F4-80CD663C 00071C 0048+00 0/0 0/0 0/0 .data            brkAnmData$5345 */
static u32 brkAnmData[18] = {
    0x2A, 0, 1, 0x2B, 0, 1, 
    0x2C, 0, 1, 0x2D, 0, 1,
     0x2E, 0, 1,
    0x29, 0, 1,
};

/* 80CD663C-80CD666C 000764 0030+00 0/0 0/0 0/0 .data            btkAnmData$5346 */
static u32 btkAnmData[12] = {
    0x32, 0, 1, -1,
    0, 0, -1, 0,
    0, 0x31, 0, 1,
};

// /* 80CD666C-80CD66B4 -00001 0048+00 1/1 0/0 0/0 .data            @5484 */
// SECTION_DATA static void* lit_5484[18] = {
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0xE4),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0x84),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0xA8),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0xCC),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0x12C),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0x12C),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0x12C),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0x12C),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0x12C),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0x12C),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0x12C),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0xE4),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0x84),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0xA8),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0xCC),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0x12C),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0x12C),
//     (void*)(((char*)afterSetMotionAnm__15daObj_Sekizoa_cFiifi) + 0x108),
// };

// /* 80CD66B4-80CD66C0 -00001 000C+00 1/1 0/0 0/0 .data            @5491 */
// SECTION_DATA static void* lit_5491[3] = {
//     (void*)NULL,
//     (void*)0xFFFFFFFF,
//     (void*)puzzle__15daObj_Sekizoa_cFPv,
// };

// /* 80CD66C0-80CD66CC -00001 000C+00 1/1 0/0 0/0 .data            @5493 */
// SECTION_DATA static void* lit_5493[3] = {
//     (void*)NULL,
//     (void*)0xFFFFFFFF,
//     (void*)wait__15daObj_Sekizoa_cFPv,
// };

// /* 80CD66CC-80CD66F4 -00001 0028+00 1/1 0/0 0/0 .data            @6834 */
// SECTION_DATA static void* lit_6834[10] = {
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xA80),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xA98),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xAF4),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xB0C),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xB74),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xBC0),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xBD8),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xBE4),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xBE4),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xBE0),
// };

// /* 80CD66F4-80CD671C -00001 0028+00 1/1 0/0 0/0 .data            @6832 */
// SECTION_DATA static void* lit_6832[10] = {
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xC4),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0x11C),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0x1B0),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0x334),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0x33C),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0x3DC),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0x3E4),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xA60),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0xA60),
//     (void*)(((char*)cutGoal__15daObj_Sekizoa_cFi) + 0x698),
// };

/* 80CCE34C-80CCE570 0000EC 0224+00 1/0 0/0 0/0 .text            __dt__15daObj_Sekizoa_cFv */
daObj_Sekizoa_c::~daObj_Sekizoa_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD5CFC-80CD5D98 000000 009C+00 19/19 0/0 0/0 .rodata          m__21daObj_Sekizoa_Param_c */
u8 const daObj_Sekizoa_Param_c::m[156] = {
    0x44, 0x16, 0x00, 0x00, 0xC1, 0x20, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x44, 0x89, 0x80, 0x00,
    0x43, 0x7F, 0x00, 0x00, 0x44, 0x09, 0x80, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0x8C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0xC1, 0xF0, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00, 0xC2, 0x34, 0x00, 0x00,
    0x3F, 0x19, 0x99, 0x9A, 0x41, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0x00, 0x05, 0x00, 0x06,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x3C, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x16, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0x3B, 0x83, 0x12, 0x6F, 0x00, 0x00, 0x00, 0x00,
};

/* 80CD5D98-80CD5DB8 00009C 0020+00 0/1 0/0 0/0 .rodata          heapSize$4093 */
static u32 const heapSize[8] = {
     0x2390,  0x2380,  0x2390,  0x2380,
     0x2350,  0x2340,  0x33E0,  0,
};

/* 80CD5DB8-80CD5DBC 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4170 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4170 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80CD5DB8, &lit_4170);
#pragma pop

/* 80CCE570-80CCE8B0 000310 0340+00 1/1 0/0 0/0 .text            create__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD5DBC-80CD5DC0 0000C0 0004+00 7/21 0/0 0/0 .rodata          @4350 */
SECTION_RODATA static u8 const lit_4350[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80CD5DBC, &lit_4350);

/* 80CD5DC0-80CD5DC4 0000C4 0004+00 0/2 0/0 0/0 .rodata          @4351 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4351 = 65536.0f;
COMPILER_STRIP_GATE(0x80CD5DC0, &lit_4351);
#pragma pop

/* 80CD5DC4-80CD5DC8 0000C8 0004+00 0/3 0/0 0/0 .rodata          @4352 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4352 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80CD5DC4, &lit_4352);
#pragma pop

/* 80CD5DC8-80CD5DCC 0000CC 0004+00 2/10 0/0 0/0 .rodata          @4533 */
SECTION_RODATA static f32 const lit_4533 = 1.0f;
COMPILER_STRIP_GATE(0x80CD5DC8, &lit_4533);

/* 80CCE8B0-80CCEC54 000650 03A4+00 1/1 0/0 0/0 .text            CreateHeap__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::CreateHeap() {
    // NONMATCHING
}

/* 80CCEC54-80CCEC88 0009F4 0034+00 1/1 0/0 0/0 .text            Delete__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::Delete() {
    // NONMATCHING
}

/* 80CCEC88-80CCECA8 000A28 0020+00 2/2 0/0 0/0 .text            Execute__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::Execute() {
    // NONMATCHING
}

/* 80CCECA8-80CCED74 000A48 00CC+00 1/1 0/0 0/0 .text            Draw__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::Draw() {
    // NONMATCHING
}

/* 80CCED74-80CCED94 000B14 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__15daObj_Sekizoa_cFP10fopAc_ac_c          */
void daObj_Sekizoa_c::createHeapCallBack(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80CCED94-80CCEE30 000B34 009C+00 1/1 0/0 0/0 .text            srchSekizoa__15daObj_Sekizoa_cFPvPv
 */
void daObj_Sekizoa_c::srchSekizoa(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD5DCC-80CD5DD0 0000D0 0004+00 1/1 0/0 0/0 .rodata          @4636 */
SECTION_RODATA static f32 const lit_4636 = 1000000000.0f;
COMPILER_STRIP_GATE(0x80CD5DCC, &lit_4636);

/* 80CCEE30-80CCEFA4 000BD0 0174+00 1/1 0/0 0/0 .text            getSekizoaP__15daObj_Sekizoa_cFi */
void daObj_Sekizoa_c::getSekizoaP(int param_0) {
    // NONMATCHING
}

/* 80CCEFA4-80CCF03C 000D44 0098+00 1/1 0/0 0/0 .text            getKMsgTagP__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::getKMsgTagP() {
    // NONMATCHING
}

/* 80CCF03C-80CCF138 000DDC 00FC+00 1/1 0/0 0/0 .text            isDelete__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::isDelete() {
    // NONMATCHING
}

/* 80CCF138-80CCF358 000ED8 0220+00 2/1 0/0 0/0 .text            reset__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::reset() {
    // NONMATCHING
}

/* 80CCF358-80CCF3E4 0010F8 008C+00 1/0 0/0 0/0 .text            afterJntAnm__15daObj_Sekizoa_cFi */
void daObj_Sekizoa_c::afterJntAnm(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD68E0-80CD68E4 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80CD68E4-80CD68E8 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80CD68E8-80CD68EC 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80CD68EC-80CD68F0 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80CD68F0-80CD68F4 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80CD68F4-80CD68F8 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80CD68F8-80CD68FC 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80CD68FC-80CD6900 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80CD6900-80CD6904 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80CD6904-80CD6908 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80CD6908-80CD690C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80CD690C-80CD6910 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80CD6910-80CD6914 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80CD6914-80CD6918 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80CD6918-80CD691C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80CD691C-80CD6920 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80CD6920-80CD692C 000048 000C+00 0/1 0/0 0/0 .bss             @3907 */
#pragma push
#pragma force_active on
static u8 lit_3907[12];
#pragma pop

/* 80CD692C-80CD6938 000054 000C+00 3/4 0/0 0/0 .bss             l_srcPosR */
static u8 l_srcPosR[12];

/* 80CD6938-80CD6944 000060 000C+00 0/1 0/0 0/0 .bss             @3908 */
#pragma push
#pragma force_active on
static u8 lit_3908[12];
#pragma pop

/* 80CD6944-80CD6950 00006C 000C+00 3/4 0/0 0/0 .bss             l_srcPosL */
static u8 l_srcPosL[12];

/* 80CCF3E4-80CCF6BC 001184 02D8+00 1/0 0/0 0/0 .text            setParam__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::setParam() {
    // NONMATCHING
}

/* 80CCF6BC-80CCF704 00145C 0048+00 1/0 0/0 0/0 .text            checkChangeEvt__15daObj_Sekizoa_cFv
 */
BOOL daObj_Sekizoa_c::checkChangeEvt() {
    // NONMATCHING
}

/* 80CCF704-80CCF708 0014A4 0004+00 1/0 0/0 0/0 .text setAfterTalkMotion__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::setAfterTalkMotion() {
    /* empty function */
}

/* 80CCF708-80CCF9A8 0014A8 02A0+00 1/1 0/0 0/0 .text            srchActors__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::srchActors() {
    // NONMATCHING
}

/* 80CCF9A8-80CCFAA8 001748 0100+00 1/0 0/0 0/0 .text            evtTalk__15daObj_Sekizoa_cFv */
BOOL daObj_Sekizoa_c::evtTalk() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD5E64-80CD5E64 000168 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CD5EB3 = "Sekizoa";
SECTION_DEAD static char const* const stringBase_80CD5EBB = "Sekizob";
#pragma pop

/* 80CCFAA8-80CCFBA0 001848 00F8+00 1/0 0/0 0/0 .text            evtCutProc__15daObj_Sekizoa_cFv */
BOOL daObj_Sekizoa_c::evtCutProc() {
    // NONMATCHING
}

/* 80CCFBA0-80CCFD08 001940 0168+00 1/0 0/0 0/0 .text            action__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::action() {
    // NONMATCHING
}

/* 80CCFD08-80CCFD80 001AA8 0078+00 1/0 0/0 0/0 .text            beforeMove__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::beforeMove() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD5DD0-80CD5DD4 0000D4 0004+00 0/1 0/0 0/0 .rodata          @5079 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5079 = 30.0f;
COMPILER_STRIP_GATE(0x80CD5DD0, &lit_5079);
#pragma pop

/* 80CD5DD4-80CD5DDC 0000D8 0004+04 0/1 0/0 0/0 .rodata          @5080 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5080[1 + 1 /* padding */] = {
    0x38C90FDB,
    /* padding */
    0x00000000,
};
COMPILER_STRIP_GATE(0x80CD5DD4, &lit_5080);
#pragma pop

/* 80CD5DDC-80CD5DE4 0000E0 0008+00 1/4 0/0 0/0 .rodata          @5082 */
SECTION_RODATA static u8 const lit_5082[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CD5DDC, &lit_5082);

/* 80CCFD80-80CD009C 001B20 031C+00 1/0 0/0 0/0 .text            setAttnPos__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::setAttnPos() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD5DE4-80CD5DEC 0000E8 0008+00 0/1 0/0 0/0 .rodata          @5140 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5140[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CD5DE4, &lit_5140);
#pragma pop

/* 80CD5DEC-80CD5DF4 0000F0 0008+00 0/1 0/0 0/0 .rodata          @5141 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5141[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CD5DEC, &lit_5141);
#pragma pop

/* 80CD5DF4-80CD5DFC 0000F8 0008+00 0/1 0/0 0/0 .rodata          @5142 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5142[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CD5DF4, &lit_5142);
#pragma pop

/* 80CD5DFC-80CD5E00 000100 0004+00 0/1 0/0 0/0 .rodata          @5233 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5233 = -160.0f;
COMPILER_STRIP_GATE(0x80CD5DFC, &lit_5233);
#pragma pop

/* 80CD5E00-80CD5E04 000104 0004+00 0/1 0/0 0/0 .rodata          @5234 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5234 = 120.0f;
COMPILER_STRIP_GATE(0x80CD5E00, &lit_5234);
#pragma pop

/* 80CD5E04-80CD5E08 000108 0004+00 0/1 0/0 0/0 .rodata          @5235 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5235 = 160.0f;
COMPILER_STRIP_GATE(0x80CD5E04, &lit_5235);
#pragma pop

/* 80CD5E08-80CD5E0C 00010C 0004+00 0/2 0/0 0/0 .rodata          @5236 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5236 = 10.0f;
COMPILER_STRIP_GATE(0x80CD5E08, &lit_5236);
#pragma pop

/* 80CD5E0C-80CD5E10 000110 0004+00 0/1 0/0 0/0 .rodata          @5237 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5237 = -40.0f;
COMPILER_STRIP_GATE(0x80CD5E0C, &lit_5237);
#pragma pop

/* 80CD5E10-80CD5E14 000114 0004+00 0/1 0/0 0/0 .rodata          @5238 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5238 = 140.0f;
COMPILER_STRIP_GATE(0x80CD5E10, &lit_5238);
#pragma pop

/* 80CD009C-80CD03C0 001E3C 0324+00 1/0 0/0 0/0 .text            setCollision__15daObj_Sekizoa_cFv
 */
void daObj_Sekizoa_c::setCollision() {
    // NONMATCHING
}

/* 80CD03C0-80CD03C8 002160 0008+00 1/0 0/0 0/0 .text            drawDbgInfo__15daObj_Sekizoa_cFv */
int daObj_Sekizoa_c::drawDbgInfo() {
    return 0;
}

/* 80CD03C8-80CD04FC 002168 0134+00 1/0 0/0 0/0 .text            drawOtherMdl__15daObj_Sekizoa_cFv
 */
void daObj_Sekizoa_c::drawOtherMdl() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD5E14-80CD5E18 000118 0004+00 2/8 0/0 0/0 .rodata          @5307 */
SECTION_RODATA static f32 const lit_5307 = -1.0f;
COMPILER_STRIP_GATE(0x80CD5E14, &lit_5307);

/* 80CD04FC-80CD05D0 00229C 00D4+00 1/1 0/0 0/0 .text            setYariAnm__15daObj_Sekizoa_cFiif
 */
void daObj_Sekizoa_c::setYariAnm(int param_0, int param_1, f32 param_2) {
    // NONMATCHING
}

/* 80CD05D0-80CD06BC 002370 00EC+00 1/0 0/0 0/0 .text            drawGhost__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::drawGhost() {
    // NONMATCHING
}

/* 80CD06BC-80CD0A84 00245C 03C8+00 2/0 0/0 0/0 .text afterSetMotionAnm__15daObj_Sekizoa_cFiifi */
bool daObj_Sekizoa_c::afterSetMotionAnm(int param_0, int param_1, f32 param_2, int param_3) {
    // NONMATCHING
}

/* 80CD0A84-80CD0B08 002824 0084+00 1/1 0/0 0/0 .text            selectAction__15daObj_Sekizoa_cFv
 */
void daObj_Sekizoa_c::selectAction() {
    // NONMATCHING
}

/* 80CD0B08-80CD0B34 0028A8 002C+00 1/1 0/0 0/0 .text
 * chkAction__15daObj_Sekizoa_cFM15daObj_Sekizoa_cFPCvPvPv_i    */
void daObj_Sekizoa_c::chkAction(int (daObj_Sekizoa_c::*param_0)(void*)) {
    // NONMATCHING
}

/* 80CD0B34-80CD0BDC 0028D4 00A8+00 2/2 0/0 0/0 .text
 * setAction__15daObj_Sekizoa_cFM15daObj_Sekizoa_cFPCvPvPv_i    */
void daObj_Sekizoa_c::setAction(int (daObj_Sekizoa_c::*param_0)(void*)) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD5E18-80CD5E1C 00011C 0004+00 0/0 0/0 0/0 .rodata          @5481 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5481 = 18.0f;
COMPILER_STRIP_GATE(0x80CD5E18, &lit_5481);
#pragma pop

/* 80CD5E1C-80CD5E20 000120 0004+00 0/0 0/0 0/0 .rodata          @5482 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5482 = 36.0f;
COMPILER_STRIP_GATE(0x80CD5E1C, &lit_5482);
#pragma pop

/* 80CD5E20-80CD5E24 000124 0004+00 0/0 0/0 0/0 .rodata          @5483 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5483 = 29.0f;
COMPILER_STRIP_GATE(0x80CD5E20, &lit_5483);
#pragma pop

/* 80CD5E24-80CD5E28 000128 0004+00 0/1 0/0 0/0 .rodata          @5571 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5571 = 33.0f / 100.0f;
COMPILER_STRIP_GATE(0x80CD5E24, &lit_5571);
#pragma pop

/* 80CD5E28-80CD5E2C 00012C 0004+00 0/2 0/0 0/0 .rodata          @5572 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5572 = 0.5f;
COMPILER_STRIP_GATE(0x80CD5E28, &lit_5572);
#pragma pop

/* 80CD5E2C-80CD5E30 000130 0004+00 0/2 0/0 0/0 .rodata          @5573 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5573 = 300.0f;
COMPILER_STRIP_GATE(0x80CD5E2C, &lit_5573);
#pragma pop

/* 80CD5E30-80CD5E34 000134 0004+00 0/2 0/0 0/0 .rodata          @5574 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5574 = -300.0f;
COMPILER_STRIP_GATE(0x80CD5E30, &lit_5574);
#pragma pop

/* 80CD5E34-80CD5E38 000138 0004+00 0/1 0/0 0/0 .rodata          @5575 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5575 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80CD5E34, &lit_5575);
#pragma pop

/* 80CD0BDC-80CD0DE8 00297C 020C+00 1/1 0/0 0/0 .text checkMoveDirection__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::checkMoveDirection() {
    // NONMATCHING
}

/* 80CD0DE8-80CD0E30 002B88 0048+00 3/3 0/0 0/0 .text getWaitMotionNo__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::getWaitMotionNo() {
    // NONMATCHING
}

/* 80CD0E30-80CD0E78 002BD0 0048+00 4/4 0/0 0/0 .text getGameMotionNo__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::getGameMotionNo() {
    // NONMATCHING
}

/* 80CD0E78-80CD0EAC 002C18 0034+00 1/1 0/0 0/0 .text getNoJumpMotionNo__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::getNoJumpMotionNo() {
    // NONMATCHING
}

/* 80CD0EAC-80CD0EE0 002C4C 0034+00 1/1 0/0 0/0 .text            getHitMotionNo__15daObj_Sekizoa_cFv
 */
void daObj_Sekizoa_c::getHitMotionNo() {
    // NONMATCHING
}

/* 80CD0EE0-80CD0F14 002C80 0034+00 2/2 0/0 0/0 .text getStepMotionNo__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::getStepMotionNo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD5E38-80CD5E3C 00013C 0004+00 0/1 0/0 0/0 .rodata          @5817 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5817 = 0.25f;
COMPILER_STRIP_GATE(0x80CD5E38, &lit_5817);
#pragma pop

/* 80CD0F14-80CD14D8 002CB4 05C4+00 2/2 0/0 0/0 .text            jump__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::jump() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD5E3C-80CD5E40 000140 0004+00 0/1 0/0 0/0 .rodata          @5871 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5871 = 100.0f;
COMPILER_STRIP_GATE(0x80CD5E3C, &lit_5871);
#pragma pop

/* 80CD14D8-80CD1688 003278 01B0+00 2/2 0/0 0/0 .text            landing__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::landing() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD5E40-80CD5E48 000144 0008+00 0/1 0/0 0/0 .rodata          @5963 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5963[8] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};
COMPILER_STRIP_GATE(0x80CD5E40, &lit_5963);
#pragma pop

/* 80CD5E48-80CD5E4C 00014C 0004+00 0/2 0/0 0/0 .rodata          @6330 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6330 = 1000.0f;
COMPILER_STRIP_GATE(0x80CD5E48, &lit_6330);
#pragma pop

/* 80CD5E4C-80CD5E50 000150 0004+00 0/1 0/0 0/0 .rodata          @6331 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6331 = 500.0f;
COMPILER_STRIP_GATE(0x80CD5E4C, &lit_6331);
#pragma pop

/* 80CD5E64-80CD5E64 000168 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CD5EC3 = "prm";
SECTION_DEAD static char const* const stringBase_80CD5EC7 = "timer";
SECTION_DEAD static char const* const stringBase_80CD5ECD = "msgNo";
SECTION_DEAD static char const* const stringBase_80CD5ED3 = "@";
#pragma pop

/* 80CD1688-80CD2708 003428 1080+00 2/0 0/0 0/0 .text            cutStart__15daObj_Sekizoa_cFi */
void daObj_Sekizoa_c::cutStart(int param_0) {
    // NONMATCHING
}

/* 80CD2708-80CD2908 0044A8 0200+00 1/0 0/0 0/0 .text            cutTurn__15daObj_Sekizoa_cFi */
void daObj_Sekizoa_c::cutTurn(int param_0) {
    // NONMATCHING
}

/* 80CD2908-80CD2B64 0046A8 025C+00 1/0 0/0 0/0 .text            cutJump__15daObj_Sekizoa_cFi */
void daObj_Sekizoa_c::cutJump(int param_0) {
    // NONMATCHING
}

/* 80CD2B64-80CD376C 004904 0C08+00 3/0 0/0 0/0 .text            cutGoal__15daObj_Sekizoa_cFi */
void daObj_Sekizoa_c::cutGoal(int param_0) {
    // NONMATCHING
}

/* 80CD376C-80CD38F0 00550C 0184+00 1/0 0/0 0/0 .text            cutExit__15daObj_Sekizoa_cFi */
void daObj_Sekizoa_c::cutExit(int param_0) {
    // NONMATCHING
}

/* 80CD38F0-80CD3BD8 005690 02E8+00 1/0 0/0 0/0 .text            cutFree__15daObj_Sekizoa_cFi */
void daObj_Sekizoa_c::cutFree(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CD5E50-80CD5E54 000154 0004+00 0/0 0/0 0/0 .rodata          @6332 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6332 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80CD5E50, &lit_6332);
#pragma pop

/* 80CD5E54-80CD5E58 000158 0004+00 0/1 0/0 0/0 .rodata          @7036 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7036 = 78.0f;
COMPILER_STRIP_GATE(0x80CD5E54, &lit_7036);
#pragma pop

/* 80CD3BD8-80CD3F08 005978 0330+00 1/0 0/0 0/0 .text            cutExtinction__15daObj_Sekizoa_cFi
 */
void daObj_Sekizoa_c::cutExtinction(int param_0) {
    // NONMATCHING
}

/* 80CD3F08-80CD425C 005CA8 0354+00 1/0 0/0 0/0 .text            wait__15daObj_Sekizoa_cFPv */
void daObj_Sekizoa_c::wait(void* param_0) {
    // NONMATCHING
}

/* 80CD425C-80CD45B0 005FFC 0354+00 1/0 0/0 0/0 .text            puzzle__15daObj_Sekizoa_cFPv */
void daObj_Sekizoa_c::puzzle(void* param_0) {
    // NONMATCHING
}

/* 80CD45B0-80CD4778 006350 01C8+00 2/0 0/0 0/0 .text            talk__15daObj_Sekizoa_cFPv */
void daObj_Sekizoa_c::talk(void* param_0) {
    // NONMATCHING
}

/* 80CD4778-80CD4798 006518 0020+00 1/0 0/0 0/0 .text            daObj_Sekizoa_Create__FPv */
static int daObj_Sekizoa_Create(void* i_this) {
    // NONMATCHING
}

/* 80CD4798-80CD47B8 006538 0020+00 1/0 0/0 0/0 .text            daObj_Sekizoa_Delete__FPv */
static int daObj_Sekizoa_Delete(void* i_this) {
    // NONMATCHING
}

/* 80CD47B8-80CD47D8 006558 0020+00 1/0 0/0 0/0 .text            daObj_Sekizoa_Execute__FPv */
static int daObj_Sekizoa_Execute(void* i_this) {
    // NONMATCHING
}

/* 80CD47D8-80CD47F8 006578 0020+00 1/0 0/0 0/0 .text            daObj_Sekizoa_Draw__FPv */
static int daObj_Sekizoa_Draw(void* i_this) {
    // NONMATCHING
}

/* 80CD47F8-80CD4800 006598 0008+00 1/0 0/0 0/0 .text            daObj_Sekizoa_IsDelete__FPv */
static int daObj_Sekizoa_IsDelete(void* i_this) {
    return 1;
}

/* ############################################################################################## */
/* 80CD5E58-80CD5E5C 00015C 0004+00 0/1 0/0 0/0 .rodata          @7372 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7372 = -600.0f;
COMPILER_STRIP_GATE(0x80CD5E58, &lit_7372);
#pragma pop

/* 80CD5E5C-80CD5E60 000160 0004+00 0/1 0/0 0/0 .rodata          @7373 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7373 = 1800.0f;
COMPILER_STRIP_GATE(0x80CD5E5C, &lit_7373);
#pragma pop

/* 80CD5E60-80CD5E64 000164 0004+00 0/1 0/0 0/0 .rodata          @7374 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7374 = 600.0f;
COMPILER_STRIP_GATE(0x80CD5E60, &lit_7374);
#pragma pop

/* 80CD695C-80CD6960 000084 0004+00 0/1 0/0 0/0 .bss             l_HIO */
static daObj_Sekizoa_Param_c l_HIO;


/* 80CD5B84-80CD5C30 007924 00AC+00 1/1 0/0 0/0 .text            chkGoal__15daObj_Sekizoa_cFv */
void daObj_Sekizoa_c::chkGoal() {
    // NONMATCHING
}

/* 80CD671C-80CD673C -00001 0020+00 1/0 0/0 0/0 .data            daObj_Sekizoa_MethodTable */
static actor_method_class daObj_Sekizoa_MethodTable = {
    daObj_Sekizoa_Create,
    daObj_Sekizoa_Delete,
    daObj_Sekizoa_Execute,
    daObj_Sekizoa_IsDelete,
    daObj_Sekizoa_Draw,
};

/* 80CD673C-80CD676C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_SEKIZOA */
extern actor_process_profile_definition g_profile_OBJ_SEKIZOA = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_OBJ_SEKIZOA,        // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daObj_Sekizoa_c), // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  0x12,                    // mPriority
  &daObj_Sekizoa_MethodTable, // sub_method
  0x00040000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

AUDIO_INSTANCES

/* 80CD5E64-80CD5E64 000168 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
