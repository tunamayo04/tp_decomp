lbl_80B8E704:
/* 80B8E704  38 80 00 00 */	li r4, 0
/* 80B8E708  B0 83 00 00 */	sth r4, 0(r3)
/* 80B8E70C  38 00 00 01 */	li r0, 1
/* 80B8E710  B0 03 00 02 */	sth r0, 2(r3)
/* 80B8E714  90 83 00 04 */	stw r4, 4(r3)
/* 80B8E718  4E 80 00 20 */	blr 
