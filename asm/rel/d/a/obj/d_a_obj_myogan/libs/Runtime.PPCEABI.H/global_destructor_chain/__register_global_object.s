lbl_80C9EB38:
/* 80C9EB38  3C C0 80 CA */	lis r6, __global_destructor_chain@ha
/* 80C9EB3C  84 06 F3 10 */	lwzu r0, __global_destructor_chain@l(r6)
/* 80C9EB40  90 05 00 00 */	stw r0, 0(r5)
/* 80C9EB44  90 85 00 04 */	stw r4, 4(r5)
/* 80C9EB48  90 65 00 08 */	stw r3, 8(r5)
/* 80C9EB4C  90 A6 00 00 */	stw r5, 0(r6)
/* 80C9EB50  4E 80 00 20 */	blr 
