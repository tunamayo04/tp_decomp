lbl_8032842C:
/* 8032842C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80328430  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 80328434  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80328438  EC 62 00 2A */	fadds f3, f2, f0
/* 8032843C  88 03 00 04 */	lbz r0, 4(r3)
/* 80328440  2C 00 00 02 */	cmpwi r0, 2
/* 80328444  41 82 00 F0 */	beq lbl_80328534
/* 80328448  40 80 00 10 */	bge lbl_80328458
/* 8032844C  2C 00 00 00 */	cmpwi r0, 0
/* 80328450  40 80 00 14 */	bge lbl_80328464
/* 80328454  48 00 05 6C */	b lbl_803289C0
lbl_80328458:
/* 80328458  2C 00 00 05 */	cmpwi r0, 5
/* 8032845C  40 80 05 64 */	bge lbl_803289C0
/* 80328460  48 00 04 90 */	b lbl_803288F0
lbl_80328464:
/* 80328464  A8 03 00 06 */	lha r0, 6(r3)
/* 80328468  C8 82 CA 40 */	lfd f4, lit_975(r2)
/* 8032846C  6C 04 80 00 */	xoris r4, r0, 0x8000
/* 80328470  90 81 00 0C */	stw r4, 0xc(r1)
/* 80328474  3C 00 43 30 */	lis r0, 0x4330
/* 80328478  90 01 00 08 */	stw r0, 8(r1)
/* 8032847C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80328480  EC 00 20 28 */	fsubs f0, f0, f4
/* 80328484  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80328488  40 80 00 14 */	bge lbl_8032849C
/* 8032848C  90 81 00 14 */	stw r4, 0x14(r1)
/* 80328490  90 01 00 10 */	stw r0, 0x10(r1)
/* 80328494  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80328498  EC 60 20 28 */	fsubs f3, f0, f4
lbl_8032849C:
/* 8032849C  A8 03 00 08 */	lha r0, 8(r3)
/* 803284A0  C8 82 CA 40 */	lfd f4, lit_975(r2)
/* 803284A4  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 803284A8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 803284AC  3C 00 43 30 */	lis r0, 0x4330
/* 803284B0  90 01 00 18 */	stw r0, 0x18(r1)
/* 803284B4  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 803284B8  EC 00 20 28 */	fsubs f0, f0, f4
/* 803284BC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803284C0  4C 41 13 82 */	cror 2, 1, 2
/* 803284C4  40 82 00 1C */	bne lbl_803284E0
/* 803284C8  90 61 00 24 */	stw r3, 0x24(r1)
/* 803284CC  90 01 00 20 */	stw r0, 0x20(r1)
/* 803284D0  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 803284D4  EC 60 20 28 */	fsubs f3, f0, f4
/* 803284D8  C0 02 CA 38 */	lfs f0, lit_973(r2)
/* 803284DC  EC 63 00 28 */	fsubs f3, f3, f0
lbl_803284E0:
/* 803284E0  FC 02 18 40 */	fcmpo cr0, f2, f3
/* 803284E4  4C 40 13 82 */	cror 2, 0, 2
/* 803284E8  40 82 00 28 */	bne lbl_80328510
/* 803284EC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 803284F0  4C 40 13 82 */	cror 2, 0, 2
/* 803284F4  40 82 00 14 */	bne lbl_80328508
/* 803284F8  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 803284FC  40 80 00 0C */	bge lbl_80328508
/* 80328500  38 60 00 01 */	li r3, 1
/* 80328504  48 00 04 C0 */	b lbl_803289C4
lbl_80328508:
/* 80328508  38 60 00 00 */	li r3, 0
/* 8032850C  48 00 04 B8 */	b lbl_803289C4
lbl_80328510:
/* 80328510  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 80328514  4C 40 13 82 */	cror 2, 0, 2
/* 80328518  40 82 00 14 */	bne lbl_8032852C
/* 8032851C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80328520  40 80 00 0C */	bge lbl_8032852C
/* 80328524  38 60 00 01 */	li r3, 1
/* 80328528  48 00 04 9C */	b lbl_803289C4
lbl_8032852C:
/* 8032852C  38 60 00 00 */	li r3, 0
/* 80328530  48 00 04 94 */	b lbl_803289C4
lbl_80328534:
/* 80328534  A8 E3 00 06 */	lha r7, 6(r3)
/* 80328538  C8 02 CA 40 */	lfd f0, lit_975(r2)
/* 8032853C  6C E6 80 00 */	xoris r6, r7, 0x8000
/* 80328540  90 C1 00 24 */	stw r6, 0x24(r1)
/* 80328544  3C A0 43 30 */	lis r5, 0x4330
/* 80328548  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8032854C  C8 81 00 20 */	lfd f4, 0x20(r1)
/* 80328550  EC 84 00 28 */	fsubs f4, f4, f0
/* 80328554  FC 02 20 40 */	fcmpo cr0, f2, f4
/* 80328558  40 80 00 A4 */	bge lbl_803285FC
/* 8032855C  C0 82 CA 34 */	lfs f4, lit_853(r2)
/* 80328560  48 00 00 40 */	b lbl_803285A0
lbl_80328564:
/* 80328564  A8 03 00 0A */	lha r0, 0xa(r3)
/* 80328568  7C 07 00 50 */	subf r0, r7, r0
/* 8032856C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80328570  90 01 00 24 */	stw r0, 0x24(r1)
/* 80328574  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80328578  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 8032857C  EC 42 00 28 */	fsubs f2, f2, f0
/* 80328580  FC 02 20 40 */	fcmpo cr0, f2, f4
/* 80328584  4C 40 13 82 */	cror 2, 0, 2
/* 80328588  41 82 00 30 */	beq lbl_803285B8
/* 8032858C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80328590  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80328594  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 80328598  EC 42 00 28 */	fsubs f2, f2, f0
/* 8032859C  EC 63 10 2A */	fadds f3, f3, f2
lbl_803285A0:
/* 803285A0  90 C1 00 24 */	stw r6, 0x24(r1)
/* 803285A4  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803285A8  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 803285AC  EC 42 00 28 */	fsubs f2, f2, f0
/* 803285B0  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 803285B4  41 80 FF B0 */	blt lbl_80328564
lbl_803285B8:
/* 803285B8  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 803285BC  4C 40 13 82 */	cror 2, 0, 2
/* 803285C0  40 82 00 34 */	bne lbl_803285F4
/* 803285C4  A8 03 00 0A */	lha r0, 0xa(r3)
/* 803285C8  C8 42 CA 40 */	lfd f2, lit_975(r2)
/* 803285CC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803285D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803285D4  3C 00 43 30 */	lis r0, 0x4330
/* 803285D8  90 01 00 20 */	stw r0, 0x20(r1)
/* 803285DC  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 803285E0  EC 00 10 28 */	fsubs f0, f0, f2
/* 803285E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803285E8  40 80 00 0C */	bge lbl_803285F4
/* 803285EC  38 60 00 01 */	li r3, 1
/* 803285F0  48 00 03 D4 */	b lbl_803289C4
lbl_803285F4:
/* 803285F4  38 60 00 00 */	li r3, 0
/* 803285F8  48 00 03 CC */	b lbl_803289C4
lbl_803285FC:
/* 803285FC  A9 03 00 08 */	lha r8, 8(r3)
/* 80328600  6D 04 80 00 */	xoris r4, r8, 0x8000
/* 80328604  90 81 00 24 */	stw r4, 0x24(r1)
/* 80328608  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8032860C  C8 81 00 20 */	lfd f4, 0x20(r1)
/* 80328610  EC 84 00 28 */	fsubs f4, f4, f0
/* 80328614  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 80328618  4C 40 13 82 */	cror 2, 0, 2
/* 8032861C  40 82 00 A8 */	bne lbl_803286C4
/* 80328620  C0 82 CA 34 */	lfs f4, lit_853(r2)
/* 80328624  48 00 00 40 */	b lbl_80328664
lbl_80328628:
/* 80328628  A8 03 00 0A */	lha r0, 0xa(r3)
/* 8032862C  7C 00 40 50 */	subf r0, r0, r8
/* 80328630  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80328634  90 01 00 24 */	stw r0, 0x24(r1)
/* 80328638  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8032863C  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 80328640  EC 42 00 28 */	fsubs f2, f2, f0
/* 80328644  FC 02 20 40 */	fcmpo cr0, f2, f4
/* 80328648  4C 40 13 82 */	cror 2, 0, 2
/* 8032864C  41 82 00 34 */	beq lbl_80328680
/* 80328650  90 01 00 24 */	stw r0, 0x24(r1)
/* 80328654  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80328658  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 8032865C  EC 42 00 28 */	fsubs f2, f2, f0
/* 80328660  EC 63 10 28 */	fsubs f3, f3, f2
lbl_80328664:
/* 80328664  90 81 00 24 */	stw r4, 0x24(r1)
/* 80328668  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8032866C  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 80328670  EC 42 00 28 */	fsubs f2, f2, f0
/* 80328674  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 80328678  4C 41 13 82 */	cror 2, 1, 2
/* 8032867C  41 82 FF AC */	beq lbl_80328628
lbl_80328680:
/* 80328680  A8 03 00 0A */	lha r0, 0xa(r3)
/* 80328684  C8 42 CA 40 */	lfd f2, lit_975(r2)
/* 80328688  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8032868C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80328690  3C 00 43 30 */	lis r0, 0x4330
/* 80328694  90 01 00 20 */	stw r0, 0x20(r1)
/* 80328698  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8032869C  EC 00 10 28 */	fsubs f0, f0, f2
/* 803286A0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803286A4  4C 40 13 82 */	cror 2, 0, 2
/* 803286A8  40 82 00 14 */	bne lbl_803286BC
/* 803286AC  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 803286B0  40 80 00 0C */	bge lbl_803286BC
/* 803286B4  38 60 00 01 */	li r3, 1
/* 803286B8  48 00 03 0C */	b lbl_803289C4
lbl_803286BC:
/* 803286BC  38 60 00 00 */	li r3, 0
/* 803286C0  48 00 03 04 */	b lbl_803289C4
lbl_803286C4:
/* 803286C4  90 C1 00 24 */	stw r6, 0x24(r1)
/* 803286C8  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803286CC  C8 81 00 20 */	lfd f4, 0x20(r1)
/* 803286D0  EC 84 00 28 */	fsubs f4, f4, f0
/* 803286D4  FC 03 20 40 */	fcmpo cr0, f3, f4
/* 803286D8  40 80 00 D4 */	bge lbl_803287AC
/* 803286DC  C0 A2 CA 34 */	lfs f5, lit_853(r2)
/* 803286E0  48 00 00 40 */	b lbl_80328720
lbl_803286E4:
/* 803286E4  A8 03 00 0A */	lha r0, 0xa(r3)
/* 803286E8  7C 07 00 50 */	subf r0, r7, r0
/* 803286EC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803286F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803286F4  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803286F8  C8 81 00 20 */	lfd f4, 0x20(r1)
/* 803286FC  EC 84 00 28 */	fsubs f4, f4, f0
/* 80328700  FC 04 28 40 */	fcmpo cr0, f4, f5
/* 80328704  4C 40 13 82 */	cror 2, 0, 2
/* 80328708  41 82 00 30 */	beq lbl_80328738
/* 8032870C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80328710  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80328714  C8 81 00 20 */	lfd f4, 0x20(r1)
/* 80328718  EC 84 00 28 */	fsubs f4, f4, f0
/* 8032871C  EC 63 20 2A */	fadds f3, f3, f4
lbl_80328720:
/* 80328720  90 C1 00 24 */	stw r6, 0x24(r1)
/* 80328724  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80328728  C8 81 00 20 */	lfd f4, 0x20(r1)
/* 8032872C  EC 84 00 28 */	fsubs f4, f4, f0
/* 80328730  FC 03 20 40 */	fcmpo cr0, f3, f4
/* 80328734  41 80 FF B0 */	blt lbl_803286E4
lbl_80328738:
/* 80328738  C8 82 CA 40 */	lfd f4, lit_975(r2)
/* 8032873C  6C E0 80 00 */	xoris r0, r7, 0x8000
/* 80328740  90 01 00 24 */	stw r0, 0x24(r1)
/* 80328744  3C 00 43 30 */	lis r0, 0x4330
/* 80328748  90 01 00 20 */	stw r0, 0x20(r1)
/* 8032874C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80328750  EC 00 20 28 */	fsubs f0, f0, f4
/* 80328754  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80328758  4C 40 13 82 */	cror 2, 0, 2
/* 8032875C  40 82 00 0C */	bne lbl_80328768
/* 80328760  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80328764  41 80 00 38 */	blt lbl_8032879C
lbl_80328768:
/* 80328768  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8032876C  4C 40 13 82 */	cror 2, 0, 2
/* 80328770  40 82 00 34 */	bne lbl_803287A4
/* 80328774  A8 03 00 0A */	lha r0, 0xa(r3)
/* 80328778  C8 42 CA 40 */	lfd f2, lit_975(r2)
/* 8032877C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80328780  90 01 00 24 */	stw r0, 0x24(r1)
/* 80328784  3C 00 43 30 */	lis r0, 0x4330
/* 80328788  90 01 00 20 */	stw r0, 0x20(r1)
/* 8032878C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80328790  EC 00 10 28 */	fsubs f0, f0, f2
/* 80328794  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80328798  40 80 00 0C */	bge lbl_803287A4
lbl_8032879C:
/* 8032879C  38 60 00 01 */	li r3, 1
/* 803287A0  48 00 02 24 */	b lbl_803289C4
lbl_803287A4:
/* 803287A4  38 60 00 00 */	li r3, 0
/* 803287A8  48 00 02 1C */	b lbl_803289C4
lbl_803287AC:
/* 803287AC  90 81 00 24 */	stw r4, 0x24(r1)
/* 803287B0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803287B4  C8 81 00 20 */	lfd f4, 0x20(r1)
/* 803287B8  EC 84 00 28 */	fsubs f4, f4, f0
/* 803287BC  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 803287C0  4C 40 13 82 */	cror 2, 0, 2
/* 803287C4  40 82 00 D8 */	bne lbl_8032889C
/* 803287C8  C0 A2 CA 34 */	lfs f5, lit_853(r2)
/* 803287CC  48 00 00 40 */	b lbl_8032880C
lbl_803287D0:
/* 803287D0  A8 03 00 0A */	lha r0, 0xa(r3)
/* 803287D4  7C 00 40 50 */	subf r0, r0, r8
/* 803287D8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803287DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803287E0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803287E4  C8 81 00 20 */	lfd f4, 0x20(r1)
/* 803287E8  EC 84 00 28 */	fsubs f4, f4, f0
/* 803287EC  FC 04 28 40 */	fcmpo cr0, f4, f5
/* 803287F0  4C 40 13 82 */	cror 2, 0, 2
/* 803287F4  41 82 00 34 */	beq lbl_80328828
/* 803287F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803287FC  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80328800  C8 81 00 20 */	lfd f4, 0x20(r1)
/* 80328804  EC 84 00 28 */	fsubs f4, f4, f0
/* 80328808  EC 63 20 28 */	fsubs f3, f3, f4
lbl_8032880C:
/* 8032880C  90 81 00 24 */	stw r4, 0x24(r1)
/* 80328810  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80328814  C8 81 00 20 */	lfd f4, 0x20(r1)
/* 80328818  EC 84 00 28 */	fsubs f4, f4, f0
/* 8032881C  FC 03 20 40 */	fcmpo cr0, f3, f4
/* 80328820  4C 41 13 82 */	cror 2, 1, 2
/* 80328824  41 82 FF AC */	beq lbl_803287D0
lbl_80328828:
/* 80328828  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8032882C  4C 40 13 82 */	cror 2, 0, 2
/* 80328830  40 82 00 28 */	bne lbl_80328858
/* 80328834  C8 42 CA 40 */	lfd f2, lit_975(r2)
/* 80328838  6D 00 80 00 */	xoris r0, r8, 0x8000
/* 8032883C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80328840  3C 00 43 30 */	lis r0, 0x4330
/* 80328844  90 01 00 20 */	stw r0, 0x20(r1)
/* 80328848  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8032884C  EC 00 10 28 */	fsubs f0, f0, f2
/* 80328850  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80328854  41 80 00 38 */	blt lbl_8032888C
lbl_80328858:
/* 80328858  A8 03 00 0A */	lha r0, 0xa(r3)
/* 8032885C  C8 42 CA 40 */	lfd f2, lit_975(r2)
/* 80328860  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80328864  90 01 00 24 */	stw r0, 0x24(r1)
/* 80328868  3C 00 43 30 */	lis r0, 0x4330
/* 8032886C  90 01 00 20 */	stw r0, 0x20(r1)
/* 80328870  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80328874  EC 00 10 28 */	fsubs f0, f0, f2
/* 80328878  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8032887C  4C 40 13 82 */	cror 2, 0, 2
/* 80328880  40 82 00 14 */	bne lbl_80328894
/* 80328884  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80328888  40 80 00 0C */	bge lbl_80328894
lbl_8032888C:
/* 8032888C  38 60 00 01 */	li r3, 1
/* 80328890  48 00 01 34 */	b lbl_803289C4
lbl_80328894:
/* 80328894  38 60 00 00 */	li r3, 0
/* 80328898  48 00 01 2C */	b lbl_803289C4
lbl_8032889C:
/* 8032889C  FC 02 18 40 */	fcmpo cr0, f2, f3
/* 803288A0  4C 40 13 82 */	cror 2, 0, 2
/* 803288A4  40 82 00 28 */	bne lbl_803288CC
/* 803288A8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 803288AC  4C 40 13 82 */	cror 2, 0, 2
/* 803288B0  40 82 00 14 */	bne lbl_803288C4
/* 803288B4  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 803288B8  40 80 00 0C */	bge lbl_803288C4
/* 803288BC  38 60 00 01 */	li r3, 1
/* 803288C0  48 00 01 04 */	b lbl_803289C4
lbl_803288C4:
/* 803288C4  38 60 00 00 */	li r3, 0
/* 803288C8  48 00 00 FC */	b lbl_803289C4
lbl_803288CC:
/* 803288CC  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 803288D0  4C 40 13 82 */	cror 2, 0, 2
/* 803288D4  40 82 00 14 */	bne lbl_803288E8
/* 803288D8  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 803288DC  40 80 00 0C */	bge lbl_803288E8
/* 803288E0  38 60 00 01 */	li r3, 1
/* 803288E4  48 00 00 E0 */	b lbl_803289C4
lbl_803288E8:
/* 803288E8  38 60 00 00 */	li r3, 0
/* 803288EC  48 00 00 D8 */	b lbl_803289C4
lbl_803288F0:
/* 803288F0  A8 03 00 08 */	lha r0, 8(r3)
/* 803288F4  C8 82 CA 40 */	lfd f4, lit_975(r2)
/* 803288F8  6C 04 80 00 */	xoris r4, r0, 0x8000
/* 803288FC  90 81 00 24 */	stw r4, 0x24(r1)
/* 80328900  3C 00 43 30 */	lis r0, 0x4330
/* 80328904  90 01 00 20 */	stw r0, 0x20(r1)
/* 80328908  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8032890C  EC 00 20 28 */	fsubs f0, f0, f4
/* 80328910  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80328914  4C 41 13 82 */	cror 2, 1, 2
/* 80328918  40 82 00 1C */	bne lbl_80328934
/* 8032891C  90 81 00 1C */	stw r4, 0x1c(r1)
/* 80328920  90 01 00 18 */	stw r0, 0x18(r1)
/* 80328924  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80328928  EC 60 20 28 */	fsubs f3, f0, f4
/* 8032892C  C0 02 CA 38 */	lfs f0, lit_973(r2)
/* 80328930  EC 63 00 28 */	fsubs f3, f3, f0
lbl_80328934:
/* 80328934  A8 03 00 06 */	lha r0, 6(r3)
/* 80328938  C8 82 CA 40 */	lfd f4, lit_975(r2)
/* 8032893C  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 80328940  90 61 00 14 */	stw r3, 0x14(r1)
/* 80328944  3C 00 43 30 */	lis r0, 0x4330
/* 80328948  90 01 00 10 */	stw r0, 0x10(r1)
/* 8032894C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80328950  EC 00 20 28 */	fsubs f0, f0, f4
/* 80328954  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80328958  40 80 00 14 */	bge lbl_8032896C
/* 8032895C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80328960  90 01 00 08 */	stw r0, 8(r1)
/* 80328964  C8 01 00 08 */	lfd f0, 8(r1)
/* 80328968  EC 60 20 28 */	fsubs f3, f0, f4
lbl_8032896C:
/* 8032896C  FC 02 18 40 */	fcmpo cr0, f2, f3
/* 80328970  4C 40 13 82 */	cror 2, 0, 2
/* 80328974  40 82 00 28 */	bne lbl_8032899C
/* 80328978  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8032897C  4C 40 13 82 */	cror 2, 0, 2
/* 80328980  40 82 00 14 */	bne lbl_80328994
/* 80328984  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80328988  40 80 00 0C */	bge lbl_80328994
/* 8032898C  38 60 00 01 */	li r3, 1
/* 80328990  48 00 00 34 */	b lbl_803289C4
lbl_80328994:
/* 80328994  38 60 00 00 */	li r3, 0
/* 80328998  48 00 00 2C */	b lbl_803289C4
lbl_8032899C:
/* 8032899C  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 803289A0  4C 40 13 82 */	cror 2, 0, 2
/* 803289A4  40 82 00 14 */	bne lbl_803289B8
/* 803289A8  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 803289AC  40 80 00 0C */	bge lbl_803289B8
/* 803289B0  38 60 00 01 */	li r3, 1
/* 803289B4  48 00 00 10 */	b lbl_803289C4
lbl_803289B8:
/* 803289B8  38 60 00 00 */	li r3, 0
/* 803289BC  48 00 00 08 */	b lbl_803289C4
lbl_803289C0:
/* 803289C0  38 60 00 00 */	li r3, 0
lbl_803289C4:
/* 803289C4  38 21 00 30 */	addi r1, r1, 0x30
/* 803289C8  4E 80 00 20 */	blr 
