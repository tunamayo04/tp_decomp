lbl_800389A8:
/* 800389A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800389AC  C0 22 83 CC */	lfs f1, lit_4567(r2)
/* 800389B0  C0 04 00 00 */	lfs f0, 0(r4)
/* 800389B4  EC 01 00 32 */	fmuls f0, f1, f0
/* 800389B8  FC 00 00 1E */	fctiwz f0, f0
/* 800389BC  D8 01 00 08 */	stfd f0, 8(r1)
/* 800389C0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800389C4  B0 03 00 20 */	sth r0, 0x20(r3)
/* 800389C8  C0 04 00 04 */	lfs f0, 4(r4)
/* 800389CC  EC 01 00 32 */	fmuls f0, f1, f0
/* 800389D0  FC 00 00 1E */	fctiwz f0, f0
/* 800389D4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 800389D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800389DC  B0 03 00 22 */	sth r0, 0x22(r3)
/* 800389E0  C0 04 00 08 */	lfs f0, 8(r4)
/* 800389E4  EC 01 00 32 */	fmuls f0, f1, f0
/* 800389E8  FC 00 00 1E */	fctiwz f0, f0
/* 800389EC  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 800389F0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 800389F4  B0 03 00 24 */	sth r0, 0x24(r3)
/* 800389F8  A0 03 00 04 */	lhz r0, 4(r3)
/* 800389FC  60 00 00 08 */	ori r0, r0, 8
/* 80038A00  B0 03 00 04 */	sth r0, 4(r3)
/* 80038A04  38 21 00 20 */	addi r1, r1, 0x20
/* 80038A08  4E 80 00 20 */	blr 
