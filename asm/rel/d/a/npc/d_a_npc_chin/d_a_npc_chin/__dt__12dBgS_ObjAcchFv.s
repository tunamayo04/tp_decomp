lbl_809915A8:
/* 809915A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809915AC  7C 08 02 A6 */	mflr r0
/* 809915B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 809915B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809915B8  93 C1 00 08 */	stw r30, 8(r1)
/* 809915BC  7C 7E 1B 79 */	or. r30, r3, r3
/* 809915C0  7C 9F 23 78 */	mr r31, r4
/* 809915C4  41 82 00 38 */	beq lbl_809915FC
/* 809915C8  3C 80 80 99 */	lis r4, __vt__12dBgS_ObjAcch@ha
/* 809915CC  38 84 23 80 */	addi r4, r4, __vt__12dBgS_ObjAcch@l
/* 809915D0  90 9E 00 10 */	stw r4, 0x10(r30)
/* 809915D4  38 04 00 0C */	addi r0, r4, 0xc
/* 809915D8  90 1E 00 14 */	stw r0, 0x14(r30)
/* 809915DC  38 04 00 18 */	addi r0, r4, 0x18
/* 809915E0  90 1E 00 24 */	stw r0, 0x24(r30)
/* 809915E4  38 80 00 00 */	li r4, 0
/* 809915E8  4B 6E 49 AC */	b __dt__9dBgS_AcchFv
/* 809915EC  7F E0 07 35 */	extsh. r0, r31
/* 809915F0  40 81 00 0C */	ble lbl_809915FC
/* 809915F4  7F C3 F3 78 */	mr r3, r30
/* 809915F8  4B 93 D7 44 */	b __dl__FPv
lbl_809915FC:
/* 809915FC  7F C3 F3 78 */	mr r3, r30
/* 80991600  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80991604  83 C1 00 08 */	lwz r30, 8(r1)
/* 80991608  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8099160C  7C 08 03 A6 */	mtlr r0
/* 80991610  38 21 00 10 */	addi r1, r1, 0x10
/* 80991614  4E 80 00 20 */	blr 
