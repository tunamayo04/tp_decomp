lbl_807290A0:
/* 807290A0  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 807290A4  7C 08 02 A6 */	mflr r0
/* 807290A8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 807290AC  39 61 00 A0 */	addi r11, r1, 0xa0
/* 807290B0  4B C3 91 04 */	b _savegpr_19
/* 807290B4  7C 7E 1B 78 */	mr r30, r3
/* 807290B8  7C 9A 23 78 */	mr r26, r4
/* 807290BC  7C BB 2B 78 */	mr r27, r5
/* 807290C0  7C DC 33 78 */	mr r28, r6
/* 807290C4  3C 60 80 73 */	lis r3, cNullVec__6Z2Calc@ha
/* 807290C8  3A E3 96 10 */	addi r23, r3, cNullVec__6Z2Calc@l
/* 807290CC  3C 60 80 73 */	lis r3, lit_3800@ha
/* 807290D0  3B E3 95 04 */	addi r31, r3, lit_3800@l
/* 807290D4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 807290D8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 807290DC  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 807290E0  3C 80 80 45 */	lis r4, m_midnaActor__9daPy_py_c@ha
/* 807290E4  80 04 10 18 */	lwz r0, m_midnaActor__9daPy_py_c@l(r4)
/* 807290E8  28 00 00 00 */	cmplwi r0, 0
/* 807290EC  41 82 03 A4 */	beq lbl_80729490
/* 807290F0  7F C4 F3 78 */	mr r4, r30
/* 807290F4  81 83 06 28 */	lwz r12, 0x628(r3)
/* 807290F8  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 807290FC  7D 89 03 A6 */	mtctr r12
/* 80729100  4E 80 04 21 */	bctrl 
/* 80729104  2C 03 00 00 */	cmpwi r3, 0
/* 80729108  41 82 03 88 */	beq lbl_80729490
/* 8072910C  4B A8 34 70 */	b dKy_darkworld_check__Fv
/* 80729110  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80729114  30 03 FF FF */	addic r0, r3, -1
/* 80729118  7F A0 19 10 */	subfe r29, r0, r3
/* 8072911C  88 1E 05 A8 */	lbz r0, 0x5a8(r30)
/* 80729120  28 00 00 00 */	cmplwi r0, 0
/* 80729124  40 82 02 A0 */	bne lbl_807293C4
/* 80729128  38 00 00 01 */	li r0, 1
/* 8072912C  98 1E 05 A8 */	stb r0, 0x5a8(r30)
/* 80729130  3C 60 80 45 */	lis r3, m_midnaActor__9daPy_py_c@ha
/* 80729134  38 63 10 18 */	addi r3, r3, m_midnaActor__9daPy_py_c@l
/* 80729138  80 63 00 00 */	lwz r3, 0(r3)
/* 8072913C  80 63 05 74 */	lwz r3, 0x574(r3)
/* 80729140  80 63 00 84 */	lwz r3, 0x84(r3)
/* 80729144  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80729148  38 63 01 E0 */	addi r3, r3, 0x1e0
/* 8072914C  3C 80 80 3E */	lis r4, now__14mDoMtx_stack_c@ha
/* 80729150  38 84 D4 70 */	addi r4, r4, now__14mDoMtx_stack_c@l
/* 80729154  4B C1 D3 5C */	b PSMTXCopy
/* 80729158  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8072915C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80729160  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80729164  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 80729168  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 8072916C  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 80729170  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 80729174  38 81 00 4C */	addi r4, r1, 0x4c
/* 80729178  38 A1 00 58 */	addi r5, r1, 0x58
/* 8072917C  4B C1 DB F0 */	b PSMTXMultVec
/* 80729180  38 61 00 34 */	addi r3, r1, 0x34
/* 80729184  38 81 00 58 */	addi r4, r1, 0x58
/* 80729188  7F 65 DB 78 */	mr r5, r27
/* 8072918C  4B B3 D9 A8 */	b __mi__4cXyzCFRC3Vec
/* 80729190  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 80729194  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 80729198  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8072919C  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 807291A0  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 807291A4  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 807291A8  4B B3 E4 CC */	b cM_atan2s__Fff
/* 807291AC  B0 61 00 2E */	sth r3, 0x2e(r1)
/* 807291B0  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 807291B4  EC 20 00 32 */	fmuls f1, f0, f0
/* 807291B8  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 807291BC  EC 00 00 32 */	fmuls f0, f0, f0
/* 807291C0  EC 41 00 2A */	fadds f2, f1, f0
/* 807291C4  C0 1F 00 04 */	lfs f0, 4(r31)
/* 807291C8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 807291CC  40 81 00 0C */	ble lbl_807291D8
/* 807291D0  FC 00 10 34 */	frsqrte f0, f2
/* 807291D4  EC 40 00 B2 */	fmuls f2, f0, f2
lbl_807291D8:
/* 807291D8  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 807291DC  4B B3 E4 98 */	b cM_atan2s__Fff
/* 807291E0  7C 03 00 D0 */	neg r0, r3
/* 807291E4  B0 01 00 2C */	sth r0, 0x2c(r1)
/* 807291E8  38 80 00 00 */	li r4, 0
/* 807291EC  B0 81 00 30 */	sth r4, 0x30(r1)
/* 807291F0  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 807291F4  7C 00 07 74 */	extsb r0, r0
/* 807291F8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 807291FC  3B 03 61 C0 */	addi r24, r3, g_dComIfG_gameInfo@l
/* 80729200  80 78 5D 3C */	lwz r3, 0x5d3c(r24)
/* 80729204  57 A5 10 3A */	slwi r5, r29, 2
/* 80729208  90 81 00 08 */	stw r4, 8(r1)
/* 8072920C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80729210  3A B7 00 20 */	addi r21, r23, 0x20
/* 80729214  7E B5 2A 14 */	add r21, r21, r5
/* 80729218  92 A1 00 10 */	stw r21, 0x10(r1)
/* 8072921C  3A D7 00 28 */	addi r22, r23, 0x28
/* 80729220  7E D6 2A 14 */	add r22, r22, r5
/* 80729224  92 C1 00 14 */	stw r22, 0x14(r1)
/* 80729228  90 81 00 18 */	stw r4, 0x18(r1)
/* 8072922C  38 80 00 00 */	li r4, 0
/* 80729230  38 A0 02 9B */	li r5, 0x29b
/* 80729234  7F 66 DB 78 */	mr r6, r27
/* 80729238  38 FE 01 0C */	addi r7, r30, 0x10c
/* 8072923C  39 01 00 2C */	addi r8, r1, 0x2c
/* 80729240  7F 89 E3 78 */	mr r9, r28
/* 80729244  39 40 00 FF */	li r10, 0xff
/* 80729248  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8072924C  4B 92 38 44 */	b set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 80729250  7C 79 1B 79 */	or. r25, r3, r3
/* 80729254  41 82 00 FC */	beq lbl_80729350
/* 80729258  38 61 00 40 */	addi r3, r1, 0x40
/* 8072925C  4B C1 DE DC */	b PSVECSquareMag
/* 80729260  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80729264  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80729268  40 81 00 58 */	ble lbl_807292C0
/* 8072926C  FC 00 08 34 */	frsqrte f0, f1
/* 80729270  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 80729274  FC 44 00 32 */	fmul f2, f4, f0
/* 80729278  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 8072927C  FC 00 00 32 */	fmul f0, f0, f0
/* 80729280  FC 01 00 32 */	fmul f0, f1, f0
/* 80729284  FC 03 00 28 */	fsub f0, f3, f0
/* 80729288  FC 02 00 32 */	fmul f0, f2, f0
/* 8072928C  FC 44 00 32 */	fmul f2, f4, f0
/* 80729290  FC 00 00 32 */	fmul f0, f0, f0
/* 80729294  FC 01 00 32 */	fmul f0, f1, f0
/* 80729298  FC 03 00 28 */	fsub f0, f3, f0
/* 8072929C  FC 02 00 32 */	fmul f0, f2, f0
/* 807292A0  FC 44 00 32 */	fmul f2, f4, f0
/* 807292A4  FC 00 00 32 */	fmul f0, f0, f0
/* 807292A8  FC 01 00 32 */	fmul f0, f1, f0
/* 807292AC  FC 03 00 28 */	fsub f0, f3, f0
/* 807292B0  FC 02 00 32 */	fmul f0, f2, f0
/* 807292B4  FC 21 00 32 */	fmul f1, f1, f0
/* 807292B8  FC 20 08 18 */	frsp f1, f1
/* 807292BC  48 00 00 88 */	b lbl_80729344
lbl_807292C0:
/* 807292C0  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 807292C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 807292C8  40 80 00 10 */	bge lbl_807292D8
/* 807292CC  3C 60 80 45 */	lis r3, __float_nan@ha
/* 807292D0  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 807292D4  48 00 00 70 */	b lbl_80729344
lbl_807292D8:
/* 807292D8  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 807292DC  80 81 00 20 */	lwz r4, 0x20(r1)
/* 807292E0  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 807292E4  3C 00 7F 80 */	lis r0, 0x7f80
/* 807292E8  7C 03 00 00 */	cmpw r3, r0
/* 807292EC  41 82 00 14 */	beq lbl_80729300
/* 807292F0  40 80 00 40 */	bge lbl_80729330
/* 807292F4  2C 03 00 00 */	cmpwi r3, 0
/* 807292F8  41 82 00 20 */	beq lbl_80729318
/* 807292FC  48 00 00 34 */	b lbl_80729330
lbl_80729300:
/* 80729300  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80729304  41 82 00 0C */	beq lbl_80729310
/* 80729308  38 00 00 01 */	li r0, 1
/* 8072930C  48 00 00 28 */	b lbl_80729334
lbl_80729310:
/* 80729310  38 00 00 02 */	li r0, 2
/* 80729314  48 00 00 20 */	b lbl_80729334
lbl_80729318:
/* 80729318  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8072931C  41 82 00 0C */	beq lbl_80729328
/* 80729320  38 00 00 05 */	li r0, 5
/* 80729324  48 00 00 10 */	b lbl_80729334
lbl_80729328:
/* 80729328  38 00 00 03 */	li r0, 3
/* 8072932C  48 00 00 08 */	b lbl_80729334
lbl_80729330:
/* 80729330  38 00 00 04 */	li r0, 4
lbl_80729334:
/* 80729334  2C 00 00 01 */	cmpwi r0, 1
/* 80729338  40 82 00 0C */	bne lbl_80729344
/* 8072933C  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80729340  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_80729344:
/* 80729344  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 80729348  EC 00 00 72 */	fmuls f0, f0, f1
/* 8072934C  D0 19 00 B4 */	stfs f0, 0xb4(r25)
lbl_80729350:
/* 80729350  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 80729354  7C 04 07 74 */	extsb r4, r0
/* 80729358  80 78 5D 3C */	lwz r3, 0x5d3c(r24)
/* 8072935C  38 00 00 00 */	li r0, 0
/* 80729360  90 01 00 08 */	stw r0, 8(r1)
/* 80729364  90 81 00 0C */	stw r4, 0xc(r1)
/* 80729368  92 A1 00 10 */	stw r21, 0x10(r1)
/* 8072936C  92 C1 00 14 */	stw r22, 0x14(r1)
/* 80729370  90 01 00 18 */	stw r0, 0x18(r1)
/* 80729374  38 80 00 00 */	li r4, 0
/* 80729378  38 A0 02 9C */	li r5, 0x29c
/* 8072937C  7F 66 DB 78 */	mr r6, r27
/* 80729380  38 FE 01 0C */	addi r7, r30, 0x10c
/* 80729384  39 1E 04 E4 */	addi r8, r30, 0x4e4
/* 80729388  7F 89 E3 78 */	mr r9, r28
/* 8072938C  39 40 00 FF */	li r10, 0xff
/* 80729390  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80729394  4B 92 36 FC */	b set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 80729398  3C 60 00 06 */	lis r3, 0x0006 /* 0x00060029@ha */
/* 8072939C  38 03 00 29 */	addi r0, r3, 0x0029 /* 0x00060029@l */
/* 807293A0  90 01 00 28 */	stw r0, 0x28(r1)
/* 807293A4  7F 43 D3 78 */	mr r3, r26
/* 807293A8  38 81 00 28 */	addi r4, r1, 0x28
/* 807293AC  38 A0 00 00 */	li r5, 0
/* 807293B0  38 C0 FF FF */	li r6, -1
/* 807293B4  81 9A 00 00 */	lwz r12, 0(r26)
/* 807293B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 807293BC  7D 89 03 A6 */	mtctr r12
/* 807293C0  4E 80 04 21 */	bctrl 
lbl_807293C4:
/* 807293C4  3A A0 00 00 */	li r21, 0
/* 807293C8  3A C0 00 00 */	li r22, 0
/* 807293CC  3A 80 00 00 */	li r20, 0
/* 807293D0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 807293D4  3B 23 61 C0 */	addi r25, r3, g_dComIfG_gameInfo@l
/* 807293D8  57 A0 10 3A */	slwi r0, r29, 2
/* 807293DC  3B 17 00 28 */	addi r24, r23, 0x28
/* 807293E0  7F 18 02 14 */	add r24, r24, r0
/* 807293E4  3B B7 00 20 */	addi r29, r23, 0x20
/* 807293E8  7F BD 02 14 */	add r29, r29, r0
/* 807293EC  3A 77 00 30 */	addi r19, r23, 0x30
lbl_807293F0:
/* 807293F0  3A F4 05 9C */	addi r23, r20, 0x59c
/* 807293F4  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 807293F8  7C 05 07 74 */	extsb r5, r0
/* 807293FC  7C 9E B8 2E */	lwzx r4, r30, r23
/* 80729400  80 79 5D 3C */	lwz r3, 0x5d3c(r25)
/* 80729404  38 00 00 FF */	li r0, 0xff
/* 80729408  90 01 00 08 */	stw r0, 8(r1)
/* 8072940C  38 00 00 00 */	li r0, 0
/* 80729410  90 01 00 0C */	stw r0, 0xc(r1)
/* 80729414  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80729418  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8072941C  93 01 00 18 */	stw r24, 0x18(r1)
/* 80729420  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80729424  38 A0 00 00 */	li r5, 0
/* 80729428  7C D3 B2 2E */	lhzx r6, r19, r22
/* 8072942C  7F 67 DB 78 */	mr r7, r27
/* 80729430  39 1E 01 0C */	addi r8, r30, 0x10c
/* 80729434  39 3E 04 E4 */	addi r9, r30, 0x4e4
/* 80729438  7F 8A E3 78 */	mr r10, r28
/* 8072943C  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80729440  4B 92 40 8C */	b set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 80729444  7C 7E B9 2E */	stwx r3, r30, r23
/* 80729448  3A B5 00 01 */	addi r21, r21, 1
/* 8072944C  2C 15 00 03 */	cmpwi r21, 3
/* 80729450  3A D6 00 02 */	addi r22, r22, 2
/* 80729454  3A 94 00 04 */	addi r20, r20, 4
/* 80729458  41 80 FF 98 */	blt lbl_807293F0
/* 8072945C  3C 60 00 06 */	lis r3, 0x0006 /* 0x0006002A@ha */
/* 80729460  38 03 00 2A */	addi r0, r3, 0x002A /* 0x0006002A@l */
/* 80729464  90 01 00 24 */	stw r0, 0x24(r1)
/* 80729468  7F 43 D3 78 */	mr r3, r26
/* 8072946C  38 81 00 24 */	addi r4, r1, 0x24
/* 80729470  38 A0 00 00 */	li r5, 0
/* 80729474  38 C0 FF FF */	li r6, -1
/* 80729478  81 9A 00 00 */	lwz r12, 0(r26)
/* 8072947C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80729480  7D 89 03 A6 */	mtctr r12
/* 80729484  4E 80 04 21 */	bctrl 
/* 80729488  38 60 00 01 */	li r3, 1
/* 8072948C  48 00 00 10 */	b lbl_8072949C
lbl_80729490:
/* 80729490  38 00 00 00 */	li r0, 0
/* 80729494  98 1E 05 A8 */	stb r0, 0x5a8(r30)
/* 80729498  38 60 00 00 */	li r3, 0
lbl_8072949C:
/* 8072949C  39 61 00 A0 */	addi r11, r1, 0xa0
/* 807294A0  4B C3 8D 60 */	b _restgpr_19
/* 807294A4  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 807294A8  7C 08 03 A6 */	mtlr r0
/* 807294AC  38 21 00 A0 */	addi r1, r1, 0xa0
/* 807294B0  4E 80 00 20 */	blr 
