lbl_802046F8:
/* 802046F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802046FC  7C 08 02 A6 */	mflr r0
/* 80204700  90 01 00 24 */	stw r0, 0x24(r1)
/* 80204704  39 61 00 20 */	addi r11, r1, 0x20
/* 80204708  48 15 DA D5 */	bl _savegpr_29
/* 8020470C  7C 7E 1B 78 */	mr r30, r3
/* 80204710  7C 9F 23 78 */	mr r31, r4
/* 80204714  7C BD 2B 78 */	mr r29, r5
/* 80204718  54 80 04 63 */	rlwinm. r0, r4, 0, 0x11, 0x11
/* 8020471C  40 82 00 94 */	bne lbl_802047B0
/* 80204720  48 03 3B 0D */	bl getStatus__12dMsgObject_cFv
/* 80204724  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 80204728  20 60 00 01 */	subfic r3, r0, 1
/* 8020472C  30 03 FF FF */	addic r0, r3, -1
/* 80204730  7C 00 19 10 */	subfe r0, r0, r3
/* 80204734  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80204738  40 82 00 78 */	bne lbl_802047B0
/* 8020473C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80204740  41 82 00 70 */	beq lbl_802047B0
/* 80204744  57 E0 06 31 */	rlwinm. r0, r31, 0, 0x18, 0x18
/* 80204748  40 82 00 68 */	bne lbl_802047B0
/* 8020474C  57 E0 00 43 */	rlwinm. r0, r31, 0, 1, 1
/* 80204750  40 82 00 60 */	bne lbl_802047B0
/* 80204754  57 E0 04 E7 */	rlwinm. r0, r31, 0, 0x13, 0x13
/* 80204758  40 82 00 58 */	bne lbl_802047B0
/* 8020475C  57 E0 06 73 */	rlwinm. r0, r31, 0, 0x19, 0x19
/* 80204760  41 82 00 30 */	beq lbl_80204790
/* 80204764  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80204768  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8020476C  88 03 4F AD */	lbz r0, 0x4fad(r3)
/* 80204770  28 00 00 00 */	cmplwi r0, 0
/* 80204774  41 82 00 10 */	beq lbl_80204784
/* 80204778  A0 03 4F A4 */	lhz r0, 0x4fa4(r3)
/* 8020477C  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 80204780  48 00 00 08 */	b lbl_80204788
lbl_80204784:
/* 80204784  38 00 00 00 */	li r0, 0
lbl_80204788:
/* 80204788  54 00 04 3F */	clrlwi. r0, r0, 0x10
/* 8020478C  40 82 00 24 */	bne lbl_802047B0
lbl_80204790:
/* 80204790  57 E0 05 EF */	rlwinm. r0, r31, 0, 0x17, 0x17
/* 80204794  40 82 00 1C */	bne lbl_802047B0
/* 80204798  57 E0 07 39 */	rlwinm. r0, r31, 0, 0x1c, 0x1c
/* 8020479C  40 82 00 14 */	bne lbl_802047B0
/* 802047A0  57 E0 06 F7 */	rlwinm. r0, r31, 0, 0x1b, 0x1b
/* 802047A4  40 82 00 0C */	bne lbl_802047B0
/* 802047A8  57 E0 06 B5 */	rlwinm. r0, r31, 0, 0x1a, 0x1a
/* 802047AC  41 82 00 10 */	beq lbl_802047BC
lbl_802047B0:
/* 802047B0  7F C3 F3 78 */	mr r3, r30
/* 802047B4  48 00 49 01 */	bl setAlphaButtonBinAnimeMin__14dMeterButton_cFv
/* 802047B8  48 00 00 14 */	b lbl_802047CC
lbl_802047BC:
/* 802047BC  7F C3 F3 78 */	mr r3, r30
/* 802047C0  48 00 49 8D */	bl setAlphaButtonBinAnimeMax__14dMeterButton_cFv
/* 802047C4  38 60 00 01 */	li r3, 1
/* 802047C8  48 00 00 08 */	b lbl_802047D0
lbl_802047CC:
/* 802047CC  38 60 00 00 */	li r3, 0
lbl_802047D0:
/* 802047D0  39 61 00 20 */	addi r11, r1, 0x20
/* 802047D4  48 15 DA 55 */	bl _restgpr_29
/* 802047D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802047DC  7C 08 03 A6 */	mtlr r0
/* 802047E0  38 21 00 20 */	addi r1, r1, 0x20
/* 802047E4  4E 80 00 20 */	blr 
