lbl_80537FD0:
/* 80537FD0  38 00 00 00 */	li r0, 0
/* 80537FD4  88 63 10 C4 */	lbz r3, 0x10c4(r3)
/* 80537FD8  28 03 00 06 */	cmplwi r3, 6
/* 80537FDC  41 82 00 14 */	beq lbl_80537FF0
/* 80537FE0  28 03 00 07 */	cmplwi r3, 7
/* 80537FE4  41 82 00 0C */	beq lbl_80537FF0
/* 80537FE8  28 03 00 08 */	cmplwi r3, 8
/* 80537FEC  40 82 00 08 */	bne lbl_80537FF4
lbl_80537FF0:
/* 80537FF0  38 00 00 01 */	li r0, 1
lbl_80537FF4:
/* 80537FF4  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80537FF8  4E 80 00 20 */	blr 
