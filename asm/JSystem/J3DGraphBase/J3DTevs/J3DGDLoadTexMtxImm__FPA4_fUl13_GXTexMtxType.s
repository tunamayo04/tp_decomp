lbl_8032441C:
/* 8032441C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80324420  54 89 14 3A */	rlwinm r9, r4, 2, 0x10, 0x1d
/* 80324424  2C 05 00 01 */	cmpwi r5, 1
/* 80324428  38 00 00 0C */	li r0, 0xc
/* 8032442C  40 82 00 08 */	bne lbl_80324434
/* 80324430  38 00 00 08 */	li r0, 8
lbl_80324434:
/* 80324434  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 80324438  38 E0 00 10 */	li r7, 0x10
/* 8032443C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324440  80 86 00 08 */	lwz r4, 8(r6)
/* 80324444  38 04 00 01 */	addi r0, r4, 1
/* 80324448  90 06 00 08 */	stw r0, 8(r6)
/* 8032444C  98 E4 00 00 */	stb r7, 0(r4)
/* 80324450  39 08 FF FF */	addi r8, r8, -1
/* 80324454  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 80324458  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 8032445C  80 86 00 08 */	lwz r4, 8(r6)
/* 80324460  38 04 00 01 */	addi r0, r4, 1
/* 80324464  90 06 00 08 */	stw r0, 8(r6)
/* 80324468  98 E4 00 00 */	stb r7, 0(r4)
/* 8032446C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324470  80 86 00 08 */	lwz r4, 8(r6)
/* 80324474  38 04 00 01 */	addi r0, r4, 1
/* 80324478  90 06 00 08 */	stw r0, 8(r6)
/* 8032447C  99 04 00 00 */	stb r8, 0(r4)
/* 80324480  55 27 C6 3E */	rlwinm r7, r9, 0x18, 0x18, 0x1f
/* 80324484  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324488  80 86 00 08 */	lwz r4, 8(r6)
/* 8032448C  38 04 00 01 */	addi r0, r4, 1
/* 80324490  90 06 00 08 */	stw r0, 8(r6)
/* 80324494  98 E4 00 00 */	stb r7, 0(r4)
/* 80324498  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 8032449C  80 86 00 08 */	lwz r4, 8(r6)
/* 803244A0  38 04 00 01 */	addi r0, r4, 1
/* 803244A4  90 06 00 08 */	stw r0, 8(r6)
/* 803244A8  99 24 00 00 */	stb r9, 0(r4)
/* 803244AC  C0 03 00 00 */	lfs f0, 0(r3)
/* 803244B0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 803244B4  81 01 00 34 */	lwz r8, 0x34(r1)
/* 803244B8  55 07 46 3E */	srwi r7, r8, 0x18
/* 803244BC  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803244C0  80 86 00 08 */	lwz r4, 8(r6)
/* 803244C4  38 04 00 01 */	addi r0, r4, 1
/* 803244C8  90 06 00 08 */	stw r0, 8(r6)
/* 803244CC  98 E4 00 00 */	stb r7, 0(r4)
/* 803244D0  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 803244D4  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803244D8  80 86 00 08 */	lwz r4, 8(r6)
/* 803244DC  38 04 00 01 */	addi r0, r4, 1
/* 803244E0  90 06 00 08 */	stw r0, 8(r6)
/* 803244E4  98 E4 00 00 */	stb r7, 0(r4)
/* 803244E8  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 803244EC  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803244F0  80 86 00 08 */	lwz r4, 8(r6)
/* 803244F4  38 04 00 01 */	addi r0, r4, 1
/* 803244F8  90 06 00 08 */	stw r0, 8(r6)
/* 803244FC  98 E4 00 00 */	stb r7, 0(r4)
/* 80324500  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324504  80 86 00 08 */	lwz r4, 8(r6)
/* 80324508  38 04 00 01 */	addi r0, r4, 1
/* 8032450C  90 06 00 08 */	stw r0, 8(r6)
/* 80324510  99 04 00 00 */	stb r8, 0(r4)
/* 80324514  C0 03 00 04 */	lfs f0, 4(r3)
/* 80324518  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8032451C  81 01 00 30 */	lwz r8, 0x30(r1)
/* 80324520  55 07 46 3E */	srwi r7, r8, 0x18
/* 80324524  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324528  80 86 00 08 */	lwz r4, 8(r6)
/* 8032452C  38 04 00 01 */	addi r0, r4, 1
/* 80324530  90 06 00 08 */	stw r0, 8(r6)
/* 80324534  98 E4 00 00 */	stb r7, 0(r4)
/* 80324538  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 8032453C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324540  80 86 00 08 */	lwz r4, 8(r6)
/* 80324544  38 04 00 01 */	addi r0, r4, 1
/* 80324548  90 06 00 08 */	stw r0, 8(r6)
/* 8032454C  98 E4 00 00 */	stb r7, 0(r4)
/* 80324550  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 80324554  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324558  80 86 00 08 */	lwz r4, 8(r6)
/* 8032455C  38 04 00 01 */	addi r0, r4, 1
/* 80324560  90 06 00 08 */	stw r0, 8(r6)
/* 80324564  98 E4 00 00 */	stb r7, 0(r4)
/* 80324568  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 8032456C  80 86 00 08 */	lwz r4, 8(r6)
/* 80324570  38 04 00 01 */	addi r0, r4, 1
/* 80324574  90 06 00 08 */	stw r0, 8(r6)
/* 80324578  99 04 00 00 */	stb r8, 0(r4)
/* 8032457C  C0 03 00 08 */	lfs f0, 8(r3)
/* 80324580  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80324584  81 01 00 2C */	lwz r8, 0x2c(r1)
/* 80324588  55 07 46 3E */	srwi r7, r8, 0x18
/* 8032458C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324590  80 86 00 08 */	lwz r4, 8(r6)
/* 80324594  38 04 00 01 */	addi r0, r4, 1
/* 80324598  90 06 00 08 */	stw r0, 8(r6)
/* 8032459C  98 E4 00 00 */	stb r7, 0(r4)
/* 803245A0  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 803245A4  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803245A8  80 86 00 08 */	lwz r4, 8(r6)
/* 803245AC  38 04 00 01 */	addi r0, r4, 1
/* 803245B0  90 06 00 08 */	stw r0, 8(r6)
/* 803245B4  98 E4 00 00 */	stb r7, 0(r4)
/* 803245B8  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 803245BC  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803245C0  80 86 00 08 */	lwz r4, 8(r6)
/* 803245C4  38 04 00 01 */	addi r0, r4, 1
/* 803245C8  90 06 00 08 */	stw r0, 8(r6)
/* 803245CC  98 E4 00 00 */	stb r7, 0(r4)
/* 803245D0  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803245D4  80 86 00 08 */	lwz r4, 8(r6)
/* 803245D8  38 04 00 01 */	addi r0, r4, 1
/* 803245DC  90 06 00 08 */	stw r0, 8(r6)
/* 803245E0  99 04 00 00 */	stb r8, 0(r4)
/* 803245E4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803245E8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803245EC  81 01 00 28 */	lwz r8, 0x28(r1)
/* 803245F0  55 07 46 3E */	srwi r7, r8, 0x18
/* 803245F4  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803245F8  80 86 00 08 */	lwz r4, 8(r6)
/* 803245FC  38 04 00 01 */	addi r0, r4, 1
/* 80324600  90 06 00 08 */	stw r0, 8(r6)
/* 80324604  98 E4 00 00 */	stb r7, 0(r4)
/* 80324608  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 8032460C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324610  80 86 00 08 */	lwz r4, 8(r6)
/* 80324614  38 04 00 01 */	addi r0, r4, 1
/* 80324618  90 06 00 08 */	stw r0, 8(r6)
/* 8032461C  98 E4 00 00 */	stb r7, 0(r4)
/* 80324620  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 80324624  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324628  80 86 00 08 */	lwz r4, 8(r6)
/* 8032462C  38 04 00 01 */	addi r0, r4, 1
/* 80324630  90 06 00 08 */	stw r0, 8(r6)
/* 80324634  98 E4 00 00 */	stb r7, 0(r4)
/* 80324638  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 8032463C  80 86 00 08 */	lwz r4, 8(r6)
/* 80324640  38 04 00 01 */	addi r0, r4, 1
/* 80324644  90 06 00 08 */	stw r0, 8(r6)
/* 80324648  99 04 00 00 */	stb r8, 0(r4)
/* 8032464C  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80324650  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80324654  81 01 00 24 */	lwz r8, 0x24(r1)
/* 80324658  55 07 46 3E */	srwi r7, r8, 0x18
/* 8032465C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324660  80 86 00 08 */	lwz r4, 8(r6)
/* 80324664  38 04 00 01 */	addi r0, r4, 1
/* 80324668  90 06 00 08 */	stw r0, 8(r6)
/* 8032466C  98 E4 00 00 */	stb r7, 0(r4)
/* 80324670  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80324674  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324678  80 86 00 08 */	lwz r4, 8(r6)
/* 8032467C  38 04 00 01 */	addi r0, r4, 1
/* 80324680  90 06 00 08 */	stw r0, 8(r6)
/* 80324684  98 E4 00 00 */	stb r7, 0(r4)
/* 80324688  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 8032468C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324690  80 86 00 08 */	lwz r4, 8(r6)
/* 80324694  38 04 00 01 */	addi r0, r4, 1
/* 80324698  90 06 00 08 */	stw r0, 8(r6)
/* 8032469C  98 E4 00 00 */	stb r7, 0(r4)
/* 803246A0  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803246A4  80 86 00 08 */	lwz r4, 8(r6)
/* 803246A8  38 04 00 01 */	addi r0, r4, 1
/* 803246AC  90 06 00 08 */	stw r0, 8(r6)
/* 803246B0  99 04 00 00 */	stb r8, 0(r4)
/* 803246B4  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 803246B8  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803246BC  81 01 00 20 */	lwz r8, 0x20(r1)
/* 803246C0  55 07 46 3E */	srwi r7, r8, 0x18
/* 803246C4  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803246C8  80 86 00 08 */	lwz r4, 8(r6)
/* 803246CC  38 04 00 01 */	addi r0, r4, 1
/* 803246D0  90 06 00 08 */	stw r0, 8(r6)
/* 803246D4  98 E4 00 00 */	stb r7, 0(r4)
/* 803246D8  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 803246DC  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803246E0  80 86 00 08 */	lwz r4, 8(r6)
/* 803246E4  38 04 00 01 */	addi r0, r4, 1
/* 803246E8  90 06 00 08 */	stw r0, 8(r6)
/* 803246EC  98 E4 00 00 */	stb r7, 0(r4)
/* 803246F0  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 803246F4  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803246F8  80 86 00 08 */	lwz r4, 8(r6)
/* 803246FC  38 04 00 01 */	addi r0, r4, 1
/* 80324700  90 06 00 08 */	stw r0, 8(r6)
/* 80324704  98 E4 00 00 */	stb r7, 0(r4)
/* 80324708  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 8032470C  80 86 00 08 */	lwz r4, 8(r6)
/* 80324710  38 04 00 01 */	addi r0, r4, 1
/* 80324714  90 06 00 08 */	stw r0, 8(r6)
/* 80324718  99 04 00 00 */	stb r8, 0(r4)
/* 8032471C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80324720  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80324724  81 01 00 1C */	lwz r8, 0x1c(r1)
/* 80324728  55 07 46 3E */	srwi r7, r8, 0x18
/* 8032472C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324730  80 86 00 08 */	lwz r4, 8(r6)
/* 80324734  38 04 00 01 */	addi r0, r4, 1
/* 80324738  90 06 00 08 */	stw r0, 8(r6)
/* 8032473C  98 E4 00 00 */	stb r7, 0(r4)
/* 80324740  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80324744  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324748  80 86 00 08 */	lwz r4, 8(r6)
/* 8032474C  38 04 00 01 */	addi r0, r4, 1
/* 80324750  90 06 00 08 */	stw r0, 8(r6)
/* 80324754  98 E4 00 00 */	stb r7, 0(r4)
/* 80324758  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 8032475C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324760  80 86 00 08 */	lwz r4, 8(r6)
/* 80324764  38 04 00 01 */	addi r0, r4, 1
/* 80324768  90 06 00 08 */	stw r0, 8(r6)
/* 8032476C  98 E4 00 00 */	stb r7, 0(r4)
/* 80324770  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324774  80 86 00 08 */	lwz r4, 8(r6)
/* 80324778  38 04 00 01 */	addi r0, r4, 1
/* 8032477C  90 06 00 08 */	stw r0, 8(r6)
/* 80324780  99 04 00 00 */	stb r8, 0(r4)
/* 80324784  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80324788  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8032478C  81 01 00 18 */	lwz r8, 0x18(r1)
/* 80324790  55 07 46 3E */	srwi r7, r8, 0x18
/* 80324794  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80324798  80 86 00 08 */	lwz r4, 8(r6)
/* 8032479C  38 04 00 01 */	addi r0, r4, 1
/* 803247A0  90 06 00 08 */	stw r0, 8(r6)
/* 803247A4  98 E4 00 00 */	stb r7, 0(r4)
/* 803247A8  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 803247AC  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803247B0  80 86 00 08 */	lwz r4, 8(r6)
/* 803247B4  38 04 00 01 */	addi r0, r4, 1
/* 803247B8  90 06 00 08 */	stw r0, 8(r6)
/* 803247BC  98 E4 00 00 */	stb r7, 0(r4)
/* 803247C0  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 803247C4  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803247C8  80 86 00 08 */	lwz r4, 8(r6)
/* 803247CC  38 04 00 01 */	addi r0, r4, 1
/* 803247D0  90 06 00 08 */	stw r0, 8(r6)
/* 803247D4  98 E4 00 00 */	stb r7, 0(r4)
/* 803247D8  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 803247DC  80 86 00 08 */	lwz r4, 8(r6)
/* 803247E0  38 04 00 01 */	addi r0, r4, 1
/* 803247E4  90 06 00 08 */	stw r0, 8(r6)
/* 803247E8  99 04 00 00 */	stb r8, 0(r4)
/* 803247EC  2C 05 00 00 */	cmpwi r5, 0
/* 803247F0  40 82 01 A4 */	bne lbl_80324994
/* 803247F4  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 803247F8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803247FC  80 E1 00 14 */	lwz r7, 0x14(r1)
/* 80324800  54 E6 46 3E */	srwi r6, r7, 0x18
/* 80324804  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 80324808  80 85 00 08 */	lwz r4, 8(r5)
/* 8032480C  38 04 00 01 */	addi r0, r4, 1
/* 80324810  90 05 00 08 */	stw r0, 8(r5)
/* 80324814  98 C4 00 00 */	stb r6, 0(r4)
/* 80324818  54 E6 86 3E */	rlwinm r6, r7, 0x10, 0x18, 0x1f
/* 8032481C  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 80324820  80 85 00 08 */	lwz r4, 8(r5)
/* 80324824  38 04 00 01 */	addi r0, r4, 1
/* 80324828  90 05 00 08 */	stw r0, 8(r5)
/* 8032482C  98 C4 00 00 */	stb r6, 0(r4)
/* 80324830  54 E6 C6 3E */	rlwinm r6, r7, 0x18, 0x18, 0x1f
/* 80324834  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 80324838  80 85 00 08 */	lwz r4, 8(r5)
/* 8032483C  38 04 00 01 */	addi r0, r4, 1
/* 80324840  90 05 00 08 */	stw r0, 8(r5)
/* 80324844  98 C4 00 00 */	stb r6, 0(r4)
/* 80324848  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 8032484C  80 85 00 08 */	lwz r4, 8(r5)
/* 80324850  38 04 00 01 */	addi r0, r4, 1
/* 80324854  90 05 00 08 */	stw r0, 8(r5)
/* 80324858  98 E4 00 00 */	stb r7, 0(r4)
/* 8032485C  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 80324860  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80324864  80 E1 00 10 */	lwz r7, 0x10(r1)
/* 80324868  54 E6 46 3E */	srwi r6, r7, 0x18
/* 8032486C  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 80324870  80 85 00 08 */	lwz r4, 8(r5)
/* 80324874  38 04 00 01 */	addi r0, r4, 1
/* 80324878  90 05 00 08 */	stw r0, 8(r5)
/* 8032487C  98 C4 00 00 */	stb r6, 0(r4)
/* 80324880  54 E6 86 3E */	rlwinm r6, r7, 0x10, 0x18, 0x1f
/* 80324884  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 80324888  80 85 00 08 */	lwz r4, 8(r5)
/* 8032488C  38 04 00 01 */	addi r0, r4, 1
/* 80324890  90 05 00 08 */	stw r0, 8(r5)
/* 80324894  98 C4 00 00 */	stb r6, 0(r4)
/* 80324898  54 E6 C6 3E */	rlwinm r6, r7, 0x18, 0x18, 0x1f
/* 8032489C  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 803248A0  80 85 00 08 */	lwz r4, 8(r5)
/* 803248A4  38 04 00 01 */	addi r0, r4, 1
/* 803248A8  90 05 00 08 */	stw r0, 8(r5)
/* 803248AC  98 C4 00 00 */	stb r6, 0(r4)
/* 803248B0  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 803248B4  80 85 00 08 */	lwz r4, 8(r5)
/* 803248B8  38 04 00 01 */	addi r0, r4, 1
/* 803248BC  90 05 00 08 */	stw r0, 8(r5)
/* 803248C0  98 E4 00 00 */	stb r7, 0(r4)
/* 803248C4  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 803248C8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803248CC  80 E1 00 0C */	lwz r7, 0xc(r1)
/* 803248D0  54 E6 46 3E */	srwi r6, r7, 0x18
/* 803248D4  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 803248D8  80 85 00 08 */	lwz r4, 8(r5)
/* 803248DC  38 04 00 01 */	addi r0, r4, 1
/* 803248E0  90 05 00 08 */	stw r0, 8(r5)
/* 803248E4  98 C4 00 00 */	stb r6, 0(r4)
/* 803248E8  54 E6 86 3E */	rlwinm r6, r7, 0x10, 0x18, 0x1f
/* 803248EC  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 803248F0  80 85 00 08 */	lwz r4, 8(r5)
/* 803248F4  38 04 00 01 */	addi r0, r4, 1
/* 803248F8  90 05 00 08 */	stw r0, 8(r5)
/* 803248FC  98 C4 00 00 */	stb r6, 0(r4)
/* 80324900  54 E6 C6 3E */	rlwinm r6, r7, 0x18, 0x18, 0x1f
/* 80324904  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 80324908  80 85 00 08 */	lwz r4, 8(r5)
/* 8032490C  38 04 00 01 */	addi r0, r4, 1
/* 80324910  90 05 00 08 */	stw r0, 8(r5)
/* 80324914  98 C4 00 00 */	stb r6, 0(r4)
/* 80324918  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 8032491C  80 85 00 08 */	lwz r4, 8(r5)
/* 80324920  38 04 00 01 */	addi r0, r4, 1
/* 80324924  90 05 00 08 */	stw r0, 8(r5)
/* 80324928  98 E4 00 00 */	stb r7, 0(r4)
/* 8032492C  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 80324930  D0 01 00 08 */	stfs f0, 8(r1)
/* 80324934  80 C1 00 08 */	lwz r6, 8(r1)
/* 80324938  54 C5 46 3E */	srwi r5, r6, 0x18
/* 8032493C  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80324940  80 64 00 08 */	lwz r3, 8(r4)
/* 80324944  38 03 00 01 */	addi r0, r3, 1
/* 80324948  90 04 00 08 */	stw r0, 8(r4)
/* 8032494C  98 A3 00 00 */	stb r5, 0(r3)
/* 80324950  54 C5 86 3E */	rlwinm r5, r6, 0x10, 0x18, 0x1f
/* 80324954  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80324958  80 64 00 08 */	lwz r3, 8(r4)
/* 8032495C  38 03 00 01 */	addi r0, r3, 1
/* 80324960  90 04 00 08 */	stw r0, 8(r4)
/* 80324964  98 A3 00 00 */	stb r5, 0(r3)
/* 80324968  54 C5 C6 3E */	rlwinm r5, r6, 0x18, 0x18, 0x1f
/* 8032496C  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80324970  80 64 00 08 */	lwz r3, 8(r4)
/* 80324974  38 03 00 01 */	addi r0, r3, 1
/* 80324978  90 04 00 08 */	stw r0, 8(r4)
/* 8032497C  98 A3 00 00 */	stb r5, 0(r3)
/* 80324980  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80324984  80 64 00 08 */	lwz r3, 8(r4)
/* 80324988  38 03 00 01 */	addi r0, r3, 1
/* 8032498C  90 04 00 08 */	stw r0, 8(r4)
/* 80324990  98 C3 00 00 */	stb r6, 0(r3)
lbl_80324994:
/* 80324994  38 21 00 40 */	addi r1, r1, 0x40
/* 80324998  4E 80 00 20 */	blr 
