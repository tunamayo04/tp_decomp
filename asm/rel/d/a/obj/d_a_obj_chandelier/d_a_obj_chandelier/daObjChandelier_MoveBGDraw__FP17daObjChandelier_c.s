lbl_80BC8C1C:
/* 80BC8C1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BC8C20  7C 08 02 A6 */	mflr r0
/* 80BC8C24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BC8C28  81 83 05 9C */	lwz r12, 0x59c(r3)
/* 80BC8C2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80BC8C30  7D 89 03 A6 */	mtctr r12
/* 80BC8C34  4E 80 04 21 */	bctrl 
/* 80BC8C38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BC8C3C  7C 08 03 A6 */	mtlr r0
/* 80BC8C40  38 21 00 10 */	addi r1, r1, 0x10
/* 80BC8C44  4E 80 00 20 */	blr 
