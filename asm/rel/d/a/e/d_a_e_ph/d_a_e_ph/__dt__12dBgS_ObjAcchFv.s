lbl_80741AD4:
/* 80741AD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80741AD8  7C 08 02 A6 */	mflr r0
/* 80741ADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80741AE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80741AE4  93 C1 00 08 */	stw r30, 8(r1)
/* 80741AE8  7C 7E 1B 79 */	or. r30, r3, r3
/* 80741AEC  7C 9F 23 78 */	mr r31, r4
/* 80741AF0  41 82 00 38 */	beq lbl_80741B28
/* 80741AF4  3C 80 80 74 */	lis r4, __vt__12dBgS_ObjAcch@ha
/* 80741AF8  38 84 1D 84 */	addi r4, r4, __vt__12dBgS_ObjAcch@l
/* 80741AFC  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80741B00  38 04 00 0C */	addi r0, r4, 0xc
/* 80741B04  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80741B08  38 04 00 18 */	addi r0, r4, 0x18
/* 80741B0C  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80741B10  38 80 00 00 */	li r4, 0
/* 80741B14  4B 93 44 80 */	b __dt__9dBgS_AcchFv
/* 80741B18  7F E0 07 35 */	extsh. r0, r31
/* 80741B1C  40 81 00 0C */	ble lbl_80741B28
/* 80741B20  7F C3 F3 78 */	mr r3, r30
/* 80741B24  4B B8 D2 18 */	b __dl__FPv
lbl_80741B28:
/* 80741B28  7F C3 F3 78 */	mr r3, r30
/* 80741B2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80741B30  83 C1 00 08 */	lwz r30, 8(r1)
/* 80741B34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80741B38  7C 08 03 A6 */	mtlr r0
/* 80741B3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80741B40  4E 80 00 20 */	blr 
