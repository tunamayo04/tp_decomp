lbl_80A083F8:
/* 80A083F8  38 80 00 00 */	li r4, 0
/* 80A083FC  B0 83 00 00 */	sth r4, 0(r3)
/* 80A08400  38 00 00 01 */	li r0, 1
/* 80A08404  B0 03 00 02 */	sth r0, 2(r3)
/* 80A08408  90 83 00 04 */	stw r4, 4(r3)
/* 80A0840C  4E 80 00 20 */	blr 
