lbl_801392E4:
/* 801392E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801392E8  7C 08 02 A6 */	mflr r0
/* 801392EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801392F0  39 61 00 20 */	addi r11, r1, 0x20
/* 801392F4  48 22 8E E9 */	bl _savegpr_29
/* 801392F8  7C 7D 1B 78 */	mr r29, r3
/* 801392FC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80139300  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80139304  80 03 5F 1C */	lwz r0, 0x5f1c(r3)
/* 80139308  54 00 01 CF */	rlwinm. r0, r0, 0, 7, 7
/* 8013930C  40 82 00 80 */	bne lbl_8013938C
/* 80139310  88 1D 05 69 */	lbz r0, 0x569(r29)
/* 80139314  28 00 00 02 */	cmplwi r0, 2
/* 80139318  40 82 00 50 */	bne lbl_80139368
/* 8013931C  83 FD 27 E0 */	lwz r31, 0x27e0(r29)
/* 80139320  3B C0 00 01 */	li r30, 1
/* 80139324  7F E3 FB 78 */	mr r3, r31
/* 80139328  4B F3 A4 BD */	bl LockonTruth__12dAttention_cFv
/* 8013932C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80139330  40 82 00 14 */	bne lbl_80139344
/* 80139334  80 1F 03 34 */	lwz r0, 0x334(r31)
/* 80139338  54 00 00 85 */	rlwinm. r0, r0, 0, 2, 2
/* 8013933C  40 82 00 08 */	bne lbl_80139344
/* 80139340  3B C0 00 00 */	li r30, 0
lbl_80139344:
/* 80139344  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80139348  41 82 00 20 */	beq lbl_80139368
/* 8013934C  38 7D 10 F0 */	addi r3, r29, 0x10f0
/* 80139350  4B F4 AF 71 */	bl ChkAtHit__12dCcD_GObjInfFv
/* 80139354  28 03 00 00 */	cmplwi r3, 0
/* 80139358  41 82 00 10 */	beq lbl_80139368
/* 8013935C  80 1D 05 70 */	lwz r0, 0x570(r29)
/* 80139360  60 00 80 00 */	ori r0, r0, 0x8000
/* 80139364  90 1D 05 70 */	stw r0, 0x570(r29)
lbl_80139368:
/* 80139368  A8 7D 30 7E */	lha r3, 0x307e(r29)
/* 8013936C  2C 03 00 00 */	cmpwi r3, 0
/* 80139370  40 81 00 10 */	ble lbl_80139380
/* 80139374  38 03 FF FF */	addi r0, r3, -1
/* 80139378  B0 1D 30 7E */	sth r0, 0x307e(r29)
/* 8013937C  48 00 00 10 */	b lbl_8013938C
lbl_80139380:
/* 80139380  7F A3 EB 78 */	mr r3, r29
/* 80139384  38 80 00 01 */	li r4, 1
/* 80139388  4B F9 80 A9 */	bl resetCombo__9daAlink_cFi
lbl_8013938C:
/* 8013938C  39 61 00 20 */	addi r11, r1, 0x20
/* 80139390  48 22 8E 99 */	bl _restgpr_29
/* 80139394  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80139398  7C 08 03 A6 */	mtlr r0
/* 8013939C  38 21 00 20 */	addi r1, r1, 0x20
/* 801393A0  4E 80 00 20 */	blr 
