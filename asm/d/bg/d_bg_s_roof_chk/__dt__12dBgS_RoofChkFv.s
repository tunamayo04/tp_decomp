lbl_80079090:
/* 80079090  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80079094  7C 08 02 A6 */	mflr r0
/* 80079098  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007909C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800790A0  93 C1 00 08 */	stw r30, 8(r1)
/* 800790A4  7C 7E 1B 79 */	or. r30, r3, r3
/* 800790A8  7C 9F 23 78 */	mr r31, r4
/* 800790AC  41 82 00 5C */	beq lbl_80079108
/* 800790B0  3C 60 80 3B */	lis r3, __vt__12dBgS_RoofChk@ha
/* 800790B4  38 63 BA 50 */	addi r3, r3, __vt__12dBgS_RoofChk@l
/* 800790B8  90 7E 00 0C */	stw r3, 0xc(r30)
/* 800790BC  38 03 00 0C */	addi r0, r3, 0xc
/* 800790C0  90 1E 00 20 */	stw r0, 0x20(r30)
/* 800790C4  38 03 00 18 */	addi r0, r3, 0x18
/* 800790C8  90 1E 00 24 */	stw r0, 0x24(r30)
/* 800790CC  38 03 00 24 */	addi r0, r3, 0x24
/* 800790D0  90 1E 00 34 */	stw r0, 0x34(r30)
/* 800790D4  38 7E 00 24 */	addi r3, r30, 0x24
/* 800790D8  38 80 00 00 */	li r4, 0
/* 800790DC  4B FF E4 0D */	bl __dt__8dBgS_ChkFv
/* 800790E0  38 7E 00 10 */	addi r3, r30, 0x10
/* 800790E4  38 80 00 00 */	li r4, 0
/* 800790E8  48 1E EA 89 */	bl __dt__8cBgS_ChkFv
/* 800790EC  7F C3 F3 78 */	mr r3, r30
/* 800790F0  38 80 00 00 */	li r4, 0
/* 800790F4  48 1E EF BD */	bl __dt__13cBgS_PolyInfoFv
/* 800790F8  7F E0 07 35 */	extsh. r0, r31
/* 800790FC  40 81 00 0C */	ble lbl_80079108
/* 80079100  7F C3 F3 78 */	mr r3, r30
/* 80079104  48 25 5C 39 */	bl __dl__FPv
lbl_80079108:
/* 80079108  7F C3 F3 78 */	mr r3, r30
/* 8007910C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80079110  83 C1 00 08 */	lwz r30, 8(r1)
/* 80079114  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80079118  7C 08 03 A6 */	mtlr r0
/* 8007911C  38 21 00 10 */	addi r1, r1, 0x10
/* 80079120  4E 80 00 20 */	blr 
