lbl_80A74878:
/* 80A74878  38 80 00 00 */	li r4, 0
/* 80A7487C  B0 83 00 00 */	sth r4, 0(r3)
/* 80A74880  38 00 00 01 */	li r0, 1
/* 80A74884  B0 03 00 02 */	sth r0, 2(r3)
/* 80A74888  90 83 00 04 */	stw r4, 4(r3)
/* 80A7488C  4E 80 00 20 */	blr 
