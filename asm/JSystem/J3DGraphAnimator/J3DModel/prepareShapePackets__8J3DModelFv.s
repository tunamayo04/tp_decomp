lbl_803282EC:
/* 803282EC  80 83 00 04 */	lwz r4, 4(r3)
/* 803282F0  A0 04 00 7C */	lhz r0, 0x7c(r4)
/* 803282F4  39 00 00 00 */	li r8, 0
/* 803282F8  38 C3 00 54 */	addi r6, r3, 0x54
/* 803282FC  3C 80 80 43 */	lis r4, j3dSys@ha
/* 80328300  38 A4 4A C8 */	addi r5, r4, j3dSys@l
/* 80328304  48 00 00 3C */	b lbl_80328340
lbl_80328308:
/* 80328308  55 04 04 3E */	clrlwi r4, r8, 0x10
/* 8032830C  80 E3 00 C4 */	lwz r7, 0xc4(r3)
/* 80328310  1C 84 00 3C */	mulli r4, r4, 0x3c
/* 80328314  7C E7 22 14 */	add r7, r7, r4
/* 80328318  80 83 00 84 */	lwz r4, 0x84(r3)
/* 8032831C  90 87 00 2C */	stw r4, 0x2c(r7)
/* 80328320  80 83 00 08 */	lwz r4, 8(r3)
/* 80328324  54 84 07 BE */	clrlwi r4, r4, 0x1e
/* 80328328  28 04 00 02 */	cmplwi r4, 2
/* 8032832C  40 82 00 0C */	bne lbl_80328338
/* 80328330  90 C7 00 30 */	stw r6, 0x30(r7)
/* 80328334  48 00 00 08 */	b lbl_8032833C
lbl_80328338:
/* 80328338  90 A7 00 30 */	stw r5, 0x30(r7)
lbl_8032833C:
/* 8032833C  39 08 00 01 */	addi r8, r8, 1
lbl_80328340:
/* 80328340  55 04 04 3E */	clrlwi r4, r8, 0x10
/* 80328344  7C 04 00 40 */	cmplw r4, r0
/* 80328348  41 80 FF C0 */	blt lbl_80328308
/* 8032834C  4E 80 00 20 */	blr 
