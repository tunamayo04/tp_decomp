lbl_807F27BC:
/* 807F27BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807F27C0  7C 08 02 A6 */	mflr r0
/* 807F27C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 807F27C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807F27CC  7C 7F 1B 79 */	or. r31, r3, r3
/* 807F27D0  41 82 00 1C */	beq lbl_807F27EC
/* 807F27D4  3C A0 80 7F */	lis r5, __vt__12daE_YC_HIO_c@ha
/* 807F27D8  38 05 2A F4 */	addi r0, r5, __vt__12daE_YC_HIO_c@l
/* 807F27DC  90 1F 00 00 */	stw r0, 0(r31)
/* 807F27E0  7C 80 07 35 */	extsh. r0, r4
/* 807F27E4  40 81 00 08 */	ble lbl_807F27EC
/* 807F27E8  4B AD C5 54 */	b __dl__FPv
lbl_807F27EC:
/* 807F27EC  7F E3 FB 78 */	mr r3, r31
/* 807F27F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807F27F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807F27F8  7C 08 03 A6 */	mtlr r0
/* 807F27FC  38 21 00 10 */	addi r1, r1, 0x10
/* 807F2800  4E 80 00 20 */	blr 
