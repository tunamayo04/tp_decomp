lbl_80299FD0:
/* 80299FD0  28 04 00 00 */	cmplwi r4, 0
/* 80299FD4  40 82 00 0C */	bne lbl_80299FE0
/* 80299FD8  38 60 00 00 */	li r3, 0
/* 80299FDC  4E 80 00 20 */	blr 
lbl_80299FE0:
/* 80299FE0  7C 63 22 14 */	add r3, r3, r4
/* 80299FE4  4E 80 00 20 */	blr 
