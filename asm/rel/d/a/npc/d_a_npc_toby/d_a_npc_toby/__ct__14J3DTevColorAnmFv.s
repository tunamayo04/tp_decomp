lbl_80B1EDFC:
/* 80B1EDFC  38 80 00 00 */	li r4, 0
/* 80B1EE00  B0 83 00 00 */	sth r4, 0(r3)
/* 80B1EE04  38 00 00 01 */	li r0, 1
/* 80B1EE08  B0 03 00 02 */	sth r0, 2(r3)
/* 80B1EE0C  90 83 00 04 */	stw r4, 4(r3)
/* 80B1EE10  4E 80 00 20 */	blr 
