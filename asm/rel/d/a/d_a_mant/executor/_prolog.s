lbl_80861220:
/* 80861220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80861224  7C 08 02 A6 */	mflr r0
/* 80861228  90 01 00 14 */	stw r0, 0x14(r1)
/* 8086122C  3C 60 80 86 */	lis r3, data_80862C44@ha
/* 80861230  38 63 2C 44 */	addi r3, r3, data_80862C44@l
/* 80861234  4B A0 1F 18 */	b ModuleConstructorsX
/* 80861238  4B A0 1E 50 */	b ModuleProlog
/* 8086123C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80861240  7C 08 03 A6 */	mtlr r0
/* 80861244  38 21 00 10 */	addi r1, r1, 0x10
/* 80861248  4E 80 00 20 */	blr 
