lbl_805985B4:
/* 805985B4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 805985B8  7C 08 02 A6 */	mflr r0
/* 805985BC  90 01 00 34 */	stw r0, 0x34(r1)
/* 805985C0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 805985C4  7C 7F 1B 78 */	mr r31, r3
/* 805985C8  3C 60 80 5A */	lis r3, cNullVec__6Z2Calc@ha
/* 805985CC  38 C3 8F C8 */	addi r6, r3, cNullVec__6Z2Calc@l
/* 805985D0  3C 60 80 5A */	lis r3, data_80599120@ha
/* 805985D4  38 A3 91 20 */	addi r5, r3, data_80599120@l
/* 805985D8  88 05 00 00 */	lbz r0, 0(r5)
/* 805985DC  7C 00 07 75 */	extsb. r0, r0
/* 805985E0  40 82 00 70 */	bne lbl_80598650
/* 805985E4  80 66 00 28 */	lwz r3, 0x28(r6)
/* 805985E8  80 06 00 2C */	lwz r0, 0x2c(r6)
/* 805985EC  90 66 00 58 */	stw r3, 0x58(r6)
/* 805985F0  90 06 00 5C */	stw r0, 0x5c(r6)
/* 805985F4  80 06 00 30 */	lwz r0, 0x30(r6)
/* 805985F8  90 06 00 60 */	stw r0, 0x60(r6)
/* 805985FC  38 86 00 58 */	addi r4, r6, 0x58
/* 80598600  80 66 00 34 */	lwz r3, 0x34(r6)
/* 80598604  80 06 00 38 */	lwz r0, 0x38(r6)
/* 80598608  90 64 00 0C */	stw r3, 0xc(r4)
/* 8059860C  90 04 00 10 */	stw r0, 0x10(r4)
/* 80598610  80 06 00 3C */	lwz r0, 0x3c(r6)
/* 80598614  90 04 00 14 */	stw r0, 0x14(r4)
/* 80598618  80 66 00 40 */	lwz r3, 0x40(r6)
/* 8059861C  80 06 00 44 */	lwz r0, 0x44(r6)
/* 80598620  90 64 00 18 */	stw r3, 0x18(r4)
/* 80598624  90 04 00 1C */	stw r0, 0x1c(r4)
/* 80598628  80 06 00 48 */	lwz r0, 0x48(r6)
/* 8059862C  90 04 00 20 */	stw r0, 0x20(r4)
/* 80598630  80 66 00 4C */	lwz r3, 0x4c(r6)
/* 80598634  80 06 00 50 */	lwz r0, 0x50(r6)
/* 80598638  90 64 00 24 */	stw r3, 0x24(r4)
/* 8059863C  90 04 00 28 */	stw r0, 0x28(r4)
/* 80598640  80 06 00 54 */	lwz r0, 0x54(r6)
/* 80598644  90 04 00 2C */	stw r0, 0x2c(r4)
/* 80598648  38 00 00 01 */	li r0, 1
/* 8059864C  98 05 00 00 */	stb r0, 0(r5)
lbl_80598650:
/* 80598650  7F E3 FB 78 */	mr r3, r31
/* 80598654  88 1F 05 AD */	lbz r0, 0x5ad(r31)
/* 80598658  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8059865C  39 86 00 58 */	addi r12, r6, 0x58
/* 80598660  7D 8C 02 14 */	add r12, r12, r0
/* 80598664  4B DC 9A 20 */	b __ptmf_scall
/* 80598668  60 00 00 00 */	nop 
/* 8059866C  3C 60 80 5A */	lis r3, lit_3766@ha
/* 80598670  C0 23 8F AC */	lfs f1, lit_3766@l(r3)
/* 80598674  C0 1F 05 C8 */	lfs f0, 0x5c8(r31)
/* 80598678  EC 01 00 32 */	fmuls f0, f1, f0
/* 8059867C  FC 00 00 1E */	fctiwz f0, f0
/* 80598680  D8 01 00 08 */	stfd f0, 8(r1)
/* 80598684  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80598688  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha
/* 8059868C  38 83 9A 20 */	addi r4, r3, sincosTable___5JMath@l
/* 80598690  80 7F 05 D8 */	lwz r3, 0x5d8(r31)
/* 80598694  7C 00 07 34 */	extsh r0, r0
/* 80598698  7C 03 01 D6 */	mullw r0, r3, r0
/* 8059869C  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 805986A0  7C 64 02 14 */	add r3, r4, r0
/* 805986A4  C0 43 00 04 */	lfs f2, 4(r3)
/* 805986A8  C0 1F 05 C0 */	lfs f0, 0x5c0(r31)
/* 805986AC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 805986B0  FC 00 00 1E */	fctiwz f0, f0
/* 805986B4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 805986B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805986BC  B0 1F 05 BC */	sth r0, 0x5bc(r31)
/* 805986C0  C0 1F 05 C4 */	lfs f0, 0x5c4(r31)
/* 805986C4  EC 01 00 32 */	fmuls f0, f1, f0
/* 805986C8  FC 00 00 1E */	fctiwz f0, f0
/* 805986CC  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 805986D0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 805986D4  80 7F 05 D8 */	lwz r3, 0x5d8(r31)
/* 805986D8  7C 00 07 34 */	extsh r0, r0
/* 805986DC  7C 03 01 D6 */	mullw r0, r3, r0
/* 805986E0  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 805986E4  7C 24 04 2E */	lfsx f1, r4, r0
/* 805986E8  C0 1F 05 C0 */	lfs f0, 0x5c0(r31)
/* 805986EC  EC 00 00 72 */	fmuls f0, f0, f1
/* 805986F0  FC 00 00 1E */	fctiwz f0, f0
/* 805986F4  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 805986F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 805986FC  B0 1F 05 BA */	sth r0, 0x5ba(r31)
/* 80598700  38 7F 05 C0 */	addi r3, r31, 0x5c0
/* 80598704  3C 80 80 5A */	lis r4, lit_3630@ha
/* 80598708  C0 24 8F 78 */	lfs f1, lit_3630@l(r4)
/* 8059870C  C0 5F 05 CC */	lfs f2, 0x5cc(r31)
/* 80598710  C0 7F 05 D0 */	lfs f3, 0x5d0(r31)
/* 80598714  C0 9F 05 D4 */	lfs f4, 0x5d4(r31)
/* 80598718  4B CD 72 64 */	b cLib_addCalc__FPfffff
/* 8059871C  80 7F 05 D8 */	lwz r3, 0x5d8(r31)
/* 80598720  38 03 00 01 */	addi r0, r3, 1
/* 80598724  90 1F 05 D8 */	stw r0, 0x5d8(r31)
/* 80598728  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8059872C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80598730  7C 08 03 A6 */	mtlr r0
/* 80598734  38 21 00 30 */	addi r1, r1, 0x30
/* 80598738  4E 80 00 20 */	blr 
