lbl_8035C448:
/* 8035C448  80 8D 93 A8 */	lwz r4, __peReg(r13)
/* 8035C44C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8035C450  A0 64 00 02 */	lhz r3, 2(r4)
/* 8035C454  50 03 1F 38 */	rlwimi r3, r0, 3, 0x1c, 0x1c
/* 8035C458  B0 64 00 02 */	sth r3, 2(r4)
/* 8035C45C  4E 80 00 20 */	blr 
