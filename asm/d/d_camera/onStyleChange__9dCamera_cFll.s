lbl_8016469C:
/* 8016469C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801646A0  7C 08 02 A6 */	mflr r0
/* 801646A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801646A8  39 61 00 20 */	addi r11, r1, 0x20
/* 801646AC  48 1F DB 31 */	bl _savegpr_29
/* 801646B0  7C 7F 1B 78 */	mr r31, r3
/* 801646B4  7C BD 2B 78 */	mr r29, r5
/* 801646B8  38 00 00 00 */	li r0, 0
/* 801646BC  90 03 01 74 */	stw r0, 0x174(r3)
/* 801646C0  98 03 01 58 */	stb r0, 0x158(r3)
/* 801646C4  38 C0 00 00 */	li r6, 0
/* 801646C8  80 03 0A F4 */	lwz r0, 0xaf4(r3)
/* 801646CC  1F C4 00 78 */	mulli r30, r4, 0x78
/* 801646D0  7C 80 F2 14 */	add r4, r0, r30
/* 801646D4  A0 04 00 04 */	lhz r0, 4(r4)
/* 801646D8  2C 00 00 04 */	cmpwi r0, 4
/* 801646DC  41 82 00 28 */	beq lbl_80164704
/* 801646E0  41 80 00 40 */	blt lbl_80164720
/* 801646E4  2C 00 00 07 */	cmpwi r0, 7
/* 801646E8  40 80 00 38 */	bge lbl_80164720
/* 801646EC  88 1F 02 98 */	lbz r0, 0x298(r31)
/* 801646F0  28 00 00 00 */	cmplwi r0, 0
/* 801646F4  40 82 00 08 */	bne lbl_801646FC
/* 801646F8  48 00 0A 0D */	bl setUSOAngle__9dCamera_cFv
lbl_801646FC:
/* 801646FC  38 C0 00 01 */	li r6, 1
/* 80164700  48 00 00 20 */	b lbl_80164720
lbl_80164704:
/* 80164704  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80164708  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8016470C  80 03 5D 7C */	lwz r0, 0x5d7c(r3)
/* 80164710  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 80164714  90 03 5D 7C */	stw r0, 0x5d7c(r3)
/* 80164718  C0 02 9C A8 */	lfs f0, lit_5658(r2)
/* 8016471C  D0 03 5D 80 */	stfs f0, 0x5d80(r3)
lbl_80164720:
/* 80164720  80 7F 0A F4 */	lwz r3, 0xaf4(r31)
/* 80164724  38 A3 00 04 */	addi r5, r3, 4
/* 80164728  1C 1D 00 78 */	mulli r0, r29, 0x78
/* 8016472C  7C 85 02 2E */	lhzx r4, r5, r0
/* 80164730  28 04 00 08 */	cmplwi r4, 8
/* 80164734  41 81 00 60 */	bgt lbl_80164794
/* 80164738  3C 60 80 3C */	lis r3, lit_7460@ha
/* 8016473C  38 63 A3 78 */	addi r3, r3, lit_7460@l
/* 80164740  54 80 10 3A */	slwi r0, r4, 2
/* 80164744  7C 03 00 2E */	lwzx r0, r3, r0
/* 80164748  7C 09 03 A6 */	mtctr r0
/* 8016474C  4E 80 04 20 */	bctr 
/* 80164750  7C 05 F2 2E */	lhzx r0, r5, r30
/* 80164754  7C 00 20 00 */	cmpw r0, r4
/* 80164758  40 82 00 3C */	bne lbl_80164794
/* 8016475C  80 1F 01 A4 */	lwz r0, 0x1a4(r31)
/* 80164760  2C 00 00 00 */	cmpwi r0, 0
/* 80164764  40 82 00 30 */	bne lbl_80164794
/* 80164768  80 1F 06 0C */	lwz r0, 0x60c(r31)
/* 8016476C  60 00 80 00 */	ori r0, r0, 0x8000
/* 80164770  90 1F 06 0C */	stw r0, 0x60c(r31)
/* 80164774  48 00 00 20 */	b lbl_80164794
/* 80164778  88 1F 02 98 */	lbz r0, 0x298(r31)
/* 8016477C  28 00 00 00 */	cmplwi r0, 0
/* 80164780  41 82 00 0C */	beq lbl_8016478C
/* 80164784  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 80164788  41 82 00 0C */	beq lbl_80164794
lbl_8016478C:
/* 8016478C  7F E3 FB 78 */	mr r3, r31
/* 80164790  48 00 09 75 */	bl setUSOAngle__9dCamera_cFv
lbl_80164794:
/* 80164794  38 60 00 01 */	li r3, 1
/* 80164798  39 61 00 20 */	addi r11, r1, 0x20
/* 8016479C  48 1F DA 8D */	bl _restgpr_29
/* 801647A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801647A4  7C 08 03 A6 */	mtlr r0
/* 801647A8  38 21 00 20 */	addi r1, r1, 0x20
/* 801647AC  4E 80 00 20 */	blr 
