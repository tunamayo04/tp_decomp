/* 802AEB70 002ABAB0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802AEB74 002ABAB4  7C 08 02 A6 */	mflr r0
/* 802AEB78 002ABAB8  90 01 00 44 */	stw r0, 0x44(r1)
/* 802AEB7C 002ABABC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802AEB80 002ABAC0  F3 E1 00 38 */	psq_st f31, 56(r1), 0, 0
/* 802AEB84 002ABAC4  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 802AEB88 002ABAC8  F3 C1 00 28 */	psq_st f30, 40(r1), 0, 0
/* 802AEB8C 002ABACC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802AEB90 002ABAD0  7C 7F 1B 78 */	mr r31, r3
/* 802AEB94 002ABAD4  28 04 00 00 */	cmplwi r4, 0
/* 802AEB98 002ABAD8  40 82 00 0C */	bne lbl_802AEBA4
/* 802AEB9C 002ABADC  38 60 00 00 */	li r3, 0
/* 802AEBA0 002ABAE0  48 00 00 F8 */	b lbl_802AEC98
lbl_802AEBA4:
/* 802AEBA4 002ABAE4  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 802AEBA8 002ABAE8  7C 00 07 75 */	extsb. r0, r0
/* 802AEBAC 002ABAEC  40 80 00 0C */	bge lbl_802AEBB8
/* 802AEBB0 002ABAF0  38 00 00 00 */	li r0, 0
/* 802AEBB4 002ABAF4  98 1F 00 18 */	stb r0, 0x18(r31)
lbl_802AEBB8:
/* 802AEBB8 002ABAF8  80 6D 85 C4 */	lwz r3, lbl_80450B44-_SDA_BASE_(r13)
/* 802AEBBC 002ABAFC  38 A1 00 08 */	addi r5, r1, 8
/* 802AEBC0 002ABB00  38 C0 00 00 */	li r6, 0
/* 802AEBC4 002ABB04  48 00 ED 69 */	bl Z2Audience_NS_convertAbsToRel
/* 802AEBC8 002ABB08  80 6D 85 C4 */	lwz r3, lbl_80450B44-_SDA_BASE_(r13)
/* 802AEBCC 002ABB0C  38 81 00 08 */	addi r4, r1, 8
/* 802AEBD0 002ABB10  C0 3F 00 00 */	lfs f1, 0(r31)
/* 802AEBD4 002ABB14  38 A0 00 00 */	li r5, 0
/* 802AEBD8 002ABB18  48 00 ED 85 */	bl Z2Audience_NS_calcRelPosVolume
/* 802AEBDC 002ABB1C  FF C0 08 90 */	fmr f30, f1
/* 802AEBE0 002ABB20  C0 02 BE 78 */	lfs f0, lbl_80455878-_SDA2_BASE_(r2)
/* 802AEBE4 002ABB24  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 802AEBE8 002ABB28  4C 40 13 82 */	cror 2, 0, 2
/* 802AEBEC 002ABB2C  40 82 00 0C */	bne lbl_802AEBF8
/* 802AEBF0 002ABB30  88 7F 00 18 */	lbz r3, 0x18(r31)
/* 802AEBF4 002ABB34  48 00 00 A4 */	b lbl_802AEC98
lbl_802AEBF8:
/* 802AEBF8 002ABB38  80 6D 85 C4 */	lwz r3, lbl_80450B44-_SDA_BASE_(r13)
/* 802AEBFC 002ABB3C  38 81 00 08 */	addi r4, r1, 8
/* 802AEC00 002ABB40  38 A0 00 00 */	li r5, 0
/* 802AEC04 002ABB44  48 00 EE 41 */	bl Z2Audience_NS_calcRelPosPan
/* 802AEC08 002ABB48  FF E0 08 90 */	fmr f31, f1
/* 802AEC0C 002ABB4C  80 6D 85 C4 */	lwz r3, lbl_80450B44-_SDA_BASE_(r13)
/* 802AEC10 002ABB50  38 81 00 08 */	addi r4, r1, 8
/* 802AEC14 002ABB54  38 A0 00 00 */	li r5, 0
/* 802AEC18 002ABB58  48 00 EF 2D */	bl Z2Audience_NS_calcRelPosDolby
/* 802AEC1C 002ABB5C  C0 42 BE 80 */	lfs f2, lbl_80455880-_SDA2_BASE_(r2)
/* 802AEC20 002ABB60  EC 02 F8 28 */	fsubs f0, f2, f31
/* 802AEC24 002ABB64  EC 60 07 B2 */	fmuls f3, f0, f30
/* 802AEC28 002ABB68  EC 9F 07 B2 */	fmuls f4, f31, f30
/* 802AEC2C 002ABB6C  EC 02 08 28 */	fsubs f0, f2, f1
/* 802AEC30 002ABB70  EC 40 07 B2 */	fmuls f2, f0, f30
/* 802AEC34 002ABB74  EC 21 07 B2 */	fmuls f1, f1, f30
/* 802AEC38 002ABB78  C0 1F 00 04 */	lfs f0, 4(r31)
/* 802AEC3C 002ABB7C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 802AEC40 002ABB80  40 81 00 08 */	ble lbl_802AEC48
/* 802AEC44 002ABB84  D3 DF 00 04 */	stfs f30, 4(r31)
lbl_802AEC48:
/* 802AEC48 002ABB88  C0 1F 00 08 */	lfs f0, 8(r31)
/* 802AEC4C 002ABB8C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802AEC50 002ABB90  40 81 00 08 */	ble lbl_802AEC58
/* 802AEC54 002ABB94  D0 7F 00 08 */	stfs f3, 8(r31)
lbl_802AEC58:
/* 802AEC58 002ABB98  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 802AEC5C 002ABB9C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802AEC60 002ABBA0  40 81 00 08 */	ble lbl_802AEC68
/* 802AEC64 002ABBA4  D0 9F 00 0C */	stfs f4, 0xc(r31)
lbl_802AEC68:
/* 802AEC68 002ABBA8  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 802AEC6C 002ABBAC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802AEC70 002ABBB0  40 81 00 08 */	ble lbl_802AEC78
/* 802AEC74 002ABBB4  D0 5F 00 10 */	stfs f2, 0x10(r31)
lbl_802AEC78:
/* 802AEC78 002ABBB8  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 802AEC7C 002ABBBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802AEC80 002ABBC0  40 81 00 08 */	ble lbl_802AEC88
/* 802AEC84 002ABBC4  D0 3F 00 14 */	stfs f1, 0x14(r31)
lbl_802AEC88:
/* 802AEC88 002ABBC8  88 7F 00 18 */	lbz r3, 0x18(r31)
/* 802AEC8C 002ABBCC  38 03 00 01 */	addi r0, r3, 1
/* 802AEC90 002ABBD0  98 1F 00 18 */	stb r0, 0x18(r31)
/* 802AEC94 002ABBD4  88 7F 00 18 */	lbz r3, 0x18(r31)
lbl_802AEC98:
/* 802AEC98 002ABBD8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, 0
/* 802AEC9C 002ABBDC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802AECA0 002ABBE0  E3 C1 00 28 */	psq_l f30, 40(r1), 0, 0
/* 802AECA4 002ABBE4  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 802AECA8 002ABBE8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802AECAC 002ABBEC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802AECB0 002ABBF0  7C 08 03 A6 */	mtlr r0
/* 802AECB4 002ABBF4  38 21 00 40 */	addi r1, r1, 0x40
/* 802AECB8 002ABBF8  4E 80 00 20 */	blr 