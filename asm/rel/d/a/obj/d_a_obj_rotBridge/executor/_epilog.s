lbl_80CBE8CC:
/* 80CBE8CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CBE8D0  7C 08 02 A6 */	mflr r0
/* 80CBE8D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CBE8D8  4B 5A 47 B4 */	b ModuleEpilog
/* 80CBE8DC  3C 60 80 CC */	lis r3, __destroy_global_chain_reference@ha
/* 80CBE8E0  38 63 F6 5C */	addi r3, r3, __destroy_global_chain_reference@l
/* 80CBE8E4  4B 5A 48 AC */	b ModuleDestructorsX
/* 80CBE8E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CBE8EC  7C 08 03 A6 */	mtlr r0
/* 80CBE8F0  38 21 00 10 */	addi r1, r1, 0x10
/* 80CBE8F4  4E 80 00 20 */	blr 
