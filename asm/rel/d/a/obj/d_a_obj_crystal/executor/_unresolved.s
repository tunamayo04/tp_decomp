lbl_80BD6378:
/* 80BD6378  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BD637C  7C 08 02 A6 */	mflr r0
/* 80BD6380  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BD6384  4B 68 CD 0C */	b ModuleUnresolved
/* 80BD6388  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BD638C  7C 08 03 A6 */	mtlr r0
/* 80BD6390  38 21 00 10 */	addi r1, r1, 0x10
/* 80BD6394  4E 80 00 20 */	blr 
