lbl_808330AC:
/* 808330AC  3C 80 80 83 */	lis r4, __vt__12daE_ZS_HIO_c@ha
/* 808330B0  38 04 54 8C */	addi r0, r4, __vt__12daE_ZS_HIO_c@l
/* 808330B4  90 03 00 00 */	stw r0, 0(r3)
/* 808330B8  38 00 FF FF */	li r0, -1
/* 808330BC  98 03 00 04 */	stb r0, 4(r3)
/* 808330C0  3C 80 80 83 */	lis r4, lit_3930@ha
/* 808330C4  C0 04 52 FC */	lfs f0, lit_3930@l(r4)
/* 808330C8  D0 03 00 08 */	stfs f0, 8(r3)
/* 808330CC  3C 80 80 83 */	lis r4, lit_3931@ha
/* 808330D0  C0 04 53 00 */	lfs f0, lit_3931@l(r4)
/* 808330D4  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 808330D8  4E 80 00 20 */	blr 
