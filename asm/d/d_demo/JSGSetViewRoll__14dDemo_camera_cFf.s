lbl_80038DDC:
/* 80038DDC  D0 23 00 3C */	stfs f1, 0x3c(r3)
/* 80038DE0  88 03 00 04 */	lbz r0, 4(r3)
/* 80038DE4  60 00 00 80 */	ori r0, r0, 0x80
/* 80038DE8  98 03 00 04 */	stb r0, 4(r3)
/* 80038DEC  4E 80 00 20 */	blr 
