lbl_80237228:
/* 80237228  88 03 01 9A */	lbz r0, 0x19a(r3)
/* 8023722C  20 00 00 10 */	subfic r0, r0, 0x10
/* 80237230  7C 00 00 34 */	cntlzw r0, r0
/* 80237234  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 80237238  4E 80 00 20 */	blr 
