lbl_80332FE0:
/* 80332FE0  80 C3 00 04 */	lwz r6, 4(r3)
/* 80332FE4  80 A3 00 08 */	lwz r5, 8(r3)
/* 80332FE8  54 80 08 3C */	slwi r0, r4, 1
/* 80332FEC  7C 05 02 2E */	lhzx r0, r5, r0
/* 80332FF0  1C 00 01 38 */	mulli r0, r0, 0x138
/* 80332FF4  7C 86 02 14 */	add r4, r6, r0
/* 80332FF8  38 A0 00 00 */	li r5, 0
/* 80332FFC  38 C0 00 00 */	li r6, 0
/* 80333000  88 04 00 04 */	lbz r0, 4(r4)
/* 80333004  28 00 00 FF */	cmplwi r0, 0xff
/* 80333008  41 82 00 0C */	beq lbl_80333014
/* 8033300C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80333010  7C C3 00 AE */	lbzx r6, r3, r0
lbl_80333014:
/* 80333014  38 60 00 00 */	li r3, 0
/* 80333018  38 00 00 08 */	li r0, 8
/* 8033301C  7C 09 03 A6 */	mtctr r0
lbl_80333020:
/* 80333020  38 03 00 70 */	addi r0, r3, 0x70
/* 80333024  7C 04 02 2E */	lhzx r0, r4, r0
/* 80333028  28 00 FF FF */	cmplwi r0, 0xffff
/* 8033302C  41 82 00 08 */	beq lbl_80333034
/* 80333030  38 A5 00 01 */	addi r5, r5, 1
lbl_80333034:
/* 80333034  38 63 00 02 */	addi r3, r3, 2
/* 80333038  42 00 FF E8 */	bdnz lbl_80333020
/* 8033303C  7C 06 28 40 */	cmplw r6, r5
/* 80333040  41 82 00 20 */	beq lbl_80333060
/* 80333044  28 05 00 00 */	cmplwi r5, 0
/* 80333048  41 82 00 18 */	beq lbl_80333060
/* 8033304C  7C 06 28 40 */	cmplw r6, r5
/* 80333050  7C A3 2B 78 */	mr r3, r5
/* 80333054  4C 81 00 20 */	blelr 
/* 80333058  7C C3 33 78 */	mr r3, r6
/* 8033305C  4E 80 00 20 */	blr 
lbl_80333060:
/* 80333060  7C C3 33 78 */	mr r3, r6
/* 80333064  4E 80 00 20 */	blr 
