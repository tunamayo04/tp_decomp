//
// Generated By: dol2asm
// Translation Unit: JAUInitializer
//

#include "JSystem/JAudio2/JAUInitializer.h"
#include "JSystem/JAudio2/JAISe.h"
#include "JSystem/JAudio2/JAISeq.h"
#include "JSystem/JAudio2/JAISoundChild.h"
#include "JSystem/JAudio2/JAIStream.h"
#include "JSystem/JAudio2/JASAramStream.h"
#include "JSystem/JAudio2/JASAudioThread.h"
#include "JSystem/JAudio2/JASDriverIF.h"
#include "JSystem/JAudio2/JASDvdThread.h"
#include "JSystem/JAudio2/JASTaskThread.h"
#include "JSystem/JAudio2/JASTrack.h"
#include "JSystem/JAudio2/JASWaveArcLoader.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRSolidHeap.h"
#include "JSystem/JKernel/JKRThread.h"
#include <dolphin/os.h>

/* 802A4AD0-802A4B28 29F410 0058+00 0/0 1/1 0/0 .text            __ct__18JAU_JASInitializerFv */
JAU_JASInitializer::JAU_JASInitializer() {
    field_0x00 = 0;
    field_0x04 = 0;
    field_0x14 = -1;
    field_0x18 = -1;
    field_0x08 = 0x1000;
    field_0x0c = 3;
    field_0x10 = 2;
    field_0x1c = 0x80;
    field_0x2c = 1.0f;
    field_0x24 = 0x2760;
    field_0x28 = 2;
    field_0x20 = 0;
    field_0x30 = NULL;
}

/* 802A4B28-802A4D3C 29F468 0214+00 0/0 1/1 0/0 .text
 * initJASystem__18JAU_JASInitializerFP12JKRSolidHeap           */
// NONMATCHING JASPoolAllocObject_MultiThreaded<_> locations
void JAU_JASInitializer::initJASystem(JKRSolidHeap* param_0) {
    if (JASAudioThread::getThreadPointer()) {

    } else if (JASDvd::getThreadPointer()) {

    } else {
        JASKernel::setupRootHeap(param_0, field_0x08);
        if (field_0x00 == 0) {
            field_0x00 = JKRAram::getManager()->getAudioMemory();
        }
        if (field_0x04 == 0) {
            field_0x04 = JKRAram::getManager()->getAudioMemSize();
        }
        JASKernel::setupAramHeap(field_0x00, field_0x04);
        JASTrack::newMemPool(field_0x1c);
        if (field_0x20 > 0) {
            JASTrack::TChannelMgr::newMemPool(field_0x20);
        }
        JASDvd::createThread(field_0x0c,0x80,0x1000);
        JASAudioThread::create(field_0x10);
        JKRThreadSwitch* threadSwitch = JKRThreadSwitch::getManager();
        if (threadSwitch) {
            if (field_0x14 >= 0) {
                threadSwitch->enter(JASDvd::getThreadPointer(), field_0x14);
            }
            if (field_0x18 >= 0) {
                threadSwitch->enter(JASAudioThread::getThreadPointer(), field_0x18);
            }
        }
        JASDriver::setDSPLevel(field_0x2c);
        JASAramStream::initSystem(field_0x24,field_0x28);
    }
    if (field_0x30) {
        JASWaveArcLoader::setCurrentDir(field_0x30);
    }
    switch (OSGetSoundMode()) {
    case 0:
        JASDriver::setOutputMode(0);
        break;
    case 1:
        JASDriver::setOutputMode(1);
        break;
    }
}

/* 802A4D3C-802A4D60 29F67C 0024+00 0/0 1/1 0/0 .text            __ct__18JAU_JAIInitializerFv */
JAU_JAIInitializer::JAU_JAIInitializer() {
    field_0x0 = 100;
    field_0x4 = 4;
    field_0x8 = 2;
    field_0xc = 16;
}

/* 802A4D60-802A4EE8 29F6A0 0188+00 0/0 1/1 0/0 .text initJAInterface__18JAU_JAIInitializerFv */
// NONMATCHING JASPoolAllocObject<_> locations
void JAU_JAIInitializer::initJAInterface() {
    s32 r30 = JASDram->getFreeSize();
    JAIStream::newMemPool(field_0x8);
    JAISeq::newMemPool(field_0x4);
    JAISe::newMemPool(field_0x0);
    JAISoundChild::newMemPool(field_0xc);
    s32 r29 = JASDram->getFreeSize();
    //OSReport("JAU_JAIInitializer uses %d bytes\n", r30 - r29);
}
