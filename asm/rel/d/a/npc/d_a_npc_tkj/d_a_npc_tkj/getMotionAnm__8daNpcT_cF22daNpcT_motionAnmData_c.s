lbl_805762E8:
/* 805762E8  38 C3 FF FC */	addi r6, r3, -4
/* 805762EC  38 85 FF FC */	addi r4, r5, -4
/* 805762F0  38 00 00 03 */	li r0, 3
/* 805762F4  7C 09 03 A6 */	mtctr r0
lbl_805762F8:
/* 805762F8  80 64 00 04 */	lwz r3, 4(r4)
/* 805762FC  84 04 00 08 */	lwzu r0, 8(r4)
/* 80576300  90 66 00 04 */	stw r3, 4(r6)
/* 80576304  94 06 00 08 */	stwu r0, 8(r6)
/* 80576308  42 00 FF F0 */	bdnz lbl_805762F8
/* 8057630C  80 04 00 04 */	lwz r0, 4(r4)
/* 80576310  90 06 00 04 */	stw r0, 4(r6)
/* 80576314  4E 80 00 20 */	blr 
