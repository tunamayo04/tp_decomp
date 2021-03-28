// 
// Generated By: dol2asm
// Translation Unit: d/d_vibration
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/d_vibration.h"

// 
// Types:
// 

struct Vec {
};

struct cXyz {
	/* 80266AE4 */ void operator+(Vec const&) const;
	/* 80266CE4 */ void norm() const;
};

struct dVibration_c {
	/* 8006F268 */ void Run();
	/* 8006FA24 */ void StartShock(int, int, cXyz);
	/* 8006FC0C */ void StartQuake(u8 const*, int, int, cXyz);
	/* 8006FB10 */ void StartQuake(int, int, cXyz);
	/* 8006FD94 */ void StopQuake(int);
	/* 8006FE00 */ void Kill();
	/* 8006FE5C */ void CheckQuake();
	/* 8006FE84 */ void setDefault();
	/* 8006FF04 */ void Init();
	/* 8006FF38 */ void Pause();
	/* 8006FFF8 */ void Remove();
};

struct dSv_player_config_c {
	/* 80034644 */ void checkVibration() const;
};

struct dCamera_c {
	/* 80181000 */ void StartShake(s32, u8*, s32, cXyz);
	/* 80181158 */ void StopShake();
};

struct JUTGamePad {
	struct CRumble {
		struct ERumble {
		};

		/* 802E168C */ void stopMotor(int, bool);
		/* 802E18CC */ void startPatternedRumble(void*, JUTGamePad::CRumble::ERumble, u32);
		/* 802E1948 */ void stopPatternedRumble(s16);
		/* 802E1978 */ void stopPatternedRumbleAtThePeriod();
	};

};

// 
// Forward References:
// 

extern "C" extern u8 data_80450F58[8];

extern "C" static void func_8006F168();
extern "C" static void func_8006F184();
extern "C" static void func_8006F1A4();
extern "C" static void func_8006F1D8();
extern "C" void Run__12dVibration_cFv();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFPCUcii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void Kill__12dVibration_cFv();
extern "C" void CheckQuake__12dVibration_cFv();
extern "C" void setDefault__12dVibration_cFv();
extern "C" void Init__12dVibration_cFv();
extern "C" void Pause__12dVibration_cFv();
extern "C" void Remove__12dVibration_cFv();
extern "C" extern u8 data_80450F58[8];

// 
// External References:
// 

void dCam_getBody();
void dKy_darkworld_check();
void cM_rnd();
extern "C" extern u8 const MS_patt__12dVibration_c[88];
extern "C" extern u8 const CS_patt__12dVibration_c[88];
extern "C" extern u8 const MQ_patt__12dVibration_c[80];
extern "C" extern u8 const CQ_patt__12dVibration_c[80];
extern "C" extern u8 m_gamePad__8mDoCPd_c[16];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

extern "C" void checkVibration__19dSv_player_config_cCFv();
extern "C" void StartShake__9dCamera_cFlPUcl4cXyz();
extern "C" void StopShake__9dCamera_cFv();
extern "C" void dCam_getBody__Fv();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void norm__4cXyzCFv();
extern "C" void cM_rnd__Fv();
extern "C" void stopMotor__Q210JUTGamePad7CRumbleFib();
extern "C" void startPatternedRumble__Q210JUTGamePad7CRumbleFPvQ310JUTGamePad7CRumble7ERumbleUl();
extern "C" void stopPatternedRumble__Q210JUTGamePad7CRumbleFs();
extern "C" void stopPatternedRumbleAtThePeriod__Q210JUTGamePad7CRumbleFv();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern u8 const MS_patt__12dVibration_c[88];
extern "C" extern u8 const CS_patt__12dVibration_c[88];
extern "C" extern u8 const MQ_patt__12dVibration_c[80];
extern "C" extern u8 const CQ_patt__12dVibration_c[80];
extern "C" extern u8 m_gamePad__8mDoCPd_c[16];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

// 
// Declarations:
// 

/* 8006F168-8006F184 001C+00 s=1 e=0 z=0  None .text      makedata__25@unnamed@d_vibration_cpp@FPUsUll                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8006F168() {
	nofralloc
#include "asm/d/d_vibration/func_8006F168.s"
}
#pragma pop


/* 8006F184-8006F1A4 0020+00 s=1 e=0 z=0  None .text      rollshift__25@unnamed@d_vibration_cpp@FUlll                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8006F184() {
	nofralloc
#include "asm/d/d_vibration/func_8006F184.s"
}
#pragma pop


/* 8006F1A4-8006F1D8 0034+00 s=2 e=0 z=0  None .text      makebits__25@unnamed@d_vibration_cpp@FUlll                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8006F1A4() {
	nofralloc
#include "asm/d/d_vibration/func_8006F1A4.s"
}
#pragma pop


/* ############################################################################################## */
/* 80452620-80452628 0008+00 s=1 e=0 z=0  None .sdata2    @3756                                                        */
SECTION_SDATA2 static u8 lit_3756[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 8006F1D8-8006F268 0090+00 s=1 e=0 z=0  None .text      randombit__25@unnamed@d_vibration_cpp@Fll                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8006F1D8() {
	nofralloc
#include "asm/d/d_vibration/func_8006F1D8.s"
}
#pragma pop


/* ############################################################################################## */
/* 80450F50-80450F58 0008+00 s=1 e=0 z=0  None .sbss      data$3831                                                    */
static u8 data[8];

/* 8006F268-8006FA24 07BC+00 s=0 e=2 z=0  None .text      Run__12dVibration_cFv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dVibration_c::Run() {
	nofralloc
#include "asm/d/d_vibration/Run__12dVibration_cFv.s"
}
#pragma pop


/* 8006FA24-8006FB10 00EC+00 s=0 e=62 z=298  None .text      StartShock__12dVibration_cFii4cXyz                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dVibration_c::StartShock(int param_0, int param_1, cXyz param_2) {
	nofralloc
#include "asm/d/d_vibration/StartShock__12dVibration_cFii4cXyz.s"
}
#pragma pop


/* 8006FB10-8006FC0C 00FC+00 s=0 e=8 z=67  None .text      StartQuake__12dVibration_cFii4cXyz                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dVibration_c::StartQuake(int param_0, int param_1, cXyz param_2) {
	nofralloc
#include "asm/d/d_vibration/StartQuake__12dVibration_cFii4cXyz.s"
}
#pragma pop


/* 8006FC0C-8006FD94 0188+00 s=0 e=2 z=2  None .text      StartQuake__12dVibration_cFPCUcii4cXyz                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dVibration_c::StartQuake(u8 const* param_0, int param_1, int param_2, cXyz param_3) {
	nofralloc
#include "asm/d/d_vibration/StartQuake__12dVibration_cFPCUcii4cXyz.s"
}
#pragma pop


/* 8006FD94-8006FE00 006C+00 s=0 e=6 z=82  None .text      StopQuake__12dVibration_cFi                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dVibration_c::StopQuake(int param_0) {
	nofralloc
#include "asm/d/d_vibration/StopQuake__12dVibration_cFi.s"
}
#pragma pop


/* 8006FE00-8006FE5C 005C+00 s=2 e=0 z=0  None .text      Kill__12dVibration_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dVibration_c::Kill() {
	nofralloc
#include "asm/d/d_vibration/Kill__12dVibration_cFv.s"
}
#pragma pop


/* 8006FE5C-8006FE84 0028+00 s=0 e=0 z=10  None .text      CheckQuake__12dVibration_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dVibration_c::CheckQuake() {
	nofralloc
#include "asm/d/d_vibration/CheckQuake__12dVibration_cFv.s"
}
#pragma pop


/* 8006FE84-8006FF04 0080+00 s=2 e=0 z=0  None .text      setDefault__12dVibration_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dVibration_c::setDefault() {
	nofralloc
#include "asm/d/d_vibration/setDefault__12dVibration_cFv.s"
}
#pragma pop


/* 8006FF04-8006FF38 0034+00 s=0 e=2 z=0  None .text      Init__12dVibration_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dVibration_c::Init() {
	nofralloc
#include "asm/d/d_vibration/Init__12dVibration_cFv.s"
}
#pragma pop


/* 8006FF38-8006FFF8 00C0+00 s=0 e=1 z=0  None .text      Pause__12dVibration_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dVibration_c::Pause() {
	nofralloc
#include "asm/d/d_vibration/Pause__12dVibration_cFv.s"
}
#pragma pop


/* 8006FFF8-80070018 0020+00 s=0 e=1 z=0  None .text      Remove__12dVibration_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dVibration_c::Remove() {
	nofralloc
#include "asm/d/d_vibration/Remove__12dVibration_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80450F58-80450F60 0008+00 s=0 e=2 z=0  None .sbss      None                                                         */
u8 data_80450F58[8];

