lbl_80BA2C80:
/* 80BA2C80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BA2C84  7C 08 02 A6 */	mflr r0
/* 80BA2C88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BA2C8C  48 00 19 E1 */	bl Delete__10daObjARI_cFv
/* 80BA2C90  38 60 00 01 */	li r3, 1
/* 80BA2C94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BA2C98  7C 08 03 A6 */	mtlr r0
/* 80BA2C9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80BA2CA0  4E 80 00 20 */	blr 
