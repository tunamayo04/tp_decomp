lbl_8059E2C0:
/* 8059E2C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8059E2C4  7C 08 02 A6 */	mflr r0
/* 8059E2C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8059E2CC  48 00 00 19 */	bl event_proc_call__10daScExit_cFv
/* 8059E2D0  38 60 00 01 */	li r3, 1
/* 8059E2D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8059E2D8  7C 08 03 A6 */	mtlr r0
/* 8059E2DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8059E2E0  4E 80 00 20 */	blr 
