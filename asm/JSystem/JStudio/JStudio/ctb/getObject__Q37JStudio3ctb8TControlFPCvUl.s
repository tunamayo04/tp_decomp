lbl_80281190:
/* 80281190  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80281194  7C 08 02 A6 */	mflr r0
/* 80281198  90 01 00 54 */	stw r0, 0x54(r1)
/* 8028119C  80 C3 00 0C */	lwz r6, 0xc(r3)
/* 802811A0  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 802811A4  90 C1 00 18 */	stw r6, 0x18(r1)
/* 802811A8  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 802811AC  38 03 00 0C */	addi r0, r3, 0xc
/* 802811B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802811B4  90 01 00 10 */	stw r0, 0x10(r1)
/* 802811B8  90 01 00 38 */	stw r0, 0x38(r1)
/* 802811BC  90 81 00 40 */	stw r4, 0x40(r1)
/* 802811C0  90 A1 00 44 */	stw r5, 0x44(r1)
/* 802811C4  90 01 00 28 */	stw r0, 0x28(r1)
/* 802811C8  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 802811CC  38 61 00 30 */	addi r3, r1, 0x30
/* 802811D0  38 81 00 2C */	addi r4, r1, 0x2c
/* 802811D4  38 A1 00 28 */	addi r5, r1, 0x28
/* 802811D8  38 C1 00 40 */	addi r6, r1, 0x40
/* 802811DC  48 00 03 D9 */	bl func_802815B4
/* 802811E0  80 61 00 30 */	lwz r3, 0x30(r1)
/* 802811E4  90 61 00 34 */	stw r3, 0x34(r1)
/* 802811E8  80 01 00 38 */	lwz r0, 0x38(r1)
/* 802811EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802811F0  90 61 00 20 */	stw r3, 0x20(r1)
/* 802811F4  90 01 00 0C */	stw r0, 0xc(r1)
/* 802811F8  90 61 00 08 */	stw r3, 8(r1)
/* 802811FC  7C 03 00 50 */	subf r0, r3, r0
/* 80281200  7C 00 00 34 */	cntlzw r0, r0
/* 80281204  54 00 DE 3E */	rlwinm r0, r0, 0x1b, 0x18, 0x1f
/* 80281208  7C 00 00 34 */	cntlzw r0, r0
/* 8028120C  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 80281210  41 82 00 0C */	beq lbl_8028121C
/* 80281214  38 63 FF F4 */	addi r3, r3, -12
/* 80281218  48 00 00 08 */	b lbl_80281220
lbl_8028121C:
/* 8028121C  38 60 00 00 */	li r3, 0
lbl_80281220:
/* 80281220  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80281224  7C 08 03 A6 */	mtlr r0
/* 80281228  38 21 00 50 */	addi r1, r1, 0x50
/* 8028122C  4E 80 00 20 */	blr 
