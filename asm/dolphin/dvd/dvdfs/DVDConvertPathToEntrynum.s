lbl_80348528:
/* 80348528  7C 08 02 A6 */	mflr r0
/* 8034852C  90 01 00 04 */	stw r0, 4(r1)
/* 80348530  94 21 FF B8 */	stwu r1, -0x48(r1)
/* 80348534  BE 81 00 18 */	stmw r20, 0x18(r1)
/* 80348538  7C 77 1B 78 */	mr r23, r3
/* 8034853C  3C 60 80 3D */	lis r3, lit_119@ha
/* 80348540  3B 37 00 00 */	addi r25, r23, 0
/* 80348544  3B E3 13 80 */	addi r31, r3, lit_119@l
/* 80348548  83 4D 91 E8 */	lwz r26, currentDirectory(r13)
lbl_8034854C:
/* 8034854C  88 77 00 00 */	lbz r3, 0(r23)
/* 80348550  7C 60 07 75 */	extsb. r0, r3
/* 80348554  40 82 00 0C */	bne lbl_80348560
/* 80348558  7F 43 D3 78 */	mr r3, r26
/* 8034855C  48 00 02 AC */	b lbl_80348808
lbl_80348560:
/* 80348560  7C 60 07 74 */	extsb r0, r3
/* 80348564  2C 00 00 2F */	cmpwi r0, 0x2f
/* 80348568  40 82 00 10 */	bne lbl_80348578
/* 8034856C  3B 40 00 00 */	li r26, 0
/* 80348570  3A F7 00 01 */	addi r23, r23, 1
/* 80348574  4B FF FF D8 */	b lbl_8034854C
lbl_80348578:
/* 80348578  2C 00 00 2E */	cmpwi r0, 0x2e
/* 8034857C  40 82 00 74 */	bne lbl_803485F0
/* 80348580  88 77 00 01 */	lbz r3, 1(r23)
/* 80348584  7C 60 07 74 */	extsb r0, r3
/* 80348588  2C 00 00 2E */	cmpwi r0, 0x2e
/* 8034858C  40 82 00 44 */	bne lbl_803485D0
/* 80348590  88 77 00 02 */	lbz r3, 2(r23)
/* 80348594  2C 03 00 2F */	cmpwi r3, 0x2f
/* 80348598  40 82 00 1C */	bne lbl_803485B4
/* 8034859C  1C 7A 00 0C */	mulli r3, r26, 0xc
/* 803485A0  80 8D 91 DC */	lwz r4, FstStart(r13)
/* 803485A4  38 03 00 04 */	addi r0, r3, 4
/* 803485A8  7F 44 00 2E */	lwzx r26, r4, r0
/* 803485AC  3A F7 00 03 */	addi r23, r23, 3
/* 803485B0  4B FF FF 9C */	b lbl_8034854C
lbl_803485B4:
/* 803485B4  7C 60 07 75 */	extsb. r0, r3
/* 803485B8  40 82 00 38 */	bne lbl_803485F0
/* 803485BC  1C 1A 00 0C */	mulli r0, r26, 0xc
/* 803485C0  80 6D 91 DC */	lwz r3, FstStart(r13)
/* 803485C4  7C 63 02 14 */	add r3, r3, r0
/* 803485C8  80 63 00 04 */	lwz r3, 4(r3)
/* 803485CC  48 00 02 3C */	b lbl_80348808
lbl_803485D0:
/* 803485D0  2C 00 00 2F */	cmpwi r0, 0x2f
/* 803485D4  40 82 00 0C */	bne lbl_803485E0
/* 803485D8  3A F7 00 02 */	addi r23, r23, 2
/* 803485DC  4B FF FF 70 */	b lbl_8034854C
lbl_803485E0:
/* 803485E0  7C 60 07 75 */	extsb. r0, r3
/* 803485E4  40 82 00 0C */	bne lbl_803485F0
/* 803485E8  7F 43 D3 78 */	mr r3, r26
/* 803485EC  48 00 02 1C */	b lbl_80348808
lbl_803485F0:
/* 803485F0  80 0D 91 EC */	lwz r0, __DVDLongFileNameFlag(r13)
/* 803485F4  28 00 00 00 */	cmplwi r0, 0
/* 803485F8  40 82 00 AC */	bne lbl_803486A4
/* 803485FC  3B 97 00 00 */	addi r28, r23, 0
/* 80348600  38 A0 00 00 */	li r5, 0
/* 80348604  38 80 00 00 */	li r4, 0
/* 80348608  48 00 00 48 */	b lbl_80348650
lbl_8034860C:
/* 8034860C  7C 60 07 74 */	extsb r0, r3
/* 80348610  2C 00 00 2E */	cmpwi r0, 0x2e
/* 80348614  40 82 00 2C */	bne lbl_80348640
/* 80348618  7C 17 E0 50 */	subf r0, r23, r28
/* 8034861C  2C 00 00 08 */	cmpwi r0, 8
/* 80348620  41 81 00 0C */	bgt lbl_8034862C
/* 80348624  2C 05 00 01 */	cmpwi r5, 1
/* 80348628  40 82 00 0C */	bne lbl_80348634
lbl_8034862C:
/* 8034862C  38 80 00 01 */	li r4, 1
/* 80348630  48 00 00 38 */	b lbl_80348668
lbl_80348634:
/* 80348634  3B 1C 00 01 */	addi r24, r28, 1
/* 80348638  38 A0 00 01 */	li r5, 1
/* 8034863C  48 00 00 10 */	b lbl_8034864C
lbl_80348640:
/* 80348640  2C 00 00 20 */	cmpwi r0, 0x20
/* 80348644  40 82 00 08 */	bne lbl_8034864C
/* 80348648  38 80 00 01 */	li r4, 1
lbl_8034864C:
/* 8034864C  3B 9C 00 01 */	addi r28, r28, 1
lbl_80348650:
/* 80348650  88 7C 00 00 */	lbz r3, 0(r28)
/* 80348654  7C 60 07 75 */	extsb. r0, r3
/* 80348658  41 82 00 10 */	beq lbl_80348668
/* 8034865C  7C 60 07 74 */	extsb r0, r3
/* 80348660  2C 00 00 2F */	cmpwi r0, 0x2f
/* 80348664  40 82 FF A8 */	bne lbl_8034860C
lbl_80348668:
/* 80348668  2C 05 00 01 */	cmpwi r5, 1
/* 8034866C  40 82 00 14 */	bne lbl_80348680
/* 80348670  7C 18 E0 50 */	subf r0, r24, r28
/* 80348674  2C 00 00 03 */	cmpwi r0, 3
/* 80348678  40 81 00 08 */	ble lbl_80348680
/* 8034867C  38 80 00 01 */	li r4, 1
lbl_80348680:
/* 80348680  2C 04 00 00 */	cmpwi r4, 0
/* 80348684  41 82 00 44 */	beq lbl_803486C8
/* 80348688  38 BF 00 00 */	addi r5, r31, 0
/* 8034868C  4C C6 31 82 */	crclr 6
/* 80348690  38 D9 00 00 */	addi r6, r25, 0
/* 80348694  38 6D 84 60 */	la r3, lit_118(r13) /* 804509E0-_SDA_BASE_ */
/* 80348698  38 80 01 83 */	li r4, 0x183
/* 8034869C  4B CB E7 E1 */	bl OSPanic
/* 803486A0  48 00 00 28 */	b lbl_803486C8
lbl_803486A4:
/* 803486A4  7E FC BB 78 */	mr r28, r23
/* 803486A8  48 00 00 08 */	b lbl_803486B0
lbl_803486AC:
/* 803486AC  3B 9C 00 01 */	addi r28, r28, 1
lbl_803486B0:
/* 803486B0  88 7C 00 00 */	lbz r3, 0(r28)
/* 803486B4  7C 60 07 75 */	extsb. r0, r3
/* 803486B8  41 82 00 10 */	beq lbl_803486C8
/* 803486BC  7C 60 07 74 */	extsb r0, r3
/* 803486C0  2C 00 00 2F */	cmpwi r0, 0x2f
/* 803486C4  40 82 FF E8 */	bne lbl_803486AC
lbl_803486C8:
/* 803486C8  88 1C 00 00 */	lbz r0, 0(r28)
/* 803486CC  7C 00 07 75 */	extsb. r0, r0
/* 803486D0  40 82 00 0C */	bne lbl_803486DC
/* 803486D4  3B C0 00 00 */	li r30, 0
/* 803486D8  48 00 00 08 */	b lbl_803486E0
lbl_803486DC:
/* 803486DC  3B C0 00 01 */	li r30, 1
lbl_803486E0:
/* 803486E0  1F BA 00 0C */	mulli r29, r26, 0xc
/* 803486E4  7F 77 E0 50 */	subf r27, r23, r28
/* 803486E8  3B 5A 00 01 */	addi r26, r26, 1
/* 803486EC  48 00 00 E4 */	b lbl_803487D0
lbl_803486F0:
/* 803486F0  1F 9A 00 0C */	mulli r28, r26, 0xc
/* 803486F4  7C 83 E0 2E */	lwzx r4, r3, r28
/* 803486F8  54 80 00 0F */	rlwinm. r0, r4, 0, 0, 7
/* 803486FC  40 82 00 0C */	bne lbl_80348708
/* 80348700  38 00 00 00 */	li r0, 0
/* 80348704  48 00 00 08 */	b lbl_8034870C
lbl_80348708:
/* 80348708  38 00 00 01 */	li r0, 1
lbl_8034870C:
/* 8034870C  2C 00 00 00 */	cmpwi r0, 0
/* 80348710  40 82 00 0C */	bne lbl_8034871C
/* 80348714  2C 1E 00 01 */	cmpwi r30, 1
/* 80348718  41 82 00 80 */	beq lbl_80348798
lbl_8034871C:
/* 8034871C  80 6D 91 E0 */	lwz r3, FstStringStart(r13)
/* 80348720  54 80 02 3E */	clrlwi r0, r4, 8
/* 80348724  3A B7 00 00 */	addi r21, r23, 0
/* 80348728  7E 83 02 14 */	add r20, r3, r0
/* 8034872C  48 00 00 38 */	b lbl_80348764
lbl_80348730:
/* 80348730  88 14 00 00 */	lbz r0, 0(r20)
/* 80348734  3A 94 00 01 */	addi r20, r20, 1
/* 80348738  7C 03 07 74 */	extsb r3, r0
/* 8034873C  48 01 CD 35 */	bl tolower
/* 80348740  88 15 00 00 */	lbz r0, 0(r21)
/* 80348744  3A C3 00 00 */	addi r22, r3, 0
/* 80348748  3A B5 00 01 */	addi r21, r21, 1
/* 8034874C  7C 03 07 74 */	extsb r3, r0
/* 80348750  48 01 CD 21 */	bl tolower
/* 80348754  7C 03 B0 00 */	cmpw r3, r22
/* 80348758  41 82 00 0C */	beq lbl_80348764
/* 8034875C  38 00 00 00 */	li r0, 0
/* 80348760  48 00 00 30 */	b lbl_80348790
lbl_80348764:
/* 80348764  88 14 00 00 */	lbz r0, 0(r20)
/* 80348768  7C 00 07 75 */	extsb. r0, r0
/* 8034876C  40 82 FF C4 */	bne lbl_80348730
/* 80348770  88 75 00 00 */	lbz r3, 0(r21)
/* 80348774  2C 03 00 2F */	cmpwi r3, 0x2f
/* 80348778  41 82 00 0C */	beq lbl_80348784
/* 8034877C  7C 60 07 75 */	extsb. r0, r3
/* 80348780  40 82 00 0C */	bne lbl_8034878C
lbl_80348784:
/* 80348784  38 00 00 01 */	li r0, 1
/* 80348788  48 00 00 08 */	b lbl_80348790
lbl_8034878C:
/* 8034878C  38 00 00 00 */	li r0, 0
lbl_80348790:
/* 80348790  2C 00 00 01 */	cmpwi r0, 1
/* 80348794  41 82 00 58 */	beq lbl_803487EC
lbl_80348798:
/* 80348798  80 0D 91 DC */	lwz r0, FstStart(r13)
/* 8034879C  7C 60 E2 14 */	add r3, r0, r28
/* 803487A0  80 03 00 00 */	lwz r0, 0(r3)
/* 803487A4  54 00 00 0F */	rlwinm. r0, r0, 0, 0, 7
/* 803487A8  40 82 00 0C */	bne lbl_803487B4
/* 803487AC  38 00 00 00 */	li r0, 0
/* 803487B0  48 00 00 08 */	b lbl_803487B8
lbl_803487B4:
/* 803487B4  38 00 00 01 */	li r0, 1
lbl_803487B8:
/* 803487B8  2C 00 00 00 */	cmpwi r0, 0
/* 803487BC  41 82 00 0C */	beq lbl_803487C8
/* 803487C0  80 03 00 08 */	lwz r0, 8(r3)
/* 803487C4  48 00 00 08 */	b lbl_803487CC
lbl_803487C8:
/* 803487C8  38 1A 00 01 */	addi r0, r26, 1
lbl_803487CC:
/* 803487CC  7C 1A 03 78 */	mr r26, r0
lbl_803487D0:
/* 803487D0  80 6D 91 DC */	lwz r3, FstStart(r13)
/* 803487D4  38 03 00 08 */	addi r0, r3, 8
/* 803487D8  7C 1D 00 2E */	lwzx r0, r29, r0
/* 803487DC  7C 1A 00 40 */	cmplw r26, r0
/* 803487E0  41 80 FF 10 */	blt lbl_803486F0
/* 803487E4  38 60 FF FF */	li r3, -1
/* 803487E8  48 00 00 20 */	b lbl_80348808
lbl_803487EC:
/* 803487EC  2C 1E 00 00 */	cmpwi r30, 0
/* 803487F0  40 82 00 0C */	bne lbl_803487FC
/* 803487F4  7F 43 D3 78 */	mr r3, r26
/* 803487F8  48 00 00 10 */	b lbl_80348808
lbl_803487FC:
/* 803487FC  7E FB BA 14 */	add r23, r27, r23
/* 80348800  3A F7 00 01 */	addi r23, r23, 1
/* 80348804  4B FF FD 48 */	b lbl_8034854C
lbl_80348808:
/* 80348808  BA 81 00 18 */	lmw r20, 0x18(r1)
/* 8034880C  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80348810  38 21 00 48 */	addi r1, r1, 0x48
/* 80348814  7C 08 03 A6 */	mtlr r0
/* 80348818  4E 80 00 20 */	blr 
