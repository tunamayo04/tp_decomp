lbl_80B540BC:
/* 80B540BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B540C0  7C 08 02 A6 */	mflr r0
/* 80B540C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B540C8  38 80 FF FF */	li r4, -1
/* 80B540CC  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80B540D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80B540D4  7D 89 03 A6 */	mtctr r12
/* 80B540D8  4E 80 04 21 */	bctrl 
/* 80B540DC  38 60 00 01 */	li r3, 1
/* 80B540E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B540E4  7C 08 03 A6 */	mtlr r0
/* 80B540E8  38 21 00 10 */	addi r1, r1, 0x10
/* 80B540EC  4E 80 00 20 */	blr 
