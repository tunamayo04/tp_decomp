lbl_8049004C:
/* 8049004C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80490050  7C 08 02 A6 */	mflr r0
/* 80490054  90 01 00 14 */	stw r0, 0x14(r1)
/* 80490058  7C 64 1B 78 */	mr r4, r3
/* 8049005C  2C 05 00 00 */	cmpwi r5, 0
/* 80490060  41 82 00 20 */	beq lbl_80490080
/* 80490064  38 64 05 80 */	addi r3, r4, 0x580
/* 80490068  80 A4 05 7C */	lwz r5, 0x57c(r4)
/* 8049006C  38 C0 00 00 */	li r6, 0
/* 80490070  38 E0 00 00 */	li r7, 0
/* 80490074  4B DB 9F 1C */	b init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c
/* 80490078  38 60 00 00 */	li r3, 0
/* 8049007C  48 00 00 14 */	b lbl_80490090
lbl_80490080:
/* 80490080  38 64 05 80 */	addi r3, r4, 0x580
/* 80490084  38 A0 00 00 */	li r5, 0
/* 80490088  38 C0 00 00 */	li r6, 0
/* 8049008C  4B DB A2 4C */	b doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci
lbl_80490090:
/* 80490090  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80490094  7C 08 03 A6 */	mtlr r0
/* 80490098  38 21 00 10 */	addi r1, r1, 0x10
/* 8049009C  4E 80 00 20 */	blr 
