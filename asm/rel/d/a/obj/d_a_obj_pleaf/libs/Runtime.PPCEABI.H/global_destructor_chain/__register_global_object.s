lbl_80CB0CD8:
/* 80CB0CD8  3C C0 80 CB */	lis r6, __global_destructor_chain@ha
/* 80CB0CDC  84 06 19 68 */	lwzu r0, __global_destructor_chain@l(r6)
/* 80CB0CE0  90 05 00 00 */	stw r0, 0(r5)
/* 80CB0CE4  90 85 00 04 */	stw r4, 4(r5)
/* 80CB0CE8  90 65 00 08 */	stw r3, 8(r5)
/* 80CB0CEC  90 A6 00 00 */	stw r5, 0(r6)
/* 80CB0CF0  4E 80 00 20 */	blr 
