lbl_802F0660:
/* 802F0660  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F0664  7C 08 02 A6 */	mflr r0
/* 802F0668  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F066C  39 61 00 20 */	addi r11, r1, 0x20
/* 802F0670  48 07 1B 69 */	bl _savegpr_28
/* 802F0674  7C 7C 1B 78 */	mr r28, r3
/* 802F0678  3B A0 00 00 */	li r29, 0
/* 802F067C  54 9F 06 3E */	clrlwi r31, r4, 0x18
/* 802F0680  48 00 00 88 */	b lbl_802F0708
lbl_802F0684:
/* 802F0684  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 802F0688  28 00 00 08 */	cmplwi r0, 8
/* 802F068C  41 80 00 0C */	blt lbl_802F0698
/* 802F0690  38 60 00 00 */	li r3, 0
/* 802F0694  48 00 00 84 */	b lbl_802F0718
lbl_802F0698:
/* 802F0698  57 A3 15 BA */	rlwinm r3, r29, 2, 0x16, 0x1d
/* 802F069C  3B C3 01 6C */	addi r30, r3, 0x16c
/* 802F06A0  7C 1C F0 2E */	lwzx r0, r28, r30
/* 802F06A4  28 00 00 00 */	cmplwi r0, 0
/* 802F06A8  40 82 00 5C */	bne lbl_802F0704
/* 802F06AC  38 60 00 40 */	li r3, 0x40
/* 802F06B0  4B FD E5 9D */	bl __nw__FUl
/* 802F06B4  28 03 00 00 */	cmplwi r3, 0
/* 802F06B8  41 82 00 1C */	beq lbl_802F06D4
/* 802F06BC  88 03 00 3B */	lbz r0, 0x3b(r3)
/* 802F06C0  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 802F06C4  98 03 00 3B */	stb r0, 0x3b(r3)
/* 802F06C8  38 00 00 00 */	li r0, 0
/* 802F06CC  90 03 00 28 */	stw r0, 0x28(r3)
/* 802F06D0  90 03 00 20 */	stw r0, 0x20(r3)
lbl_802F06D4:
/* 802F06D4  7C 7C F1 2E */	stwx r3, r28, r30
/* 802F06D8  7C 1C F0 2E */	lwzx r0, r28, r30
/* 802F06DC  28 00 00 00 */	cmplwi r0, 0
/* 802F06E0  40 82 00 0C */	bne lbl_802F06EC
/* 802F06E4  38 60 00 00 */	li r3, 0
/* 802F06E8  48 00 00 30 */	b lbl_802F0718
lbl_802F06EC:
/* 802F06EC  88 9C 01 B0 */	lbz r4, 0x1b0(r28)
/* 802F06F0  38 60 00 01 */	li r3, 1
/* 802F06F4  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 802F06F8  7C 60 00 30 */	slw r0, r3, r0
/* 802F06FC  7C 80 03 78 */	or r0, r4, r0
/* 802F0700  98 1C 01 B0 */	stb r0, 0x1b0(r28)
lbl_802F0704:
/* 802F0704  3B BD 00 01 */	addi r29, r29, 1
lbl_802F0708:
/* 802F0708  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 802F070C  7C 00 F8 40 */	cmplw r0, r31
/* 802F0710  41 80 FF 74 */	blt lbl_802F0684
/* 802F0714  38 60 00 01 */	li r3, 1
lbl_802F0718:
/* 802F0718  39 61 00 20 */	addi r11, r1, 0x20
/* 802F071C  48 07 1B 09 */	bl _restgpr_28
/* 802F0720  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F0724  7C 08 03 A6 */	mtlr r0
/* 802F0728  38 21 00 20 */	addi r1, r1, 0x20
/* 802F072C  4E 80 00 20 */	blr 
