lbl_80963320:
/* 80963320  38 80 00 00 */	li r4, 0
/* 80963324  B0 83 00 00 */	sth r4, 0(r3)
/* 80963328  38 00 00 01 */	li r0, 1
/* 8096332C  B0 03 00 02 */	sth r0, 2(r3)
/* 80963330  90 83 00 04 */	stw r4, 4(r3)
/* 80963334  4E 80 00 20 */	blr 
