lbl_80592814:
/* 80592814  88 83 00 00 */	lbz r4, 0(r3)
/* 80592818  28 04 00 00 */	cmplwi r4, 0
/* 8059281C  41 82 00 0C */	beq lbl_80592828
/* 80592820  38 04 FF FF */	addi r0, r4, -1
/* 80592824  98 03 00 00 */	stb r0, 0(r3)
lbl_80592828:
/* 80592828  88 63 00 00 */	lbz r3, 0(r3)
/* 8059282C  4E 80 00 20 */	blr 
