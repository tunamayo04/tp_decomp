lbl_80B69630:
/* 80B69630  38 80 00 00 */	li r4, 0
/* 80B69634  B0 83 00 00 */	sth r4, 0(r3)
/* 80B69638  38 00 00 01 */	li r0, 1
/* 80B6963C  B0 03 00 02 */	sth r0, 2(r3)
/* 80B69640  90 83 00 04 */	stw r4, 4(r3)
/* 80B69644  4E 80 00 20 */	blr 
