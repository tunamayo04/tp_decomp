lbl_80698328:
/* 80698328  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8069832C  7C 08 02 A6 */	mflr r0
/* 80698330  90 01 00 14 */	stw r0, 0x14(r1)
/* 80698334  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha
/* 80698338  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l
/* 8069833C  80 C5 5D AC */	lwz r6, 0x5dac(r5)
/* 80698340  C0 03 06 80 */	lfs f0, 0x680(r3)
/* 80698344  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80698348  40 80 00 48 */	bge lbl_80698390
/* 8069834C  A8 A3 06 7C */	lha r5, 0x67c(r3)
/* 80698350  A8 03 04 E6 */	lha r0, 0x4e6(r3)
/* 80698354  7C 05 00 50 */	subf r0, r5, r0
/* 80698358  7C 05 07 34 */	extsh r5, r0
/* 8069835C  7C 80 07 34 */	extsh r0, r4
/* 80698360  7C 05 00 00 */	cmpw r5, r0
/* 80698364  40 80 00 2C */	bge lbl_80698390
/* 80698368  7C 04 00 D0 */	neg r0, r4
/* 8069836C  7C 00 07 34 */	extsh r0, r0
/* 80698370  7C 05 00 00 */	cmpw r5, r0
/* 80698374  40 81 00 1C */	ble lbl_80698390
/* 80698378  7C C4 33 78 */	mr r4, r6
/* 8069837C  4B FF FE D5 */	bl other_bg_check__FP10e_cr_classP10fopAc_ac_c
/* 80698380  2C 03 00 00 */	cmpwi r3, 0
/* 80698384  40 82 00 0C */	bne lbl_80698390
/* 80698388  38 60 00 01 */	li r3, 1
/* 8069838C  48 00 00 08 */	b lbl_80698394
lbl_80698390:
/* 80698390  38 60 00 00 */	li r3, 0
lbl_80698394:
/* 80698394  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80698398  7C 08 03 A6 */	mtlr r0
/* 8069839C  38 21 00 10 */	addi r1, r1, 0x10
/* 806983A0  4E 80 00 20 */	blr 
