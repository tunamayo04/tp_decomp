//
// Generated By: dol2asm
// Translation Unit: d/s/d_s_room
//

#include "d/s/d_s_room.h"
#include "MSL_C/stdio.h"
#include "MSL_C/string.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_procname.h"
#include "d/s/d_s_play.h"
#include "dol2asm.h"
#include "f_op/f_op_scene.h"

static bool resetArchiveBank(int param_0);
static bool setArchiveBank(int param_0);

//
// Types:
//

class room_of_scene_class : public scene_class {
public:
    /* 0x1C4 */ request_of_phase_process_class field_0x1c4;
    /* 0x1CC */ void* mpDzrRes;
    /* 0x1D0 */ dStage_roomDt_c* mpRoomDt;
    /* 0x1D4 */ s8 field_0x1d4;
    /* 0x1D5 */ u8 field_0x1d5;
    /* 0x1D6 */ u8 field_0x1d6[2];
    /* 0x1D8 */ u8 field_0x1d8;
};

//
// Forward References:
//

extern "C" static bool dScnRoom_Draw__FP19room_of_scene_class();
extern "C" static void getResetArchiveBank__FiPPCUc();
extern "C" static void resetArchiveBank__Fi();
extern "C" static void setArchiveBank__Fi();
extern "C" static void objectDeleteJugge__FPvPv();
extern "C" static void deleteJugge__FPvPv();
extern "C" static void isCreatingCallback__FP10create_tagPUi();
extern "C" static void isCreating__FUi();
extern "C" static void loadDemoArchive__Fi();
extern "C" static void objectSetCheck__FP19room_of_scene_class();
extern "C" static void dScnRoom_Execute__FP19room_of_scene_class();
extern "C" static bool dScnRoom_IsDelete__FP19room_of_scene_class();
extern "C" static void isReadRoom__Fi();
extern "C" static void dScnRoom_Delete__FP19room_of_scene_class();
extern "C" static void phase_0__FP19room_of_scene_class();
extern "C" static void phase_1__FP19room_of_scene_class();
extern "C" static void phase_2__FP19room_of_scene_class();
extern "C" void setZoneNo__20dStage_roomControl_cFii();
extern "C" static void phase_3__FP19room_of_scene_class();
extern "C" static void phase_4__FP19room_of_scene_class();
extern "C" static void dScnRoom_Create__FP11scene_class();
extern "C" extern char const* const d_s_d_s_room__stringBase0;
extern "C" extern void* g_profile_ROOM_SCENE[10];

//
// External References:
//

extern "C" void mDoExt_getArchiveHeap__Fv();
extern "C" void mDoExt_setCurrentHeap__FP7JKRHeap();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopScnM_DeleteReq__FP11scene_class();
extern "C" void fpcBs_Is_JustOfType__Fii();
extern "C" void fpcCtIt_Judge__FPFPvPv_PvPv();
extern "C" void fpcLyIt_Judge__FP11layer_classPFPvPv_PvPv();
extern "C" void fpcM_Delete__FPv();
extern "C" void getStatusRoomDt__20dStage_roomControl_cFi();
extern "C" void getMemoryBlock__20dStage_roomControl_cFi();
extern "C" void setArcBank__20dStage_roomControl_cFiPCc();
extern "C" void getArcBank__20dStage_roomControl_cFi();
extern "C" void resetArchiveBank__20dStage_roomControl_cFi();
extern "C" void dStage_dt_c_roomLoader__FPvP11dStage_dt_ci();
extern "C" void dStage_dt_c_roomReLoader__FPvP11dStage_dt_ci();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void getZoneNo__20dStage_roomControl_cFi();
extern "C" void dComIfG_getRoomArcName__Fi();
extern "C" void dComIfGp_ret_wp_set__FSc();
extern "C" void dComLbG_PhaseHandler__FP30request_of_phase_process_classPPFPv_iPv();
extern "C" void clearRoomSwitch__13dSv_zoneBit_cFv();
extern "C" void clearRoomItem__13dSv_zoneBit_cFv();
extern "C" void createZone__10dSv_info_cFi();
extern "C" void setRes__14dRes_control_cFPCcP11dRes_info_ciPCcUcP7JKRHeap();
extern "C" void syncRes__14dRes_control_cFPCcP11dRes_info_ci();
extern "C" void deleteRes__14dRes_control_cFPCcP11dRes_info_ci();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void setStageRes__14dRes_control_cFPCcP7JKRHeap();
extern "C" void demoInit__16dEvent_manager_cFv();
extern "C" void roomInit__16dEvent_manager_cFi();
extern "C" void roomFinish__16dEvent_manager_cFi();
extern "C" void allForceOnEventMove__Q213dPa_control_c7level_cFv();
extern "C" void freeAll__7JKRHeapFv();
extern "C" void getTotalUsedSize__10JKRExpHeapCFv();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
// extern "C" extern void* g_fopScn_Method[5 + 1 /* padding */];
// extern "C" extern void* g_fpcNd_Method[5 + 1 /* padding */];
extern "C" u8 mStatus__20dStage_roomControl_c[65792];
extern "C" u8 mDemoArcName__20dStage_roomControl_c[10 + 2 /* padding */];
extern "C" u8 mResetData__6mDoRst[4 + 4 /* padding */];
extern "C" u8 mArcBankName__20dStage_roomControl_c[4];
extern "C" u8 mArcBankData__20dStage_roomControl_c[4];

//
// Declarations:
//

/* 8025AE1C-8025AE24 25575C 0008+00 1/0 0/0 0/0 .text dScnRoom_Draw__FP19room_of_scene_class */
static int dScnRoom_Draw(room_of_scene_class* i_this) {
    return 1;
}

/* ############################################################################################## */
/* 8039A388-8039A388 0269E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A388 = "";
#pragma pop

/* 8025AE24-8025AF24 255764 0100+00 2/2 0/0 0/0 .text            getResetArchiveBank__FiPPCUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int getResetArchiveBank(int param_0, u8 const** param_1) {
    nofralloc
#include "asm/d/s/d_s_room/getResetArchiveBank__FiPPCUc.s"
}
#pragma pop

/* 8025AF24-8025AF4C 255864 0028+00 1/1 0/0 0/0 .text            resetArchiveBank__Fi */
static bool resetArchiveBank(int param_0) {
    const u8* tmp;
    return dStage_roomControl_c::resetArchiveBank(getResetArchiveBank(param_0, &tmp));
}

/* ############################################################################################## */
/* 8039A388-8039A388 0269E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A389 = "pack";
SECTION_DEAD static char const* const stringBase_8039A38E = "/res/Object/";
SECTION_DEAD static char const* const stringBase_8039A39B = "Bank[%d] : %s.arc Read Error !!\n";
#pragma pop

/* 8025AF4C-8025B0F0 25588C 01A4+00 1/1 0/0 0/0 .text            setArchiveBank__Fi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool setArchiveBank(int param_0) {
    nofralloc
#include "asm/d/s/d_s_room/setArchiveBank__Fi.s"
}
#pragma pop

/* 8025B0F0-8025B150 255A30 0060+00 1/1 0/0 0/0 .text            objectDeleteJugge__FPvPv */
static int objectDeleteJugge(void* i_obj, void*) {
    if (fpcM_GetProfName(i_obj) != PROC_BG) {
        if (fopAcM_IsActor(i_obj) && !fopAcM_CheckCondition((fopAc_ac_c*)i_obj, 4)) {
            return 0;
        }
        fpcM_Delete(i_obj);
    }

    return 0;
}

/* 8025B150-8025B174 255A90 0024+00 1/1 0/0 0/0 .text            deleteJugge__FPvPv */
static int deleteJugge(void* i_obj, void*) {
    fpcM_Delete(i_obj);
    return 0;
}

/* 8025B174-8025B194 255AB4 0020+00 1/1 0/0 0/0 .text isCreatingCallback__FP10create_tagPUi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void* isCreatingCallback(create_tag* param_0, unsigned int* param_1) {
    nofralloc
#include "asm/d/s/d_s_room/isCreatingCallback__FP10create_tagPUi.s"
}
#pragma pop

/* 8025B194-8025B1D0 255AD4 003C+00 2/2 0/0 0/0 .text            isCreating__FUi */
static bool isCreating(unsigned int param_0) {
    return fpcCtIt_Judge((fpcCtIt_JudgeFunc)isCreatingCallback, &param_0);
}

/* ############################################################################################## */
/* 8039A388-8039A388 0269E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A3BC = "Demo%02d_%02d";
#pragma pop

/* 8025B1D0-8025B2EC 255B10 011C+00 1/1 0/0 0/0 .text            loadDemoArchive__Fi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void loadDemoArchive(int param_0) {
    nofralloc
#include "asm/d/s/d_s_room/loadDemoArchive__Fi.s"
}
#pragma pop

/* 8025B2EC-8025B564 255C2C 0278+00 3/3 0/0 0/0 .text objectSetCheck__FP19room_of_scene_class */
static bool objectSetCheck(room_of_scene_class* i_this) {
    int roomNo = fopScnM_GetParam(i_this);
    BOOL status_flag_8 = dComIfGp_roomControl_checkStatusFlag(roomNo, 8);
    BOOL status_flag_20 = dComIfGp_roomControl_checkStatusFlag(roomNo, 0x20);

    if (i_this->field_0x1d4 == 0 || (i_this->field_0x1d4 > 0 && !status_flag_8)) {
        if (!status_flag_8) {
            switch (i_this->field_0x1d4) {
            case 0:
                if (!resetArchiveBank(roomNo)) {
                    return 0;
                }
                i_this->field_0x1d4++;
            case 1:
                if (!setArchiveBank(roomNo)) {
                    return 0;
                }

                if (i_this->mpDzrRes != NULL) {
                    loadDemoArchive(roomNo);
                }
            default:
                if (*dStage_roomControl_c::getDemoArcName() != '\0') {
                    int phase = dComIfG_syncObjectRes(dStage_roomControl_c::getDemoArcName());

                    if (phase >= 0 && phase > 0) {
                        return 0;
                    }
                }

                fopAcM_create(PROC_BG, roomNo, NULL, -1, NULL, NULL, -1);
                dComIfGp_getPEvtManager()->demoInit();
                dComIfGp_getPEvtManager()->roomInit(roomNo);
                dStage_dt_c_roomReLoader(i_this->mpDzrRes, i_this->mpRoomDt, roomNo);
                dComIfGp_ret_wp_set(roomNo);
                i_this->field_0x1d4 = -1;
                i_this->field_0x1d5 = 1;
            }
        }
    } else if (status_flag_8) {
        if (isCreating(fpcM_LayerID(i_this))) {
            return 0;
        }

        fpcM_LyJudge(&i_this->mBase, (fpcLyIt_JudgeFunc)deleteJugge, NULL);
        g_dComIfG_gameInfo.play.getParticle()->levelAllForceOnEventMove();
        dComIfGs_clearRoomSwitch(dComIfGp_roomControl_getZoneNo(roomNo));
        dComIfGs_clearRoomItem(dComIfGp_roomControl_getZoneNo(roomNo));
        dComIfGp_roomControl_offStatusFlag(roomNo, 0x20);
        i_this->field_0x1d4 = 0;
    } else if (status_flag_20) {
        fpcM_LyJudge(&i_this->mBase, (fpcLyIt_JudgeFunc)objectDeleteJugge, NULL);
        g_dComIfG_gameInfo.play.getParticle()->levelAllForceOnEventMove();
    }

    return 1;
}

/* 8025B564-8025B674 255EA4 0110+00 1/0 0/0 0/0 .text dScnRoom_Execute__FP19room_of_scene_class */
#ifdef NONMATCHING
static int dScnRoom_Execute(room_of_scene_class* i_this) {
    int roomNo = fopScnM_GetParam(i_this);

    if (dComIfGp_roomControl_checkStatusFlag(roomNo, 2)) {
        dComIfGp_roomControl_offStatusFlag(roomNo, 2);
        dComIfGp_roomControl_onStatusFlag(roomNo, 1);
    } else if (objectSetCheck(i_this)) {
        if (dComIfGp_roomControl_checkStatusFlag(roomNo, 4)) {
            fopScnM_DeleteReq(i_this);
        } else if (i_this->field_0x1d4 < 0 && i_this->field_0x1d5 != 0 &&
                   !i_dComIfGp_event_runCheck() &&
                   (int)fopScnM_GetParam(i_this) == dComIfGp_roomControl_getStayNo()) {
            if (isCreating(fpcM_LayerID(i_this))) {
                dScnPly_c::setPauseTimer(2);
            } else {
                i_this->field_0x1d5 = 0;
            }
        }
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int dScnRoom_Execute(room_of_scene_class* param_0) {
    nofralloc
#include "asm/d/s/d_s_room/dScnRoom_Execute__FP19room_of_scene_class.s"
}
#pragma pop
#endif

/* 8025B674-8025B67C 255FB4 0008+00 1/0 0/0 0/0 .text dScnRoom_IsDelete__FP19room_of_scene_class
 */
static int dScnRoom_IsDelete(room_of_scene_class*) {
    return 1;
}

/* 8025B67C-8025B73C 255FBC 00C0+00 1/1 0/0 0/0 .text            isReadRoom__Fi */
static bool isReadRoom(int param_0) {
    roomRead_class* room = dComIfGp_getStageRoom();

    if (room == NULL) {
        return false;
    }

    if (room->field_0x0 <= param_0) {
        return false;
    }

    roomRead_data_class* roomData = room->field_0x4[dComIfGp_getNextStageRoomNo()];
    u8* tmp = roomData->field_0x4;

    for (int i = 0; i < roomData->field_0x0; i++) {
        if (dStage_roomRead_dt_c_ChkBg(*tmp) &&
            param_0 == dStage_roomRead_dt_c_GetLoadRoomIndex(*tmp)) {
            return true;
        }
        tmp++;
    }

    return false;
}

inline const char* setArcName(room_of_scene_class* i_room) {
    return dComIfG_getRoomArcName(fopAcM_GetParam(i_room));
}

/* 8025B73C-8025B870 25607C 0134+00 1/0 0/0 0/0 .text dScnRoom_Delete__FP19room_of_scene_class */
static int dScnRoom_Delete(room_of_scene_class* i_this) {
    int roomNo = fopScnM_GetParam(i_this);
    dComIfGp_roomControl_setStatusFlag(roomNo, 0);
    dComIfGp_roomControl_getStatusRoomDt(roomNo)->mRoomDt.init();

    if (mDoRst::isReset() || !dComIfGp_isEnableNextStage() ||
        strcmp(dComIfGp_getNextStageName(), dComIfGp_getStartStageName()) ||
        (roomNo != dComIfGp_getNextStageRoomNo() && !isReadRoom(roomNo))) {
        dComIfG_deleteStageRes(setArcName(i_this));

        JKRExpHeap* heap = dStage_roomControl_c::getMemoryBlock(roomNo);
        if (heap != NULL) {
            heap->freeAll();
        }
    }

    dComIfGp_roomControl_getStatusRoomDt(roomNo)->mRoomDt.init();
    dComIfGp_getPEvtManager()->roomFinish(roomNo);
    return 1;
}

/* 8025B870-8025B8A4 2561B0 0034+00 1/0 0/0 0/0 .text            phase_0__FP19room_of_scene_class */
static int phase_0(room_of_scene_class* i_this) {
    int roomNo = fopScnM_GetParam(i_this);
    dStage_roomControl_c::setStatusProcID(roomNo, fopScnM_GetID(i_this));
    return 2;
}

/* 8025B8A4-8025B980 2561E4 00DC+00 1/0 0/0 0/0 .text            phase_1__FP19room_of_scene_class */
static int phase_1(room_of_scene_class* i_this) {
    i_this->field_0x1d8 = 1;

    int roomNo = fopScnM_GetParam(i_this);
    const char* arcName = setArcName(i_this);

    if (dComIfG_syncStageRes(arcName) < 0) {
        JKRExpHeap* heap = dStage_roomControl_c::getMemoryBlock(roomNo);

        if (heap != NULL) {
            if (heap->getTotalUsedSize() != 0) {
                return 0;
            }
        } else {
            stage_stag_info_class* stagInfo = i_dComIfGp_getStage()->getStagInfo();

            if (dStage_staginfo_GetArchiveHeap(stagInfo) != NULL) {
                heap = mDoExt_getArchiveHeap();
            }
        }

        if (!dComIfG_setStageRes(arcName, heap)) {
            return cPhs_ERROR_e;
        }
    }

    return 2;
}

/* 8025B980-8025BAAC 2562C0 012C+00 1/0 0/0 0/0 .text            phase_2__FP19room_of_scene_class */
static int phase_2(room_of_scene_class* i_this) {
    const char* arcName = setArcName(i_this);
    int phase = dComIfG_syncStageRes(arcName);

    if (phase < 0) {
        return cPhs_ERROR_e;
    }

    if (phase != 0) {
        return 0;
    }

    int roomNo = fopScnM_GetParam(i_this);
    if (dComIfGp_roomControl_getZoneNo(roomNo) < 0) {
        dComIfGp_roomControl_setZoneNo(roomNo, dComIfGs_createZone(roomNo));
    }

    i_this->mpRoomDt = &dComIfGp_roomControl_getStatusRoomDt(roomNo)->mRoomDt;
    i_this->mpRoomDt->setRoomNo(roomNo);
    i_this->mpDzrRes = dComIfG_getStageRes(arcName, "room.dzr");

    if (i_this->mpDzrRes != NULL) {
        dStage_dt_c_roomLoader(i_this->mpDzrRes, i_this->mpRoomDt, roomNo);
    }

    JKRHeap* old_heap = NULL;
    JKRExpHeap* heap = dStage_roomControl_c::getMemoryBlock(roomNo);

    if (heap != NULL) {
        old_heap = mDoExt_setCurrentHeap(heap);
    }

    if (old_heap != NULL) {
        mDoExt_setCurrentHeap(old_heap);
    }

    return 2;
}

/* 8025BAAC-8025BAC4 2563EC 0018+00 1/1 0/0 0/0 .text setZoneNo__20dStage_roomControl_cFii */
void dStage_roomControl_c::setZoneNo(int i_roomNo, int i_zoneNo) {
    mStatus[i_roomNo].mZoneNo = i_zoneNo;
}

/* 8025BAC4-8025BAF8 256404 0034+00 1/0 0/0 0/0 .text            phase_3__FP19room_of_scene_class */
static int phase_3(room_of_scene_class* i_this) {
    return objectSetCheck(i_this) ? 2 : 0;
}

/* 8025BAF8-8025BB48 256438 0050+00 1/0 0/0 0/0 .text            phase_4__FP19room_of_scene_class */
static int phase_4(room_of_scene_class* i_this) {
    if (dComIfGp_getPlayer(0) == NULL) {
        return 0;
    }

    return objectSetCheck(i_this) ? cPhs_COMPLEATE_e : 0;
}

/* 8025BB48-8025BB78 256488 0030+00 1/0 0/0 0/0 .text            dScnRoom_Create__FP11scene_class */
static int dScnRoom_Create(scene_class* i_this) {
    static int (*l_method[5])(void*) = {
        (int (*)(void*))phase_0, (int (*)(void*))phase_1, (int (*)(void*))phase_2,
        (int (*)(void*))phase_3, (int (*)(void*))phase_4,
    };

    room_of_scene_class* room = static_cast<room_of_scene_class*>(i_this);
    return dComLbG_PhaseHandler(&room->field_0x1c4, l_method, i_this);
}

/* ############################################################################################## */
/* 803C3274-803C3288 -00001 0014+00 1/0 0/0 0/0 .data            l_dScnRoom_Method */
SECTION_DATA static void* l_dScnRoom_Method[5] = {
    (void*)dScnRoom_Create,   (void*)dScnRoom_Delete, (void*)dScnRoom_Execute,
    (void*)dScnRoom_IsDelete, (void*)dScnRoom_Draw,
};

/* 803C3288-803C32B0 -00001 0028+00 0/0 0/0 1/0 .data            g_profile_ROOM_SCENE */
SECTION_DATA extern void* g_profile_ROOM_SCENE[10] = {
    (void*)0xFFFFFFFD,         (void*)0x0000FFFD, (void*)0x00120000, (void*)&g_fpcNd_Method,
    (void*)0x000001DC,         (void*)NULL,       (void*)NULL,       (void*)&g_fopScn_Method,
    (void*)&l_dScnRoom_Method, (void*)NULL,
};

/* 8039A388-8039A388 0269E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
