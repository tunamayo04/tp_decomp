lbl_800D0624:
/* 800D0624  A0 03 2F E8 */	lhz r0, 0x2fe8(r3)
/* 800D0628  20 00 00 FF */	subfic r0, r0, 0xff
/* 800D062C  7C 00 00 34 */	cntlzw r0, r0
/* 800D0630  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 800D0634  4E 80 00 20 */	blr 
