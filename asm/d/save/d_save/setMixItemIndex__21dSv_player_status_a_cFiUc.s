lbl_80032A78:
/* 80032A78  2C 04 00 04 */	cmpwi r4, 4
/* 80032A7C  4C 80 00 20 */	bgelr 
/* 80032A80  7C 63 22 14 */	add r3, r3, r4
/* 80032A84  98 A3 00 0F */	stb r5, 0xf(r3)
/* 80032A88  4E 80 00 20 */	blr 
