lbl_8007B1B4:
/* 8007B1B4  A0 04 00 00 */	lhz r0, 0(r4)
/* 8007B1B8  80 83 00 A0 */	lwz r4, 0xa0(r3)
/* 8007B1BC  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8007B1C0  1C 00 00 0A */	mulli r0, r0, 0xa
/* 8007B1C4  7D 04 02 14 */	add r8, r4, r0
/* 8007B1C8  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 8007B1CC  A0 08 00 00 */	lhz r0, 0(r8)
/* 8007B1D0  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8007B1D4  7C 83 02 14 */	add r4, r3, r0
/* 8007B1D8  C0 04 00 00 */	lfs f0, 0(r4)
/* 8007B1DC  D0 05 00 00 */	stfs f0, 0(r5)
/* 8007B1E0  C0 04 00 04 */	lfs f0, 4(r4)
/* 8007B1E4  D0 05 00 04 */	stfs f0, 4(r5)
/* 8007B1E8  C0 04 00 08 */	lfs f0, 8(r4)
/* 8007B1EC  D0 05 00 08 */	stfs f0, 8(r5)
/* 8007B1F0  A0 08 00 02 */	lhz r0, 2(r8)
/* 8007B1F4  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8007B1F8  7C 83 02 14 */	add r4, r3, r0
/* 8007B1FC  C0 04 00 00 */	lfs f0, 0(r4)
/* 8007B200  D0 06 00 00 */	stfs f0, 0(r6)
/* 8007B204  C0 04 00 04 */	lfs f0, 4(r4)
/* 8007B208  D0 06 00 04 */	stfs f0, 4(r6)
/* 8007B20C  C0 04 00 08 */	lfs f0, 8(r4)
/* 8007B210  D0 06 00 08 */	stfs f0, 8(r6)
/* 8007B214  A0 08 00 04 */	lhz r0, 4(r8)
/* 8007B218  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8007B21C  7C 63 02 14 */	add r3, r3, r0
/* 8007B220  C0 03 00 00 */	lfs f0, 0(r3)
/* 8007B224  D0 07 00 00 */	stfs f0, 0(r7)
/* 8007B228  C0 03 00 04 */	lfs f0, 4(r3)
/* 8007B22C  D0 07 00 04 */	stfs f0, 4(r7)
/* 8007B230  C0 03 00 08 */	lfs f0, 8(r3)
/* 8007B234  D0 07 00 08 */	stfs f0, 8(r7)
/* 8007B238  38 60 00 01 */	li r3, 1
/* 8007B23C  4E 80 00 20 */	blr 
