lbl_80567280:
/* 80567280  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80567284  7C 08 02 A6 */	mflr r0
/* 80567288  90 01 00 34 */	stw r0, 0x34(r1)
/* 8056728C  39 61 00 30 */	addi r11, r1, 0x30
/* 80567290  4B DF AF 38 */	b _savegpr_24
/* 80567294  7C 7D 1B 78 */	mr r29, r3
/* 80567298  3C 80 80 57 */	lis r4, m__18daNpc_Taro_Param_c@ha
/* 8056729C  3B C4 16 C8 */	addi r30, r4, m__18daNpc_Taro_Param_c@l
/* 805672A0  3C 80 80 57 */	lis r4, cNullVec__6Z2Calc@ha
/* 805672A4  3B E4 1B C8 */	addi r31, r4, cNullVec__6Z2Calc@l
/* 805672A8  48 00 14 91 */	bl selectAction__12daNpc_Taro_cFv
/* 805672AC  7F A3 EB 78 */	mr r3, r29
/* 805672B0  48 00 03 CD */	bl srchActors__12daNpc_Taro_cFv
/* 805672B4  3B 80 00 0A */	li r28, 0xa
/* 805672B8  38 7E 00 00 */	addi r3, r30, 0
/* 805672BC  AB 63 00 48 */	lha r27, 0x48(r3)
/* 805672C0  AB 43 00 4A */	lha r26, 0x4a(r3)
/* 805672C4  AB 23 00 4C */	lha r25, 0x4c(r3)
/* 805672C8  AB 03 00 4E */	lha r24, 0x4e(r3)
/* 805672CC  88 1D 10 C4 */	lbz r0, 0x10c4(r29)
/* 805672D0  28 00 00 0D */	cmplwi r0, 0xd
/* 805672D4  40 82 00 10 */	bne lbl_805672E4
/* 805672D8  3B 40 00 06 */	li r26, 6
/* 805672DC  3B 00 00 06 */	li r24, 6
/* 805672E0  48 00 00 50 */	b lbl_80567330
lbl_805672E4:
/* 805672E4  38 7F 10 E8 */	addi r3, r31, 0x10e8
/* 805672E8  38 9D 11 80 */	addi r4, r29, 0x1180
/* 805672EC  4B DF AD 5C */	b __ptmf_cmpr
/* 805672F0  2C 03 00 00 */	cmpwi r3, 0
/* 805672F4  40 82 00 18 */	bne lbl_8056730C
/* 805672F8  3B 60 00 0B */	li r27, 0xb
/* 805672FC  3B 40 00 06 */	li r26, 6
/* 80567300  3B 20 00 0F */	li r25, 0xf
/* 80567304  3B 00 00 06 */	li r24, 6
/* 80567308  3B 80 00 00 */	li r28, 0
lbl_8056730C:
/* 8056730C  38 7F 10 F4 */	addi r3, r31, 0x10f4
/* 80567310  38 9D 11 80 */	addi r4, r29, 0x1180
/* 80567314  4B DF AD 34 */	b __ptmf_cmpr
/* 80567318  2C 03 00 00 */	cmpwi r3, 0
/* 8056731C  40 82 00 14 */	bne lbl_80567330
/* 80567320  3B 60 00 05 */	li r27, 5
/* 80567324  3B 40 00 04 */	li r26, 4
/* 80567328  3B 20 00 07 */	li r25, 7
/* 8056732C  3B 00 00 04 */	li r24, 4
lbl_80567330:
/* 80567330  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80567334  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80567338  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 8056733C  81 83 06 28 */	lwz r12, 0x628(r3)
/* 80567340  81 8C 01 88 */	lwz r12, 0x188(r12)
/* 80567344  7D 89 03 A6 */	mtctr r12
/* 80567348  4E 80 04 21 */	bctrl 
/* 8056734C  28 03 00 00 */	cmplwi r3, 0
/* 80567350  41 82 00 24 */	beq lbl_80567374
/* 80567354  7F 60 07 34 */	extsh r0, r27
/* 80567358  2C 00 00 07 */	cmpwi r0, 7
/* 8056735C  40 80 00 08 */	bge lbl_80567364
/* 80567360  3B 60 00 07 */	li r27, 7
lbl_80567364:
/* 80567364  7F 20 07 34 */	extsh r0, r25
/* 80567368  2C 00 00 09 */	cmpwi r0, 9
/* 8056736C  40 80 00 08 */	bge lbl_80567374
/* 80567370  3B 20 00 09 */	li r25, 9
lbl_80567374:
/* 80567374  7F 23 07 34 */	extsh r3, r25
/* 80567378  7F 04 07 34 */	extsh r4, r24
/* 8056737C  4B BE 56 9C */	b daNpcT_getDistTableIdx__Fii
/* 80567380  98 7D 05 44 */	stb r3, 0x544(r29)
/* 80567384  88 1D 05 44 */	lbz r0, 0x544(r29)
/* 80567388  98 1D 05 45 */	stb r0, 0x545(r29)
/* 8056738C  7F 63 07 34 */	extsh r3, r27
/* 80567390  7F 44 07 34 */	extsh r4, r26
/* 80567394  4B BE 56 84 */	b daNpcT_getDistTableIdx__Fii
/* 80567398  98 7D 05 47 */	stb r3, 0x547(r29)
/* 8056739C  93 9D 05 5C */	stw r28, 0x55c(r29)
/* 805673A0  38 7E 00 00 */	addi r3, r30, 0
/* 805673A4  C0 03 00 08 */	lfs f0, 8(r3)
/* 805673A8  D0 1D 04 EC */	stfs f0, 0x4ec(r29)
/* 805673AC  D0 1D 04 F0 */	stfs f0, 0x4f0(r29)
/* 805673B0  D0 1D 04 F4 */	stfs f0, 0x4f4(r29)
/* 805673B4  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 805673B8  FC 00 00 1E */	fctiwz f0, f0
/* 805673BC  D8 01 00 08 */	stfd f0, 8(r1)
/* 805673C0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 805673C4  98 1D 08 78 */	stb r0, 0x878(r29)
/* 805673C8  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 805673CC  D0 1D 0D EC */	stfs f0, 0xdec(r29)
/* 805673D0  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 805673D4  D0 1D 0D F0 */	stfs f0, 0xdf0(r29)
/* 805673D8  88 1D 0A 89 */	lbz r0, 0xa89(r29)
/* 805673DC  28 00 00 00 */	cmplwi r0, 0
/* 805673E0  41 82 00 0C */	beq lbl_805673EC
/* 805673E4  C0 1E 00 F8 */	lfs f0, 0xf8(r30)
/* 805673E8  D0 1D 0D EC */	stfs f0, 0xdec(r29)
lbl_805673EC:
/* 805673EC  38 7E 00 00 */	addi r3, r30, 0
/* 805673F0  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 805673F4  D0 1D 0D F8 */	stfs f0, 0xdf8(r29)
/* 805673F8  88 1D 10 C4 */	lbz r0, 0x10c4(r29)
/* 805673FC  28 00 00 0D */	cmplwi r0, 0xd
/* 80567400  40 82 00 0C */	bne lbl_8056740C
/* 80567404  C0 1E 01 00 */	lfs f0, 0x100(r30)
/* 80567408  D0 1D 0D F8 */	stfs f0, 0xdf8(r29)
lbl_8056740C:
/* 8056740C  38 7D 08 A0 */	addi r3, r29, 0x8a0
/* 80567410  C0 3D 0D F0 */	lfs f1, 0xdf0(r29)
/* 80567414  4B B0 EB 2C */	b SetWallR__12dBgS_AcchCirFf
/* 80567418  38 7E 00 00 */	addi r3, r30, 0
/* 8056741C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80567420  D0 1D 08 D0 */	stfs f0, 0x8d0(r29)
/* 80567424  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80567428  D0 1D 0D E8 */	stfs f0, 0xde8(r29)
/* 8056742C  38 7F 11 00 */	addi r3, r31, 0x1100
/* 80567430  38 9D 11 80 */	addi r4, r29, 0x1180
/* 80567434  4B DF AC 14 */	b __ptmf_cmpr
/* 80567438  2C 03 00 00 */	cmpwi r3, 0
/* 8056743C  40 82 00 0C */	bne lbl_80567448
/* 80567440  C0 1E 01 04 */	lfs f0, 0x104(r30)
/* 80567444  D0 1D 0D E8 */	stfs f0, 0xde8(r29)
lbl_80567448:
/* 80567448  38 7E 00 00 */	addi r3, r30, 0
/* 8056744C  C0 03 00 6C */	lfs f0, 0x6c(r3)
/* 80567450  D0 1D 0A 80 */	stfs f0, 0xa80(r29)
/* 80567454  C0 03 00 44 */	lfs f0, 0x44(r3)
/* 80567458  D0 1D 0A 84 */	stfs f0, 0xa84(r29)
/* 8056745C  C0 03 00 04 */	lfs f0, 4(r3)
/* 80567460  D0 1D 05 30 */	stfs f0, 0x530(r29)
/* 80567464  39 61 00 30 */	addi r11, r1, 0x30
/* 80567468  4B DF AD AC */	b _restgpr_24
/* 8056746C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80567470  7C 08 03 A6 */	mtlr r0
/* 80567474  38 21 00 30 */	addi r1, r1, 0x30
/* 80567478  4E 80 00 20 */	blr 
