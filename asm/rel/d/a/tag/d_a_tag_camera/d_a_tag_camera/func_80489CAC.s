lbl_80489CAC:
/* 80489CAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80489CB0  7C 08 02 A6 */	mflr r0
/* 80489CB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80489CB8  3C 60 80 49 */	lis r3, data_8048A670@ha
/* 80489CBC  38 63 A6 70 */	addi r3, r3, data_8048A670@l
/* 80489CC0  80 63 00 00 */	lwz r3, 0(r3)
/* 80489CC4  81 83 06 28 */	lwz r12, 0x628(r3)
/* 80489CC8  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 80489CCC  7D 89 03 A6 */	mtctr r12
/* 80489CD0  4E 80 04 21 */	bctrl 
/* 80489CD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80489CD8  7C 08 03 A6 */	mtlr r0
/* 80489CDC  38 21 00 10 */	addi r1, r1, 0x10
/* 80489CE0  4E 80 00 20 */	blr 
