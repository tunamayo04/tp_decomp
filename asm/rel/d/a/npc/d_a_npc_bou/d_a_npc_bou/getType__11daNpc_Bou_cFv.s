lbl_8096DA78:
/* 8096DA78  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 8096DA7C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8096DA80  2C 00 00 02 */	cmpwi r0, 2
/* 8096DA84  41 82 00 38 */	beq lbl_8096DABC
/* 8096DA88  40 80 00 14 */	bge lbl_8096DA9C
/* 8096DA8C  2C 00 00 00 */	cmpwi r0, 0
/* 8096DA90  41 82 00 1C */	beq lbl_8096DAAC
/* 8096DA94  40 80 00 20 */	bge lbl_8096DAB4
/* 8096DA98  48 00 00 3C */	b lbl_8096DAD4
lbl_8096DA9C:
/* 8096DA9C  2C 00 00 04 */	cmpwi r0, 4
/* 8096DAA0  41 82 00 2C */	beq lbl_8096DACC
/* 8096DAA4  40 80 00 30 */	bge lbl_8096DAD4
/* 8096DAA8  48 00 00 1C */	b lbl_8096DAC4
lbl_8096DAAC:
/* 8096DAAC  38 60 00 00 */	li r3, 0
/* 8096DAB0  4E 80 00 20 */	blr 
lbl_8096DAB4:
/* 8096DAB4  38 60 00 01 */	li r3, 1
/* 8096DAB8  4E 80 00 20 */	blr 
lbl_8096DABC:
/* 8096DABC  38 60 00 02 */	li r3, 2
/* 8096DAC0  4E 80 00 20 */	blr 
lbl_8096DAC4:
/* 8096DAC4  38 60 00 03 */	li r3, 3
/* 8096DAC8  4E 80 00 20 */	blr 
lbl_8096DACC:
/* 8096DACC  38 60 00 04 */	li r3, 4
/* 8096DAD0  4E 80 00 20 */	blr 
lbl_8096DAD4:
/* 8096DAD4  38 60 00 05 */	li r3, 5
/* 8096DAD8  4E 80 00 20 */	blr 
