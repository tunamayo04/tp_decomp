lbl_805A963C:
/* 805A963C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 805A9640  7C 08 02 A6 */	mflr r0
/* 805A9644  90 01 00 64 */	stw r0, 0x64(r1)
/* 805A9648  39 61 00 60 */	addi r11, r1, 0x60
/* 805A964C  4B DB 8B 90 */	b _savegpr_29
/* 805A9650  7C 7F 1B 78 */	mr r31, r3
/* 805A9654  3C 60 80 5B */	lis r3, lit_3864@ha
/* 805A9658  3B C3 A4 54 */	addi r30, r3, lit_3864@l
/* 805A965C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 805A9660  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l
/* 805A9664  88 04 5D B0 */	lbz r0, 0x5db0(r4)
/* 805A9668  7C 00 07 74 */	extsb r0, r0
/* 805A966C  1C 00 00 38 */	mulli r0, r0, 0x38
/* 805A9670  7C 64 02 14 */	add r3, r4, r0
/* 805A9674  80 63 5D 74 */	lwz r3, 0x5d74(r3)
/* 805A9678  83 A4 5D AC */	lwz r29, 0x5dac(r4)
/* 805A967C  80 1F 06 54 */	lwz r0, 0x654(r31)
/* 805A9680  2C 00 00 00 */	cmpwi r0, 0
/* 805A9684  40 82 00 E0 */	bne lbl_805A9764
/* 805A9688  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 805A968C  D0 1F 06 30 */	stfs f0, 0x630(r31)
/* 805A9690  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 805A9694  D0 1F 06 34 */	stfs f0, 0x634(r31)
/* 805A9698  C0 3E 00 08 */	lfs f1, 8(r30)
/* 805A969C  D0 3F 06 38 */	stfs f1, 0x638(r31)
/* 805A96A0  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 805A96A4  D0 1F 06 24 */	stfs f0, 0x624(r31)
/* 805A96A8  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 805A96AC  D0 1F 06 28 */	stfs f0, 0x628(r31)
/* 805A96B0  D0 3F 06 2C */	stfs f1, 0x62c(r31)
/* 805A96B4  C0 1F 06 30 */	lfs f0, 0x630(r31)
/* 805A96B8  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 805A96BC  C0 1F 06 34 */	lfs f0, 0x634(r31)
/* 805A96C0  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 805A96C4  C0 1F 06 38 */	lfs f0, 0x638(r31)
/* 805A96C8  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 805A96CC  C0 1F 06 24 */	lfs f0, 0x624(r31)
/* 805A96D0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 805A96D4  C0 1F 06 28 */	lfs f0, 0x628(r31)
/* 805A96D8  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 805A96DC  C0 1F 06 2C */	lfs f0, 0x62c(r31)
/* 805A96E0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 805A96E4  38 63 02 48 */	addi r3, r3, 0x248
/* 805A96E8  38 81 00 38 */	addi r4, r1, 0x38
/* 805A96EC  38 A1 00 2C */	addi r5, r1, 0x2c
/* 805A96F0  4B BD 73 B8 */	b Set__9dCamera_cF4cXyz4cXyz
/* 805A96F4  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 805A96F8  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 805A96FC  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 805A9700  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 805A9704  C0 1E 00 08 */	lfs f0, 8(r30)
/* 805A9708  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 805A970C  7F A3 EB 78 */	mr r3, r29
/* 805A9710  38 81 00 44 */	addi r4, r1, 0x44
/* 805A9714  38 A0 40 00 */	li r5, 0x4000
/* 805A9718  38 C0 00 00 */	li r6, 0
/* 805A971C  81 9D 06 28 */	lwz r12, 0x628(r29)
/* 805A9720  81 8C 01 54 */	lwz r12, 0x154(r12)
/* 805A9724  7D 89 03 A6 */	mtctr r12
/* 805A9728  4E 80 04 21 */	bctrl 
/* 805A972C  38 00 40 00 */	li r0, 0x4000
/* 805A9730  B0 1D 06 06 */	sth r0, 0x606(r29)
/* 805A9734  38 00 00 04 */	li r0, 4
/* 805A9738  90 1D 06 14 */	stw r0, 0x614(r29)
/* 805A973C  38 00 00 00 */	li r0, 0
/* 805A9740  90 1D 06 0C */	stw r0, 0x60c(r29)
/* 805A9744  90 1D 06 10 */	stw r0, 0x610(r29)
/* 805A9748  B0 1D 06 0A */	sth r0, 0x60a(r29)
/* 805A974C  38 00 00 05 */	li r0, 5
/* 805A9750  98 1F 06 59 */	stb r0, 0x659(r31)
/* 805A9754  80 7F 06 54 */	lwz r3, 0x654(r31)
/* 805A9758  38 03 00 01 */	addi r0, r3, 1
/* 805A975C  90 1F 06 54 */	stw r0, 0x654(r31)
/* 805A9760  48 00 01 9C */	b lbl_805A98FC
lbl_805A9764:
/* 805A9764  2C 00 FF FF */	cmpwi r0, -1
/* 805A9768  41 82 01 94 */	beq lbl_805A98FC
/* 805A976C  2C 00 00 01 */	cmpwi r0, 1
/* 805A9770  40 82 01 18 */	bne lbl_805A9888
/* 805A9774  88 1F 06 59 */	lbz r0, 0x659(r31)
/* 805A9778  28 00 00 00 */	cmplwi r0, 0
/* 805A977C  40 82 01 80 */	bne lbl_805A98FC
/* 805A9780  38 00 00 5C */	li r0, 0x5c
/* 805A9784  98 1F 06 59 */	stb r0, 0x659(r31)
/* 805A9788  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 805A978C  D0 1F 06 30 */	stfs f0, 0x630(r31)
/* 805A9790  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 805A9794  D0 1F 06 34 */	stfs f0, 0x634(r31)
/* 805A9798  C0 3E 00 08 */	lfs f1, 8(r30)
/* 805A979C  D0 3F 06 38 */	stfs f1, 0x638(r31)
/* 805A97A0  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 805A97A4  D0 1F 06 24 */	stfs f0, 0x624(r31)
/* 805A97A8  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 805A97AC  D0 1F 06 28 */	stfs f0, 0x628(r31)
/* 805A97B0  D0 3F 06 2C */	stfs f1, 0x62c(r31)
/* 805A97B4  C0 1F 06 30 */	lfs f0, 0x630(r31)
/* 805A97B8  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 805A97BC  C0 1F 06 34 */	lfs f0, 0x634(r31)
/* 805A97C0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 805A97C4  C0 1F 06 38 */	lfs f0, 0x638(r31)
/* 805A97C8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 805A97CC  C0 1F 06 24 */	lfs f0, 0x624(r31)
/* 805A97D0  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 805A97D4  C0 1F 06 28 */	lfs f0, 0x628(r31)
/* 805A97D8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 805A97DC  C0 1F 06 2C */	lfs f0, 0x62c(r31)
/* 805A97E0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 805A97E4  38 63 02 48 */	addi r3, r3, 0x248
/* 805A97E8  38 81 00 20 */	addi r4, r1, 0x20
/* 805A97EC  38 A1 00 14 */	addi r5, r1, 0x14
/* 805A97F0  4B BD 72 B8 */	b Set__9dCamera_cF4cXyz4cXyz
/* 805A97F4  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 805A97F8  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 805A97FC  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 805A9800  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 805A9804  C0 1E 00 08 */	lfs f0, 8(r30)
/* 805A9808  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 805A980C  7F A3 EB 78 */	mr r3, r29
/* 805A9810  38 81 00 44 */	addi r4, r1, 0x44
/* 805A9814  38 A0 40 00 */	li r5, 0x4000
/* 805A9818  38 C0 00 00 */	li r6, 0
/* 805A981C  81 9D 06 28 */	lwz r12, 0x628(r29)
/* 805A9820  81 8C 01 54 */	lwz r12, 0x154(r12)
/* 805A9824  7D 89 03 A6 */	mtctr r12
/* 805A9828  4E 80 04 21 */	bctrl 
/* 805A982C  38 00 40 00 */	li r0, 0x4000
/* 805A9830  B0 1D 06 06 */	sth r0, 0x606(r29)
/* 805A9834  C0 3E 00 24 */	lfs f1, 0x24(r30)
/* 805A9838  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 805A983C  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 805A9840  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 805A9844  C0 1E 00 08 */	lfs f0, 8(r30)
/* 805A9848  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 805A984C  D0 3D 06 1C */	stfs f1, 0x61c(r29)
/* 805A9850  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 805A9854  D0 1D 06 20 */	stfs f0, 0x620(r29)
/* 805A9858  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 805A985C  D0 1D 06 24 */	stfs f0, 0x624(r29)
/* 805A9860  38 00 00 02 */	li r0, 2
/* 805A9864  90 1D 06 14 */	stw r0, 0x614(r29)
/* 805A9868  38 00 00 00 */	li r0, 0
/* 805A986C  90 1D 06 0C */	stw r0, 0x60c(r29)
/* 805A9870  90 1D 06 10 */	stw r0, 0x610(r29)
/* 805A9874  B0 1D 06 0A */	sth r0, 0x60a(r29)
/* 805A9878  80 7F 06 54 */	lwz r3, 0x654(r31)
/* 805A987C  38 03 00 01 */	addi r0, r3, 1
/* 805A9880  90 1F 06 54 */	stw r0, 0x654(r31)
/* 805A9884  48 00 00 78 */	b lbl_805A98FC
lbl_805A9888:
/* 805A9888  88 1F 06 59 */	lbz r0, 0x659(r31)
/* 805A988C  28 00 00 00 */	cmplwi r0, 0
/* 805A9890  40 82 00 6C */	bne lbl_805A98FC
/* 805A9894  38 60 00 00 */	li r3, 0
/* 805A9898  4B A8 30 E4 */	b getLayerNo__14dComIfG_play_cFi
/* 805A989C  2C 03 00 03 */	cmpwi r3, 3
/* 805A98A0  41 82 00 30 */	beq lbl_805A98D0
/* 805A98A4  38 60 00 06 */	li r3, 6
/* 805A98A8  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 805A98AC  38 80 00 00 */	li r4, 0
/* 805A98B0  88 1F 04 E2 */	lbz r0, 0x4e2(r31)
/* 805A98B4  7C 05 07 74 */	extsb r5, r0
/* 805A98B8  38 C0 00 00 */	li r6, 0
/* 805A98BC  38 E0 FF FF */	li r7, -1
/* 805A98C0  4B A7 D8 B0 */	b dStage_changeScene__FifUlScsi
/* 805A98C4  7F E3 FB 78 */	mr r3, r31
/* 805A98C8  4B A7 03 B4 */	b fopAcM_delete__FP10fopAc_ac_c
/* 805A98CC  48 00 00 30 */	b lbl_805A98FC
lbl_805A98D0:
/* 805A98D0  3C 60 80 5B */	lis r3, lit_3886@ha
/* 805A98D4  38 83 A4 E8 */	addi r4, r3, lit_3886@l
/* 805A98D8  80 64 00 00 */	lwz r3, 0(r4)
/* 805A98DC  80 04 00 04 */	lwz r0, 4(r4)
/* 805A98E0  90 61 00 08 */	stw r3, 8(r1)
/* 805A98E4  90 01 00 0C */	stw r0, 0xc(r1)
/* 805A98E8  80 04 00 08 */	lwz r0, 8(r4)
/* 805A98EC  90 01 00 10 */	stw r0, 0x10(r1)
/* 805A98F0  7F E3 FB 78 */	mr r3, r31
/* 805A98F4  38 81 00 08 */	addi r4, r1, 8
/* 805A98F8  4B FF F9 41 */	bl setAction__6daDr_cFM6daDr_cFPCvPv_v
lbl_805A98FC:
/* 805A98FC  39 61 00 60 */	addi r11, r1, 0x60
/* 805A9900  4B DB 89 28 */	b _restgpr_29
/* 805A9904  80 01 00 64 */	lwz r0, 0x64(r1)
/* 805A9908  7C 08 03 A6 */	mtlr r0
/* 805A990C  38 21 00 60 */	addi r1, r1, 0x60
/* 805A9910  4E 80 00 20 */	blr 
