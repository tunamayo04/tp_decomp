lbl_80254430:
/* 80254430  88 04 00 00 */	lbz r0, 0(r4)
/* 80254434  98 03 01 3C */	stb r0, 0x13c(r3)
/* 80254438  88 04 00 01 */	lbz r0, 1(r4)
/* 8025443C  98 03 01 3D */	stb r0, 0x13d(r3)
/* 80254440  88 04 00 02 */	lbz r0, 2(r4)
/* 80254444  98 03 01 3E */	stb r0, 0x13e(r3)
/* 80254448  88 04 00 03 */	lbz r0, 3(r4)
/* 8025444C  98 03 01 3F */	stb r0, 0x13f(r3)
/* 80254450  38 60 00 01 */	li r3, 1
/* 80254454  4E 80 00 20 */	blr 
