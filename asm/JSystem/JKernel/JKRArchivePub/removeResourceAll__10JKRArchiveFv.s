lbl_802D5FB4:
/* 802D5FB4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D5FB8  7C 08 02 A6 */	mflr r0
/* 802D5FBC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D5FC0  39 61 00 20 */	addi r11, r1, 0x20
/* 802D5FC4  48 08 C2 15 */	bl _savegpr_28
/* 802D5FC8  7C 7C 1B 78 */	mr r28, r3
/* 802D5FCC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802D5FD0  28 00 00 00 */	cmplwi r0, 0
/* 802D5FD4  41 82 00 50 */	beq lbl_802D6024
/* 802D5FD8  88 1C 00 3C */	lbz r0, 0x3c(r28)
/* 802D5FDC  28 00 00 01 */	cmplwi r0, 1
/* 802D5FE0  41 82 00 44 */	beq lbl_802D6024
/* 802D5FE4  83 DC 00 4C */	lwz r30, 0x4c(r28)
/* 802D5FE8  3B A0 00 00 */	li r29, 0
/* 802D5FEC  3B E0 00 00 */	li r31, 0
/* 802D5FF0  48 00 00 24 */	b lbl_802D6014
lbl_802D5FF4:
/* 802D5FF4  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 802D5FF8  28 03 00 00 */	cmplwi r3, 0
/* 802D5FFC  41 82 00 10 */	beq lbl_802D600C
/* 802D6000  80 9C 00 38 */	lwz r4, 0x38(r28)
/* 802D6004  4B FF 84 FD */	bl free__7JKRHeapFPvP7JKRHeap
/* 802D6008  93 FE 00 10 */	stw r31, 0x10(r30)
lbl_802D600C:
/* 802D600C  3B DE 00 14 */	addi r30, r30, 0x14
/* 802D6010  3B BD 00 01 */	addi r29, r29, 1
lbl_802D6014:
/* 802D6014  80 7C 00 44 */	lwz r3, 0x44(r28)
/* 802D6018  80 03 00 08 */	lwz r0, 8(r3)
/* 802D601C  7C 1D 00 40 */	cmplw r29, r0
/* 802D6020  41 80 FF D4 */	blt lbl_802D5FF4
lbl_802D6024:
/* 802D6024  39 61 00 20 */	addi r11, r1, 0x20
/* 802D6028  48 08 C1 FD */	bl _restgpr_28
/* 802D602C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D6030  7C 08 03 A6 */	mtlr r0
/* 802D6034  38 21 00 20 */	addi r1, r1, 0x20
/* 802D6038  4E 80 00 20 */	blr 
