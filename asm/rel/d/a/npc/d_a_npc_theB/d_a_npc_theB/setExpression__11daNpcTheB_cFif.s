lbl_80AFF4A0:
/* 80AFF4A0  2C 04 00 00 */	cmpwi r4, 0
/* 80AFF4A4  4D 80 00 20 */	bltlr 
/* 80AFF4A8  2C 04 00 04 */	cmpwi r4, 4
/* 80AFF4AC  4C 80 00 20 */	bgelr 
/* 80AFF4B0  B0 83 09 DE */	sth r4, 0x9de(r3)
/* 80AFF4B4  D0 23 09 74 */	stfs f1, 0x974(r3)
/* 80AFF4B8  38 00 FF FF */	li r0, -1
/* 80AFF4BC  B0 03 09 D8 */	sth r0, 0x9d8(r3)
/* 80AFF4C0  38 00 00 00 */	li r0, 0
/* 80AFF4C4  B0 03 09 D6 */	sth r0, 0x9d6(r3)
/* 80AFF4C8  4E 80 00 20 */	blr 
