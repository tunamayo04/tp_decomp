lbl_806760B4:
/* 806760B4  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 806760B8  7C 08 02 A6 */	mflr r0
/* 806760BC  90 01 00 74 */	stw r0, 0x74(r1)
/* 806760C0  39 61 00 70 */	addi r11, r1, 0x70
/* 806760C4  4B CE C1 18 */	b _savegpr_29
/* 806760C8  7C 7E 1B 78 */	mr r30, r3
/* 806760CC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 806760D0  3B A3 61 C0 */	addi r29, r3, g_dComIfG_gameInfo@l
/* 806760D4  83 FD 5D AC */	lwz r31, 0x5dac(r29)
/* 806760D8  80 7D 5D B4 */	lwz r3, 0x5db4(r29)
/* 806760DC  80 03 05 74 */	lwz r0, 0x574(r3)
/* 806760E0  54 00 01 8D */	rlwinm. r0, r0, 0, 6, 6
/* 806760E4  41 82 00 58 */	beq lbl_8067613C
/* 806760E8  38 61 00 20 */	addi r3, r1, 0x20
/* 806760EC  38 9F 05 50 */	addi r4, r31, 0x550
/* 806760F0  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 806760F4  4B BF 0A 40 */	b __mi__4cXyzCFRC3Vec
/* 806760F8  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 806760FC  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80676100  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80676104  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80676108  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8067610C  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80676110  38 61 00 14 */	addi r3, r1, 0x14
/* 80676114  38 9F 04 D0 */	addi r4, r31, 0x4d0
/* 80676118  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 8067611C  4B BF 0A 18 */	b __mi__4cXyzCFRC3Vec
/* 80676120  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80676124  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80676128  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8067612C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80676130  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80676134  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80676138  48 00 00 2C */	b lbl_80676164
lbl_8067613C:
/* 8067613C  38 61 00 08 */	addi r3, r1, 8
/* 80676140  38 9F 04 D0 */	addi r4, r31, 0x4d0
/* 80676144  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 80676148  4B BF 09 EC */	b __mi__4cXyzCFRC3Vec
/* 8067614C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80676150  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80676154  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80676158  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8067615C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80676160  D0 01 00 40 */	stfs f0, 0x40(r1)
lbl_80676164:
/* 80676164  A8 9E 04 DE */	lha r4, 0x4de(r30)
/* 80676168  88 1E 05 DF */	lbz r0, 0x5df(r30)
/* 8067616C  28 00 00 01 */	cmplwi r0, 1
/* 80676170  40 82 00 0C */	bne lbl_8067617C
/* 80676174  38 04 7F FF */	addi r0, r4, 0x7fff
/* 80676178  7C 04 07 34 */	extsh r4, r0
lbl_8067617C:
/* 8067617C  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 80676180  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 80676184  7C 9E 07 34 */	extsh r30, r4
/* 80676188  7C 1E 00 D0 */	neg r0, r30
/* 8067618C  7C 04 07 34 */	extsh r4, r0
/* 80676190  4B 99 62 4C */	b mDoMtx_YrotS__FPA4_fs
/* 80676194  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 80676198  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 8067619C  38 81 00 38 */	addi r4, r1, 0x38
/* 806761A0  7C 85 23 78 */	mr r5, r4
/* 806761A4  4B CD 0B C8 */	b PSMTXMultVec
/* 806761A8  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 806761AC  FC 00 02 10 */	fabs f0, f0
/* 806761B0  FC 20 00 18 */	frsp f1, f0
/* 806761B4  3C 60 80 67 */	lis r3, lit_5381@ha
/* 806761B8  C0 03 76 50 */	lfs f0, lit_5381@l(r3)
/* 806761BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806761C0  40 81 00 0C */	ble lbl_806761CC
/* 806761C4  38 60 00 00 */	li r3, 0
/* 806761C8  48 00 00 C4 */	b lbl_8067628C
lbl_806761CC:
/* 806761CC  80 7D 5D B4 */	lwz r3, 0x5db4(r29)
/* 806761D0  80 03 05 74 */	lwz r0, 0x574(r3)
/* 806761D4  54 00 01 8D */	rlwinm. r0, r0, 0, 6, 6
/* 806761D8  41 82 00 3C */	beq lbl_80676214
/* 806761DC  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 806761E0  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 806761E4  38 81 00 2C */	addi r4, r1, 0x2c
/* 806761E8  7C 85 23 78 */	mr r5, r4
/* 806761EC  4B CD 0B 80 */	b PSMTXMultVec
/* 806761F0  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 806761F4  FC 00 02 10 */	fabs f0, f0
/* 806761F8  FC 20 00 18 */	frsp f1, f0
/* 806761FC  3C 60 80 67 */	lis r3, lit_5381@ha
/* 80676200  C0 03 76 50 */	lfs f0, lit_5381@l(r3)
/* 80676204  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80676208  40 81 00 0C */	ble lbl_80676214
/* 8067620C  38 60 00 00 */	li r3, 0
/* 80676210  48 00 00 7C */	b lbl_8067628C
lbl_80676214:
/* 80676214  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80676218  FC 00 02 10 */	fabs f0, f0
/* 8067621C  FC 20 00 18 */	frsp f1, f0
/* 80676220  3C 60 80 67 */	lis r3, lit_5382@ha
/* 80676224  C0 03 76 54 */	lfs f0, lit_5382@l(r3)
/* 80676228  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8067622C  40 81 00 0C */	ble lbl_80676238
/* 80676230  38 60 00 00 */	li r3, 0
/* 80676234  48 00 00 58 */	b lbl_8067628C
lbl_80676238:
/* 80676238  A8 7F 04 DE */	lha r3, 0x4de(r31)
/* 8067623C  38 1E 80 01 */	addi r0, r30, -32767
/* 80676240  7C 03 00 50 */	subf r0, r3, r0
/* 80676244  3C 60 80 67 */	lis r3, lit_5384@ha
/* 80676248  C8 23 76 58 */	lfd f1, lit_5384@l(r3)
/* 8067624C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80676250  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80676254  3C 00 43 30 */	lis r0, 0x4330
/* 80676258  90 01 00 48 */	stw r0, 0x48(r1)
/* 8067625C  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 80676260  FC 00 08 28 */	fsub f0, f0, f1
/* 80676264  FC 00 02 10 */	fabs f0, f0
/* 80676268  FC 00 00 1E */	fctiwz f0, f0
/* 8067626C  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 80676270  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80676274  7C 05 07 34 */	extsh r5, r0
/* 80676278  38 00 40 00 */	li r0, 0x4000
/* 8067627C  7C 04 FE 70 */	srawi r4, r0, 0x1f
/* 80676280  54 A3 0F FE */	srwi r3, r5, 0x1f
/* 80676284  7C 05 00 10 */	subfc r0, r5, r0
/* 80676288  7C 64 19 14 */	adde r3, r4, r3
lbl_8067628C:
/* 8067628C  39 61 00 70 */	addi r11, r1, 0x70
/* 80676290  4B CE BF 98 */	b _restgpr_29
/* 80676294  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80676298  7C 08 03 A6 */	mtlr r0
/* 8067629C  38 21 00 70 */	addi r1, r1, 0x70
/* 806762A0  4E 80 00 20 */	blr 
