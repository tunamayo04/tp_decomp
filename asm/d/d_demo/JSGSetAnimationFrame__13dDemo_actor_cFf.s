lbl_80038A40:
/* 80038A40  D0 23 00 30 */	stfs f1, 0x30(r3)
/* 80038A44  A0 03 00 04 */	lhz r0, 4(r3)
/* 80038A48  60 00 00 40 */	ori r0, r0, 0x40
/* 80038A4C  B0 03 00 04 */	sth r0, 4(r3)
/* 80038A50  4E 80 00 20 */	blr 
