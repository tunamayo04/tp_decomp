lbl_80834758:
/* 80834758  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8083475C  7C 08 02 A6 */	mflr r0
/* 80834760  90 01 00 14 */	stw r0, 0x14(r1)
/* 80834764  4B FF FF 81 */	bl _delete__8daE_ZS_cFv
/* 80834768  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8083476C  7C 08 03 A6 */	mtlr r0
/* 80834770  38 21 00 10 */	addi r1, r1, 0x10
/* 80834774  4E 80 00 20 */	blr 
