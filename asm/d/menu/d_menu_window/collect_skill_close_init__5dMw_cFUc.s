lbl_801FA850:
/* 801FA850  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FA854  7C 08 02 A6 */	mflr r0
/* 801FA858  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FA85C  38 00 00 A5 */	li r0, 0xa5
/* 801FA860  90 01 00 08 */	stw r0, 8(r1)
/* 801FA864  80 6D 8D E8 */	lwz r3, mAudioMgrPtr__10Z2AudioMgr(r13)
/* 801FA868  38 81 00 08 */	addi r4, r1, 8
/* 801FA86C  38 A0 00 00 */	li r5, 0
/* 801FA870  38 C0 00 00 */	li r6, 0
/* 801FA874  38 E0 00 00 */	li r7, 0
/* 801FA878  C0 22 AA C4 */	lfs f1, lit_4386(r2)
/* 801FA87C  FC 40 08 90 */	fmr f2, f1
/* 801FA880  C0 62 AA C8 */	lfs f3, lit_4387(r2)
/* 801FA884  FC 80 18 90 */	fmr f4, f3
/* 801FA888  39 00 00 00 */	li r8, 0
/* 801FA88C  48 0B 10 F9 */	bl seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 801FA890  48 02 41 41 */	bl dMeter2Info_set2DVibration__Fv
/* 801FA894  48 00 25 75 */	bl dMw_fade_out__5dMw_cFv
/* 801FA898  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FA89C  7C 08 03 A6 */	mtlr r0
/* 801FA8A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801FA8A4  4E 80 00 20 */	blr 
