lbl_80164D2C:
/* 80164D2C  38 00 00 00 */	li r0, 0
/* 80164D30  A8 64 00 08 */	lha r3, 8(r4)
/* 80164D34  2C 03 00 FD */	cmpwi r3, 0xfd
/* 80164D38  41 82 00 08 */	beq lbl_80164D40
/* 80164D3C  40 82 00 08 */	bne lbl_80164D44
lbl_80164D40:
/* 80164D40  38 00 00 01 */	li r0, 1
lbl_80164D44:
/* 80164D44  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80164D48  41 82 00 0C */	beq lbl_80164D54
/* 80164D4C  C0 24 05 98 */	lfs f1, 0x598(r4)
/* 80164D50  4E 80 00 20 */	blr 
lbl_80164D54:
/* 80164D54  C0 42 9C F0 */	lfs f2, lit_7609(r2)
/* 80164D58  C0 24 05 3C */	lfs f1, 0x53c(r4)
/* 80164D5C  C0 04 04 D4 */	lfs f0, 0x4d4(r4)
/* 80164D60  EC 01 00 28 */	fsubs f0, f1, f0
/* 80164D64  EC 22 00 32 */	fmuls f1, f2, f0
/* 80164D68  4E 80 00 20 */	blr 
