lbl_8059E770:
/* 8059E770  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8059E774  7C 08 02 A6 */	mflr r0
/* 8059E778  90 01 00 14 */	stw r0, 0x14(r1)
/* 8059E77C  4B FF FB 45 */	bl execute__10daScExit_cFv
/* 8059E780  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8059E784  7C 08 03 A6 */	mtlr r0
/* 8059E788  38 21 00 10 */	addi r1, r1, 0x10
/* 8059E78C  4E 80 00 20 */	blr 
