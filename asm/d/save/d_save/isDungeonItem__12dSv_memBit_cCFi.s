lbl_80034934:
/* 80034934  88 63 00 1D */	lbz r3, 0x1d(r3)
/* 80034938  38 00 00 01 */	li r0, 1
/* 8003493C  7C 00 20 30 */	slw r0, r0, r4
/* 80034940  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80034944  7C 63 00 38 */	and r3, r3, r0
/* 80034948  30 03 FF FF */	addic r0, r3, -1
/* 8003494C  7C 60 19 10 */	subfe r3, r0, r3
/* 80034950  4E 80 00 20 */	blr 
