lbl_807302E8:
/* 807302E8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 807302EC  7C 08 02 A6 */	mflr r0
/* 807302F0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 807302F4  39 61 00 A0 */	addi r11, r1, 0xa0
/* 807302F8  4B C3 1E E0 */	b _savegpr_28
/* 807302FC  7C 7E 1B 78 */	mr r30, r3
/* 80730300  3C 80 80 73 */	lis r4, lit_3911@ha
/* 80730304  3B 84 5B 28 */	addi r28, r4, lit_3911@l
/* 80730308  3B E0 00 00 */	li r31, 0
/* 8073030C  38 80 00 05 */	li r4, 5
/* 80730310  4B FF E0 0D */	bl checkBck__8daE_OC_cFi
/* 80730314  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80730318  41 82 02 78 */	beq lbl_80730590
/* 8073031C  80 7E 05 BC */	lwz r3, 0x5bc(r30)
/* 80730320  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80730324  C0 1C 00 C8 */	lfs f0, 0xc8(r28)
/* 80730328  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8073032C  4C 41 13 82 */	cror 2, 1, 2
/* 80730330  40 82 02 60 */	bne lbl_80730590
/* 80730334  C0 1C 01 18 */	lfs f0, 0x118(r28)
/* 80730338  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8073033C  4C 40 13 82 */	cror 2, 0, 2
/* 80730340  40 82 02 50 */	bne lbl_80730590
/* 80730344  38 61 00 3C */	addi r3, r1, 0x3c
/* 80730348  4B 94 72 34 */	b __ct__11dBgS_GndChkFv
/* 8073034C  80 7E 05 BC */	lwz r3, 0x5bc(r30)
/* 80730350  80 63 00 04 */	lwz r3, 4(r3)
/* 80730354  80 63 00 84 */	lwz r3, 0x84(r3)
/* 80730358  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8073035C  38 63 02 40 */	addi r3, r3, 0x240
/* 80730360  3C 80 80 3E */	lis r4, now__14mDoMtx_stack_c@ha
/* 80730364  38 84 D4 70 */	addi r4, r4, now__14mDoMtx_stack_c@l
/* 80730368  4B C1 61 48 */	b PSMTXCopy
/* 8073036C  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 80730370  3B A3 D4 70 */	addi r29, r3, now__14mDoMtx_stack_c@l
/* 80730374  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 80730378  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8073037C  C0 3D 00 1C */	lfs f1, 0x1c(r29)
/* 80730380  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 80730384  C0 1D 00 2C */	lfs f0, 0x2c(r29)
/* 80730388  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8073038C  C0 7C 00 00 */	lfs f3, 0(r28)
/* 80730390  EC 01 18 2A */	fadds f0, f1, f3
/* 80730394  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80730398  C0 3C 00 04 */	lfs f1, 4(r28)
/* 8073039C  FC 40 08 90 */	fmr f2, f1
/* 807303A0  4B 8D C9 FC */	b transM__14mDoMtx_stack_cFfff
/* 807303A4  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 807303A8  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 807303AC  C0 3D 00 1C */	lfs f1, 0x1c(r29)
/* 807303B0  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 807303B4  C0 1D 00 2C */	lfs f0, 0x2c(r29)
/* 807303B8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 807303BC  C0 1C 00 00 */	lfs f0, 0(r28)
/* 807303C0  EC 01 00 2A */	fadds f0, f1, f0
/* 807303C4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 807303C8  38 61 00 3C */	addi r3, r1, 0x3c
/* 807303CC  38 81 00 30 */	addi r4, r1, 0x30
/* 807303D0  4B B3 79 58 */	b SetPos__11cBgS_GndChkFPC4cXyz
/* 807303D4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 807303D8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 807303DC  3B A3 0F 38 */	addi r29, r3, 0xf38
/* 807303E0  7F A3 EB 78 */	mr r3, r29
/* 807303E4  38 81 00 3C */	addi r4, r1, 0x3c
/* 807303E8  4B 94 40 B8 */	b GroundCross__4cBgSFP11cBgS_GndChk
/* 807303EC  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 807303F0  C0 5C 00 A8 */	lfs f2, 0xa8(r28)
/* 807303F4  FC 00 08 18 */	frsp f0, f1
/* 807303F8  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 807303FC  41 82 01 88 */	beq lbl_80730584
/* 80730400  38 61 00 3C */	addi r3, r1, 0x3c
/* 80730404  38 81 00 24 */	addi r4, r1, 0x24
/* 80730408  4B B3 79 20 */	b SetPos__11cBgS_GndChkFPC4cXyz
/* 8073040C  7F A3 EB 78 */	mr r3, r29
/* 80730410  38 81 00 3C */	addi r4, r1, 0x3c
/* 80730414  4B 94 40 8C */	b GroundCross__4cBgSFP11cBgS_GndChk
/* 80730418  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8073041C  C0 5C 00 A8 */	lfs f2, 0xa8(r28)
/* 80730420  FC 00 08 18 */	frsp f0, f1
/* 80730424  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 80730428  41 82 01 5C */	beq lbl_80730584
/* 8073042C  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 80730430  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80730434  C0 3C 00 04 */	lfs f1, 4(r28)
/* 80730438  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8073043C  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80730440  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80730444  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80730448  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8073044C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80730450  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80730454  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80730458  38 61 00 0C */	addi r3, r1, 0xc
/* 8073045C  38 81 00 18 */	addi r4, r1, 0x18
/* 80730460  4B C1 6F 3C */	b PSVECSquareDistance
/* 80730464  C0 1C 00 04 */	lfs f0, 4(r28)
/* 80730468  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8073046C  40 81 00 58 */	ble lbl_807304C4
/* 80730470  FC 00 08 34 */	frsqrte f0, f1
/* 80730474  C8 9C 00 10 */	lfd f4, 0x10(r28)
/* 80730478  FC 44 00 32 */	fmul f2, f4, f0
/* 8073047C  C8 7C 00 18 */	lfd f3, 0x18(r28)
/* 80730480  FC 00 00 32 */	fmul f0, f0, f0
/* 80730484  FC 01 00 32 */	fmul f0, f1, f0
/* 80730488  FC 03 00 28 */	fsub f0, f3, f0
/* 8073048C  FC 02 00 32 */	fmul f0, f2, f0
/* 80730490  FC 44 00 32 */	fmul f2, f4, f0
/* 80730494  FC 00 00 32 */	fmul f0, f0, f0
/* 80730498  FC 01 00 32 */	fmul f0, f1, f0
/* 8073049C  FC 03 00 28 */	fsub f0, f3, f0
/* 807304A0  FC 02 00 32 */	fmul f0, f2, f0
/* 807304A4  FC 44 00 32 */	fmul f2, f4, f0
/* 807304A8  FC 00 00 32 */	fmul f0, f0, f0
/* 807304AC  FC 01 00 32 */	fmul f0, f1, f0
/* 807304B0  FC 03 00 28 */	fsub f0, f3, f0
/* 807304B4  FC 02 00 32 */	fmul f0, f2, f0
/* 807304B8  FC 41 00 32 */	fmul f2, f1, f0
/* 807304BC  FC 40 10 18 */	frsp f2, f2
/* 807304C0  48 00 00 90 */	b lbl_80730550
lbl_807304C4:
/* 807304C4  C8 1C 00 20 */	lfd f0, 0x20(r28)
/* 807304C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 807304CC  40 80 00 10 */	bge lbl_807304DC
/* 807304D0  3C 60 80 45 */	lis r3, __float_nan@ha
/* 807304D4  C0 43 0A E0 */	lfs f2, __float_nan@l(r3)
/* 807304D8  48 00 00 78 */	b lbl_80730550
lbl_807304DC:
/* 807304DC  D0 21 00 08 */	stfs f1, 8(r1)
/* 807304E0  80 81 00 08 */	lwz r4, 8(r1)
/* 807304E4  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 807304E8  3C 00 7F 80 */	lis r0, 0x7f80
/* 807304EC  7C 03 00 00 */	cmpw r3, r0
/* 807304F0  41 82 00 14 */	beq lbl_80730504
/* 807304F4  40 80 00 40 */	bge lbl_80730534
/* 807304F8  2C 03 00 00 */	cmpwi r3, 0
/* 807304FC  41 82 00 20 */	beq lbl_8073051C
/* 80730500  48 00 00 34 */	b lbl_80730534
lbl_80730504:
/* 80730504  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80730508  41 82 00 0C */	beq lbl_80730514
/* 8073050C  38 00 00 01 */	li r0, 1
/* 80730510  48 00 00 28 */	b lbl_80730538
lbl_80730514:
/* 80730514  38 00 00 02 */	li r0, 2
/* 80730518  48 00 00 20 */	b lbl_80730538
lbl_8073051C:
/* 8073051C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80730520  41 82 00 0C */	beq lbl_8073052C
/* 80730524  38 00 00 05 */	li r0, 5
/* 80730528  48 00 00 10 */	b lbl_80730538
lbl_8073052C:
/* 8073052C  38 00 00 03 */	li r0, 3
/* 80730530  48 00 00 08 */	b lbl_80730538
lbl_80730534:
/* 80730534  38 00 00 04 */	li r0, 4
lbl_80730538:
/* 80730538  2C 00 00 01 */	cmpwi r0, 1
/* 8073053C  40 82 00 10 */	bne lbl_8073054C
/* 80730540  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80730544  C0 43 0A E0 */	lfs f2, __float_nan@l(r3)
/* 80730548  48 00 00 08 */	b lbl_80730550
lbl_8073054C:
/* 8073054C  FC 40 08 90 */	fmr f2, f1
lbl_80730550:
/* 80730550  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 80730554  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80730558  EC 21 00 28 */	fsubs f1, f1, f0
/* 8073055C  4B B3 71 18 */	b cM_atan2s__Fff
/* 80730560  7C 03 00 D0 */	neg r0, r3
/* 80730564  7C 1F 07 34 */	extsh r31, r0
/* 80730568  2C 1F E0 00 */	cmpwi r31, -8192
/* 8073056C  40 80 00 08 */	bge lbl_80730574
/* 80730570  3B E0 E0 00 */	li r31, -8192
lbl_80730574:
/* 80730574  7F E0 07 34 */	extsh r0, r31
/* 80730578  2C 00 20 00 */	cmpwi r0, 0x2000
/* 8073057C  40 81 00 08 */	ble lbl_80730584
/* 80730580  3B E0 20 00 */	li r31, 0x2000
lbl_80730584:
/* 80730584  38 61 00 3C */	addi r3, r1, 0x3c
/* 80730588  38 80 FF FF */	li r4, -1
/* 8073058C  4B 94 70 64 */	b __dt__11dBgS_GndChkFv
lbl_80730590:
/* 80730590  38 7E 06 D0 */	addi r3, r30, 0x6d0
/* 80730594  7F E4 FB 78 */	mr r4, r31
/* 80730598  38 A0 00 04 */	li r5, 4
/* 8073059C  38 C0 10 00 */	li r6, 0x1000
/* 807305A0  38 E0 01 00 */	li r7, 0x100
/* 807305A4  4B B3 FF 9C */	b cLib_addCalcAngleS__FPsssss
/* 807305A8  39 61 00 A0 */	addi r11, r1, 0xa0
/* 807305AC  4B C3 1C 78 */	b _restgpr_28
/* 807305B0  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 807305B4  7C 08 03 A6 */	mtlr r0
/* 807305B8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 807305BC  4E 80 00 20 */	blr 
