lbl_805742C8:
/* 805742C8  88 03 0F 80 */	lbz r0, 0xf80(r3)
/* 805742CC  2C 00 00 02 */	cmpwi r0, 2
/* 805742D0  4E 80 00 20 */	blr 
