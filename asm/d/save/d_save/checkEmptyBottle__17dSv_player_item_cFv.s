lbl_800337EC:
/* 800337EC  38 80 00 00 */	li r4, 0
/* 800337F0  38 A0 00 00 */	li r5, 0
/* 800337F4  38 00 00 04 */	li r0, 4
/* 800337F8  7C 09 03 A6 */	mtctr r0
lbl_800337FC:
/* 800337FC  38 05 00 0B */	addi r0, r5, 0xb
/* 80033800  7C 03 00 AE */	lbzx r0, r3, r0
/* 80033804  28 00 00 60 */	cmplwi r0, 0x60
/* 80033808  40 82 00 10 */	bne lbl_80033818
/* 8003380C  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80033810  38 04 00 01 */	addi r0, r4, 1
/* 80033814  54 04 06 3E */	clrlwi r4, r0, 0x18
lbl_80033818:
/* 80033818  38 A5 00 01 */	addi r5, r5, 1
/* 8003381C  42 00 FF E0 */	bdnz lbl_800337FC
/* 80033820  7C 83 23 78 */	mr r3, r4
/* 80033824  4E 80 00 20 */	blr 
