lbl_80C8BC98:
/* 80C8BC98  3C C0 80 C9 */	lis r6, __global_destructor_chain@ha
/* 80C8BC9C  84 06 CD 78 */	lwzu r0, __global_destructor_chain@l(r6)
/* 80C8BCA0  90 05 00 00 */	stw r0, 0(r5)
/* 80C8BCA4  90 85 00 04 */	stw r4, 4(r5)
/* 80C8BCA8  90 65 00 08 */	stw r3, 8(r5)
/* 80C8BCAC  90 A6 00 00 */	stw r5, 0(r6)
/* 80C8BCB0  4E 80 00 20 */	blr 
