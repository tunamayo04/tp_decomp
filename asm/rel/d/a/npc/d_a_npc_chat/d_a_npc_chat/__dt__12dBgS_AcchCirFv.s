lbl_80986264:
/* 80986264  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80986268  7C 08 02 A6 */	mflr r0
/* 8098626C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80986270  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80986274  93 C1 00 08 */	stw r30, 8(r1)
/* 80986278  7C 7E 1B 79 */	or. r30, r3, r3
/* 8098627C  7C 9F 23 78 */	mr r31, r4
/* 80986280  41 82 00 38 */	beq lbl_809862B8
/* 80986284  3C 60 80 99 */	lis r3, __vt__12dBgS_AcchCir@ha
/* 80986288  38 03 BA 2C */	addi r0, r3, __vt__12dBgS_AcchCir@l
/* 8098628C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80986290  38 7E 00 14 */	addi r3, r30, 0x14
/* 80986294  38 80 FF FF */	li r4, -1
/* 80986298  4B 8E 8C 80 */	b __dt__8cM3dGCirFv
/* 8098629C  7F C3 F3 78 */	mr r3, r30
/* 809862A0  38 80 00 00 */	li r4, 0
/* 809862A4  4B 8E 1E 0C */	b __dt__13cBgS_PolyInfoFv
/* 809862A8  7F E0 07 35 */	extsh. r0, r31
/* 809862AC  40 81 00 0C */	ble lbl_809862B8
/* 809862B0  7F C3 F3 78 */	mr r3, r30
/* 809862B4  4B 94 8A 88 */	b __dl__FPv
lbl_809862B8:
/* 809862B8  7F C3 F3 78 */	mr r3, r30
/* 809862BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809862C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 809862C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809862C8  7C 08 03 A6 */	mtlr r0
/* 809862CC  38 21 00 10 */	addi r1, r1, 0x10
/* 809862D0  4E 80 00 20 */	blr 
