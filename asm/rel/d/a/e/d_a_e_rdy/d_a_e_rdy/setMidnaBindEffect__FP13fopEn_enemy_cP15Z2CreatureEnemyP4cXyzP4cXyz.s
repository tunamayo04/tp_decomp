lbl_80779948:
/* 80779948  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8077994C  7C 08 02 A6 */	mflr r0
/* 80779950  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80779954  39 61 00 A0 */	addi r11, r1, 0xa0
/* 80779958  4B BE 88 5C */	b _savegpr_19
/* 8077995C  7C 7E 1B 78 */	mr r30, r3
/* 80779960  7C 9A 23 78 */	mr r26, r4
/* 80779964  7C BB 2B 78 */	mr r27, r5
/* 80779968  7C DC 33 78 */	mr r28, r6
/* 8077996C  3C 60 80 78 */	lis r3, cNullVec__6Z2Calc@ha
/* 80779970  3A E3 A0 DC */	addi r23, r3, cNullVec__6Z2Calc@l
/* 80779974  3C 60 80 78 */	lis r3, lit_4018@ha
/* 80779978  3B E3 9D FC */	addi r31, r3, lit_4018@l
/* 8077997C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80779980  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80779984  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 80779988  3C 80 80 45 */	lis r4, m_midnaActor__9daPy_py_c@ha
/* 8077998C  80 04 10 18 */	lwz r0, m_midnaActor__9daPy_py_c@l(r4)
/* 80779990  28 00 00 00 */	cmplwi r0, 0
/* 80779994  41 82 03 A4 */	beq lbl_80779D38
/* 80779998  7F C4 F3 78 */	mr r4, r30
/* 8077999C  81 83 06 28 */	lwz r12, 0x628(r3)
/* 807799A0  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 807799A4  7D 89 03 A6 */	mtctr r12
/* 807799A8  4E 80 04 21 */	bctrl 
/* 807799AC  2C 03 00 00 */	cmpwi r3, 0
/* 807799B0  41 82 03 88 */	beq lbl_80779D38
/* 807799B4  4B A3 2B C8 */	b dKy_darkworld_check__Fv
/* 807799B8  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 807799BC  30 03 FF FF */	addic r0, r3, -1
/* 807799C0  7F A0 19 10 */	subfe r29, r0, r3
/* 807799C4  88 1E 05 A8 */	lbz r0, 0x5a8(r30)
/* 807799C8  28 00 00 00 */	cmplwi r0, 0
/* 807799CC  40 82 02 A0 */	bne lbl_80779C6C
/* 807799D0  38 00 00 01 */	li r0, 1
/* 807799D4  98 1E 05 A8 */	stb r0, 0x5a8(r30)
/* 807799D8  3C 60 80 45 */	lis r3, m_midnaActor__9daPy_py_c@ha
/* 807799DC  38 63 10 18 */	addi r3, r3, m_midnaActor__9daPy_py_c@l
/* 807799E0  80 63 00 00 */	lwz r3, 0(r3)
/* 807799E4  80 63 05 74 */	lwz r3, 0x574(r3)
/* 807799E8  80 63 00 84 */	lwz r3, 0x84(r3)
/* 807799EC  80 63 00 0C */	lwz r3, 0xc(r3)
/* 807799F0  38 63 01 E0 */	addi r3, r3, 0x1e0
/* 807799F4  3C 80 80 3E */	lis r4, now__14mDoMtx_stack_c@ha
/* 807799F8  38 84 D4 70 */	addi r4, r4, now__14mDoMtx_stack_c@l
/* 807799FC  4B BC CA B4 */	b PSMTXCopy
/* 80779A00  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80779A04  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80779A08  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80779A0C  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 80779A10  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80779A14  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 80779A18  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 80779A1C  38 81 00 4C */	addi r4, r1, 0x4c
/* 80779A20  38 A1 00 58 */	addi r5, r1, 0x58
/* 80779A24  4B BC D3 48 */	b PSMTXMultVec
/* 80779A28  38 61 00 34 */	addi r3, r1, 0x34
/* 80779A2C  38 81 00 58 */	addi r4, r1, 0x58
/* 80779A30  7F 65 DB 78 */	mr r5, r27
/* 80779A34  4B AE D1 00 */	b __mi__4cXyzCFRC3Vec
/* 80779A38  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 80779A3C  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 80779A40  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80779A44  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80779A48  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 80779A4C  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 80779A50  4B AE DC 24 */	b cM_atan2s__Fff
/* 80779A54  B0 61 00 2E */	sth r3, 0x2e(r1)
/* 80779A58  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80779A5C  EC 20 00 32 */	fmuls f1, f0, f0
/* 80779A60  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 80779A64  EC 00 00 32 */	fmuls f0, f0, f0
/* 80779A68  EC 41 00 2A */	fadds f2, f1, f0
/* 80779A6C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80779A70  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80779A74  40 81 00 0C */	ble lbl_80779A80
/* 80779A78  FC 00 10 34 */	frsqrte f0, f2
/* 80779A7C  EC 40 00 B2 */	fmuls f2, f0, f2
lbl_80779A80:
/* 80779A80  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 80779A84  4B AE DB F0 */	b cM_atan2s__Fff
/* 80779A88  7C 03 00 D0 */	neg r0, r3
/* 80779A8C  B0 01 00 2C */	sth r0, 0x2c(r1)
/* 80779A90  38 80 00 00 */	li r4, 0
/* 80779A94  B0 81 00 30 */	sth r4, 0x30(r1)
/* 80779A98  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 80779A9C  7C 00 07 74 */	extsb r0, r0
/* 80779AA0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80779AA4  3B 03 61 C0 */	addi r24, r3, g_dComIfG_gameInfo@l
/* 80779AA8  80 78 5D 3C */	lwz r3, 0x5d3c(r24)
/* 80779AAC  57 A5 10 3A */	slwi r5, r29, 2
/* 80779AB0  90 81 00 08 */	stw r4, 8(r1)
/* 80779AB4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80779AB8  3A B7 00 20 */	addi r21, r23, 0x20
/* 80779ABC  7E B5 2A 14 */	add r21, r21, r5
/* 80779AC0  92 A1 00 10 */	stw r21, 0x10(r1)
/* 80779AC4  3A D7 00 28 */	addi r22, r23, 0x28
/* 80779AC8  7E D6 2A 14 */	add r22, r22, r5
/* 80779ACC  92 C1 00 14 */	stw r22, 0x14(r1)
/* 80779AD0  90 81 00 18 */	stw r4, 0x18(r1)
/* 80779AD4  38 80 00 00 */	li r4, 0
/* 80779AD8  38 A0 02 9B */	li r5, 0x29b
/* 80779ADC  7F 66 DB 78 */	mr r6, r27
/* 80779AE0  38 FE 01 0C */	addi r7, r30, 0x10c
/* 80779AE4  39 01 00 2C */	addi r8, r1, 0x2c
/* 80779AE8  7F 89 E3 78 */	mr r9, r28
/* 80779AEC  39 40 00 FF */	li r10, 0xff
/* 80779AF0  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80779AF4  4B 8D 2F 9C */	b set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 80779AF8  7C 79 1B 79 */	or. r25, r3, r3
/* 80779AFC  41 82 00 FC */	beq lbl_80779BF8
/* 80779B00  38 61 00 40 */	addi r3, r1, 0x40
/* 80779B04  4B BC D6 34 */	b PSVECSquareMag
/* 80779B08  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80779B0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80779B10  40 81 00 58 */	ble lbl_80779B68
/* 80779B14  FC 00 08 34 */	frsqrte f0, f1
/* 80779B18  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 80779B1C  FC 44 00 32 */	fmul f2, f4, f0
/* 80779B20  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 80779B24  FC 00 00 32 */	fmul f0, f0, f0
/* 80779B28  FC 01 00 32 */	fmul f0, f1, f0
/* 80779B2C  FC 03 00 28 */	fsub f0, f3, f0
/* 80779B30  FC 02 00 32 */	fmul f0, f2, f0
/* 80779B34  FC 44 00 32 */	fmul f2, f4, f0
/* 80779B38  FC 00 00 32 */	fmul f0, f0, f0
/* 80779B3C  FC 01 00 32 */	fmul f0, f1, f0
/* 80779B40  FC 03 00 28 */	fsub f0, f3, f0
/* 80779B44  FC 02 00 32 */	fmul f0, f2, f0
/* 80779B48  FC 44 00 32 */	fmul f2, f4, f0
/* 80779B4C  FC 00 00 32 */	fmul f0, f0, f0
/* 80779B50  FC 01 00 32 */	fmul f0, f1, f0
/* 80779B54  FC 03 00 28 */	fsub f0, f3, f0
/* 80779B58  FC 02 00 32 */	fmul f0, f2, f0
/* 80779B5C  FC 21 00 32 */	fmul f1, f1, f0
/* 80779B60  FC 20 08 18 */	frsp f1, f1
/* 80779B64  48 00 00 88 */	b lbl_80779BEC
lbl_80779B68:
/* 80779B68  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 80779B6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80779B70  40 80 00 10 */	bge lbl_80779B80
/* 80779B74  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80779B78  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 80779B7C  48 00 00 70 */	b lbl_80779BEC
lbl_80779B80:
/* 80779B80  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80779B84  80 81 00 20 */	lwz r4, 0x20(r1)
/* 80779B88  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80779B8C  3C 00 7F 80 */	lis r0, 0x7f80
/* 80779B90  7C 03 00 00 */	cmpw r3, r0
/* 80779B94  41 82 00 14 */	beq lbl_80779BA8
/* 80779B98  40 80 00 40 */	bge lbl_80779BD8
/* 80779B9C  2C 03 00 00 */	cmpwi r3, 0
/* 80779BA0  41 82 00 20 */	beq lbl_80779BC0
/* 80779BA4  48 00 00 34 */	b lbl_80779BD8
lbl_80779BA8:
/* 80779BA8  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80779BAC  41 82 00 0C */	beq lbl_80779BB8
/* 80779BB0  38 00 00 01 */	li r0, 1
/* 80779BB4  48 00 00 28 */	b lbl_80779BDC
lbl_80779BB8:
/* 80779BB8  38 00 00 02 */	li r0, 2
/* 80779BBC  48 00 00 20 */	b lbl_80779BDC
lbl_80779BC0:
/* 80779BC0  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80779BC4  41 82 00 0C */	beq lbl_80779BD0
/* 80779BC8  38 00 00 05 */	li r0, 5
/* 80779BCC  48 00 00 10 */	b lbl_80779BDC
lbl_80779BD0:
/* 80779BD0  38 00 00 03 */	li r0, 3
/* 80779BD4  48 00 00 08 */	b lbl_80779BDC
lbl_80779BD8:
/* 80779BD8  38 00 00 04 */	li r0, 4
lbl_80779BDC:
/* 80779BDC  2C 00 00 01 */	cmpwi r0, 1
/* 80779BE0  40 82 00 0C */	bne lbl_80779BEC
/* 80779BE4  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80779BE8  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_80779BEC:
/* 80779BEC  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 80779BF0  EC 00 00 72 */	fmuls f0, f0, f1
/* 80779BF4  D0 19 00 B4 */	stfs f0, 0xb4(r25)
lbl_80779BF8:
/* 80779BF8  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 80779BFC  7C 04 07 74 */	extsb r4, r0
/* 80779C00  80 78 5D 3C */	lwz r3, 0x5d3c(r24)
/* 80779C04  38 00 00 00 */	li r0, 0
/* 80779C08  90 01 00 08 */	stw r0, 8(r1)
/* 80779C0C  90 81 00 0C */	stw r4, 0xc(r1)
/* 80779C10  92 A1 00 10 */	stw r21, 0x10(r1)
/* 80779C14  92 C1 00 14 */	stw r22, 0x14(r1)
/* 80779C18  90 01 00 18 */	stw r0, 0x18(r1)
/* 80779C1C  38 80 00 00 */	li r4, 0
/* 80779C20  38 A0 02 9C */	li r5, 0x29c
/* 80779C24  7F 66 DB 78 */	mr r6, r27
/* 80779C28  38 FE 01 0C */	addi r7, r30, 0x10c
/* 80779C2C  39 1E 04 E4 */	addi r8, r30, 0x4e4
/* 80779C30  7F 89 E3 78 */	mr r9, r28
/* 80779C34  39 40 00 FF */	li r10, 0xff
/* 80779C38  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80779C3C  4B 8D 2E 54 */	b set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 80779C40  3C 60 00 06 */	lis r3, 0x0006 /* 0x00060029@ha */
/* 80779C44  38 03 00 29 */	addi r0, r3, 0x0029 /* 0x00060029@l */
/* 80779C48  90 01 00 28 */	stw r0, 0x28(r1)
/* 80779C4C  7F 43 D3 78 */	mr r3, r26
/* 80779C50  38 81 00 28 */	addi r4, r1, 0x28
/* 80779C54  38 A0 00 00 */	li r5, 0
/* 80779C58  38 C0 FF FF */	li r6, -1
/* 80779C5C  81 9A 00 00 */	lwz r12, 0(r26)
/* 80779C60  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80779C64  7D 89 03 A6 */	mtctr r12
/* 80779C68  4E 80 04 21 */	bctrl 
lbl_80779C6C:
/* 80779C6C  3A A0 00 00 */	li r21, 0
/* 80779C70  3A C0 00 00 */	li r22, 0
/* 80779C74  3A 80 00 00 */	li r20, 0
/* 80779C78  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80779C7C  3B 23 61 C0 */	addi r25, r3, g_dComIfG_gameInfo@l
/* 80779C80  57 A0 10 3A */	slwi r0, r29, 2
/* 80779C84  3B 17 00 28 */	addi r24, r23, 0x28
/* 80779C88  7F 18 02 14 */	add r24, r24, r0
/* 80779C8C  3B B7 00 20 */	addi r29, r23, 0x20
/* 80779C90  7F BD 02 14 */	add r29, r29, r0
/* 80779C94  3A 77 00 30 */	addi r19, r23, 0x30
lbl_80779C98:
/* 80779C98  3A F4 05 9C */	addi r23, r20, 0x59c
/* 80779C9C  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 80779CA0  7C 05 07 74 */	extsb r5, r0
/* 80779CA4  7C 9E B8 2E */	lwzx r4, r30, r23
/* 80779CA8  80 79 5D 3C */	lwz r3, 0x5d3c(r25)
/* 80779CAC  38 00 00 FF */	li r0, 0xff
/* 80779CB0  90 01 00 08 */	stw r0, 8(r1)
/* 80779CB4  38 00 00 00 */	li r0, 0
/* 80779CB8  90 01 00 0C */	stw r0, 0xc(r1)
/* 80779CBC  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80779CC0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80779CC4  93 01 00 18 */	stw r24, 0x18(r1)
/* 80779CC8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80779CCC  38 A0 00 00 */	li r5, 0
/* 80779CD0  7C D3 B2 2E */	lhzx r6, r19, r22
/* 80779CD4  7F 67 DB 78 */	mr r7, r27
/* 80779CD8  39 1E 01 0C */	addi r8, r30, 0x10c
/* 80779CDC  39 3E 04 E4 */	addi r9, r30, 0x4e4
/* 80779CE0  7F 8A E3 78 */	mr r10, r28
/* 80779CE4  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80779CE8  4B 8D 37 E4 */	b set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 80779CEC  7C 7E B9 2E */	stwx r3, r30, r23
/* 80779CF0  3A B5 00 01 */	addi r21, r21, 1
/* 80779CF4  2C 15 00 03 */	cmpwi r21, 3
/* 80779CF8  3A D6 00 02 */	addi r22, r22, 2
/* 80779CFC  3A 94 00 04 */	addi r20, r20, 4
/* 80779D00  41 80 FF 98 */	blt lbl_80779C98
/* 80779D04  3C 60 00 06 */	lis r3, 0x0006 /* 0x0006002A@ha */
/* 80779D08  38 03 00 2A */	addi r0, r3, 0x002A /* 0x0006002A@l */
/* 80779D0C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80779D10  7F 43 D3 78 */	mr r3, r26
/* 80779D14  38 81 00 24 */	addi r4, r1, 0x24
/* 80779D18  38 A0 00 00 */	li r5, 0
/* 80779D1C  38 C0 FF FF */	li r6, -1
/* 80779D20  81 9A 00 00 */	lwz r12, 0(r26)
/* 80779D24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80779D28  7D 89 03 A6 */	mtctr r12
/* 80779D2C  4E 80 04 21 */	bctrl 
/* 80779D30  38 60 00 01 */	li r3, 1
/* 80779D34  48 00 00 10 */	b lbl_80779D44
lbl_80779D38:
/* 80779D38  38 00 00 00 */	li r0, 0
/* 80779D3C  98 1E 05 A8 */	stb r0, 0x5a8(r30)
/* 80779D40  38 60 00 00 */	li r3, 0
lbl_80779D44:
/* 80779D44  39 61 00 A0 */	addi r11, r1, 0xa0
/* 80779D48  4B BE 84 B8 */	b _restgpr_19
/* 80779D4C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80779D50  7C 08 03 A6 */	mtlr r0
/* 80779D54  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80779D58  4E 80 00 20 */	blr 
