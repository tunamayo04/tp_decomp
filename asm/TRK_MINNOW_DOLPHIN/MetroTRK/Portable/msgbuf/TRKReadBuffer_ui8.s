lbl_8036D10C:
/* 8036D10C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8036D110  7C 08 02 A6 */	mflr r0
/* 8036D114  90 01 00 24 */	stw r0, 0x24(r1)
/* 8036D118  BF 41 00 08 */	stmw r26, 8(r1)
/* 8036D11C  7C 7A 1B 78 */	mr r26, r3
/* 8036D120  7C 9B 23 78 */	mr r27, r4
/* 8036D124  7C BC 2B 78 */	mr r28, r5
/* 8036D128  3B A0 00 00 */	li r29, 0
/* 8036D12C  38 60 00 00 */	li r3, 0
/* 8036D130  48 00 00 50 */	b lbl_8036D180
lbl_8036D134:
/* 8036D134  80 7A 00 0C */	lwz r3, 0xc(r26)
/* 8036D138  3B C0 00 01 */	li r30, 1
/* 8036D13C  80 1A 00 08 */	lwz r0, 8(r26)
/* 8036D140  3B E0 00 00 */	li r31, 0
/* 8036D144  7C 03 00 50 */	subf r0, r3, r0
/* 8036D148  7C 1E 00 40 */	cmplw r30, r0
/* 8036D14C  40 81 00 0C */	ble lbl_8036D158
/* 8036D150  3B E0 03 02 */	li r31, 0x302
/* 8036D154  7C 1E 03 78 */	mr r30, r0
lbl_8036D158:
/* 8036D158  38 83 00 10 */	addi r4, r3, 0x10
/* 8036D15C  7F C5 F3 78 */	mr r5, r30
/* 8036D160  7C 7B EA 14 */	add r3, r27, r29
/* 8036D164  7C 9A 22 14 */	add r4, r26, r4
/* 8036D168  4B C9 64 59 */	bl TRK_memcpy
/* 8036D16C  80 1A 00 0C */	lwz r0, 0xc(r26)
/* 8036D170  7F E3 FB 78 */	mr r3, r31
/* 8036D174  3B BD 00 01 */	addi r29, r29, 1
/* 8036D178  7C 00 F2 14 */	add r0, r0, r30
/* 8036D17C  90 1A 00 0C */	stw r0, 0xc(r26)
lbl_8036D180:
/* 8036D180  2C 03 00 00 */	cmpwi r3, 0
/* 8036D184  40 82 00 0C */	bne lbl_8036D190
/* 8036D188  7C 1D E0 00 */	cmpw r29, r28
/* 8036D18C  41 80 FF A8 */	blt lbl_8036D134
lbl_8036D190:
/* 8036D190  BB 41 00 08 */	lmw r26, 8(r1)
/* 8036D194  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8036D198  7C 08 03 A6 */	mtlr r0
/* 8036D19C  38 21 00 20 */	addi r1, r1, 0x20
/* 8036D1A0  4E 80 00 20 */	blr 
