lbl_80255828:
/* 80255828  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8025582C  C0 22 B4 D0 */	lfs f1, lit_3721(r2)
/* 80255830  88 83 00 18 */	lbz r4, 0x18(r3)
/* 80255834  28 04 00 00 */	cmplwi r4, 0
/* 80255838  41 82 00 38 */	beq lbl_80255870
/* 8025583C  80 63 00 04 */	lwz r3, 4(r3)
/* 80255840  88 03 00 B2 */	lbz r0, 0xb2(r3)
/* 80255844  C8 42 B4 C8 */	lfd f2, lit_3708(r2)
/* 80255848  90 01 00 0C */	stw r0, 0xc(r1)
/* 8025584C  3C 00 43 30 */	lis r0, 0x4330
/* 80255850  90 01 00 08 */	stw r0, 8(r1)
/* 80255854  C8 01 00 08 */	lfd f0, 8(r1)
/* 80255858  EC 20 10 28 */	fsubs f1, f0, f2
/* 8025585C  90 81 00 14 */	stw r4, 0x14(r1)
/* 80255860  90 01 00 10 */	stw r0, 0x10(r1)
/* 80255864  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80255868  EC 00 10 28 */	fsubs f0, f0, f2
/* 8025586C  EC 21 00 24 */	fdivs f1, f1, f0
lbl_80255870:
/* 80255870  38 21 00 20 */	addi r1, r1, 0x20
/* 80255874  4E 80 00 20 */	blr 
