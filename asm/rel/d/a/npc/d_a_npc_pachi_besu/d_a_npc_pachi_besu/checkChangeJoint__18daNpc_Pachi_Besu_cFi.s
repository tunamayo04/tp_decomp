lbl_80A969E0:
/* 80A969E0  20 04 00 04 */	subfic r0, r4, 4
/* 80A969E4  7C 00 00 34 */	cntlzw r0, r0
/* 80A969E8  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 80A969EC  4E 80 00 20 */	blr 
