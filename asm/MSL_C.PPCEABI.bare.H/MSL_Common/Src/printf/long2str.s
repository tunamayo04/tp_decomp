lbl_80368030:
/* 80368030  38 C0 00 00 */	li r6, 0
/* 80368034  2C 03 00 00 */	cmpwi r3, 0
/* 80368038  98 C4 FF FF */	stb r6, -1(r4)
/* 8036803C  38 C4 FF FF */	addi r6, r4, -1
/* 80368040  39 00 00 00 */	li r8, 0
/* 80368044  38 E0 00 00 */	li r7, 0
/* 80368048  40 82 00 30 */	bne lbl_80368078
/* 8036804C  81 25 00 0C */	lwz r9, 0xc(r5)
/* 80368050  2C 09 00 00 */	cmpwi r9, 0
/* 80368054  40 82 00 24 */	bne lbl_80368078
/* 80368058  89 25 00 03 */	lbz r9, 3(r5)
/* 8036805C  28 09 00 00 */	cmplwi r9, 0
/* 80368060  41 82 00 10 */	beq lbl_80368070
/* 80368064  89 25 00 05 */	lbz r9, 5(r5)
/* 80368068  28 09 00 6F */	cmplwi r9, 0x6f
/* 8036806C  41 82 00 0C */	beq lbl_80368078
lbl_80368070:
/* 80368070  7C C3 33 78 */	mr r3, r6
/* 80368074  4E 80 00 20 */	blr 
lbl_80368078:
/* 80368078  89 25 00 05 */	lbz r9, 5(r5)
/* 8036807C  39 49 FF A8 */	addi r10, r9, -88
/* 80368080  28 0A 00 20 */	cmplwi r10, 0x20
/* 80368084  41 81 00 60 */	bgt lbl_803680E4
/* 80368088  3D 20 80 3D */	lis r9, lit_1307@ha
/* 8036808C  55 4A 10 3A */	slwi r10, r10, 2
/* 80368090  39 29 2F 9C */	addi r9, r9, lit_1307@l
/* 80368094  7D 29 50 2E */	lwzx r9, r9, r10
/* 80368098  7D 29 03 A6 */	mtctr r9
/* 8036809C  4E 80 04 20 */	bctr 
/* 803680A0  2C 03 00 00 */	cmpwi r3, 0
/* 803680A4  38 00 00 0A */	li r0, 0xa
/* 803680A8  40 80 00 3C */	bge lbl_803680E4
/* 803680AC  7C 63 00 D0 */	neg r3, r3
/* 803680B0  39 00 00 01 */	li r8, 1
/* 803680B4  48 00 00 30 */	b lbl_803680E4
/* 803680B8  39 20 00 00 */	li r9, 0
/* 803680BC  38 00 00 08 */	li r0, 8
/* 803680C0  99 25 00 01 */	stb r9, 1(r5)
/* 803680C4  48 00 00 20 */	b lbl_803680E4
/* 803680C8  39 20 00 00 */	li r9, 0
/* 803680CC  38 00 00 0A */	li r0, 0xa
/* 803680D0  99 25 00 01 */	stb r9, 1(r5)
/* 803680D4  48 00 00 10 */	b lbl_803680E4
/* 803680D8  39 20 00 00 */	li r9, 0
/* 803680DC  38 00 00 10 */	li r0, 0x10
/* 803680E0  99 25 00 01 */	stb r9, 1(r5)
lbl_803680E4:
/* 803680E4  89 25 00 05 */	lbz r9, 5(r5)
lbl_803680E8:
/* 803680E8  7D 43 03 96 */	divwu r10, r3, r0
/* 803680EC  7D 4A 01 D6 */	mullw r10, r10, r0
/* 803680F0  7D 4A 18 50 */	subf r10, r10, r3
/* 803680F4  7C 63 03 96 */	divwu r3, r3, r0
/* 803680F8  2C 0A 00 0A */	cmpwi r10, 0xa
/* 803680FC  40 80 00 0C */	bge lbl_80368108
/* 80368100  39 4A 00 30 */	addi r10, r10, 0x30
/* 80368104  48 00 00 18 */	b lbl_8036811C
lbl_80368108:
/* 80368108  28 09 00 78 */	cmplwi r9, 0x78
/* 8036810C  40 82 00 0C */	bne lbl_80368118
/* 80368110  39 4A 00 57 */	addi r10, r10, 0x57
/* 80368114  48 00 00 08 */	b lbl_8036811C
lbl_80368118:
/* 80368118  39 4A 00 37 */	addi r10, r10, 0x37
lbl_8036811C:
/* 8036811C  28 03 00 00 */	cmplwi r3, 0
/* 80368120  99 46 FF FF */	stb r10, -1(r6)
/* 80368124  38 C6 FF FF */	addi r6, r6, -1
/* 80368128  38 E7 00 01 */	addi r7, r7, 1
/* 8036812C  40 82 FF BC */	bne lbl_803680E8
/* 80368130  28 00 00 08 */	cmplwi r0, 8
/* 80368134  40 82 00 28 */	bne lbl_8036815C
/* 80368138  88 65 00 03 */	lbz r3, 3(r5)
/* 8036813C  28 03 00 00 */	cmplwi r3, 0
/* 80368140  41 82 00 1C */	beq lbl_8036815C
/* 80368144  88 66 00 00 */	lbz r3, 0(r6)
/* 80368148  2C 03 00 30 */	cmpwi r3, 0x30
/* 8036814C  41 82 00 10 */	beq lbl_8036815C
/* 80368150  38 60 00 30 */	li r3, 0x30
/* 80368154  38 E7 00 01 */	addi r7, r7, 1
/* 80368158  9C 66 FF FF */	stbu r3, -1(r6)
lbl_8036815C:
/* 8036815C  88 65 00 00 */	lbz r3, 0(r5)
/* 80368160  28 03 00 02 */	cmplwi r3, 2
/* 80368164  40 82 00 4C */	bne lbl_803681B0
/* 80368168  80 65 00 08 */	lwz r3, 8(r5)
/* 8036816C  2C 08 00 00 */	cmpwi r8, 0
/* 80368170  90 65 00 0C */	stw r3, 0xc(r5)
/* 80368174  40 82 00 10 */	bne lbl_80368184
/* 80368178  88 65 00 01 */	lbz r3, 1(r5)
/* 8036817C  28 03 00 00 */	cmplwi r3, 0
/* 80368180  41 82 00 10 */	beq lbl_80368190
lbl_80368184:
/* 80368184  80 65 00 0C */	lwz r3, 0xc(r5)
/* 80368188  38 63 FF FF */	addi r3, r3, -1
/* 8036818C  90 65 00 0C */	stw r3, 0xc(r5)
lbl_80368190:
/* 80368190  28 00 00 10 */	cmplwi r0, 0x10
/* 80368194  40 82 00 1C */	bne lbl_803681B0
/* 80368198  88 65 00 03 */	lbz r3, 3(r5)
/* 8036819C  28 03 00 00 */	cmplwi r3, 0
/* 803681A0  41 82 00 10 */	beq lbl_803681B0
/* 803681A4  80 65 00 0C */	lwz r3, 0xc(r5)
/* 803681A8  38 63 FF FE */	addi r3, r3, -2
/* 803681AC  90 65 00 0C */	stw r3, 0xc(r5)
lbl_803681B0:
/* 803681B0  81 25 00 0C */	lwz r9, 0xc(r5)
/* 803681B4  7C 66 20 50 */	subf r3, r6, r4
/* 803681B8  7C 69 1A 14 */	add r3, r9, r3
/* 803681BC  2C 03 01 FD */	cmpwi r3, 0x1fd
/* 803681C0  40 81 00 0C */	ble lbl_803681CC
/* 803681C4  38 60 00 00 */	li r3, 0
/* 803681C8  4E 80 00 20 */	blr 
lbl_803681CC:
/* 803681CC  7C 07 48 00 */	cmpw r7, r9
/* 803681D0  7C 87 48 50 */	subf r4, r7, r9
/* 803681D4  38 E0 00 30 */	li r7, 0x30
/* 803681D8  40 80 00 48 */	bge lbl_80368220
/* 803681DC  54 83 E8 FF */	rlwinm. r3, r4, 0x1d, 3, 0x1f
/* 803681E0  7C 69 03 A6 */	mtctr r3
/* 803681E4  41 82 00 30 */	beq lbl_80368214
lbl_803681E8:
/* 803681E8  98 E6 FF FF */	stb r7, -1(r6)
/* 803681EC  98 E6 FF FE */	stb r7, -2(r6)
/* 803681F0  98 E6 FF FD */	stb r7, -3(r6)
/* 803681F4  98 E6 FF FC */	stb r7, -4(r6)
/* 803681F8  98 E6 FF FB */	stb r7, -5(r6)
/* 803681FC  98 E6 FF FA */	stb r7, -6(r6)
/* 80368200  98 E6 FF F9 */	stb r7, -7(r6)
/* 80368204  9C E6 FF F8 */	stbu r7, -8(r6)
/* 80368208  42 00 FF E0 */	bdnz lbl_803681E8
/* 8036820C  70 84 00 07 */	andi. r4, r4, 7
/* 80368210  41 82 00 10 */	beq lbl_80368220
lbl_80368214:
/* 80368214  7C 89 03 A6 */	mtctr r4
lbl_80368218:
/* 80368218  9C E6 FF FF */	stbu r7, -1(r6)
/* 8036821C  42 00 FF FC */	bdnz lbl_80368218
lbl_80368220:
/* 80368220  28 00 00 10 */	cmplwi r0, 0x10
/* 80368224  40 82 00 20 */	bne lbl_80368244
/* 80368228  88 05 00 03 */	lbz r0, 3(r5)
/* 8036822C  28 00 00 00 */	cmplwi r0, 0
/* 80368230  41 82 00 14 */	beq lbl_80368244
/* 80368234  88 65 00 05 */	lbz r3, 5(r5)
/* 80368238  38 00 00 30 */	li r0, 0x30
/* 8036823C  98 66 FF FF */	stb r3, -1(r6)
/* 80368240  9C 06 FF FE */	stbu r0, -2(r6)
lbl_80368244:
/* 80368244  2C 08 00 00 */	cmpwi r8, 0
/* 80368248  41 82 00 10 */	beq lbl_80368258
/* 8036824C  38 00 00 2D */	li r0, 0x2d
/* 80368250  9C 06 FF FF */	stbu r0, -1(r6)
/* 80368254  48 00 00 2C */	b lbl_80368280
lbl_80368258:
/* 80368258  88 05 00 01 */	lbz r0, 1(r5)
/* 8036825C  28 00 00 01 */	cmplwi r0, 1
/* 80368260  40 82 00 10 */	bne lbl_80368270
/* 80368264  38 00 00 2B */	li r0, 0x2b
/* 80368268  9C 06 FF FF */	stbu r0, -1(r6)
/* 8036826C  48 00 00 14 */	b lbl_80368280
lbl_80368270:
/* 80368270  28 00 00 02 */	cmplwi r0, 2
/* 80368274  40 82 00 0C */	bne lbl_80368280
/* 80368278  38 00 00 20 */	li r0, 0x20
/* 8036827C  9C 06 FF FF */	stbu r0, -1(r6)
lbl_80368280:
/* 80368280  7C C3 33 78 */	mr r3, r6
/* 80368284  4E 80 00 20 */	blr 
