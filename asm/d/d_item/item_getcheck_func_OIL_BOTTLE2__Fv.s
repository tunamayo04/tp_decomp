lbl_8009A6B0:
/* 8009A6B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009A6B4  7C 08 02 A6 */	mflr r0
/* 8009A6B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009A6BC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009A6C0  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009A6C4  38 63 00 9C */	addi r3, r3, 0x9c
/* 8009A6C8  38 80 00 68 */	li r4, 0x68
/* 8009A6CC  4B F9 90 15 */	bl checkBottle__17dSv_player_item_cFUc
/* 8009A6D0  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8009A6D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009A6D8  7C 08 03 A6 */	mtlr r0
/* 8009A6DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8009A6E0  4E 80 00 20 */	blr 
