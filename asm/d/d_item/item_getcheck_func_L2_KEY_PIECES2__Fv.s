lbl_8009B5B8:
/* 8009B5B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009B5BC  7C 08 02 A6 */	mflr r0
/* 8009B5C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009B5C4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009B5C8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009B5CC  38 63 00 CC */	addi r3, r3, 0xcc
/* 8009B5D0  38 80 00 FA */	li r4, 0xfa
/* 8009B5D4  4B F9 88 F5 */	bl isFirstBit__21dSv_player_get_item_cCFUc
/* 8009B5D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009B5DC  7C 08 03 A6 */	mtlr r0
/* 8009B5E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009B5E4  4E 80 00 20 */	blr 
