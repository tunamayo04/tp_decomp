lbl_80555448:
/* 80555448  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8055544C  7C 08 02 A6 */	mflr r0
/* 80555450  90 01 00 34 */	stw r0, 0x34(r1)
/* 80555454  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80555458  7C 7F 1B 78 */	mr r31, r3
/* 8055545C  3C 80 80 56 */	lis r4, lit_4777@ha
/* 80555460  38 A4 B1 74 */	addi r5, r4, lit_4777@l
/* 80555464  80 85 00 00 */	lwz r4, 0(r5)
/* 80555468  80 05 00 04 */	lwz r0, 4(r5)
/* 8055546C  90 81 00 14 */	stw r4, 0x14(r1)
/* 80555470  90 01 00 18 */	stw r0, 0x18(r1)
/* 80555474  80 05 00 08 */	lwz r0, 8(r5)
/* 80555478  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8055547C  38 81 00 14 */	addi r4, r1, 0x14
/* 80555480  48 00 0A A9 */	bl chkAction__13daNpc_Kolin_cFM13daNpc_Kolin_cFPCvPvPv_i
/* 80555484  2C 03 00 00 */	cmpwi r3, 0
/* 80555488  41 82 00 1C */	beq lbl_805554A4
/* 8055548C  7F E3 FB 78 */	mr r3, r31
/* 80555490  38 80 00 00 */	li r4, 0
/* 80555494  39 9F 0F E4 */	addi r12, r31, 0xfe4
/* 80555498  4B E0 CB EC */	b __ptmf_scall
/* 8055549C  60 00 00 00 */	nop 
/* 805554A0  48 00 00 30 */	b lbl_805554D0
lbl_805554A4:
/* 805554A4  3C 60 80 56 */	lis r3, lit_4782@ha
/* 805554A8  38 83 B1 80 */	addi r4, r3, lit_4782@l
/* 805554AC  80 64 00 00 */	lwz r3, 0(r4)
/* 805554B0  80 04 00 04 */	lwz r0, 4(r4)
/* 805554B4  90 61 00 08 */	stw r3, 8(r1)
/* 805554B8  90 01 00 0C */	stw r0, 0xc(r1)
/* 805554BC  80 04 00 08 */	lwz r0, 8(r4)
/* 805554C0  90 01 00 10 */	stw r0, 0x10(r1)
/* 805554C4  7F E3 FB 78 */	mr r3, r31
/* 805554C8  38 81 00 08 */	addi r4, r1, 8
/* 805554CC  48 00 0A 89 */	bl setAction__13daNpc_Kolin_cFM13daNpc_Kolin_cFPCvPvPv_i
lbl_805554D0:
/* 805554D0  38 60 00 01 */	li r3, 1
/* 805554D4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 805554D8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 805554DC  7C 08 03 A6 */	mtlr r0
/* 805554E0  38 21 00 30 */	addi r1, r1, 0x30
/* 805554E4  4E 80 00 20 */	blr 
