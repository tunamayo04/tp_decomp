lbl_80B51F94:
/* 80B51F94  38 C3 FF FC */	addi r6, r3, -4
/* 80B51F98  38 85 FF FC */	addi r4, r5, -4
/* 80B51F9C  38 00 00 03 */	li r0, 3
/* 80B51FA0  7C 09 03 A6 */	mtctr r0
lbl_80B51FA4:
/* 80B51FA4  80 64 00 04 */	lwz r3, 4(r4)
/* 80B51FA8  84 04 00 08 */	lwzu r0, 8(r4)
/* 80B51FAC  90 66 00 04 */	stw r3, 4(r6)
/* 80B51FB0  94 06 00 08 */	stwu r0, 8(r6)
/* 80B51FB4  42 00 FF F0 */	bdnz lbl_80B51FA4
/* 80B51FB8  80 04 00 04 */	lwz r0, 4(r4)
/* 80B51FBC  90 06 00 04 */	stw r0, 4(r6)
/* 80B51FC0  4E 80 00 20 */	blr 
