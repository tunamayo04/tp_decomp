lbl_80541B3C:
/* 80541B3C  38 C3 FF FC */	addi r6, r3, -4
/* 80541B40  38 85 FF FC */	addi r4, r5, -4
/* 80541B44  38 00 00 03 */	li r0, 3
/* 80541B48  7C 09 03 A6 */	mtctr r0
lbl_80541B4C:
/* 80541B4C  80 64 00 04 */	lwz r3, 4(r4)
/* 80541B50  84 04 00 08 */	lwzu r0, 8(r4)
/* 80541B54  90 66 00 04 */	stw r3, 4(r6)
/* 80541B58  94 06 00 08 */	stwu r0, 8(r6)
/* 80541B5C  42 00 FF F0 */	bdnz lbl_80541B4C
/* 80541B60  80 04 00 04 */	lwz r0, 4(r4)
/* 80541B64  90 06 00 04 */	stw r0, 4(r6)
/* 80541B68  4E 80 00 20 */	blr 
