lbl_8066973C:
/* 8066973C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80669740  7C 08 02 A6 */	mflr r0
/* 80669744  90 01 00 24 */	stw r0, 0x24(r1)
/* 80669748  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8066974C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80669750  7C 7F 1B 78 */	mr r31, r3
/* 80669754  3C 80 80 67 */	lis r4, lit_3662@ha
/* 80669758  3B C4 ED E8 */	addi r30, r4, lit_3662@l
/* 8066975C  38 00 00 01 */	li r0, 1
/* 80669760  98 03 06 16 */	stb r0, 0x616(r3)
/* 80669764  C0 1E 00 B0 */	lfs f0, 0xb0(r30)
/* 80669768  D0 03 06 48 */	stfs f0, 0x648(r3)
/* 8066976C  A8 03 05 F6 */	lha r0, 0x5f6(r3)
/* 80669770  2C 00 00 01 */	cmpwi r0, 1
/* 80669774  41 82 00 3C */	beq lbl_806697B0
/* 80669778  40 80 00 A8 */	bge lbl_80669820
/* 8066977C  2C 00 00 00 */	cmpwi r0, 0
/* 80669780  40 80 00 08 */	bge lbl_80669788
/* 80669784  48 00 00 9C */	b lbl_80669820
lbl_80669788:
/* 80669788  C0 1E 00 B8 */	lfs f0, 0xb8(r30)
/* 8066978C  D0 1F 05 E8 */	stfs f0, 0x5e8(r31)
/* 80669790  38 80 00 16 */	li r4, 0x16
/* 80669794  C0 3E 00 84 */	lfs f1, 0x84(r30)
/* 80669798  38 A0 00 02 */	li r5, 2
/* 8066979C  C0 5F 05 E8 */	lfs f2, 0x5e8(r31)
/* 806697A0  4B FF E6 09 */	bl anm_init__FP8do_classifUcf
/* 806697A4  A8 7F 05 F6 */	lha r3, 0x5f6(r31)
/* 806697A8  38 03 00 01 */	addi r0, r3, 1
/* 806697AC  B0 1F 05 F6 */	sth r0, 0x5f6(r31)
lbl_806697B0:
/* 806697B0  38 7F 05 E8 */	addi r3, r31, 0x5e8
/* 806697B4  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 806697B8  C0 5E 00 00 */	lfs f2, 0(r30)
/* 806697BC  C0 7E 00 B4 */	lfs f3, 0xb4(r30)
/* 806697C0  4B C0 62 7C */	b cLib_addCalc2__FPffff
/* 806697C4  C0 1F 05 E8 */	lfs f0, 0x5e8(r31)
/* 806697C8  80 7F 05 D0 */	lwz r3, 0x5d0(r31)
/* 806697CC  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 806697D0  C0 3F 05 E8 */	lfs f1, 0x5e8(r31)
/* 806697D4  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 806697D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806697DC  4C 41 13 82 */	cror 2, 1, 2
/* 806697E0  40 82 00 40 */	bne lbl_80669820
/* 806697E4  38 00 00 03 */	li r0, 3
/* 806697E8  B0 1F 05 F2 */	sth r0, 0x5f2(r31)
/* 806697EC  38 00 00 00 */	li r0, 0
/* 806697F0  B0 1F 05 F6 */	sth r0, 0x5f6(r31)
/* 806697F4  3C 60 00 05 */	lis r3, 0x0005 /* 0x0005000D@ha */
/* 806697F8  38 03 00 0D */	addi r0, r3, 0x000D /* 0x0005000D@l */
/* 806697FC  90 01 00 08 */	stw r0, 8(r1)
/* 80669800  38 7F 0B E4 */	addi r3, r31, 0xbe4
/* 80669804  38 81 00 08 */	addi r4, r1, 8
/* 80669808  38 A0 00 00 */	li r5, 0
/* 8066980C  38 C0 FF FF */	li r6, -1
/* 80669810  81 9F 0B F4 */	lwz r12, 0xbf4(r31)
/* 80669814  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80669818  7D 89 03 A6 */	mtctr r12
/* 8066981C  4E 80 04 21 */	bctrl 
lbl_80669820:
/* 80669820  3C 60 80 67 */	lis r3, l_HIO@ha
/* 80669824  38 63 F2 C4 */	addi r3, r3, l_HIO@l
/* 80669828  C0 63 00 0C */	lfs f3, 0xc(r3)
/* 8066982C  38 7F 05 2C */	addi r3, r31, 0x52c
/* 80669830  C0 1F 05 E8 */	lfs f0, 0x5e8(r31)
/* 80669834  EC 20 00 F2 */	fmuls f1, f0, f3
/* 80669838  C0 5E 00 00 */	lfs f2, 0(r30)
/* 8066983C  C0 1E 00 A8 */	lfs f0, 0xa8(r30)
/* 80669840  EC 60 00 F2 */	fmuls f3, f0, f3
/* 80669844  4B C0 61 F8 */	b cLib_addCalc2__FPffff
/* 80669848  38 7F 04 DE */	addi r3, r31, 0x4de
/* 8066984C  A8 9F 05 CC */	lha r4, 0x5cc(r31)
/* 80669850  38 A0 00 08 */	li r5, 8
/* 80669854  38 C0 04 00 */	li r6, 0x400
/* 80669858  4B C0 6D B0 */	b cLib_addCalcAngleS2__FPssss
/* 8066985C  C0 5F 05 C8 */	lfs f2, 0x5c8(r31)
/* 80669860  C0 3E 00 BC */	lfs f1, 0xbc(r30)
/* 80669864  C0 1F 06 7C */	lfs f0, 0x67c(r31)
/* 80669868  EC 01 00 32 */	fmuls f0, f1, f0
/* 8066986C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80669870  40 80 00 34 */	bge lbl_806698A4
/* 80669874  3C 60 80 67 */	lis r3, l_HIO@ha
/* 80669878  38 63 F2 C4 */	addi r3, r3, l_HIO@l
/* 8066987C  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 80669880  28 00 00 00 */	cmplwi r0, 0
/* 80669884  41 82 00 10 */	beq lbl_80669894
/* 80669888  38 00 00 07 */	li r0, 7
/* 8066988C  B0 1F 05 F2 */	sth r0, 0x5f2(r31)
/* 80669890  48 00 00 0C */	b lbl_8066989C
lbl_80669894:
/* 80669894  38 00 00 06 */	li r0, 6
/* 80669898  B0 1F 05 F2 */	sth r0, 0x5f2(r31)
lbl_8066989C:
/* 8066989C  38 00 00 00 */	li r0, 0
/* 806698A0  B0 1F 05 F6 */	sth r0, 0x5f6(r31)
lbl_806698A4:
/* 806698A4  7F E3 FB 78 */	mr r3, r31
/* 806698A8  4B FF F2 F9 */	bl area_check__FP8do_class
/* 806698AC  7F E3 FB 78 */	mr r3, r31
/* 806698B0  C0 3F 05 2C */	lfs f1, 0x52c(r31)
/* 806698B4  4B FF F2 65 */	bl move_dansa_check__FP8do_classf
/* 806698B8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 806698BC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 806698C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 806698C4  7C 08 03 A6 */	mtlr r0
/* 806698C8  38 21 00 20 */	addi r1, r1, 0x20
/* 806698CC  4E 80 00 20 */	blr 
