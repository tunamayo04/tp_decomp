lbl_80021358:
/* 80021358  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002135C  7C 08 02 A6 */	mflr r0
/* 80021360  90 01 00 14 */	stw r0, 0x14(r1)
/* 80021364  90 61 00 08 */	stw r3, 8(r1)
/* 80021368  38 03 00 02 */	addi r0, r3, 2
/* 8002136C  28 00 00 01 */	cmplwi r0, 1
/* 80021370  41 81 00 0C */	bgt lbl_8002137C
/* 80021374  38 60 00 00 */	li r3, 0
/* 80021378  48 00 00 14 */	b lbl_8002138C
lbl_8002137C:
/* 8002137C  3C 60 80 02 */	lis r3, fpcSch_JudgeByID__FPvPv@ha
/* 80021380  38 63 35 90 */	addi r3, r3, fpcSch_JudgeByID__FPvPv@l
/* 80021384  38 81 00 08 */	addi r4, r1, 8
/* 80021388  4B FF FF B1 */	bl fpcEx_Search__FPFPvPv_PvPv
lbl_8002138C:
/* 8002138C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80021390  7C 08 03 A6 */	mtlr r0
/* 80021394  38 21 00 10 */	addi r1, r1, 0x10
/* 80021398  4E 80 00 20 */	blr 
