lbl_806E03EC:
/* 806E03EC  3C 80 80 6E */	lis r4, lit_3791@ha
/* 806E03F0  38 A4 59 20 */	addi r5, r4, lit_3791@l
/* 806E03F4  3C 80 80 6E */	lis r4, __vt__12daE_HM_HIO_c@ha
/* 806E03F8  38 04 5B C4 */	addi r0, r4, __vt__12daE_HM_HIO_c@l
/* 806E03FC  90 03 00 00 */	stw r0, 0(r3)
/* 806E0400  38 00 FF FF */	li r0, -1
/* 806E0404  98 03 00 04 */	stb r0, 4(r3)
/* 806E0408  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 806E040C  D0 03 00 08 */	stfs f0, 8(r3)
/* 806E0410  C0 05 00 30 */	lfs f0, 0x30(r5)
/* 806E0414  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 806E0418  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 806E041C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 806E0420  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 806E0424  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 806E0428  C0 05 00 3C */	lfs f0, 0x3c(r5)
/* 806E042C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 806E0430  C0 05 00 04 */	lfs f0, 4(r5)
/* 806E0434  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 806E0438  4E 80 00 20 */	blr 
