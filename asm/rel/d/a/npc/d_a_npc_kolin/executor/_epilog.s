lbl_80553F2C:
/* 80553F2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80553F30  7C 08 02 A6 */	mflr r0
/* 80553F34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80553F38  4B D0 F1 54 */	b ModuleEpilog
/* 80553F3C  3C 60 80 56 */	lis r3, __destroy_global_chain_reference@ha
/* 80553F40  38 63 A5 A8 */	addi r3, r3, __destroy_global_chain_reference@l
/* 80553F44  4B D0 F2 4C */	b ModuleDestructorsX
/* 80553F48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80553F4C  7C 08 03 A6 */	mtlr r0
/* 80553F50  38 21 00 10 */	addi r1, r1, 0x10
/* 80553F54  4E 80 00 20 */	blr 
