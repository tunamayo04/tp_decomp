lbl_80D2BC94:
/* 80D2BC94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D2BC98  7C 08 02 A6 */	mflr r0
/* 80D2BC9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D2BCA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D2BCA4  7C 7F 1B 78 */	mr r31, r3
/* 80D2BCA8  3C 60 80 D3 */	lis r3, stringBase0@ha
/* 80D2BCAC  38 63 C4 8C */	addi r3, r3, stringBase0@l
/* 80D2BCB0  38 80 00 04 */	li r4, 4
/* 80D2BCB4  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha
/* 80D2BCB8  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l
/* 80D2BCBC  3C A5 00 02 */	addis r5, r5, 2
/* 80D2BCC0  38 C0 00 80 */	li r6, 0x80
/* 80D2BCC4  38 A5 C2 F8 */	addi r5, r5, -15624
/* 80D2BCC8  4B 31 06 24 */	b getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 80D2BCCC  3C 80 00 08 */	lis r4, 8
/* 80D2BCD0  3C A0 11 00 */	lis r5, 0x1100 /* 0x11000084@ha */
/* 80D2BCD4  38 A5 00 84 */	addi r5, r5, 0x0084 /* 0x11000084@l */
/* 80D2BCD8  4B 2E 8F 7C */	b mDoExt_J3DModel__create__FP12J3DModelDataUlUl
/* 80D2BCDC  90 7F 05 A8 */	stw r3, 0x5a8(r31)
/* 80D2BCE0  80 7F 05 A8 */	lwz r3, 0x5a8(r31)
/* 80D2BCE4  30 03 FF FF */	addic r0, r3, -1
/* 80D2BCE8  7C 60 19 10 */	subfe r3, r0, r3
/* 80D2BCEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D2BCF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D2BCF4  7C 08 03 A6 */	mtlr r0
/* 80D2BCF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80D2BCFC  4E 80 00 20 */	blr 
