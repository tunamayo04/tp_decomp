lbl_80A45230:
/* 80A45230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A45234  7C 08 02 A6 */	mflr r0
/* 80A45238  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A4523C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A45240  93 C1 00 08 */	stw r30, 8(r1)
/* 80A45244  7C 7E 1B 79 */	or. r30, r3, r3
/* 80A45248  7C 9F 23 78 */	mr r31, r4
/* 80A4524C  41 82 00 38 */	beq lbl_80A45284
/* 80A45250  3C 80 80 A4 */	lis r4, __vt__12dBgS_ObjAcch@ha
/* 80A45254  38 84 57 4C */	addi r4, r4, __vt__12dBgS_ObjAcch@l
/* 80A45258  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80A4525C  38 04 00 0C */	addi r0, r4, 0xc
/* 80A45260  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80A45264  38 04 00 18 */	addi r0, r4, 0x18
/* 80A45268  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80A4526C  38 80 00 00 */	li r4, 0
/* 80A45270  4B 63 0D 24 */	b __dt__9dBgS_AcchFv
/* 80A45274  7F E0 07 35 */	extsh. r0, r31
/* 80A45278  40 81 00 0C */	ble lbl_80A45284
/* 80A4527C  7F C3 F3 78 */	mr r3, r30
/* 80A45280  4B 88 9A BC */	b __dl__FPv
lbl_80A45284:
/* 80A45284  7F C3 F3 78 */	mr r3, r30
/* 80A45288  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A4528C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80A45290  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A45294  7C 08 03 A6 */	mtlr r0
/* 80A45298  38 21 00 10 */	addi r1, r1, 0x10
/* 80A4529C  4E 80 00 20 */	blr 
