lbl_80B51FC4:
/* 80B51FC4  38 C3 FF FC */	addi r6, r3, -4
/* 80B51FC8  38 85 FF FC */	addi r4, r5, -4
/* 80B51FCC  38 00 00 03 */	li r0, 3
/* 80B51FD0  7C 09 03 A6 */	mtctr r0
lbl_80B51FD4:
/* 80B51FD4  80 64 00 04 */	lwz r3, 4(r4)
/* 80B51FD8  84 04 00 08 */	lwzu r0, 8(r4)
/* 80B51FDC  90 66 00 04 */	stw r3, 4(r6)
/* 80B51FE0  94 06 00 08 */	stwu r0, 8(r6)
/* 80B51FE4  42 00 FF F0 */	bdnz lbl_80B51FD4
/* 80B51FE8  80 04 00 04 */	lwz r0, 4(r4)
/* 80B51FEC  90 06 00 04 */	stw r0, 4(r6)
/* 80B51FF0  4E 80 00 20 */	blr 
