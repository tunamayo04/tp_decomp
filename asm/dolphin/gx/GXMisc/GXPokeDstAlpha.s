lbl_8035C460:
/* 8035C460  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8035C464  80 8D 93 A8 */	lwz r4, __peReg(r13)
/* 8035C468  38 A0 00 00 */	li r5, 0
/* 8035C46C  50 05 06 3E */	rlwimi r5, r0, 0, 0x18, 0x1f
/* 8035C470  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8035C474  38 65 00 00 */	addi r3, r5, 0
/* 8035C478  50 03 45 EE */	rlwimi r3, r0, 8, 0x17, 0x17
/* 8035C47C  B0 64 00 04 */	sth r3, 4(r4)
/* 8035C480  4E 80 00 20 */	blr 
