lbl_80B4DAF4:
/* 80B4DAF4  38 80 00 00 */	li r4, 0
/* 80B4DAF8  B0 83 00 00 */	sth r4, 0(r3)
/* 80B4DAFC  38 00 00 01 */	li r0, 1
/* 80B4DB00  B0 03 00 02 */	sth r0, 2(r3)
/* 80B4DB04  90 83 00 04 */	stw r4, 4(r3)
/* 80B4DB08  4E 80 00 20 */	blr 
