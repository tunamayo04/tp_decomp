lbl_8014503C:
/* 8014503C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80145040  7C 08 02 A6 */	mflr r0
/* 80145044  90 01 00 44 */	stw r0, 0x44(r1)
/* 80145048  39 61 00 40 */	addi r11, r1, 0x40
/* 8014504C  48 21 D0 F1 */	bl _savefpr_27
/* 80145050  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80145054  7C 7F 1B 78 */	mr r31, r3
/* 80145058  FF 60 08 90 */	fmr f27, f1
/* 8014505C  FF 80 10 90 */	fmr f28, f2
/* 80145060  FF A0 18 90 */	fmr f29, f3
/* 80145064  FF C0 28 90 */	fmr f30, f5
/* 80145068  FF E0 30 90 */	fmr f31, f6
/* 8014506C  80 03 05 80 */	lwz r0, 0x580(r3)
/* 80145070  28 00 00 00 */	cmplwi r0, 0
/* 80145074  41 82 00 30 */	beq lbl_801450A4
/* 80145078  81 83 05 68 */	lwz r12, 0x568(r3)
/* 8014507C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80145080  7D 89 03 A6 */	mtctr r12
/* 80145084  4E 80 04 21 */	bctrl 
/* 80145088  7C 60 07 74 */	extsb r0, r3
/* 8014508C  2C 00 FF FF */	cmpwi r0, -1
/* 80145090  40 82 00 14 */	bne lbl_801450A4
/* 80145094  80 7F 05 80 */	lwz r3, 0x580(r31)
/* 80145098  D3 C3 00 0C */	stfs f30, 0xc(r3)
/* 8014509C  80 7F 05 80 */	lwz r3, 0x580(r31)
/* 801450A0  4B EC 83 89 */	bl play__14mDoExt_baseAnmFv
lbl_801450A4:
/* 801450A4  80 1F 05 88 */	lwz r0, 0x588(r31)
/* 801450A8  28 00 00 00 */	cmplwi r0, 0
/* 801450AC  41 82 00 34 */	beq lbl_801450E0
/* 801450B0  7F E3 FB 78 */	mr r3, r31
/* 801450B4  81 9F 05 68 */	lwz r12, 0x568(r31)
/* 801450B8  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801450BC  7D 89 03 A6 */	mtctr r12
/* 801450C0  4E 80 04 21 */	bctrl 
/* 801450C4  7C 60 07 74 */	extsb r0, r3
/* 801450C8  2C 00 FF FF */	cmpwi r0, -1
/* 801450CC  40 82 00 14 */	bne lbl_801450E0
/* 801450D0  80 7F 05 88 */	lwz r3, 0x588(r31)
/* 801450D4  D3 E3 00 0C */	stfs f31, 0xc(r3)
/* 801450D8  80 7F 05 88 */	lwz r3, 0x588(r31)
/* 801450DC  4B EC 83 4D */	bl play__14mDoExt_baseAnmFv
lbl_801450E0:
/* 801450E0  80 7F 05 78 */	lwz r3, 0x578(r31)
/* 801450E4  28 03 00 00 */	cmplwi r3, 0
/* 801450E8  41 82 00 10 */	beq lbl_801450F8
/* 801450EC  D3 63 00 0C */	stfs f27, 0xc(r3)
/* 801450F0  80 7F 05 78 */	lwz r3, 0x578(r31)
/* 801450F4  4B EC 83 35 */	bl play__14mDoExt_baseAnmFv
lbl_801450F8:
/* 801450F8  80 7F 05 7C */	lwz r3, 0x57c(r31)
/* 801450FC  28 03 00 00 */	cmplwi r3, 0
/* 80145100  41 82 00 10 */	beq lbl_80145110
/* 80145104  D3 83 00 0C */	stfs f28, 0xc(r3)
/* 80145108  80 7F 05 7C */	lwz r3, 0x57c(r31)
/* 8014510C  4B EC 83 1D */	bl play__14mDoExt_baseAnmFv
lbl_80145110:
/* 80145110  80 7F 05 84 */	lwz r3, 0x584(r31)
/* 80145114  28 03 00 00 */	cmplwi r3, 0
/* 80145118  41 82 00 10 */	beq lbl_80145128
/* 8014511C  D3 A3 00 0C */	stfs f29, 0xc(r3)
/* 80145120  80 7F 05 84 */	lwz r3, 0x584(r31)
/* 80145124  4B EC 83 05 */	bl play__14mDoExt_baseAnmFv
lbl_80145128:
/* 80145128  39 61 00 40 */	addi r11, r1, 0x40
/* 8014512C  48 21 D0 5D */	bl _restfpr_27
/* 80145130  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80145134  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80145138  7C 08 03 A6 */	mtlr r0
/* 8014513C  38 21 00 40 */	addi r1, r1, 0x40
/* 80145140  4E 80 00 20 */	blr 
