lbl_803012CC:
/* 803012CC  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 803012D0  7C 08 02 A6 */	mflr r0
/* 803012D4  90 01 01 34 */	stw r0, 0x134(r1)
/* 803012D8  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 803012DC  F3 E1 01 28 */	psq_st f31, 296(r1), 0, 0 /* qr0 */
/* 803012E0  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 803012E4  F3 C1 01 18 */	psq_st f30, 280(r1), 0, 0 /* qr0 */
/* 803012E8  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 803012EC  F3 A1 01 08 */	psq_st f29, 264(r1), 0, 0 /* qr0 */
/* 803012F0  DB 81 00 F0 */	stfd f28, 0xf0(r1)
/* 803012F4  F3 81 00 F8 */	psq_st f28, 248(r1), 0, 0 /* qr0 */
/* 803012F8  DB 61 00 E0 */	stfd f27, 0xe0(r1)
/* 803012FC  F3 61 00 E8 */	psq_st f27, 232(r1), 0, 0 /* qr0 */
/* 80301300  DB 41 00 D0 */	stfd f26, 0xd0(r1)
/* 80301304  F3 41 00 D8 */	psq_st f26, 216(r1), 0, 0 /* qr0 */
/* 80301308  39 61 00 D0 */	addi r11, r1, 0xd0
/* 8030130C  48 06 0E C1 */	bl _savegpr_25
/* 80301310  7C 7F 1B 78 */	mr r31, r3
/* 80301314  7C 9D 23 78 */	mr r29, r4
/* 80301318  7C B9 2B 78 */	mr r25, r5
/* 8030131C  C0 24 00 08 */	lfs f1, 8(r4)
/* 80301320  C0 04 00 00 */	lfs f0, 0(r4)
/* 80301324  EC 21 00 28 */	fsubs f1, f1, f0
/* 80301328  A8 03 01 40 */	lha r0, 0x140(r3)
/* 8030132C  C8 42 C8 A0 */	lfd f2, lit_1549(r2)
/* 80301330  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80301334  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80301338  3C 60 43 30 */	lis r3, 0x4330
/* 8030133C  90 61 00 28 */	stw r3, 0x28(r1)
/* 80301340  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80301344  EC 00 10 28 */	fsubs f0, f0, f2
/* 80301348  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8030134C  4C 41 13 82 */	cror 2, 1, 2
/* 80301350  40 82 05 FC */	bne lbl_8030194C
/* 80301354  C0 3D 00 0C */	lfs f1, 0xc(r29)
/* 80301358  C0 1D 00 04 */	lfs f0, 4(r29)
/* 8030135C  EC 21 00 28 */	fsubs f1, f1, f0
/* 80301360  A8 1F 01 42 */	lha r0, 0x142(r31)
/* 80301364  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80301368  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8030136C  90 61 00 28 */	stw r3, 0x28(r1)
/* 80301370  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80301374  EC 00 10 28 */	fsubs f0, f0, f2
/* 80301378  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8030137C  4C 41 13 82 */	cror 2, 1, 2
/* 80301380  40 82 05 CC */	bne lbl_8030194C
/* 80301384  3B 60 00 00 */	li r27, 0
/* 80301388  3B 40 00 00 */	li r26, 0
/* 8030138C  3B C0 00 00 */	li r30, 0
/* 80301390  3B 81 00 18 */	addi r28, r1, 0x18
lbl_80301394:
/* 80301394  38 1E 01 48 */	addi r0, r30, 0x148
/* 80301398  7C 7F 00 2E */	lwzx r3, r31, r0
/* 8030139C  28 03 00 00 */	cmplwi r3, 0
/* 803013A0  41 82 05 AC */	beq lbl_8030194C
/* 803013A4  80 63 00 70 */	lwz r3, 0x70(r3)
/* 803013A8  28 03 00 00 */	cmplwi r3, 0
/* 803013AC  41 82 05 A0 */	beq lbl_8030194C
/* 803013B0  38 80 00 00 */	li r4, 0
/* 803013B4  81 83 00 00 */	lwz r12, 0(r3)
/* 803013B8  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 803013BC  7D 89 03 A6 */	mtctr r12
/* 803013C0  4E 80 04 21 */	bctrl 
/* 803013C4  7C 7C F1 2E */	stwx r3, r28, r30
/* 803013C8  7C 1C F0 2E */	lwzx r0, r28, r30
/* 803013CC  28 00 00 00 */	cmplwi r0, 0
/* 803013D0  40 82 00 08 */	bne lbl_803013D8
/* 803013D4  3B 60 00 01 */	li r27, 1
lbl_803013D8:
/* 803013D8  3B 5A 00 01 */	addi r26, r26, 1
/* 803013DC  2C 1A 00 04 */	cmpwi r26, 4
/* 803013E0  3B DE 00 04 */	addi r30, r30, 4
/* 803013E4  41 80 FF B0 */	blt lbl_80301394
/* 803013E8  C0 19 00 00 */	lfs f0, 0(r25)
/* 803013EC  D0 01 00 08 */	stfs f0, 8(r1)
/* 803013F0  C0 B9 00 04 */	lfs f5, 4(r25)
/* 803013F4  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 803013F8  C0 99 00 08 */	lfs f4, 8(r25)
/* 803013FC  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 80301400  C0 79 00 0C */	lfs f3, 0xc(r25)
/* 80301404  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 80301408  C0 5D 00 00 */	lfs f2, 0(r29)
/* 8030140C  EC 00 10 2A */	fadds f0, f0, f2
/* 80301410  D0 01 00 08 */	stfs f0, 8(r1)
/* 80301414  C0 3D 00 04 */	lfs f1, 4(r29)
/* 80301418  EC 05 08 2A */	fadds f0, f5, f1
/* 8030141C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80301420  EC 04 10 2A */	fadds f0, f4, f2
/* 80301424  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80301428  EC 03 08 2A */	fadds f0, f3, f1
/* 8030142C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80301430  7F E3 FB 78 */	mr r3, r31
/* 80301434  38 81 00 08 */	addi r4, r1, 8
/* 80301438  81 9F 00 00 */	lwz r12, 0(r31)
/* 8030143C  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 80301440  7D 89 03 A6 */	mtctr r12
/* 80301444  4E 80 04 21 */	bctrl 
/* 80301448  48 05 A1 45 */	bl GXClearVtxDesc
/* 8030144C  38 60 00 09 */	li r3, 9
/* 80301450  38 80 00 01 */	li r4, 1
/* 80301454  48 05 9A 65 */	bl GXSetVtxDesc
/* 80301458  38 60 00 0B */	li r3, 0xb
/* 8030145C  38 80 00 01 */	li r4, 1
/* 80301460  48 05 9A 59 */	bl GXSetVtxDesc
/* 80301464  38 60 00 0D */	li r3, 0xd
/* 80301468  38 80 00 01 */	li r4, 1
/* 8030146C  48 05 9A 4D */	bl GXSetVtxDesc
/* 80301470  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80301474  40 82 04 A4 */	bne lbl_80301918
/* 80301478  C3 FD 00 00 */	lfs f31, 0(r29)
/* 8030147C  C3 DD 00 04 */	lfs f30, 4(r29)
/* 80301480  83 C1 00 24 */	lwz r30, 0x24(r1)
/* 80301484  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 80301488  A0 03 00 02 */	lhz r0, 2(r3)
/* 8030148C  C0 3D 00 08 */	lfs f1, 8(r29)
/* 80301490  C8 82 C8 A0 */	lfd f4, lit_1549(r2)
/* 80301494  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80301498  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8030149C  3D 20 43 30 */	lis r9, 0x4330
/* 803014A0  91 21 00 28 */	stw r9, 0x28(r1)
/* 803014A4  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 803014A8  EC 00 20 28 */	fsubs f0, f0, f4
/* 803014AC  EF A1 00 28 */	fsubs f29, f1, f0
/* 803014B0  A0 03 00 04 */	lhz r0, 4(r3)
/* 803014B4  C0 3D 00 0C */	lfs f1, 0xc(r29)
/* 803014B8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803014BC  90 01 00 34 */	stw r0, 0x34(r1)
/* 803014C0  91 21 00 30 */	stw r9, 0x30(r1)
/* 803014C4  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 803014C8  EC 00 20 28 */	fsubs f0, f0, f4
/* 803014CC  EF 81 00 28 */	fsubs f28, f1, f0
/* 803014D0  80 61 00 18 */	lwz r3, 0x18(r1)
/* 803014D4  80 63 00 20 */	lwz r3, 0x20(r3)
/* 803014D8  A0 03 00 02 */	lhz r0, 2(r3)
/* 803014DC  6C 08 80 00 */	xoris r8, r0, 0x8000
/* 803014E0  91 01 00 3C */	stw r8, 0x3c(r1)
/* 803014E4  91 21 00 38 */	stw r9, 0x38(r1)
/* 803014E8  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 803014EC  EC 00 20 28 */	fsubs f0, f0, f4
/* 803014F0  EF 7F 00 2A */	fadds f27, f31, f0
/* 803014F4  A0 03 00 04 */	lhz r0, 4(r3)
/* 803014F8  6C 06 80 00 */	xoris r6, r0, 0x8000
/* 803014FC  90 C1 00 44 */	stw r6, 0x44(r1)
/* 80301500  91 21 00 40 */	stw r9, 0x40(r1)
/* 80301504  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 80301508  EC 00 20 28 */	fsubs f0, f0, f4
/* 8030150C  EF 5E 00 2A */	fadds f26, f30, f0
/* 80301510  88 BF 01 44 */	lbz r5, 0x144(r31)
/* 80301514  54 A0 CF FE */	rlwinm r0, r5, 0x19, 0x1f, 0x1f
/* 80301518  7C 00 00 D0 */	neg r0, r0
/* 8030151C  3C 60 00 01 */	lis r3, 0x0001 /* 0x00008000@ha */
/* 80301520  38 E3 80 00 */	addi r7, r3, 0x8000 /* 0x00008000@l */
/* 80301524  7C E4 00 78 */	andc r4, r7, r0
/* 80301528  54 A0 D7 FE */	rlwinm r0, r5, 0x1a, 0x1f, 0x1f
/* 8030152C  7C 00 00 D0 */	neg r0, r0
/* 80301530  7C E5 00 78 */	andc r5, r7, r0
/* 80301534  7F E3 FB 78 */	mr r3, r31
/* 80301538  FC 20 F8 90 */	fmr f1, f31
/* 8030153C  FC 40 F0 90 */	fmr f2, f30
/* 80301540  91 01 00 4C */	stw r8, 0x4c(r1)
/* 80301544  91 21 00 48 */	stw r9, 0x48(r1)
/* 80301548  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 8030154C  EC 60 20 28 */	fsubs f3, f0, f4
/* 80301550  90 C1 00 54 */	stw r6, 0x54(r1)
/* 80301554  91 21 00 50 */	stw r9, 0x50(r1)
/* 80301558  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 8030155C  EC 80 20 28 */	fsubs f4, f0, f4
/* 80301560  7C 04 38 50 */	subf r0, r4, r7
/* 80301564  54 06 04 3E */	clrlwi r6, r0, 0x10
/* 80301568  7C 05 38 50 */	subf r0, r5, r7
/* 8030156C  54 07 04 3E */	clrlwi r7, r0, 0x10
/* 80301570  81 1F 01 48 */	lwz r8, 0x148(r31)
/* 80301574  39 20 00 01 */	li r9, 1
/* 80301578  48 00 07 FD */	bl drawFrameTexture__11J2DWindowExFffffUsUsUsUsP11J2DMaterialb
/* 8030157C  81 1F 01 4C */	lwz r8, 0x14c(r31)
/* 80301580  80 1F 01 48 */	lwz r0, 0x148(r31)
/* 80301584  7C 68 00 50 */	subf r3, r8, r0
/* 80301588  30 03 FF FF */	addic r0, r3, -1
/* 8030158C  7D 20 19 10 */	subfe r9, r0, r3
/* 80301590  88 BF 01 44 */	lbz r5, 0x144(r31)
/* 80301594  54 A0 DF FE */	rlwinm r0, r5, 0x1b, 0x1f, 0x1f
/* 80301598  7C 00 00 D0 */	neg r0, r0
/* 8030159C  3C 60 00 01 */	lis r3, 0x0001 /* 0x00008000@ha */
/* 803015A0  39 43 80 00 */	addi r10, r3, 0x8000 /* 0x00008000@l */
/* 803015A4  7D 44 00 78 */	andc r4, r10, r0
/* 803015A8  54 A0 E7 FE */	rlwinm r0, r5, 0x1c, 0x1f, 0x1f
/* 803015AC  7C 00 00 D0 */	neg r0, r0
/* 803015B0  7D 45 00 78 */	andc r5, r10, r0
/* 803015B4  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 803015B8  A0 03 00 02 */	lhz r0, 2(r3)
/* 803015BC  7F E3 FB 78 */	mr r3, r31
/* 803015C0  FC 20 E8 90 */	fmr f1, f29
/* 803015C4  FC 40 F0 90 */	fmr f2, f30
/* 803015C8  C8 82 C8 A0 */	lfd f4, lit_1549(r2)
/* 803015CC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803015D0  90 01 00 5C */	stw r0, 0x5c(r1)
/* 803015D4  3C E0 43 30 */	lis r7, 0x4330
/* 803015D8  90 E1 00 58 */	stw r7, 0x58(r1)
/* 803015DC  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 803015E0  EC 60 20 28 */	fsubs f3, f0, f4
/* 803015E4  80 C1 00 18 */	lwz r6, 0x18(r1)
/* 803015E8  80 C6 00 20 */	lwz r6, 0x20(r6)
/* 803015EC  A0 06 00 04 */	lhz r0, 4(r6)
/* 803015F0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803015F4  90 01 00 64 */	stw r0, 0x64(r1)
/* 803015F8  90 E1 00 60 */	stw r7, 0x60(r1)
/* 803015FC  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 80301600  EC 80 20 28 */	fsubs f4, f0, f4
/* 80301604  7C 04 50 50 */	subf r0, r4, r10
/* 80301608  54 06 04 3E */	clrlwi r6, r0, 0x10
/* 8030160C  7C 05 50 50 */	subf r0, r5, r10
/* 80301610  54 07 04 3E */	clrlwi r7, r0, 0x10
/* 80301614  48 00 07 61 */	bl drawFrameTexture__11J2DWindowExFffffUsUsUsUsP11J2DMaterialb
/* 80301618  88 BF 01 44 */	lbz r5, 0x144(r31)
/* 8030161C  54 A0 DF FE */	rlwinm r0, r5, 0x1b, 0x1f, 0x1f
/* 80301620  7C 00 00 D0 */	neg r0, r0
/* 80301624  3C 60 00 01 */	lis r3, 0x0001 /* 0x00008000@ha */
/* 80301628  38 63 80 00 */	addi r3, r3, 0x8000 /* 0x00008000@l */
/* 8030162C  7C 64 00 38 */	and r4, r3, r0
/* 80301630  54 A0 E7 FE */	rlwinm r0, r5, 0x1c, 0x1f, 0x1f
/* 80301634  7C 00 00 D0 */	neg r0, r0
/* 80301638  7C 65 00 78 */	andc r5, r3, r0
/* 8030163C  7F E3 FB 78 */	mr r3, r31
/* 80301640  FC 20 D8 90 */	fmr f1, f27
/* 80301644  FC 40 F0 90 */	fmr f2, f30
/* 80301648  EF DD D8 28 */	fsubs f30, f29, f27
/* 8030164C  FC 60 F0 90 */	fmr f3, f30
/* 80301650  80 C1 00 18 */	lwz r6, 0x18(r1)
/* 80301654  80 C6 00 20 */	lwz r6, 0x20(r6)
/* 80301658  A0 06 00 04 */	lhz r0, 4(r6)
/* 8030165C  C8 82 C8 A0 */	lfd f4, lit_1549(r2)
/* 80301660  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80301664  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80301668  3C 00 43 30 */	lis r0, 0x4330
/* 8030166C  90 01 00 68 */	stw r0, 0x68(r1)
/* 80301670  C8 01 00 68 */	lfd f0, 0x68(r1)
/* 80301674  EC 80 20 28 */	fsubs f4, f0, f4
/* 80301678  7C 86 23 78 */	mr r6, r4
/* 8030167C  68 A0 80 00 */	xori r0, r5, 0x8000
/* 80301680  54 07 04 3E */	clrlwi r7, r0, 0x10
/* 80301684  81 1F 01 4C */	lwz r8, 0x14c(r31)
/* 80301688  39 20 00 00 */	li r9, 0
/* 8030168C  48 00 06 E9 */	bl drawFrameTexture__11J2DWindowExFffffUsUsUsUsP11J2DMaterialb
/* 80301690  81 1F 01 54 */	lwz r8, 0x154(r31)
/* 80301694  80 1F 01 4C */	lwz r0, 0x14c(r31)
/* 80301698  7C 68 00 50 */	subf r3, r8, r0
/* 8030169C  30 03 FF FF */	addic r0, r3, -1
/* 803016A0  7D 20 19 10 */	subfe r9, r0, r3
/* 803016A4  88 BF 01 44 */	lbz r5, 0x144(r31)
/* 803016A8  54 A0 FF FE */	rlwinm r0, r5, 0x1f, 0x1f, 0x1f
/* 803016AC  7C 00 00 D0 */	neg r0, r0
/* 803016B0  3C 60 00 01 */	lis r3, 0x0001 /* 0x00008000@ha */
/* 803016B4  38 E3 80 00 */	addi r7, r3, 0x8000 /* 0x00008000@l */
/* 803016B8  7C E4 00 78 */	andc r4, r7, r0
/* 803016BC  54 A0 07 FE */	clrlwi r0, r5, 0x1f
/* 803016C0  7C 00 00 D0 */	neg r0, r0
/* 803016C4  7C E5 00 78 */	andc r5, r7, r0
/* 803016C8  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 803016CC  A1 43 00 04 */	lhz r10, 4(r3)
/* 803016D0  A0 03 00 02 */	lhz r0, 2(r3)
/* 803016D4  7F E3 FB 78 */	mr r3, r31
/* 803016D8  FC 20 E8 90 */	fmr f1, f29
/* 803016DC  FC 40 E0 90 */	fmr f2, f28
/* 803016E0  C8 82 C8 A0 */	lfd f4, lit_1549(r2)
/* 803016E4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803016E8  90 01 00 74 */	stw r0, 0x74(r1)
/* 803016EC  3C C0 43 30 */	lis r6, 0x4330
/* 803016F0  90 C1 00 70 */	stw r6, 0x70(r1)
/* 803016F4  C8 01 00 70 */	lfd f0, 0x70(r1)
/* 803016F8  EC 60 20 28 */	fsubs f3, f0, f4
/* 803016FC  6D 40 80 00 */	xoris r0, r10, 0x8000
/* 80301700  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80301704  90 C1 00 78 */	stw r6, 0x78(r1)
/* 80301708  C8 01 00 78 */	lfd f0, 0x78(r1)
/* 8030170C  EC 80 20 28 */	fsubs f4, f0, f4
/* 80301710  7C 04 38 50 */	subf r0, r4, r7
/* 80301714  54 06 04 3E */	clrlwi r6, r0, 0x10
/* 80301718  7C 05 38 50 */	subf r0, r5, r7
/* 8030171C  54 07 04 3E */	clrlwi r7, r0, 0x10
/* 80301720  48 00 06 55 */	bl drawFrameTexture__11J2DWindowExFffffUsUsUsUsP11J2DMaterialb
/* 80301724  88 BF 01 44 */	lbz r5, 0x144(r31)
/* 80301728  54 A0 FF FE */	rlwinm r0, r5, 0x1f, 0x1f, 0x1f
/* 8030172C  7C 00 00 D0 */	neg r0, r0
/* 80301730  3C 60 00 01 */	lis r3, 0x0001 /* 0x00008000@ha */
/* 80301734  38 63 80 00 */	addi r3, r3, 0x8000 /* 0x00008000@l */
/* 80301738  7C 64 00 38 */	and r4, r3, r0
/* 8030173C  54 A0 07 FE */	clrlwi r0, r5, 0x1f
/* 80301740  7C 00 00 D0 */	neg r0, r0
/* 80301744  7C 65 00 78 */	andc r5, r3, r0
/* 80301748  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 8030174C  A0 03 00 04 */	lhz r0, 4(r3)
/* 80301750  7F E3 FB 78 */	mr r3, r31
/* 80301754  FC 20 D8 90 */	fmr f1, f27
/* 80301758  FC 40 E0 90 */	fmr f2, f28
/* 8030175C  FC 60 F0 90 */	fmr f3, f30
/* 80301760  C8 82 C8 A0 */	lfd f4, lit_1549(r2)
/* 80301764  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80301768  90 01 00 84 */	stw r0, 0x84(r1)
/* 8030176C  3C 00 43 30 */	lis r0, 0x4330
/* 80301770  90 01 00 80 */	stw r0, 0x80(r1)
/* 80301774  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80301778  EC 80 20 28 */	fsubs f4, f0, f4
/* 8030177C  7C 86 23 78 */	mr r6, r4
/* 80301780  68 A0 80 00 */	xori r0, r5, 0x8000
/* 80301784  54 07 04 3E */	clrlwi r7, r0, 0x10
/* 80301788  81 1F 01 54 */	lwz r8, 0x154(r31)
/* 8030178C  39 20 00 00 */	li r9, 0
/* 80301790  48 00 05 E5 */	bl drawFrameTexture__11J2DWindowExFffffUsUsUsUsP11J2DMaterialb
/* 80301794  88 BF 01 44 */	lbz r5, 0x144(r31)
/* 80301798  54 A0 FF FE */	rlwinm r0, r5, 0x1f, 0x1f, 0x1f
/* 8030179C  7C 00 00 D0 */	neg r0, r0
/* 803017A0  3C 60 00 01 */	lis r3, 0x0001 /* 0x00008000@ha */
/* 803017A4  38 63 80 00 */	addi r3, r3, 0x8000 /* 0x00008000@l */
/* 803017A8  7C 64 00 78 */	andc r4, r3, r0
/* 803017AC  54 A0 07 FE */	clrlwi r0, r5, 0x1f
/* 803017B0  7C 00 00 D0 */	neg r0, r0
/* 803017B4  7C 65 00 38 */	and r5, r3, r0
/* 803017B8  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 803017BC  A0 03 00 02 */	lhz r0, 2(r3)
/* 803017C0  7F E3 FB 78 */	mr r3, r31
/* 803017C4  FC 20 E8 90 */	fmr f1, f29
/* 803017C8  FC 40 D0 90 */	fmr f2, f26
/* 803017CC  C8 62 C8 A0 */	lfd f3, lit_1549(r2)
/* 803017D0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803017D4  90 01 00 8C */	stw r0, 0x8c(r1)
/* 803017D8  3C 00 43 30 */	lis r0, 0x4330
/* 803017DC  90 01 00 88 */	stw r0, 0x88(r1)
/* 803017E0  C8 01 00 88 */	lfd f0, 0x88(r1)
/* 803017E4  EC 60 18 28 */	fsubs f3, f0, f3
/* 803017E8  EF 7C D0 28 */	fsubs f27, f28, f26
/* 803017EC  FC 80 D8 90 */	fmr f4, f27
/* 803017F0  68 80 80 00 */	xori r0, r4, 0x8000
/* 803017F4  54 06 04 3E */	clrlwi r6, r0, 0x10
/* 803017F8  7C A7 2B 78 */	mr r7, r5
/* 803017FC  81 1F 01 54 */	lwz r8, 0x154(r31)
/* 80301800  39 20 00 00 */	li r9, 0
/* 80301804  48 00 05 71 */	bl drawFrameTexture__11J2DWindowExFffffUsUsUsUsP11J2DMaterialb
/* 80301808  81 1F 01 50 */	lwz r8, 0x150(r31)
/* 8030180C  80 1F 01 54 */	lwz r0, 0x154(r31)
/* 80301810  7C 68 00 50 */	subf r3, r8, r0
/* 80301814  30 03 FF FF */	addic r0, r3, -1
/* 80301818  7D 20 19 10 */	subfe r9, r0, r3
/* 8030181C  88 BF 01 44 */	lbz r5, 0x144(r31)
/* 80301820  54 A0 EF FE */	rlwinm r0, r5, 0x1d, 0x1f, 0x1f
/* 80301824  7C 00 00 D0 */	neg r0, r0
/* 80301828  3C 60 00 01 */	lis r3, 0x0001 /* 0x00008000@ha */
/* 8030182C  38 E3 80 00 */	addi r7, r3, 0x8000 /* 0x00008000@l */
/* 80301830  7C E4 00 78 */	andc r4, r7, r0
/* 80301834  54 A0 F7 FE */	rlwinm r0, r5, 0x1e, 0x1f, 0x1f
/* 80301838  7C 00 00 D0 */	neg r0, r0
/* 8030183C  7C E5 00 78 */	andc r5, r7, r0
/* 80301840  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 80301844  A1 43 00 04 */	lhz r10, 4(r3)
/* 80301848  7F E3 FB 78 */	mr r3, r31
/* 8030184C  FC 20 F8 90 */	fmr f1, f31
/* 80301850  FC 40 E0 90 */	fmr f2, f28
/* 80301854  80 C1 00 18 */	lwz r6, 0x18(r1)
/* 80301858  80 C6 00 20 */	lwz r6, 0x20(r6)
/* 8030185C  A0 06 00 02 */	lhz r0, 2(r6)
/* 80301860  C8 82 C8 A0 */	lfd f4, lit_1549(r2)
/* 80301864  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80301868  90 01 00 94 */	stw r0, 0x94(r1)
/* 8030186C  3C C0 43 30 */	lis r6, 0x4330
/* 80301870  90 C1 00 90 */	stw r6, 0x90(r1)
/* 80301874  C8 01 00 90 */	lfd f0, 0x90(r1)
/* 80301878  EC 60 20 28 */	fsubs f3, f0, f4
/* 8030187C  6D 40 80 00 */	xoris r0, r10, 0x8000
/* 80301880  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80301884  90 C1 00 98 */	stw r6, 0x98(r1)
/* 80301888  C8 01 00 98 */	lfd f0, 0x98(r1)
/* 8030188C  EC 80 20 28 */	fsubs f4, f0, f4
/* 80301890  7C 04 38 50 */	subf r0, r4, r7
/* 80301894  54 06 04 3E */	clrlwi r6, r0, 0x10
/* 80301898  7C 05 38 50 */	subf r0, r5, r7
/* 8030189C  54 07 04 3E */	clrlwi r7, r0, 0x10
/* 803018A0  48 00 04 D5 */	bl drawFrameTexture__11J2DWindowExFffffUsUsUsUsP11J2DMaterialb
/* 803018A4  88 BF 01 44 */	lbz r5, 0x144(r31)
/* 803018A8  54 A0 EF FE */	rlwinm r0, r5, 0x1d, 0x1f, 0x1f
/* 803018AC  7C 00 00 D0 */	neg r0, r0
/* 803018B0  3C 60 00 01 */	lis r3, 0x0001 /* 0x00008000@ha */
/* 803018B4  38 63 80 00 */	addi r3, r3, 0x8000 /* 0x00008000@l */
/* 803018B8  7C 64 00 78 */	andc r4, r3, r0
/* 803018BC  54 A0 F7 FE */	rlwinm r0, r5, 0x1e, 0x1f, 0x1f
/* 803018C0  7C 00 00 D0 */	neg r0, r0
/* 803018C4  7C 65 00 38 */	and r5, r3, r0
/* 803018C8  7F E3 FB 78 */	mr r3, r31
/* 803018CC  FC 20 F8 90 */	fmr f1, f31
/* 803018D0  FC 40 D0 90 */	fmr f2, f26
/* 803018D4  80 C1 00 18 */	lwz r6, 0x18(r1)
/* 803018D8  80 C6 00 20 */	lwz r6, 0x20(r6)
/* 803018DC  A0 06 00 02 */	lhz r0, 2(r6)
/* 803018E0  C8 62 C8 A0 */	lfd f3, lit_1549(r2)
/* 803018E4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803018E8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 803018EC  3C 00 43 30 */	lis r0, 0x4330
/* 803018F0  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 803018F4  C8 01 00 A0 */	lfd f0, 0xa0(r1)
/* 803018F8  EC 60 18 28 */	fsubs f3, f0, f3
/* 803018FC  FC 80 D8 90 */	fmr f4, f27
/* 80301900  68 80 80 00 */	xori r0, r4, 0x8000
/* 80301904  54 06 04 3E */	clrlwi r6, r0, 0x10
/* 80301908  7C A7 2B 78 */	mr r7, r5
/* 8030190C  81 1F 01 50 */	lwz r8, 0x150(r31)
/* 80301910  39 20 00 00 */	li r9, 0
/* 80301914  48 00 04 61 */	bl drawFrameTexture__11J2DWindowExFffffUsUsUsUsP11J2DMaterialb
lbl_80301918:
/* 80301918  38 60 00 00 */	li r3, 0
/* 8030191C  38 80 00 04 */	li r4, 4
/* 80301920  48 05 D8 79 */	bl GXSetTevOp
/* 80301924  38 60 00 00 */	li r3, 0
/* 80301928  38 80 00 FF */	li r4, 0xff
/* 8030192C  38 A0 00 FF */	li r5, 0xff
/* 80301930  38 C0 00 04 */	li r6, 4
/* 80301934  48 05 DD C1 */	bl GXSetTevOrder
/* 80301938  38 60 00 00 */	li r3, 0
/* 8030193C  48 05 A4 C1 */	bl GXSetNumTexGens
/* 80301940  38 60 00 0D */	li r3, 0xd
/* 80301944  38 80 00 00 */	li r4, 0
/* 80301948  48 05 95 71 */	bl GXSetVtxDesc
lbl_8030194C:
/* 8030194C  E3 E1 01 28 */	psq_l f31, 296(r1), 0, 0 /* qr0 */
/* 80301950  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 80301954  E3 C1 01 18 */	psq_l f30, 280(r1), 0, 0 /* qr0 */
/* 80301958  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 8030195C  E3 A1 01 08 */	psq_l f29, 264(r1), 0, 0 /* qr0 */
/* 80301960  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 80301964  E3 81 00 F8 */	psq_l f28, 248(r1), 0, 0 /* qr0 */
/* 80301968  CB 81 00 F0 */	lfd f28, 0xf0(r1)
/* 8030196C  E3 61 00 E8 */	psq_l f27, 232(r1), 0, 0 /* qr0 */
/* 80301970  CB 61 00 E0 */	lfd f27, 0xe0(r1)
/* 80301974  E3 41 00 D8 */	psq_l f26, 216(r1), 0, 0 /* qr0 */
/* 80301978  CB 41 00 D0 */	lfd f26, 0xd0(r1)
/* 8030197C  39 61 00 D0 */	addi r11, r1, 0xd0
/* 80301980  48 06 08 99 */	bl _restgpr_25
/* 80301984  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80301988  7C 08 03 A6 */	mtlr r0
/* 8030198C  38 21 01 30 */	addi r1, r1, 0x130
/* 80301990  4E 80 00 20 */	blr 
