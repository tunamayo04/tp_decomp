lbl_808154EC:
/* 808154EC  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 808154F0  7C 08 02 A6 */	mflr r0
/* 808154F4  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 808154F8  39 61 00 A0 */	addi r11, r1, 0xa0
/* 808154FC  4B B4 CC B8 */	b _savegpr_19
/* 80815500  7C 7E 1B 78 */	mr r30, r3
/* 80815504  7C 9A 23 78 */	mr r26, r4
/* 80815508  7C BB 2B 78 */	mr r27, r5
/* 8081550C  7C DC 33 78 */	mr r28, r6
/* 80815510  3C 60 80 81 */	lis r3, cNullVec__6Z2Calc@ha
/* 80815514  3A E3 5B 04 */	addi r23, r3, cNullVec__6Z2Calc@l
/* 80815518  3C 60 80 81 */	lis r3, lit_3925@ha
/* 8081551C  3B E3 59 94 */	addi r31, r3, lit_3925@l
/* 80815520  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80815524  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80815528  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 8081552C  3C 80 80 45 */	lis r4, m_midnaActor__9daPy_py_c@ha
/* 80815530  80 04 10 18 */	lwz r0, m_midnaActor__9daPy_py_c@l(r4)
/* 80815534  28 00 00 00 */	cmplwi r0, 0
/* 80815538  41 82 03 A4 */	beq lbl_808158DC
/* 8081553C  7F C4 F3 78 */	mr r4, r30
/* 80815540  81 83 06 28 */	lwz r12, 0x628(r3)
/* 80815544  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 80815548  7D 89 03 A6 */	mtctr r12
/* 8081554C  4E 80 04 21 */	bctrl 
/* 80815550  2C 03 00 00 */	cmpwi r3, 0
/* 80815554  41 82 03 88 */	beq lbl_808158DC
/* 80815558  4B 99 70 24 */	b dKy_darkworld_check__Fv
/* 8081555C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80815560  30 03 FF FF */	addic r0, r3, -1
/* 80815564  7F A0 19 10 */	subfe r29, r0, r3
/* 80815568  88 1E 05 A8 */	lbz r0, 0x5a8(r30)
/* 8081556C  28 00 00 00 */	cmplwi r0, 0
/* 80815570  40 82 02 A0 */	bne lbl_80815810
/* 80815574  38 00 00 01 */	li r0, 1
/* 80815578  98 1E 05 A8 */	stb r0, 0x5a8(r30)
/* 8081557C  3C 60 80 45 */	lis r3, m_midnaActor__9daPy_py_c@ha
/* 80815580  38 63 10 18 */	addi r3, r3, m_midnaActor__9daPy_py_c@l
/* 80815584  80 63 00 00 */	lwz r3, 0(r3)
/* 80815588  80 63 05 74 */	lwz r3, 0x574(r3)
/* 8081558C  80 63 00 84 */	lwz r3, 0x84(r3)
/* 80815590  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80815594  38 63 01 E0 */	addi r3, r3, 0x1e0
/* 80815598  3C 80 80 3E */	lis r4, now__14mDoMtx_stack_c@ha
/* 8081559C  38 84 D4 70 */	addi r4, r4, now__14mDoMtx_stack_c@l
/* 808155A0  4B B3 0F 10 */	b PSMTXCopy
/* 808155A4  C0 1F 00 00 */	lfs f0, 0(r31)
/* 808155A8  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 808155AC  C0 1F 00 04 */	lfs f0, 4(r31)
/* 808155B0  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 808155B4  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 808155B8  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 808155BC  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 808155C0  38 81 00 4C */	addi r4, r1, 0x4c
/* 808155C4  38 A1 00 58 */	addi r5, r1, 0x58
/* 808155C8  4B B3 17 A4 */	b PSMTXMultVec
/* 808155CC  38 61 00 34 */	addi r3, r1, 0x34
/* 808155D0  38 81 00 58 */	addi r4, r1, 0x58
/* 808155D4  7F 65 DB 78 */	mr r5, r27
/* 808155D8  4B A5 15 5C */	b __mi__4cXyzCFRC3Vec
/* 808155DC  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 808155E0  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 808155E4  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 808155E8  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 808155EC  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 808155F0  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 808155F4  4B A5 20 80 */	b cM_atan2s__Fff
/* 808155F8  B0 61 00 2E */	sth r3, 0x2e(r1)
/* 808155FC  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80815600  EC 20 00 32 */	fmuls f1, f0, f0
/* 80815604  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 80815608  EC 00 00 32 */	fmuls f0, f0, f0
/* 8081560C  EC 41 00 2A */	fadds f2, f1, f0
/* 80815610  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80815614  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80815618  40 81 00 0C */	ble lbl_80815624
/* 8081561C  FC 00 10 34 */	frsqrte f0, f2
/* 80815620  EC 40 00 B2 */	fmuls f2, f0, f2
lbl_80815624:
/* 80815624  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 80815628  4B A5 20 4C */	b cM_atan2s__Fff
/* 8081562C  7C 03 00 D0 */	neg r0, r3
/* 80815630  B0 01 00 2C */	sth r0, 0x2c(r1)
/* 80815634  38 80 00 00 */	li r4, 0
/* 80815638  B0 81 00 30 */	sth r4, 0x30(r1)
/* 8081563C  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 80815640  7C 00 07 74 */	extsb r0, r0
/* 80815644  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80815648  3B 03 61 C0 */	addi r24, r3, g_dComIfG_gameInfo@l
/* 8081564C  80 78 5D 3C */	lwz r3, 0x5d3c(r24)
/* 80815650  57 A5 10 3A */	slwi r5, r29, 2
/* 80815654  90 81 00 08 */	stw r4, 8(r1)
/* 80815658  90 01 00 0C */	stw r0, 0xc(r1)
/* 8081565C  3A B7 00 20 */	addi r21, r23, 0x20
/* 80815660  7E B5 2A 14 */	add r21, r21, r5
/* 80815664  92 A1 00 10 */	stw r21, 0x10(r1)
/* 80815668  3A D7 00 28 */	addi r22, r23, 0x28
/* 8081566C  7E D6 2A 14 */	add r22, r22, r5
/* 80815670  92 C1 00 14 */	stw r22, 0x14(r1)
/* 80815674  90 81 00 18 */	stw r4, 0x18(r1)
/* 80815678  38 80 00 00 */	li r4, 0
/* 8081567C  38 A0 02 9B */	li r5, 0x29b
/* 80815680  7F 66 DB 78 */	mr r6, r27
/* 80815684  38 FE 01 0C */	addi r7, r30, 0x10c
/* 80815688  39 01 00 2C */	addi r8, r1, 0x2c
/* 8081568C  7F 89 E3 78 */	mr r9, r28
/* 80815690  39 40 00 FF */	li r10, 0xff
/* 80815694  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80815698  4B 83 73 F8 */	b set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 8081569C  7C 79 1B 79 */	or. r25, r3, r3
/* 808156A0  41 82 00 FC */	beq lbl_8081579C
/* 808156A4  38 61 00 40 */	addi r3, r1, 0x40
/* 808156A8  4B B3 1A 90 */	b PSVECSquareMag
/* 808156AC  C0 1F 00 04 */	lfs f0, 4(r31)
/* 808156B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 808156B4  40 81 00 58 */	ble lbl_8081570C
/* 808156B8  FC 00 08 34 */	frsqrte f0, f1
/* 808156BC  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 808156C0  FC 44 00 32 */	fmul f2, f4, f0
/* 808156C4  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 808156C8  FC 00 00 32 */	fmul f0, f0, f0
/* 808156CC  FC 01 00 32 */	fmul f0, f1, f0
/* 808156D0  FC 03 00 28 */	fsub f0, f3, f0
/* 808156D4  FC 02 00 32 */	fmul f0, f2, f0
/* 808156D8  FC 44 00 32 */	fmul f2, f4, f0
/* 808156DC  FC 00 00 32 */	fmul f0, f0, f0
/* 808156E0  FC 01 00 32 */	fmul f0, f1, f0
/* 808156E4  FC 03 00 28 */	fsub f0, f3, f0
/* 808156E8  FC 02 00 32 */	fmul f0, f2, f0
/* 808156EC  FC 44 00 32 */	fmul f2, f4, f0
/* 808156F0  FC 00 00 32 */	fmul f0, f0, f0
/* 808156F4  FC 01 00 32 */	fmul f0, f1, f0
/* 808156F8  FC 03 00 28 */	fsub f0, f3, f0
/* 808156FC  FC 02 00 32 */	fmul f0, f2, f0
/* 80815700  FC 21 00 32 */	fmul f1, f1, f0
/* 80815704  FC 20 08 18 */	frsp f1, f1
/* 80815708  48 00 00 88 */	b lbl_80815790
lbl_8081570C:
/* 8081570C  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 80815710  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80815714  40 80 00 10 */	bge lbl_80815724
/* 80815718  3C 60 80 45 */	lis r3, __float_nan@ha
/* 8081571C  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 80815720  48 00 00 70 */	b lbl_80815790
lbl_80815724:
/* 80815724  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80815728  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8081572C  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80815730  3C 00 7F 80 */	lis r0, 0x7f80
/* 80815734  7C 03 00 00 */	cmpw r3, r0
/* 80815738  41 82 00 14 */	beq lbl_8081574C
/* 8081573C  40 80 00 40 */	bge lbl_8081577C
/* 80815740  2C 03 00 00 */	cmpwi r3, 0
/* 80815744  41 82 00 20 */	beq lbl_80815764
/* 80815748  48 00 00 34 */	b lbl_8081577C
lbl_8081574C:
/* 8081574C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80815750  41 82 00 0C */	beq lbl_8081575C
/* 80815754  38 00 00 01 */	li r0, 1
/* 80815758  48 00 00 28 */	b lbl_80815780
lbl_8081575C:
/* 8081575C  38 00 00 02 */	li r0, 2
/* 80815760  48 00 00 20 */	b lbl_80815780
lbl_80815764:
/* 80815764  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80815768  41 82 00 0C */	beq lbl_80815774
/* 8081576C  38 00 00 05 */	li r0, 5
/* 80815770  48 00 00 10 */	b lbl_80815780
lbl_80815774:
/* 80815774  38 00 00 03 */	li r0, 3
/* 80815778  48 00 00 08 */	b lbl_80815780
lbl_8081577C:
/* 8081577C  38 00 00 04 */	li r0, 4
lbl_80815780:
/* 80815780  2C 00 00 01 */	cmpwi r0, 1
/* 80815784  40 82 00 0C */	bne lbl_80815790
/* 80815788  3C 60 80 45 */	lis r3, __float_nan@ha
/* 8081578C  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_80815790:
/* 80815790  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 80815794  EC 00 00 72 */	fmuls f0, f0, f1
/* 80815798  D0 19 00 B4 */	stfs f0, 0xb4(r25)
lbl_8081579C:
/* 8081579C  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 808157A0  7C 04 07 74 */	extsb r4, r0
/* 808157A4  80 78 5D 3C */	lwz r3, 0x5d3c(r24)
/* 808157A8  38 00 00 00 */	li r0, 0
/* 808157AC  90 01 00 08 */	stw r0, 8(r1)
/* 808157B0  90 81 00 0C */	stw r4, 0xc(r1)
/* 808157B4  92 A1 00 10 */	stw r21, 0x10(r1)
/* 808157B8  92 C1 00 14 */	stw r22, 0x14(r1)
/* 808157BC  90 01 00 18 */	stw r0, 0x18(r1)
/* 808157C0  38 80 00 00 */	li r4, 0
/* 808157C4  38 A0 02 9C */	li r5, 0x29c
/* 808157C8  7F 66 DB 78 */	mr r6, r27
/* 808157CC  38 FE 01 0C */	addi r7, r30, 0x10c
/* 808157D0  39 1E 04 E4 */	addi r8, r30, 0x4e4
/* 808157D4  7F 89 E3 78 */	mr r9, r28
/* 808157D8  39 40 00 FF */	li r10, 0xff
/* 808157DC  C0 3F 00 08 */	lfs f1, 8(r31)
/* 808157E0  4B 83 72 B0 */	b set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 808157E4  3C 60 00 06 */	lis r3, 0x0006 /* 0x00060029@ha */
/* 808157E8  38 03 00 29 */	addi r0, r3, 0x0029 /* 0x00060029@l */
/* 808157EC  90 01 00 28 */	stw r0, 0x28(r1)
/* 808157F0  7F 43 D3 78 */	mr r3, r26
/* 808157F4  38 81 00 28 */	addi r4, r1, 0x28
/* 808157F8  38 A0 00 00 */	li r5, 0
/* 808157FC  38 C0 FF FF */	li r6, -1
/* 80815800  81 9A 00 00 */	lwz r12, 0(r26)
/* 80815804  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80815808  7D 89 03 A6 */	mtctr r12
/* 8081580C  4E 80 04 21 */	bctrl 
lbl_80815810:
/* 80815810  3A A0 00 00 */	li r21, 0
/* 80815814  3A C0 00 00 */	li r22, 0
/* 80815818  3A 80 00 00 */	li r20, 0
/* 8081581C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80815820  3B 23 61 C0 */	addi r25, r3, g_dComIfG_gameInfo@l
/* 80815824  57 A0 10 3A */	slwi r0, r29, 2
/* 80815828  3B 17 00 28 */	addi r24, r23, 0x28
/* 8081582C  7F 18 02 14 */	add r24, r24, r0
/* 80815830  3B B7 00 20 */	addi r29, r23, 0x20
/* 80815834  7F BD 02 14 */	add r29, r29, r0
/* 80815838  3A 77 00 30 */	addi r19, r23, 0x30
lbl_8081583C:
/* 8081583C  3A F4 05 9C */	addi r23, r20, 0x59c
/* 80815840  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 80815844  7C 05 07 74 */	extsb r5, r0
/* 80815848  7C 9E B8 2E */	lwzx r4, r30, r23
/* 8081584C  80 79 5D 3C */	lwz r3, 0x5d3c(r25)
/* 80815850  38 00 00 FF */	li r0, 0xff
/* 80815854  90 01 00 08 */	stw r0, 8(r1)
/* 80815858  38 00 00 00 */	li r0, 0
/* 8081585C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80815860  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80815864  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80815868  93 01 00 18 */	stw r24, 0x18(r1)
/* 8081586C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80815870  38 A0 00 00 */	li r5, 0
/* 80815874  7C D3 B2 2E */	lhzx r6, r19, r22
/* 80815878  7F 67 DB 78 */	mr r7, r27
/* 8081587C  39 1E 01 0C */	addi r8, r30, 0x10c
/* 80815880  39 3E 04 E4 */	addi r9, r30, 0x4e4
/* 80815884  7F 8A E3 78 */	mr r10, r28
/* 80815888  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8081588C  4B 83 7C 40 */	b set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 80815890  7C 7E B9 2E */	stwx r3, r30, r23
/* 80815894  3A B5 00 01 */	addi r21, r21, 1
/* 80815898  2C 15 00 03 */	cmpwi r21, 3
/* 8081589C  3A D6 00 02 */	addi r22, r22, 2
/* 808158A0  3A 94 00 04 */	addi r20, r20, 4
/* 808158A4  41 80 FF 98 */	blt lbl_8081583C
/* 808158A8  3C 60 00 06 */	lis r3, 0x0006 /* 0x0006002A@ha */
/* 808158AC  38 03 00 2A */	addi r0, r3, 0x002A /* 0x0006002A@l */
/* 808158B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 808158B4  7F 43 D3 78 */	mr r3, r26
/* 808158B8  38 81 00 24 */	addi r4, r1, 0x24
/* 808158BC  38 A0 00 00 */	li r5, 0
/* 808158C0  38 C0 FF FF */	li r6, -1
/* 808158C4  81 9A 00 00 */	lwz r12, 0(r26)
/* 808158C8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 808158CC  7D 89 03 A6 */	mtctr r12
/* 808158D0  4E 80 04 21 */	bctrl 
/* 808158D4  38 60 00 01 */	li r3, 1
/* 808158D8  48 00 00 10 */	b lbl_808158E8
lbl_808158DC:
/* 808158DC  38 00 00 00 */	li r0, 0
/* 808158E0  98 1E 05 A8 */	stb r0, 0x5a8(r30)
/* 808158E4  38 60 00 00 */	li r3, 0
lbl_808158E8:
/* 808158E8  39 61 00 A0 */	addi r11, r1, 0xa0
/* 808158EC  4B B4 C9 14 */	b _restgpr_19
/* 808158F0  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 808158F4  7C 08 03 A6 */	mtlr r0
/* 808158F8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 808158FC  4E 80 00 20 */	blr 
