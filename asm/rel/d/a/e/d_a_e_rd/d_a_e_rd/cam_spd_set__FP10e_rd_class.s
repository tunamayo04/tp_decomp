lbl_80512FFC:
/* 80512FFC  C0 23 12 C0 */	lfs f1, 0x12c0(r3)
/* 80513000  C0 03 12 A8 */	lfs f0, 0x12a8(r3)
/* 80513004  EC 01 00 28 */	fsubs f0, f1, f0
/* 80513008  FC 00 02 10 */	fabs f0, f0
/* 8051300C  FC 00 00 18 */	frsp f0, f0
/* 80513010  D0 03 12 D8 */	stfs f0, 0x12d8(r3)
/* 80513014  C0 23 12 C4 */	lfs f1, 0x12c4(r3)
/* 80513018  C0 03 12 AC */	lfs f0, 0x12ac(r3)
/* 8051301C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80513020  FC 00 02 10 */	fabs f0, f0
/* 80513024  FC 00 00 18 */	frsp f0, f0
/* 80513028  D0 03 12 DC */	stfs f0, 0x12dc(r3)
/* 8051302C  C0 23 12 C8 */	lfs f1, 0x12c8(r3)
/* 80513030  C0 03 12 B0 */	lfs f0, 0x12b0(r3)
/* 80513034  EC 01 00 28 */	fsubs f0, f1, f0
/* 80513038  FC 00 02 10 */	fabs f0, f0
/* 8051303C  FC 00 00 18 */	frsp f0, f0
/* 80513040  D0 03 12 E0 */	stfs f0, 0x12e0(r3)
/* 80513044  C0 23 12 CC */	lfs f1, 0x12cc(r3)
/* 80513048  C0 03 12 B4 */	lfs f0, 0x12b4(r3)
/* 8051304C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80513050  FC 00 02 10 */	fabs f0, f0
/* 80513054  FC 00 00 18 */	frsp f0, f0
/* 80513058  D0 03 12 E4 */	stfs f0, 0x12e4(r3)
/* 8051305C  C0 23 12 D0 */	lfs f1, 0x12d0(r3)
/* 80513060  C0 03 12 B8 */	lfs f0, 0x12b8(r3)
/* 80513064  EC 01 00 28 */	fsubs f0, f1, f0
/* 80513068  FC 00 02 10 */	fabs f0, f0
/* 8051306C  FC 00 00 18 */	frsp f0, f0
/* 80513070  D0 03 12 E8 */	stfs f0, 0x12e8(r3)
/* 80513074  C0 23 12 D4 */	lfs f1, 0x12d4(r3)
/* 80513078  C0 03 12 BC */	lfs f0, 0x12bc(r3)
/* 8051307C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80513080  FC 00 02 10 */	fabs f0, f0
/* 80513084  FC 00 00 18 */	frsp f0, f0
/* 80513088  D0 03 12 EC */	stfs f0, 0x12ec(r3)
/* 8051308C  3C 80 80 52 */	lis r4, lit_4209@ha
/* 80513090  C0 04 85 88 */	lfs f0, lit_4209@l(r4)
/* 80513094  D0 03 13 0C */	stfs f0, 0x130c(r3)
/* 80513098  4E 80 00 20 */	blr 
