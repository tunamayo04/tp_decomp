lbl_8013916C:
/* 8013916C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139170  7C 08 02 A6 */	mflr r0
/* 80139174  90 01 00 14 */	stw r0, 0x14(r1)
/* 80139178  28 04 00 00 */	cmplwi r4, 0
/* 8013917C  41 82 00 0C */	beq lbl_80139188
/* 80139180  80 A4 00 04 */	lwz r5, 4(r4)
/* 80139184  48 00 00 08 */	b lbl_8013918C
lbl_80139188:
/* 80139188  38 A0 FF FF */	li r5, -1
lbl_8013918C:
/* 8013918C  38 80 00 00 */	li r4, 0
/* 80139190  88 03 2F B1 */	lbz r0, 0x2fb1(r3)
/* 80139194  7C 09 03 A6 */	mtctr r0
/* 80139198  2C 00 00 00 */	cmpwi r0, 0
/* 8013919C  40 81 00 2C */	ble lbl_801391C8
lbl_801391A0:
/* 801391A0  7C C3 22 14 */	add r6, r3, r4
/* 801391A4  80 06 07 C4 */	lwz r0, 0x7c4(r6)
/* 801391A8  7C 05 00 40 */	cmplw r5, r0
/* 801391AC  40 82 00 14 */	bne lbl_801391C0
/* 801391B0  38 66 07 C4 */	addi r3, r6, 0x7c4
/* 801391B4  48 02 5B 49 */	bl clearData__16daPy_actorKeep_cFv
/* 801391B8  38 60 00 01 */	li r3, 1
/* 801391BC  48 00 00 10 */	b lbl_801391CC
lbl_801391C0:
/* 801391C0  38 84 00 08 */	addi r4, r4, 8
/* 801391C4  42 00 FF DC */	bdnz lbl_801391A0
lbl_801391C8:
/* 801391C8  38 60 00 00 */	li r3, 0
lbl_801391CC:
/* 801391CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801391D0  7C 08 03 A6 */	mtlr r0
/* 801391D4  38 21 00 10 */	addi r1, r1, 0x10
/* 801391D8  4E 80 00 20 */	blr 
