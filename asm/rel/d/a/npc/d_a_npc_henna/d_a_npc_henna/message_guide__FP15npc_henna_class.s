lbl_805483F4:
/* 805483F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805483F8  7C 08 02 A6 */	mflr r0
/* 805483FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80548400  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80548404  93 C1 00 08 */	stw r30, 8(r1)
/* 80548408  7C 7F 1B 78 */	mr r31, r3
/* 8054840C  A0 03 00 F8 */	lhz r0, 0xf8(r3)
/* 80548410  28 00 00 01 */	cmplwi r0, 1
/* 80548414  40 82 00 0C */	bne lbl_80548420
/* 80548418  38 00 00 02 */	li r0, 2
/* 8054841C  98 1F 05 B5 */	stb r0, 0x5b5(r31)
lbl_80548420:
/* 80548420  88 1F 05 B5 */	lbz r0, 0x5b5(r31)
/* 80548424  2C 00 00 02 */	cmpwi r0, 2
/* 80548428  40 82 01 D0 */	bne lbl_805485F8
/* 8054842C  A8 1F 05 BA */	lha r0, 0x5ba(r31)
/* 80548430  2C 00 FF FF */	cmpwi r0, -1
/* 80548434  41 82 01 C4 */	beq lbl_805485F8
/* 80548438  80 1F 05 5C */	lwz r0, 0x55c(r31)
/* 8054843C  60 00 00 0A */	ori r0, r0, 0xa
/* 80548440  90 1F 05 5C */	stw r0, 0x55c(r31)
/* 80548444  38 00 00 02 */	li r0, 2
/* 80548448  98 1F 05 45 */	stb r0, 0x545(r31)
/* 8054844C  98 1F 05 47 */	stb r0, 0x547(r31)
/* 80548450  A0 1F 00 FA */	lhz r0, 0xfa(r31)
/* 80548454  60 00 00 01 */	ori r0, r0, 1
/* 80548458  B0 1F 00 FA */	sth r0, 0xfa(r31)
/* 8054845C  3C 60 80 55 */	lis r3, lrl@ha
/* 80548460  38 63 B0 04 */	addi r3, r3, lrl@l
/* 80548464  80 63 00 00 */	lwz r3, 0(r3)
/* 80548468  28 03 00 00 */	cmplwi r3, 0
/* 8054846C  41 82 00 10 */	beq lbl_8054847C
/* 80548470  A8 03 13 B4 */	lha r0, 0x13b4(r3)
/* 80548474  2C 00 00 00 */	cmpwi r0, 0
/* 80548478  40 82 01 B0 */	bne lbl_80548628
lbl_8054847C:
/* 8054847C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80548480  3B C3 61 C0 */	addi r30, r3, g_dComIfG_gameInfo@l
/* 80548484  88 1E 4F AD */	lbz r0, 0x4fad(r30)
/* 80548488  28 00 00 00 */	cmplwi r0, 0
/* 8054848C  41 82 01 60 */	beq lbl_805485EC
/* 80548490  A0 1F 00 F8 */	lhz r0, 0xf8(r31)
/* 80548494  28 00 00 01 */	cmplwi r0, 1
/* 80548498  40 82 01 90 */	bne lbl_80548628
/* 8054849C  A8 1F 05 B8 */	lha r0, 0x5b8(r31)
/* 805484A0  2C 00 00 00 */	cmpwi r0, 0
/* 805484A4  40 82 01 18 */	bne lbl_805485BC
/* 805484A8  38 00 00 01 */	li r0, 1
/* 805484AC  B0 1F 05 B8 */	sth r0, 0x5b8(r31)
/* 805484B0  88 1F 07 D5 */	lbz r0, 0x7d5(r31)
/* 805484B4  28 00 00 00 */	cmplwi r0, 0
/* 805484B8  41 82 00 48 */	beq lbl_80548500
/* 805484BC  88 1F 07 D6 */	lbz r0, 0x7d6(r31)
/* 805484C0  28 00 00 00 */	cmplwi r0, 0
/* 805484C4  41 82 00 10 */	beq lbl_805484D4
/* 805484C8  A8 1F 05 BC */	lha r0, 0x5bc(r31)
/* 805484CC  54 00 07 BF */	clrlwi. r0, r0, 0x1e
/* 805484D0  40 82 00 30 */	bne lbl_80548500
lbl_805484D4:
/* 805484D4  38 7F 05 C0 */	addi r3, r31, 0x5c0
/* 805484D8  7F E4 FB 78 */	mr r4, r31
/* 805484DC  38 A0 03 C3 */	li r5, 0x3c3
/* 805484E0  38 C0 00 00 */	li r6, 0
/* 805484E4  38 E0 00 00 */	li r7, 0
/* 805484E8  4B D0 1A A8 */	b init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c
/* 805484EC  38 00 00 00 */	li r0, 0
/* 805484F0  98 1F 07 D5 */	stb r0, 0x7d5(r31)
/* 805484F4  38 00 00 01 */	li r0, 1
/* 805484F8  98 1F 07 D6 */	stb r0, 0x7d6(r31)
/* 805484FC  48 00 00 C0 */	b lbl_805485BC
lbl_80548500:
/* 80548500  88 1F 07 D4 */	lbz r0, 0x7d4(r31)
/* 80548504  28 00 00 00 */	cmplwi r0, 0
/* 80548508  41 82 00 28 */	beq lbl_80548530
/* 8054850C  38 00 00 00 */	li r0, 0
/* 80548510  98 1F 07 D4 */	stb r0, 0x7d4(r31)
/* 80548514  38 7F 05 C0 */	addi r3, r31, 0x5c0
/* 80548518  7F E4 FB 78 */	mr r4, r31
/* 8054851C  38 A0 03 CC */	li r5, 0x3cc
/* 80548520  38 C0 00 00 */	li r6, 0
/* 80548524  38 E0 00 00 */	li r7, 0
/* 80548528  4B D0 1A 68 */	b init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c
/* 8054852C  48 00 00 90 */	b lbl_805485BC
lbl_80548530:
/* 80548530  80 1F 07 CC */	lwz r0, 0x7cc(r31)
/* 80548534  28 00 00 00 */	cmplwi r0, 0
/* 80548538  40 82 00 6C */	bne lbl_805485A4
/* 8054853C  A8 1F 05 BC */	lha r0, 0x5bc(r31)
/* 80548540  2C 00 00 04 */	cmpwi r0, 4
/* 80548544  40 80 00 20 */	bge lbl_80548564
/* 80548548  38 7F 05 C0 */	addi r3, r31, 0x5c0
/* 8054854C  7F E4 FB 78 */	mr r4, r31
/* 80548550  38 A0 03 CD */	li r5, 0x3cd
/* 80548554  38 C0 00 00 */	li r6, 0
/* 80548558  38 E0 00 00 */	li r7, 0
/* 8054855C  4B D0 1A 34 */	b init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c
/* 80548560  48 00 00 5C */	b lbl_805485BC
lbl_80548564:
/* 80548564  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80548568  41 82 00 20 */	beq lbl_80548588
/* 8054856C  38 7F 05 C0 */	addi r3, r31, 0x5c0
/* 80548570  7F E4 FB 78 */	mr r4, r31
/* 80548574  38 A0 03 CD */	li r5, 0x3cd
/* 80548578  38 C0 00 00 */	li r6, 0
/* 8054857C  38 E0 00 00 */	li r7, 0
/* 80548580  4B D0 1A 10 */	b init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c
/* 80548584  48 00 00 38 */	b lbl_805485BC
lbl_80548588:
/* 80548588  38 7F 05 C0 */	addi r3, r31, 0x5c0
/* 8054858C  7F E4 FB 78 */	mr r4, r31
/* 80548590  38 A0 03 CE */	li r5, 0x3ce
/* 80548594  38 C0 00 00 */	li r6, 0
/* 80548598  38 E0 00 00 */	li r7, 0
/* 8054859C  4B D0 19 F4 */	b init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c
/* 805485A0  48 00 00 1C */	b lbl_805485BC
lbl_805485A4:
/* 805485A4  38 7F 05 C0 */	addi r3, r31, 0x5c0
/* 805485A8  7F E4 FB 78 */	mr r4, r31
/* 805485AC  38 A0 03 CE */	li r5, 0x3ce
/* 805485B0  38 C0 00 00 */	li r6, 0
/* 805485B4  38 E0 00 00 */	li r7, 0
/* 805485B8  4B D0 19 D8 */	b init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c
lbl_805485BC:
/* 805485BC  38 7F 05 C0 */	addi r3, r31, 0x5c0
/* 805485C0  7F E4 FB 78 */	mr r4, r31
/* 805485C4  38 A0 00 00 */	li r5, 0
/* 805485C8  38 C0 00 00 */	li r6, 0
/* 805485CC  4B D0 1D 0C */	b doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci
/* 805485D0  2C 03 00 00 */	cmpwi r3, 0
/* 805485D4  41 82 00 54 */	beq lbl_80548628
/* 805485D8  38 7E 4E C8 */	addi r3, r30, 0x4ec8
/* 805485DC  4B AF 9E 8C */	b reset__14dEvt_control_cFv
/* 805485E0  38 00 00 00 */	li r0, 0
/* 805485E4  B0 1F 05 B8 */	sth r0, 0x5b8(r31)
/* 805485E8  48 00 00 40 */	b lbl_80548628
lbl_805485EC:
/* 805485EC  38 00 00 00 */	li r0, 0
/* 805485F0  B0 1F 05 B8 */	sth r0, 0x5b8(r31)
/* 805485F4  48 00 00 34 */	b lbl_80548628
lbl_805485F8:
/* 805485F8  80 1F 04 9C */	lwz r0, 0x49c(r31)
/* 805485FC  54 00 00 3E */	slwi r0, r0, 0
/* 80548600  90 1F 04 9C */	stw r0, 0x49c(r31)
/* 80548604  80 7F 05 5C */	lwz r3, 0x55c(r31)
/* 80548608  38 00 FF F5 */	li r0, -11
/* 8054860C  7C 60 00 38 */	and r0, r3, r0
/* 80548610  90 1F 05 5C */	stw r0, 0x55c(r31)
/* 80548614  88 1F 07 E1 */	lbz r0, 0x7e1(r31)
/* 80548618  7C 00 07 75 */	extsb. r0, r0
/* 8054861C  40 82 00 0C */	bne lbl_80548628
/* 80548620  38 00 00 00 */	li r0, 0
/* 80548624  B0 1F 05 B8 */	sth r0, 0x5b8(r31)
lbl_80548628:
/* 80548628  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8054862C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80548630  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80548634  7C 08 03 A6 */	mtlr r0
/* 80548638  38 21 00 10 */	addi r1, r1, 0x10
/* 8054863C  4E 80 00 20 */	blr 
