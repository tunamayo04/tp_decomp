lbl_800742E4:
/* 800742E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800742E8  7C 08 02 A6 */	mflr r0
/* 800742EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 800742F0  39 61 00 20 */	addi r11, r1, 0x20
/* 800742F4  48 2E DE E9 */	bl _savegpr_29
/* 800742F8  7C 7D 1B 78 */	mr r29, r3
/* 800742FC  3B E0 00 00 */	li r31, 0
/* 80074300  93 ED 89 E0 */	stw r31, l_SetCounter(r13)
/* 80074304  3B C0 00 00 */	li r30, 0
lbl_80074308:
/* 80074308  7C 7D FA 14 */	add r3, r29, r31
/* 8007430C  4B FF FD E9 */	bl Init__11cBgS_ChkElmFv
/* 80074310  3B DE 00 01 */	addi r30, r30, 1
/* 80074314  2C 1E 01 00 */	cmpwi r30, 0x100
/* 80074318  3B FF 00 14 */	addi r31, r31, 0x14
/* 8007431C  41 80 FF EC */	blt lbl_80074308
/* 80074320  39 61 00 20 */	addi r11, r1, 0x20
/* 80074324  48 2E DF 05 */	bl _restgpr_29
/* 80074328  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007432C  7C 08 03 A6 */	mtlr r0
/* 80074330  38 21 00 20 */	addi r1, r1, 0x20
/* 80074334  4E 80 00 20 */	blr 
