lbl_80782650:
/* 80782650  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80782654  7C 08 02 A6 */	mflr r0
/* 80782658  90 01 00 24 */	stw r0, 0x24(r1)
/* 8078265C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80782660  7C 7F 1B 78 */	mr r31, r3
/* 80782664  80 03 05 C8 */	lwz r0, 0x5c8(r3)
/* 80782668  2C 00 00 00 */	cmpwi r0, 0
/* 8078266C  40 82 00 94 */	bne lbl_80782700
/* 80782670  38 00 00 00 */	li r0, 0
/* 80782674  90 01 00 08 */	stw r0, 8(r1)
/* 80782678  38 60 02 21 */	li r3, 0x221
/* 8078267C  38 80 00 00 */	li r4, 0
/* 80782680  38 BF 04 D0 */	addi r5, r31, 0x4d0
/* 80782684  38 C0 FF FF */	li r6, -1
/* 80782688  38 E0 00 00 */	li r7, 0
/* 8078268C  39 00 00 00 */	li r8, 0
/* 80782690  39 20 FF FF */	li r9, -1
/* 80782694  39 40 00 00 */	li r10, 0
/* 80782698  4B 89 77 6C */	b fopAcM_fastCreate__FsUlPC4cXyziPC5csXyzPC4cXyzScPFPv_iPv
/* 8078269C  80 1F 0A 5C */	lwz r0, 0xa5c(r31)
/* 807826A0  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 807826A4  90 1F 0A 5C */	stw r0, 0xa5c(r31)
/* 807826A8  80 1F 0A F8 */	lwz r0, 0xaf8(r31)
/* 807826AC  60 00 00 04 */	ori r0, r0, 4
/* 807826B0  90 1F 0A F8 */	stw r0, 0xaf8(r31)
/* 807826B4  7F E3 FB 78 */	mr r3, r31
/* 807826B8  38 80 00 06 */	li r4, 6
/* 807826BC  38 A0 00 00 */	li r5, 0
/* 807826C0  3C C0 80 78 */	lis r6, lit_3906@ha
/* 807826C4  C0 26 4D E8 */	lfs f1, lit_3906@l(r6)
/* 807826C8  3C C0 80 78 */	lis r6, l_HIO@ha
/* 807826CC  38 C6 4F 84 */	addi r6, r6, l_HIO@l
/* 807826D0  C0 46 00 28 */	lfs f2, 0x28(r6)
/* 807826D4  4B FF F3 79 */	bl SetAnm__8daE_SB_cFiiff
/* 807826D8  7F E3 FB 78 */	mr r3, r31
/* 807826DC  3C 80 00 01 */	lis r4, 0x0001 /* 0x00008475@ha */
/* 807826E0  38 84 84 75 */	addi r4, r4, 0x8475 /* 0x00008475@l */
/* 807826E4  4B FF F2 F9 */	bl Particle_Set__8daE_SB_cFUs
/* 807826E8  7F E3 FB 78 */	mr r3, r31
/* 807826EC  3C 80 00 01 */	lis r4, 0x0001 /* 0x00008476@ha */
/* 807826F0  38 84 84 76 */	addi r4, r4, 0x8476 /* 0x00008476@l */
/* 807826F4  4B FF F2 E9 */	bl Particle_Set__8daE_SB_cFUs
/* 807826F8  38 00 00 02 */	li r0, 2
/* 807826FC  90 1F 05 B0 */	stw r0, 0x5b0(r31)
lbl_80782700:
/* 80782700  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80782704  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80782708  7C 08 03 A6 */	mtlr r0
/* 8078270C  38 21 00 20 */	addi r1, r1, 0x20
/* 80782710  4E 80 00 20 */	blr 
