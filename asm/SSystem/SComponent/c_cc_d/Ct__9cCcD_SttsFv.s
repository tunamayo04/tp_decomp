lbl_80263904:
/* 80263904  C0 02 B6 20 */	lfs f0, lit_2431(r2)
/* 80263908  D0 03 00 00 */	stfs f0, 0(r3)
/* 8026390C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80263910  D0 03 00 08 */	stfs f0, 8(r3)
/* 80263914  38 80 00 00 */	li r4, 0
/* 80263918  90 83 00 0C */	stw r4, 0xc(r3)
/* 8026391C  38 00 FF FF */	li r0, -1
/* 80263920  90 03 00 10 */	stw r0, 0x10(r3)
/* 80263924  98 83 00 14 */	stb r4, 0x14(r3)
/* 80263928  98 83 00 15 */	stb r4, 0x15(r3)
/* 8026392C  98 83 00 16 */	stb r4, 0x16(r3)
/* 80263930  4E 80 00 20 */	blr 
