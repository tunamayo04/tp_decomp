lbl_80191FD4:
/* 80191FD4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80191FD8  7C 08 02 A6 */	mflr r0
/* 80191FDC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80191FE0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80191FE4  7C 7F 1B 78 */	mr r31, r3
/* 80191FE8  80 83 00 28 */	lwz r4, 0x28(r3)
/* 80191FEC  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 80191FF0  7C 04 00 00 */	cmpw r4, r0
/* 80191FF4  41 82 00 78 */	beq lbl_8019206C
/* 80191FF8  40 80 00 24 */	bge lbl_8019201C
/* 80191FFC  38 04 00 02 */	addi r0, r4, 2
/* 80192000  90 1F 00 28 */	stw r0, 0x28(r31)
/* 80192004  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 80192008  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8019200C  7C 00 18 00 */	cmpw r0, r3
/* 80192010  40 81 00 28 */	ble lbl_80192038
/* 80192014  90 7F 00 28 */	stw r3, 0x28(r31)
/* 80192018  48 00 00 20 */	b lbl_80192038
lbl_8019201C:
/* 8019201C  38 04 FF FE */	addi r0, r4, -2
/* 80192020  90 1F 00 28 */	stw r0, 0x28(r31)
/* 80192024  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 80192028  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8019202C  7C 00 18 00 */	cmpw r0, r3
/* 80192030  40 80 00 08 */	bge lbl_80192038
/* 80192034  90 7F 00 28 */	stw r3, 0x28(r31)
lbl_80192038:
/* 80192038  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 8019203C  C8 22 9F F0 */	lfd f1, lit_3868(r2)
/* 80192040  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80192044  90 01 00 0C */	stw r0, 0xc(r1)
/* 80192048  3C 00 43 30 */	lis r0, 0x4330
/* 8019204C  90 01 00 08 */	stw r0, 8(r1)
/* 80192050  C8 01 00 08 */	lfd f0, 8(r1)
/* 80192054  EC 00 08 28 */	fsubs f0, f0, f1
/* 80192058  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8019205C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80192060  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80192064  48 16 76 2D */	bl animation__9J2DScreenFv
/* 80192068  38 60 00 00 */	li r3, 0
lbl_8019206C:
/* 8019206C  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 80192070  80 1F 00 2C */	lwz r0, 0x2c(r31)
/* 80192074  7C 04 00 00 */	cmpw r4, r0
/* 80192078  40 82 00 2C */	bne lbl_801920A4
/* 8019207C  2C 04 0B 2B */	cmpwi r4, 0xb2b
/* 80192080  40 82 00 10 */	bne lbl_80192090
/* 80192084  38 00 00 01 */	li r0, 1
/* 80192088  98 1F 00 3C */	stb r0, 0x3c(r31)
/* 8019208C  48 00 00 0C */	b lbl_80192098
lbl_80192090:
/* 80192090  38 00 00 00 */	li r0, 0
/* 80192094  98 1F 00 3C */	stb r0, 0x3c(r31)
lbl_80192098:
/* 80192098  38 00 00 01 */	li r0, 1
/* 8019209C  98 1F 00 3D */	stb r0, 0x3d(r31)
/* 801920A0  38 60 00 01 */	li r3, 1
lbl_801920A4:
/* 801920A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801920A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801920AC  7C 08 03 A6 */	mtlr r0
/* 801920B0  38 21 00 20 */	addi r1, r1, 0x20
/* 801920B4  4E 80 00 20 */	blr 
