lbl_80322EF8:
/* 80322EF8  88 05 00 00 */	lbz r0, 0(r5)
/* 80322EFC  54 84 10 3A */	slwi r4, r4, 2
/* 80322F00  7C 63 22 14 */	add r3, r3, r4
/* 80322F04  98 03 00 0C */	stb r0, 0xc(r3)
/* 80322F08  88 05 00 01 */	lbz r0, 1(r5)
/* 80322F0C  98 03 00 0D */	stb r0, 0xd(r3)
/* 80322F10  88 05 00 02 */	lbz r0, 2(r5)
/* 80322F14  98 03 00 0E */	stb r0, 0xe(r3)
/* 80322F18  88 05 00 03 */	lbz r0, 3(r5)
/* 80322F1C  98 03 00 0F */	stb r0, 0xf(r3)
/* 80322F20  4E 80 00 20 */	blr 
