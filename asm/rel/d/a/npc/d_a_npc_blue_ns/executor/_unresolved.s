lbl_809688D8:
/* 809688D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809688DC  7C 08 02 A6 */	mflr r0
/* 809688E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 809688E4  4B 8F A7 AC */	b ModuleUnresolved
/* 809688E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809688EC  7C 08 03 A6 */	mtlr r0
/* 809688F0  38 21 00 10 */	addi r1, r1, 0x10
/* 809688F4  4E 80 00 20 */	blr 
