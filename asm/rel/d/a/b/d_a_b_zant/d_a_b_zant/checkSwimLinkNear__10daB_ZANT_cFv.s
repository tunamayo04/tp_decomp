lbl_806432F8:
/* 806432F8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 806432FC  7C 08 02 A6 */	mflr r0
/* 80643300  90 01 00 34 */	stw r0, 0x34(r1)
/* 80643304  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80643308  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8064330C  7C 7E 1B 78 */	mr r30, r3
/* 80643310  3C 60 80 65 */	lis r3, lit_3757@ha
/* 80643314  3B E3 EB 1C */	addi r31, r3, lit_3757@l
/* 80643318  88 1E 07 28 */	lbz r0, 0x728(r30)
/* 8064331C  54 00 10 3A */	slwi r0, r0, 2
/* 80643320  7C 7E 02 14 */	add r3, r30, r0
/* 80643324  80 63 07 2C */	lwz r3, 0x72c(r3)
/* 80643328  38 81 00 0C */	addi r4, r1, 0xc
/* 8064332C  4B 9D 66 90 */	b fopAcM_SearchByID__FUiPP10fopAc_ac_c
/* 80643330  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80643334  28 00 00 00 */	cmplwi r0, 0
/* 80643338  40 82 00 0C */	bne lbl_80643344
/* 8064333C  38 60 00 00 */	li r3, 0
/* 80643340  48 00 01 B4 */	b lbl_806434F4
lbl_80643344:
/* 80643344  7F C3 F3 78 */	mr r3, r30
/* 80643348  4B FF FD 99 */	bl checkSwimLinkNearMouth__10daB_ZANT_cFv
/* 8064334C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80643350  41 82 01 A0 */	beq lbl_806434F0
/* 80643354  88 1E 07 06 */	lbz r0, 0x706(r30)
/* 80643358  28 00 00 00 */	cmplwi r0, 0
/* 8064335C  41 82 01 80 */	beq lbl_806434DC
/* 80643360  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80643364  88 04 06 6C */	lbz r0, 0x66c(r4)
/* 80643368  2C 00 00 01 */	cmpwi r0, 1
/* 8064336C  40 82 01 70 */	bne lbl_806434DC
/* 80643370  A8 04 04 E6 */	lha r0, 0x4e6(r4)
/* 80643374  C0 3F 00 78 */	lfs f1, 0x78(r31)
/* 80643378  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 8064337C  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha
/* 80643380  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l
/* 80643384  7C 03 04 2E */	lfsx f0, r3, r0
/* 80643388  EC 01 00 32 */	fmuls f0, f1, f0
/* 8064338C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80643390  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 80643394  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80643398  7C 63 02 14 */	add r3, r3, r0
/* 8064339C  C0 03 00 04 */	lfs f0, 4(r3)
/* 806433A0  EC 01 00 32 */	fmuls f0, f1, f0
/* 806433A4  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 806433A8  38 61 00 10 */	addi r3, r1, 0x10
/* 806433AC  38 84 04 D0 */	addi r4, r4, 0x4d0
/* 806433B0  7C 65 1B 78 */	mr r5, r3
/* 806433B4  4B D0 3C DC */	b PSVECAdd
/* 806433B8  38 61 00 10 */	addi r3, r1, 0x10
/* 806433BC  38 9E 04 D0 */	addi r4, r30, 0x4d0
/* 806433C0  4B D0 3F DC */	b PSVECSquareDistance
/* 806433C4  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 806433C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806433CC  40 81 00 58 */	ble lbl_80643424
/* 806433D0  FC 00 08 34 */	frsqrte f0, f1
/* 806433D4  C8 9F 00 80 */	lfd f4, 0x80(r31)
/* 806433D8  FC 44 00 32 */	fmul f2, f4, f0
/* 806433DC  C8 7F 00 88 */	lfd f3, 0x88(r31)
/* 806433E0  FC 00 00 32 */	fmul f0, f0, f0
/* 806433E4  FC 01 00 32 */	fmul f0, f1, f0
/* 806433E8  FC 03 00 28 */	fsub f0, f3, f0
/* 806433EC  FC 02 00 32 */	fmul f0, f2, f0
/* 806433F0  FC 44 00 32 */	fmul f2, f4, f0
/* 806433F4  FC 00 00 32 */	fmul f0, f0, f0
/* 806433F8  FC 01 00 32 */	fmul f0, f1, f0
/* 806433FC  FC 03 00 28 */	fsub f0, f3, f0
/* 80643400  FC 02 00 32 */	fmul f0, f2, f0
/* 80643404  FC 44 00 32 */	fmul f2, f4, f0
/* 80643408  FC 00 00 32 */	fmul f0, f0, f0
/* 8064340C  FC 01 00 32 */	fmul f0, f1, f0
/* 80643410  FC 03 00 28 */	fsub f0, f3, f0
/* 80643414  FC 02 00 32 */	fmul f0, f2, f0
/* 80643418  FC 21 00 32 */	fmul f1, f1, f0
/* 8064341C  FC 20 08 18 */	frsp f1, f1
/* 80643420  48 00 00 88 */	b lbl_806434A8
lbl_80643424:
/* 80643424  C8 1F 00 90 */	lfd f0, 0x90(r31)
/* 80643428  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8064342C  40 80 00 10 */	bge lbl_8064343C
/* 80643430  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80643434  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 80643438  48 00 00 70 */	b lbl_806434A8
lbl_8064343C:
/* 8064343C  D0 21 00 08 */	stfs f1, 8(r1)
/* 80643440  80 81 00 08 */	lwz r4, 8(r1)
/* 80643444  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80643448  3C 00 7F 80 */	lis r0, 0x7f80
/* 8064344C  7C 03 00 00 */	cmpw r3, r0
/* 80643450  41 82 00 14 */	beq lbl_80643464
/* 80643454  40 80 00 40 */	bge lbl_80643494
/* 80643458  2C 03 00 00 */	cmpwi r3, 0
/* 8064345C  41 82 00 20 */	beq lbl_8064347C
/* 80643460  48 00 00 34 */	b lbl_80643494
lbl_80643464:
/* 80643464  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80643468  41 82 00 0C */	beq lbl_80643474
/* 8064346C  38 00 00 01 */	li r0, 1
/* 80643470  48 00 00 28 */	b lbl_80643498
lbl_80643474:
/* 80643474  38 00 00 02 */	li r0, 2
/* 80643478  48 00 00 20 */	b lbl_80643498
lbl_8064347C:
/* 8064347C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80643480  41 82 00 0C */	beq lbl_8064348C
/* 80643484  38 00 00 05 */	li r0, 5
/* 80643488  48 00 00 10 */	b lbl_80643498
lbl_8064348C:
/* 8064348C  38 00 00 03 */	li r0, 3
/* 80643490  48 00 00 08 */	b lbl_80643498
lbl_80643494:
/* 80643494  38 00 00 04 */	li r0, 4
lbl_80643498:
/* 80643498  2C 00 00 01 */	cmpwi r0, 1
/* 8064349C  40 82 00 0C */	bne lbl_806434A8
/* 806434A0  3C 60 80 45 */	lis r3, __float_nan@ha
/* 806434A4  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_806434A8:
/* 806434A8  C0 1F 00 78 */	lfs f0, 0x78(r31)
/* 806434AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806434B0  40 80 00 2C */	bge lbl_806434DC
/* 806434B4  7F C3 F3 78 */	mr r3, r30
/* 806434B8  38 80 00 00 */	li r4, 0
/* 806434BC  4B FF CA B1 */	bl setTgHitBit__10daB_ZANT_cFi
/* 806434C0  80 61 00 0C */	lwz r3, 0xc(r1)
/* 806434C4  38 80 00 02 */	li r4, 2
/* 806434C8  48 00 D6 B4 */	b setMouthMode__11daB_ZANTZ_cFUc
/* 806434CC  7F C3 F3 78 */	mr r3, r30
/* 806434D0  38 80 00 07 */	li r4, 7
/* 806434D4  38 A0 00 1B */	li r5, 0x1b
/* 806434D8  4B FF B1 ED */	bl setActionMode__10daB_ZANT_cFii
lbl_806434DC:
/* 806434DC  80 61 00 0C */	lwz r3, 0xc(r1)
/* 806434E0  38 80 00 1E */	li r4, 0x1e
/* 806434E4  48 00 D3 70 */	b setSnortEffect__11daB_ZANTZ_cFi
/* 806434E8  38 60 00 01 */	li r3, 1
/* 806434EC  48 00 00 08 */	b lbl_806434F4
lbl_806434F0:
/* 806434F0  38 60 00 00 */	li r3, 0
lbl_806434F4:
/* 806434F4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 806434F8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 806434FC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80643500  7C 08 03 A6 */	mtlr r0
/* 80643504  38 21 00 30 */	addi r1, r1, 0x30
/* 80643508  4E 80 00 20 */	blr 
