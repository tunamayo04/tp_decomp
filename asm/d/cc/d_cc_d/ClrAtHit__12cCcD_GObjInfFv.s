lbl_80085138:
/* 80085138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008513C  7C 08 02 A6 */	mflr r0
/* 80085140  90 01 00 14 */	stw r0, 0x14(r1)
/* 80085144  48 1D F7 25 */	bl ClrHit__10cCcD_ObjAtFv
/* 80085148  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008514C  7C 08 03 A6 */	mtlr r0
/* 80085150  38 21 00 10 */	addi r1, r1, 0x10
/* 80085154  4E 80 00 20 */	blr 
