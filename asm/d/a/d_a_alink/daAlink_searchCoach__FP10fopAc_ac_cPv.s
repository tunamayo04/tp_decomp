lbl_800EC758:
/* 800EC758  A8 03 00 08 */	lha r0, 8(r3)
/* 800EC75C  2C 00 00 56 */	cmpwi r0, 0x56
/* 800EC760  4D 82 00 20 */	beqlr 
/* 800EC764  38 60 00 00 */	li r3, 0
/* 800EC768  4E 80 00 20 */	blr 
