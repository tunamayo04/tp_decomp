lbl_80735558:
/* 80735558  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8073555C  7C 08 02 A6 */	mflr r0
/* 80735560  90 01 00 14 */	stw r0, 0x14(r1)
/* 80735564  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80735568  93 C1 00 08 */	stw r30, 8(r1)
/* 8073556C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80735570  7C 9F 23 78 */	mr r31, r4
/* 80735574  41 82 00 38 */	beq lbl_807355AC
/* 80735578  3C 60 80 73 */	lis r3, __vt__12dBgS_AcchCir@ha
/* 8073557C  38 03 5F 80 */	addi r0, r3, __vt__12dBgS_AcchCir@l
/* 80735580  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80735584  38 7E 00 14 */	addi r3, r30, 0x14
/* 80735588  38 80 FF FF */	li r4, -1
/* 8073558C  4B B3 99 8C */	b __dt__8cM3dGCirFv
/* 80735590  7F C3 F3 78 */	mr r3, r30
/* 80735594  38 80 00 00 */	li r4, 0
/* 80735598  4B B3 2B 18 */	b __dt__13cBgS_PolyInfoFv
/* 8073559C  7F E0 07 35 */	extsh. r0, r31
/* 807355A0  40 81 00 0C */	ble lbl_807355AC
/* 807355A4  7F C3 F3 78 */	mr r3, r30
/* 807355A8  4B B9 97 94 */	b __dl__FPv
lbl_807355AC:
/* 807355AC  7F C3 F3 78 */	mr r3, r30
/* 807355B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807355B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 807355B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807355BC  7C 08 03 A6 */	mtlr r0
/* 807355C0  38 21 00 10 */	addi r1, r1, 0x10
/* 807355C4  4E 80 00 20 */	blr 
