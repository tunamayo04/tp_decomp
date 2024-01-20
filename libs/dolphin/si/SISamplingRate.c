#include "dolphin/si/SISamplingRate.h"
#include "dolphin/os.h"
#include "dolphin/vi.h"

u32 VIGetTvFormat();

/* ############################################################################################## */
/* 803D12D0-803D1300 02E3F0 0030+00 1/1 0/0 0/0 .data            XYNTSC */
static XY XYNTSC[12] = {
    {263 - 17, 2}, {14, 19}, {30, 9}, {44, 6},  {52, 5},  {65, 4},
    {87, 3},       {87, 3},  {87, 3}, {131, 2}, {131, 2}, {131, 2},
};

/* 803D1300-803D1330 02E420 0030+00 0/1 0/0 0/0 .data            XYPAL */
#pragma push
#pragma force_active on
static XY XYPAL[12] = {
    {313 - 17, 2}, {15, 21}, {29, 11}, {45, 7},  {52, 6},  {63, 5},
    {78, 4},       {104, 3}, {104, 3}, {104, 3}, {104, 3}, {156, 2},
};
#pragma pop

/* 80451700-80451708 000C00 0004+04 2/2 0/0 0/0 .sbss            SamplingRate */
static u32 SamplingRate;

/* 80346290-80346374 340BD0 00E4+00 1/1 1/1 0/0 .text            SISetSamplingRate */
void SISetSamplingRate(u32 msec) {
    XY* xy;
    BOOL enabled;

    if (msec > 11) {
        msec = 11;
    }

    enabled = OSDisableInterrupts();

    SamplingRate = msec;

    switch (VIGetTvFormat()) {
    case VI_NTSC:
    case VI_MPAL:
    case VI_EURGB60:
        xy = XYNTSC;
        break;
    case VI_PAL:
        xy = XYPAL;
        break;
    default:
        OSReport("SISetSamplingRate: unknown TV format. Use default.");
        msec = 0;
        xy = XYNTSC;
        break;
    }

    SISetXY((__VIRegs[54] & 1 ? 2u : 1u) * xy[msec].line, xy[msec].count);
    OSRestoreInterrupts(enabled);
}

/* 80346374-80346398 340CB4 0024+00 0/0 2/2 0/0 .text            SIRefreshSamplingRate */
void SIRefreshSamplingRate() {
    SISetSamplingRate(SamplingRate);
}
