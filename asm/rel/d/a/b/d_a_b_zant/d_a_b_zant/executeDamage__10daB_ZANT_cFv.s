lbl_806412A8:
/* 806412A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 806412AC  7C 08 02 A6 */	mflr r0
/* 806412B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 806412B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 806412B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 806412BC  7C 7E 1B 78 */	mr r30, r3
/* 806412C0  3C 80 80 65 */	lis r4, lit_3757@ha
/* 806412C4  3B E4 EB 1C */	addi r31, r4, lit_3757@l
/* 806412C8  80 03 06 DC */	lwz r0, 0x6dc(r3)
/* 806412CC  2C 00 00 05 */	cmpwi r0, 5
/* 806412D0  41 82 01 94 */	beq lbl_80641464
/* 806412D4  40 80 01 F8 */	bge lbl_806414CC
/* 806412D8  2C 00 00 03 */	cmpwi r0, 3
/* 806412DC  40 80 01 F0 */	bge lbl_806414CC
/* 806412E0  2C 00 00 00 */	cmpwi r0, 0
/* 806412E4  40 80 00 08 */	bge lbl_806412EC
/* 806412E8  48 00 01 E4 */	b lbl_806414CC
lbl_806412EC:
/* 806412EC  38 00 00 04 */	li r0, 4
/* 806412F0  90 1E 05 5C */	stw r0, 0x55c(r30)
/* 806412F4  38 80 00 00 */	li r4, 0
/* 806412F8  4B FF E5 55 */	bl setNextDamageMode__10daB_ZANT_cFi
/* 806412FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80641300  41 82 00 14 */	beq lbl_80641314
/* 80641304  7F C3 F3 78 */	mr r3, r30
/* 80641308  38 80 00 00 */	li r4, 0
/* 8064130C  4B FF EC 61 */	bl setTgHitBit__10daB_ZANT_cFi
/* 80641310  48 00 01 BC */	b lbl_806414CC
lbl_80641314:
/* 80641314  88 1E 06 FB */	lbz r0, 0x6fb(r30)
/* 80641318  28 00 00 03 */	cmplwi r0, 3
/* 8064131C  40 82 00 28 */	bne lbl_80641344
/* 80641320  7F C3 F3 78 */	mr r3, r30
/* 80641324  38 80 00 01 */	li r4, 1
/* 80641328  4B FF E5 25 */	bl setNextDamageMode__10daB_ZANT_cFi
/* 8064132C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80641330  41 82 00 14 */	beq lbl_80641344
/* 80641334  7F C3 F3 78 */	mr r3, r30
/* 80641338  38 80 00 00 */	li r4, 0
/* 8064133C  4B FF EC 31 */	bl setTgHitBit__10daB_ZANT_cFi
/* 80641340  48 00 01 8C */	b lbl_806414CC
lbl_80641344:
/* 80641344  38 00 00 00 */	li r0, 0
/* 80641348  98 1E 07 02 */	stb r0, 0x702(r30)
/* 8064134C  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 80641350  D0 1E 05 2C */	stfs f0, 0x52c(r30)
/* 80641354  7F C3 F3 78 */	mr r3, r30
/* 80641358  38 80 00 01 */	li r4, 1
/* 8064135C  4B FF EC 11 */	bl setTgHitBit__10daB_ZANT_cFi
/* 80641360  80 1E 06 DC */	lwz r0, 0x6dc(r30)
/* 80641364  2C 00 00 00 */	cmpwi r0, 0
/* 80641368  40 82 00 28 */	bne lbl_80641390
/* 8064136C  4B C2 65 00 */	b cM_rnd__Fv
/* 80641370  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 80641374  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80641378  40 80 00 10 */	bge lbl_80641388
/* 8064137C  38 00 00 01 */	li r0, 1
/* 80641380  90 1E 06 DC */	stw r0, 0x6dc(r30)
/* 80641384  48 00 00 0C */	b lbl_80641390
lbl_80641388:
/* 80641388  38 00 00 02 */	li r0, 2
/* 8064138C  90 1E 06 DC */	stw r0, 0x6dc(r30)
lbl_80641390:
/* 80641390  88 1E 06 FB */	lbz r0, 0x6fb(r30)
/* 80641394  28 00 00 03 */	cmplwi r0, 3
/* 80641398  40 82 00 54 */	bne lbl_806413EC
/* 8064139C  80 1E 06 DC */	lwz r0, 0x6dc(r30)
/* 806413A0  2C 00 00 01 */	cmpwi r0, 1
/* 806413A4  40 82 00 20 */	bne lbl_806413C4
/* 806413A8  7F C3 F3 78 */	mr r3, r30
/* 806413AC  38 80 00 0F */	li r4, 0xf
/* 806413B0  38 A0 00 00 */	li r5, 0
/* 806413B4  C0 3F 00 5C */	lfs f1, 0x5c(r31)
/* 806413B8  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 806413BC  4B FF D2 09 */	bl setBck__10daB_ZANT_cFiUcff
/* 806413C0  48 00 00 1C */	b lbl_806413DC
lbl_806413C4:
/* 806413C4  7F C3 F3 78 */	mr r3, r30
/* 806413C8  38 80 00 10 */	li r4, 0x10
/* 806413CC  38 A0 00 00 */	li r5, 0
/* 806413D0  C0 3F 00 5C */	lfs f1, 0x5c(r31)
/* 806413D4  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 806413D8  4B FF D1 ED */	bl setBck__10daB_ZANT_cFiUcff
lbl_806413DC:
/* 806413DC  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 806413E0  D0 1E 04 FC */	stfs f0, 0x4fc(r30)
/* 806413E4  D0 1E 05 2C */	stfs f0, 0x52c(r30)
/* 806413E8  48 00 00 44 */	b lbl_8064142C
lbl_806413EC:
/* 806413EC  80 1E 06 DC */	lwz r0, 0x6dc(r30)
/* 806413F0  2C 00 00 01 */	cmpwi r0, 1
/* 806413F4  40 82 00 20 */	bne lbl_80641414
/* 806413F8  7F C3 F3 78 */	mr r3, r30
/* 806413FC  38 80 00 07 */	li r4, 7
/* 80641400  38 A0 00 00 */	li r5, 0
/* 80641404  C0 3F 00 5C */	lfs f1, 0x5c(r31)
/* 80641408  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 8064140C  4B FF D1 B9 */	bl setBck__10daB_ZANT_cFiUcff
/* 80641410  48 00 00 1C */	b lbl_8064142C
lbl_80641414:
/* 80641414  7F C3 F3 78 */	mr r3, r30
/* 80641418  38 80 00 08 */	li r4, 8
/* 8064141C  38 A0 00 00 */	li r5, 0
/* 80641420  C0 3F 00 5C */	lfs f1, 0x5c(r31)
/* 80641424  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 80641428  4B FF D1 9D */	bl setBck__10daB_ZANT_cFiUcff
lbl_8064142C:
/* 8064142C  3C 60 00 07 */	lis r3, 0x0007 /* 0x0007040C@ha */
/* 80641430  38 03 04 0C */	addi r0, r3, 0x040C /* 0x0007040C@l */
/* 80641434  90 01 00 08 */	stw r0, 8(r1)
/* 80641438  38 7E 05 F0 */	addi r3, r30, 0x5f0
/* 8064143C  38 81 00 08 */	addi r4, r1, 8
/* 80641440  38 A0 FF FF */	li r5, -1
/* 80641444  81 9E 05 F0 */	lwz r12, 0x5f0(r30)
/* 80641448  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8064144C  7D 89 03 A6 */	mtctr r12
/* 80641450  4E 80 04 21 */	bctrl 
/* 80641454  38 00 00 05 */	li r0, 5
/* 80641458  90 1E 06 DC */	stw r0, 0x6dc(r30)
/* 8064145C  38 00 00 28 */	li r0, 0x28
/* 80641460  90 1E 06 E8 */	stw r0, 0x6e8(r30)
lbl_80641464:
/* 80641464  80 1E 06 F4 */	lwz r0, 0x6f4(r30)
/* 80641468  2C 00 00 00 */	cmpwi r0, 0
/* 8064146C  40 82 00 10 */	bne lbl_8064147C
/* 80641470  7F C3 F3 78 */	mr r3, r30
/* 80641474  38 80 00 00 */	li r4, 0
/* 80641478  4B FF EA F5 */	bl setTgHitBit__10daB_ZANT_cFi
lbl_8064147C:
/* 8064147C  80 7E 05 B4 */	lwz r3, 0x5b4(r30)
/* 80641480  38 80 00 01 */	li r4, 1
/* 80641484  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80641488  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8064148C  40 82 00 18 */	bne lbl_806414A4
/* 80641490  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 80641494  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80641498  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8064149C  41 82 00 08 */	beq lbl_806414A4
/* 806414A0  38 80 00 00 */	li r4, 0
lbl_806414A4:
/* 806414A4  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 806414A8  41 82 00 24 */	beq lbl_806414CC
/* 806414AC  7F C3 F3 78 */	mr r3, r30
/* 806414B0  38 80 00 01 */	li r4, 1
/* 806414B4  4B FF E3 99 */	bl setNextDamageMode__10daB_ZANT_cFi
/* 806414B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 806414BC  40 82 00 10 */	bne lbl_806414CC
/* 806414C0  7F C3 F3 78 */	mr r3, r30
/* 806414C4  38 80 00 00 */	li r4, 0
/* 806414C8  48 00 AC F9 */	bl setBaseActionMode__10daB_ZANT_cFi
lbl_806414CC:
/* 806414CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 806414D0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 806414D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 806414D8  7C 08 03 A6 */	mtlr r0
/* 806414DC  38 21 00 20 */	addi r1, r1, 0x20
/* 806414E0  4E 80 00 20 */	blr 
