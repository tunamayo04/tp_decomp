lbl_80B49410:
/* 80B49410  38 C3 FF FC */	addi r6, r3, -4
/* 80B49414  38 85 FF FC */	addi r4, r5, -4
/* 80B49418  38 00 00 03 */	li r0, 3
/* 80B4941C  7C 09 03 A6 */	mtctr r0
lbl_80B49420:
/* 80B49420  80 64 00 04 */	lwz r3, 4(r4)
/* 80B49424  84 04 00 08 */	lwzu r0, 8(r4)
/* 80B49428  90 66 00 04 */	stw r3, 4(r6)
/* 80B4942C  94 06 00 08 */	stwu r0, 8(r6)
/* 80B49430  42 00 FF F0 */	bdnz lbl_80B49420
/* 80B49434  80 04 00 04 */	lwz r0, 4(r4)
/* 80B49438  90 06 00 04 */	stw r0, 4(r6)
/* 80B4943C  4E 80 00 20 */	blr 
