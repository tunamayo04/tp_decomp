lbl_80228448:
/* 80228448  28 04 00 00 */	cmplwi r4, 0
/* 8022844C  4D 82 00 20 */	beqlr 
/* 80228450  38 A0 00 00 */	li r5, 0
/* 80228454  7C A8 2B 78 */	mr r8, r5
/* 80228458  38 E0 00 47 */	li r7, 0x47
/* 8022845C  38 00 00 23 */	li r0, 0x23
/* 80228460  7C 09 03 A6 */	mtctr r0
lbl_80228464:
/* 80228464  39 25 00 04 */	addi r9, r5, 4
/* 80228468  7C C3 48 2E */	lwzx r6, r3, r9
/* 8022846C  80 06 00 04 */	lwz r0, 4(r6)
/* 80228470  7C 04 00 40 */	cmplw r4, r0
/* 80228474  40 82 00 10 */	bne lbl_80228484
/* 80228478  91 06 00 04 */	stw r8, 4(r6)
/* 8022847C  7C C3 48 2E */	lwzx r6, r3, r9
/* 80228480  98 E6 00 1D */	stb r7, 0x1d(r6)
lbl_80228484:
/* 80228484  38 A5 00 04 */	addi r5, r5, 4
/* 80228488  42 00 FF DC */	bdnz lbl_80228464
/* 8022848C  4E 80 00 20 */	blr 
