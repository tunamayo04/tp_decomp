//
// Generated By: dol2asm
// Translation Unit: JFWSystem
//

#include "JSystem/JFramework/JFWSystem.h"
#include "JSystem/JKernel/JKRExpHeap.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "JSystem/JUtility/JUTGraphFifo.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JUtility/JUTVideo.h"
#include "JSystem/JUtility/JUTGamePad.h"
#include "JSystem/JUtility/JUTDirectPrint.h"
#include "JSystem/JUtility/JUTAssert.h"
#include "JSystem/JUtility/JUTException.h"
#include "JSystem/JUtility/JUTResFont.h"
#include "JSystem/JUtility/JUTDbPrint.h"

extern u8 const JUTResFONT_Ascfont_fix12[16736];

/* 80450770-80450774 0001F0 0004+00 1/1 1/1 0/0 .sdata maxStdHeaps__Q29JFWSystem11CSetUpParam */
s32 JFWSystem::CSetUpParam::maxStdHeaps = 2;

/* 80450774-80450778 0001F4 0004+00 1/1 1/1 0/0 .sdata sysHeapSize__Q29JFWSystem11CSetUpParam */
u32 JFWSystem::CSetUpParam::sysHeapSize = 0x400000;

/* 804511A0-804511A4 0006A0 0004+00 2/2 0/0 0/0 .sbss            rootHeap__9JFWSystem */
JKRExpHeap* JFWSystem::rootHeap;

/* 804511A4-804511A8 0006A4 0004+00 2/2 1/1 0/0 .sbss            systemHeap__9JFWSystem */
JKRExpHeap* JFWSystem::systemHeap;

/* 80271CD0-80271D18 26C610 0048+00 1/1 1/1 0/0 .text            firstInit__9JFWSystemFv */
void JFWSystem::firstInit() {
    OSInit();
    DVDInit();
    rootHeap = JKRExpHeap::createRoot(CSetUpParam::maxStdHeaps, false);
    systemHeap = JKRExpHeap::create(CSetUpParam::sysHeapSize, rootHeap, false);
}

/* 80450778-8045077C 0001F8 0004+00 1/1 1/1 0/0 .sdata fifoBufSize__Q29JFWSystem11CSetUpParam */
u32 JFWSystem::CSetUpParam::fifoBufSize = 0x40000;

/* 8045077C-80450780 0001FC 0004+00 1/1 1/1 0/0 .sdata aramAudioBufSize__Q29JFWSystem11CSetUpParam
 */
u32 JFWSystem::CSetUpParam::aramAudioBufSize = 0x800000;

/* 80450780-80450784 000200 0004+00 1/1 1/1 0/0 .sdata aramGraphBufSize__Q29JFWSystem11CSetUpParam
 */
u32 JFWSystem::CSetUpParam::aramGraphBufSize = 0x600000;

/* 80450784-80450788 000204 0004+00 1/1 0/0 0/0 .sdata streamPriority__Q29JFWSystem11CSetUpParam
 */
u32 JFWSystem::CSetUpParam::streamPriority = 8;

/* 80450788-8045078C 000208 0004+00 1/1 0/0 0/0 .sdata decompPriority__Q29JFWSystem11CSetUpParam
 */
u32 JFWSystem::CSetUpParam::decompPriority = 7;

/* 8045078C-80450790 00020C 0004+00 1/1 0/0 0/0 .sdata aPiecePriority__Q29JFWSystem11CSetUpParam
 */
u32 JFWSystem::CSetUpParam::aPiecePriority = 6;

/* 80450790-80450794 -00001 0004+00 1/1 0/0 0/0 .sdata systemFontRes__Q29JFWSystem11CSetUpParam */
ResFONT* JFWSystem::CSetUpParam::systemFontRes = (ResFONT*)&JUTResFONT_Ascfont_fix12;

/* 80450794-80450798 -00001 0004+00 1/1 1/1 0/0 .sdata renderMode__Q29JFWSystem11CSetUpParam */
GXRenderModeObj* JFWSystem::CSetUpParam::renderMode = &GXNtsc480IntDf;

/* 80450798-804507A0 000218 0004+04 1/1 0/0 0/0 .sdata
 * exConsoleBufferSize__Q29JFWSystem11CSetUpParam               */
u32 JFWSystem::CSetUpParam::exConsoleBufferSize = 0x24FC;

/* 804511A8-804511AC 0006A8 0004+00 1/1 0/0 0/0 .sbss            mainThread__9JFWSystem */
JKRThread* JFWSystem::mainThread;

/* 804511AC-804511B0 0006AC 0004+00 1/1 0/0 0/0 .sbss            debugPrint__9JFWSystem */
JUTDbPrint* JFWSystem::debugPrint;

/* 804511B0-804511B4 0006B0 0004+00 1/1 0/0 0/0 .sbss            systemFont__9JFWSystem */
JUTResFont* JFWSystem::systemFont;

/* 804511B4-804511B8 0006B4 0004+00 1/1 0/0 0/0 .sbss            systemConsoleManager__9JFWSystem */
JUTConsoleManager* JFWSystem::systemConsoleManager;

/* 804511B8-804511BC 0006B8 0004+00 1/1 7/7 0/0 .sbss            systemConsole__9JFWSystem */
JUTConsole* JFWSystem::systemConsole;

/* 804511BC-804511C0 0006BC 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 sInitCalled;

/* 80271D18-80272040 26C658 0328+00 0/0 1/1 0/0 .text            init__9JFWSystemFv */
// NONMATCHING - regalloc, equivalent
void JFWSystem::init() {
    if (rootHeap == NULL) {
        firstInit();
    }
    sInitCalled = true;

    JKRAram::create(CSetUpParam::aramAudioBufSize, CSetUpParam::aramGraphBufSize,
                    CSetUpParam::streamPriority, CSetUpParam::decompPriority,
                    CSetUpParam::aPiecePriority);
    mainThread = new JKRThread(OSGetCurrentThread(), 4);

    JUTVideo::createManager(CSetUpParam::renderMode);
    JUTCreateFifo(CSetUpParam::fifoBufSize);

    JUTGamePad::init();

    JUTDirectPrint* dbPrint = JUTDirectPrint::start();

    JUTAssertion::create();

    JUTException::create(dbPrint);

    systemFont = new JUTResFont(CSetUpParam::systemFontRes, NULL);

    debugPrint = JUTDbPrint::start(NULL, NULL);
    debugPrint->changeFont(systemFont);

    systemConsoleManager = JUTConsoleManager::createManager(NULL);

    systemConsole = JUTConsole::create(60, 200, NULL);
    systemConsole->setFont(systemFont);

    if (CSetUpParam::renderMode->efb_height < 300) {
        systemConsole->setFontSize(systemFont->getWidth() * 0.85f, systemFont->getHeight() * 0.5f);
        systemConsole->setPosition(20, 25);
    } else {
        systemConsole->setFontSize(systemFont->getWidth(), systemFont->getHeight());
        systemConsole->setPosition(20, 50);
    }

    systemConsole->setHeight(25);
    systemConsole->setVisible(false);
    systemConsole->setOutput(JUTConsole::OUTPUT_OSREPORT | JUTConsole::OUTPUT_CONSOLE);
    JUTSetReportConsole(systemConsole);
    JUTSetWarningConsole(systemConsole);

    void* buffer = systemHeap->alloc(CSetUpParam::exConsoleBufferSize, 4);
    JUTException::createConsole(buffer, CSetUpParam::exConsoleBufferSize);
}
