/**
 * @file d_a_demo_item.cpp
 * 
*/

#include "rel/d/a/d_a_demo_item/d_a_demo_item.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" bool __CreateHeap__9daDitem_cFv();
extern "C" void CreateInit__9daDitem_cFv();
extern "C" void action__9daDitem_cFv();
extern "C" void actionStart__9daDitem_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void actionEvent__9daDitem_cFv();
extern "C" void actionWaitLightEnd__9daDitem_cFv();
extern "C" void actionEnd__9daDitem_cFv();
extern "C" void setInsectEffect__9daDitem_cFv();
extern "C" void followInsectEffect__9daDitem_cFv();
extern "C" void endInsectEffect__9daDitem_cFv();
extern "C" void onEventReg__9daDitem_cFii();
extern "C" void set_pos__9daDitem_cFv();
extern "C" void anim_control__9daDitem_cFv();
extern "C" void initEffectLight__9daDitem_cFv();
extern "C" void settingEffectLight__9daDitem_cFv();
extern "C" void set_mtx__9daDitem_cFv();
extern "C" void setTevStr__9daDitem_cFv();
extern "C" void setListStart__9daDitem_cFv();
extern "C" void draw_WOOD_STICK__9daDitem_cFv();
extern "C" static void daDitem_Delete__FP9daDitem_c();
extern "C" static void daDitem_Create__FP9daDitem_c();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static void daDitem_Execute__FP9daDitem_c();
extern "C" static void daDitem_Draw__FP9daDitem_c();
extern "C" void __sinit_d_a_demo_item_cpp();
extern "C" static void func_804E19B0();
extern "C" static void func_804E19B8();
extern "C" extern char const* const d_a_demo_item__stringBase0;

//
// External References:
//

SECTION_INIT void __init_data();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_addAngleY__FP10fopAc_ac_css();
extern "C" void fopDwTg_ToDrawQ__FP16create_tag_classi();
extern "C" void fopDwTg_DrawQTo__FP16create_tag_class();
extern "C" void fpcLf_GetPriority__FPC14leafdraw_class();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void setEventReg__11dSv_event_cFUsUc();
extern "C" void getEventReg__11dSv_event_cCFUs();
extern "C" void hide__12daItemBase_cFv();
extern "C" void chkDraw__12daItemBase_cFv();
extern "C" void chkDead__12daItemBase_cFv();
extern "C" void CheckItemCreateHeap__FP10fopAc_ac_c();
extern "C" void __ct__19dPa_followEcallBackFUcUc();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void execItemGet__FUc();
extern "C" void isInsect__FUc();
extern "C" void DeleteBase__12daItemBase_cFPCc();
extern "C" bool clothCreate__12daItemBase_cFv();
extern "C" void DrawBase__12daItemBase_cFv();
extern "C" void RotateYBase__12daItemBase_cFv();
extern "C" void settingBeforeDraw__12daItemBase_cFv();
extern "C" void setShadow__12daItemBase_cFv();
extern "C" void animEntry__12daItemBase_cFv();
extern "C" void animPlay__12daItemBase_cFffffff();
extern "C" void chkFlag__12daItemBase_cFi();
extern "C" void getTevFrm__12daItemBase_cFv();
extern "C" void getBtpFrm__12daItemBase_cFv();
extern "C" void getShadowSize__12daItemBase_cFv();
extern "C" void getCollisionH__12daItemBase_cFv();
extern "C" void getCollisionR__12daItemBase_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_efplight_set__FP15LIGHT_INFLUENCE();
extern "C" void dKy_efplight_cut__FP15LIGHT_INFLUENCE();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_chaseUC__FPUcUcUc();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void getName__10JUTNameTabCFUs();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" void* item_resource__10dItem_data[1530];
extern "C" extern void* __vt__12daItemBase_c[17 + 1 /* padding */];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mStayNo__20dStage_roomControl_c[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* 804DFBCC-804DFBD4 0000EC 0008+00 1/0 0/0 0/0 .text            __CreateHeap__9daDitem_cFv */
bool daDitem_c::__CreateHeap() {
    return true;
}

/* ############################################################################################## */
/* 804E19D4-804E19D8 000000 0004+00 6/6 0/0 0/0 .rodata          l_light_color */
SECTION_RODATA static u32 const l_light_color = 0x8C7C6AFF;
COMPILER_STRIP_GATE(0x804E19D4, &l_light_color);

/* 804E19D8-804E19DC 000004 0004+00 4/7 0/0 0/0 .rodata          @3812 */
SECTION_RODATA static f32 const lit_3812 = 1.0f;
COMPILER_STRIP_GATE(0x804E19D8, &lit_3812);

/* 804E19DC-804E19E0 000008 0004+00 2/6 0/0 0/0 .rodata          @3813 */
SECTION_RODATA static u8 const lit_3813[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x804E19DC, &lit_3813);

/* 804DFBD4-804DFC98 0000F4 00C4+00 1/1 0/0 0/0 .text            CreateInit__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::CreateInit() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/CreateInit__9daDitem_cFv.s"
}
#pragma pop

/* 804DFC98-804DFD10 0001B8 0078+00 1/1 0/0 0/0 .text            action__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::action() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/action__9daDitem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804E19E0-804E19E4 00000C 0004+00 0/1 0/0 0/0 .rodata          @3927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3927 = 11.0f / 20.0f;
COMPILER_STRIP_GATE(0x804E19E0, &lit_3927);
#pragma pop

/* 804E19E4-804E19E8 000010 0004+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3928 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x804E19E4, &lit_3928);
#pragma pop

/* 804E19E8-804E19EC 000014 0004+00 0/1 0/0 0/0 .rodata          @3929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3929 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x804E19E8, &lit_3929);
#pragma pop

/* 804DFD10-804E00A0 000230 0390+00 1/1 0/0 0/0 .text            actionStart__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::actionStart() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/actionStart__9daDitem_cFv.s"
}
#pragma pop

/* 804E00A0-804E00DC 0005C0 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cXyz::~cXyz() {
extern "C" asm void __dt__4cXyzFv() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804E19EC-804E19F0 000018 0004+00 1/1 0/0 0/0 .rodata          @4145 */
SECTION_RODATA static f32 const lit_4145 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x804E19EC, &lit_4145);

/* 804E1A4C-804E1A4C 000078 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804E1A4C = "F_SP116";
SECTION_DEAD static char const* const stringBase_804E1A54 = "F_SP118";
SECTION_DEAD static char const* const stringBase_804E1A5C = "F_SP121";
SECTION_DEAD static char const* const stringBase_804E1A64 = "D_SB06";
SECTION_DEAD static char const* const stringBase_804E1A6B = "F_SP115";
SECTION_DEAD static char const* const stringBase_804E1A73 = "F_SP108";
SECTION_DEAD static char const* const stringBase_804E1A7B = "F_SP110";
SECTION_DEAD static char const* const stringBase_804E1A83 = "F_SP109";
SECTION_DEAD static char const* const stringBase_804E1A8B = "F_SP126";
SECTION_DEAD static char const* const stringBase_804E1A93 = "D_MN05";
SECTION_DEAD static char const* const stringBase_804E1A9A = "D_MN04";
SECTION_DEAD static char const* const stringBase_804E1AA1 = "D_MN01";
SECTION_DEAD static char const* const stringBase_804E1AA8 = "D_MN10";
SECTION_DEAD static char const* const stringBase_804E1AAF = "D_MN11";
SECTION_DEAD static char const* const stringBase_804E1AB6 = "D_MN06";
SECTION_DEAD static char const* const stringBase_804E1ABD = "D_MN07";
SECTION_DEAD static char const* const stringBase_804E1AC4 = "D_MN08";
SECTION_DEAD static char const* const stringBase_804E1ACB = "F_SP128";
SECTION_DEAD static char const* const stringBase_804E1AD3 = "F_SP114";
SECTION_DEAD static char const* const stringBase_804E1ADB = "F_SP00";
SECTION_DEAD static char const* const stringBase_804E1AE2 = "F_SP127";
SECTION_DEAD static char const* const stringBase_804E1AEA = "D_SB02";
SECTION_DEAD static char const* const stringBase_804E1AF1 = "D_SB03";
SECTION_DEAD static char const* const stringBase_804E1AF8 = "D_SB04";
SECTION_DEAD static char const* const stringBase_804E1AFF = "D_SB00";
SECTION_DEAD static char const* const stringBase_804E1B06 = "F_SP117";
#pragma pop

/* 804E00DC-804E0A50 0005FC 0974+00 1/1 0/0 0/0 .text            actionEvent__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::actionEvent() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/actionEvent__9daDitem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804E19F0-804E19F4 00001C 0004+00 0/1 0/0 0/0 .rodata          @4175 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4175 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x804E19F0, &lit_4175);
#pragma pop

/* 804E19F4-804E19F8 000020 0004+00 0/1 0/0 0/0 .rodata          @4176 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4176 = 3.0f;
COMPILER_STRIP_GATE(0x804E19F4, &lit_4176);
#pragma pop

/* 804E0A50-804E0B40 000F70 00F0+00 1/1 0/0 0/0 .text            actionWaitLightEnd__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::actionWaitLightEnd() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/actionWaitLightEnd__9daDitem_cFv.s"
}
#pragma pop

/* 804E0B40-804E0B60 001060 0020+00 1/1 0/0 0/0 .text            actionEnd__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::actionEnd() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/actionEnd__9daDitem_cFv.s"
}
#pragma pop

/* 804E0B60-804E0C44 001080 00E4+00 1/1 0/0 0/0 .text            setInsectEffect__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::setInsectEffect() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/setInsectEffect__9daDitem_cFv.s"
}
#pragma pop

/* 804E0C44-804E0CB0 001164 006C+00 1/1 0/0 0/0 .text            followInsectEffect__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::followInsectEffect() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/followInsectEffect__9daDitem_cFv.s"
}
#pragma pop

/* 804E0CB0-804E0D44 0011D0 0094+00 2/2 0/0 0/0 .text            endInsectEffect__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::endInsectEffect() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/endInsectEffect__9daDitem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804E19F8-804E1A04 000024 000C+00 1/1 0/0 0/0 .rodata          l_event_reg$4260 */
SECTION_RODATA static u8 const l_event_reg[12] = {
    0xF0, 0xFF, 0xEF, 0xFF, 0xEE, 0xFF, 0xED, 0xFF, 0xEC, 0xFF, 0xEB, 0xFF,
};
COMPILER_STRIP_GATE(0x804E19F8, &l_event_reg);

/* 804E0D44-804E0DB4 001264 0070+00 1/1 0/0 0/0 .text            onEventReg__9daDitem_cFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::onEventReg(int param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/onEventReg__9daDitem_cFii.s"
}
#pragma pop

/* ############################################################################################## */
/* 804E1A04-804E1A08 000030 0004+00 0/1 0/0 0/0 .rodata          @4361 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4361 = 200.0f;
COMPILER_STRIP_GATE(0x804E1A04, &lit_4361);
#pragma pop

/* 804E1A08-804E1A0C 000034 0004+00 0/1 0/0 0/0 .rodata          @4362 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4362 = 90.0f;
COMPILER_STRIP_GATE(0x804E1A08, &lit_4362);
#pragma pop

/* 804E1A0C-804E1A10 000038 0004+00 0/1 0/0 0/0 .rodata          @4363 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4363 = 50.0f;
COMPILER_STRIP_GATE(0x804E1A0C, &lit_4363);
#pragma pop

/* 804E1A10-804E1A14 00003C 0004+00 0/1 0/0 0/0 .rodata          @4364 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4364 = 30.0f;
COMPILER_STRIP_GATE(0x804E1A10, &lit_4364);
#pragma pop

/* 804E1A14-804E1A18 000040 0004+00 0/1 0/0 0/0 .rodata          @4365 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4365 = 140.0f;
COMPILER_STRIP_GATE(0x804E1A14, &lit_4365);
#pragma pop

/* 804E1A18-804E1A1C 000044 0004+00 0/2 0/0 0/0 .rodata          @4366 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4366 = 20.0f;
COMPILER_STRIP_GATE(0x804E1A18, &lit_4366);
#pragma pop

/* 804E1BE8-804E1BEC 000008 0001+03 2/2 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 804E1BEC-804E1BF0 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 804E1BF0-804E1BF4 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 804E1BF4-804E1BF8 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 804E1BF8-804E1BFC 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 804E1BFC-804E1C00 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 804E1C00-804E1C04 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 804E1C04-804E1C08 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 804E1C08-804E1C0C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 804E1C0C-804E1C10 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 804E1C10-804E1C14 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 804E1C14-804E1C18 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 804E1C18-804E1C1C 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 804E1C1C-804E1C20 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 804E1C20-804E1C24 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 804E1C24-804E1C28 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 804E1C28-804E1C34 000048 000C+00 0/1 0/0 0/0 .bss             @3758 */
#pragma push
#pragma force_active on
static u8 lit_3758[12];
#pragma pop

/* 804E1C34-804E1C40 000054 000C+00 0/2 0/0 0/0 .bss             l_player_offset */
#pragma push
#pragma force_active on
static u8 l_player_offset[12];
#pragma pop

/* 804E1C40-804E1C4C 000060 000C+00 0/1 0/0 0/0 .bss             @3759 */
#pragma push
#pragma force_active on
static u8 lit_3759[12];
#pragma pop

/* 804E1C4C-804E1C58 00006C 000C+00 0/2 0/0 0/0 .bss             l_wolf_offset */
#pragma push
#pragma force_active on
static u8 l_wolf_offset[12];
#pragma pop

/* 804E1C58-804E1C64 000078 000C+00 0/1 0/0 0/0 .bss             @3760 */
#pragma push
#pragma force_active on
static u8 lit_3760[12];
#pragma pop

/* 804E1C64-804E1C70 000084 000C+00 0/2 0/0 0/0 .bss             l_horse_offset */
#pragma push
#pragma force_active on
static u8 l_horse_offset[12];
#pragma pop

/* 804E1C70-804E1C80 000090 000C+04 0/1 0/0 0/0 .bss             @4275 */
#pragma push
#pragma force_active on
static u8 lit_4275[12 + 4 /* padding */];
#pragma pop

/* 804E1C80-804E1C8C 0000A0 000C+00 0/1 0/0 0/0 .bss             @4278 */
#pragma push
#pragma force_active on
static u8 lit_4278[12];
#pragma pop

/* 804E1C8C-804E1C98 0000AC 000C+00 0/1 0/0 0/0 .bss             @4279 */
#pragma push
#pragma force_active on
static u8 lit_4279[12];
#pragma pop

/* 804E1C98-804E1CBC 0000B8 0024+00 0/1 0/0 0/0 .bss             offset_tbl$4274 */
#pragma push
#pragma force_active on
static u8 offset_tbl[36];
#pragma pop

/* 804E0DB4-804E105C 0012D4 02A8+00 1/1 0/0 0/0 .text            set_pos__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::set_pos() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/set_pos__9daDitem_cFv.s"
}
#pragma pop

/* 804E105C-804E1098 00157C 003C+00 1/1 0/0 0/0 .text            anim_control__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::anim_control() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/anim_control__9daDitem_cFv.s"
}
#pragma pop

/* 804E1098-804E10D0 0015B8 0038+00 1/1 0/0 0/0 .text            initEffectLight__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::initEffectLight() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/initEffectLight__9daDitem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804E1A1C-804E1A20 000048 0004+00 1/2 0/0 0/0 .rodata          @4394 */
SECTION_RODATA static f32 const lit_4394 = 0.5f;
COMPILER_STRIP_GATE(0x804E1A1C, &lit_4394);

/* 804E1A20-804E1A24 00004C 0004+00 1/1 0/0 0/0 .rodata          @4395 */
SECTION_RODATA static f32 const lit_4395 = 8.0f;
COMPILER_STRIP_GATE(0x804E1A20, &lit_4395);

/* 804E10D0-804E111C 0015F0 004C+00 2/2 0/0 0/0 .text            settingEffectLight__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::settingEffectLight() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/settingEffectLight__9daDitem_cFv.s"
}
#pragma pop

/* 804E111C-804E11D4 00163C 00B8+00 2/2 0/0 0/0 .text            set_mtx__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::set_mtx() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/set_mtx__9daDitem_cFv.s"
}
#pragma pop

/* 804E11D4-804E122C 0016F4 0058+00 1/0 0/0 0/0 .text            setTevStr__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::setTevStr() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/setTevStr__9daDitem_cFv.s"
}
#pragma pop

/* 804E122C-804E1230 00174C 0004+00 1/0 0/0 0/0 .text            setListStart__9daDitem_cFv */
void daDitem_c::setListStart() {
    /* empty function */
}

/* ############################################################################################## */
/* 804E1A24-804E1A2C 000050 0008+00 1/1 0/0 0/0 .rodata          nodisp_mat$4435 */
SECTION_RODATA static u8 const nodisp_mat[8] = {
    0x70, 0x61, 0x72, 0x74, 0x73, 0x5F, 0x6D, 0x00,
};
COMPILER_STRIP_GATE(0x804E1A24, &nodisp_mat);

/* 804E1230-804E12C8 001750 0098+00 1/1 0/0 0/0 .text            draw_WOOD_STICK__9daDitem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daDitem_c::draw_WOOD_STICK() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/draw_WOOD_STICK__9daDitem_cFv.s"
}
#pragma pop

/* 804E12C8-804E13C8 0017E8 0100+00 1/0 0/0 0/0 .text            daDitem_Delete__FP9daDitem_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDitem_Delete(daDitem_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/daDitem_Delete__FP9daDitem_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 804E1B10-804E1B30 -00001 0020+00 1/0 0/0 0/0 .data            l_daDitem_Method */
static actor_method_class l_daDitem_Method = {
    (process_method_func)daDitem_Create__FP9daDitem_c,
    (process_method_func)daDitem_Delete__FP9daDitem_c,
    (process_method_func)daDitem_Execute__FP9daDitem_c,
    0,
    (process_method_func)daDitem_Draw__FP9daDitem_c,
};

/* 804E1B30-804E1B60 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Demo_Item */
extern actor_process_profile_definition g_profile_Demo_Item = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Demo_Item,         // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daDitem_c),      // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  241,                    // mPriority
  &l_daDitem_Method,      // sub_method
  0x00060000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 804E1B60-804E1B6C 000050 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 804E1B6C-804E1B78 00005C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 804E1B78-804E1B9C 000068 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804E19B8,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804E19B0,
};

/* 804E1B9C-804E1BE0 00008C 0044+00 1/1 0/0 0/0 .data            __vt__9daDitem_c */
SECTION_DATA extern void* __vt__9daDitem_c[17] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)DrawBase__12daItemBase_cFv,
    (void*)setListStart__9daDitem_cFv,
    (void*)settingBeforeDraw__12daItemBase_cFv,
    (void*)setTevStr__9daDitem_cFv,
    (void*)setShadow__12daItemBase_cFv,
    (void*)animEntry__12daItemBase_cFv,
    (void*)RotateYBase__12daItemBase_cFv,
    (void*)clothCreate__12daItemBase_cFv,
    (void*)__CreateHeap__9daDitem_cFv,
    (void*)chkFlag__12daItemBase_cFi,
    (void*)getTevFrm__12daItemBase_cFv,
    (void*)getBtpFrm__12daItemBase_cFv,
    (void*)getShadowSize__12daItemBase_cFv,
    (void*)getCollisionH__12daItemBase_cFv,
    (void*)getCollisionR__12daItemBase_cFv,
};

/* 804E13C8-804E15BC 0018E8 01F4+00 1/0 0/0 0/0 .text            daDitem_Create__FP9daDitem_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDitem_Create(daDitem_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/daDitem_Create__FP9daDitem_c.s"
}
#pragma pop

/* 804E15BC-804E1604 001ADC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGCyl::~cM3dGCyl() {
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 804E1604-804E164C 001B24 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 804E164C-804E16BC 001B6C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" asm void __dt__12dBgS_ObjAcchFv() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804E1A2C-804E1A30 000058 0004+00 0/1 0/0 0/0 .rodata          @4668 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4668 = 7.0f / 20.0f;
COMPILER_STRIP_GATE(0x804E1A2C, &lit_4668);
#pragma pop

/* 804E1A30-804E1A34 00005C 0004+00 0/1 0/0 0/0 .rodata          @4669 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4669 = 10.0f;
COMPILER_STRIP_GATE(0x804E1A30, &lit_4669);
#pragma pop

/* 804E1A34-804E1A38 000060 0004+00 0/1 0/0 0/0 .rodata          @4670 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4670 = 15.0f;
COMPILER_STRIP_GATE(0x804E1A34, &lit_4670);
#pragma pop

/* 804E16BC-804E1878 001BDC 01BC+00 1/0 0/0 0/0 .text            daDitem_Execute__FP9daDitem_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDitem_Execute(daDitem_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/daDitem_Execute__FP9daDitem_c.s"
}
#pragma pop

/* 804E1878-804E18CC 001D98 0054+00 1/0 0/0 0/0 .text            daDitem_Draw__FP9daDitem_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daDitem_Draw(daDitem_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/daDitem_Draw__FP9daDitem_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 804E1A38-804E1A3C 000064 0004+00 0/1 0/0 0/0 .rodata          @4716 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4716 = 115.0f;
COMPILER_STRIP_GATE(0x804E1A38, &lit_4716);
#pragma pop

/* 804E1A3C-804E1A40 000068 0004+00 0/1 0/0 0/0 .rodata          @4717 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4717 = 54.0f;
COMPILER_STRIP_GATE(0x804E1A3C, &lit_4717);
#pragma pop

/* 804E1A40-804E1A44 00006C 0004+00 0/1 0/0 0/0 .rodata          @4718 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4718 = 13.0f;
COMPILER_STRIP_GATE(0x804E1A40, &lit_4718);
#pragma pop

/* 804E1A44-804E1A48 000070 0004+00 0/1 0/0 0/0 .rodata          @4719 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4719 = 135.0f;
COMPILER_STRIP_GATE(0x804E1A44, &lit_4719);
#pragma pop

/* 804E1A48-804E1A4C 000074 0004+00 0/1 0/0 0/0 .rodata          @4720 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4720 = 57.0f;
COMPILER_STRIP_GATE(0x804E1A48, &lit_4720);
#pragma pop

/* 804E18CC-804E19B0 001DEC 00E4+00 0/0 1/0 0/0 .text            __sinit_d_a_demo_item_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_demo_item_cpp() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/__sinit_d_a_demo_item_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x804E18CC, __sinit_d_a_demo_item_cpp);
#pragma pop

/* 804E19B0-804E19B8 001ED0 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_804E19B0() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/func_804E19B0.s"
}
#pragma pop

/* 804E19B8-804E19C0 001ED8 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_804E19B8() {
    nofralloc
#include "asm/rel/d/a/d_a_demo_item/d_a_demo_item/func_804E19B8.s"
}
#pragma pop

/* ############################################################################################## */
/* 804E1CBC-804E1CC0 0000DC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_804E1CBC[4];
#pragma pop

/* 804E1CC0-804E1CC4 0000E0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_804E1CC0[4];
#pragma pop

/* 804E1CC4-804E1CC8 0000E4 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_804E1CC4[4];
#pragma pop

/* 804E1CC8-804E1CCC 0000E8 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804E1CC8[4];
#pragma pop

/* 804E1CCC-804E1CD0 0000EC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804E1CCC[4];
#pragma pop

/* 804E1CD0-804E1CD4 0000F0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804E1CD0[4];
#pragma pop

/* 804E1CD4-804E1CD8 0000F4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_804E1CD4[4];
#pragma pop

/* 804E1CD8-804E1CDC 0000F8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_804E1CD8[4];
#pragma pop

/* 804E1CDC-804E1CE0 0000FC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_804E1CDC[4];
#pragma pop

/* 804E1CE0-804E1CE4 000100 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_804E1CE0[4];
#pragma pop

/* 804E1CE4-804E1CE8 000104 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_804E1CE4[4];
#pragma pop

/* 804E1CE8-804E1CEC 000108 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804E1CE8[4];
#pragma pop

/* 804E1CEC-804E1CF0 00010C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_804E1CEC[4];
#pragma pop

/* 804E1CF0-804E1CF4 000110 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804E1CF0[4];
#pragma pop

/* 804E1CF4-804E1CF8 000114 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804E1CF4[4];
#pragma pop

/* 804E1CF8-804E1CFC 000118 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_804E1CF8[4];
#pragma pop

/* 804E1CFC-804E1D00 00011C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_804E1CFC[4];
#pragma pop

/* 804E1D00-804E1D04 000120 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804E1D00[4];
#pragma pop

/* 804E1D04-804E1D08 000124 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_804E1D04[4];
#pragma pop

/* 804E1D08-804E1D0C 000128 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_804E1D08[4];
#pragma pop

/* 804E1D0C-804E1D10 00012C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_804E1D0C[4];
#pragma pop

/* 804E1D10-804E1D14 000130 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804E1D10[4];
#pragma pop

/* 804E1D14-804E1D18 000134 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804E1D14[4];
#pragma pop

/* 804E1D18-804E1D1C 000138 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804E1D18[4];
#pragma pop

/* 804E1D1C-804E1D20 00013C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_804E1D1C[4];
#pragma pop

/* 804E1A4C-804E1A4C 000078 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
