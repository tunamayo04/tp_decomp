lbl_80823148:
/* 80823148  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8082314C  7C 08 02 A6 */	mflr r0
/* 80823150  90 01 00 34 */	stw r0, 0x34(r1)
/* 80823154  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80823158  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8082315C  7C 7E 1B 78 */	mr r30, r3
/* 80823160  3C 60 80 83 */	lis r3, lit_3902@ha
/* 80823164  3B E3 88 50 */	addi r31, r3, lit_3902@l
/* 80823168  C0 3E 06 80 */	lfs f1, 0x680(r30)
/* 8082316C  C0 1E 04 D0 */	lfs f0, 0x4d0(r30)
/* 80823170  EC 21 00 28 */	fsubs f1, f1, f0
/* 80823174  C0 5E 06 88 */	lfs f2, 0x688(r30)
/* 80823178  C0 1E 04 D8 */	lfs f0, 0x4d8(r30)
/* 8082317C  EC 42 00 28 */	fsubs f2, f2, f0
/* 80823180  4B A4 44 F4 */	b cM_atan2s__Fff
/* 80823184  7C 64 1B 78 */	mr r4, r3
/* 80823188  38 7E 04 DE */	addi r3, r30, 0x4de
/* 8082318C  38 A0 00 02 */	li r5, 2
/* 80823190  C0 3E 06 9C */	lfs f1, 0x69c(r30)
/* 80823194  C0 1E 06 94 */	lfs f0, 0x694(r30)
/* 80823198  EC 01 00 32 */	fmuls f0, f1, f0
/* 8082319C  FC 00 00 1E */	fctiwz f0, f0
/* 808231A0  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 808231A4  80 C1 00 24 */	lwz r6, 0x24(r1)
/* 808231A8  4B A4 D4 60 */	b cLib_addCalcAngleS2__FPssss
/* 808231AC  38 7E 06 94 */	addi r3, r30, 0x694
/* 808231B0  C0 3F 00 08 */	lfs f1, 8(r31)
/* 808231B4  FC 40 08 90 */	fmr f2, f1
/* 808231B8  C0 7F 00 68 */	lfs f3, 0x68(r31)
/* 808231BC  4B A4 C8 80 */	b cLib_addCalc2__FPffff
/* 808231C0  38 7E 05 2C */	addi r3, r30, 0x52c
/* 808231C4  C0 3E 06 8C */	lfs f1, 0x68c(r30)
/* 808231C8  C0 5F 00 08 */	lfs f2, 8(r31)
/* 808231CC  C0 7E 06 90 */	lfs f3, 0x690(r30)
/* 808231D0  4B A4 C8 6C */	b cLib_addCalc2__FPffff
/* 808231D4  C0 1F 00 04 */	lfs f0, 4(r31)
/* 808231D8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 808231DC  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 808231E0  C0 1E 05 2C */	lfs f0, 0x52c(r30)
/* 808231E4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 808231E8  3C 60 80 45 */	lis r3, calc_mtx@ha
/* 808231EC  38 63 07 68 */	addi r3, r3, calc_mtx@l
/* 808231F0  80 63 00 00 */	lwz r3, 0(r3)
/* 808231F4  A8 9E 04 DE */	lha r4, 0x4de(r30)
/* 808231F8  4B 7E 91 E4 */	b mDoMtx_YrotS__FPA4_fs
/* 808231FC  38 61 00 14 */	addi r3, r1, 0x14
/* 80823200  38 81 00 08 */	addi r4, r1, 8
/* 80823204  4B A4 DC E8 */	b MtxPosition__FP4cXyzP4cXyz
/* 80823208  C0 01 00 08 */	lfs f0, 8(r1)
/* 8082320C  D0 1E 04 F8 */	stfs f0, 0x4f8(r30)
/* 80823210  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80823214  D0 1E 05 00 */	stfs f0, 0x500(r30)
/* 80823218  C0 3E 04 D0 */	lfs f1, 0x4d0(r30)
/* 8082321C  C0 1E 04 F8 */	lfs f0, 0x4f8(r30)
/* 80823220  EC 01 00 2A */	fadds f0, f1, f0
/* 80823224  D0 1E 04 D0 */	stfs f0, 0x4d0(r30)
/* 80823228  C0 3E 04 D4 */	lfs f1, 0x4d4(r30)
/* 8082322C  C0 1E 04 FC */	lfs f0, 0x4fc(r30)
/* 80823230  EC 01 00 2A */	fadds f0, f1, f0
/* 80823234  D0 1E 04 D4 */	stfs f0, 0x4d4(r30)
/* 80823238  C0 3E 04 D8 */	lfs f1, 0x4d8(r30)
/* 8082323C  C0 1E 05 00 */	lfs f0, 0x500(r30)
/* 80823240  EC 01 00 2A */	fadds f0, f1, f0
/* 80823244  D0 1E 04 D8 */	stfs f0, 0x4d8(r30)
/* 80823248  C0 3E 04 FC */	lfs f1, 0x4fc(r30)
/* 8082324C  C0 1F 00 6C */	lfs f0, 0x6c(r31)
/* 80823250  EC 01 00 28 */	fsubs f0, f1, f0
/* 80823254  D0 1E 04 FC */	stfs f0, 0x4fc(r30)
/* 80823258  80 1E 07 78 */	lwz r0, 0x778(r30)
/* 8082325C  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80823260  41 82 00 0C */	beq lbl_8082326C
/* 80823264  C0 1F 00 70 */	lfs f0, 0x70(r31)
/* 80823268  D0 1E 04 FC */	stfs f0, 0x4fc(r30)
lbl_8082326C:
/* 8082326C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80823270  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80823274  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80823278  7C 08 03 A6 */	mtlr r0
/* 8082327C  38 21 00 30 */	addi r1, r1, 0x30
/* 80823280  4E 80 00 20 */	blr 
