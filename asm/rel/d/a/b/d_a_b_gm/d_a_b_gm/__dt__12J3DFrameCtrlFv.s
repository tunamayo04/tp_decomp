lbl_805F3560:
/* 805F3560  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805F3564  7C 08 02 A6 */	mflr r0
/* 805F3568  90 01 00 14 */	stw r0, 0x14(r1)
/* 805F356C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805F3570  7C 7F 1B 79 */	or. r31, r3, r3
/* 805F3574  41 82 00 1C */	beq lbl_805F3590
/* 805F3578  3C A0 80 5F */	lis r5, __vt__12J3DFrameCtrl@ha
/* 805F357C  38 05 47 64 */	addi r0, r5, __vt__12J3DFrameCtrl@l
/* 805F3580  90 1F 00 00 */	stw r0, 0(r31)
/* 805F3584  7C 80 07 35 */	extsh. r0, r4
/* 805F3588  40 81 00 08 */	ble lbl_805F3590
/* 805F358C  4B CD B7 B0 */	b __dl__FPv
lbl_805F3590:
/* 805F3590  7F E3 FB 78 */	mr r3, r31
/* 805F3594  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 805F3598  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805F359C  7C 08 03 A6 */	mtlr r0
/* 805F35A0  38 21 00 10 */	addi r1, r1, 0x10
/* 805F35A4  4E 80 00 20 */	blr 
