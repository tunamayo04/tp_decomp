lbl_809D983C:
/* 809D983C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809D9840  7C 08 02 A6 */	mflr r0
/* 809D9844  90 01 00 14 */	stw r0, 0x14(r1)
/* 809D9848  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809D984C  93 C1 00 08 */	stw r30, 8(r1)
/* 809D9850  7C 7E 1B 79 */	or. r30, r3, r3
/* 809D9854  7C 9F 23 78 */	mr r31, r4
/* 809D9858  41 82 00 38 */	beq lbl_809D9890
/* 809D985C  3C 80 80 9E */	lis r4, __vt__12dBgS_ObjAcch@ha
/* 809D9860  38 84 A2 F4 */	addi r4, r4, __vt__12dBgS_ObjAcch@l
/* 809D9864  90 9E 00 10 */	stw r4, 0x10(r30)
/* 809D9868  38 04 00 0C */	addi r0, r4, 0xc
/* 809D986C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 809D9870  38 04 00 18 */	addi r0, r4, 0x18
/* 809D9874  90 1E 00 24 */	stw r0, 0x24(r30)
/* 809D9878  38 80 00 00 */	li r4, 0
/* 809D987C  4B 69 C7 18 */	b __dt__9dBgS_AcchFv
/* 809D9880  7F E0 07 35 */	extsh. r0, r31
/* 809D9884  40 81 00 0C */	ble lbl_809D9890
/* 809D9888  7F C3 F3 78 */	mr r3, r30
/* 809D988C  4B 8F 54 B0 */	b __dl__FPv
lbl_809D9890:
/* 809D9890  7F C3 F3 78 */	mr r3, r30
/* 809D9894  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809D9898  83 C1 00 08 */	lwz r30, 8(r1)
/* 809D989C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809D98A0  7C 08 03 A6 */	mtlr r0
/* 809D98A4  38 21 00 10 */	addi r1, r1, 0x10
/* 809D98A8  4E 80 00 20 */	blr 
