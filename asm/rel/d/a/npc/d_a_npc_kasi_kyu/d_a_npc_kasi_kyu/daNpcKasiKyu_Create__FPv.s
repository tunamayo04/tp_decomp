lbl_80A24EB0:
/* 80A24EB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A24EB4  7C 08 02 A6 */	mflr r0
/* 80A24EB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A24EBC  4B FF CF 69 */	bl Create__14daNpcKasiKyu_cFv
/* 80A24EC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A24EC4  7C 08 03 A6 */	mtlr r0
/* 80A24EC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80A24ECC  4E 80 00 20 */	blr 
