lbl_805052F4:
/* 805052F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 805052F8  7C 08 02 A6 */	mflr r0
/* 805052FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80505300  39 61 00 20 */	addi r11, r1, 0x20
/* 80505304  4B E5 CE D4 */	b _savegpr_28
/* 80505308  2C 04 00 00 */	cmpwi r4, 0
/* 8050530C  40 82 00 DC */	bne lbl_805053E8
/* 80505310  A3 A3 00 14 */	lhz r29, 0x14(r3)
/* 80505314  3C 60 80 43 */	lis r3, j3dSys@ha
/* 80505318  38 63 4A C8 */	addi r3, r3, j3dSys@l
/* 8050531C  83 E3 00 38 */	lwz r31, 0x38(r3)
/* 80505320  83 9F 00 14 */	lwz r28, 0x14(r31)
/* 80505324  28 1C 00 00 */	cmplwi r28, 0
/* 80505328  41 82 00 C0 */	beq lbl_805053E8
/* 8050532C  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80505330  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80505334  1F DD 00 30 */	mulli r30, r29, 0x30
/* 80505338  7C 60 F2 14 */	add r3, r0, r30
/* 8050533C  3C 80 80 45 */	lis r4, calc_mtx@ha
/* 80505340  38 84 07 68 */	addi r4, r4, calc_mtx@l
/* 80505344  80 84 00 00 */	lwz r4, 0(r4)
/* 80505348  4B E4 11 68 */	b PSMTXCopy
/* 8050534C  2C 1D 00 01 */	cmpwi r29, 1
/* 80505350  41 82 00 0C */	beq lbl_8050535C
/* 80505354  2C 1D 00 02 */	cmpwi r29, 2
/* 80505358  40 82 00 28 */	bne lbl_80505380
lbl_8050535C:
/* 8050535C  3C 60 80 45 */	lis r3, calc_mtx@ha
/* 80505360  38 63 07 68 */	addi r3, r3, calc_mtx@l
/* 80505364  80 63 00 00 */	lwz r3, 0(r3)
/* 80505368  A8 1C 09 CA */	lha r0, 0x9ca(r28)
/* 8050536C  7C 00 1E 70 */	srawi r0, r0, 3
/* 80505370  7C 00 01 94 */	addze r0, r0
/* 80505374  7C 04 07 34 */	extsh r4, r0
/* 80505378  4B B0 70 24 */	b mDoMtx_XrotM__FPA4_fs
/* 8050537C  48 00 00 38 */	b lbl_805053B4
lbl_80505380:
/* 80505380  2C 1D 00 05 */	cmpwi r29, 5
/* 80505384  41 82 00 0C */	beq lbl_80505390
/* 80505388  2C 1D 00 06 */	cmpwi r29, 6
/* 8050538C  40 82 00 28 */	bne lbl_805053B4
lbl_80505390:
/* 80505390  3C 60 80 45 */	lis r3, calc_mtx@ha
/* 80505394  38 63 07 68 */	addi r3, r3, calc_mtx@l
/* 80505398  80 63 00 00 */	lwz r3, 0(r3)
/* 8050539C  A8 9C 09 CA */	lha r4, 0x9ca(r28)
/* 805053A0  38 00 00 03 */	li r0, 3
/* 805053A4  7C 04 03 D6 */	divw r0, r4, r0
/* 805053A8  7C 00 00 D0 */	neg r0, r0
/* 805053AC  7C 04 07 34 */	extsh r4, r0
/* 805053B0  4B B0 70 84 */	b mDoMtx_YrotM__FPA4_fs
lbl_805053B4:
/* 805053B4  3C 60 80 45 */	lis r3, calc_mtx@ha
/* 805053B8  38 63 07 68 */	addi r3, r3, calc_mtx@l
/* 805053BC  80 63 00 00 */	lwz r3, 0(r3)
/* 805053C0  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 805053C4  80 04 00 0C */	lwz r0, 0xc(r4)
/* 805053C8  7C 80 F2 14 */	add r4, r0, r30
/* 805053CC  4B E4 10 E4 */	b PSMTXCopy
/* 805053D0  3C 60 80 45 */	lis r3, calc_mtx@ha
/* 805053D4  38 63 07 68 */	addi r3, r3, calc_mtx@l
/* 805053D8  80 63 00 00 */	lwz r3, 0(r3)
/* 805053DC  3C 80 80 43 */	lis r4, mCurrentMtx__6J3DSys@ha
/* 805053E0  38 84 4B E4 */	addi r4, r4, mCurrentMtx__6J3DSys@l
/* 805053E4  4B E4 10 CC */	b PSMTXCopy
lbl_805053E8:
/* 805053E8  38 60 00 01 */	li r3, 1
/* 805053EC  39 61 00 20 */	addi r11, r1, 0x20
/* 805053F0  4B E5 CE 34 */	b _restgpr_28
/* 805053F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 805053F8  7C 08 03 A6 */	mtlr r0
/* 805053FC  38 21 00 20 */	addi r1, r1, 0x20
/* 80505400  4E 80 00 20 */	blr 
