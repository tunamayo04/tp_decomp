lbl_80182CD0:
/* 80182CD0  80 63 00 08 */	lwz r3, 8(r3)
/* 80182CD4  1C 04 00 78 */	mulli r0, r4, 0x78
/* 80182CD8  7C 63 02 14 */	add r3, r3, r0
/* 80182CDC  54 A0 10 3A */	slwi r0, r5, 2
/* 80182CE0  7C 63 02 14 */	add r3, r3, r0
/* 80182CE4  C0 23 00 08 */	lfs f1, 8(r3)
/* 80182CE8  4E 80 00 20 */	blr 
