lbl_80A7CE30:
/* 80A7CE30  38 80 00 00 */	li r4, 0
/* 80A7CE34  B0 83 00 00 */	sth r4, 0(r3)
/* 80A7CE38  38 00 00 01 */	li r0, 1
/* 80A7CE3C  B0 03 00 02 */	sth r0, 2(r3)
/* 80A7CE40  90 83 00 04 */	stw r4, 4(r3)
/* 80A7CE44  4E 80 00 20 */	blr 
