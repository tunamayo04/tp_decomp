lbl_802CE5CC:
/* 802CE5CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CE5D0  7C 08 02 A6 */	mflr r0
/* 802CE5D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CE5D8  81 83 00 00 */	lwz r12, 0(r3)
/* 802CE5DC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 802CE5E0  7D 89 03 A6 */	mtctr r12
/* 802CE5E4  4E 80 04 21 */	bctrl 
/* 802CE5E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CE5EC  7C 08 03 A6 */	mtlr r0
/* 802CE5F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802CE5F4  4E 80 00 20 */	blr 
