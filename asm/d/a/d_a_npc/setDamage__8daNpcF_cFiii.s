lbl_80153658:
/* 80153658  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8015365C  7C 08 02 A6 */	mflr r0
/* 80153660  90 01 00 24 */	stw r0, 0x24(r1)
/* 80153664  39 61 00 20 */	addi r11, r1, 0x20
/* 80153668  48 20 EB 75 */	bl _savegpr_29
/* 8015366C  7C 7D 1B 78 */	mr r29, r3
/* 80153670  7C 9E 23 78 */	mr r30, r4
/* 80153674  7C DF 33 78 */	mr r31, r6
/* 80153678  2C 05 00 00 */	cmpwi r5, 0
/* 8015367C  41 80 00 1C */	blt lbl_80153698
/* 80153680  7C A4 2B 78 */	mr r4, r5
/* 80153684  C0 22 99 D8 */	lfs f1, lit_4116(r2)
/* 80153688  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 8015368C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80153690  7D 89 03 A6 */	mtctr r12
/* 80153694  4E 80 04 21 */	bctrl 
lbl_80153698:
/* 80153698  2C 1F 00 00 */	cmpwi r31, 0
/* 8015369C  41 80 00 24 */	blt lbl_801536C0
/* 801536A0  7F A3 EB 78 */	mr r3, r29
/* 801536A4  7F E4 FB 78 */	mr r4, r31
/* 801536A8  C0 22 99 D8 */	lfs f1, lit_4116(r2)
/* 801536AC  38 A0 00 01 */	li r5, 1
/* 801536B0  81 9D 0B 44 */	lwz r12, 0xb44(r29)
/* 801536B4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801536B8  7D 89 03 A6 */	mtctr r12
/* 801536BC  4E 80 04 21 */	bctrl 
lbl_801536C0:
/* 801536C0  C0 02 9A A4 */	lfs f0, lit_11061(r2)
/* 801536C4  D0 1D 09 84 */	stfs f0, 0x984(r29)
/* 801536C8  C0 02 9A A8 */	lfs f0, lit_11062(r2)
/* 801536CC  D0 1D 09 8C */	stfs f0, 0x98c(r29)
/* 801536D0  38 00 40 00 */	li r0, 0x4000
/* 801536D4  B0 1D 09 92 */	sth r0, 0x992(r29)
/* 801536D8  93 DD 09 58 */	stw r30, 0x958(r29)
/* 801536DC  80 1D 09 58 */	lwz r0, 0x958(r29)
/* 801536E0  90 1D 09 54 */	stw r0, 0x954(r29)
/* 801536E4  C0 02 99 D8 */	lfs f0, lit_4116(r2)
/* 801536E8  D0 1D 04 F8 */	stfs f0, 0x4f8(r29)
/* 801536EC  D0 1D 04 FC */	stfs f0, 0x4fc(r29)
/* 801536F0  D0 1D 05 00 */	stfs f0, 0x500(r29)
/* 801536F4  D0 1D 05 2C */	stfs f0, 0x52c(r29)
/* 801536F8  38 00 00 01 */	li r0, 1
/* 801536FC  98 1D 09 F0 */	stb r0, 0x9f0(r29)
/* 80153700  39 61 00 20 */	addi r11, r1, 0x20
/* 80153704  48 20 EB 25 */	bl _restgpr_29
/* 80153708  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8015370C  7C 08 03 A6 */	mtlr r0
/* 80153710  38 21 00 20 */	addi r1, r1, 0x20
/* 80153714  4E 80 00 20 */	blr 
