lbl_8096A308:
/* 8096A308  7C 86 07 34 */	extsh r6, r4
/* 8096A30C  2C 05 00 00 */	cmpwi r5, 0
/* 8096A310  40 82 00 10 */	bne lbl_8096A320
/* 8096A314  A8 03 09 E0 */	lha r0, 0x9e0(r3)
/* 8096A318  7C 00 30 00 */	cmpw r0, r6
/* 8096A31C  4D 82 00 20 */	beqlr 
lbl_8096A320:
/* 8096A320  2C 04 00 00 */	cmpwi r4, 0
/* 8096A324  4D 80 00 20 */	bltlr 
/* 8096A328  2C 04 00 09 */	cmpwi r4, 9
/* 8096A32C  4C 80 00 20 */	bgelr 
/* 8096A330  B0 C3 09 E0 */	sth r6, 0x9e0(r3)
/* 8096A334  D0 23 09 7C */	stfs f1, 0x97c(r3)
/* 8096A338  38 00 FF FF */	li r0, -1
/* 8096A33C  B0 03 09 DC */	sth r0, 0x9dc(r3)
/* 8096A340  38 00 00 00 */	li r0, 0
/* 8096A344  B0 03 09 DA */	sth r0, 0x9da(r3)
/* 8096A348  B0 03 0D EA */	sth r0, 0xdea(r3)
/* 8096A34C  4E 80 00 20 */	blr 
