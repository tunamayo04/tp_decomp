lbl_8099A96C:
/* 8099A96C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8099A970  7C 08 02 A6 */	mflr r0
/* 8099A974  90 01 00 14 */	stw r0, 0x14(r1)
/* 8099A978  38 80 FF FF */	li r4, -1
/* 8099A97C  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 8099A980  81 8C 00 08 */	lwz r12, 8(r12)
/* 8099A984  7D 89 03 A6 */	mtctr r12
/* 8099A988  4E 80 04 21 */	bctrl 
/* 8099A98C  38 60 00 01 */	li r3, 1
/* 8099A990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8099A994  7C 08 03 A6 */	mtlr r0
/* 8099A998  38 21 00 10 */	addi r1, r1, 0x10
/* 8099A99C  4E 80 00 20 */	blr 
