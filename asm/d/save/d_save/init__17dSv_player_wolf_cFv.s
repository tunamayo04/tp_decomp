lbl_800342B4:
/* 800342B4  38 A0 00 00 */	li r5, 0
/* 800342B8  7C 64 1B 78 */	mr r4, r3
/* 800342BC  38 00 00 03 */	li r0, 3
/* 800342C0  7C 09 03 A6 */	mtctr r0
lbl_800342C4:
/* 800342C4  98 A4 00 00 */	stb r5, 0(r4)
/* 800342C8  38 84 00 01 */	addi r4, r4, 1
/* 800342CC  42 00 FF F8 */	bdnz lbl_800342C4
/* 800342D0  38 00 00 00 */	li r0, 0
/* 800342D4  98 03 00 03 */	stb r0, 3(r3)
/* 800342D8  4E 80 00 20 */	blr 
