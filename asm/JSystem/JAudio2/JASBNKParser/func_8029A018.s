lbl_8029A018:
/* 8029A018  28 04 00 00 */	cmplwi r4, 0
/* 8029A01C  40 82 00 0C */	bne lbl_8029A028
/* 8029A020  38 60 00 00 */	li r3, 0
/* 8029A024  4E 80 00 20 */	blr 
lbl_8029A028:
/* 8029A028  7C 63 22 14 */	add r3, r3, r4
/* 8029A02C  4E 80 00 20 */	blr 
