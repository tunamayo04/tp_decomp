lbl_80947630:
/* 80947630  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80947634  7C 08 02 A6 */	mflr r0
/* 80947638  90 01 00 14 */	stw r0, 0x14(r1)
/* 8094763C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80947640  7C 7F 1B 78 */	mr r31, r3
/* 80947644  A0 03 00 F8 */	lhz r0, 0xf8(r3)
/* 80947648  28 00 00 01 */	cmplwi r0, 1
/* 8094764C  40 82 00 40 */	bne lbl_8094768C
/* 80947650  38 7F 06 20 */	addi r3, r31, 0x620
/* 80947654  7F E4 FB 78 */	mr r4, r31
/* 80947658  38 A0 00 00 */	li r5, 0
/* 8094765C  38 C0 00 00 */	li r6, 0
/* 80947660  4B 90 2C 78 */	b doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci
/* 80947664  2C 03 00 00 */	cmpwi r3, 0
/* 80947668  41 82 00 24 */	beq lbl_8094768C
/* 8094766C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80947670  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80947674  38 63 4E C8 */	addi r3, r3, 0x4ec8
/* 80947678  4B 6F AD F0 */	b reset__14dEvt_control_cFv
/* 8094767C  38 00 00 00 */	li r0, 0
/* 80947680  90 1F 08 28 */	stw r0, 0x828(r31)
/* 80947684  38 00 00 07 */	li r0, 7
/* 80947688  98 1F 09 2C */	stb r0, 0x92c(r31)
lbl_8094768C:
/* 8094768C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80947690  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80947694  7C 08 03 A6 */	mtlr r0
/* 80947698  38 21 00 10 */	addi r1, r1, 0x10
/* 8094769C  4E 80 00 20 */	blr 
