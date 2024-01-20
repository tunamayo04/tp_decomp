#include "dolphin/gf/GFTev.h"
#include "dolphin/gx.h"

/* 802CE0D0-802CE138 2C8A10 0068+00 0/0 0/0 1/1 .text
 * GFSetTevColorS10__F11_GXTevRegID11_GXColorS10                */
void GFSetTevColorS10(_GXTevRegID param_0, _GXColorS10 param_1) {
    u32 uVar1 = (param_1.r & 0x7ffU) | ((param_1.a & 0x7ffU) << 12) | ((param_0 * 2 + 0xe0) << 24);
    u32 uVar2 = (param_1.b & 0x7ffU) | ((param_1.g & 0x7ffU) << 12) | ((param_0 * 2 + 0xe1) << 24);

    GFWriteBPCmd(uVar1);
    GFWriteBPCmd(uVar2);
    GFWriteBPCmd(uVar2);
    GFWriteBPCmd(uVar2);
}
