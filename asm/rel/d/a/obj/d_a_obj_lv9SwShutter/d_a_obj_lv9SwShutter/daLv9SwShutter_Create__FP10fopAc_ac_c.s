lbl_80C8D710:
/* 80C8D710  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C8D714  7C 08 02 A6 */	mflr r0
/* 80C8D718  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C8D71C  4B FF F9 25 */	bl create__16daLv9SwShutter_cFv
/* 80C8D720  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C8D724  7C 08 03 A6 */	mtlr r0
/* 80C8D728  38 21 00 10 */	addi r1, r1, 0x10
/* 80C8D72C  4E 80 00 20 */	blr 
