lbl_8052090C:
/* 8052090C  C0 04 05 BC */	lfs f0, 0x5bc(r4)
/* 80520910  D0 03 00 00 */	stfs f0, 0(r3)
/* 80520914  C0 04 05 C0 */	lfs f0, 0x5c0(r4)
/* 80520918  D0 03 00 04 */	stfs f0, 4(r3)
/* 8052091C  C0 04 05 C4 */	lfs f0, 0x5c4(r4)
/* 80520920  D0 03 00 08 */	stfs f0, 8(r3)
/* 80520924  4E 80 00 20 */	blr 
