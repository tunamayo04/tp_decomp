lbl_8010B644:
/* 8010B644  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8010B648  7C 08 02 A6 */	mflr r0
/* 8010B64C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8010B650  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8010B654  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8010B658  7C 7E 1B 78 */	mr r30, r3
/* 8010B65C  7C 9F 23 79 */	or. r31, r4, r4
/* 8010B660  41 82 00 98 */	beq lbl_8010B6F8
/* 8010B664  38 7E 28 54 */	addi r3, r30, 0x2854
/* 8010B668  48 05 36 51 */	bl setData__16daPy_actorKeep_cFP10fopAc_ac_c
/* 8010B66C  38 61 00 08 */	addi r3, r1, 8
/* 8010B670  38 9E 38 04 */	addi r4, r30, 0x3804
/* 8010B674  38 BF 04 D0 */	addi r5, r31, 0x4d0
/* 8010B678  48 15 B4 BD */	bl __mi__4cXyzCFRC3Vec
/* 8010B67C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8010B680  D0 1E 37 C8 */	stfs f0, 0x37c8(r30)
/* 8010B684  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8010B688  D0 1E 37 CC */	stfs f0, 0x37cc(r30)
/* 8010B68C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8010B690  D0 1E 37 D0 */	stfs f0, 0x37d0(r30)
/* 8010B694  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 8010B698  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 8010B69C  A8 1F 04 E4 */	lha r0, 0x4e4(r31)
/* 8010B6A0  7C 00 00 D0 */	neg r0, r0
/* 8010B6A4  7C 04 07 34 */	extsh r4, r0
/* 8010B6A8  4B F0 0C 9D */	bl mDoMtx_XrotS__FPA4_fs
/* 8010B6AC  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 8010B6B0  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 8010B6B4  A8 1F 04 E6 */	lha r0, 0x4e6(r31)
/* 8010B6B8  7C 00 00 D0 */	neg r0, r0
/* 8010B6BC  7C 04 07 34 */	extsh r4, r0
/* 8010B6C0  4B F0 0D 75 */	bl mDoMtx_YrotM__FPA4_fs
/* 8010B6C4  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 8010B6C8  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 8010B6CC  38 9E 37 C8 */	addi r4, r30, 0x37c8
/* 8010B6D0  7C 85 23 78 */	mr r5, r4
/* 8010B6D4  48 23 B7 79 */	bl PSMTXMultVecSR
/* 8010B6D8  A8 1F 04 E6 */	lha r0, 0x4e6(r31)
/* 8010B6DC  B0 1E 30 08 */	sth r0, 0x3008(r30)
/* 8010B6E0  80 1F 04 9C */	lwz r0, 0x49c(r31)
/* 8010B6E4  64 00 00 10 */	oris r0, r0, 0x10
/* 8010B6E8  90 1F 04 9C */	stw r0, 0x49c(r31)
/* 8010B6EC  38 00 00 01 */	li r0, 1
/* 8010B6F0  B0 1E 30 10 */	sth r0, 0x3010(r30)
/* 8010B6F4  48 00 00 14 */	b lbl_8010B708
lbl_8010B6F8:
/* 8010B6F8  38 7E 28 54 */	addi r3, r30, 0x2854
/* 8010B6FC  48 05 36 01 */	bl clearData__16daPy_actorKeep_cFv
/* 8010B700  38 00 00 00 */	li r0, 0
/* 8010B704  B0 1E 30 10 */	sth r0, 0x3010(r30)
lbl_8010B708:
/* 8010B708  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8010B70C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8010B710  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8010B714  7C 08 03 A6 */	mtlr r0
/* 8010B718  38 21 00 20 */	addi r1, r1, 0x20
/* 8010B71C  4E 80 00 20 */	blr 
