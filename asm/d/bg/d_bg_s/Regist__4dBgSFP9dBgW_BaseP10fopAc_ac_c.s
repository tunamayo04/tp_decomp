lbl_80074A08:
/* 80074A08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80074A0C  7C 08 02 A6 */	mflr r0
/* 80074A10  90 01 00 24 */	stw r0, 0x24(r1)
/* 80074A14  39 61 00 20 */	addi r11, r1, 0x20
/* 80074A18  48 2E D7 C5 */	bl _savegpr_29
/* 80074A1C  7C 7D 1B 78 */	mr r29, r3
/* 80074A20  7C 9E 23 79 */	or. r30, r4, r4
/* 80074A24  7C BF 2B 78 */	mr r31, r5
/* 80074A28  40 82 00 0C */	bne lbl_80074A34
/* 80074A2C  38 60 00 01 */	li r3, 1
/* 80074A30  48 00 00 6C */	b lbl_80074A9C
lbl_80074A34:
/* 80074A34  28 1F 00 00 */	cmplwi r31, 0
/* 80074A38  41 82 00 40 */	beq lbl_80074A78
/* 80074A3C  7F C3 F3 78 */	mr r3, r30
/* 80074A40  81 9E 00 04 */	lwz r12, 4(r30)
/* 80074A44  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80074A48  7D 89 03 A6 */	mtctr r12
/* 80074A4C  4E 80 04 21 */	bctrl 
/* 80074A50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80074A54  41 82 00 24 */	beq lbl_80074A78
/* 80074A58  7F C3 F3 78 */	mr r3, r30
/* 80074A5C  A8 9F 04 E6 */	lha r4, 0x4e6(r31)
/* 80074A60  81 9E 00 04 */	lwz r12, 4(r30)
/* 80074A64  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80074A68  7D 89 03 A6 */	mtctr r12
/* 80074A6C  4E 80 04 21 */	bctrl 
/* 80074A70  88 1F 04 E2 */	lbz r0, 0x4e2(r31)
/* 80074A74  98 1E 00 09 */	stb r0, 9(r30)
lbl_80074A78:
/* 80074A78  7F A3 EB 78 */	mr r3, r29
/* 80074A7C  7F C4 F3 78 */	mr r4, r30
/* 80074A80  28 1F 00 00 */	cmplwi r31, 0
/* 80074A84  41 82 00 0C */	beq lbl_80074A90
/* 80074A88  80 BF 00 04 */	lwz r5, 4(r31)
/* 80074A8C  48 00 00 08 */	b lbl_80074A94
lbl_80074A90:
/* 80074A90  38 A0 FF FF */	li r5, -1
lbl_80074A94:
/* 80074A94  7F E6 FB 78 */	mr r6, r31
/* 80074A98  4B FF F6 AD */	bl Regist__4cBgSFP9dBgW_BaseUiPv
lbl_80074A9C:
/* 80074A9C  39 61 00 20 */	addi r11, r1, 0x20
/* 80074AA0  48 2E D7 89 */	bl _restgpr_29
/* 80074AA4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80074AA8  7C 08 03 A6 */	mtlr r0
/* 80074AAC  38 21 00 20 */	addi r1, r1, 0x20
/* 80074AB0  4E 80 00 20 */	blr 
