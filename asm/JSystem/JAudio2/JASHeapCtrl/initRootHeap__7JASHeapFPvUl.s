lbl_802901AC:
/* 802901AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802901B0  7C 08 02 A6 */	mflr r0
/* 802901B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802901B8  39 61 00 20 */	addi r11, r1, 0x20
/* 802901BC  48 0D 20 21 */	bl _savegpr_29
/* 802901C0  7C 7D 1B 78 */	mr r29, r3
/* 802901C4  7C 9E 23 78 */	mr r30, r4
/* 802901C8  7C BF 2B 78 */	mr r31, r5
/* 802901CC  38 7D 00 1C */	addi r3, r29, 0x1c
/* 802901D0  90 61 00 08 */	stw r3, 8(r1)
/* 802901D4  48 0A EE 6D */	bl OSLockMutex
/* 802901D8  38 1E 00 1F */	addi r0, r30, 0x1f
/* 802901DC  54 00 00 34 */	rlwinm r0, r0, 0, 0, 0x1a
/* 802901E0  90 1D 00 38 */	stw r0, 0x38(r29)
/* 802901E4  38 00 00 00 */	li r0, 0
/* 802901E8  90 1D 00 40 */	stw r0, 0x40(r29)
/* 802901EC  80 1D 00 38 */	lwz r0, 0x38(r29)
/* 802901F0  7C 1E 00 50 */	subf r0, r30, r0
/* 802901F4  7C 00 F8 50 */	subf r0, r0, r31
/* 802901F8  90 1D 00 3C */	stw r0, 0x3c(r29)
/* 802901FC  80 61 00 08 */	lwz r3, 8(r1)
/* 80290200  48 0A EF 1D */	bl OSUnlockMutex
/* 80290204  39 61 00 20 */	addi r11, r1, 0x20
/* 80290208  48 0D 20 21 */	bl _restgpr_29
/* 8029020C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80290210  7C 08 03 A6 */	mtlr r0
/* 80290214  38 21 00 20 */	addi r1, r1, 0x20
/* 80290218  4E 80 00 20 */	blr 
