lbl_8081610C:
/* 8081610C  3C 80 80 82 */	lis r4, lit_3791@ha
/* 80816110  38 A4 18 AC */	addi r5, r4, lit_3791@l
/* 80816114  3C 80 80 82 */	lis r4, __vt__13daE_YMB_HIO_c@ha
/* 80816118  38 04 1E 00 */	addi r0, r4, __vt__13daE_YMB_HIO_c@l
/* 8081611C  90 03 00 00 */	stw r0, 0(r3)
/* 80816120  38 00 FF FF */	li r0, -1
/* 80816124  98 03 00 04 */	stb r0, 4(r3)
/* 80816128  C0 05 00 00 */	lfs f0, 0(r5)
/* 8081612C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80816130  C0 05 00 04 */	lfs f0, 4(r5)
/* 80816134  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80816138  C0 05 00 08 */	lfs f0, 8(r5)
/* 8081613C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80816140  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 80816144  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80816148  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 8081614C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80816150  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 80816154  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80816158  4E 80 00 20 */	blr 
