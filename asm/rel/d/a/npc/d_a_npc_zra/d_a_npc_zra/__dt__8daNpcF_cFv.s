lbl_80B7F0E8:
/* 80B7F0E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B7F0EC  7C 08 02 A6 */	mflr r0
/* 80B7F0F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B7F0F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B7F0F8  93 C1 00 08 */	stw r30, 8(r1)
/* 80B7F0FC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80B7F100  7C 9F 23 78 */	mr r31, r4
/* 80B7F104  41 82 02 14 */	beq lbl_80B7F318
/* 80B7F108  3C 60 80 3B */	lis r3, __vt__8daNpcF_c@ha
/* 80B7F10C  38 03 38 D8 */	addi r0, r3, __vt__8daNpcF_c@l
/* 80B7F110  90 1E 0B 44 */	stw r0, 0xb44(r30)
/* 80B7F114  38 7E 0A D4 */	addi r3, r30, 0xad4
/* 80B7F118  38 80 FF FF */	li r4, -1
/* 80B7F11C  4B 4F 8B C0 */	b __dt__11dBgS_LinChkFv
/* 80B7F120  38 7E 0A 80 */	addi r3, r30, 0xa80
/* 80B7F124  38 80 FF FF */	li r4, -1
/* 80B7F128  4B 4F 84 C8 */	b __dt__11dBgS_GndChkFv
/* 80B7F12C  38 7E 0A 44 */	addi r3, r30, 0xa44
/* 80B7F130  38 80 FF FF */	li r4, -1
/* 80B7F134  4B 6E 8B 60 */	b __dt__11cBgS_GndChkFv
/* 80B7F138  38 7E 09 F8 */	addi r3, r30, 0x9f8
/* 80B7F13C  38 80 FF FF */	li r4, -1
/* 80B7F140  4B 6C AE 08 */	b __dt__10dMsgFlow_cFv
/* 80B7F144  38 7E 09 1A */	addi r3, r30, 0x91a
/* 80B7F148  3C 80 80 B8 */	lis r4, __dt__5csXyzFv@ha
/* 80B7F14C  38 84 EF 44 */	addi r4, r4, __dt__5csXyzFv@l
/* 80B7F150  38 A0 00 06 */	li r5, 6
/* 80B7F154  38 C0 00 03 */	li r6, 3
/* 80B7F158  4B 7E 2B 90 */	b __destroy_arr
/* 80B7F15C  38 7E 09 08 */	addi r3, r30, 0x908
/* 80B7F160  3C 80 80 B8 */	lis r4, __dt__5csXyzFv@ha
/* 80B7F164  38 84 EF 44 */	addi r4, r4, __dt__5csXyzFv@l
/* 80B7F168  38 A0 00 06 */	li r5, 6
/* 80B7F16C  38 C0 00 03 */	li r6, 3
/* 80B7F170  4B 7E 2B 78 */	b __destroy_arr
/* 80B7F174  38 7E 08 54 */	addi r3, r30, 0x854
/* 80B7F178  3C 80 80 B8 */	lis r4, __dt__4cXyzFv@ha
/* 80B7F17C  38 84 87 30 */	addi r4, r4, __dt__4cXyzFv@l
/* 80B7F180  38 A0 00 0C */	li r5, 0xc
/* 80B7F184  38 C0 00 03 */	li r6, 3
/* 80B7F188  4B 7E 2B 60 */	b __destroy_arr
/* 80B7F18C  38 7E 08 2C */	addi r3, r30, 0x82c
/* 80B7F190  3C 80 80 B8 */	lis r4, __dt__18daNpcF_ActorMngr_cFv@ha
/* 80B7F194  38 84 ED F0 */	addi r4, r4, __dt__18daNpcF_ActorMngr_cFv@l
/* 80B7F198  38 A0 00 08 */	li r5, 8
/* 80B7F19C  38 C0 00 05 */	li r6, 5
/* 80B7F1A0  4B 7E 2B 48 */	b __destroy_arr
/* 80B7F1A4  34 1E 08 24 */	addic. r0, r30, 0x824
/* 80B7F1A8  41 82 00 10 */	beq lbl_80B7F1B8
/* 80B7F1AC  3C 60 80 B9 */	lis r3, __vt__18daNpcF_ActorMngr_c@ha
/* 80B7F1B0  38 03 D9 D4 */	addi r0, r3, __vt__18daNpcF_ActorMngr_c@l
/* 80B7F1B4  90 1E 08 28 */	stw r0, 0x828(r30)
lbl_80B7F1B8:
/* 80B7F1B8  34 1E 07 E4 */	addic. r0, r30, 0x7e4
/* 80B7F1BC  41 82 00 28 */	beq lbl_80B7F1E4
/* 80B7F1C0  3C 60 80 B9 */	lis r3, __vt__12dBgS_AcchCir@ha
/* 80B7F1C4  38 03 D9 C8 */	addi r0, r3, __vt__12dBgS_AcchCir@l
/* 80B7F1C8  90 1E 07 F0 */	stw r0, 0x7f0(r30)
/* 80B7F1CC  38 7E 07 F8 */	addi r3, r30, 0x7f8
/* 80B7F1D0  38 80 FF FF */	li r4, -1
/* 80B7F1D4  4B 6E FD 44 */	b __dt__8cM3dGCirFv
/* 80B7F1D8  38 7E 07 E4 */	addi r3, r30, 0x7e4
/* 80B7F1DC  38 80 00 00 */	li r4, 0
/* 80B7F1E0  4B 6E 8E D0 */	b __dt__13cBgS_PolyInfoFv
lbl_80B7F1E4:
/* 80B7F1E4  34 1E 07 A8 */	addic. r0, r30, 0x7a8
/* 80B7F1E8  41 82 00 54 */	beq lbl_80B7F23C
/* 80B7F1EC  3C 60 80 3B */	lis r3, __vt__9dCcD_Stts@ha
/* 80B7F1F0  38 63 C2 E4 */	addi r3, r3, __vt__9dCcD_Stts@l
/* 80B7F1F4  90 7E 07 C0 */	stw r3, 0x7c0(r30)
/* 80B7F1F8  38 03 00 20 */	addi r0, r3, 0x20
/* 80B7F1FC  90 1E 07 C4 */	stw r0, 0x7c4(r30)
/* 80B7F200  34 1E 07 C4 */	addic. r0, r30, 0x7c4
/* 80B7F204  41 82 00 24 */	beq lbl_80B7F228
/* 80B7F208  3C 60 80 B9 */	lis r3, __vt__10dCcD_GStts@ha
/* 80B7F20C  38 03 D9 BC */	addi r0, r3, __vt__10dCcD_GStts@l
/* 80B7F210  90 1E 07 C4 */	stw r0, 0x7c4(r30)
/* 80B7F214  34 1E 07 C4 */	addic. r0, r30, 0x7c4
/* 80B7F218  41 82 00 10 */	beq lbl_80B7F228
/* 80B7F21C  3C 60 80 B9 */	lis r3, __vt__10cCcD_GStts@ha
/* 80B7F220  38 03 D9 B0 */	addi r0, r3, __vt__10cCcD_GStts@l
/* 80B7F224  90 1E 07 C4 */	stw r0, 0x7c4(r30)
lbl_80B7F228:
/* 80B7F228  34 1E 07 A8 */	addic. r0, r30, 0x7a8
/* 80B7F22C  41 82 00 10 */	beq lbl_80B7F23C
/* 80B7F230  3C 60 80 3C */	lis r3, __vt__9cCcD_Stts@ha
/* 80B7F234  38 03 37 28 */	addi r0, r3, __vt__9cCcD_Stts@l
/* 80B7F238  90 1E 07 C0 */	stw r0, 0x7c0(r30)
lbl_80B7F23C:
/* 80B7F23C  34 1E 05 D0 */	addic. r0, r30, 0x5d0
/* 80B7F240  41 82 00 2C */	beq lbl_80B7F26C
/* 80B7F244  3C 60 80 B9 */	lis r3, __vt__12dBgS_ObjAcch@ha
/* 80B7F248  38 63 D9 8C */	addi r3, r3, __vt__12dBgS_ObjAcch@l
/* 80B7F24C  90 7E 05 E0 */	stw r3, 0x5e0(r30)
/* 80B7F250  38 03 00 0C */	addi r0, r3, 0xc
/* 80B7F254  90 1E 05 E4 */	stw r0, 0x5e4(r30)
/* 80B7F258  38 03 00 18 */	addi r0, r3, 0x18
/* 80B7F25C  90 1E 05 F4 */	stw r0, 0x5f4(r30)
/* 80B7F260  38 7E 05 D0 */	addi r3, r30, 0x5d0
/* 80B7F264  38 80 00 00 */	li r4, 0
/* 80B7F268  4B 4F 6D 2C */	b __dt__9dBgS_AcchFv
lbl_80B7F26C:
/* 80B7F26C  34 1E 05 B8 */	addic. r0, r30, 0x5b8
/* 80B7F270  41 82 00 20 */	beq lbl_80B7F290
/* 80B7F274  34 1E 05 B8 */	addic. r0, r30, 0x5b8
/* 80B7F278  41 82 00 18 */	beq lbl_80B7F290
/* 80B7F27C  34 1E 05 B8 */	addic. r0, r30, 0x5b8
/* 80B7F280  41 82 00 10 */	beq lbl_80B7F290
/* 80B7F284  3C 60 80 B9 */	lis r3, __vt__12J3DFrameCtrl@ha
/* 80B7F288  38 03 DA 28 */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 80B7F28C  90 1E 05 B8 */	stw r0, 0x5b8(r30)
lbl_80B7F290:
/* 80B7F290  34 1E 05 A0 */	addic. r0, r30, 0x5a0
/* 80B7F294  41 82 00 20 */	beq lbl_80B7F2B4
/* 80B7F298  34 1E 05 A0 */	addic. r0, r30, 0x5a0
/* 80B7F29C  41 82 00 18 */	beq lbl_80B7F2B4
/* 80B7F2A0  34 1E 05 A0 */	addic. r0, r30, 0x5a0
/* 80B7F2A4  41 82 00 10 */	beq lbl_80B7F2B4
/* 80B7F2A8  3C 60 80 B9 */	lis r3, __vt__12J3DFrameCtrl@ha
/* 80B7F2AC  38 03 DA 28 */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 80B7F2B0  90 1E 05 A0 */	stw r0, 0x5a0(r30)
lbl_80B7F2B4:
/* 80B7F2B4  34 1E 05 88 */	addic. r0, r30, 0x588
/* 80B7F2B8  41 82 00 20 */	beq lbl_80B7F2D8
/* 80B7F2BC  34 1E 05 88 */	addic. r0, r30, 0x588
/* 80B7F2C0  41 82 00 18 */	beq lbl_80B7F2D8
/* 80B7F2C4  34 1E 05 88 */	addic. r0, r30, 0x588
/* 80B7F2C8  41 82 00 10 */	beq lbl_80B7F2D8
/* 80B7F2CC  3C 60 80 B9 */	lis r3, __vt__12J3DFrameCtrl@ha
/* 80B7F2D0  38 03 DA 28 */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 80B7F2D4  90 1E 05 88 */	stw r0, 0x588(r30)
lbl_80B7F2D8:
/* 80B7F2D8  34 1E 05 6C */	addic. r0, r30, 0x56c
/* 80B7F2DC  41 82 00 20 */	beq lbl_80B7F2FC
/* 80B7F2E0  34 1E 05 6C */	addic. r0, r30, 0x56c
/* 80B7F2E4  41 82 00 18 */	beq lbl_80B7F2FC
/* 80B7F2E8  34 1E 05 6C */	addic. r0, r30, 0x56c
/* 80B7F2EC  41 82 00 10 */	beq lbl_80B7F2FC
/* 80B7F2F0  3C 60 80 B9 */	lis r3, __vt__12J3DFrameCtrl@ha
/* 80B7F2F4  38 03 DA 28 */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 80B7F2F8  90 1E 05 6C */	stw r0, 0x56c(r30)
lbl_80B7F2FC:
/* 80B7F2FC  7F C3 F3 78 */	mr r3, r30
/* 80B7F300  38 80 00 00 */	li r4, 0
/* 80B7F304  4B 49 99 88 */	b __dt__10fopAc_ac_cFv
/* 80B7F308  7F E0 07 35 */	extsh. r0, r31
/* 80B7F30C  40 81 00 0C */	ble lbl_80B7F318
/* 80B7F310  7F C3 F3 78 */	mr r3, r30
/* 80B7F314  4B 74 FA 28 */	b __dl__FPv
lbl_80B7F318:
/* 80B7F318  7F C3 F3 78 */	mr r3, r30
/* 80B7F31C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B7F320  83 C1 00 08 */	lwz r30, 8(r1)
/* 80B7F324  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B7F328  7C 08 03 A6 */	mtlr r0
/* 80B7F32C  38 21 00 10 */	addi r1, r1, 0x10
/* 80B7F330  4E 80 00 20 */	blr 
