lbl_80B5EE4C:
/* 80B5EE4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B5EE50  7C 08 02 A6 */	mflr r0
/* 80B5EE54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B5EE58  4B 70 42 34 */	b ModuleEpilog
/* 80B5EE5C  3C 60 80 B6 */	lis r3, __destroy_global_chain_reference@ha
/* 80B5EE60  38 63 7C 2C */	addi r3, r3, __destroy_global_chain_reference@l
/* 80B5EE64  4B 70 43 2C */	b ModuleDestructorsX
/* 80B5EE68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B5EE6C  7C 08 03 A6 */	mtlr r0
/* 80B5EE70  38 21 00 10 */	addi r1, r1, 0x10
/* 80B5EE74  4E 80 00 20 */	blr 
