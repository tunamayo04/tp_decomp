lbl_80038E20:
/* 80038E20  90 83 00 08 */	stw r4, 8(r3)
/* 80038E24  88 03 00 04 */	lbz r0, 4(r3)
/* 80038E28  60 00 00 01 */	ori r0, r0, 1
/* 80038E2C  98 03 00 04 */	stb r0, 4(r3)
/* 80038E30  4E 80 00 20 */	blr 
