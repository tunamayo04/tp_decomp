lbl_802904E4:
/* 802904E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802904E8  7C 08 02 A6 */	mflr r0
/* 802904EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802904F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802904F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802904F8  7C 7E 1B 78 */	mr r30, r3
/* 802904FC  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80290500  90 61 00 08 */	stw r3, 8(r1)
/* 80290504  48 0A EB 3D */	bl OSLockMutex
/* 80290508  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 8029050C  28 00 00 00 */	cmplwi r0, 0
/* 80290510  40 82 00 14 */	bne lbl_80290524
/* 80290514  80 61 00 08 */	lwz r3, 8(r1)
/* 80290518  48 0A EC 05 */	bl OSUnlockMutex
/* 8029051C  38 60 00 00 */	li r3, 0
/* 80290520  48 00 00 D0 */	b lbl_802905F0
lbl_80290524:
/* 80290524  80 7E 00 00 */	lwz r3, 0(r30)
/* 80290528  28 03 00 00 */	cmplwi r3, 0
/* 8029052C  41 82 00 28 */	beq lbl_80290554
/* 80290530  38 63 FF F4 */	addi r3, r3, -12
/* 80290534  48 00 00 20 */	b lbl_80290554
lbl_80290538:
/* 80290538  83 E3 00 18 */	lwz r31, 0x18(r3)
/* 8029053C  28 1F 00 00 */	cmplwi r31, 0
/* 80290540  41 82 00 08 */	beq lbl_80290548
/* 80290544  3B FF FF F4 */	addi r31, r31, -12
lbl_80290548:
/* 80290548  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8029054C  4B FF FF 99 */	bl free__7JASHeapFv
/* 80290550  7F E3 FB 78 */	mr r3, r31
lbl_80290554:
/* 80290554  28 03 00 00 */	cmplwi r3, 0
/* 80290558  40 82 FF E0 */	bne lbl_80290538
/* 8029055C  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80290560  28 03 00 00 */	cmplwi r3, 0
/* 80290564  41 82 00 54 */	beq lbl_802905B8
/* 80290568  80 83 00 0C */	lwz r4, 0xc(r3)
/* 8029056C  80 04 00 40 */	lwz r0, 0x40(r4)
/* 80290570  7C 00 F0 40 */	cmplw r0, r30
/* 80290574  40 82 00 30 */	bne lbl_802905A4
/* 80290578  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 8029057C  28 05 00 00 */	cmplwi r5, 0
/* 80290580  41 82 00 08 */	beq lbl_80290588
/* 80290584  38 A5 FF F4 */	addi r5, r5, -12
lbl_80290588:
/* 80290588  28 05 00 00 */	cmplwi r5, 0
/* 8029058C  41 82 00 10 */	beq lbl_8029059C
/* 80290590  80 05 00 0C */	lwz r0, 0xc(r5)
/* 80290594  90 04 00 40 */	stw r0, 0x40(r4)
/* 80290598  48 00 00 0C */	b lbl_802905A4
lbl_8029059C:
/* 8029059C  38 00 00 00 */	li r0, 0
/* 802905A0  90 04 00 40 */	stw r0, 0x40(r4)
lbl_802905A4:
/* 802905A4  7F C4 F3 78 */	mr r4, r30
/* 802905A8  28 1E 00 00 */	cmplwi r30, 0
/* 802905AC  41 82 00 08 */	beq lbl_802905B4
/* 802905B0  38 9E 00 0C */	addi r4, r30, 0xc
lbl_802905B4:
/* 802905B4  48 04 BB A9 */	bl remove__10JSUPtrListFP10JSUPtrLink
lbl_802905B8:
/* 802905B8  38 00 00 00 */	li r0, 0
/* 802905BC  90 1E 00 38 */	stw r0, 0x38(r30)
/* 802905C0  90 1E 00 40 */	stw r0, 0x40(r30)
/* 802905C4  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 802905C8  80 7E 00 34 */	lwz r3, 0x34(r30)
/* 802905CC  28 03 00 00 */	cmplwi r3, 0
/* 802905D0  41 82 00 14 */	beq lbl_802905E4
/* 802905D4  81 83 00 00 */	lwz r12, 0(r3)
/* 802905D8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802905DC  7D 89 03 A6 */	mtctr r12
/* 802905E0  4E 80 04 21 */	bctrl 
lbl_802905E4:
/* 802905E4  80 61 00 08 */	lwz r3, 8(r1)
/* 802905E8  48 0A EB 35 */	bl OSUnlockMutex
/* 802905EC  38 60 00 01 */	li r3, 1
lbl_802905F0:
/* 802905F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802905F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802905F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802905FC  7C 08 03 A6 */	mtlr r0
/* 80290600  38 21 00 20 */	addi r1, r1, 0x20
/* 80290604  4E 80 00 20 */	blr 
