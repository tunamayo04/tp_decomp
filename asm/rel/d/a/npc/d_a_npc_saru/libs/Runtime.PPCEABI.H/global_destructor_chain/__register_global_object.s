lbl_80AC03B8:
/* 80AC03B8  3C C0 80 AC */	lis r6, __global_destructor_chain@ha
/* 80AC03BC  84 06 4F E0 */	lwzu r0, __global_destructor_chain@l(r6)
/* 80AC03C0  90 05 00 00 */	stw r0, 0(r5)
/* 80AC03C4  90 85 00 04 */	stw r4, 4(r5)
/* 80AC03C8  90 65 00 08 */	stw r3, 8(r5)
/* 80AC03CC  90 A6 00 00 */	stw r5, 0(r6)
/* 80AC03D0  4E 80 00 20 */	blr 
