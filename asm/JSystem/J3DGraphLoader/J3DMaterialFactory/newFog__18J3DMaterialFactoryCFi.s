lbl_8033268C:
/* 8033268C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80332690  7C 08 02 A6 */	mflr r0
/* 80332694  90 01 00 74 */	stw r0, 0x74(r1)
/* 80332698  39 61 00 70 */	addi r11, r1, 0x70
/* 8033269C  48 02 FB 41 */	bl _savegpr_29
/* 803326A0  7C 7F 1B 78 */	mr r31, r3
/* 803326A4  7C 9D 23 78 */	mr r29, r4
/* 803326A8  7C BE 2B 78 */	mr r30, r5
/* 803326AC  38 61 00 34 */	addi r3, r1, 0x34
/* 803326B0  3C 80 80 3A */	lis r4, j3dDefaultFogInfo@ha
/* 803326B4  38 84 1F BC */	addi r4, r4, j3dDefaultFogInfo@l
/* 803326B8  4B FF 31 49 */	bl __as__10J3DFogInfoFRC10J3DFogInfo
/* 803326BC  80 9D 00 04 */	lwz r4, 4(r29)
/* 803326C0  80 7D 00 08 */	lwz r3, 8(r29)
/* 803326C4  57 C0 08 3C */	slwi r0, r30, 1
/* 803326C8  7C 03 02 2E */	lhzx r0, r3, r0
/* 803326CC  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 803326D0  7C 64 02 14 */	add r3, r4, r0
/* 803326D4  A0 03 01 44 */	lhz r0, 0x144(r3)
/* 803326D8  28 00 FF FF */	cmplwi r0, 0xffff
/* 803326DC  41 82 00 48 */	beq lbl_80332724
/* 803326E0  80 7D 00 5C */	lwz r3, 0x5c(r29)
/* 803326E4  1C 00 00 2C */	mulli r0, r0, 0x2c
/* 803326E8  38 A1 00 04 */	addi r5, r1, 4
/* 803326EC  7C 83 02 14 */	add r4, r3, r0
/* 803326F0  38 00 00 05 */	li r0, 5
/* 803326F4  7C 09 03 A6 */	mtctr r0
/* 803326F8  38 84 FF FC */	addi r4, r4, -4
lbl_803326FC:
/* 803326FC  80 64 00 04 */	lwz r3, 4(r4)
/* 80332700  84 04 00 08 */	lwzu r0, 8(r4)
/* 80332704  90 65 00 04 */	stw r3, 4(r5)
/* 80332708  94 05 00 08 */	stwu r0, 8(r5)
/* 8033270C  42 00 FF F0 */	bdnz lbl_803326FC
/* 80332710  80 04 00 04 */	lwz r0, 4(r4)
/* 80332714  90 05 00 04 */	stw r0, 4(r5)
/* 80332718  38 61 00 34 */	addi r3, r1, 0x34
/* 8033271C  38 81 00 08 */	addi r4, r1, 8
/* 80332720  4B FF 30 E1 */	bl __as__10J3DFogInfoFRC10J3DFogInfo
lbl_80332724:
/* 80332724  38 BF FF FC */	addi r5, r31, -4
/* 80332728  38 81 00 30 */	addi r4, r1, 0x30
/* 8033272C  38 00 00 05 */	li r0, 5
/* 80332730  7C 09 03 A6 */	mtctr r0
lbl_80332734:
/* 80332734  80 64 00 04 */	lwz r3, 4(r4)
/* 80332738  84 04 00 08 */	lwzu r0, 8(r4)
/* 8033273C  90 65 00 04 */	stw r3, 4(r5)
/* 80332740  94 05 00 08 */	stwu r0, 8(r5)
/* 80332744  42 00 FF F0 */	bdnz lbl_80332734
/* 80332748  80 04 00 04 */	lwz r0, 4(r4)
/* 8033274C  90 05 00 04 */	stw r0, 4(r5)
/* 80332750  39 61 00 70 */	addi r11, r1, 0x70
/* 80332754  48 02 FA D5 */	bl _restgpr_29
/* 80332758  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8033275C  7C 08 03 A6 */	mtlr r0
/* 80332760  38 21 00 70 */	addi r1, r1, 0x70
/* 80332764  4E 80 00 20 */	blr 
