lbl_80555FFC:
/* 80555FFC  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80556000  7C 08 02 A6 */	mflr r0
/* 80556004  90 01 00 84 */	stw r0, 0x84(r1)
/* 80556008  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8055600C  F3 E1 00 78 */	psq_st f31, 120(r1), 0, 0 /* qr0 */
/* 80556010  39 61 00 70 */	addi r11, r1, 0x70
/* 80556014  4B E0 C1 C0 */	b _savegpr_27
/* 80556018  7C 7F 1B 78 */	mr r31, r3
/* 8055601C  7C 9B 23 78 */	mr r27, r4
/* 80556020  7C BC 2B 78 */	mr r28, r5
/* 80556024  7C DD 33 78 */	mr r29, r6
/* 80556028  3C A0 80 56 */	lis r5, m__19daNpc_Kolin_Param_c@ha
/* 8055602C  3B C5 A5 B4 */	addi r30, r5, m__19daNpc_Kolin_Param_c@l
/* 80556030  4B AC 49 34 */	b fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 80556034  FF E0 08 90 */	fmr f31, f1
/* 80556038  2C 1C 00 00 */	cmpwi r28, 0
/* 8055603C  40 82 03 38 */	bne lbl_80556374
/* 80556040  7F E3 FB 78 */	mr r3, r31
/* 80556044  7F 64 DB 78 */	mr r4, r27
/* 80556048  4B AC 46 C8 */	b fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 8055604C  7C 64 1B 78 */	mr r4, r3
/* 80556050  38 7F 04 DE */	addi r3, r31, 0x4de
/* 80556054  38 A0 00 06 */	li r5, 6
/* 80556058  38 C0 08 00 */	li r6, 0x800
/* 8055605C  4B D1 A5 AC */	b cLib_addCalcAngleS2__FPssss
/* 80556060  A8 1F 04 DE */	lha r0, 0x4de(r31)
/* 80556064  B0 1F 04 E6 */	sth r0, 0x4e6(r31)
/* 80556068  A8 1F 04 DE */	lha r0, 0x4de(r31)
/* 8055606C  B0 1F 0D 7A */	sth r0, 0xd7a(r31)
/* 80556070  2C 1D 00 00 */	cmpwi r29, 0
/* 80556074  41 82 00 94 */	beq lbl_80556108
/* 80556078  38 7E 00 00 */	addi r3, r30, 0
/* 8055607C  C0 03 00 90 */	lfs f0, 0x90(r3)
/* 80556080  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80556084  4C 40 13 82 */	cror 2, 0, 2
/* 80556088  40 82 00 0C */	bne lbl_80556094
/* 8055608C  EC 3F 00 28 */	fsubs f1, f31, f0
/* 80556090  48 00 00 08 */	b lbl_80556098
lbl_80556094:
/* 80556094  C0 3E 00 EC */	lfs f1, 0xec(r30)
lbl_80556098:
/* 80556098  C0 1E 00 EC */	lfs f0, 0xec(r30)
/* 8055609C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 805560A0  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 805560A4  C0 1E 01 54 */	lfs f0, 0x154(r30)
/* 805560A8  EC 00 00 72 */	fmuls f0, f0, f1
/* 805560AC  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 805560B0  7F E3 FB 78 */	mr r3, r31
/* 805560B4  7F 64 DB 78 */	mr r4, r27
/* 805560B8  4B AC 46 58 */	b fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 805560BC  7C 64 1B 78 */	mr r4, r3
/* 805560C0  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 805560C4  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 805560C8  4B AB 63 14 */	b mDoMtx_YrotS__FPA4_fs
/* 805560CC  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 805560D0  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 805560D4  38 81 00 4C */	addi r4, r1, 0x4c
/* 805560D8  38 A1 00 40 */	addi r5, r1, 0x40
/* 805560DC  4B DF 0C 90 */	b PSMTXMultVec
/* 805560E0  38 7F 04 D0 */	addi r3, r31, 0x4d0
/* 805560E4  38 81 00 40 */	addi r4, r1, 0x40
/* 805560E8  7C 65 1B 78 */	mr r5, r3
/* 805560EC  4B DF 0F A4 */	b PSVECAdd
/* 805560F0  C0 1F 04 D0 */	lfs f0, 0x4d0(r31)
/* 805560F4  D0 1F 04 BC */	stfs f0, 0x4bc(r31)
/* 805560F8  C0 1F 04 D4 */	lfs f0, 0x4d4(r31)
/* 805560FC  D0 1F 04 C0 */	stfs f0, 0x4c0(r31)
/* 80556100  C0 1F 04 D8 */	lfs f0, 0x4d8(r31)
/* 80556104  D0 1F 04 C4 */	stfs f0, 0x4c4(r31)
lbl_80556108:
/* 80556108  80 1F 0B 7C */	lwz r0, 0xb7c(r31)
/* 8055610C  2C 00 00 0F */	cmpwi r0, 0xf
/* 80556110  40 82 00 1C */	bne lbl_8055612C
/* 80556114  38 7F 05 2C */	addi r3, r31, 0x52c
/* 80556118  38 9E 00 00 */	addi r4, r30, 0
/* 8055611C  C0 24 00 94 */	lfs f1, 0x94(r4)
/* 80556120  C0 5E 01 58 */	lfs f2, 0x158(r30)
/* 80556124  4B D1 A6 1C */	b cLib_chaseF__FPfff
/* 80556128  48 00 02 74 */	b lbl_8055639C
lbl_8055612C:
/* 8055612C  C0 3F 0D 40 */	lfs f1, 0xd40(r31)
/* 80556130  C0 1F 0D 4C */	lfs f0, 0xd4c(r31)
/* 80556134  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80556138  40 80 01 20 */	bge lbl_80556258
/* 8055613C  38 61 00 34 */	addi r3, r1, 0x34
/* 80556140  38 9F 0D 3C */	addi r4, r31, 0xd3c
/* 80556144  38 BF 0D 54 */	addi r5, r31, 0xd54
/* 80556148  4B D1 09 EC */	b __mi__4cXyzCFRC3Vec
/* 8055614C  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80556150  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80556154  C0 1E 00 EC */	lfs f0, 0xec(r30)
/* 80556158  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8055615C  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80556160  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80556164  38 61 00 1C */	addi r3, r1, 0x1c
/* 80556168  4B DF 0F D0 */	b PSVECSquareMag
/* 8055616C  C0 1E 00 EC */	lfs f0, 0xec(r30)
/* 80556170  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80556174  40 81 00 58 */	ble lbl_805561CC
/* 80556178  FC 00 08 34 */	frsqrte f0, f1
/* 8055617C  C8 9E 01 30 */	lfd f4, 0x130(r30)
/* 80556180  FC 44 00 32 */	fmul f2, f4, f0
/* 80556184  C8 7E 01 38 */	lfd f3, 0x138(r30)
/* 80556188  FC 00 00 32 */	fmul f0, f0, f0
/* 8055618C  FC 01 00 32 */	fmul f0, f1, f0
/* 80556190  FC 03 00 28 */	fsub f0, f3, f0
/* 80556194  FC 02 00 32 */	fmul f0, f2, f0
/* 80556198  FC 44 00 32 */	fmul f2, f4, f0
/* 8055619C  FC 00 00 32 */	fmul f0, f0, f0
/* 805561A0  FC 01 00 32 */	fmul f0, f1, f0
/* 805561A4  FC 03 00 28 */	fsub f0, f3, f0
/* 805561A8  FC 02 00 32 */	fmul f0, f2, f0
/* 805561AC  FC 44 00 32 */	fmul f2, f4, f0
/* 805561B0  FC 00 00 32 */	fmul f0, f0, f0
/* 805561B4  FC 01 00 32 */	fmul f0, f1, f0
/* 805561B8  FC 03 00 28 */	fsub f0, f3, f0
/* 805561BC  FC 02 00 32 */	fmul f0, f2, f0
/* 805561C0  FC 21 00 32 */	fmul f1, f1, f0
/* 805561C4  FC 20 08 18 */	frsp f1, f1
/* 805561C8  48 00 00 88 */	b lbl_80556250
lbl_805561CC:
/* 805561CC  C8 1E 01 40 */	lfd f0, 0x140(r30)
/* 805561D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805561D4  40 80 00 10 */	bge lbl_805561E4
/* 805561D8  3C 60 80 45 */	lis r3, __float_nan@ha
/* 805561DC  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 805561E0  48 00 00 70 */	b lbl_80556250
lbl_805561E4:
/* 805561E4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 805561E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 805561EC  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 805561F0  3C 00 7F 80 */	lis r0, 0x7f80
/* 805561F4  7C 03 00 00 */	cmpw r3, r0
/* 805561F8  41 82 00 14 */	beq lbl_8055620C
/* 805561FC  40 80 00 40 */	bge lbl_8055623C
/* 80556200  2C 03 00 00 */	cmpwi r3, 0
/* 80556204  41 82 00 20 */	beq lbl_80556224
/* 80556208  48 00 00 34 */	b lbl_8055623C
lbl_8055620C:
/* 8055620C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80556210  41 82 00 0C */	beq lbl_8055621C
/* 80556214  38 00 00 01 */	li r0, 1
/* 80556218  48 00 00 28 */	b lbl_80556240
lbl_8055621C:
/* 8055621C  38 00 00 02 */	li r0, 2
/* 80556220  48 00 00 20 */	b lbl_80556240
lbl_80556224:
/* 80556224  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80556228  41 82 00 0C */	beq lbl_80556234
/* 8055622C  38 00 00 05 */	li r0, 5
/* 80556230  48 00 00 10 */	b lbl_80556240
lbl_80556234:
/* 80556234  38 00 00 03 */	li r0, 3
/* 80556238  48 00 00 08 */	b lbl_80556240
lbl_8055623C:
/* 8055623C  38 00 00 04 */	li r0, 4
lbl_80556240:
/* 80556240  2C 00 00 01 */	cmpwi r0, 1
/* 80556244  40 82 00 0C */	bne lbl_80556250
/* 80556248  3C 60 80 45 */	lis r3, __float_nan@ha
/* 8055624C  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_80556250:
/* 80556250  D0 3F 05 2C */	stfs f1, 0x52c(r31)
/* 80556254  48 00 01 48 */	b lbl_8055639C
lbl_80556258:
/* 80556258  38 61 00 28 */	addi r3, r1, 0x28
/* 8055625C  38 9F 0D 48 */	addi r4, r31, 0xd48
/* 80556260  38 BF 0D 60 */	addi r5, r31, 0xd60
/* 80556264  4B D1 08 D0 */	b __mi__4cXyzCFRC3Vec
/* 80556268  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8055626C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80556270  C0 1E 00 EC */	lfs f0, 0xec(r30)
/* 80556274  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80556278  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8055627C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80556280  38 61 00 10 */	addi r3, r1, 0x10
/* 80556284  4B DF 0E B4 */	b PSVECSquareMag
/* 80556288  C0 1E 00 EC */	lfs f0, 0xec(r30)
/* 8055628C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80556290  40 81 00 58 */	ble lbl_805562E8
/* 80556294  FC 00 08 34 */	frsqrte f0, f1
/* 80556298  C8 9E 01 30 */	lfd f4, 0x130(r30)
/* 8055629C  FC 44 00 32 */	fmul f2, f4, f0
/* 805562A0  C8 7E 01 38 */	lfd f3, 0x138(r30)
/* 805562A4  FC 00 00 32 */	fmul f0, f0, f0
/* 805562A8  FC 01 00 32 */	fmul f0, f1, f0
/* 805562AC  FC 03 00 28 */	fsub f0, f3, f0
/* 805562B0  FC 02 00 32 */	fmul f0, f2, f0
/* 805562B4  FC 44 00 32 */	fmul f2, f4, f0
/* 805562B8  FC 00 00 32 */	fmul f0, f0, f0
/* 805562BC  FC 01 00 32 */	fmul f0, f1, f0
/* 805562C0  FC 03 00 28 */	fsub f0, f3, f0
/* 805562C4  FC 02 00 32 */	fmul f0, f2, f0
/* 805562C8  FC 44 00 32 */	fmul f2, f4, f0
/* 805562CC  FC 00 00 32 */	fmul f0, f0, f0
/* 805562D0  FC 01 00 32 */	fmul f0, f1, f0
/* 805562D4  FC 03 00 28 */	fsub f0, f3, f0
/* 805562D8  FC 02 00 32 */	fmul f0, f2, f0
/* 805562DC  FC 21 00 32 */	fmul f1, f1, f0
/* 805562E0  FC 20 08 18 */	frsp f1, f1
/* 805562E4  48 00 00 88 */	b lbl_8055636C
lbl_805562E8:
/* 805562E8  C8 1E 01 40 */	lfd f0, 0x140(r30)
/* 805562EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805562F0  40 80 00 10 */	bge lbl_80556300
/* 805562F4  3C 60 80 45 */	lis r3, __float_nan@ha
/* 805562F8  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 805562FC  48 00 00 70 */	b lbl_8055636C
lbl_80556300:
/* 80556300  D0 21 00 08 */	stfs f1, 8(r1)
/* 80556304  80 81 00 08 */	lwz r4, 8(r1)
/* 80556308  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8055630C  3C 00 7F 80 */	lis r0, 0x7f80
/* 80556310  7C 03 00 00 */	cmpw r3, r0
/* 80556314  41 82 00 14 */	beq lbl_80556328
/* 80556318  40 80 00 40 */	bge lbl_80556358
/* 8055631C  2C 03 00 00 */	cmpwi r3, 0
/* 80556320  41 82 00 20 */	beq lbl_80556340
/* 80556324  48 00 00 34 */	b lbl_80556358
lbl_80556328:
/* 80556328  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8055632C  41 82 00 0C */	beq lbl_80556338
/* 80556330  38 00 00 01 */	li r0, 1
/* 80556334  48 00 00 28 */	b lbl_8055635C
lbl_80556338:
/* 80556338  38 00 00 02 */	li r0, 2
/* 8055633C  48 00 00 20 */	b lbl_8055635C
lbl_80556340:
/* 80556340  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80556344  41 82 00 0C */	beq lbl_80556350
/* 80556348  38 00 00 05 */	li r0, 5
/* 8055634C  48 00 00 10 */	b lbl_8055635C
lbl_80556350:
/* 80556350  38 00 00 03 */	li r0, 3
/* 80556354  48 00 00 08 */	b lbl_8055635C
lbl_80556358:
/* 80556358  38 00 00 04 */	li r0, 4
lbl_8055635C:
/* 8055635C  2C 00 00 01 */	cmpwi r0, 1
/* 80556360  40 82 00 0C */	bne lbl_8055636C
/* 80556364  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80556368  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_8055636C:
/* 8055636C  D0 3F 05 2C */	stfs f1, 0x52c(r31)
/* 80556370  48 00 00 2C */	b lbl_8055639C
lbl_80556374:
/* 80556374  80 1F 0B 7C */	lwz r0, 0xb7c(r31)
/* 80556378  2C 00 00 0F */	cmpwi r0, 0xf
/* 8055637C  40 82 00 18 */	bne lbl_80556394
/* 80556380  38 7F 05 2C */	addi r3, r31, 0x52c
/* 80556384  C0 3E 00 EC */	lfs f1, 0xec(r30)
/* 80556388  C0 5E 00 FC */	lfs f2, 0xfc(r30)
/* 8055638C  4B D1 A3 B4 */	b cLib_chaseF__FPfff
/* 80556390  48 00 00 0C */	b lbl_8055639C
lbl_80556394:
/* 80556394  C0 1E 00 EC */	lfs f0, 0xec(r30)
/* 80556398  D0 1F 05 2C */	stfs f0, 0x52c(r31)
lbl_8055639C:
/* 8055639C  E3 E1 00 78 */	psq_l f31, 120(r1), 0, 0 /* qr0 */
/* 805563A0  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 805563A4  39 61 00 70 */	addi r11, r1, 0x70
/* 805563A8  4B E0 BE 78 */	b _restgpr_27
/* 805563AC  80 01 00 84 */	lwz r0, 0x84(r1)
/* 805563B0  7C 08 03 A6 */	mtlr r0
/* 805563B4  38 21 00 80 */	addi r1, r1, 0x80
/* 805563B8  4E 80 00 20 */	blr 
