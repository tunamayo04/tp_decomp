lbl_80D609B0:
/* 80D609B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D609B4  7C 08 02 A6 */	mflr r0
/* 80D609B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D609BC  4B FF FF 41 */	bl Delete__18daTag_ShopCamera_cFv
/* 80D609C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D609C4  7C 08 03 A6 */	mtlr r0
/* 80D609C8  38 21 00 10 */	addi r1, r1, 0x10
/* 80D609CC  4E 80 00 20 */	blr 
