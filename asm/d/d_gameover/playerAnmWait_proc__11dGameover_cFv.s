lbl_8019B388:
/* 8019B388  88 03 01 19 */	lbz r0, 0x119(r3)
/* 8019B38C  28 00 00 00 */	cmplwi r0, 0
/* 8019B390  4D 82 00 20 */	beqlr 
/* 8019B394  38 00 00 01 */	li r0, 1
/* 8019B398  98 03 01 18 */	stb r0, 0x118(r3)
/* 8019B39C  4E 80 00 20 */	blr 
