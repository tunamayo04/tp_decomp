lbl_80700588:
/* 80700588  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8070058C  7C 08 02 A6 */	mflr r0
/* 80700590  90 01 00 24 */	stw r0, 0x24(r1)
/* 80700594  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80700598  7C 7F 1B 78 */	mr r31, r3
/* 8070059C  38 00 00 56 */	li r0, 0x56
/* 807005A0  B0 01 00 08 */	sth r0, 8(r1)
/* 807005A4  3C 60 80 02 */	lis r3, fpcSch_JudgeForPName__FPvPv@ha
/* 807005A8  38 63 35 78 */	addi r3, r3, fpcSch_JudgeForPName__FPvPv@l
/* 807005AC  38 81 00 08 */	addi r4, r1, 8
/* 807005B0  4B 91 92 48 */	b fopAcIt_Judge__FPFPvPv_PvPv
/* 807005B4  28 03 00 00 */	cmplwi r3, 0
/* 807005B8  40 82 00 0C */	bne lbl_807005C4
/* 807005BC  38 60 00 00 */	li r3, 0
/* 807005C0  48 00 00 64 */	b lbl_80700624
lbl_807005C4:
/* 807005C4  80 9F 06 E4 */	lwz r4, 0x6e4(r31)
/* 807005C8  80 84 00 08 */	lwz r4, 8(r4)
/* 807005CC  C0 24 00 04 */	lfs f1, 4(r4)
/* 807005D0  C0 03 04 D0 */	lfs f0, 0x4d0(r3)
/* 807005D4  EC 41 00 28 */	fsubs f2, f1, f0
/* 807005D8  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 807005DC  C0 03 04 D8 */	lfs f0, 0x4d8(r3)
/* 807005E0  EC 01 00 28 */	fsubs f0, f1, f0
/* 807005E4  EC 22 00 B2 */	fmuls f1, f2, f2
/* 807005E8  EC 00 00 32 */	fmuls f0, f0, f0
/* 807005EC  EC 21 00 2A */	fadds f1, f1, f0
/* 807005F0  3C 60 80 70 */	lis r3, lit_3904@ha
/* 807005F4  C0 03 5A FC */	lfs f0, lit_3904@l(r3)
/* 807005F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 807005FC  40 81 00 0C */	ble lbl_80700608
/* 80700600  FC 00 08 34 */	frsqrte f0, f1
/* 80700604  EC 20 00 72 */	fmuls f1, f0, f1
lbl_80700608:
/* 80700608  3C 60 80 70 */	lis r3, lit_4289@ha
/* 8070060C  C0 03 5B 54 */	lfs f0, lit_4289@l(r3)
/* 80700610  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80700614  40 80 00 0C */	bge lbl_80700620
/* 80700618  38 60 00 01 */	li r3, 1
/* 8070061C  48 00 00 08 */	b lbl_80700624
lbl_80700620:
/* 80700620  38 60 00 00 */	li r3, 0
lbl_80700624:
/* 80700624  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80700628  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8070062C  7C 08 03 A6 */	mtlr r0
/* 80700630  38 21 00 20 */	addi r1, r1, 0x20
/* 80700634  4E 80 00 20 */	blr 
