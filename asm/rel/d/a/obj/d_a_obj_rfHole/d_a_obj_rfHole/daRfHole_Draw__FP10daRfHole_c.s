lbl_80CB994C:
/* 80CB994C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CB9950  7C 08 02 A6 */	mflr r0
/* 80CB9954  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CB9958  81 83 05 9C */	lwz r12, 0x59c(r3)
/* 80CB995C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80CB9960  7D 89 03 A6 */	mtctr r12
/* 80CB9964  4E 80 04 21 */	bctrl 
/* 80CB9968  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CB996C  7C 08 03 A6 */	mtlr r0
/* 80CB9970  38 21 00 10 */	addi r1, r1, 0x10
/* 80CB9974  4E 80 00 20 */	blr 
