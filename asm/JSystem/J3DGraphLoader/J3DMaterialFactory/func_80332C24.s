lbl_80332C24:
/* 80332C24  28 04 00 00 */	cmplwi r4, 0
/* 80332C28  40 82 00 0C */	bne lbl_80332C34
/* 80332C2C  38 60 00 00 */	li r3, 0
/* 80332C30  4E 80 00 20 */	blr 
lbl_80332C34:
/* 80332C34  7C 63 22 14 */	add r3, r3, r4
/* 80332C38  4E 80 00 20 */	blr 
