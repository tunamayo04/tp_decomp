lbl_80CCED94:
/* 80CCED94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CCED98  7C 08 02 A6 */	mflr r0
/* 80CCED9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CCEDA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80CCEDA4  7C 7F 1B 78 */	mr r31, r3
/* 80CCEDA8  3C 60 80 45 */	lis r3, mFindCount__8daNpcT_c@ha
/* 80CCEDAC  80 03 0F DC */	lwz r0, mFindCount__8daNpcT_c@l(r3)
/* 80CCEDB0  2C 00 00 32 */	cmpwi r0, 0x32
/* 80CCEDB4  40 80 00 64 */	bge lbl_80CCEE18
/* 80CCEDB8  28 1F 00 00 */	cmplwi r31, 0
/* 80CCEDBC  41 82 00 5C */	beq lbl_80CCEE18
/* 80CCEDC0  7C 1F 20 40 */	cmplw r31, r4
/* 80CCEDC4  41 82 00 54 */	beq lbl_80CCEE18
/* 80CCEDC8  28 1F 00 00 */	cmplwi r31, 0
/* 80CCEDCC  41 82 00 0C */	beq lbl_80CCEDD8
/* 80CCEDD0  80 7F 00 04 */	lwz r3, 4(r31)
/* 80CCEDD4  48 00 00 08 */	b lbl_80CCEDDC
lbl_80CCEDD8:
/* 80CCEDD8  38 60 FF FF */	li r3, -1
lbl_80CCEDDC:
/* 80CCEDDC  4B 35 25 C0 */	b fpcEx_IsExist__FUi
/* 80CCEDE0  2C 03 00 00 */	cmpwi r3, 0
/* 80CCEDE4  41 82 00 34 */	beq lbl_80CCEE18
/* 80CCEDE8  A8 1F 00 08 */	lha r0, 8(r31)
/* 80CCEDEC  2C 00 00 20 */	cmpwi r0, 0x20
/* 80CCEDF0  40 82 00 28 */	bne lbl_80CCEE18
/* 80CCEDF4  3C 60 80 45 */	lis r3, mFindCount__8daNpcT_c@ha
/* 80CCEDF8  38 A3 0F DC */	addi r5, r3, mFindCount__8daNpcT_c@l
/* 80CCEDFC  80 85 00 00 */	lwz r4, 0(r5)
/* 80CCEE00  54 80 10 3A */	slwi r0, r4, 2
/* 80CCEE04  3C 60 80 42 */	lis r3, mFindActorPtrs__8daNpcT_c@ha
/* 80CCEE08  38 63 57 08 */	addi r3, r3, mFindActorPtrs__8daNpcT_c@l
/* 80CCEE0C  7F E3 01 2E */	stwx r31, r3, r0
/* 80CCEE10  38 04 00 01 */	addi r0, r4, 1
/* 80CCEE14  90 05 00 00 */	stw r0, 0(r5)
lbl_80CCEE18:
/* 80CCEE18  38 60 00 00 */	li r3, 0
/* 80CCEE1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80CCEE20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CCEE24  7C 08 03 A6 */	mtlr r0
/* 80CCEE28  38 21 00 10 */	addi r1, r1, 0x10
/* 80CCEE2C  4E 80 00 20 */	blr 
