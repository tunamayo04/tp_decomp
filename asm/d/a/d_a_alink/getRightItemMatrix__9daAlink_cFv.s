lbl_800CF328:
/* 800CF328  80 83 06 50 */	lwz r4, 0x650(r3)
/* 800CF32C  80 84 00 84 */	lwz r4, 0x84(r4)
/* 800CF330  80 84 00 0C */	lwz r4, 0xc(r4)
/* 800CF334  A0 03 30 C2 */	lhz r0, 0x30c2(r3)
/* 800CF338  1C 00 00 30 */	mulli r0, r0, 0x30
/* 800CF33C  7C 64 02 14 */	add r3, r4, r0
/* 800CF340  4E 80 00 20 */	blr 
