lbl_80B928F4:
/* 80B928F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B928F8  7C 08 02 A6 */	mflr r0
/* 80B928FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B92900  7C 66 1B 78 */	mr r6, r3
/* 80B92904  7C 85 23 78 */	mr r5, r4
/* 80B92908  80 63 00 08 */	lwz r3, 8(r3)
/* 80B9290C  A0 86 00 04 */	lhz r4, 4(r6)
/* 80B92910  4B 79 86 40 */	b getTexNo__16J3DAnmTexPatternCFUsPUs
/* 80B92914  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B92918  7C 08 03 A6 */	mtlr r0
/* 80B9291C  38 21 00 10 */	addi r1, r1, 0x10
/* 80B92920  4E 80 00 20 */	blr 
