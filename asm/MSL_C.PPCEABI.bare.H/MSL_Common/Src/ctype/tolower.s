lbl_80365470:
/* 80365470  2C 03 FF FF */	cmpwi r3, -1
/* 80365474  40 82 00 0C */	bne lbl_80365480
/* 80365478  38 60 FF FF */	li r3, -1
/* 8036547C  4E 80 00 20 */	blr 
lbl_80365480:
/* 80365480  3C 80 80 3D */	lis r4, __lower_map@ha
/* 80365484  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80365488  38 64 2D 18 */	addi r3, r4, __lower_map@l
/* 8036548C  7C 63 00 AE */	lbzx r3, r3, r0
/* 80365490  4E 80 00 20 */	blr 
