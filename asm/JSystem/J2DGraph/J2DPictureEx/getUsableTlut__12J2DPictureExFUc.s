lbl_80306DC8:
/* 80306DC8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80306DCC  7C 08 02 A6 */	mflr r0
/* 80306DD0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80306DD4  39 61 00 20 */	addi r11, r1, 0x20
/* 80306DD8  48 05 B3 FD */	bl _savegpr_27
/* 80306DDC  7C 7F 1B 78 */	mr r31, r3
/* 80306DE0  80 63 01 50 */	lwz r3, 0x150(r3)
/* 80306DE4  83 A3 00 28 */	lwz r29, 0x28(r3)
/* 80306DE8  3B 80 00 00 */	li r28, 0
/* 80306DEC  3B 60 00 00 */	li r27, 0
/* 80306DF0  54 9E 06 3E */	clrlwi r30, r4, 0x18
/* 80306DF4  48 00 00 84 */	b lbl_80306E78
lbl_80306DF8:
/* 80306DF8  80 7F 01 50 */	lwz r3, 0x150(r31)
/* 80306DFC  80 63 00 70 */	lwz r3, 0x70(r3)
/* 80306E00  57 64 06 3E */	clrlwi r4, r27, 0x18
/* 80306E04  81 83 00 00 */	lwz r12, 0(r3)
/* 80306E08  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 80306E0C  7D 89 03 A6 */	mtctr r12
/* 80306E10  4E 80 04 21 */	bctrl 
/* 80306E14  57 60 06 3E */	clrlwi r0, r27, 0x18
/* 80306E18  7C 00 F0 40 */	cmplw r0, r30
/* 80306E1C  41 82 00 58 */	beq lbl_80306E74
/* 80306E20  28 03 00 00 */	cmplwi r3, 0
/* 80306E24  41 82 00 50 */	beq lbl_80306E74
/* 80306E28  80 83 00 20 */	lwz r4, 0x20(r3)
/* 80306E2C  28 04 00 00 */	cmplwi r4, 0
/* 80306E30  41 82 00 44 */	beq lbl_80306E74
/* 80306E34  88 04 00 08 */	lbz r0, 8(r4)
/* 80306E38  28 00 00 00 */	cmplwi r0, 0
/* 80306E3C  41 82 00 38 */	beq lbl_80306E74
/* 80306E40  88 63 00 3A */	lbz r3, 0x3a(r3)
/* 80306E44  2C 03 00 10 */	cmpwi r3, 0x10
/* 80306E48  38 00 00 00 */	li r0, 0
/* 80306E4C  41 80 00 08 */	blt lbl_80306E54
/* 80306E50  38 00 00 10 */	li r0, 0x10
lbl_80306E54:
/* 80306E54  7C 00 18 50 */	subf r0, r0, r3
/* 80306E58  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80306E5C  28 03 00 08 */	cmplwi r3, 8
/* 80306E60  40 80 00 14 */	bge lbl_80306E74
/* 80306E64  38 00 00 01 */	li r0, 1
/* 80306E68  7C 00 18 30 */	slw r0, r0, r3
/* 80306E6C  7F 80 03 78 */	or r0, r28, r0
/* 80306E70  54 1C 06 3E */	clrlwi r28, r0, 0x18
lbl_80306E74:
/* 80306E74  3B 7B 00 01 */	addi r27, r27, 1
lbl_80306E78:
/* 80306E78  57 60 06 3E */	clrlwi r0, r27, 0x18
/* 80306E7C  7C 00 E8 40 */	cmplw r0, r29
/* 80306E80  41 80 FF 78 */	blt lbl_80306DF8
/* 80306E84  38 60 00 00 */	li r3, 0
/* 80306E88  57 85 06 3E */	clrlwi r5, r28, 0x18
/* 80306E8C  38 80 00 01 */	li r4, 1
/* 80306E90  48 00 00 1C */	b lbl_80306EAC
lbl_80306E94:
/* 80306E94  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80306E98  7C 80 00 30 */	slw r0, r4, r0
/* 80306E9C  7C A0 00 39 */	and. r0, r5, r0
/* 80306EA0  40 82 00 08 */	bne lbl_80306EA8
/* 80306EA4  48 00 00 18 */	b lbl_80306EBC
lbl_80306EA8:
/* 80306EA8  38 63 00 01 */	addi r3, r3, 1
lbl_80306EAC:
/* 80306EAC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80306EB0  28 00 00 08 */	cmplwi r0, 8
/* 80306EB4  41 80 FF E0 */	blt lbl_80306E94
/* 80306EB8  38 60 00 00 */	li r3, 0
lbl_80306EBC:
/* 80306EBC  39 61 00 20 */	addi r11, r1, 0x20
/* 80306EC0  48 05 B3 61 */	bl _restgpr_27
/* 80306EC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80306EC8  7C 08 03 A6 */	mtlr r0
/* 80306ECC  38 21 00 20 */	addi r1, r1, 0x20
/* 80306ED0  4E 80 00 20 */	blr 
