lbl_806D8018:
/* 806D8018  3C C0 80 6E */	lis r6, __global_destructor_chain@ha
/* 806D801C  84 06 F2 80 */	lwzu r0, __global_destructor_chain@l(r6)
/* 806D8020  90 05 00 00 */	stw r0, 0(r5)
/* 806D8024  90 85 00 04 */	stw r4, 4(r5)
/* 806D8028  90 65 00 08 */	stw r3, 8(r5)
/* 806D802C  90 A6 00 00 */	stw r5, 0(r6)
/* 806D8030  4E 80 00 20 */	blr 
