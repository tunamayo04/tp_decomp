lbl_806506CC:
/* 806506CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806506D0  7C 08 02 A6 */	mflr r0
/* 806506D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 806506D8  4B C1 29 B4 */	b ModuleEpilog
/* 806506DC  3C 60 80 65 */	lis r3, __destroy_global_chain_reference@ha
/* 806506E0  38 63 27 30 */	addi r3, r3, __destroy_global_chain_reference@l
/* 806506E4  4B C1 2A AC */	b ModuleDestructorsX
/* 806506E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806506EC  7C 08 03 A6 */	mtlr r0
/* 806506F0  38 21 00 10 */	addi r1, r1, 0x10
/* 806506F4  4E 80 00 20 */	blr 
