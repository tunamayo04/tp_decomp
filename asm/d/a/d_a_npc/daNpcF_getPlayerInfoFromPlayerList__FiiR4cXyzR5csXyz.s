lbl_80155774:
/* 80155774  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80155778  7C 08 02 A6 */	mflr r0
/* 8015577C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80155780  39 61 00 30 */	addi r11, r1, 0x30
/* 80155784  48 20 CA 49 */	bl _savegpr_25
/* 80155788  7C 79 1B 78 */	mr r25, r3
/* 8015578C  7C BA 2B 78 */	mr r26, r5
/* 80155790  7C DB 33 78 */	mr r27, r6
/* 80155794  3B C0 00 00 */	li r30, 0
/* 80155798  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8015579C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 801557A0  38 63 4E C4 */	addi r3, r3, 0x4ec4
/* 801557A4  4B EC EB E1 */	bl getStatusRoomDt__20dStage_roomControl_cFi
/* 801557A8  7C 7F 1B 78 */	mr r31, r3
/* 801557AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801557B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801557B4  7D 89 03 A6 */	mtctr r12
/* 801557B8  4E 80 04 21 */	bctrl 
/* 801557BC  83 A3 00 04 */	lwz r29, 4(r3)
/* 801557C0  3B 80 00 00 */	li r28, 0
/* 801557C4  48 00 00 54 */	b lbl_80155818
lbl_801557C8:
/* 801557C8  A8 1D 00 1C */	lha r0, 0x1c(r29)
/* 801557CC  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 801557D0  7C 19 00 00 */	cmpw r25, r0
/* 801557D4  40 82 00 3C */	bne lbl_80155810
/* 801557D8  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 801557DC  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801557E0  C0 1D 00 10 */	lfs f0, 0x10(r29)
/* 801557E4  D0 1A 00 04 */	stfs f0, 4(r26)
/* 801557E8  C0 1D 00 14 */	lfs f0, 0x14(r29)
/* 801557EC  D0 1A 00 08 */	stfs f0, 8(r26)
/* 801557F0  A8 1D 00 18 */	lha r0, 0x18(r29)
/* 801557F4  B0 1B 00 00 */	sth r0, 0(r27)
/* 801557F8  A8 1D 00 1A */	lha r0, 0x1a(r29)
/* 801557FC  B0 1B 00 02 */	sth r0, 2(r27)
/* 80155800  A8 1D 00 1C */	lha r0, 0x1c(r29)
/* 80155804  B0 1B 00 04 */	sth r0, 4(r27)
/* 80155808  3B C0 00 01 */	li r30, 1
/* 8015580C  48 00 00 2C */	b lbl_80155838
lbl_80155810:
/* 80155810  3B BD 00 20 */	addi r29, r29, 0x20
/* 80155814  3B 9C 00 01 */	addi r28, r28, 1
lbl_80155818:
/* 80155818  7F E3 FB 78 */	mr r3, r31
/* 8015581C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80155820  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80155824  7D 89 03 A6 */	mtctr r12
/* 80155828  4E 80 04 21 */	bctrl 
/* 8015582C  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 80155830  7C 1C 00 00 */	cmpw r28, r0
/* 80155834  41 80 FF 94 */	blt lbl_801557C8
lbl_80155838:
/* 80155838  7F C3 F3 78 */	mr r3, r30
/* 8015583C  39 61 00 30 */	addi r11, r1, 0x30
/* 80155840  48 20 C9 D9 */	bl _restgpr_25
/* 80155844  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80155848  7C 08 03 A6 */	mtlr r0
/* 8015584C  38 21 00 30 */	addi r1, r1, 0x30
/* 80155850  4E 80 00 20 */	blr 
