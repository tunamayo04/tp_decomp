//
// Generated By: dol2asm
// Translation Unit: JASAudioThread
//

#include "JSystem/JAudio2/JASAudioThread.h"
#include "JSystem/JAudio2/JASDriverIF.h"
#include "JSystem/JAudio2/JASHeapCtrl.h"
#include "JSystem/JKernel/JKRSolidHeap.h"
#include "dol2asm.h"
#include "dolphin/os.h"
#include "dolphin/dsp.h"

//
// Types:
//

struct JASProbe {
    /* 80290EE4 */ static void start(s32, char const*);
    /* 80290F24 */ static void stop(s32);
};

/* JASMemPool_MultiThreaded<JASChannel> */
struct JASMemPool_MultiThreaded__template2 {
    /* 802978DC */ void func_802978DC(void* _this);
};



struct JASDsp {
    /* 8029D958 */ static void boot(void (*)(void*));
    /* 8029D9C4 */ static void finishWork(u16);
    /* 8029DAC8 */ static void initBuffer();
};

struct JASDSPChannel {
    /* 8029D3C8 */ static void initAll();
};

//
// Forward References:
//

extern "C" void __ct__14JASAudioThreadFiiUl();
extern "C" void create__14JASAudioThreadFl();
extern "C" void stop__14JASAudioThreadFv();
extern "C" void run__14JASAudioThreadFv();
extern "C" void DMACallback__14JASAudioThreadFv();
extern "C" void DSPCallback__14JASAudioThreadFPv();
extern "C" void __dt__14JASAudioThreadFv();
extern "C" extern char const* const JASAudioThread__stringBase0;
extern "C" u8 snIntCount__14JASAudioThread[4 + 4 /* padding */];

//
// External References:
//

extern "C" void __ct__17JASGenericMemPoolFv();
extern "C" void newMemPool__17JASGenericMemPoolFUli();
extern "C" void start__8JASProbeFlPCc();
extern "C" void stop__8JASProbeFl();
extern "C" void func_802978DC(void* _this);
extern "C" void initAI__9JASDriverFPFv_v();
extern "C" void startDMA__9JASDriverFv();
extern "C" void stopDMA__9JASDriverFv();
extern "C" void updateDac__9JASDriverFv();
extern "C" void updateDSP__9JASDriverFv();
extern "C" void finishDSPFrame__9JASDriverFv();
extern "C" void initAll__13JASDSPChannelFv();
extern "C" void boot__6JASDspFPFPv_v();
extern "C" void finishWork__6JASDspFUs();
extern "C" void initBuffer__6JASDspFv();
extern "C" void updateDacCallback__9JASDriverFv();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __ct__9JKRThreadFP7JKRHeapUlii();
extern "C" void __dt__9JKRThreadFv();
extern "C" void __register_global_object();
extern "C" extern u8 data_80431B34[16 + 4 /* padding */];
extern "C" extern u8 struct_80451260[8];
extern "C" u8 sSystemHeap__7JKRHeap[4];
extern "C" u8 sCurrentHeap__7JKRHeap[4];
extern "C" extern u8 __OSReport_disable;

//
// Declarations:
//

/* ############################################################################################## */

/* 8029CCDC-8029CD4C 29761C 0070+00 1/1 0/0 0/0 .text            __ct__14JASAudioThreadFiiUl */
JASAudioThread::JASAudioThread(int stackSize, int msgCount, u32 threadPriority)
    : 
    JKRThread(JASDram, threadPriority, msgCount, stackSize),
    JASGlobalInstance<JASAudioThread>(true)
{
    sbPauseFlag = false;
    OSInitThreadQueue(&sThreadQueue);
}

/* 8029CD4C-8029CDC0 29768C 0074+00 0/0 1/1 0/0 .text            create__14JASAudioThreadFl */
void JASAudioThread::create(long threadPriority) {
	JASAudioThread* sAudioThread = new (JASDram, 0) JASAudioThread(threadPriority, 0x10, 0x1400);
    sAudioThread->setCurrentHeap(JKRGetSystemHeap());
	sAudioThread->resume();
}

/* 8029CDC0-8029CDEC 297700 002C+00 0/0 1/1 0/0 .text            stop__14JASAudioThreadFv */
void JASAudioThread::stop() {
    jamMessageBlock((void*)2);
}

/* ############################################################################################## */
/* 8039B338-8039B338 027998 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039B338 = "SFR_DSP";
#pragma pop

/* 80431C68-80431C78 05E988 000C+04 1/1 0/0 0/0 .bss             @205 */
static u8 lit_205[12 + 4 /* padding */];

/* 804512D8-804512E0 0007D8 0004+04 1/1 2/2 0/0 .sbss            snIntCount__14JASAudioThread */
volatile int JASAudioThread::snIntCount;

class Lock {
public:
    Lock() {
        mInterrupts = OSDisableInterrupts();
    }
    ~Lock() {
        OSRestoreInterrupts(mInterrupts);
    }
private:
    BOOL mInterrupts;
};

class JASChannel {
    u8 filler[0x108];
};

/* 8029CDEC-8029CF68 29772C 017C+00 1/0 0/0 0/0 .text            run__14JASAudioThreadFv */
// Maybe location of JASPoolAllocObject_MultiThreaded<JASChannel>
#ifdef NONMATCHING
void* JASAudioThread::run() {
    OSInitFastCast();
    JASDriver::initAI(DMACallback);
    JASDsp::boot(DSPCallback);
    JASDsp::initBuffer();
    JASDSPChannel::initAll();

    JASPoolAllocObject_MultiThreaded<JASChannel>::newMemPool(0x48);
    JASDriver::startDMA();

    while (true) {
        OSMessage msg = waitMessageBlock();
        switch ((int)msg) {
        case AUDIOMSG_DMA:
            if (sbPauseFlag) {
                JASDriver::stopDMA();
                OSSleepThread(&sThreadQueue);
            }
            JASDriver::updateDac();
            JASDriver::updateDacCallback();
            break;

        case AUDIOMSG_DSP:
            snIntCount--;
            if (snIntCount == 0) {
                JASProbe::stop(7);
                JASDriver::finishDSPFrame();
            } else {
                JASProbe::start(2, "SFR_DSP");
                JASDriver::updateDSP();
                JASProbe::stop(2);
            }
            break;

        case AUDIOMSG_STOP:
            JASDriver::stopDMA();
            OSExitThread(NULL);
            break;
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void* JASAudioThread::run() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioThread/run__14JASAudioThreadFv.s"
}
#pragma pop
#endif
/* ############################################################################################## */
/* 8039B338-8039B338 027998 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039B340 = "UPDATE-DAC";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039B34B = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
#pragma pop

/* 8029CF68-8029CFBC 2978A8 0054+00 1/1 0/0 0/0 .text            DMACallback__14JASAudioThreadFv */
void JASAudioThread::DMACallback() {
    JASAudioThread* thread = getInstance();
	JASProbe::stop(4);
	JASProbe::start(4, "UPDATE-DAC");
	thread->sendMessage((void*)AUDIOMSG_DMA);
}

/* 8029CFBC-8029D028 2978FC 006C+00 1/1 0/0 0/0 .text            DSPCallback__14JASAudioThreadFPv */
void JASAudioThread::DSPCallback(void*) {
    JASAudioThread* thread = getInstance();
	while (DSPCheckMailFromDSP() == 0) { }

	u32 mail = DSPReadMailFromDSP();
	if (mail >> 0x10 == 0xF355) {
		if ((mail & 0xFF00) == 0xFF00) {
            thread->sendMessage((void*)AUDIOMSG_DSP);
		} else {
			JASDsp::finishWork(mail);
		}
	}
}

/* 8039B338-8039B338 027998 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
