lbl_80A93710:
/* 80A93710  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A93714  7C 08 02 A6 */	mflr r0
/* 80A93718  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A9371C  7C 60 1B 78 */	mr r0, r3
/* 80A93720  2C 04 00 00 */	cmpwi r4, 0
/* 80A93724  40 82 00 30 */	bne lbl_80A93754
/* 80A93728  3C 60 80 43 */	lis r3, j3dSys@ha
/* 80A9372C  38 63 4A C8 */	addi r3, r3, j3dSys@l
/* 80A93730  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 80A93734  80 65 00 14 */	lwz r3, 0x14(r5)
/* 80A93738  28 03 00 00 */	cmplwi r3, 0
/* 80A9373C  41 82 00 18 */	beq lbl_80A93754
/* 80A93740  7C 04 03 78 */	mr r4, r0
/* 80A93744  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80A93748  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80A9374C  7D 89 03 A6 */	mtctr r12
/* 80A93750  4E 80 04 21 */	bctrl 
lbl_80A93754:
/* 80A93754  38 60 00 01 */	li r3, 1
/* 80A93758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A9375C  7C 08 03 A6 */	mtlr r0
/* 80A93760  38 21 00 10 */	addi r1, r1, 0x10
/* 80A93764  4E 80 00 20 */	blr 
