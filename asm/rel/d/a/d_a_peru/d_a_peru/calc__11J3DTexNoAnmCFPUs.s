lbl_80D4AB90:
/* 80D4AB90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D4AB94  7C 08 02 A6 */	mflr r0
/* 80D4AB98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D4AB9C  7C 66 1B 78 */	mr r6, r3
/* 80D4ABA0  7C 85 23 78 */	mr r5, r4
/* 80D4ABA4  80 63 00 08 */	lwz r3, 8(r3)
/* 80D4ABA8  A0 86 00 04 */	lhz r4, 4(r6)
/* 80D4ABAC  4B 5E 03 A4 */	b getTexNo__16J3DAnmTexPatternCFUsPUs
/* 80D4ABB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D4ABB4  7C 08 03 A6 */	mtlr r0
/* 80D4ABB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80D4ABBC  4E 80 00 20 */	blr 
