lbl_80960A30:
/* 80960A30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80960A34  7C 08 02 A6 */	mflr r0
/* 80960A38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80960A3C  7C 66 1B 78 */	mr r6, r3
/* 80960A40  7C 85 23 78 */	mr r5, r4
/* 80960A44  80 63 00 08 */	lwz r3, 8(r3)
/* 80960A48  A0 86 00 04 */	lhz r4, 4(r6)
/* 80960A4C  4B 9C A5 04 */	b getTexNo__16J3DAnmTexPatternCFUsPUs
/* 80960A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80960A54  7C 08 03 A6 */	mtlr r0
/* 80960A58  38 21 00 10 */	addi r1, r1, 0x10
/* 80960A5C  4E 80 00 20 */	blr 
