lbl_8075765C:
/* 8075765C  A0 03 00 04 */	lhz r0, 4(r3)
/* 80757660  20 00 00 02 */	subfic r0, r0, 2
/* 80757664  7C 00 00 34 */	cntlzw r0, r0
/* 80757668  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 8075766C  4E 80 00 20 */	blr 
