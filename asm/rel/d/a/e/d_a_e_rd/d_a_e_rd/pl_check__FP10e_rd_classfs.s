lbl_805065D4:
/* 805065D4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 805065D8  7C 08 02 A6 */	mflr r0
/* 805065DC  90 01 00 34 */	stw r0, 0x34(r1)
/* 805065E0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 805065E4  F3 E1 00 28 */	psq_st f31, 40(r1), 0, 0 /* qr0 */
/* 805065E8  39 61 00 20 */	addi r11, r1, 0x20
/* 805065EC  4B E5 BB E8 */	b _savegpr_27
/* 805065F0  7C 7D 1B 78 */	mr r29, r3
/* 805065F4  FF E0 08 90 */	fmr f31, f1
/* 805065F8  7C 9E 23 78 */	mr r30, r4
/* 805065FC  4B FF E5 25 */	bl get_pla__FP10fopAc_ac_c
/* 80506600  7C 7F 1B 78 */	mr r31, r3
/* 80506604  3C 60 80 52 */	lis r3, data_80519200@ha
/* 80506608  88 03 92 00 */	lbz r0, data_80519200@l(r3)
/* 8050660C  28 00 00 00 */	cmplwi r0, 0
/* 80506610  40 82 00 20 */	bne lbl_80506630
/* 80506614  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80506618  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8050661C  88 03 4F AD */	lbz r0, 0x4fad(r3)
/* 80506620  28 00 00 00 */	cmplwi r0, 0
/* 80506624  41 82 00 0C */	beq lbl_80506630
/* 80506628  38 60 00 00 */	li r3, 0
/* 8050662C  48 00 01 0C */	b lbl_80506738
lbl_80506630:
/* 80506630  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80506634  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80506638  38 63 4E 00 */	addi r3, r3, 0x4e00
/* 8050663C  3C 80 80 52 */	lis r4, stringBase0@ha
/* 80506640  38 84 89 68 */	addi r4, r4, stringBase0@l
/* 80506644  38 84 00 0E */	addi r4, r4, 0xe
/* 80506648  4B E6 23 4C */	b strcmp
/* 8050664C  2C 03 00 00 */	cmpwi r3, 0
/* 80506650  40 82 00 20 */	bne lbl_80506670
/* 80506654  C0 3F 04 D8 */	lfs f1, 0x4d8(r31)
/* 80506658  3C 60 80 52 */	lis r3, lit_5189@ha
/* 8050665C  C0 03 86 10 */	lfs f0, lit_5189@l(r3)
/* 80506660  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80506664  40 80 00 0C */	bge lbl_80506670
/* 80506668  38 60 00 00 */	li r3, 0
/* 8050666C  48 00 00 CC */	b lbl_80506738
lbl_80506670:
/* 80506670  3C 60 80 52 */	lis r3, struct_805191E4+0x0@ha
/* 80506674  A8 03 91 E4 */	lha r0, struct_805191E4+0x0@l(r3)
/* 80506678  2C 00 00 00 */	cmpwi r0, 0
/* 8050667C  41 82 00 0C */	beq lbl_80506688
/* 80506680  3C 60 80 52 */	lis r3, lit_5190@ha
/* 80506684  C3 E3 86 14 */	lfs f31, lit_5190@l(r3)
lbl_80506688:
/* 80506688  C0 1D 09 78 */	lfs f0, 0x978(r29)
/* 8050668C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80506690  40 80 00 A4 */	bge lbl_80506734
/* 80506694  A8 7D 09 7C */	lha r3, 0x97c(r29)
/* 80506698  A8 1D 04 E6 */	lha r0, 0x4e6(r29)
/* 8050669C  7C 03 00 50 */	subf r0, r3, r0
/* 805066A0  7C 03 07 34 */	extsh r3, r0
/* 805066A4  7F C0 07 34 */	extsh r0, r30
/* 805066A8  7C 03 00 00 */	cmpw r3, r0
/* 805066AC  40 80 00 30 */	bge lbl_805066DC
/* 805066B0  7C 1E 00 D0 */	neg r0, r30
/* 805066B4  7C 00 07 34 */	extsh r0, r0
/* 805066B8  7C 03 00 00 */	cmpw r3, r0
/* 805066BC  40 81 00 20 */	ble lbl_805066DC
/* 805066C0  7F A3 EB 78 */	mr r3, r29
/* 805066C4  7F E4 FB 78 */	mr r4, r31
/* 805066C8  4B FF F2 DD */	bl other_bg_check__FP10e_rd_classP10fopAc_ac_c
/* 805066CC  2C 03 00 00 */	cmpwi r3, 0
/* 805066D0  40 82 00 0C */	bne lbl_805066DC
/* 805066D4  38 60 00 01 */	li r3, 1
/* 805066D8  48 00 00 60 */	b lbl_80506738
lbl_805066DC:
/* 805066DC  3B 60 00 00 */	li r27, 0
/* 805066E0  3B C0 00 00 */	li r30, 0
/* 805066E4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 805066E8  3B E3 61 C0 */	addi r31, r3, g_dComIfG_gameInfo@l
lbl_805066EC:
/* 805066EC  3B 9E 0D 58 */	addi r28, r30, 0xd58
/* 805066F0  7F 9D E2 14 */	add r28, r29, r28
/* 805066F4  7F 83 E3 78 */	mr r3, r28
/* 805066F8  4B B7 DF 60 */	b ChkCoHit__12dCcD_GObjInfFv
/* 805066FC  28 03 00 00 */	cmplwi r3, 0
/* 80506700  41 82 00 24 */	beq lbl_80506724
/* 80506704  7F 83 E3 78 */	mr r3, r28
/* 80506708  4B B7 DF E8 */	b GetCoHitObj__12dCcD_GObjInfFv
/* 8050670C  4B D5 D3 3C */	b GetAc__8cCcD_ObjFv
/* 80506710  80 1F 5D AC */	lwz r0, 0x5dac(r31)
/* 80506714  7C 00 18 40 */	cmplw r0, r3
/* 80506718  40 82 00 0C */	bne lbl_80506724
/* 8050671C  38 60 00 01 */	li r3, 1
/* 80506720  48 00 00 18 */	b lbl_80506738
lbl_80506724:
/* 80506724  3B 7B 00 01 */	addi r27, r27, 1
/* 80506728  2C 1B 00 02 */	cmpwi r27, 2
/* 8050672C  3B DE 01 38 */	addi r30, r30, 0x138
/* 80506730  40 81 FF BC */	ble lbl_805066EC
lbl_80506734:
/* 80506734  38 60 00 00 */	li r3, 0
lbl_80506738:
/* 80506738  E3 E1 00 28 */	psq_l f31, 40(r1), 0, 0 /* qr0 */
/* 8050673C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80506740  39 61 00 20 */	addi r11, r1, 0x20
/* 80506744  4B E5 BA DC */	b _restgpr_27
/* 80506748  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8050674C  7C 08 03 A6 */	mtlr r0
/* 80506750  38 21 00 30 */	addi r1, r1, 0x30
/* 80506754  4E 80 00 20 */	blr 
