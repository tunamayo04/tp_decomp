lbl_8009AAB8:
/* 8009AAB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009AABC  7C 08 02 A6 */	mflr r0
/* 8009AAC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009AAC4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009AAC8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009AACC  38 63 00 CC */	addi r3, r3, 0xcc
/* 8009AAD0  38 80 00 7D */	li r4, 0x7d
/* 8009AAD4  4B F9 93 F5 */	bl isFirstBit__21dSv_player_get_item_cCFUc
/* 8009AAD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009AADC  7C 08 03 A6 */	mtlr r0
/* 8009AAE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009AAE4  4E 80 00 20 */	blr 
