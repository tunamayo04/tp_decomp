lbl_8065722C:
/* 8065722C  38 80 00 00 */	li r4, 0
/* 80657230  38 A0 00 FF */	li r5, 0xff
/* 80657234  38 00 00 14 */	li r0, 0x14
/* 80657238  7C 09 03 A6 */	mtctr r0
lbl_8065723C:
/* 8065723C  38 04 05 A5 */	addi r0, r4, 0x5a5
/* 80657240  7C A3 01 AE */	stbx r5, r3, r0
/* 80657244  38 84 00 18 */	addi r4, r4, 0x18
/* 80657248  42 00 FF F4 */	bdnz lbl_8065723C
/* 8065724C  3C 80 80 65 */	lis r4, l_HOSTIO@ha
/* 80657250  38 84 7A 9C */	addi r4, r4, l_HOSTIO@l
/* 80657254  88 04 00 59 */	lbz r0, 0x59(r4)
/* 80657258  98 03 07 81 */	stb r0, 0x781(r3)
/* 8065725C  4E 80 00 20 */	blr 
