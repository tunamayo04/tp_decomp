lbl_80BEEA58:
/* 80BEEA58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BEEA5C  7C 08 02 A6 */	mflr r0
/* 80BEEA60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BEEA64  4B 67 46 2C */	b ModuleUnresolved
/* 80BEEA68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BEEA6C  7C 08 03 A6 */	mtlr r0
/* 80BEEA70  38 21 00 10 */	addi r1, r1, 0x10
/* 80BEEA74  4E 80 00 20 */	blr 
