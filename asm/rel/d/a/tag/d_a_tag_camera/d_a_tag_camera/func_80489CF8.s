lbl_80489CF8:
/* 80489CF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80489CFC  7C 08 02 A6 */	mflr r0
/* 80489D00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80489D04  3C 60 80 49 */	lis r3, data_8048A670@ha
/* 80489D08  38 63 A6 70 */	addi r3, r3, data_8048A670@l
/* 80489D0C  80 63 00 00 */	lwz r3, 0(r3)
/* 80489D10  81 83 06 28 */	lwz r12, 0x628(r3)
/* 80489D14  81 8C 01 F0 */	lwz r12, 0x1f0(r12)
/* 80489D18  7D 89 03 A6 */	mtctr r12
/* 80489D1C  4E 80 04 21 */	bctrl 
/* 80489D20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80489D24  7C 08 03 A6 */	mtlr r0
/* 80489D28  38 21 00 10 */	addi r1, r1, 0x10
/* 80489D2C  4E 80 00 20 */	blr 
