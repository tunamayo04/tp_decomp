lbl_80AB64A8:
/* 80AB64A8  38 80 00 00 */	li r4, 0
/* 80AB64AC  B0 83 00 00 */	sth r4, 0(r3)
/* 80AB64B0  38 00 00 01 */	li r0, 1
/* 80AB64B4  B0 03 00 02 */	sth r0, 2(r3)
/* 80AB64B8  90 83 00 04 */	stw r4, 4(r3)
/* 80AB64BC  4E 80 00 20 */	blr 
