lbl_802B9968:
/* 802B9968  88 03 00 D0 */	lbz r0, 0xd0(r3)
/* 802B996C  50 80 17 7A */	rlwimi r0, r4, 2, 0x1d, 0x1d
/* 802B9970  98 03 00 D0 */	stb r0, 0xd0(r3)
/* 802B9974  4E 80 00 20 */	blr 
