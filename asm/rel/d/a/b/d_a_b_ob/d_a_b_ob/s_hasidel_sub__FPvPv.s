lbl_806159C4:
/* 806159C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806159C8  7C 08 02 A6 */	mflr r0
/* 806159CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 806159D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806159D4  7C 7F 1B 78 */	mr r31, r3
/* 806159D8  4B A0 33 08 */	b fopAc_IsActor__FPv
/* 806159DC  2C 03 00 00 */	cmpwi r3, 0
/* 806159E0  41 82 00 18 */	beq lbl_806159F8
/* 806159E4  A8 1F 00 08 */	lha r0, 8(r31)
/* 806159E8  2C 00 00 6D */	cmpwi r0, 0x6d
/* 806159EC  40 82 00 0C */	bne lbl_806159F8
/* 806159F0  7F E3 FB 78 */	mr r3, r31
/* 806159F4  4B A0 42 88 */	b fopAcM_delete__FP10fopAc_ac_c
lbl_806159F8:
/* 806159F8  38 60 00 00 */	li r3, 0
/* 806159FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80615A00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80615A04  7C 08 03 A6 */	mtlr r0
/* 80615A08  38 21 00 10 */	addi r1, r1, 0x10
/* 80615A0C  4E 80 00 20 */	blr 
