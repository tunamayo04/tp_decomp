lbl_80B2CD64:
/* 80B2CD64  20 04 00 04 */	subfic r0, r4, 4
/* 80B2CD68  7C 00 00 34 */	cntlzw r0, r0
/* 80B2CD6C  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 80B2CD70  4E 80 00 20 */	blr 
