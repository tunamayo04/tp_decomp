lbl_80BE27BC:
/* 80BE27BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BE27C0  7C 08 02 A6 */	mflr r0
/* 80BE27C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BE27C8  81 83 05 9C */	lwz r12, 0x59c(r3)
/* 80BE27CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80BE27D0  7D 89 03 A6 */	mtctr r12
/* 80BE27D4  4E 80 04 21 */	bctrl 
/* 80BE27D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BE27DC  7C 08 03 A6 */	mtlr r0
/* 80BE27E0  38 21 00 10 */	addi r1, r1, 0x10
/* 80BE27E4  4E 80 00 20 */	blr 
