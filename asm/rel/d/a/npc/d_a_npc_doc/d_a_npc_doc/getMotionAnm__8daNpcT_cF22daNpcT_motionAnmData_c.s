lbl_809AA0E4:
/* 809AA0E4  38 C3 FF FC */	addi r6, r3, -4
/* 809AA0E8  38 85 FF FC */	addi r4, r5, -4
/* 809AA0EC  38 00 00 03 */	li r0, 3
/* 809AA0F0  7C 09 03 A6 */	mtctr r0
lbl_809AA0F4:
/* 809AA0F4  80 64 00 04 */	lwz r3, 4(r4)
/* 809AA0F8  84 04 00 08 */	lwzu r0, 8(r4)
/* 809AA0FC  90 66 00 04 */	stw r3, 4(r6)
/* 809AA100  94 06 00 08 */	stwu r0, 8(r6)
/* 809AA104  42 00 FF F0 */	bdnz lbl_809AA0F4
/* 809AA108  80 04 00 04 */	lwz r0, 4(r4)
/* 809AA10C  90 06 00 04 */	stw r0, 4(r6)
/* 809AA110  4E 80 00 20 */	blr 
