lbl_80263070:
/* 80263070  88 03 00 20 */	lbz r0, 0x20(r3)
/* 80263074  54 00 17 3A */	rlwinm r0, r0, 2, 0x1c, 0x1d
/* 80263078  3C 60 80 3C */	lis r3, strings@ha
/* 8026307C  38 63 34 B0 */	addi r3, r3, strings@l
/* 80263080  7C 63 00 2E */	lwzx r3, r3, r0
/* 80263084  4E 80 00 20 */	blr 
