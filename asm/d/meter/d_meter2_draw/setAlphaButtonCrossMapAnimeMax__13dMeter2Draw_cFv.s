lbl_802186C4:
/* 802186C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802186C8  7C 08 02 A6 */	mflr r0
/* 802186CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802186D0  39 61 00 20 */	addi r11, r1, 0x20
/* 802186D4  48 14 9B 01 */	bl _savegpr_27
/* 802186D8  7C 7B 1B 78 */	mr r27, r3
/* 802186DC  80 63 03 64 */	lwz r3, 0x364(r3)
/* 802186E0  48 03 D1 49 */	bl getAlphaRate__13CPaneMgrAlphaFv
/* 802186E4  3C 60 80 43 */	lis r3, g_drawHIO@ha
/* 802186E8  3B C3 EB C8 */	addi r30, r3, g_drawHIO@l
/* 802186EC  C0 5E 00 18 */	lfs f2, 0x18(r30)
/* 802186F0  C0 1E 04 1C */	lfs f0, 0x41c(r30)
/* 802186F4  EC 02 00 32 */	fmuls f0, f2, f0
/* 802186F8  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 802186FC  41 82 00 20 */	beq lbl_8021871C
/* 80218700  80 7B 03 64 */	lwz r3, 0x364(r27)
/* 80218704  FC 20 00 90 */	fmr f1, f0
/* 80218708  48 03 D0 C9 */	bl setAlphaRate__13CPaneMgrAlphaFf
/* 8021870C  7F 63 DB 78 */	mr r3, r27
/* 80218710  80 9B 03 64 */	lwz r4, 0x364(r27)
/* 80218714  38 A0 00 05 */	li r5, 5
/* 80218718  48 00 23 8D */	bl setAlphaAnimeMax__13dMeter2Draw_cFP13CPaneMgrAlphas
lbl_8021871C:
/* 8021871C  3B 80 00 00 */	li r28, 0
/* 80218720  3B E0 00 00 */	li r31, 0
lbl_80218724:
/* 80218724  3B BF 04 A4 */	addi r29, r31, 0x4a4
/* 80218728  7C 7B E8 2E */	lwzx r3, r27, r29
/* 8021872C  28 03 00 00 */	cmplwi r3, 0
/* 80218730  41 82 00 30 */	beq lbl_80218760
/* 80218734  48 03 D0 F5 */	bl getAlphaRate__13CPaneMgrAlphaFv
/* 80218738  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 8021873C  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80218740  41 82 00 20 */	beq lbl_80218760
/* 80218744  7C 7B E8 2E */	lwzx r3, r27, r29
/* 80218748  FC 20 00 90 */	fmr f1, f0
/* 8021874C  48 03 D0 85 */	bl setAlphaRate__13CPaneMgrAlphaFf
/* 80218750  7F 63 DB 78 */	mr r3, r27
/* 80218754  7C 9B E8 2E */	lwzx r4, r27, r29
/* 80218758  38 A0 00 05 */	li r5, 5
/* 8021875C  48 00 23 49 */	bl setAlphaAnimeMax__13dMeter2Draw_cFP13CPaneMgrAlphas
lbl_80218760:
/* 80218760  3B 9C 00 01 */	addi r28, r28, 1
/* 80218764  2C 1C 00 05 */	cmpwi r28, 5
/* 80218768  3B FF 00 04 */	addi r31, r31, 4
/* 8021876C  41 80 FF B8 */	blt lbl_80218724
/* 80218770  39 61 00 20 */	addi r11, r1, 0x20
/* 80218774  48 14 9A AD */	bl _restgpr_27
/* 80218778  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8021877C  7C 08 03 A6 */	mtlr r0
/* 80218780  38 21 00 20 */	addi r1, r1, 0x20
/* 80218784  4E 80 00 20 */	blr 
