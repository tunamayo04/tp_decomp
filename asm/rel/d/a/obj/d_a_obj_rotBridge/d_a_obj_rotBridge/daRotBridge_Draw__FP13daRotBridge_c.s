lbl_80CBF530:
/* 80CBF530  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CBF534  7C 08 02 A6 */	mflr r0
/* 80CBF538  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CBF53C  81 83 05 9C */	lwz r12, 0x59c(r3)
/* 80CBF540  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80CBF544  7D 89 03 A6 */	mtctr r12
/* 80CBF548  4E 80 04 21 */	bctrl 
/* 80CBF54C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CBF550  7C 08 03 A6 */	mtlr r0
/* 80CBF554  38 21 00 10 */	addi r1, r1, 0x10
/* 80CBF558  4E 80 00 20 */	blr 
