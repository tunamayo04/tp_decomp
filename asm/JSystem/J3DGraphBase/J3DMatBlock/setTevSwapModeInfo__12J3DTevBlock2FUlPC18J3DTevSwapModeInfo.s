lbl_80322658:
/* 80322658  54 80 18 38 */	slwi r0, r4, 3
/* 8032265C  7C 83 02 14 */	add r4, r3, r0
/* 80322660  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 80322664  54 03 07 B6 */	rlwinm r3, r0, 0, 0x1e, 0x1b
/* 80322668  88 05 00 01 */	lbz r0, 1(r5)
/* 8032266C  54 00 15 BA */	rlwinm r0, r0, 2, 0x16, 0x1d
/* 80322670  7C 60 03 78 */	or r0, r3, r0
/* 80322674  98 04 00 3C */	stb r0, 0x3c(r4)
/* 80322678  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 8032267C  54 03 00 3A */	rlwinm r3, r0, 0, 0, 0x1d
/* 80322680  88 05 00 00 */	lbz r0, 0(r5)
/* 80322684  7C 60 03 78 */	or r0, r3, r0
/* 80322688  98 04 00 3C */	stb r0, 0x3c(r4)
/* 8032268C  4E 80 00 20 */	blr 
