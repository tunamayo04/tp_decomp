lbl_80D33588:
/* 80D33588  80 03 05 5C */	lwz r0, 0x55c(r3)
/* 80D3358C  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80D33590  90 03 05 5C */	stw r0, 0x55c(r3)
/* 80D33594  3C 80 80 D3 */	lis r4, lit_4030@ha
/* 80D33598  C0 04 41 80 */	lfs f0, lit_4030@l(r4)
/* 80D3359C  D0 03 05 2C */	stfs f0, 0x52c(r3)
/* 80D335A0  38 00 00 01 */	li r0, 1
/* 80D335A4  98 03 05 78 */	stb r0, 0x578(r3)
/* 80D335A8  4E 80 00 20 */	blr 
