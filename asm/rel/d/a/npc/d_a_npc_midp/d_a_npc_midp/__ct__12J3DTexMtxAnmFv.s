lbl_80A71450:
/* 80A71450  38 80 00 00 */	li r4, 0
/* 80A71454  B0 83 00 00 */	sth r4, 0(r3)
/* 80A71458  38 00 00 01 */	li r0, 1
/* 80A7145C  B0 03 00 02 */	sth r0, 2(r3)
/* 80A71460  90 83 00 04 */	stw r4, 4(r3)
/* 80A71464  4E 80 00 20 */	blr 
