lbl_80590C70:
/* 80590C70  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80590C74  3C 80 80 59 */	lis r4, l_stop_timer@ha
/* 80590C78  88 04 28 7C */	lbz r0, l_stop_timer@l(r4)
/* 80590C7C  98 03 0A 17 */	stb r0, 0xa17(r3)
/* 80590C80  88 03 0A 1D */	lbz r0, 0xa1d(r3)
/* 80590C84  28 00 00 00 */	cmplwi r0, 0
/* 80590C88  41 82 00 40 */	beq lbl_80590CC8
/* 80590C8C  88 03 0A 17 */	lbz r0, 0xa17(r3)
/* 80590C90  3C 80 80 59 */	lis r4, lit_4266@ha
/* 80590C94  C8 24 29 28 */	lfd f1, lit_4266@l(r4)
/* 80590C98  90 01 00 0C */	stw r0, 0xc(r1)
/* 80590C9C  3C 00 43 30 */	lis r0, 0x4330
/* 80590CA0  90 01 00 08 */	stw r0, 8(r1)
/* 80590CA4  C8 01 00 08 */	lfd f0, 8(r1)
/* 80590CA8  EC 20 08 28 */	fsubs f1, f0, f1
/* 80590CAC  3C 80 80 59 */	lis r4, lit_4264@ha
/* 80590CB0  C0 04 29 20 */	lfs f0, lit_4264@l(r4)
/* 80590CB4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80590CB8  FC 00 00 1E */	fctiwz f0, f0
/* 80590CBC  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80590CC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80590CC4  98 03 0A 17 */	stb r0, 0xa17(r3)
lbl_80590CC8:
/* 80590CC8  38 00 00 00 */	li r0, 0
/* 80590CCC  B0 03 0A 0A */	sth r0, 0xa0a(r3)
/* 80590CD0  90 03 0A 10 */	stw r0, 0xa10(r3)
/* 80590CD4  38 00 00 04 */	li r0, 4
/* 80590CD8  98 03 0A 14 */	stb r0, 0xa14(r3)
/* 80590CDC  38 21 00 20 */	addi r1, r1, 0x20
/* 80590CE0  4E 80 00 20 */	blr 
