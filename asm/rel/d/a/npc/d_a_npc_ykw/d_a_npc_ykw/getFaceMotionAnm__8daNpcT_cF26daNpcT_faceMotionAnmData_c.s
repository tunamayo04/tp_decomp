lbl_80B67860:
/* 80B67860  38 C3 FF FC */	addi r6, r3, -4
/* 80B67864  38 85 FF FC */	addi r4, r5, -4
/* 80B67868  38 00 00 03 */	li r0, 3
/* 80B6786C  7C 09 03 A6 */	mtctr r0
lbl_80B67870:
/* 80B67870  80 64 00 04 */	lwz r3, 4(r4)
/* 80B67874  84 04 00 08 */	lwzu r0, 8(r4)
/* 80B67878  90 66 00 04 */	stw r3, 4(r6)
/* 80B6787C  94 06 00 08 */	stwu r0, 8(r6)
/* 80B67880  42 00 FF F0 */	bdnz lbl_80B67870
/* 80B67884  80 04 00 04 */	lwz r0, 4(r4)
/* 80B67888  90 06 00 04 */	stw r0, 4(r6)
/* 80B6788C  4E 80 00 20 */	blr 
