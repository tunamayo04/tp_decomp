#include "dolphin/gf/GFLight.h"
#include "dolphin/gx.h"

/* 802CDE54-802CDE9C 2C8794 0048+00 0/0 0/0 1/1 .text GFSetChanAmbColor__F12_GXChannelID8_GXColor
 */
void GFSetChanAmbColor(_GXChannelID param_0, _GXColor param_1) {
    GFFill((param_0 & 1) + 0x100a,
           param_1.r << 0x18 | param_1.g << 0x10 | param_1.b << 8 | param_1.a);
}