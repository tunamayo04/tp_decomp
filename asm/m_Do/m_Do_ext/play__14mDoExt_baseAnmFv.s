lbl_8000D428:
/* 8000D428  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000D42C  7C 08 02 A6 */	mflr r0
/* 8000D430  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000D434  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000D438  7C 7F 1B 78 */	mr r31, r3
/* 8000D43C  48 31 B5 91 */	bl update__12J3DFrameCtrlFv
/* 8000D440  38 60 00 01 */	li r3, 1
/* 8000D444  88 1F 00 05 */	lbz r0, 5(r31)
/* 8000D448  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8000D44C  40 82 00 18 */	bne lbl_8000D464
/* 8000D450  C0 22 81 1C */	lfs f1, lit_3876(r2)
/* 8000D454  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 8000D458  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8000D45C  41 82 00 08 */	beq lbl_8000D464
/* 8000D460  38 60 00 00 */	li r3, 0
lbl_8000D464:
/* 8000D464  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8000D468  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8000D46C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000D470  7C 08 03 A6 */	mtlr r0
/* 8000D474  38 21 00 10 */	addi r1, r1, 0x10
/* 8000D478  4E 80 00 20 */	blr 
