lbl_80848D38:
/* 80848D38  88 83 00 00 */	lbz r4, 0(r3)
/* 80848D3C  28 04 00 00 */	cmplwi r4, 0
/* 80848D40  41 82 00 0C */	beq lbl_80848D4C
/* 80848D44  38 04 FF FF */	addi r0, r4, -1
/* 80848D48  98 03 00 00 */	stb r0, 0(r3)
lbl_80848D4C:
/* 80848D4C  88 63 00 00 */	lbz r3, 0(r3)
/* 80848D50  4E 80 00 20 */	blr 
