lbl_8024B108:
/* 8024B108  7C A3 2B 78 */	mr r3, r5
/* 8024B10C  38 00 00 04 */	li r0, 4
/* 8024B110  7C 09 03 A6 */	mtctr r0
lbl_8024B114:
/* 8024B114  88 03 00 00 */	lbz r0, 0(r3)
/* 8024B118  98 04 00 00 */	stb r0, 0(r4)
/* 8024B11C  38 84 00 01 */	addi r4, r4, 1
/* 8024B120  38 63 00 01 */	addi r3, r3, 1
/* 8024B124  42 00 FF F0 */	bdnz lbl_8024B114
/* 8024B128  80 65 00 00 */	lwz r3, 0(r5)
/* 8024B12C  4E 80 00 20 */	blr 
