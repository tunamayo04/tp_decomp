lbl_803470F4:
/* 803470F4  C0 02 CB 44 */	lfs f0, lit_118(r2)
/* 803470F8  C0 22 CB 48 */	lfs f1, lit_119(r2)
/* 803470FC  E0 43 00 00 */	psq_l f2, 0(r3), 0, 0 /* qr0 */
/* 80347100  10 A2 00 B2 */	ps_mul f5, f2, f2
/* 80347104  E0 63 80 08 */	psq_l f3, 8(r3), 1, 0 /* qr0 */
/* 80347108  10 83 28 FA */	ps_madd f4, f3, f3, f5
/* 8034710C  10 84 28 D4 */	ps_sum0 f4, f4, f3, f5
/* 80347110  FC A0 20 34 */	frsqrte f5, f4
/* 80347114  EC C5 01 72 */	fmuls f6, f5, f5
/* 80347118  EC 05 00 32 */	fmuls f0, f5, f0
/* 8034711C  EC C6 09 3C */	fnmsubs f6, f6, f4, f1
/* 80347120  EC A6 00 32 */	fmuls f5, f6, f0
/* 80347124  10 42 01 58 */	ps_muls0 f2, f2, f5
/* 80347128  F0 44 00 00 */	psq_st f2, 0(r4), 0, 0 /* qr0 */
/* 8034712C  10 63 01 58 */	ps_muls0 f3, f3, f5
/* 80347130  F0 64 80 08 */	psq_st f3, 8(r4), 1, 0 /* qr0 */
/* 80347134  4E 80 00 20 */	blr 
