lbl_80ACC0E4:
/* 80ACC0E4  38 80 00 00 */	li r4, 0
/* 80ACC0E8  B0 83 00 00 */	sth r4, 0(r3)
/* 80ACC0EC  38 00 00 01 */	li r0, 1
/* 80ACC0F0  B0 03 00 02 */	sth r0, 2(r3)
/* 80ACC0F4  90 83 00 04 */	stw r4, 4(r3)
/* 80ACC0F8  4E 80 00 20 */	blr 
