lbl_800CF298:
/* 800CF298  80 83 06 50 */	lwz r4, 0x650(r3)
/* 800CF29C  80 84 00 84 */	lwz r4, 0x84(r4)
/* 800CF2A0  80 84 00 0C */	lwz r4, 0xc(r4)
/* 800CF2A4  A0 03 30 C0 */	lhz r0, 0x30c0(r3)
/* 800CF2A8  1C 00 00 30 */	mulli r0, r0, 0x30
/* 800CF2AC  7C 64 02 14 */	add r3, r4, r0
/* 800CF2B0  4E 80 00 20 */	blr 
