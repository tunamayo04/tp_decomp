lbl_80316E70:
/* 80316E70  80 83 00 20 */	lwz r4, 0x20(r3)
/* 80316E74  54 80 00 03 */	rlwinm. r0, r4, 0, 0, 1
/* 80316E78  4C 82 00 20 */	bnelr 
/* 80316E7C  64 80 80 00 */	oris r0, r4, 0x8000
/* 80316E80  90 03 00 20 */	stw r0, 0x20(r3)
/* 80316E84  38 00 00 00 */	li r0, 0
/* 80316E88  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80316E8C  4E 80 00 20 */	blr 
