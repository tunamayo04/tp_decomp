lbl_809E1548:
/* 809E1548  7C 86 07 34 */	extsh r6, r4
/* 809E154C  2C 05 00 00 */	cmpwi r5, 0
/* 809E1550  40 82 00 10 */	bne lbl_809E1560
/* 809E1554  A8 03 09 E0 */	lha r0, 0x9e0(r3)
/* 809E1558  7C 00 30 00 */	cmpw r0, r6
/* 809E155C  4D 82 00 20 */	beqlr 
lbl_809E1560:
/* 809E1560  2C 04 00 00 */	cmpwi r4, 0
/* 809E1564  4D 80 00 20 */	bltlr 
/* 809E1568  2C 04 00 0B */	cmpwi r4, 0xb
/* 809E156C  4C 80 00 20 */	bgelr 
/* 809E1570  B0 C3 09 E0 */	sth r6, 0x9e0(r3)
/* 809E1574  D0 23 09 7C */	stfs f1, 0x97c(r3)
/* 809E1578  38 00 FF FF */	li r0, -1
/* 809E157C  B0 03 09 DC */	sth r0, 0x9dc(r3)
/* 809E1580  38 00 00 00 */	li r0, 0
/* 809E1584  B0 03 09 DA */	sth r0, 0x9da(r3)
/* 809E1588  4E 80 00 20 */	blr 
