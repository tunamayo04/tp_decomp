lbl_8007B958:
/* 8007B958  88 03 00 88 */	lbz r0, 0x88(r3)
/* 8007B95C  54 03 CF FE */	rlwinm r3, r0, 0x19, 0x1f, 0x1f
/* 8007B960  4E 80 00 20 */	blr 
