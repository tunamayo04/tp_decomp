lbl_80782EF4:
/* 80782EF4  80 03 0A F8 */	lwz r0, 0xaf8(r3)
/* 80782EF8  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80782EFC  90 03 0A F8 */	stw r0, 0xaf8(r3)
/* 80782F00  38 00 00 00 */	li r0, 0
/* 80782F04  98 03 0B 16 */	stb r0, 0xb16(r3)
/* 80782F08  98 03 05 D0 */	stb r0, 0x5d0(r3)
/* 80782F0C  4E 80 00 20 */	blr 
