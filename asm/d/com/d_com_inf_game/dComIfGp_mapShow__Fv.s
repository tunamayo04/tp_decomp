lbl_8002E048:
/* 8002E048  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002E04C  7C 08 02 A6 */	mflr r0
/* 8002E050  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002E054  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8002E058  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8002E05C  38 63 07 F0 */	addi r3, r3, 0x7f0
/* 8002E060  38 80 1D 01 */	li r4, 0x1d01
/* 8002E064  48 00 69 41 */	bl offEventBit__11dSv_event_cFUs
/* 8002E068  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002E06C  7C 08 03 A6 */	mtlr r0
/* 8002E070  38 21 00 10 */	addi r1, r1, 0x10
/* 8002E074  4E 80 00 20 */	blr 
