lbl_8054FE58:
/* 8054FE58  88 03 0F 80 */	lbz r0, 0xf80(r3)
/* 8054FE5C  2C 00 00 01 */	cmpwi r0, 1
/* 8054FE60  41 82 00 1C */	beq lbl_8054FE7C
/* 8054FE64  40 80 00 20 */	bge lbl_8054FE84
/* 8054FE68  2C 00 00 00 */	cmpwi r0, 0
/* 8054FE6C  40 80 00 08 */	bge lbl_8054FE74
/* 8054FE70  48 00 00 14 */	b lbl_8054FE84
lbl_8054FE74:
/* 8054FE74  38 60 00 00 */	li r3, 0
/* 8054FE78  4E 80 00 20 */	blr 
lbl_8054FE7C:
/* 8054FE7C  38 60 00 00 */	li r3, 0
/* 8054FE80  4E 80 00 20 */	blr 
lbl_8054FE84:
/* 8054FE84  38 60 00 00 */	li r3, 0
/* 8054FE88  4E 80 00 20 */	blr 
