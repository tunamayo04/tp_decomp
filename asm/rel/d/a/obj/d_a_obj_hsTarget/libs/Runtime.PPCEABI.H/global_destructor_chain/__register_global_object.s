lbl_80C1F3B8:
/* 80C1F3B8  3C C0 80 C2 */	lis r6, __global_destructor_chain@ha
/* 80C1F3BC  84 06 F9 58 */	lwzu r0, __global_destructor_chain@l(r6)
/* 80C1F3C0  90 05 00 00 */	stw r0, 0(r5)
/* 80C1F3C4  90 85 00 04 */	stw r4, 4(r5)
/* 80C1F3C8  90 65 00 08 */	stw r3, 8(r5)
/* 80C1F3CC  90 A6 00 00 */	stw r5, 0(r6)
/* 80C1F3D0  4E 80 00 20 */	blr 
