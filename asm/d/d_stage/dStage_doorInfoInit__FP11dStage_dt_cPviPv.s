lbl_80025CDC:
/* 80025CDC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80025CE0  7C 08 02 A6 */	mflr r0
/* 80025CE4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80025CE8  39 61 00 20 */	addi r11, r1, 0x20
/* 80025CEC  48 33 C4 ED */	bl _savegpr_28
/* 80025CF0  7C 7C 1B 78 */	mr r28, r3
/* 80025CF4  7C 9D 23 78 */	mr r29, r4
/* 80025CF8  83 E4 00 08 */	lwz r31, 8(r4)
/* 80025CFC  3B C0 00 00 */	li r30, 0
/* 80025D00  48 00 00 80 */	b lbl_80025D80
lbl_80025D04:
/* 80025D04  4B FF 3D A5 */	bl fopAcM_CreateAppend__Fv
/* 80025D08  7C 64 1B 79 */	or. r4, r3, r3
/* 80025D0C  41 82 00 6C */	beq lbl_80025D78
/* 80025D10  80 1F 00 08 */	lwz r0, 8(r31)
/* 80025D14  90 04 00 00 */	stw r0, 0(r4)
/* 80025D18  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80025D1C  D0 04 00 04 */	stfs f0, 4(r4)
/* 80025D20  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80025D24  D0 04 00 08 */	stfs f0, 8(r4)
/* 80025D28  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 80025D2C  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80025D30  A8 1F 00 18 */	lha r0, 0x18(r31)
/* 80025D34  B0 04 00 10 */	sth r0, 0x10(r4)
/* 80025D38  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 80025D3C  B0 04 00 12 */	sth r0, 0x12(r4)
/* 80025D40  A8 1F 00 1C */	lha r0, 0x1c(r31)
/* 80025D44  B0 04 00 14 */	sth r0, 0x14(r4)
/* 80025D48  A0 1F 00 1E */	lhz r0, 0x1e(r31)
/* 80025D4C  B0 04 00 16 */	sth r0, 0x16(r4)
/* 80025D50  88 1C 00 04 */	lbz r0, 4(r28)
/* 80025D54  98 04 00 21 */	stb r0, 0x21(r4)
/* 80025D58  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 80025D5C  98 04 00 18 */	stb r0, 0x18(r4)
/* 80025D60  88 1F 00 21 */	lbz r0, 0x21(r31)
/* 80025D64  98 04 00 19 */	stb r0, 0x19(r4)
/* 80025D68  88 1F 00 22 */	lbz r0, 0x22(r31)
/* 80025D6C  98 04 00 1A */	stb r0, 0x1a(r4)
/* 80025D70  7F E3 FB 78 */	mr r3, r31
/* 80025D74  4B FF F1 89 */	bl dStage_actorCreate__FP22stage_actor_data_classP16fopAcM_prm_class
lbl_80025D78:
/* 80025D78  3B FF 00 24 */	addi r31, r31, 0x24
/* 80025D7C  3B DE 00 01 */	addi r30, r30, 1
lbl_80025D80:
/* 80025D80  80 1D 00 04 */	lwz r0, 4(r29)
/* 80025D84  7C 1E 00 00 */	cmpw r30, r0
/* 80025D88  41 80 FF 7C */	blt lbl_80025D04
/* 80025D8C  38 60 00 01 */	li r3, 1
/* 80025D90  39 61 00 20 */	addi r11, r1, 0x20
/* 80025D94  48 33 C4 91 */	bl _restgpr_28
/* 80025D98  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80025D9C  7C 08 03 A6 */	mtlr r0
/* 80025DA0  38 21 00 20 */	addi r1, r1, 0x20
/* 80025DA4  4E 80 00 20 */	blr 
