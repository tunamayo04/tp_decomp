lbl_80D610E0:
/* 80D610E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D610E4  7C 08 02 A6 */	mflr r0
/* 80D610E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D610EC  4B FF FA 8D */	bl create__16daTag_ShopItem_cFv
/* 80D610F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D610F4  7C 08 03 A6 */	mtlr r0
/* 80D610F8  38 21 00 10 */	addi r1, r1, 0x10
/* 80D610FC  4E 80 00 20 */	blr 
