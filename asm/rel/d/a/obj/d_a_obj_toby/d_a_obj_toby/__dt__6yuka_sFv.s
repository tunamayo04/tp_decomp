lbl_80D154F4:
/* 80D154F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D154F8  7C 08 02 A6 */	mflr r0
/* 80D154FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D15500  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D15504  7C 7F 1B 79 */	or. r31, r3, r3
/* 80D15508  41 82 00 10 */	beq lbl_80D15518
/* 80D1550C  7C 80 07 35 */	extsh. r0, r4
/* 80D15510  40 81 00 08 */	ble lbl_80D15518
/* 80D15514  4B 5B 98 28 */	b __dl__FPv
lbl_80D15518:
/* 80D15518  7F E3 FB 78 */	mr r3, r31
/* 80D1551C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D15520  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D15524  7C 08 03 A6 */	mtlr r0
/* 80D15528  38 21 00 10 */	addi r1, r1, 0x10
/* 80D1552C  4E 80 00 20 */	blr 
