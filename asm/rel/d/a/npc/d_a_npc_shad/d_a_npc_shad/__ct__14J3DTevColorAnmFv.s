lbl_80AD8FB4:
/* 80AD8FB4  38 80 00 00 */	li r4, 0
/* 80AD8FB8  B0 83 00 00 */	sth r4, 0(r3)
/* 80AD8FBC  38 00 00 01 */	li r0, 1
/* 80AD8FC0  B0 03 00 02 */	sth r0, 2(r3)
/* 80AD8FC4  90 83 00 04 */	stw r4, 4(r3)
/* 80AD8FC8  4E 80 00 20 */	blr 
