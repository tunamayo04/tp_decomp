lbl_801E8438:
/* 801E8438  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E843C  7C 08 02 A6 */	mflr r0
/* 801E8440  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E8444  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E8448  7C 7F 1B 78 */	mr r31, r3
/* 801E844C  80 83 03 D0 */	lwz r4, 0x3d0(r3)
/* 801E8450  80 03 03 D4 */	lwz r0, 0x3d4(r3)
/* 801E8454  7C 04 00 00 */	cmpw r4, r0
/* 801E8458  41 82 00 88 */	beq lbl_801E84E0
/* 801E845C  40 80 00 24 */	bge lbl_801E8480
/* 801E8460  38 04 00 02 */	addi r0, r4, 2
/* 801E8464  90 1F 03 D0 */	stw r0, 0x3d0(r31)
/* 801E8468  80 1F 03 D0 */	lwz r0, 0x3d0(r31)
/* 801E846C  80 7F 03 D4 */	lwz r3, 0x3d4(r31)
/* 801E8470  7C 00 18 00 */	cmpw r0, r3
/* 801E8474  40 81 00 28 */	ble lbl_801E849C
/* 801E8478  90 7F 03 D0 */	stw r3, 0x3d0(r31)
/* 801E847C  48 00 00 20 */	b lbl_801E849C
lbl_801E8480:
/* 801E8480  38 04 FF FE */	addi r0, r4, -2
/* 801E8484  90 1F 03 D0 */	stw r0, 0x3d0(r31)
/* 801E8488  80 1F 03 D0 */	lwz r0, 0x3d0(r31)
/* 801E848C  80 7F 03 D4 */	lwz r3, 0x3d4(r31)
/* 801E8490  7C 00 18 00 */	cmpw r0, r3
/* 801E8494  40 80 00 08 */	bge lbl_801E849C
/* 801E8498  90 7F 03 D0 */	stw r3, 0x3d0(r31)
lbl_801E849C:
/* 801E849C  80 1F 03 D0 */	lwz r0, 0x3d0(r31)
/* 801E84A0  C8 22 A9 58 */	lfd f1, lit_4520(r2)
/* 801E84A4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801E84A8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801E84AC  3C 00 43 30 */	lis r0, 0x4330
/* 801E84B0  90 01 00 08 */	stw r0, 8(r1)
/* 801E84B4  C8 01 00 08 */	lfd f0, 8(r1)
/* 801E84B8  EC 00 08 28 */	fsubs f0, f0, f1
/* 801E84BC  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 801E84C0  D0 03 00 08 */	stfs f0, 8(r3)
/* 801E84C4  80 7F 01 DC */	lwz r3, 0x1dc(r31)
/* 801E84C8  80 63 00 04 */	lwz r3, 4(r3)
/* 801E84CC  48 10 FB 01 */	bl animationTransform__7J2DPaneFv
/* 801E84D0  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 801E84D4  80 63 00 04 */	lwz r3, 4(r3)
/* 801E84D8  48 10 FA F5 */	bl animationTransform__7J2DPaneFv
/* 801E84DC  38 60 00 00 */	li r3, 0
lbl_801E84E0:
/* 801E84E0  80 9F 03 D0 */	lwz r4, 0x3d0(r31)
/* 801E84E4  80 1F 03 D4 */	lwz r0, 0x3d4(r31)
/* 801E84E8  7C 04 00 00 */	cmpw r4, r0
/* 801E84EC  40 82 00 D4 */	bne lbl_801E85C0
/* 801E84F0  80 7F 01 DC */	lwz r3, 0x1dc(r31)
/* 801E84F4  80 63 00 04 */	lwz r3, 4(r3)
/* 801E84F8  38 80 00 00 */	li r4, 0
/* 801E84FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801E8500  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 801E8504  7D 89 03 A6 */	mtctr r12
/* 801E8508  4E 80 04 21 */	bctrl 
/* 801E850C  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 801E8510  80 63 00 04 */	lwz r3, 4(r3)
/* 801E8514  38 80 00 00 */	li r4, 0
/* 801E8518  81 83 00 00 */	lwz r12, 0(r3)
/* 801E851C  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 801E8520  7D 89 03 A6 */	mtctr r12
/* 801E8524  4E 80 04 21 */	bctrl 
/* 801E8528  80 1F 03 D0 */	lwz r0, 0x3d0(r31)
/* 801E852C  2C 00 04 7D */	cmpwi r0, 0x47d
/* 801E8530  40 82 00 10 */	bne lbl_801E8540
/* 801E8534  38 00 00 01 */	li r0, 1
/* 801E8538  98 1F 03 F8 */	stb r0, 0x3f8(r31)
/* 801E853C  48 00 00 80 */	b lbl_801E85BC
lbl_801E8540:
/* 801E8540  38 00 00 00 */	li r0, 0
/* 801E8544  98 1F 03 F8 */	stb r0, 0x3f8(r31)
/* 801E8548  88 1F 03 F9 */	lbz r0, 0x3f9(r31)
/* 801E854C  28 00 00 FF */	cmplwi r0, 0xff
/* 801E8550  41 82 00 6C */	beq lbl_801E85BC
/* 801E8554  54 00 15 BA */	rlwinm r0, r0, 2, 0x16, 0x1d
/* 801E8558  7C 7F 02 14 */	add r3, r31, r0
/* 801E855C  80 63 01 EC */	lwz r3, 0x1ec(r3)
/* 801E8560  38 80 00 00 */	li r4, 0
/* 801E8564  81 83 00 00 */	lwz r12, 0(r3)
/* 801E8568  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801E856C  7D 89 03 A6 */	mtctr r12
/* 801E8570  4E 80 04 21 */	bctrl 
/* 801E8574  88 1F 03 F9 */	lbz r0, 0x3f9(r31)
/* 801E8578  54 00 10 3A */	slwi r0, r0, 2
/* 801E857C  7C 7F 02 14 */	add r3, r31, r0
/* 801E8580  80 63 01 F4 */	lwz r3, 0x1f4(r3)
/* 801E8584  38 80 00 00 */	li r4, 0
/* 801E8588  81 83 00 00 */	lwz r12, 0(r3)
/* 801E858C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801E8590  7D 89 03 A6 */	mtctr r12
/* 801E8594  4E 80 04 21 */	bctrl 
/* 801E8598  88 1F 03 F9 */	lbz r0, 0x3f9(r31)
/* 801E859C  54 00 10 3A */	slwi r0, r0, 2
/* 801E85A0  7C 7F 02 14 */	add r3, r31, r0
/* 801E85A4  80 63 01 FC */	lwz r3, 0x1fc(r3)
/* 801E85A8  38 80 00 00 */	li r4, 0
/* 801E85AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801E85B0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801E85B4  7D 89 03 A6 */	mtctr r12
/* 801E85B8  4E 80 04 21 */	bctrl 
lbl_801E85BC:
/* 801E85BC  38 60 00 01 */	li r3, 1
lbl_801E85C0:
/* 801E85C0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E85C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E85C8  7C 08 03 A6 */	mtlr r0
/* 801E85CC  38 21 00 20 */	addi r1, r1, 0x20
/* 801E85D0  4E 80 00 20 */	blr 
