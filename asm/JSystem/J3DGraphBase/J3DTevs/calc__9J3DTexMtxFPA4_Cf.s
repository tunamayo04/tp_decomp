lbl_80323900:
/* 80323900  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80323904  7C 08 02 A6 */	mflr r0
/* 80323908  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032390C  48 00 00 15 */	bl calcTexMtx__9J3DTexMtxFPA4_Cf
/* 80323910  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80323914  7C 08 03 A6 */	mtlr r0
/* 80323918  38 21 00 10 */	addi r1, r1, 0x10
/* 8032391C  4E 80 00 20 */	blr 
