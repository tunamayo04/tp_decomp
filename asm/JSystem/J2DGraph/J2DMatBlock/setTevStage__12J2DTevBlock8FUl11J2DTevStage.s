lbl_802F20F4:
/* 802F20F4  88 05 00 01 */	lbz r0, 1(r5)
/* 802F20F8  54 84 18 38 */	slwi r4, r4, 3
/* 802F20FC  7C 63 22 14 */	add r3, r3, r4
/* 802F2100  98 03 00 58 */	stb r0, 0x58(r3)
/* 802F2104  88 05 00 02 */	lbz r0, 2(r5)
/* 802F2108  98 03 00 59 */	stb r0, 0x59(r3)
/* 802F210C  88 05 00 03 */	lbz r0, 3(r5)
/* 802F2110  98 03 00 5A */	stb r0, 0x5a(r3)
/* 802F2114  88 05 00 05 */	lbz r0, 5(r5)
/* 802F2118  98 03 00 5C */	stb r0, 0x5c(r3)
/* 802F211C  88 05 00 06 */	lbz r0, 6(r5)
/* 802F2120  98 03 00 5D */	stb r0, 0x5d(r3)
/* 802F2124  88 05 00 07 */	lbz r0, 7(r5)
/* 802F2128  98 03 00 5E */	stb r0, 0x5e(r3)
/* 802F212C  4E 80 00 20 */	blr 
