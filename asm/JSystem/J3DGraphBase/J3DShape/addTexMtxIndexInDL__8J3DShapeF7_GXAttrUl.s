lbl_80314BB8:
/* 80314BB8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80314BBC  7C 08 02 A6 */	mflr r0
/* 80314BC0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80314BC4  39 61 00 30 */	addi r11, r1, 0x30
/* 80314BC8  48 04 D6 0D */	bl _savegpr_27
/* 80314BCC  7C 7F 1B 78 */	mr r31, r3
/* 80314BD0  3C 60 80 3A */	lis r3, lit_697@ha
/* 80314BD4  38 C3 1E 98 */	addi r6, r3, lit_697@l
/* 80314BD8  80 66 00 00 */	lwz r3, 0(r6)
/* 80314BDC  80 06 00 04 */	lwz r0, 4(r6)
/* 80314BE0  90 61 00 08 */	stw r3, 8(r1)
/* 80314BE4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80314BE8  80 66 00 08 */	lwz r3, 8(r6)
/* 80314BEC  80 06 00 0C */	lwz r0, 0xc(r6)
/* 80314BF0  90 61 00 10 */	stw r3, 0x10(r1)
/* 80314BF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80314BF8  38 C0 FF FF */	li r6, -1
/* 80314BFC  38 E0 FF FF */	li r7, -1
/* 80314C00  39 00 00 00 */	li r8, 0
/* 80314C04  39 20 00 00 */	li r9, 0
/* 80314C08  81 5F 00 30 */	lwz r10, 0x30(r31)
/* 80314C0C  38 61 00 08 */	addi r3, r1, 8
/* 80314C10  48 00 00 3C */	b lbl_80314C4C
lbl_80314C14:
/* 80314C14  2C 00 00 00 */	cmpwi r0, 0
/* 80314C18  40 82 00 08 */	bne lbl_80314C20
/* 80314C1C  7D 06 43 78 */	mr r6, r8
lbl_80314C20:
/* 80314C20  7C 04 00 00 */	cmpw r4, r0
/* 80314C24  40 80 00 14 */	bge lbl_80314C38
/* 80314C28  55 20 06 3F */	clrlwi. r0, r9, 0x18
/* 80314C2C  40 82 00 0C */	bne lbl_80314C38
/* 80314C30  7D 07 43 78 */	mr r7, r8
/* 80314C34  39 20 00 01 */	li r9, 1
lbl_80314C38:
/* 80314C38  80 0A 00 04 */	lwz r0, 4(r10)
/* 80314C3C  54 00 10 3A */	slwi r0, r0, 2
/* 80314C40  7C 03 00 2E */	lwzx r0, r3, r0
/* 80314C44  7D 08 02 14 */	add r8, r8, r0
/* 80314C48  39 4A 00 08 */	addi r10, r10, 8
lbl_80314C4C:
/* 80314C4C  80 0A 00 00 */	lwz r0, 0(r10)
/* 80314C50  2C 00 00 FF */	cmpwi r0, 0xff
/* 80314C54  40 82 FF C0 */	bne lbl_80314C14
/* 80314C58  2C 06 FF FF */	cmpwi r6, -1
/* 80314C5C  41 82 00 48 */	beq lbl_80314CA4
/* 80314C60  3B 60 00 00 */	li r27, 0
/* 80314C64  7C BE 2B 78 */	mr r30, r5
/* 80314C68  7C FD 3B 78 */	mr r29, r7
/* 80314C6C  7D 1C 43 78 */	mr r28, r8
/* 80314C70  48 00 00 24 */	b lbl_80314C94
lbl_80314C74:
/* 80314C74  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80314C78  57 60 13 BA */	rlwinm r0, r27, 2, 0xe, 0x1d
/* 80314C7C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80314C80  7F 84 E3 78 */	mr r4, r28
/* 80314C84  7F A5 EB 78 */	mr r5, r29
/* 80314C88  7F C6 F3 78 */	mr r6, r30
/* 80314C8C  4B FF FC E9 */	bl addTexMtxIndexInDL__12J3DShapeDrawFUlUlUl
/* 80314C90  3B 7B 00 01 */	addi r27, r27, 1
lbl_80314C94:
/* 80314C94  57 63 04 3E */	clrlwi r3, r27, 0x10
/* 80314C98  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 80314C9C  7C 03 00 40 */	cmplw r3, r0
/* 80314CA0  41 80 FF D4 */	blt lbl_80314C74
lbl_80314CA4:
/* 80314CA4  39 61 00 30 */	addi r11, r1, 0x30
/* 80314CA8  48 04 D5 79 */	bl _restgpr_27
/* 80314CAC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80314CB0  7C 08 03 A6 */	mtlr r0
/* 80314CB4  38 21 00 30 */	addi r1, r1, 0x30
/* 80314CB8  4E 80 00 20 */	blr 
