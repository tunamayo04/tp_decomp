lbl_80458F38:
/* 80458F38  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80458F3C  7C 08 02 A6 */	mflr r0
/* 80458F40  90 01 00 24 */	stw r0, 0x24(r1)
/* 80458F44  39 61 00 20 */	addi r11, r1, 0x20
/* 80458F48  4B F0 92 94 */	b _savegpr_29
/* 80458F4C  7C 7F 1B 78 */	mr r31, r3
/* 80458F50  3B BF 05 70 */	addi r29, r31, 0x570
/* 80458F54  3B C0 00 00 */	li r30, 0
lbl_80458F58:
/* 80458F58  80 9D 00 04 */	lwz r4, 4(r29)
/* 80458F5C  28 04 00 00 */	cmplwi r4, 0
/* 80458F60  41 82 00 74 */	beq lbl_80458FD4
/* 80458F64  88 7F 05 F1 */	lbz r3, 0x5f1(r31)
/* 80458F68  28 03 00 00 */	cmplwi r3, 0
/* 80458F6C  41 82 00 3C */	beq lbl_80458FA8
/* 80458F70  38 03 FF FF */	addi r0, r3, -1
/* 80458F74  3C 60 80 46 */	lis r3, lit_4483@ha
/* 80458F78  C8 23 93 9C */	lfd f1, lit_4483@l(r3)
/* 80458F7C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80458F80  90 01 00 0C */	stw r0, 0xc(r1)
/* 80458F84  3C 00 43 30 */	lis r0, 0x4330
/* 80458F88  90 01 00 08 */	stw r0, 8(r1)
/* 80458F8C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80458F90  EC 20 08 28 */	fsubs f1, f0, f1
/* 80458F94  3C 60 80 46 */	lis r3, lit_4524@ha
/* 80458F98  C0 03 93 A4 */	lfs f0, lit_4524@l(r3)
/* 80458F9C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80458FA0  80 64 00 00 */	lwz r3, 0(r4)
/* 80458FA4  D0 03 00 0C */	stfs f0, 0xc(r3)
lbl_80458FA8:
/* 80458FA8  C0 3D 00 10 */	lfs f1, 0x10(r29)
/* 80458FAC  3C 60 80 46 */	lis r3, lit_3914@ha
/* 80458FB0  C0 03 93 84 */	lfs f0, lit_3914@l(r3)
/* 80458FB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80458FB8  4C 41 13 82 */	cror 2, 1, 2
/* 80458FBC  40 82 00 10 */	bne lbl_80458FCC
/* 80458FC0  80 7D 00 04 */	lwz r3, 4(r29)
/* 80458FC4  80 63 00 00 */	lwz r3, 0(r3)
/* 80458FC8  D0 23 00 0C */	stfs f1, 0xc(r3)
lbl_80458FCC:
/* 80458FCC  80 7D 00 04 */	lwz r3, 4(r29)
/* 80458FD0  4B FF F0 FD */	bl play__13daBg_btkAnm_cFv
lbl_80458FD4:
/* 80458FD4  80 7D 00 08 */	lwz r3, 8(r29)
/* 80458FD8  28 03 00 00 */	cmplwi r3, 0
/* 80458FDC  41 82 00 14 */	beq lbl_80458FF0
/* 80458FE0  88 1F 05 F0 */	lbz r0, 0x5f0(r31)
/* 80458FE4  28 00 00 00 */	cmplwi r0, 0
/* 80458FE8  40 82 00 08 */	bne lbl_80458FF0
/* 80458FEC  4B FF F2 89 */	bl play__13daBg_brkAnm_cFv
lbl_80458FF0:
/* 80458FF0  3B DE 00 01 */	addi r30, r30, 1
/* 80458FF4  2C 1E 00 06 */	cmpwi r30, 6
/* 80458FF8  3B BD 00 14 */	addi r29, r29, 0x14
/* 80458FFC  41 80 FF 5C */	blt lbl_80458F58
/* 80459000  38 60 00 01 */	li r3, 1
/* 80459004  39 61 00 20 */	addi r11, r1, 0x20
/* 80459008  4B F0 92 20 */	b _restgpr_29
/* 8045900C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80459010  7C 08 03 A6 */	mtlr r0
/* 80459014  38 21 00 20 */	addi r1, r1, 0x20
/* 80459018  4E 80 00 20 */	blr 
