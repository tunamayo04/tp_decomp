lbl_80A22A54:
/* 80A22A54  7C 86 07 34 */	extsh r6, r4
/* 80A22A58  2C 05 00 00 */	cmpwi r5, 0
/* 80A22A5C  40 82 00 10 */	bne lbl_80A22A6C
/* 80A22A60  A8 03 09 E0 */	lha r0, 0x9e0(r3)
/* 80A22A64  7C 00 30 00 */	cmpw r0, r6
/* 80A22A68  4D 82 00 20 */	beqlr 
lbl_80A22A6C:
/* 80A22A6C  2C 04 00 00 */	cmpwi r4, 0
/* 80A22A70  4D 80 00 20 */	bltlr 
/* 80A22A74  2C 04 00 0D */	cmpwi r4, 0xd
/* 80A22A78  4C 80 00 20 */	bgelr 
/* 80A22A7C  B0 C3 09 E0 */	sth r6, 0x9e0(r3)
/* 80A22A80  D0 23 09 7C */	stfs f1, 0x97c(r3)
/* 80A22A84  38 00 FF FF */	li r0, -1
/* 80A22A88  B0 03 09 DC */	sth r0, 0x9dc(r3)
/* 80A22A8C  38 00 00 00 */	li r0, 0
/* 80A22A90  B0 03 09 DA */	sth r0, 0x9da(r3)
/* 80A22A94  B0 03 14 3E */	sth r0, 0x143e(r3)
/* 80A22A98  4E 80 00 20 */	blr 
