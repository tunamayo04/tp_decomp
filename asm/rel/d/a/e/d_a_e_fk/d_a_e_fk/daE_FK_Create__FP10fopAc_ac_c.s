lbl_806BB574:
/* 806BB574  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806BB578  7C 08 02 A6 */	mflr r0
/* 806BB57C  90 01 00 14 */	stw r0, 0x14(r1)
/* 806BB580  4B FF FA 85 */	bl Create__8daE_FK_cFv
/* 806BB584  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806BB588  7C 08 03 A6 */	mtlr r0
/* 806BB58C  38 21 00 10 */	addi r1, r1, 0x10
/* 806BB590  4E 80 00 20 */	blr 
