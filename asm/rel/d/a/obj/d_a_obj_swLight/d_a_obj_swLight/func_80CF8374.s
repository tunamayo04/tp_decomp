lbl_80CF8374:
/* 80CF8374  88 83 00 00 */	lbz r4, 0(r3)
/* 80CF8378  28 04 00 00 */	cmplwi r4, 0
/* 80CF837C  41 82 00 0C */	beq lbl_80CF8388
/* 80CF8380  38 04 FF FF */	addi r0, r4, -1
/* 80CF8384  98 03 00 00 */	stb r0, 0(r3)
lbl_80CF8388:
/* 80CF8388  88 63 00 00 */	lbz r3, 0(r3)
/* 80CF838C  4E 80 00 20 */	blr 
