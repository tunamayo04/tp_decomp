lbl_8009A00C:
/* 8009A00C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009A010  7C 08 02 A6 */	mflr r0
/* 8009A014  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009A018  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009A01C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009A020  38 63 00 9C */	addi r3, r3, 0x9c
/* 8009A024  38 80 00 0A */	li r4, 0xa
/* 8009A028  38 A0 00 01 */	li r5, 1
/* 8009A02C  4B F9 90 05 */	bl getItem__17dSv_player_item_cCFib
/* 8009A030  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8009A034  20 00 00 47 */	subfic r0, r0, 0x47
/* 8009A038  7C 00 00 34 */	cntlzw r0, r0
/* 8009A03C  54 03 D9 7E */	srwi r3, r0, 5
/* 8009A040  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009A044  7C 08 03 A6 */	mtlr r0
/* 8009A048  38 21 00 10 */	addi r1, r1, 0x10
/* 8009A04C  4E 80 00 20 */	blr 
