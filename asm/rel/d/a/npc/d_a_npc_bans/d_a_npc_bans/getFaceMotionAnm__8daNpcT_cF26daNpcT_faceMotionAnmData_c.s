lbl_80967968:
/* 80967968  38 C3 FF FC */	addi r6, r3, -4
/* 8096796C  38 85 FF FC */	addi r4, r5, -4
/* 80967970  38 00 00 03 */	li r0, 3
/* 80967974  7C 09 03 A6 */	mtctr r0
lbl_80967978:
/* 80967978  80 64 00 04 */	lwz r3, 4(r4)
/* 8096797C  84 04 00 08 */	lwzu r0, 8(r4)
/* 80967980  90 66 00 04 */	stw r3, 4(r6)
/* 80967984  94 06 00 08 */	stwu r0, 8(r6)
/* 80967988  42 00 FF F0 */	bdnz lbl_80967978
/* 8096798C  80 04 00 04 */	lwz r0, 4(r4)
/* 80967990  90 06 00 04 */	stw r0, 4(r6)
/* 80967994  4E 80 00 20 */	blr 
