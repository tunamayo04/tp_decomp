lbl_80A46144:
/* 80A46144  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A46148  7C 08 02 A6 */	mflr r0
/* 80A4614C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A46150  7C 60 1B 78 */	mr r0, r3
/* 80A46154  2C 04 00 00 */	cmpwi r4, 0
/* 80A46158  40 82 00 30 */	bne lbl_80A46188
/* 80A4615C  3C 60 80 43 */	lis r3, j3dSys@ha
/* 80A46160  38 63 4A C8 */	addi r3, r3, j3dSys@l
/* 80A46164  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 80A46168  80 65 00 14 */	lwz r3, 0x14(r5)
/* 80A4616C  28 03 00 00 */	cmplwi r3, 0
/* 80A46170  41 82 00 18 */	beq lbl_80A46188
/* 80A46174  7C 04 03 78 */	mr r4, r0
/* 80A46178  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80A4617C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80A46180  7D 89 03 A6 */	mtctr r12
/* 80A46184  4E 80 04 21 */	bctrl 
lbl_80A46188:
/* 80A46188  38 60 00 01 */	li r3, 1
/* 80A4618C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A46190  7C 08 03 A6 */	mtlr r0
/* 80A46194  38 21 00 10 */	addi r1, r1, 0x10
/* 80A46198  4E 80 00 20 */	blr 
