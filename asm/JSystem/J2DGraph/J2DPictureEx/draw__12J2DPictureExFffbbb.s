lbl_8030708C:
/* 8030708C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80307090  7C 08 02 A6 */	mflr r0
/* 80307094  90 01 00 14 */	stw r0, 0x14(r1)
/* 80307098  7C 88 23 78 */	mr r8, r4
/* 8030709C  7C A0 2B 78 */	mr r0, r5
/* 803070A0  7C C7 33 78 */	mr r7, r6
/* 803070A4  38 80 00 00 */	li r4, 0
/* 803070A8  7D 05 43 78 */	mr r5, r8
/* 803070AC  7C 06 03 78 */	mr r6, r0
/* 803070B0  81 83 00 00 */	lwz r12, 0(r3)
/* 803070B4  81 8C 00 E8 */	lwz r12, 0xe8(r12)
/* 803070B8  7D 89 03 A6 */	mtctr r12
/* 803070BC  4E 80 04 21 */	bctrl 
/* 803070C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803070C4  7C 08 03 A6 */	mtlr r0
/* 803070C8  38 21 00 10 */	addi r1, r1, 0x10
/* 803070CC  4E 80 00 20 */	blr 
