lbl_809D37EC:
/* 809D37EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809D37F0  7C 08 02 A6 */	mflr r0
/* 809D37F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 809D37F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809D37FC  93 C1 00 08 */	stw r30, 8(r1)
/* 809D3800  7C 7E 1B 79 */	or. r30, r3, r3
/* 809D3804  7C 9F 23 78 */	mr r31, r4
/* 809D3808  41 82 00 38 */	beq lbl_809D3840
/* 809D380C  3C 80 80 9D */	lis r4, __vt__12dBgS_ObjAcch@ha
/* 809D3810  38 84 3E 24 */	addi r4, r4, __vt__12dBgS_ObjAcch@l
/* 809D3814  90 9E 00 10 */	stw r4, 0x10(r30)
/* 809D3818  38 04 00 0C */	addi r0, r4, 0xc
/* 809D381C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 809D3820  38 04 00 18 */	addi r0, r4, 0x18
/* 809D3824  90 1E 00 24 */	stw r0, 0x24(r30)
/* 809D3828  38 80 00 00 */	li r4, 0
/* 809D382C  4B 6A 27 68 */	b __dt__9dBgS_AcchFv
/* 809D3830  7F E0 07 35 */	extsh. r0, r31
/* 809D3834  40 81 00 0C */	ble lbl_809D3840
/* 809D3838  7F C3 F3 78 */	mr r3, r30
/* 809D383C  4B 8F B5 00 */	b __dl__FPv
lbl_809D3840:
/* 809D3840  7F C3 F3 78 */	mr r3, r30
/* 809D3844  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809D3848  83 C1 00 08 */	lwz r30, 8(r1)
/* 809D384C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809D3850  7C 08 03 A6 */	mtlr r0
/* 809D3854  38 21 00 10 */	addi r1, r1, 0x10
/* 809D3858  4E 80 00 20 */	blr 
