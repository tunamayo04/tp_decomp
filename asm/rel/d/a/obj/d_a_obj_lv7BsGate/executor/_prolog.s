lbl_80C847C0:
/* 80C847C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C847C4  7C 08 02 A6 */	mflr r0
/* 80C847C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C847CC  3C 60 80 C8 */	lis r3, data_80C851FC@ha
/* 80C847D0  38 63 51 FC */	addi r3, r3, data_80C851FC@l
/* 80C847D4  4B 5D E9 78 */	b ModuleConstructorsX
/* 80C847D8  4B 5D E8 B0 */	b ModuleProlog
/* 80C847DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C847E0  7C 08 03 A6 */	mtlr r0
/* 80C847E4  38 21 00 10 */	addi r1, r1, 0x10
/* 80C847E8  4E 80 00 20 */	blr 
