lbl_80032E78:
/* 80032E78  2C 04 00 00 */	cmpwi r4, 0
/* 80032E7C  41 80 00 2C */	blt lbl_80032EA8
/* 80032E80  2C 04 00 08 */	cmpwi r4, 8
/* 80032E84  40 80 00 24 */	bge lbl_80032EA8
/* 80032E88  88 63 00 19 */	lbz r3, 0x19(r3)
/* 80032E8C  38 00 00 01 */	li r0, 1
/* 80032E90  7C 00 20 30 */	slw r0, r0, r4
/* 80032E94  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80032E98  7C 63 00 38 */	and r3, r3, r0
/* 80032E9C  30 03 FF FF */	addic r0, r3, -1
/* 80032EA0  7C 60 19 10 */	subfe r3, r0, r3
/* 80032EA4  4E 80 00 20 */	blr 
lbl_80032EA8:
/* 80032EA8  38 60 00 00 */	li r3, 0
/* 80032EAC  4E 80 00 20 */	blr 
