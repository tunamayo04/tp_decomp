lbl_80767294:
/* 80767294  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80767298  7C 08 02 A6 */	mflr r0
/* 8076729C  90 01 00 44 */	stw r0, 0x44(r1)
/* 807672A0  39 61 00 40 */	addi r11, r1, 0x40
/* 807672A4  4B BF AF 38 */	b _savegpr_29
/* 807672A8  7C 7D 1B 78 */	mr r29, r3
/* 807672AC  7C 9E 23 78 */	mr r30, r4
/* 807672B0  3C 80 80 77 */	lis r4, lit_4007@ha
/* 807672B4  3B E4 B4 5C */	addi r31, r4, lit_4007@l
/* 807672B8  4B 8B 1A 28 */	b fopAc_IsActor__FPv
/* 807672BC  2C 03 00 00 */	cmpwi r3, 0
/* 807672C0  41 82 01 4C */	beq lbl_8076740C
/* 807672C4  A8 1D 00 08 */	lha r0, 8(r29)
/* 807672C8  2C 00 03 08 */	cmpwi r0, 0x308
/* 807672CC  40 82 01 40 */	bne lbl_8076740C
/* 807672D0  80 1D 00 B0 */	lwz r0, 0xb0(r29)
/* 807672D4  28 00 00 01 */	cmplwi r0, 1
/* 807672D8  41 82 00 0C */	beq lbl_807672E4
/* 807672DC  28 00 00 02 */	cmplwi r0, 2
/* 807672E0  40 82 01 2C */	bne lbl_8076740C
lbl_807672E4:
/* 807672E4  38 61 00 0C */	addi r3, r1, 0xc
/* 807672E8  38 9E 04 D0 */	addi r4, r30, 0x4d0
/* 807672EC  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 807672F0  4B AF F8 44 */	b __mi__4cXyzCFRC3Vec
/* 807672F4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 807672F8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 807672FC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80767300  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80767304  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80767308  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8076730C  38 61 00 18 */	addi r3, r1, 0x18
/* 80767310  4B BD FE 28 */	b PSVECSquareMag
/* 80767314  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80767318  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8076731C  40 81 00 58 */	ble lbl_80767374
/* 80767320  FC 00 08 34 */	frsqrte f0, f1
/* 80767324  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 80767328  FC 44 00 32 */	fmul f2, f4, f0
/* 8076732C  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 80767330  FC 00 00 32 */	fmul f0, f0, f0
/* 80767334  FC 01 00 32 */	fmul f0, f1, f0
/* 80767338  FC 03 00 28 */	fsub f0, f3, f0
/* 8076733C  FC 02 00 32 */	fmul f0, f2, f0
/* 80767340  FC 44 00 32 */	fmul f2, f4, f0
/* 80767344  FC 00 00 32 */	fmul f0, f0, f0
/* 80767348  FC 01 00 32 */	fmul f0, f1, f0
/* 8076734C  FC 03 00 28 */	fsub f0, f3, f0
/* 80767350  FC 02 00 32 */	fmul f0, f2, f0
/* 80767354  FC 44 00 32 */	fmul f2, f4, f0
/* 80767358  FC 00 00 32 */	fmul f0, f0, f0
/* 8076735C  FC 01 00 32 */	fmul f0, f1, f0
/* 80767360  FC 03 00 28 */	fsub f0, f3, f0
/* 80767364  FC 02 00 32 */	fmul f0, f2, f0
/* 80767368  FC 21 00 32 */	fmul f1, f1, f0
/* 8076736C  FC 20 08 18 */	frsp f1, f1
/* 80767370  48 00 00 88 */	b lbl_807673F8
lbl_80767374:
/* 80767374  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 80767378  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8076737C  40 80 00 10 */	bge lbl_8076738C
/* 80767380  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80767384  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 80767388  48 00 00 70 */	b lbl_807673F8
lbl_8076738C:
/* 8076738C  D0 21 00 08 */	stfs f1, 8(r1)
/* 80767390  80 81 00 08 */	lwz r4, 8(r1)
/* 80767394  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80767398  3C 00 7F 80 */	lis r0, 0x7f80
/* 8076739C  7C 03 00 00 */	cmpw r3, r0
/* 807673A0  41 82 00 14 */	beq lbl_807673B4
/* 807673A4  40 80 00 40 */	bge lbl_807673E4
/* 807673A8  2C 03 00 00 */	cmpwi r3, 0
/* 807673AC  41 82 00 20 */	beq lbl_807673CC
/* 807673B0  48 00 00 34 */	b lbl_807673E4
lbl_807673B4:
/* 807673B4  54 80 02 7F */	clrlwi. r0, r4, 9
/* 807673B8  41 82 00 0C */	beq lbl_807673C4
/* 807673BC  38 00 00 01 */	li r0, 1
/* 807673C0  48 00 00 28 */	b lbl_807673E8
lbl_807673C4:
/* 807673C4  38 00 00 02 */	li r0, 2
/* 807673C8  48 00 00 20 */	b lbl_807673E8
lbl_807673CC:
/* 807673CC  54 80 02 7F */	clrlwi. r0, r4, 9
/* 807673D0  41 82 00 0C */	beq lbl_807673DC
/* 807673D4  38 00 00 05 */	li r0, 5
/* 807673D8  48 00 00 10 */	b lbl_807673E8
lbl_807673DC:
/* 807673DC  38 00 00 03 */	li r0, 3
/* 807673E0  48 00 00 08 */	b lbl_807673E8
lbl_807673E4:
/* 807673E4  38 00 00 04 */	li r0, 4
lbl_807673E8:
/* 807673E8  2C 00 00 01 */	cmpwi r0, 1
/* 807673EC  40 82 00 0C */	bne lbl_807673F8
/* 807673F0  3C 60 80 45 */	lis r3, __float_nan@ha
/* 807673F4  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_807673F8:
/* 807673F8  C0 1F 00 B8 */	lfs f0, 0xb8(r31)
/* 807673FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80767400  40 80 00 0C */	bge lbl_8076740C
/* 80767404  7F A3 EB 78 */	mr r3, r29
/* 80767408  48 00 00 08 */	b lbl_80767410
lbl_8076740C:
/* 8076740C  38 60 00 00 */	li r3, 0
lbl_80767410:
/* 80767410  39 61 00 40 */	addi r11, r1, 0x40
/* 80767414  4B BF AE 14 */	b _restgpr_29
/* 80767418  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8076741C  7C 08 03 A6 */	mtlr r0
/* 80767420  38 21 00 40 */	addi r1, r1, 0x40
/* 80767424  4E 80 00 20 */	blr 
