lbl_8022E12C:
/* 8022E12C  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 8022E130  28 00 00 00 */	cmplwi r0, 0
/* 8022E134  4D 82 00 20 */	beqlr 
/* 8022E138  38 80 00 00 */	li r4, 0
/* 8022E13C  C0 02 B0 60 */	lfs f0, lit_4027(r2)
/* 8022E140  7C 86 23 78 */	mr r6, r4
/* 8022E144  38 00 00 96 */	li r0, 0x96
/* 8022E148  7C 09 03 A6 */	mtctr r0
lbl_8022E14C:
/* 8022E14C  80 A3 00 3C */	lwz r5, 0x3c(r3)
/* 8022E150  38 04 00 14 */	addi r0, r4, 0x14
/* 8022E154  7C 05 05 2E */	stfsx f0, r5, r0
/* 8022E158  80 A3 00 3C */	lwz r5, 0x3c(r3)
/* 8022E15C  38 04 00 19 */	addi r0, r4, 0x19
/* 8022E160  7C C5 01 AE */	stbx r6, r5, r0
/* 8022E164  38 84 00 1C */	addi r4, r4, 0x1c
/* 8022E168  42 00 FF E4 */	bdnz lbl_8022E14C
/* 8022E16C  38 00 00 00 */	li r0, 0
/* 8022E170  80 63 00 40 */	lwz r3, 0x40(r3)
/* 8022E174  B0 03 00 00 */	sth r0, 0(r3)
/* 8022E178  4E 80 00 20 */	blr 
