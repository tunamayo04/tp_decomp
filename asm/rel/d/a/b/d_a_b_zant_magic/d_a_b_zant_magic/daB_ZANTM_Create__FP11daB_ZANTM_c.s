lbl_8065041C:
/* 8065041C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80650420  7C 08 02 A6 */	mflr r0
/* 80650424  90 01 00 14 */	stw r0, 0x14(r1)
/* 80650428  4B FF FB 2D */	bl create__11daB_ZANTM_cFv
/* 8065042C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80650430  7C 08 03 A6 */	mtlr r0
/* 80650434  38 21 00 10 */	addi r1, r1, 0x10
/* 80650438  4E 80 00 20 */	blr 
