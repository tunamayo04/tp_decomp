lbl_80213CEC:
/* 80213CEC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80213CF0  7C 08 02 A6 */	mflr r0
/* 80213CF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80213CF8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80213CFC  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80213D00  7C 7F 1B 78 */	mr r31, r3
/* 80213D04  FF E0 08 90 */	fmr f31, f1
/* 80213D08  80 63 03 9C */	lwz r3, 0x39c(r3)
/* 80213D0C  80 63 00 04 */	lwz r3, 4(r3)
/* 80213D10  80 9F 05 34 */	lwz r4, 0x534(r31)
/* 80213D14  81 83 00 00 */	lwz r12, 0(r3)
/* 80213D18  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 80213D1C  7D 89 03 A6 */	mtctr r12
/* 80213D20  4E 80 04 21 */	bctrl 
/* 80213D24  80 7F 05 34 */	lwz r3, 0x534(r31)
/* 80213D28  D3 E3 00 08 */	stfs f31, 8(r3)
/* 80213D2C  80 7F 03 9C */	lwz r3, 0x39c(r31)
/* 80213D30  80 63 00 04 */	lwz r3, 4(r3)
/* 80213D34  48 0E 42 99 */	bl animationTransform__7J2DPaneFv
/* 80213D38  80 7F 03 9C */	lwz r3, 0x39c(r31)
/* 80213D3C  80 63 00 04 */	lwz r3, 4(r3)
/* 80213D40  38 80 00 00 */	li r4, 0
/* 80213D44  81 83 00 00 */	lwz r12, 0(r3)
/* 80213D48  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 80213D4C  7D 89 03 A6 */	mtctr r12
/* 80213D50  4E 80 04 21 */	bctrl 
/* 80213D54  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80213D58  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80213D5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80213D60  7C 08 03 A6 */	mtlr r0
/* 80213D64  38 21 00 20 */	addi r1, r1, 0x20
/* 80213D68  4E 80 00 20 */	blr 
