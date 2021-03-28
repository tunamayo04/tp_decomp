lbl_80037788:
/* 80037788  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8003778C  7C 08 02 A6 */	mflr r0
/* 80037790  90 01 00 64 */	stw r0, 0x64(r1)
/* 80037794  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80037798  F3 E1 00 58 */	psq_st f31, 88(r1), 0, 0 /* qr0 */
/* 8003779C  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 800377A0  F3 C1 00 48 */	psq_st f30, 72(r1), 0, 0 /* qr0 */
/* 800377A4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 800377A8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 800377AC  7C 7E 1B 78 */	mr r30, r3
/* 800377B0  7C 9F 23 78 */	mr r31, r4
/* 800377B4  7F E3 FB 78 */	mr r3, r31
/* 800377B8  48 30 F9 81 */	bl PSVECSquareMag
/* 800377BC  FF E0 08 90 */	fmr f31, f1
/* 800377C0  C0 02 83 A8 */	lfs f0, lit_3956(r2)
/* 800377C4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 800377C8  40 81 00 EC */	ble lbl_800378B4
/* 800377CC  38 61 00 14 */	addi r3, r1, 0x14
/* 800377D0  3C 80 80 43 */	lis r4, BaseY__4cXyz@ha
/* 800377D4  38 84 0D 24 */	addi r4, r4, BaseY__4cXyz@l
/* 800377D8  7F E5 FB 78 */	mr r5, r31
/* 800377DC  48 22 F4 E1 */	bl outprod__4cXyzCFRC3Vec
/* 800377E0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 800377E4  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 800377E8  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 800377EC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 800377F0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 800377F4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 800377F8  38 61 00 2C */	addi r3, r1, 0x2c
/* 800377FC  48 30 F9 3D */	bl PSVECSquareMag
/* 80037800  FF C0 08 90 */	fmr f30, f1
/* 80037804  C0 02 83 A8 */	lfs f0, lit_3956(r2)
/* 80037808  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8003780C  40 81 00 80 */	ble lbl_8003788C
/* 80037810  38 61 00 08 */	addi r3, r1, 8
/* 80037814  7F E4 FB 78 */	mr r4, r31
/* 80037818  FC 20 F8 90 */	fmr f1, f31
/* 8003781C  48 22 F3 FD */	bl __dv__4cXyzCFf
/* 80037820  C0 01 00 08 */	lfs f0, 8(r1)
/* 80037824  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80037828  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8003782C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80037830  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80037834  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80037838  3C 60 80 43 */	lis r3, BaseY__4cXyz@ha
/* 8003783C  38 63 0D 24 */	addi r3, r3, BaseY__4cXyz@l
/* 80037840  38 81 00 20 */	addi r4, r1, 0x20
/* 80037844  48 30 F9 51 */	bl PSVECDotProduct
/* 80037848  48 33 4E 99 */	bl acos
/* 8003784C  FF E0 08 18 */	frsp f31, f1
/* 80037850  C0 02 83 A0 */	lfs f0, lit_3801(r2)
/* 80037854  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80037858  40 81 00 0C */	ble lbl_80037864
/* 8003785C  FC 00 F0 34 */	frsqrte f0, f30
/* 80037860  EF C0 07 B2 */	fmuls f30, f0, f30
lbl_80037864:
/* 80037864  38 61 00 2C */	addi r3, r1, 0x2c
/* 80037868  7C 64 1B 78 */	mr r4, r3
/* 8003786C  C0 02 83 98 */	lfs f0, lit_3671(r2)
/* 80037870  EC 20 F0 24 */	fdivs f1, f0, f30
/* 80037874  48 30 F8 65 */	bl PSVECScale
/* 80037878  7F C3 F3 78 */	mr r3, r30
/* 8003787C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80037880  FC 20 F8 90 */	fmr f1, f31
/* 80037884  48 30 FB F1 */	bl C_QUATRotAxisRad
/* 80037888  48 00 00 50 */	b lbl_800378D8
lbl_8003788C:
/* 8003788C  3C 60 80 38 */	lis r3, zero_quat@ha
/* 80037890  C4 03 92 98 */	lfsu f0, zero_quat@l(r3)
/* 80037894  D0 1E 00 00 */	stfs f0, 0(r30)
/* 80037898  C0 03 00 04 */	lfs f0, 4(r3)
/* 8003789C  D0 1E 00 04 */	stfs f0, 4(r30)
/* 800378A0  C0 03 00 08 */	lfs f0, 8(r3)
/* 800378A4  D0 1E 00 08 */	stfs f0, 8(r30)
/* 800378A8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 800378AC  D0 1E 00 0C */	stfs f0, 0xc(r30)
/* 800378B0  48 00 00 28 */	b lbl_800378D8
lbl_800378B4:
/* 800378B4  3C 60 80 38 */	lis r3, zero_quat@ha
/* 800378B8  C4 03 92 98 */	lfsu f0, zero_quat@l(r3)
/* 800378BC  D0 1E 00 00 */	stfs f0, 0(r30)
/* 800378C0  C0 03 00 04 */	lfs f0, 4(r3)
/* 800378C4  D0 1E 00 04 */	stfs f0, 4(r30)
/* 800378C8  C0 03 00 08 */	lfs f0, 8(r3)
/* 800378CC  D0 1E 00 08 */	stfs f0, 8(r30)
/* 800378D0  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 800378D4  D0 1E 00 0C */	stfs f0, 0xc(r30)
lbl_800378D8:
/* 800378D8  E3 E1 00 58 */	psq_l f31, 88(r1), 0, 0 /* qr0 */
/* 800378DC  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 800378E0  E3 C1 00 48 */	psq_l f30, 72(r1), 0, 0 /* qr0 */
/* 800378E4  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 800378E8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 800378EC  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 800378F0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 800378F4  7C 08 03 A6 */	mtlr r0
/* 800378F8  38 21 00 60 */	addi r1, r1, 0x60
/* 800378FC  4E 80 00 20 */	blr 
