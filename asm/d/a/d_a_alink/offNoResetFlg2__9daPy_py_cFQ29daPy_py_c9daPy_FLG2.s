lbl_8014136C:
/* 8014136C  80 A3 05 78 */	lwz r5, 0x578(r3)
/* 80141370  7C A0 20 78 */	andc r0, r5, r4
/* 80141374  90 03 05 78 */	stw r0, 0x578(r3)
/* 80141378  4E 80 00 20 */	blr 
