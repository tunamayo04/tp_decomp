lbl_802CF7AC:
/* 802CF7AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CF7B0  7C 08 02 A6 */	mflr r0
/* 802CF7B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CF7B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CF7BC  93 C1 00 08 */	stw r30, 8(r1)
/* 802CF7C0  7C 7E 1B 78 */	mr r30, r3
/* 802CF7C4  7C 9F 23 78 */	mr r31, r4
/* 802CF7C8  38 7E 00 18 */	addi r3, r30, 0x18
/* 802CF7CC  48 06 F8 75 */	bl OSLockMutex
/* 802CF7D0  80 1E 00 30 */	lwz r0, 0x30(r30)
/* 802CF7D4  7C 00 F8 40 */	cmplw r0, r31
/* 802CF7D8  41 81 00 28 */	bgt lbl_802CF800
/* 802CF7DC  80 1E 00 34 */	lwz r0, 0x34(r30)
/* 802CF7E0  7C 1F 00 40 */	cmplw r31, r0
/* 802CF7E4  41 81 00 1C */	bgt lbl_802CF800
/* 802CF7E8  7F E3 FB 78 */	mr r3, r31
/* 802CF7EC  48 00 11 31 */	bl getHeapBlock__Q210JKRExpHeap9CMemBlockFPv
/* 802CF7F0  28 03 00 00 */	cmplwi r3, 0
/* 802CF7F4  41 82 00 0C */	beq lbl_802CF800
/* 802CF7F8  7F C4 F3 78 */	mr r4, r30
/* 802CF7FC  48 00 10 D1 */	bl free__Q210JKRExpHeap9CMemBlockFP10JKRExpHeap
lbl_802CF800:
/* 802CF800  38 7E 00 18 */	addi r3, r30, 0x18
/* 802CF804  48 06 F9 19 */	bl OSUnlockMutex
/* 802CF808  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CF80C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CF810  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CF814  7C 08 03 A6 */	mtlr r0
/* 802CF818  38 21 00 10 */	addi r1, r1, 0x10
/* 802CF81C  4E 80 00 20 */	blr 
