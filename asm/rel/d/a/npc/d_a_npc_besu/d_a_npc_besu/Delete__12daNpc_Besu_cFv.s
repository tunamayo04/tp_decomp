lbl_80537914:
/* 80537914  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80537918  7C 08 02 A6 */	mflr r0
/* 8053791C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80537920  38 80 FF FF */	li r4, -1
/* 80537924  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80537928  81 8C 00 08 */	lwz r12, 8(r12)
/* 8053792C  7D 89 03 A6 */	mtctr r12
/* 80537930  4E 80 04 21 */	bctrl 
/* 80537934  38 60 00 01 */	li r3, 1
/* 80537938  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8053793C  7C 08 03 A6 */	mtlr r0
/* 80537940  38 21 00 10 */	addi r1, r1, 0x10
/* 80537944  4E 80 00 20 */	blr 
