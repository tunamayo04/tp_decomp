lbl_80B4CD18:
/* 80B4CD18  20 04 00 04 */	subfic r0, r4, 4
/* 80B4CD1C  7C 00 00 34 */	cntlzw r0, r0
/* 80B4CD20  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 80B4CD24  4E 80 00 20 */	blr 
