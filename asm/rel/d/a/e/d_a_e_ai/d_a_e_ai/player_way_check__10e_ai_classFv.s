lbl_806794F4:
/* 806794F4  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 806794F8  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 806794FC  80 84 5D AC */	lwz r4, 0x5dac(r4)
/* 80679500  A8 84 04 E6 */	lha r4, 0x4e6(r4)
/* 80679504  A8 03 04 E6 */	lha r0, 0x4e6(r3)
/* 80679508  7C 04 00 50 */	subf r0, r4, r0
/* 8067950C  7C 00 07 35 */	extsh. r0, r0
/* 80679510  40 80 00 0C */	bge lbl_8067951C
/* 80679514  7C 00 00 D0 */	neg r0, r0
/* 80679518  7C 00 07 34 */	extsh r0, r0
lbl_8067951C:
/* 8067951C  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 80679520  28 00 40 00 */	cmplwi r0, 0x4000
/* 80679524  40 80 00 0C */	bge lbl_80679530
/* 80679528  38 60 00 00 */	li r3, 0
/* 8067952C  4E 80 00 20 */	blr 
lbl_80679530:
/* 80679530  38 60 00 01 */	li r3, 1
/* 80679534  4E 80 00 20 */	blr 
