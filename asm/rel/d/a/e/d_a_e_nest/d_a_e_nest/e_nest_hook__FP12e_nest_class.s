lbl_80503120:
/* 80503120  38 00 00 0A */	li r0, 0xa
/* 80503124  98 03 05 B0 */	stb r0, 0x5b0(r3)
/* 80503128  A8 03 05 80 */	lha r0, 0x580(r3)
/* 8050312C  2C 00 00 01 */	cmpwi r0, 1
/* 80503130  41 82 00 30 */	beq lbl_80503160
/* 80503134  40 80 00 2C */	bge lbl_80503160
/* 80503138  2C 00 00 00 */	cmpwi r0, 0
/* 8050313C  40 80 00 08 */	bge lbl_80503144
/* 80503140  48 00 00 20 */	b lbl_80503160
lbl_80503144:
/* 80503144  38 00 00 01 */	li r0, 1
/* 80503148  B0 03 05 80 */	sth r0, 0x580(r3)
/* 8050314C  3C 80 80 50 */	lis r4, lit_4066@ha
/* 80503150  C0 04 46 E0 */	lfs f0, lit_4066@l(r4)
/* 80503154  D0 03 05 2C */	stfs f0, 0x52c(r3)
/* 80503158  38 00 00 03 */	li r0, 3
/* 8050315C  B0 03 05 82 */	sth r0, 0x582(r3)
lbl_80503160:
/* 80503160  A8 03 05 82 */	lha r0, 0x582(r3)
/* 80503164  2C 00 00 00 */	cmpwi r0, 0
/* 80503168  4C 82 00 20 */	bnelr 
/* 8050316C  80 03 04 9C */	lwz r0, 0x49c(r3)
/* 80503170  54 00 02 D7 */	rlwinm. r0, r0, 0, 0xb, 0xb
/* 80503174  4C 82 00 20 */	bnelr 
/* 80503178  38 00 00 01 */	li r0, 1
/* 8050317C  B0 03 05 7E */	sth r0, 0x57e(r3)
/* 80503180  38 00 00 00 */	li r0, 0
/* 80503184  B0 03 05 80 */	sth r0, 0x580(r3)
/* 80503188  3C 80 80 50 */	lis r4, lit_4431@ha
/* 8050318C  C0 04 47 60 */	lfs f0, lit_4431@l(r4)
/* 80503190  D0 03 05 90 */	stfs f0, 0x590(r3)
/* 80503194  C0 63 04 D4 */	lfs f3, 0x4d4(r3)
/* 80503198  C0 43 04 EC */	lfs f2, 0x4ec(r3)
/* 8050319C  C0 23 05 90 */	lfs f1, 0x590(r3)
/* 805031A0  3C 80 80 50 */	lis r4, l_HIO@ha
/* 805031A4  38 84 49 60 */	addi r4, r4, l_HIO@l
/* 805031A8  C0 04 00 08 */	lfs f0, 8(r4)
/* 805031AC  EC 01 00 32 */	fmuls f0, f1, f0
/* 805031B0  EC 02 00 32 */	fmuls f0, f2, f0
/* 805031B4  EC 03 00 28 */	fsubs f0, f3, f0
/* 805031B8  D0 03 04 D4 */	stfs f0, 0x4d4(r3)
/* 805031BC  80 03 04 9C */	lwz r0, 0x49c(r3)
/* 805031C0  54 00 03 56 */	rlwinm r0, r0, 0, 0xd, 0xb
/* 805031C4  90 03 04 9C */	stw r0, 0x49c(r3)
/* 805031C8  4E 80 00 20 */	blr 
