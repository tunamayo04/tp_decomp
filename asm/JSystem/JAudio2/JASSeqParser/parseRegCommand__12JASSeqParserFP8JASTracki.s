lbl_80295864:
/* 80295864  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295868  7C 08 02 A6 */	mflr r0
/* 8029586C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80295870  80 C4 00 04 */	lwz r6, 4(r4)
/* 80295874  38 06 00 01 */	addi r0, r6, 1
/* 80295878  90 04 00 04 */	stw r0, 4(r4)
/* 8029587C  88 E6 00 00 */	lbz r7, 0(r6)
/* 80295880  38 C0 00 00 */	li r6, 0
/* 80295884  39 00 00 03 */	li r8, 3
/* 80295888  7C A9 03 A6 */	mtctr r5
/* 8029588C  2C 05 00 00 */	cmpwi r5, 0
/* 80295890  40 81 00 20 */	ble lbl_802958B0
lbl_80295894:
/* 80295894  54 E0 06 31 */	rlwinm. r0, r7, 0, 0x18, 0x18
/* 80295898  41 82 00 0C */	beq lbl_802958A4
/* 8029589C  7C C0 43 78 */	or r0, r6, r8
/* 802958A0  54 06 04 3E */	clrlwi r6, r0, 0x10
lbl_802958A4:
/* 802958A4  54 E7 0E 3C */	rlwinm r7, r7, 1, 0x18, 0x1e
/* 802958A8  55 08 14 3A */	rlwinm r8, r8, 2, 0x10, 0x1d
/* 802958AC  42 00 FF E8 */	bdnz lbl_80295894
lbl_802958B0:
/* 802958B0  80 A4 00 04 */	lwz r5, 4(r4)
/* 802958B4  38 05 00 01 */	addi r0, r5, 1
/* 802958B8  90 04 00 04 */	stw r0, 4(r4)
/* 802958BC  88 A5 00 00 */	lbz r5, 0(r5)
/* 802958C0  4B FF FD F1 */	bl parseCommand__12JASSeqParserFP8JASTrackUcUs
/* 802958C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802958C8  7C 08 03 A6 */	mtlr r0
/* 802958CC  38 21 00 10 */	addi r1, r1, 0x10
/* 802958D0  4E 80 00 20 */	blr 
