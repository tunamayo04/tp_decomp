lbl_80043E58:
/* 80043E58  38 80 00 00 */	li r4, 0
/* 80043E5C  7C 85 23 78 */	mr r5, r4
/* 80043E60  38 00 01 40 */	li r0, 0x140
/* 80043E64  7C 09 03 A6 */	mtctr r0
lbl_80043E68:
/* 80043E68  7C A3 21 2E */	stwx r5, r3, r4
/* 80043E6C  38 84 00 04 */	addi r4, r4, 4
/* 80043E70  42 00 FF F8 */	bdnz lbl_80043E68
/* 80043E74  4E 80 00 20 */	blr 
