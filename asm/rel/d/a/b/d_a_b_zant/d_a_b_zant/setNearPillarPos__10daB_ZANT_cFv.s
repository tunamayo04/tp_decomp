lbl_806473E4:
/* 806473E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 806473E8  7C 08 02 A6 */	mflr r0
/* 806473EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 806473F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 806473F4  7C 7F 1B 78 */	mr r31, r3
/* 806473F8  80 63 07 5C */	lwz r3, 0x75c(r3)
/* 806473FC  38 81 00 08 */	addi r4, r1, 8
/* 80647400  4B 9D 25 BC */	b fopAcM_SearchByID__FUiPP10fopAc_ac_c
/* 80647404  80 61 00 08 */	lwz r3, 8(r1)
/* 80647408  28 03 00 00 */	cmplwi r3, 0
/* 8064740C  41 82 00 48 */	beq lbl_80647454
/* 80647410  C0 03 04 D0 */	lfs f0, 0x4d0(r3)
/* 80647414  D0 1F 06 A0 */	stfs f0, 0x6a0(r31)
/* 80647418  C0 03 04 D4 */	lfs f0, 0x4d4(r3)
/* 8064741C  D0 1F 06 A4 */	stfs f0, 0x6a4(r31)
/* 80647420  C0 03 04 D8 */	lfs f0, 0x4d8(r3)
/* 80647424  D0 1F 06 A8 */	stfs f0, 0x6a8(r31)
/* 80647428  C0 3F 06 A4 */	lfs f1, 0x6a4(r31)
/* 8064742C  3C 60 80 65 */	lis r3, lit_8037@ha
/* 80647430  C0 03 ED A0 */	lfs f0, lit_8037@l(r3)
/* 80647434  EC 01 00 2A */	fadds f0, f1, f0
/* 80647438  D0 1F 06 A4 */	stfs f0, 0x6a4(r31)
/* 8064743C  38 00 00 08 */	li r0, 8
/* 80647440  98 1F 07 09 */	stb r0, 0x709(r31)
/* 80647444  98 1F 07 08 */	stb r0, 0x708(r31)
/* 80647448  98 1F 07 0A */	stb r0, 0x70a(r31)
/* 8064744C  38 00 00 00 */	li r0, 0
/* 80647450  98 1F 07 1B */	stb r0, 0x71b(r31)
lbl_80647454:
/* 80647454  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80647458  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8064745C  7C 08 03 A6 */	mtlr r0
/* 80647460  38 21 00 20 */	addi r1, r1, 0x20
/* 80647464  4E 80 00 20 */	blr 
