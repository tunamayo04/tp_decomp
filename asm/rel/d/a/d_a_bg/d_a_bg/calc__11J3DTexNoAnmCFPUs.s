lbl_8045933C:
/* 8045933C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80459340  7C 08 02 A6 */	mflr r0
/* 80459344  90 01 00 14 */	stw r0, 0x14(r1)
/* 80459348  7C 66 1B 78 */	mr r6, r3
/* 8045934C  7C 85 23 78 */	mr r5, r4
/* 80459350  80 63 00 08 */	lwz r3, 8(r3)
/* 80459354  A0 86 00 04 */	lhz r4, 4(r6)
/* 80459358  4B ED 1B F8 */	b getTexNo__16J3DAnmTexPatternCFUsPUs
/* 8045935C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80459360  7C 08 03 A6 */	mtlr r0
/* 80459364  38 21 00 10 */	addi r1, r1, 0x10
/* 80459368  4E 80 00 20 */	blr 
