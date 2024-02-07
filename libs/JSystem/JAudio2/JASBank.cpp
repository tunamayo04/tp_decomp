//
// Generated By: dol2asm
// Translation Unit: JASBank
//

#include "JSystem/JAudio2/JASBank.h"
#include "JSystem/JAudio2/JASAiCtrl.h"
#include "JSystem/JAudio2/JASBasicInst.h"
#include "JSystem/JAudio2/JASBasicWaveBank.h"
#include "JSystem/JAudio2/JASChannel.h"
#include "dol2asm.h"

//
// Types:
//

//
// Forward References:
//

extern "C" void noteOn__7JASBankFPC7JASBankiUcUcUsPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv();
extern "C" void noteOnOsc__7JASBankFiUcUcUsPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv();

//
// External References:
//

extern "C" void __ct__17JASGenericMemPoolFv();
extern "C" void alloc__17JASGenericMemPoolFUl();
extern "C" void func_802978DC(void* _this);
extern "C" void __ct__10JASChannelFPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv();
extern "C" void play__10JASChannelFv();
extern "C" void setOscInit__10JASChannelFUlPCQ213JASOscillator4Data();
extern "C" void getDacRate__9JASDriverFv();
extern "C" void __register_global_object();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" extern u8 data_80431B34[16 + 4 /* padding */];
extern "C" extern u8 struct_80451260[8];

//
// Declarations:
//

/* ############################################################################################## */
/* 80431B48-80431B58 05E868 000C+04 2/2 0/0 0/0 .bss             @156 */
static u8 lit_156[12 + 4 /* padding */];

/* 80455630-80455634 003C30 0004+00 1/1 0/0 0/0 .sdata2          @248 */
SECTION_SDATA2 static f32 lit_248 = 1.0f;

/* 80455634-80455638 003C34 0004+00 1/1 0/0 0/0 .sdata2          @249 */
SECTION_SDATA2 static u8 lit_249[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80455638-8045563C 003C38 0004+00 1/1 0/0 0/0 .sdata2          @250 */
SECTION_SDATA2 static f32 lit_250 = 0.5f;

/* 80297930-80297C40 292270 0310+00 0/0 1/1 0/0 .text
 * noteOn__7JASBankFPC7JASBankiUcUcUsPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv */
// vtables for JASWaveBank, JASWaveHandle
#ifdef NONMATCHING
JASChannel* JASBank::noteOn(JASBank const* param_0, int param_1, u8 param_2, u8 param_3, u16 param_4,
                         void (*param_5)(u32, JASChannel*, JASDsp::TChannel*, void*),
                         void* param_6) {
    if (param_1 >= 0xf0) {
        return noteOnOsc(param_1 - 0xf0, param_2, param_3, param_4, param_5, param_6);
    }
    if (!param_0) {
        return NULL;
    }
    JASInstParam stack_60;
    if (!param_0->getInstParam(param_1, param_2, param_3, &stack_60)) {
        return NULL;
    }
    JASWaveBank* waveBank = param_0->getWaveBank();
    if (!waveBank) {
        return NULL;
    }
    JASWaveHandle* waveHandle = waveBank->getWaveHandle(stack_60.field_0x1a);
    if (!waveHandle) {
        return NULL;
    }
    const JASWaveInfo* waveInfo = waveHandle->getWaveInfo();
    if (!waveInfo) {
        return NULL;
    }
    int wavePtr = waveHandle->getWavePtr();
    if (!wavePtr) {
        return NULL;
    }

    JASChannel* channel = new JASChannel(param_5, param_6);
    if (!channel) {
        return NULL;
    }
    channel->setPriority(param_4);
    channel->field_0xdc.field_0x4 = *waveInfo;
    channel->field_0x104 = wavePtr;
    channel->field_0xdc.field_0x0 = stack_60.field_0x1c;
    channel->setBankDisposeID(param_0);
    channel->setInitPitch(stack_60.mPitch * (waveInfo->field_0x04 / JASDriver::getDacRate()));
    if (stack_60.field_0x1e == 0) {
        channel->setKey(param_2 - waveInfo->field_0x01);
    }
    channel->setInitVolume(stack_60.mVolume);
    channel->setVelocity(param_3);
    channel->setInitPan(stack_60.mPan);
    channel->setInitFxmix(stack_60.mFxMix);
    channel->setInitDolby(stack_60.mDolby);
    for (u32 i = 0; i < stack_60.field_0x1d; i++) {
        channel->setOscInit(i, stack_60.field_0x14[i]);
    }
    channel->setDirectRelease(stack_60.field_0x18);
    if (!channel->play()) {
        return NULL;
    }
    return channel;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASChannel* JASBank::noteOn(JASBank const* param_0, int param_1, u8 param_2, u8 param_3, u16 param_4,
                         void (*param_5)(u32, JASChannel*, JASDsp::TChannel*, void*),
                         void* param_6) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBank/noteOn__7JASBankFPC7JASBankiUcUcUsPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8039B190-8039B19C 0277F0 000C+00 1/0 0/0 0/0 .rodata          OSC_RELEASE_TABLE$260 */
SECTION_RODATA static JASOscillator::Point const OSC_RELEASE_TABLE[2] = {
    {0x0001, 0x000A, 0x0000},
    {0x000F, 0x0000, 0x0000},
};
COMPILER_STRIP_GATE(0x8039B190, &OSC_RELEASE_TABLE);

/* 8039B19C-8039B1B8 -00001 0018+04 1/1 0/0 0/0 .rodata          OSC_ENV$261 */
SECTION_RODATA static const JASOscillator::Data OSC_ENV = {
    0, 1.0f, NULL, OSC_RELEASE_TABLE, 1.0f, 0.0f,
};
COMPILER_STRIP_GATE(0x8039B19C, &OSC_ENV);

/* 8045563C-80455640 003C3C 0004+00 1/1 0/0 0/0 .sdata2          @290 */
SECTION_SDATA2 static f32 lit_290 = 16736.015625f;

/* 80297C40-80297D78 292580 0138+00 1/1 0/0 0/0 .text
 * noteOnOsc__7JASBankFiUcUcUsPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv */
// wild ~JASMemPool_MultiThreaded<JASChannel> destructor appeared!
#ifdef NONMATCHING
JASChannel* JASBank::noteOnOsc(int param_0, u8 param_1, u8 param_2, u16 param_3,
                            void (*param_4)(u32, JASChannel*, JASDsp::TChannel*, void*),
                            void* param_5) {
    JASChannel* channel = new JASChannel(param_4, param_5);
    if (!channel) {
        return NULL;
    }
    channel->setPriority(param_3);
    channel->field_0x104 = param_0;
    channel->field_0xdc.field_0x0 = 2;
    channel->setInitPitch(16736.02f / JASDriver::getDacRate());
    channel->setKey(param_1 - channel->field_0xdc.field_0x4.field_0x01);
    channel->setVelocity(param_2);
    channel->setOscInit(0, &OSC_ENV);
    if (!channel->play()) {
        return NULL;
    }
    return channel;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASChannel* JASBank::noteOnOsc(int param_0, u8 param_1, u8 param_2, u16 param_3,
                            void (*param_4)(u32, JASChannel*, JASDsp::TChannel*, void*),
                            void* param_5) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBank/noteOnOsc__7JASBankFiUcUcUsPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv.s"
}
#pragma pop
#endif
