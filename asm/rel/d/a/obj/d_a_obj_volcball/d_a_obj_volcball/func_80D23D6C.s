lbl_80D23D6C:
/* 80D23D6C  88 83 00 00 */	lbz r4, 0(r3)
/* 80D23D70  28 04 00 00 */	cmplwi r4, 0
/* 80D23D74  41 82 00 0C */	beq lbl_80D23D80
/* 80D23D78  38 04 FF FF */	addi r0, r4, -1
/* 80D23D7C  98 03 00 00 */	stb r0, 0(r3)
lbl_80D23D80:
/* 80D23D80  88 63 00 00 */	lbz r3, 0(r3)
/* 80D23D84  4E 80 00 20 */	blr 
