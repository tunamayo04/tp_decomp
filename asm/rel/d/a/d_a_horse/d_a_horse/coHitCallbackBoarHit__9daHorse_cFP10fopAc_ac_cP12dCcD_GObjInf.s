lbl_80838798:
/* 80838798  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8083879C  7C 08 02 A6 */	mflr r0
/* 808387A0  90 01 00 34 */	stw r0, 0x34(r1)
/* 808387A4  39 61 00 30 */	addi r11, r1, 0x30
/* 808387A8  4B B2 9A 34 */	b _savegpr_29
/* 808387AC  7C 7D 1B 78 */	mr r29, r3
/* 808387B0  3C 60 80 84 */	lis r3, lit_3894@ha
/* 808387B4  3B C3 54 AC */	addi r30, r3, lit_3894@l
/* 808387B8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 808387BC  3B E3 61 C0 */	addi r31, r3, g_dComIfG_gameInfo@l
/* 808387C0  88 1F 4F AD */	lbz r0, 0x4fad(r31)
/* 808387C4  28 00 00 00 */	cmplwi r0, 0
/* 808387C8  40 82 01 24 */	bne lbl_808388EC
/* 808387CC  88 1D 16 B4 */	lbz r0, 0x16b4(r29)
/* 808387D0  28 00 00 01 */	cmplwi r0, 1
/* 808387D4  40 82 00 14 */	bne lbl_808387E8
/* 808387D8  C0 3D 05 2C */	lfs f1, 0x52c(r29)
/* 808387DC  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 808387E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 808387E4  41 81 00 10 */	bgt lbl_808387F4
lbl_808387E8:
/* 808387E8  80 1D 17 44 */	lwz r0, 0x1744(r29)
/* 808387EC  54 00 02 97 */	rlwinm. r0, r0, 0, 0xa, 0xb
/* 808387F0  41 82 00 FC */	beq lbl_808388EC
lbl_808387F4:
/* 808387F4  80 7D 17 44 */	lwz r3, 0x1744(r29)
/* 808387F8  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 808387FC  41 82 00 F0 */	beq lbl_808388EC
/* 80838800  A8 04 00 08 */	lha r0, 8(r4)
/* 80838804  2C 00 00 EF */	cmpwi r0, 0xef
/* 80838808  40 82 00 E4 */	bne lbl_808388EC
/* 8083880C  A0 04 05 8E */	lhz r0, 0x58e(r4)
/* 80838810  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80838814  40 82 00 D8 */	bne lbl_808388EC
/* 80838818  54 60 02 97 */	rlwinm. r0, r3, 0, 0xa, 0xb
/* 8083881C  41 82 00 B4 */	beq lbl_808388D0
/* 80838820  7C 83 23 78 */	mr r3, r4
/* 80838824  7F A4 EB 78 */	mr r4, r29
/* 80838828  4B 7E 1E E8 */	b fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 8083882C  B0 7D 17 06 */	sth r3, 0x1706(r29)
/* 80838830  A8 7D 17 06 */	lha r3, 0x1706(r29)
/* 80838834  2C 03 50 00 */	cmpwi r3, 0x5000
/* 80838838  40 81 00 10 */	ble lbl_80838848
/* 8083883C  38 00 50 00 */	li r0, 0x5000
/* 80838840  B0 1D 17 06 */	sth r0, 0x1706(r29)
/* 80838844  48 00 00 44 */	b lbl_80838888
lbl_80838848:
/* 80838848  2C 03 B0 00 */	cmpwi r3, -20480
/* 8083884C  40 80 00 10 */	bge lbl_8083885C
/* 80838850  38 00 B0 00 */	li r0, -20480
/* 80838854  B0 1D 17 06 */	sth r0, 0x1706(r29)
/* 80838858  48 00 00 30 */	b lbl_80838888
lbl_8083885C:
/* 8083885C  4B B2 C8 74 */	b abs
/* 80838860  2C 03 30 00 */	cmpwi r3, 0x3000
/* 80838864  40 80 00 24 */	bge lbl_80838888
/* 80838868  A8 1D 17 06 */	lha r0, 0x1706(r29)
/* 8083886C  2C 00 00 00 */	cmpwi r0, 0
/* 80838870  40 81 00 10 */	ble lbl_80838880
/* 80838874  38 00 30 00 */	li r0, 0x3000
/* 80838878  B0 1D 17 06 */	sth r0, 0x1706(r29)
/* 8083887C  48 00 00 0C */	b lbl_80838888
lbl_80838880:
/* 80838880  38 00 D0 00 */	li r0, -12288
/* 80838884  B0 1D 17 06 */	sth r0, 0x1706(r29)
lbl_80838888:
/* 80838888  38 00 00 05 */	li r0, 5
/* 8083888C  B0 1D 17 08 */	sth r0, 0x1708(r29)
/* 80838890  C0 3E 01 50 */	lfs f1, 0x150(r30)
/* 80838894  D0 21 00 08 */	stfs f1, 8(r1)
/* 80838898  C0 1E 01 48 */	lfs f0, 0x148(r30)
/* 8083889C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 808388A0  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 808388A4  38 7F 5B D4 */	addi r3, r31, 0x5bd4
/* 808388A8  38 80 00 03 */	li r4, 3
/* 808388AC  38 A0 00 01 */	li r5, 1
/* 808388B0  38 C1 00 08 */	addi r6, r1, 8
/* 808388B4  4B 83 71 70 */	b StartShock__12dVibration_cFii4cXyz
/* 808388B8  80 1D 17 44 */	lwz r0, 0x1744(r29)
/* 808388BC  54 00 02 D7 */	rlwinm. r0, r0, 0, 0xb, 0xb
/* 808388C0  41 82 00 2C */	beq lbl_808388EC
/* 808388C4  7F A3 EB 78 */	mr r3, r29
/* 808388C8  48 00 AF E5 */	bl procLargeDamageInit__9daHorse_cFv
/* 808388CC  48 00 00 20 */	b lbl_808388EC
lbl_808388D0:
/* 808388D0  80 65 00 44 */	lwz r3, 0x44(r5)
/* 808388D4  88 03 00 14 */	lbz r0, 0x14(r3)
/* 808388D8  7F A3 EB 78 */	mr r3, r29
/* 808388DC  20 00 00 FE */	subfic r0, r0, 0xfe
/* 808388E0  7C 00 00 34 */	cntlzw r0, r0
/* 808388E4  54 05 DE 3E */	rlwinm r5, r0, 0x1b, 0x18, 0x1f
/* 808388E8  48 00 87 9D */	bl setBoarHit__9daHorse_cFP10fopAc_ac_ci
lbl_808388EC:
/* 808388EC  39 61 00 30 */	addi r11, r1, 0x30
/* 808388F0  4B B2 99 38 */	b _restgpr_29
/* 808388F4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 808388F8  7C 08 03 A6 */	mtlr r0
/* 808388FC  38 21 00 30 */	addi r1, r1, 0x30
/* 80838900  4E 80 00 20 */	blr 
