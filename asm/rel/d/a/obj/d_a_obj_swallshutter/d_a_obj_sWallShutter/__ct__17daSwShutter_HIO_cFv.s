lbl_805981EC:
/* 805981EC  3C 80 80 5A */	lis r4, lit_3630@ha
/* 805981F0  38 A4 8F 78 */	addi r5, r4, lit_3630@l
/* 805981F4  3C 80 80 5A */	lis r4, __vt__14mDoHIO_entry_c@ha
/* 805981F8  38 04 90 D4 */	addi r0, r4, __vt__14mDoHIO_entry_c@l
/* 805981FC  90 03 00 00 */	stw r0, 0(r3)
/* 80598200  3C 80 80 5A */	lis r4, __vt__17daSwShutter_HIO_c@ha
/* 80598204  38 04 90 C8 */	addi r0, r4, __vt__17daSwShutter_HIO_c@l
/* 80598208  90 03 00 00 */	stw r0, 0(r3)
/* 8059820C  C0 05 00 00 */	lfs f0, 0(r5)
/* 80598210  D0 03 00 04 */	stfs f0, 4(r3)
/* 80598214  C0 05 00 04 */	lfs f0, 4(r5)
/* 80598218  D0 03 00 08 */	stfs f0, 8(r3)
/* 8059821C  C0 05 00 08 */	lfs f0, 8(r5)
/* 80598220  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80598224  38 00 00 04 */	li r0, 4
/* 80598228  98 03 00 10 */	stb r0, 0x10(r3)
/* 8059822C  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 80598230  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80598234  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 80598238  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8059823C  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 80598240  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80598244  C0 25 00 18 */	lfs f1, 0x18(r5)
/* 80598248  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 8059824C  C0 05 00 1C */	lfs f0, 0x1c(r5)
/* 80598250  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80598254  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 80598258  4E 80 00 20 */	blr 
