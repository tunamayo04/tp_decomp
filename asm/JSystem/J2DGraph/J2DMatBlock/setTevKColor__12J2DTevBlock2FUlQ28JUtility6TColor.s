lbl_802F25B8:
/* 802F25B8  88 05 00 00 */	lbz r0, 0(r5)
/* 802F25BC  54 84 10 3A */	slwi r4, r4, 2
/* 802F25C0  7C 63 22 14 */	add r3, r3, r4
/* 802F25C4  98 03 00 44 */	stb r0, 0x44(r3)
/* 802F25C8  88 05 00 01 */	lbz r0, 1(r5)
/* 802F25CC  98 03 00 45 */	stb r0, 0x45(r3)
/* 802F25D0  88 05 00 02 */	lbz r0, 2(r5)
/* 802F25D4  98 03 00 46 */	stb r0, 0x46(r3)
/* 802F25D8  88 05 00 03 */	lbz r0, 3(r5)
/* 802F25DC  98 03 00 47 */	stb r0, 0x47(r3)
/* 802F25E0  4E 80 00 20 */	blr 
