lbl_80271064:
/* 80271064  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80271068  C0 42 B8 18 */	lfs f2, lit_2269(r2)
/* 8027106C  A8 03 00 00 */	lha r0, 0(r3)
/* 80271070  C8 22 B8 10 */	lfd f1, lit_2263(r2)
/* 80271074  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80271078  90 01 00 0C */	stw r0, 0xc(r1)
/* 8027107C  3C 00 43 30 */	lis r0, 0x4330
/* 80271080  90 01 00 08 */	stw r0, 8(r1)
/* 80271084  C8 01 00 08 */	lfd f0, 8(r1)
/* 80271088  EC 00 08 28 */	fsubs f0, f0, f1
/* 8027108C  EC 22 00 32 */	fmuls f1, f2, f0
/* 80271090  38 21 00 10 */	addi r1, r1, 0x10
/* 80271094  4E 80 00 20 */	blr 
