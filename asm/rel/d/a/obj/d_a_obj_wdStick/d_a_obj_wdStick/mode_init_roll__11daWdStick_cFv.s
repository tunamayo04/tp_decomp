lbl_80D338DC:
/* 80D338DC  80 03 05 5C */	lwz r0, 0x55c(r3)
/* 80D338E0  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80D338E4  90 03 05 5C */	stw r0, 0x55c(r3)
/* 80D338E8  38 00 00 03 */	li r0, 3
/* 80D338EC  98 03 05 78 */	stb r0, 0x578(r3)
/* 80D338F0  4E 80 00 20 */	blr 
