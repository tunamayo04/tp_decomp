lbl_80B750B8:
/* 80B750B8  3C C0 80 B8 */	lis r6, __global_destructor_chain@ha
/* 80B750BC  84 06 84 00 */	lwzu r0, __global_destructor_chain@l(r6)
/* 80B750C0  90 05 00 00 */	stw r0, 0(r5)
/* 80B750C4  90 85 00 04 */	stw r4, 4(r5)
/* 80B750C8  90 65 00 08 */	stw r3, 8(r5)
/* 80B750CC  90 A6 00 00 */	stw r5, 0(r6)
/* 80B750D0  4E 80 00 20 */	blr 
