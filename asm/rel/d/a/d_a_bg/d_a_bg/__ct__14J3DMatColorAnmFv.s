lbl_80457F1C:
/* 80457F1C  38 80 00 00 */	li r4, 0
/* 80457F20  B0 83 00 00 */	sth r4, 0(r3)
/* 80457F24  38 00 00 01 */	li r0, 1
/* 80457F28  B0 03 00 02 */	sth r0, 2(r3)
/* 80457F2C  90 83 00 04 */	stw r4, 4(r3)
/* 80457F30  4E 80 00 20 */	blr 
