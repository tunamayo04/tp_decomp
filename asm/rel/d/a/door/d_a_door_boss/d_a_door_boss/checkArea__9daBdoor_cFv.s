lbl_806700C4:
/* 806700C4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 806700C8  7C 08 02 A6 */	mflr r0
/* 806700CC  90 01 00 44 */	stw r0, 0x44(r1)
/* 806700D0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 806700D4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 806700D8  7C 7E 1B 78 */	mr r30, r3
/* 806700DC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 806700E0  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 806700E4  83 E3 5D AC */	lwz r31, 0x5dac(r3)
/* 806700E8  38 61 00 08 */	addi r3, r1, 8
/* 806700EC  38 9F 04 D0 */	addi r4, r31, 0x4d0
/* 806700F0  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 806700F4  4B BF 6A 40 */	b __mi__4cXyzCFRC3Vec
/* 806700F8  C0 01 00 08 */	lfs f0, 8(r1)
/* 806700FC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80670100  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80670104  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80670108  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8067010C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80670110  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 80670114  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 80670118  A8 1E 04 DE */	lha r0, 0x4de(r30)
/* 8067011C  7C 00 00 D0 */	neg r0, r0
/* 80670120  7C 04 07 34 */	extsh r4, r0
/* 80670124  4B 99 C2 B8 */	b mDoMtx_YrotS__FPA4_fs
/* 80670128  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 8067012C  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 80670130  38 81 00 14 */	addi r4, r1, 0x14
/* 80670134  7C 85 23 78 */	mr r5, r4
/* 80670138  4B CD 6C 34 */	b PSMTXMultVec
/* 8067013C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80670140  FC 00 02 10 */	fabs f0, f0
/* 80670144  FC 20 00 18 */	frsp f1, f0
/* 80670148  3C 60 80 67 */	lis r3, lit_4028@ha
/* 8067014C  C0 03 09 40 */	lfs f0, lit_4028@l(r3)
/* 80670150  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80670154  40 81 00 0C */	ble lbl_80670160
/* 80670158  38 60 00 00 */	li r3, 0
/* 8067015C  48 00 00 80 */	b lbl_806701DC
lbl_80670160:
/* 80670160  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80670164  FC 00 02 10 */	fabs f0, f0
/* 80670168  FC 20 00 18 */	frsp f1, f0
/* 8067016C  3C 60 80 67 */	lis r3, lit_4029@ha
/* 80670170  C0 03 09 44 */	lfs f0, lit_4029@l(r3)
/* 80670174  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80670178  40 81 00 0C */	ble lbl_80670184
/* 8067017C  38 60 00 00 */	li r3, 0
/* 80670180  48 00 00 5C */	b lbl_806701DC
lbl_80670184:
/* 80670184  A8 9F 04 DE */	lha r4, 0x4de(r31)
/* 80670188  A8 7E 04 DE */	lha r3, 0x4de(r30)
/* 8067018C  38 03 80 01 */	addi r0, r3, -32767
/* 80670190  7C 04 00 50 */	subf r0, r4, r0
/* 80670194  3C 60 80 67 */	lis r3, lit_4031@ha
/* 80670198  C8 23 09 4C */	lfd f1, lit_4031@l(r3)
/* 8067019C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 806701A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 806701A4  3C 00 43 30 */	lis r0, 0x4330
/* 806701A8  90 01 00 20 */	stw r0, 0x20(r1)
/* 806701AC  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 806701B0  FC 00 08 28 */	fsub f0, f0, f1
/* 806701B4  FC 00 02 10 */	fabs f0, f0
/* 806701B8  FC 00 00 1E */	fctiwz f0, f0
/* 806701BC  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 806701C0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 806701C4  7C 05 07 34 */	extsh r5, r0
/* 806701C8  38 00 40 00 */	li r0, 0x4000
/* 806701CC  7C 04 FE 70 */	srawi r4, r0, 0x1f
/* 806701D0  54 A3 0F FE */	srwi r3, r5, 0x1f
/* 806701D4  7C 05 00 10 */	subfc r0, r5, r0
/* 806701D8  7C 64 19 14 */	adde r3, r4, r3
lbl_806701DC:
/* 806701DC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 806701E0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 806701E4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 806701E8  7C 08 03 A6 */	mtlr r0
/* 806701EC  38 21 00 40 */	addi r1, r1, 0x40
/* 806701F0  4E 80 00 20 */	blr 
