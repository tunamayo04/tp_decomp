lbl_802CEE2C:
/* 802CEE2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802CEE30  7C 08 02 A6 */	mflr r0
/* 802CEE34  90 01 00 24 */	stw r0, 0x24(r1)
/* 802CEE38  39 61 00 20 */	addi r11, r1, 0x20
/* 802CEE3C  48 09 33 9D */	bl _savegpr_28
/* 802CEE40  7C 9C 23 79 */	or. r28, r4, r4
/* 802CEE44  7C BD 2B 78 */	mr r29, r5
/* 802CEE48  40 82 00 08 */	bne lbl_802CEE50
/* 802CEE4C  83 8D 8D F8 */	lwz r28, sRootHeap__7JKRHeap(r13)
lbl_802CEE50:
/* 802CEE50  3C 03 00 01 */	addis r0, r3, 1
/* 802CEE54  28 00 FF FF */	cmplwi r0, 0xffff
/* 802CEE58  40 82 00 10 */	bne lbl_802CEE68
/* 802CEE5C  7F 83 E3 78 */	mr r3, r28
/* 802CEE60  38 80 00 10 */	li r4, 0x10
/* 802CEE64  4B FF F9 79 */	bl getMaxAllocatableSize__7JKRHeapFi
lbl_802CEE68:
/* 802CEE68  54 7F 00 36 */	rlwinm r31, r3, 0, 0, 0x1b
/* 802CEE6C  28 1F 00 A0 */	cmplwi r31, 0xa0
/* 802CEE70  40 80 00 0C */	bge lbl_802CEE7C
/* 802CEE74  38 60 00 00 */	li r3, 0
/* 802CEE78  48 00 00 70 */	b lbl_802CEEE8
lbl_802CEE7C:
/* 802CEE7C  7F E3 FB 78 */	mr r3, r31
/* 802CEE80  38 80 00 10 */	li r4, 0x10
/* 802CEE84  7F 85 E3 78 */	mr r5, r28
/* 802CEE88  4B FF F5 ED */	bl alloc__7JKRHeapFUliP7JKRHeap
/* 802CEE8C  7C 60 1B 78 */	mr r0, r3
/* 802CEE90  7C 1E 03 79 */	or. r30, r0, r0
/* 802CEE94  38 9E 00 90 */	addi r4, r30, 0x90
/* 802CEE98  40 82 00 0C */	bne lbl_802CEEA4
/* 802CEE9C  38 60 00 00 */	li r3, 0
/* 802CEEA0  48 00 00 48 */	b lbl_802CEEE8
lbl_802CEEA4:
/* 802CEEA4  7F C5 F3 78 */	mr r5, r30
/* 802CEEA8  41 82 00 18 */	beq lbl_802CEEC0
/* 802CEEAC  38 BF FF 70 */	addi r5, r31, -144
/* 802CEEB0  7F 86 E3 78 */	mr r6, r28
/* 802CEEB4  7F A7 EB 78 */	mr r7, r29
/* 802CEEB8  48 00 01 79 */	bl __ct__10JKRExpHeapFPvUlP7JKRHeapb
/* 802CEEBC  7C 65 1B 78 */	mr r5, r3
lbl_802CEEC0:
/* 802CEEC0  28 05 00 00 */	cmplwi r5, 0
/* 802CEEC4  40 82 00 18 */	bne lbl_802CEEDC
/* 802CEEC8  7F C3 F3 78 */	mr r3, r30
/* 802CEECC  38 80 00 00 */	li r4, 0
/* 802CEED0  4B FF F6 31 */	bl free__7JKRHeapFPvP7JKRHeap
/* 802CEED4  38 60 00 00 */	li r3, 0
/* 802CEED8  48 00 00 10 */	b lbl_802CEEE8
lbl_802CEEDC:
/* 802CEEDC  38 00 00 00 */	li r0, 0
/* 802CEEE0  98 05 00 6E */	stb r0, 0x6e(r5)
/* 802CEEE4  7C A3 2B 78 */	mr r3, r5
lbl_802CEEE8:
/* 802CEEE8  39 61 00 20 */	addi r11, r1, 0x20
/* 802CEEEC  48 09 33 39 */	bl _restgpr_28
/* 802CEEF0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802CEEF4  7C 08 03 A6 */	mtlr r0
/* 802CEEF8  38 21 00 20 */	addi r1, r1, 0x20
/* 802CEEFC  4E 80 00 20 */	blr 
