lbl_80B1EEBC:
/* 80B1EEBC  38 80 00 00 */	li r4, 0
/* 80B1EEC0  B0 83 00 00 */	sth r4, 0(r3)
/* 80B1EEC4  38 00 00 01 */	li r0, 1
/* 80B1EEC8  B0 03 00 02 */	sth r0, 2(r3)
/* 80B1EECC  90 83 00 04 */	stw r4, 4(r3)
/* 80B1EED0  4E 80 00 20 */	blr 
