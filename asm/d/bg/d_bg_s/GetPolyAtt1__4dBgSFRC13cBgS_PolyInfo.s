lbl_80074EA0:
/* 80074EA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80074EA4  7C 08 02 A6 */	mflr r0
/* 80074EA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80074EAC  A0 04 00 02 */	lhz r0, 2(r4)
/* 80074EB0  1C C0 00 14 */	mulli r6, r0, 0x14
/* 80074EB4  7C A3 32 14 */	add r5, r3, r6
/* 80074EB8  88 05 00 04 */	lbz r0, 4(r5)
/* 80074EBC  28 00 00 00 */	cmplwi r0, 0
/* 80074EC0  41 82 00 1C */	beq lbl_80074EDC
/* 80074EC4  7C 63 30 2E */	lwzx r3, r3, r6
/* 80074EC8  81 83 00 04 */	lwz r12, 4(r3)
/* 80074ECC  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 80074ED0  7D 89 03 A6 */	mtctr r12
/* 80074ED4  4E 80 04 21 */	bctrl 
/* 80074ED8  48 00 00 08 */	b lbl_80074EE0
lbl_80074EDC:
/* 80074EDC  38 60 00 00 */	li r3, 0
lbl_80074EE0:
/* 80074EE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80074EE4  7C 08 03 A6 */	mtlr r0
/* 80074EE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80074EEC  4E 80 00 20 */	blr 
