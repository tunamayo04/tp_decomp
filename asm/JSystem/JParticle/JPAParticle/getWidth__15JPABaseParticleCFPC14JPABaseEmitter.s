lbl_80280548:
/* 80280548  C0 22 B9 B0 */	lfs f1, lit_3010(r2)
/* 8028054C  C0 03 00 60 */	lfs f0, 0x60(r3)
/* 80280550  EC 21 00 32 */	fmuls f1, f1, f0
/* 80280554  80 64 00 E4 */	lwz r3, 0xe4(r4)
/* 80280558  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8028055C  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 80280560  EC 21 00 32 */	fmuls f1, f1, f0
/* 80280564  4E 80 00 20 */	blr 
