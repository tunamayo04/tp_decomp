lbl_80482CB8:
/* 80482CB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80482CBC  7C 08 02 A6 */	mflr r0
/* 80482CC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80482CC4  4B DE 03 CC */	b ModuleUnresolved
/* 80482CC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80482CCC  7C 08 03 A6 */	mtlr r0
/* 80482CD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80482CD4  4E 80 00 20 */	blr 
