lbl_80650834:
/* 80650834  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80650838  7C 08 02 A6 */	mflr r0
/* 8065083C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80650840  4B FF FF 71 */	bl draw__11daB_ZANTZ_cFv
/* 80650844  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80650848  7C 08 03 A6 */	mtlr r0
/* 8065084C  38 21 00 10 */	addi r1, r1, 0x10
/* 80650850  4E 80 00 20 */	blr 
