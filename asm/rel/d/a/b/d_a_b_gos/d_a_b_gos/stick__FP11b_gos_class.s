lbl_806046E0:
/* 806046E0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 806046E4  7C 08 02 A6 */	mflr r0
/* 806046E8  90 01 00 64 */	stw r0, 0x64(r1)
/* 806046EC  39 61 00 60 */	addi r11, r1, 0x60
/* 806046F0  4B D5 DA E8 */	b _savegpr_28
/* 806046F4  7C 7D 1B 78 */	mr r29, r3
/* 806046F8  3C 60 80 60 */	lis r3, lit_3646@ha
/* 806046FC  3B E3 53 C8 */	addi r31, r3, lit_3646@l
/* 80604700  A8 1D 06 70 */	lha r0, 0x670(r29)
/* 80604704  2C 00 00 01 */	cmpwi r0, 1
/* 80604708  41 82 00 3C */	beq lbl_80604744
/* 8060470C  40 80 00 38 */	bge lbl_80604744
/* 80604710  2C 00 00 00 */	cmpwi r0, 0
/* 80604714  40 80 00 08 */	bge lbl_8060471C
/* 80604718  48 00 00 2C */	b lbl_80604744
lbl_8060471C:
/* 8060471C  38 00 00 01 */	li r0, 1
/* 80604720  B0 1D 06 70 */	sth r0, 0x670(r29)
/* 80604724  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80604728  D0 1D 05 2C */	stfs f0, 0x52c(r29)
/* 8060472C  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 80604730  4B C6 32 24 */	b cM_rndF__Ff
/* 80604734  FC 00 08 1E */	fctiwz f0, f1
/* 80604738  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8060473C  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80604740  B0 1D 06 A0 */	sth r0, 0x6a0(r29)
lbl_80604744:
/* 80604744  38 7D 05 2C */	addi r3, r29, 0x52c
/* 80604748  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 8060474C  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80604750  FC 60 10 90 */	fmr f3, f2
/* 80604754  4B C6 B2 E8 */	b cLib_addCalc2__FPffff
/* 80604758  3C 60 80 60 */	lis r3, boss@ha
/* 8060475C  38 63 56 08 */	addi r3, r3, boss@l
/* 80604760  80 63 00 00 */	lwz r3, 0(r3)
/* 80604764  80 63 05 B4 */	lwz r3, 0x5b4(r3)
/* 80604768  83 C3 00 04 */	lwz r30, 4(r3)
/* 8060476C  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 80604770  80 83 00 0C */	lwz r4, 0xc(r3)
/* 80604774  80 1D 06 60 */	lwz r0, 0x660(r29)
/* 80604778  54 00 18 38 */	slwi r0, r0, 3
/* 8060477C  3C 60 80 60 */	lis r3, j_info@ha
/* 80604780  38 63 54 1C */	addi r3, r3, j_info@l
/* 80604784  7C 03 02 AE */	lhax r0, r3, r0
/* 80604788  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8060478C  1C 00 00 30 */	mulli r0, r0, 0x30
/* 80604790  7C 64 02 14 */	add r3, r4, r0
/* 80604794  3C 80 80 45 */	lis r4, calc_mtx@ha
/* 80604798  38 84 07 68 */	addi r4, r4, calc_mtx@l
/* 8060479C  80 84 00 00 */	lwz r4, 0(r4)
/* 806047A0  4B D4 1D 10 */	b PSMTXCopy
/* 806047A4  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 806047A8  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 806047AC  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 806047B0  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 806047B4  38 61 00 38 */	addi r3, r1, 0x38
/* 806047B8  38 81 00 2C */	addi r4, r1, 0x2c
/* 806047BC  4B C6 C7 30 */	b MtxPosition__FP4cXyzP4cXyz
/* 806047C0  3C 60 80 60 */	lis r3, j_info@ha
/* 806047C4  38 83 54 1C */	addi r4, r3, j_info@l
/* 806047C8  3B 84 00 04 */	addi r28, r4, 4
/* 806047CC  80 1D 06 60 */	lwz r0, 0x660(r29)
/* 806047D0  54 00 18 38 */	slwi r0, r0, 3
/* 806047D4  7C 3C 04 2E */	lfsx f1, r28, r0
/* 806047D8  C0 1F 00 00 */	lfs f0, 0(r31)
/* 806047DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806047E0  40 80 00 80 */	bge lbl_80604860
/* 806047E4  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 806047E8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 806047EC  7C 04 02 AE */	lhax r0, r4, r0
/* 806047F0  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 806047F4  1C 00 00 30 */	mulli r0, r0, 0x30
/* 806047F8  7C 63 02 14 */	add r3, r3, r0
/* 806047FC  3C 80 80 45 */	lis r4, calc_mtx@ha
/* 80604800  38 84 07 68 */	addi r4, r4, calc_mtx@l
/* 80604804  80 84 00 00 */	lwz r4, 0(r4)
/* 80604808  4B D4 1C A8 */	b PSMTXCopy
/* 8060480C  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80604810  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80604814  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80604818  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8060481C  38 61 00 38 */	addi r3, r1, 0x38
/* 80604820  38 81 00 20 */	addi r4, r1, 0x20
/* 80604824  4B C6 C6 C8 */	b MtxPosition__FP4cXyzP4cXyz
/* 80604828  38 61 00 14 */	addi r3, r1, 0x14
/* 8060482C  38 81 00 20 */	addi r4, r1, 0x20
/* 80604830  38 A1 00 2C */	addi r5, r1, 0x2c
/* 80604834  4B C6 23 00 */	b __mi__4cXyzCFRC3Vec
/* 80604838  38 61 00 08 */	addi r3, r1, 8
/* 8060483C  38 81 00 14 */	addi r4, r1, 0x14
/* 80604840  80 1D 06 60 */	lwz r0, 0x660(r29)
/* 80604844  54 00 18 38 */	slwi r0, r0, 3
/* 80604848  7C 3C 04 2E */	lfsx f1, r28, r0
/* 8060484C  4B C6 23 38 */	b __ml__4cXyzCFf
/* 80604850  38 61 00 2C */	addi r3, r1, 0x2c
/* 80604854  38 81 00 08 */	addi r4, r1, 8
/* 80604858  7C 65 1B 78 */	mr r5, r3
/* 8060485C  4B D4 28 34 */	b PSVECAdd
lbl_80604860:
/* 80604860  38 7D 04 D0 */	addi r3, r29, 0x4d0
/* 80604864  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 80604868  C0 5F 00 00 */	lfs f2, 0(r31)
/* 8060486C  C0 7D 05 2C */	lfs f3, 0x52c(r29)
/* 80604870  4B C6 B1 CC */	b cLib_addCalc2__FPffff
/* 80604874  38 7D 04 D4 */	addi r3, r29, 0x4d4
/* 80604878  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8060487C  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80604880  C0 7D 05 2C */	lfs f3, 0x52c(r29)
/* 80604884  4B C6 B1 B8 */	b cLib_addCalc2__FPffff
/* 80604888  38 7D 04 D8 */	addi r3, r29, 0x4d8
/* 8060488C  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 80604890  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80604894  C0 7D 05 2C */	lfs f3, 0x52c(r29)
/* 80604898  4B C6 B1 A4 */	b cLib_addCalc2__FPffff
/* 8060489C  38 7D 04 DE */	addi r3, r29, 0x4de
/* 806048A0  3C 80 80 60 */	lis r4, boss@ha
/* 806048A4  38 84 56 08 */	addi r4, r4, boss@l
/* 806048A8  80 84 00 00 */	lwz r4, 0(r4)
/* 806048AC  A8 84 04 E6 */	lha r4, 0x4e6(r4)
/* 806048B0  A8 1D 06 A0 */	lha r0, 0x6a0(r29)
/* 806048B4  7C 04 02 14 */	add r0, r4, r0
/* 806048B8  7C 04 07 34 */	extsh r4, r0
/* 806048BC  38 A0 00 01 */	li r5, 1
/* 806048C0  38 C0 04 00 */	li r6, 0x400
/* 806048C4  4B C6 BD 44 */	b cLib_addCalcAngleS2__FPssss
/* 806048C8  39 61 00 60 */	addi r11, r1, 0x60
/* 806048CC  4B D5 D9 58 */	b _restgpr_28
/* 806048D0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 806048D4  7C 08 03 A6 */	mtlr r0
/* 806048D8  38 21 00 60 */	addi r1, r1, 0x60
/* 806048DC  4E 80 00 20 */	blr 
