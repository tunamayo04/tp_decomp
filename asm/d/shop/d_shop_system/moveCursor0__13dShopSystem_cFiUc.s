lbl_80198488:
/* 80198488  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8019848C  7C 08 02 A6 */	mflr r0
/* 80198490  90 01 00 24 */	stw r0, 0x24(r1)
/* 80198494  39 61 00 20 */	addi r11, r1, 0x20
/* 80198498  48 1C 9D 45 */	bl _savegpr_29
/* 8019849C  7C 7D 1B 78 */	mr r29, r3
/* 801984A0  7C 9E 23 78 */	mr r30, r4
/* 801984A4  7C BF 2B 78 */	mr r31, r5
/* 801984A8  38 80 00 07 */	li r4, 7
/* 801984AC  4B FF F1 31 */	bl offFlag__13dShopSystem_cFi
/* 801984B0  2C 1E 00 04 */	cmpwi r30, 4
/* 801984B4  41 82 00 78 */	beq lbl_8019852C
/* 801984B8  40 80 00 1C */	bge lbl_801984D4
/* 801984BC  2C 1E 00 02 */	cmpwi r30, 2
/* 801984C0  41 82 01 80 */	beq lbl_80198640
/* 801984C4  40 80 00 1C */	bge lbl_801984E0
/* 801984C8  2C 1E 00 01 */	cmpwi r30, 1
/* 801984CC  40 80 00 F8 */	bge lbl_801985C4
/* 801984D0  48 00 02 1C */	b lbl_801986EC
lbl_801984D4:
/* 801984D4  2C 1E 00 07 */	cmpwi r30, 7
/* 801984D8  41 82 00 A0 */	beq lbl_80198578
/* 801984DC  48 00 02 10 */	b lbl_801986EC
lbl_801984E0:
/* 801984E0  88 1D 0F 6E */	lbz r0, 0xf6e(r29)
/* 801984E4  28 00 00 00 */	cmplwi r0, 0
/* 801984E8  40 82 00 20 */	bne lbl_80198508
/* 801984EC  80 7D 0F 54 */	lwz r3, 0xf54(r29)
/* 801984F0  20 00 00 03 */	subfic r0, r0, 3
/* 801984F4  54 00 18 38 */	slwi r0, r0, 3
/* 801984F8  7C 60 04 30 */	srw r0, r3, r0
/* 801984FC  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80198500  38 63 00 52 */	addi r3, r3, 0x52
/* 80198504  48 00 01 EC */	b lbl_801986F0
lbl_80198508:
/* 80198508  80 7D 0F 54 */	lwz r3, 0xf54(r29)
/* 8019850C  20 00 00 03 */	subfic r0, r0, 3
/* 80198510  54 00 18 38 */	slwi r0, r0, 3
/* 80198514  7C 60 04 30 */	srw r0, r3, r0
/* 80198518  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8019851C  38 03 FF FF */	addi r0, r3, -1
/* 80198520  54 03 08 3C */	slwi r3, r0, 1
/* 80198524  38 63 00 66 */	addi r3, r3, 0x66
/* 80198528  48 00 01 C8 */	b lbl_801986F0
lbl_8019852C:
/* 8019852C  88 1D 0F 6E */	lbz r0, 0xf6e(r29)
/* 80198530  28 00 00 00 */	cmplwi r0, 0
/* 80198534  40 82 00 20 */	bne lbl_80198554
/* 80198538  80 7D 0F 54 */	lwz r3, 0xf54(r29)
/* 8019853C  20 00 00 03 */	subfic r0, r0, 3
/* 80198540  54 00 18 38 */	slwi r0, r0, 3
/* 80198544  7C 60 04 30 */	srw r0, r3, r0
/* 80198548  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8019854C  38 63 00 52 */	addi r3, r3, 0x52
/* 80198550  48 00 01 A0 */	b lbl_801986F0
lbl_80198554:
/* 80198554  80 7D 0F 54 */	lwz r3, 0xf54(r29)
/* 80198558  20 00 00 03 */	subfic r0, r0, 3
/* 8019855C  54 00 18 38 */	slwi r0, r0, 3
/* 80198560  7C 60 04 30 */	srw r0, r3, r0
/* 80198564  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80198568  38 03 FF FF */	addi r0, r3, -1
/* 8019856C  54 03 08 3C */	slwi r3, r0, 1
/* 80198570  38 63 00 66 */	addi r3, r3, 0x66
/* 80198574  48 00 01 7C */	b lbl_801986F0
lbl_80198578:
/* 80198578  88 1D 0F 6E */	lbz r0, 0xf6e(r29)
/* 8019857C  28 00 00 00 */	cmplwi r0, 0
/* 80198580  40 82 00 20 */	bne lbl_801985A0
/* 80198584  80 7D 0F 54 */	lwz r3, 0xf54(r29)
/* 80198588  20 00 00 03 */	subfic r0, r0, 3
/* 8019858C  54 00 18 38 */	slwi r0, r0, 3
/* 80198590  7C 60 04 30 */	srw r0, r3, r0
/* 80198594  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80198598  38 63 00 52 */	addi r3, r3, 0x52
/* 8019859C  48 00 01 54 */	b lbl_801986F0
lbl_801985A0:
/* 801985A0  80 7D 0F 54 */	lwz r3, 0xf54(r29)
/* 801985A4  20 00 00 03 */	subfic r0, r0, 3
/* 801985A8  54 00 18 38 */	slwi r0, r0, 3
/* 801985AC  7C 60 04 30 */	srw r0, r3, r0
/* 801985B0  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 801985B4  38 03 FF FF */	addi r0, r3, -1
/* 801985B8  54 03 08 3C */	slwi r3, r0, 1
/* 801985BC  38 63 00 66 */	addi r3, r3, 0x66
/* 801985C0  48 00 01 30 */	b lbl_801986F0
lbl_801985C4:
/* 801985C4  88 9D 0F 6E */	lbz r4, 0xf6e(r29)
/* 801985C8  28 04 00 00 */	cmplwi r4, 0
/* 801985CC  40 82 00 20 */	bne lbl_801985EC
/* 801985D0  80 7D 0F 54 */	lwz r3, 0xf54(r29)
/* 801985D4  20 04 00 03 */	subfic r0, r4, 3
/* 801985D8  54 00 18 38 */	slwi r0, r0, 3
/* 801985DC  7C 60 04 30 */	srw r0, r3, r0
/* 801985E0  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 801985E4  38 63 00 52 */	addi r3, r3, 0x52
/* 801985E8  48 00 01 08 */	b lbl_801986F0
lbl_801985EC:
/* 801985EC  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 801985F0  28 00 00 02 */	cmplwi r0, 2
/* 801985F4  41 82 00 28 */	beq lbl_8019861C
/* 801985F8  80 7D 0F 54 */	lwz r3, 0xf54(r29)
/* 801985FC  20 04 00 03 */	subfic r0, r4, 3
/* 80198600  54 00 18 38 */	slwi r0, r0, 3
/* 80198604  7C 60 04 30 */	srw r0, r3, r0
/* 80198608  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8019860C  38 03 FF FF */	addi r0, r3, -1
/* 80198610  54 03 08 3C */	slwi r3, r0, 1
/* 80198614  38 63 00 65 */	addi r3, r3, 0x65
/* 80198618  48 00 00 D8 */	b lbl_801986F0
lbl_8019861C:
/* 8019861C  80 7D 0F 54 */	lwz r3, 0xf54(r29)
/* 80198620  20 04 00 03 */	subfic r0, r4, 3
/* 80198624  54 00 18 38 */	slwi r0, r0, 3
/* 80198628  7C 60 04 30 */	srw r0, r3, r0
/* 8019862C  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80198630  38 03 FF FF */	addi r0, r3, -1
/* 80198634  54 03 08 3C */	slwi r3, r0, 1
/* 80198638  38 63 00 66 */	addi r3, r3, 0x66
/* 8019863C  48 00 00 B4 */	b lbl_801986F0
lbl_80198640:
/* 80198640  7F A3 EB 78 */	mr r3, r29
/* 80198644  38 80 00 07 */	li r4, 7
/* 80198648  4B FF EF 79 */	bl onFlag__13dShopSystem_cFi
/* 8019864C  88 1D 0F 6E */	lbz r0, 0xf6e(r29)
/* 80198650  B0 1D 0F 4C */	sth r0, 0xf4c(r29)
/* 80198654  C0 22 A1 18 */	lfs f1, lit_4494(r2)
/* 80198658  D0 3D 0F 38 */	stfs f1, 0xf38(r29)
/* 8019865C  C0 02 A1 1C */	lfs f0, lit_4495(r2)
/* 80198660  D0 1D 0F 3C */	stfs f0, 0xf3c(r29)
/* 80198664  D0 3D 0F 40 */	stfs f1, 0xf40(r29)
/* 80198668  C0 02 A1 20 */	lfs f0, lit_4496(r2)
/* 8019866C  D0 1D 0F 44 */	stfs f0, 0xf44(r29)
/* 80198670  88 9D 0F 6E */	lbz r4, 0xf6e(r29)
/* 80198674  28 04 00 00 */	cmplwi r4, 0
/* 80198678  40 82 00 20 */	bne lbl_80198698
/* 8019867C  80 7D 0F 54 */	lwz r3, 0xf54(r29)
/* 80198680  20 04 00 03 */	subfic r0, r4, 3
/* 80198684  54 00 18 38 */	slwi r0, r0, 3
/* 80198688  7C 60 04 30 */	srw r0, r3, r0
/* 8019868C  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80198690  38 63 00 52 */	addi r3, r3, 0x52
/* 80198694  48 00 00 5C */	b lbl_801986F0
lbl_80198698:
/* 80198698  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 8019869C  28 00 00 02 */	cmplwi r0, 2
/* 801986A0  41 82 00 28 */	beq lbl_801986C8
/* 801986A4  80 7D 0F 54 */	lwz r3, 0xf54(r29)
/* 801986A8  20 04 00 03 */	subfic r0, r4, 3
/* 801986AC  54 00 18 38 */	slwi r0, r0, 3
/* 801986B0  7C 60 04 30 */	srw r0, r3, r0
/* 801986B4  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 801986B8  38 03 FF FF */	addi r0, r3, -1
/* 801986BC  54 03 08 3C */	slwi r3, r0, 1
/* 801986C0  38 63 00 65 */	addi r3, r3, 0x65
/* 801986C4  48 00 00 2C */	b lbl_801986F0
lbl_801986C8:
/* 801986C8  80 7D 0F 54 */	lwz r3, 0xf54(r29)
/* 801986CC  20 04 00 03 */	subfic r0, r4, 3
/* 801986D0  54 00 18 38 */	slwi r0, r0, 3
/* 801986D4  7C 60 04 30 */	srw r0, r3, r0
/* 801986D8  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 801986DC  38 03 FF FF */	addi r0, r3, -1
/* 801986E0  54 03 08 3C */	slwi r3, r0, 1
/* 801986E4  38 63 00 66 */	addi r3, r3, 0x66
/* 801986E8  48 00 00 08 */	b lbl_801986F0
lbl_801986EC:
/* 801986EC  38 60 00 00 */	li r3, 0
lbl_801986F0:
/* 801986F0  39 61 00 20 */	addi r11, r1, 0x20
/* 801986F4  48 1C 9B 35 */	bl _restgpr_29
/* 801986F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801986FC  7C 08 03 A6 */	mtlr r0
/* 80198700  38 21 00 20 */	addi r1, r1, 0x20
/* 80198704  4E 80 00 20 */	blr 
