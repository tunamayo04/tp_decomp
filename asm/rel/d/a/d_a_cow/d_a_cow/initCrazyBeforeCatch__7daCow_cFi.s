lbl_8065E6BC:
/* 8065E6BC  38 00 00 02 */	li r0, 2
/* 8065E6C0  98 03 0C 9F */	stb r0, 0xc9f(r3)
/* 8065E6C4  3C 80 80 66 */	lis r4, lit_3998@ha
/* 8065E6C8  C0 04 2D C8 */	lfs f0, lit_3998@l(r4)
/* 8065E6CC  D0 03 05 2C */	stfs f0, 0x52c(r3)
/* 8065E6D0  38 00 00 00 */	li r0, 0
/* 8065E6D4  B0 03 0C 42 */	sth r0, 0xc42(r3)
/* 8065E6D8  38 00 00 01 */	li r0, 1
/* 8065E6DC  98 03 0C 63 */	stb r0, 0xc63(r3)
/* 8065E6E0  D0 03 05 30 */	stfs f0, 0x530(r3)
/* 8065E6E4  4E 80 00 20 */	blr 
