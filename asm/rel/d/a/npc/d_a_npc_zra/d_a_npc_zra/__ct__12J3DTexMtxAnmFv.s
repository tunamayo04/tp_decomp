lbl_80B7A4B0:
/* 80B7A4B0  38 80 00 00 */	li r4, 0
/* 80B7A4B4  B0 83 00 00 */	sth r4, 0(r3)
/* 80B7A4B8  38 00 00 01 */	li r0, 1
/* 80B7A4BC  B0 03 00 02 */	sth r0, 2(r3)
/* 80B7A4C0  90 83 00 04 */	stw r4, 4(r3)
/* 80B7A4C4  4E 80 00 20 */	blr 
