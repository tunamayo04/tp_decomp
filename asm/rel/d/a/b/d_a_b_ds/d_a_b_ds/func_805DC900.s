lbl_805DC900:
/* 805DC900  88 83 00 00 */	lbz r4, 0(r3)
/* 805DC904  28 04 00 00 */	cmplwi r4, 0
/* 805DC908  41 82 00 0C */	beq lbl_805DC914
/* 805DC90C  38 04 FF FF */	addi r0, r4, -1
/* 805DC910  98 03 00 00 */	stb r0, 0(r3)
lbl_805DC914:
/* 805DC914  88 63 00 00 */	lbz r3, 0(r3)
/* 805DC918  4E 80 00 20 */	blr 
