lbl_807A740C:
/* 807A740C  3C 80 80 7B */	lis r4, lit_3909@ha
/* 807A7410  38 A4 FD 2C */	addi r5, r4, lit_3909@l
/* 807A7414  3C 80 80 7B */	lis r4, __vt__12daE_SW_HIO_c@ha
/* 807A7418  38 04 01 A4 */	addi r0, r4, __vt__12daE_SW_HIO_c@l
/* 807A741C  90 03 00 00 */	stw r0, 0(r3)
/* 807A7420  38 00 FF FF */	li r0, -1
/* 807A7424  98 03 00 04 */	stb r0, 4(r3)
/* 807A7428  C0 05 00 08 */	lfs f0, 8(r5)
/* 807A742C  D0 03 00 08 */	stfs f0, 8(r3)
/* 807A7430  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 807A7434  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 807A7438  C0 25 00 30 */	lfs f1, 0x30(r5)
/* 807A743C  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 807A7440  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 807A7444  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 807A7448  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 807A744C  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 807A7450  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 807A7454  38 00 00 00 */	li r0, 0
/* 807A7458  98 03 00 20 */	stb r0, 0x20(r3)
/* 807A745C  4E 80 00 20 */	blr 
