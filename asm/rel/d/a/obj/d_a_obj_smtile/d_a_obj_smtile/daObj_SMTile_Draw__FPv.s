lbl_80CDE27C:
/* 80CDE27C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CDE280  7C 08 02 A6 */	mflr r0
/* 80CDE284  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CDE288  4B FF F8 11 */	bl Draw__14daObj_SMTile_cFv
/* 80CDE28C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CDE290  7C 08 03 A6 */	mtlr r0
/* 80CDE294  38 21 00 10 */	addi r1, r1, 0x10
/* 80CDE298  4E 80 00 20 */	blr 
