lbl_80292220:
/* 80292220  38 A0 00 00 */	li r5, 0
/* 80292224  54 84 10 3A */	slwi r4, r4, 2
/* 80292228  80 03 01 D0 */	lwz r0, 0x1d0(r3)
/* 8029222C  7C 09 03 A6 */	mtctr r0
/* 80292230  28 00 00 00 */	cmplwi r0, 0
/* 80292234  40 81 00 30 */	ble lbl_80292264
lbl_80292238:
/* 80292238  38 05 01 70 */	addi r0, r5, 0x170
/* 8029223C  7C 03 00 2E */	lwzx r0, r3, r0
/* 80292240  28 00 00 00 */	cmplwi r0, 0
/* 80292244  41 82 00 18 */	beq lbl_8029225C
/* 80292248  7C 04 00 2E */	lwzx r0, r4, r0
/* 8029224C  28 00 00 00 */	cmplwi r0, 0
/* 80292250  41 82 00 0C */	beq lbl_8029225C
/* 80292254  38 60 00 00 */	li r3, 0
/* 80292258  4E 80 00 20 */	blr 
lbl_8029225C:
/* 8029225C  38 A5 00 04 */	addi r5, r5, 4
/* 80292260  42 00 FF D8 */	bdnz lbl_80292238
lbl_80292264:
/* 80292264  38 60 00 01 */	li r3, 1
/* 80292268  4E 80 00 20 */	blr 
