lbl_803651D8:
/* 803651D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803651DC  7C 08 02 A6 */	mflr r0
/* 803651E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803651E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803651E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803651EC  3B C0 00 00 */	li r30, 0
/* 803651F0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803651F4  7C 9D 23 78 */	mr r29, r4
/* 803651F8  93 81 00 10 */	stw r28, 0x10(r1)
/* 803651FC  7C 7C 1B 78 */	mr r28, r3
/* 80365200  38 60 00 02 */	li r3, 2
/* 80365204  48 00 02 65 */	bl __begin_critical_region
/* 80365208  48 00 00 68 */	b lbl_80365270
lbl_8036520C:
/* 8036520C  7F A3 EB 78 */	mr r3, r29
/* 80365210  38 80 FF FF */	li r4, -1
/* 80365214  48 00 3F 01 */	bl fwide
/* 80365218  2C 03 00 00 */	cmpwi r3, 0
/* 8036521C  41 80 00 0C */	blt lbl_80365228
/* 80365220  38 60 FF FF */	li r3, -1
/* 80365224  48 00 00 3C */	b lbl_80365260
lbl_80365228:
/* 80365228  80 7D 00 28 */	lwz r3, 0x28(r29)
/* 8036522C  38 03 FF FF */	addi r0, r3, -1
/* 80365230  28 03 00 00 */	cmplwi r3, 0
/* 80365234  90 1D 00 28 */	stw r0, 0x28(r29)
/* 80365238  41 82 00 1C */	beq lbl_80365254
/* 8036523C  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 80365240  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 80365244  38 04 00 01 */	addi r0, r4, 1
/* 80365248  90 1D 00 24 */	stw r0, 0x24(r29)
/* 8036524C  9B E4 00 00 */	stb r31, 0(r4)
/* 80365250  48 00 00 10 */	b lbl_80365260
lbl_80365254:
/* 80365254  7F E3 FB 78 */	mr r3, r31
/* 80365258  7F A4 EB 78 */	mr r4, r29
/* 8036525C  48 00 00 51 */	bl __put_char
lbl_80365260:
/* 80365260  2C 03 FF FF */	cmpwi r3, -1
/* 80365264  40 82 00 0C */	bne lbl_80365270
/* 80365268  3B C0 FF FF */	li r30, -1
/* 8036526C  48 00 00 14 */	b lbl_80365280
lbl_80365270:
/* 80365270  88 1C 00 00 */	lbz r0, 0(r28)
/* 80365274  3B 9C 00 01 */	addi r28, r28, 1
/* 80365278  7C 1F 07 75 */	extsb. r31, r0
/* 8036527C  40 82 FF 90 */	bne lbl_8036520C
lbl_80365280:
/* 80365280  38 60 00 02 */	li r3, 2
/* 80365284  48 00 01 E1 */	bl __end_critical_region
/* 80365288  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8036528C  7F C3 F3 78 */	mr r3, r30
/* 80365290  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80365294  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80365298  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8036529C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803652A0  7C 08 03 A6 */	mtlr r0
/* 803652A4  38 21 00 20 */	addi r1, r1, 0x20
/* 803652A8  4E 80 00 20 */	blr 
