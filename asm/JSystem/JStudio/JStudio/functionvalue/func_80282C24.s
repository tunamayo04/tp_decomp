lbl_80282C24:
/* 80282C24  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80282C28  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80282C2C  54 00 10 3A */	slwi r0, r0, 2
/* 80282C30  7C 63 04 2E */	lfsx f3, r3, r0
/* 80282C34  7C 63 02 14 */	add r3, r3, r0
/* 80282C38  C0 03 00 04 */	lfs f0, 4(r3)
/* 80282C3C  FC 40 18 28 */	fsub f2, f0, f3
/* 80282C40  C8 24 00 00 */	lfd f1, 0(r4)
/* 80282C44  C8 04 00 08 */	lfd f0, 8(r4)
/* 80282C48  FC 01 00 28 */	fsub f0, f1, f0
/* 80282C4C  FC 02 00 32 */	fmul f0, f2, f0
/* 80282C50  FC 23 00 2A */	fadd f1, f3, f0
/* 80282C54  4E 80 00 20 */	blr 
