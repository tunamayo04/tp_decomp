lbl_805AA5D8:
/* 805AA5D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805AA5DC  7C 08 02 A6 */	mflr r0
/* 805AA5E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 805AA5E4  4B CB 8A AC */	b ModuleUnresolved
/* 805AA5E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805AA5EC  7C 08 03 A6 */	mtlr r0
/* 805AA5F0  38 21 00 10 */	addi r1, r1, 0x10
/* 805AA5F4  4E 80 00 20 */	blr 
