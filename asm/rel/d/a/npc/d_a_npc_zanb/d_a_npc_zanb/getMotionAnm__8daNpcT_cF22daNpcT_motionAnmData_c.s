lbl_80B6BA34:
/* 80B6BA34  38 C3 FF FC */	addi r6, r3, -4
/* 80B6BA38  38 85 FF FC */	addi r4, r5, -4
/* 80B6BA3C  38 00 00 03 */	li r0, 3
/* 80B6BA40  7C 09 03 A6 */	mtctr r0
lbl_80B6BA44:
/* 80B6BA44  80 64 00 04 */	lwz r3, 4(r4)
/* 80B6BA48  84 04 00 08 */	lwzu r0, 8(r4)
/* 80B6BA4C  90 66 00 04 */	stw r3, 4(r6)
/* 80B6BA50  94 06 00 08 */	stwu r0, 8(r6)
/* 80B6BA54  42 00 FF F0 */	bdnz lbl_80B6BA44
/* 80B6BA58  80 04 00 04 */	lwz r0, 4(r4)
/* 80B6BA5C  90 06 00 04 */	stw r0, 4(r6)
/* 80B6BA60  4E 80 00 20 */	blr 
