lbl_8054FBA4:
/* 8054FBA4  38 80 00 00 */	li r4, 0
/* 8054FBA8  B0 83 00 00 */	sth r4, 0(r3)
/* 8054FBAC  38 00 00 01 */	li r0, 1
/* 8054FBB0  B0 03 00 02 */	sth r0, 2(r3)
/* 8054FBB4  90 83 00 04 */	stw r4, 4(r3)
/* 8054FBB8  4E 80 00 20 */	blr 
