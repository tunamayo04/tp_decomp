lbl_80B6F830:
/* 80B6F830  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 80B6F834  54 03 C6 3E */	rlwinm r3, r0, 0x18, 0x18, 0x1f
/* 80B6F838  4E 80 00 20 */	blr 
