lbl_80784C30:
/* 80784C30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80784C34  7C 08 02 A6 */	mflr r0
/* 80784C38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80784C3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80784C40  93 C1 00 08 */	stw r30, 8(r1)
/* 80784C44  7C 7E 1B 79 */	or. r30, r3, r3
/* 80784C48  7C 9F 23 78 */	mr r31, r4
/* 80784C4C  41 82 00 38 */	beq lbl_80784C84
/* 80784C50  3C 80 80 78 */	lis r4, __vt__12dBgS_ObjAcch@ha
/* 80784C54  38 84 4E FC */	addi r4, r4, __vt__12dBgS_ObjAcch@l
/* 80784C58  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80784C5C  38 04 00 0C */	addi r0, r4, 0xc
/* 80784C60  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80784C64  38 04 00 18 */	addi r0, r4, 0x18
/* 80784C68  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80784C6C  38 80 00 00 */	li r4, 0
/* 80784C70  4B 8F 13 24 */	b __dt__9dBgS_AcchFv
/* 80784C74  7F E0 07 35 */	extsh. r0, r31
/* 80784C78  40 81 00 0C */	ble lbl_80784C84
/* 80784C7C  7F C3 F3 78 */	mr r3, r30
/* 80784C80  4B B4 A0 BC */	b __dl__FPv
lbl_80784C84:
/* 80784C84  7F C3 F3 78 */	mr r3, r30
/* 80784C88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80784C8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80784C90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80784C94  7C 08 03 A6 */	mtlr r0
/* 80784C98  38 21 00 10 */	addi r1, r1, 0x10
/* 80784C9C  4E 80 00 20 */	blr 
