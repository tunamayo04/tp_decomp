lbl_8034739C:
/* 8034739C  E0 03 00 04 */	psq_l f0, 4(r3), 0, 0 /* qr0 */
/* 803473A0  E0 24 00 04 */	psq_l f1, 4(r4), 0, 0 /* qr0 */
/* 803473A4  10 40 08 28 */	ps_sub f2, f0, f1
/* 803473A8  E0 03 00 00 */	psq_l f0, 0(r3), 0, 0 /* qr0 */
/* 803473AC  E0 24 00 00 */	psq_l f1, 0(r4), 0, 0 /* qr0 */
/* 803473B0  10 42 00 B2 */	ps_mul f2, f2, f2
/* 803473B4  10 00 08 28 */	ps_sub f0, f0, f1
/* 803473B8  10 20 10 3A */	ps_madd f1, f0, f0, f2
/* 803473BC  10 21 10 94 */	ps_sum0 f1, f1, f2, f2
/* 803473C0  4E 80 00 20 */	blr 
