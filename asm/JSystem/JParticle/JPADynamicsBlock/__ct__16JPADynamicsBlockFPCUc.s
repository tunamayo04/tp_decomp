lbl_8027BB18:
/* 8027BB18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027BB1C  7C 08 02 A6 */	mflr r0
/* 8027BB20  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027BB24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027BB28  7C 7F 1B 78 */	mr r31, r3
/* 8027BB2C  90 83 00 00 */	stw r4, 0(r3)
/* 8027BB30  48 00 00 1D */	bl init__16JPADynamicsBlockFv
/* 8027BB34  7F E3 FB 78 */	mr r3, r31
/* 8027BB38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027BB3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027BB40  7C 08 03 A6 */	mtlr r0
/* 8027BB44  38 21 00 10 */	addi r1, r1, 0x10
/* 8027BB48  4E 80 00 20 */	blr 
