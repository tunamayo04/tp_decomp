lbl_800539DC:
/* 800539DC  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 800539E0  28 00 00 02 */	cmplwi r0, 2
/* 800539E4  40 80 00 14 */	bge lbl_800539F8
/* 800539E8  54 80 15 BA */	rlwinm r0, r4, 2, 0x16, 0x1d
/* 800539EC  7C 63 02 14 */	add r3, r3, r0
/* 800539F0  80 63 01 00 */	lwz r3, 0x100(r3)
/* 800539F4  4E 80 00 20 */	blr 
lbl_800539F8:
/* 800539F8  38 60 00 00 */	li r3, 0
/* 800539FC  4E 80 00 20 */	blr 
