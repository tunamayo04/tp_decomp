lbl_80A9CAAC:
/* 80A9CAAC  38 80 00 00 */	li r4, 0
/* 80A9CAB0  B0 83 00 00 */	sth r4, 0(r3)
/* 80A9CAB4  38 00 00 01 */	li r0, 1
/* 80A9CAB8  B0 03 00 02 */	sth r0, 2(r3)
/* 80A9CABC  90 83 00 04 */	stw r4, 4(r3)
/* 80A9CAC0  4E 80 00 20 */	blr 
