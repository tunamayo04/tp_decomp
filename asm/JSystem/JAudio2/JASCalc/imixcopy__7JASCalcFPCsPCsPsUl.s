lbl_8028F2E8:
/* 8028F2E8  7C C9 03 A6 */	mtctr r6
/* 8028F2EC  28 06 00 00 */	cmplwi r6, 0
/* 8028F2F0  4D 82 00 20 */	beqlr 
lbl_8028F2F4:
/* 8028F2F4  A8 03 00 00 */	lha r0, 0(r3)
/* 8028F2F8  B0 05 00 00 */	sth r0, 0(r5)
/* 8028F2FC  A8 04 00 00 */	lha r0, 0(r4)
/* 8028F300  B0 05 00 02 */	sth r0, 2(r5)
/* 8028F304  38 A5 00 04 */	addi r5, r5, 4
/* 8028F308  38 63 00 02 */	addi r3, r3, 2
/* 8028F30C  38 84 00 02 */	addi r4, r4, 2
/* 8028F310  42 00 FF E4 */	bdnz lbl_8028F2F4
/* 8028F314  4E 80 00 20 */	blr 
