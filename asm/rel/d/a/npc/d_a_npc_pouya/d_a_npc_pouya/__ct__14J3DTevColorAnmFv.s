lbl_80AAE65C:
/* 80AAE65C  38 80 00 00 */	li r4, 0
/* 80AAE660  B0 83 00 00 */	sth r4, 0(r3)
/* 80AAE664  38 00 00 01 */	li r0, 1
/* 80AAE668  B0 03 00 02 */	sth r0, 2(r3)
/* 80AAE66C  90 83 00 04 */	stw r4, 4(r3)
/* 80AAE670  4E 80 00 20 */	blr 
