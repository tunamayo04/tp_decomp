lbl_80088A7C:
/* 80088A7C  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80088A80  7C 08 02 A6 */	mflr r0
/* 80088A84  90 01 00 94 */	stw r0, 0x94(r1)
/* 80088A88  39 61 00 90 */	addi r11, r1, 0x90
/* 80088A8C  48 2D 97 4D */	bl _savegpr_28
/* 80088A90  7C 7F 1B 78 */	mr r31, r3
/* 80088A94  40 86 00 24 */	bne cr1, lbl_80088AB8
/* 80088A98  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 80088A9C  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 80088AA0  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 80088AA4  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 80088AA8  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 80088AAC  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 80088AB0  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 80088AB4  D9 01 00 60 */	stfd f8, 0x60(r1)
lbl_80088AB8:
/* 80088AB8  90 61 00 08 */	stw r3, 8(r1)
/* 80088ABC  90 81 00 0C */	stw r4, 0xc(r1)
/* 80088AC0  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80088AC4  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80088AC8  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80088ACC  91 01 00 1C */	stw r8, 0x1c(r1)
/* 80088AD0  91 21 00 20 */	stw r9, 0x20(r1)
/* 80088AD4  91 41 00 24 */	stw r10, 0x24(r1)
/* 80088AD8  80 1F 06 0C */	lwz r0, 0x60c(r31)
/* 80088ADC  54 00 00 85 */	rlwinm. r0, r0, 0, 2, 2
/* 80088AE0  41 82 00 0C */	beq lbl_80088AEC
/* 80088AE4  38 60 00 00 */	li r3, 0
/* 80088AE8  48 00 00 BC */	b lbl_80088BA4
lbl_80088AEC:
/* 80088AEC  90 BF 04 FC */	stw r5, 0x4fc(r31)
/* 80088AF0  90 9F 05 00 */	stw r4, 0x500(r31)
/* 80088AF4  3C 00 03 00 */	lis r0, 0x300
/* 80088AF8  90 01 00 68 */	stw r0, 0x68(r1)
/* 80088AFC  38 01 00 98 */	addi r0, r1, 0x98
/* 80088B00  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80088B04  38 01 00 08 */	addi r0, r1, 8
/* 80088B08  90 01 00 70 */	stw r0, 0x70(r1)
/* 80088B0C  3B 80 00 00 */	li r28, 0
/* 80088B10  3B C0 00 00 */	li r30, 0
lbl_80088B14:
/* 80088B14  38 61 00 68 */	addi r3, r1, 0x68
/* 80088B18  38 80 00 01 */	li r4, 1
/* 80088B1C  48 2D 8F F9 */	bl __va_arg
/* 80088B20  80 83 00 00 */	lwz r4, 0(r3)
/* 80088B24  28 04 00 00 */	cmplwi r4, 0
/* 80088B28  41 82 00 3C */	beq lbl_80088B64
/* 80088B2C  7F BF F2 14 */	add r29, r31, r30
/* 80088B30  38 7D 05 14 */	addi r3, r29, 0x514
/* 80088B34  48 2D FF F9 */	bl strcpy
/* 80088B38  38 61 00 68 */	addi r3, r1, 0x68
/* 80088B3C  38 80 00 01 */	li r4, 1
/* 80088B40  48 2D 8F D5 */	bl __va_arg
/* 80088B44  80 03 00 00 */	lwz r0, 0(r3)
/* 80088B48  90 1D 05 24 */	stw r0, 0x524(r29)
/* 80088B4C  38 61 00 68 */	addi r3, r1, 0x68
/* 80088B50  38 80 00 01 */	li r4, 1
/* 80088B54  48 2D 8F C1 */	bl __va_arg
/* 80088B58  80 03 00 00 */	lwz r0, 0(r3)
/* 80088B5C  90 1D 05 28 */	stw r0, 0x528(r29)
/* 80088B60  48 00 00 18 */	b lbl_80088B78
lbl_80088B64:
/* 80088B64  38 80 00 00 */	li r4, 0
/* 80088B68  1C 1C 00 18 */	mulli r0, r28, 0x18
/* 80088B6C  7C 7F 02 14 */	add r3, r31, r0
/* 80088B70  98 83 05 14 */	stb r4, 0x514(r3)
/* 80088B74  48 00 00 14 */	b lbl_80088B88
lbl_80088B78:
/* 80088B78  3B 9C 00 01 */	addi r28, r28, 1
/* 80088B7C  2C 1C 00 08 */	cmpwi r28, 8
/* 80088B80  3B DE 00 18 */	addi r30, r30, 0x18
/* 80088B84  41 80 FF 90 */	blt lbl_80088B14
lbl_80088B88:
/* 80088B88  80 1F 06 0C */	lwz r0, 0x60c(r31)
/* 80088B8C  64 00 20 00 */	oris r0, r0, 0x2000
/* 80088B90  90 1F 06 0C */	stw r0, 0x60c(r31)
/* 80088B94  38 00 00 00 */	li r0, 0
/* 80088B98  90 1F 01 74 */	stw r0, 0x174(r31)
/* 80088B9C  98 1F 04 E8 */	stb r0, 0x4e8(r31)
/* 80088BA0  38 60 00 01 */	li r3, 1
lbl_80088BA4:
/* 80088BA4  39 61 00 90 */	addi r11, r1, 0x90
/* 80088BA8  48 2D 96 7D */	bl _restgpr_28
/* 80088BAC  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80088BB0  7C 08 03 A6 */	mtlr r0
/* 80088BB4  38 21 00 90 */	addi r1, r1, 0x90
/* 80088BB8  4E 80 00 20 */	blr 
