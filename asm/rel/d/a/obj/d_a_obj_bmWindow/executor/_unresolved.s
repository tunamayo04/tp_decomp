lbl_80BB8178:
/* 80BB8178  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BB817C  7C 08 02 A6 */	mflr r0
/* 80BB8180  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BB8184  4B 6A AF 0C */	b ModuleUnresolved
/* 80BB8188  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BB818C  7C 08 03 A6 */	mtlr r0
/* 80BB8190  38 21 00 10 */	addi r1, r1, 0x10
/* 80BB8194  4E 80 00 20 */	blr 
