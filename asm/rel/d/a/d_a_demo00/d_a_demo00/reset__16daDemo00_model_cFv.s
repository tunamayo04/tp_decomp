lbl_804A4338:
/* 804A4338  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804A433C  7C 08 02 A6 */	mflr r0
/* 804A4340  90 01 00 14 */	stw r0, 0x14(r1)
/* 804A4344  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804A4348  7C 7F 1B 78 */	mr r31, r3
/* 804A434C  4B FF FF C1 */	bl reset__16daDemo00_resID_cFv
/* 804A4350  38 00 00 00 */	li r0, 0
/* 804A4354  90 1F 00 28 */	stw r0, 0x28(r31)
/* 804A4358  90 1F 00 34 */	stw r0, 0x34(r31)
/* 804A435C  90 1F 00 38 */	stw r0, 0x38(r31)
/* 804A4360  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 804A4364  90 1F 00 30 */	stw r0, 0x30(r31)
/* 804A4368  90 1F 00 40 */	stw r0, 0x40(r31)
/* 804A436C  90 1F 00 44 */	stw r0, 0x44(r31)
/* 804A4370  90 1F 00 48 */	stw r0, 0x48(r31)
/* 804A4374  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804A4378  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804A437C  7C 08 03 A6 */	mtlr r0
/* 804A4380  38 21 00 10 */	addi r1, r1, 0x10
/* 804A4384  4E 80 00 20 */	blr 
