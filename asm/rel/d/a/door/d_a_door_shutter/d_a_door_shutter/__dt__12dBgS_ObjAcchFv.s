lbl_8046677C:
/* 8046677C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80466780  7C 08 02 A6 */	mflr r0
/* 80466784  90 01 00 14 */	stw r0, 0x14(r1)
/* 80466788  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046678C  93 C1 00 08 */	stw r30, 8(r1)
/* 80466790  7C 7E 1B 79 */	or. r30, r3, r3
/* 80466794  7C 9F 23 78 */	mr r31, r4
/* 80466798  41 82 00 38 */	beq lbl_804667D0
/* 8046679C  3C 80 80 46 */	lis r4, __vt__12dBgS_ObjAcch@ha
/* 804667A0  38 84 72 FC */	addi r4, r4, __vt__12dBgS_ObjAcch@l
/* 804667A4  90 9E 00 10 */	stw r4, 0x10(r30)
/* 804667A8  38 04 00 0C */	addi r0, r4, 0xc
/* 804667AC  90 1E 00 14 */	stw r0, 0x14(r30)
/* 804667B0  38 04 00 18 */	addi r0, r4, 0x18
/* 804667B4  90 1E 00 24 */	stw r0, 0x24(r30)
/* 804667B8  38 80 00 00 */	li r4, 0
/* 804667BC  4B C0 F7 D8 */	b __dt__9dBgS_AcchFv
/* 804667C0  7F E0 07 35 */	extsh. r0, r31
/* 804667C4  40 81 00 0C */	ble lbl_804667D0
/* 804667C8  7F C3 F3 78 */	mr r3, r30
/* 804667CC  4B E6 85 70 */	b __dl__FPv
lbl_804667D0:
/* 804667D0  7F C3 F3 78 */	mr r3, r30
/* 804667D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804667D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 804667DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804667E0  7C 08 03 A6 */	mtlr r0
/* 804667E4  38 21 00 10 */	addi r1, r1, 0x10
/* 804667E8  4E 80 00 20 */	blr 
