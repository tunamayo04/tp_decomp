lbl_8018E1C0:
/* 8018E1C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018E1C4  7C 08 02 A6 */	mflr r0
/* 8018E1C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018E1CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018E1D0  7C 7F 1B 78 */	mr r31, r3
/* 8018E1D4  80 63 01 30 */	lwz r3, 0x130(r3)
/* 8018E1D8  80 1F 01 34 */	lwz r0, 0x134(r31)
/* 8018E1DC  7C 03 00 00 */	cmpw r3, r0
/* 8018E1E0  41 82 00 7C */	beq lbl_8018E25C
/* 8018E1E4  40 80 00 24 */	bge lbl_8018E208
/* 8018E1E8  38 03 00 02 */	addi r0, r3, 2
/* 8018E1EC  90 1F 01 30 */	stw r0, 0x130(r31)
/* 8018E1F0  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 8018E1F4  80 7F 01 34 */	lwz r3, 0x134(r31)
/* 8018E1F8  7C 00 18 00 */	cmpw r0, r3
/* 8018E1FC  40 81 00 28 */	ble lbl_8018E224
/* 8018E200  90 7F 01 30 */	stw r3, 0x130(r31)
/* 8018E204  48 00 00 20 */	b lbl_8018E224
lbl_8018E208:
/* 8018E208  38 03 FF FE */	addi r0, r3, -2
/* 8018E20C  90 1F 01 30 */	stw r0, 0x130(r31)
/* 8018E210  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 8018E214  80 7F 01 34 */	lwz r3, 0x134(r31)
/* 8018E218  7C 00 18 00 */	cmpw r0, r3
/* 8018E21C  40 80 00 08 */	bge lbl_8018E224
/* 8018E220  90 7F 01 30 */	stw r3, 0x130(r31)
lbl_8018E224:
/* 8018E224  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 8018E228  C8 22 9F 38 */	lfd f1, lit_4342(r2)
/* 8018E22C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8018E230  90 01 00 0C */	stw r0, 0xc(r1)
/* 8018E234  3C 00 43 30 */	lis r0, 0x4330
/* 8018E238  90 01 00 08 */	stw r0, 8(r1)
/* 8018E23C  C8 01 00 08 */	lfd f0, 8(r1)
/* 8018E240  EC 00 08 28 */	fsubs f0, f0, f1
/* 8018E244  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 8018E248  D0 03 00 08 */	stfs f0, 8(r3)
/* 8018E24C  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 8018E250  48 16 9D 7D */	bl animationTransform__7J2DPaneFv
/* 8018E254  38 60 00 00 */	li r3, 0
/* 8018E258  48 00 00 48 */	b lbl_8018E2A0
lbl_8018E25C:
/* 8018E25C  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 8018E260  38 80 00 00 */	li r4, 0
/* 8018E264  81 83 00 00 */	lwz r12, 0(r3)
/* 8018E268  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8018E26C  7D 89 03 A6 */	mtctr r12
/* 8018E270  4E 80 04 21 */	bctrl 
/* 8018E274  80 1F 01 34 */	lwz r0, 0x134(r31)
/* 8018E278  2C 00 0B 2B */	cmpwi r0, 0xb2b
/* 8018E27C  40 82 00 10 */	bne lbl_8018E28C
/* 8018E280  38 00 00 01 */	li r0, 1
/* 8018E284  98 1F 01 4A */	stb r0, 0x14a(r31)
/* 8018E288  48 00 00 0C */	b lbl_8018E294
lbl_8018E28C:
/* 8018E28C  38 00 00 00 */	li r0, 0
/* 8018E290  98 1F 01 4A */	stb r0, 0x14a(r31)
lbl_8018E294:
/* 8018E294  38 00 00 00 */	li r0, 0
/* 8018E298  98 1F 01 4B */	stb r0, 0x14b(r31)
/* 8018E29C  38 60 00 01 */	li r3, 1
lbl_8018E2A0:
/* 8018E2A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018E2A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018E2A8  7C 08 03 A6 */	mtlr r0
/* 8018E2AC  38 21 00 20 */	addi r1, r1, 0x20
/* 8018E2B0  4E 80 00 20 */	blr 
