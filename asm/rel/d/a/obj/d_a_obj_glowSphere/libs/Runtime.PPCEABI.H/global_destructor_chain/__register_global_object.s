lbl_80BF92D8:
/* 80BF92D8  3C C0 80 C0 */	lis r6, __global_destructor_chain@ha
/* 80BF92DC  84 06 AB A0 */	lwzu r0, __global_destructor_chain@l(r6)
/* 80BF92E0  90 05 00 00 */	stw r0, 0(r5)
/* 80BF92E4  90 85 00 04 */	stw r4, 4(r5)
/* 80BF92E8  90 65 00 08 */	stw r3, 8(r5)
/* 80BF92EC  90 A6 00 00 */	stw r5, 0(r6)
/* 80BF92F0  4E 80 00 20 */	blr 
