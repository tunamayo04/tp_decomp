lbl_800E1FFC:
/* 800E1FFC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800E2000  7C 08 02 A6 */	mflr r0
/* 800E2004  90 01 00 24 */	stw r0, 0x24(r1)
/* 800E2008  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 800E200C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, 0 /* qr0 */
/* 800E2010  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800E2014  7C 7F 1B 78 */	mr r31, r3
/* 800E2018  4B FD 52 CD */	bl checkItemActorPointer__9daAlink_cFv
/* 800E201C  2C 03 00 00 */	cmpwi r3, 0
/* 800E2020  40 82 00 0C */	bne lbl_800E202C
/* 800E2024  38 60 00 01 */	li r3, 1
/* 800E2028  48 00 00 84 */	b lbl_800E20AC
lbl_800E202C:
/* 800E202C  7F E3 FB 78 */	mr r3, r31
/* 800E2030  38 80 00 00 */	li r4, 0
/* 800E2034  4B FD 80 9D */	bl checkNextAction__9daAlink_cFi
/* 800E2038  2C 03 00 00 */	cmpwi r3, 0
/* 800E203C  40 82 00 6C */	bne lbl_800E20A8
/* 800E2040  C3 E2 92 BC */	lfs f31, lit_6041(r2)
/* 800E2044  7F E3 FB 78 */	mr r3, r31
/* 800E2048  4B FD 18 BD */	bl checkZeroSpeedF__9daAlink_cCFv
/* 800E204C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800E2050  41 82 00 34 */	beq lbl_800E2084
/* 800E2054  80 1F 31 A0 */	lwz r0, 0x31a0(r31)
/* 800E2058  60 00 00 01 */	ori r0, r0, 1
/* 800E205C  90 1F 31 A0 */	stw r0, 0x31a0(r31)
/* 800E2060  88 1F 2F 98 */	lbz r0, 0x2f98(r31)
/* 800E2064  28 00 00 03 */	cmplwi r0, 3
/* 800E2068  41 82 00 28 */	beq lbl_800E2090
/* 800E206C  38 00 00 03 */	li r0, 3
/* 800E2070  98 1F 2F 98 */	stb r0, 0x2f98(r31)
/* 800E2074  3C 60 80 39 */	lis r3, m__19daAlinkHIO_basic_c0@ha
/* 800E2078  38 63 D6 64 */	addi r3, r3, m__19daAlinkHIO_basic_c0@l
/* 800E207C  C3 E3 00 18 */	lfs f31, 0x18(r3)
/* 800E2080  48 00 00 10 */	b lbl_800E2090
lbl_800E2084:
/* 800E2084  80 1F 31 A0 */	lwz r0, 0x31a0(r31)
/* 800E2088  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 800E208C  90 1F 31 A0 */	stw r0, 0x31a0(r31)
lbl_800E2090:
/* 800E2090  7F E3 FB 78 */	mr r3, r31
/* 800E2094  FC 20 F8 90 */	fmr f1, f31
/* 800E2098  4B FC C9 D9 */	bl setBlendAtnMoveAnime__9daAlink_cFf
/* 800E209C  7F E3 FB 78 */	mr r3, r31
/* 800E20A0  38 80 00 00 */	li r4, 0
/* 800E20A4  4B FD 92 0D */	bl setBodyAngleXReadyAnime__9daAlink_cFi
lbl_800E20A8:
/* 800E20A8  38 60 00 01 */	li r3, 1
lbl_800E20AC:
/* 800E20AC  E3 E1 00 18 */	psq_l f31, 24(r1), 0, 0 /* qr0 */
/* 800E20B0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 800E20B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800E20B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800E20BC  7C 08 03 A6 */	mtlr r0
/* 800E20C0  38 21 00 20 */	addi r1, r1, 0x20
/* 800E20C4  4E 80 00 20 */	blr 
