lbl_8048734C:
/* 8048734C  88 83 00 00 */	lbz r4, 0(r3)
/* 80487350  28 04 00 00 */	cmplwi r4, 0
/* 80487354  41 82 00 0C */	beq lbl_80487360
/* 80487358  38 04 FF FF */	addi r0, r4, -1
/* 8048735C  98 03 00 00 */	stb r0, 0(r3)
lbl_80487360:
/* 80487360  88 63 00 00 */	lbz r3, 0(r3)
/* 80487364  4E 80 00 20 */	blr 
