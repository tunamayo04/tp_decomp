lbl_80280568:
/* 80280568  C0 22 B9 B0 */	lfs f1, lit_3010(r2)
/* 8028056C  C0 03 00 64 */	lfs f0, 0x64(r3)
/* 80280570  EC 21 00 32 */	fmuls f1, f1, f0
/* 80280574  80 64 00 E4 */	lwz r3, 0xe4(r4)
/* 80280578  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8028057C  C0 03 01 48 */	lfs f0, 0x148(r3)
/* 80280580  EC 21 00 32 */	fmuls f1, f1, f0
/* 80280584  4E 80 00 20 */	blr 
