lbl_80815380:
/* 80815380  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80815384  7C 08 02 A6 */	mflr r0
/* 80815388  90 01 00 14 */	stw r0, 0x14(r1)
/* 8081538C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80815390  93 C1 00 08 */	stw r30, 8(r1)
/* 80815394  7C 7E 1B 79 */	or. r30, r3, r3
/* 80815398  7C 9F 23 78 */	mr r31, r4
/* 8081539C  41 82 00 38 */	beq lbl_808153D4
/* 808153A0  3C 60 80 81 */	lis r3, __vt__12dBgS_AcchCir@ha
/* 808153A4  38 03 5C 98 */	addi r0, r3, __vt__12dBgS_AcchCir@l
/* 808153A8  90 1E 00 0C */	stw r0, 0xc(r30)
/* 808153AC  38 7E 00 14 */	addi r3, r30, 0x14
/* 808153B0  38 80 FF FF */	li r4, -1
/* 808153B4  4B A5 9B 64 */	b __dt__8cM3dGCirFv
/* 808153B8  7F C3 F3 78 */	mr r3, r30
/* 808153BC  38 80 00 00 */	li r4, 0
/* 808153C0  4B A5 2C F0 */	b __dt__13cBgS_PolyInfoFv
/* 808153C4  7F E0 07 35 */	extsh. r0, r31
/* 808153C8  40 81 00 0C */	ble lbl_808153D4
/* 808153CC  7F C3 F3 78 */	mr r3, r30
/* 808153D0  4B AB 99 6C */	b __dl__FPv
lbl_808153D4:
/* 808153D4  7F C3 F3 78 */	mr r3, r30
/* 808153D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 808153DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 808153E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 808153E4  7C 08 03 A6 */	mtlr r0
/* 808153E8  38 21 00 10 */	addi r1, r1, 0x10
/* 808153EC  4E 80 00 20 */	blr 
