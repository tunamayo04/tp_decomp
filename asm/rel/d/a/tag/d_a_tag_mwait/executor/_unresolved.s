lbl_80D5BDF8:
/* 80D5BDF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D5BDFC  7C 08 02 A6 */	mflr r0
/* 80D5BE00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D5BE04  4B 50 72 8C */	b ModuleUnresolved
/* 80D5BE08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D5BE0C  7C 08 03 A6 */	mtlr r0
/* 80D5BE10  38 21 00 10 */	addi r1, r1, 0x10
/* 80D5BE14  4E 80 00 20 */	blr 
