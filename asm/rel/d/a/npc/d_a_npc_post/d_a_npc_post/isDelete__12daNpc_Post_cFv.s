lbl_80AA97E0:
/* 80AA97E0  88 03 0F 8C */	lbz r0, 0xf8c(r3)
/* 80AA97E4  2C 00 00 01 */	cmpwi r0, 1
/* 80AA97E8  41 82 00 28 */	beq lbl_80AA9810
/* 80AA97EC  40 80 00 10 */	bge lbl_80AA97FC
/* 80AA97F0  2C 00 00 00 */	cmpwi r0, 0
/* 80AA97F4  40 80 00 14 */	bge lbl_80AA9808
/* 80AA97F8  48 00 00 28 */	b lbl_80AA9820
lbl_80AA97FC:
/* 80AA97FC  2C 00 00 03 */	cmpwi r0, 3
/* 80AA9800  40 80 00 20 */	bge lbl_80AA9820
/* 80AA9804  48 00 00 14 */	b lbl_80AA9818
lbl_80AA9808:
/* 80AA9808  38 60 00 00 */	li r3, 0
/* 80AA980C  4E 80 00 20 */	blr 
lbl_80AA9810:
/* 80AA9810  38 60 00 00 */	li r3, 0
/* 80AA9814  4E 80 00 20 */	blr 
lbl_80AA9818:
/* 80AA9818  38 60 00 00 */	li r3, 0
/* 80AA981C  4E 80 00 20 */	blr 
lbl_80AA9820:
/* 80AA9820  38 60 00 00 */	li r3, 0
/* 80AA9824  4E 80 00 20 */	blr 
