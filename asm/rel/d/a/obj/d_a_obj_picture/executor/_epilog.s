lbl_80CAD2AC:
/* 80CAD2AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CAD2B0  7C 08 02 A6 */	mflr r0
/* 80CAD2B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CAD2B8  4B 5B 5D D4 */	b ModuleEpilog
/* 80CAD2BC  3C 60 80 CB */	lis r3, data_80CAF018@ha
/* 80CAD2C0  38 63 F0 18 */	addi r3, r3, data_80CAF018@l
/* 80CAD2C4  4B 5B 5E CC */	b ModuleDestructorsX
/* 80CAD2C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CAD2CC  7C 08 03 A6 */	mtlr r0
/* 80CAD2D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80CAD2D4  4E 80 00 20 */	blr 
