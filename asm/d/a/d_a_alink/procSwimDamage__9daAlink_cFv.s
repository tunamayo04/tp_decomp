lbl_80105728:
/* 80105728  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8010572C  7C 08 02 A6 */	mflr r0
/* 80105730  90 01 00 44 */	stw r0, 0x44(r1)
/* 80105734  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80105738  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8010573C  7C 7E 1B 78 */	mr r30, r3
/* 80105740  3B FE 1F D0 */	addi r31, r30, 0x1fd0
/* 80105744  C0 63 34 7C */	lfs f3, 0x347c(r3)
/* 80105748  C0 43 1F E0 */	lfs f2, 0x1fe0(r3)
/* 8010574C  A8 03 1F D6 */	lha r0, 0x1fd6(r3)
/* 80105750  C8 22 92 B0 */	lfd f1, lit_6025(r2)
/* 80105754  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80105758  90 01 00 0C */	stw r0, 0xc(r1)
/* 8010575C  3C 00 43 30 */	lis r0, 0x4330
/* 80105760  90 01 00 08 */	stw r0, 8(r1)
/* 80105764  C8 01 00 08 */	lfd f0, 8(r1)
/* 80105768  EC 00 08 28 */	fsubs f0, f0, f1
/* 8010576C  EC 02 00 28 */	fsubs f0, f2, f0
/* 80105770  EC 23 00 32 */	fmuls f1, f3, f0
/* 80105774  48 16 1E 71 */	bl cM_rad2s__Ff
/* 80105778  54 60 04 38 */	rlwinm r0, r3, 0, 0x10, 0x1c
/* 8010577C  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha
/* 80105780  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l
/* 80105784  7C 43 04 2E */	lfsx f2, r3, r0
/* 80105788  A8 1E 30 08 */	lha r0, 0x3008(r30)
/* 8010578C  C8 22 92 B0 */	lfd f1, lit_6025(r2)
/* 80105790  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80105794  90 01 00 14 */	stw r0, 0x14(r1)
/* 80105798  3C 60 43 30 */	lis r3, 0x4330
/* 8010579C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801057A0  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801057A4  EC 00 08 28 */	fsubs f0, f0, f1
/* 801057A8  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801057AC  FC 00 00 1E */	fctiwz f0, f0
/* 801057B0  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 801057B4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801057B8  B0 1E 05 9C */	sth r0, 0x59c(r30)
/* 801057BC  A8 1E 30 0A */	lha r0, 0x300a(r30)
/* 801057C0  7C 00 00 D0 */	neg r0, r0
/* 801057C4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801057C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801057CC  90 61 00 20 */	stw r3, 0x20(r1)
/* 801057D0  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 801057D4  EC 00 08 28 */	fsubs f0, f0, f1
/* 801057D8  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801057DC  FC 00 00 1E */	fctiwz f0, f0
/* 801057E0  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 801057E4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801057E8  B0 1E 05 A0 */	sth r0, 0x5a0(r30)
/* 801057EC  38 00 00 00 */	li r0, 0
/* 801057F0  B0 1E 05 9E */	sth r0, 0x59e(r30)
/* 801057F4  7F C3 F3 78 */	mr r3, r30
/* 801057F8  4B FF D8 61 */	bl checkSwimUpAction__9daAlink_cFv
/* 801057FC  2C 03 00 00 */	cmpwi r3, 0
/* 80105800  41 82 00 0C */	beq lbl_8010580C
/* 80105804  38 60 00 01 */	li r3, 1
/* 80105808  48 00 00 80 */	b lbl_80105888
lbl_8010580C:
/* 8010580C  7F E3 FB 78 */	mr r3, r31
/* 80105810  48 05 8C BD */	bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 80105814  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80105818  41 82 00 24 */	beq lbl_8010583C
/* 8010581C  7F C3 F3 78 */	mr r3, r30
/* 80105820  4B FF D1 A9 */	bl checkNextActionSwim__9daAlink_cFv
/* 80105824  2C 03 00 00 */	cmpwi r3, 0
/* 80105828  40 82 00 5C */	bne lbl_80105884
/* 8010582C  7F C3 F3 78 */	mr r3, r30
/* 80105830  38 80 00 00 */	li r4, 0
/* 80105834  4B FF EA C5 */	bl procSwimWaitInit__9daAlink_cFi
/* 80105838  48 00 00 50 */	b lbl_80105888
lbl_8010583C:
/* 8010583C  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 80105840  C0 1E 34 78 */	lfs f0, 0x3478(r30)
/* 80105844  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80105848  40 81 00 3C */	ble lbl_80105884
/* 8010584C  80 1E 31 A0 */	lwz r0, 0x31a0(r30)
/* 80105850  60 00 00 04 */	ori r0, r0, 4
/* 80105854  90 1E 31 A0 */	stw r0, 0x31a0(r30)
/* 80105858  7F C3 F3 78 */	mr r3, r30
/* 8010585C  4B FF D1 6D */	bl checkNextActionSwim__9daAlink_cFv
/* 80105860  2C 03 00 00 */	cmpwi r3, 0
/* 80105864  40 82 00 20 */	bne lbl_80105884
/* 80105868  C0 3E 33 AC */	lfs f1, 0x33ac(r30)
/* 8010586C  C0 02 92 A4 */	lfs f0, lit_6021(r2)
/* 80105870  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80105874  40 81 00 10 */	ble lbl_80105884
/* 80105878  7F C3 F3 78 */	mr r3, r30
/* 8010587C  4B FF ED F5 */	bl procSwimMoveInit__9daAlink_cFv
/* 80105880  48 00 00 08 */	b lbl_80105888
lbl_80105884:
/* 80105884  38 60 00 01 */	li r3, 1
lbl_80105888:
/* 80105888  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8010588C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80105890  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80105894  7C 08 03 A6 */	mtlr r0
/* 80105898  38 21 00 40 */	addi r1, r1, 0x40
/* 8010589C  4E 80 00 20 */	blr 
