lbl_8007E000:
/* 8007E000  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007E004  7C 08 02 A6 */	mflr r0
/* 8007E008  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007E00C  81 83 00 04 */	lwz r12, 4(r3)
/* 8007E010  81 8C 00 DC */	lwz r12, 0xdc(r12)
/* 8007E014  7D 89 03 A6 */	mtctr r12
/* 8007E018  4E 80 04 21 */	bctrl 
/* 8007E01C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007E020  7C 08 03 A6 */	mtlr r0
/* 8007E024  38 21 00 10 */	addi r1, r1, 0x10
/* 8007E028  4E 80 00 20 */	blr 
