lbl_806F63FC:
/* 806F63FC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 806F6400  7C 08 02 A6 */	mflr r0
/* 806F6404  90 01 00 34 */	stw r0, 0x34(r1)
/* 806F6408  39 61 00 30 */	addi r11, r1, 0x30
/* 806F640C  4B C6 BD D0 */	b _savegpr_29
/* 806F6410  7C 7F 1B 78 */	mr r31, r3
/* 806F6414  3C 60 80 6F */	lis r3, lit_3648@ha
/* 806F6418  3B C3 7B 6C */	addi r30, r3, lit_3648@l
/* 806F641C  80 7F 05 C8 */	lwz r3, 0x5c8(r31)
/* 806F6420  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 806F6424  FC 00 00 1E */	fctiwz f0, f0
/* 806F6428  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 806F642C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 806F6430  38 7F 05 2C */	addi r3, r31, 0x52c
/* 806F6434  C0 3E 00 00 */	lfs f1, 0(r30)
/* 806F6438  FC 40 08 90 */	fmr f2, f1
/* 806F643C  4B B7 96 44 */	b cLib_addCalc0__FPfff
/* 806F6440  A8 1F 06 94 */	lha r0, 0x694(r31)
/* 806F6444  2C 00 00 01 */	cmpwi r0, 1
/* 806F6448  41 82 00 44 */	beq lbl_806F648C
/* 806F644C  40 80 00 10 */	bge lbl_806F645C
/* 806F6450  2C 00 00 00 */	cmpwi r0, 0
/* 806F6454  40 80 00 14 */	bge lbl_806F6468
/* 806F6458  48 00 01 4C */	b lbl_806F65A4
lbl_806F645C:
/* 806F645C  2C 00 00 03 */	cmpwi r0, 3
/* 806F6460  40 80 01 44 */	bge lbl_806F65A4
/* 806F6464  48 00 01 00 */	b lbl_806F6564
lbl_806F6468:
/* 806F6468  7F E3 FB 78 */	mr r3, r31
/* 806F646C  38 80 00 04 */	li r4, 4
/* 806F6470  C0 3E 00 2C */	lfs f1, 0x2c(r30)
/* 806F6474  38 A0 00 00 */	li r5, 0
/* 806F6478  C0 5E 00 00 */	lfs f2, 0(r30)
/* 806F647C  4B FF F6 19 */	bl anm_init__FP10e_is_classifUcf
/* 806F6480  38 00 00 01 */	li r0, 1
/* 806F6484  B0 1F 06 94 */	sth r0, 0x694(r31)
/* 806F6488  48 00 01 1C */	b lbl_806F65A4
lbl_806F648C:
/* 806F648C  2C 1D 00 19 */	cmpwi r29, 0x19
/* 806F6490  41 80 00 54 */	blt lbl_806F64E4
/* 806F6494  2C 1D 00 21 */	cmpwi r29, 0x21
/* 806F6498  41 81 00 4C */	bgt lbl_806F64E4
/* 806F649C  2C 1D 00 19 */	cmpwi r29, 0x19
/* 806F64A0  40 82 00 3C */	bne lbl_806F64DC
/* 806F64A4  3C 60 00 06 */	lis r3, 0x0006 /* 0x00060034@ha */
/* 806F64A8  38 03 00 34 */	addi r0, r3, 0x0034 /* 0x00060034@l */
/* 806F64AC  90 01 00 08 */	stw r0, 8(r1)
/* 806F64B0  38 7F 05 CC */	addi r3, r31, 0x5cc
/* 806F64B4  38 81 00 08 */	addi r4, r1, 8
/* 806F64B8  38 A0 00 00 */	li r5, 0
/* 806F64BC  38 C0 FF FF */	li r6, -1
/* 806F64C0  81 9F 05 CC */	lwz r12, 0x5cc(r31)
/* 806F64C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 806F64C8  7D 89 03 A6 */	mtctr r12
/* 806F64CC  4E 80 04 21 */	bctrl 
/* 806F64D0  38 00 00 01 */	li r0, 1
/* 806F64D4  98 1F 06 88 */	stb r0, 0x688(r31)
/* 806F64D8  48 00 00 0C */	b lbl_806F64E4
lbl_806F64DC:
/* 806F64DC  38 00 00 02 */	li r0, 2
/* 806F64E0  98 1F 06 88 */	stb r0, 0x688(r31)
lbl_806F64E4:
/* 806F64E4  80 7F 05 C8 */	lwz r3, 0x5c8(r31)
/* 806F64E8  38 80 00 01 */	li r4, 1
/* 806F64EC  88 03 00 11 */	lbz r0, 0x11(r3)
/* 806F64F0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 806F64F4  40 82 00 18 */	bne lbl_806F650C
/* 806F64F8  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 806F64FC  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 806F6500  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 806F6504  41 82 00 08 */	beq lbl_806F650C
/* 806F6508  38 80 00 00 */	li r4, 0
lbl_806F650C:
/* 806F650C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 806F6510  41 82 00 94 */	beq lbl_806F65A4
/* 806F6514  7F E3 FB 78 */	mr r3, r31
/* 806F6518  C0 3E 00 48 */	lfs f1, 0x48(r30)
/* 806F651C  38 80 10 00 */	li r4, 0x1000
/* 806F6520  4B FF F9 19 */	bl pl_check__FP10e_is_classfs
/* 806F6524  2C 03 00 00 */	cmpwi r3, 0
/* 806F6528  41 82 00 18 */	beq lbl_806F6540
/* 806F652C  38 00 00 01 */	li r0, 1
/* 806F6530  B0 1F 06 92 */	sth r0, 0x692(r31)
/* 806F6534  38 00 00 00 */	li r0, 0
/* 806F6538  B0 1F 06 94 */	sth r0, 0x694(r31)
/* 806F653C  48 00 00 68 */	b lbl_806F65A4
lbl_806F6540:
/* 806F6540  7F E3 FB 78 */	mr r3, r31
/* 806F6544  38 80 00 0C */	li r4, 0xc
/* 806F6548  C0 3E 00 2C */	lfs f1, 0x2c(r30)
/* 806F654C  38 A0 00 02 */	li r5, 2
/* 806F6550  C0 5E 00 00 */	lfs f2, 0(r30)
/* 806F6554  4B FF F5 41 */	bl anm_init__FP10e_is_classifUcf
/* 806F6558  38 00 00 02 */	li r0, 2
/* 806F655C  B0 1F 06 94 */	sth r0, 0x694(r31)
/* 806F6560  48 00 00 44 */	b lbl_806F65A4
lbl_806F6564:
/* 806F6564  7F E3 FB 78 */	mr r3, r31
/* 806F6568  C0 3E 00 48 */	lfs f1, 0x48(r30)
/* 806F656C  38 80 10 00 */	li r4, 0x1000
/* 806F6570  4B FF F8 C9 */	bl pl_check__FP10e_is_classfs
/* 806F6574  2C 03 00 00 */	cmpwi r3, 0
/* 806F6578  41 82 00 18 */	beq lbl_806F6590
/* 806F657C  38 00 00 01 */	li r0, 1
/* 806F6580  B0 1F 06 92 */	sth r0, 0x692(r31)
/* 806F6584  38 00 00 00 */	li r0, 0
/* 806F6588  B0 1F 06 94 */	sth r0, 0x694(r31)
/* 806F658C  48 00 00 18 */	b lbl_806F65A4
lbl_806F6590:
/* 806F6590  38 7F 04 DE */	addi r3, r31, 0x4de
/* 806F6594  A8 9F 06 A6 */	lha r4, 0x6a6(r31)
/* 806F6598  38 A0 00 01 */	li r5, 1
/* 806F659C  38 C0 02 00 */	li r6, 0x200
/* 806F65A0  4B B7 A0 68 */	b cLib_addCalcAngleS2__FPssss
lbl_806F65A4:
/* 806F65A4  39 61 00 30 */	addi r11, r1, 0x30
/* 806F65A8  4B C6 BC 80 */	b _restgpr_29
/* 806F65AC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 806F65B0  7C 08 03 A6 */	mtlr r0
/* 806F65B4  38 21 00 30 */	addi r1, r1, 0x30
/* 806F65B8  4E 80 00 20 */	blr 
