lbl_80602230:
/* 80602230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80602234  7C 08 02 A6 */	mflr r0
/* 80602238  90 01 00 14 */	stw r0, 0x14(r1)
/* 8060223C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80602240  7C 7F 1B 79 */	or. r31, r3, r3
/* 80602244  41 82 00 1C */	beq lbl_80602260
/* 80602248  3C A0 80 60 */	lis r5, __vt__13daB_GND_HIO_c@ha
/* 8060224C  38 05 2F 54 */	addi r0, r5, __vt__13daB_GND_HIO_c@l
/* 80602250  90 1F 00 00 */	stw r0, 0(r31)
/* 80602254  7C 80 07 35 */	extsh. r0, r4
/* 80602258  40 81 00 08 */	ble lbl_80602260
/* 8060225C  4B CC CA E0 */	b __dl__FPv
lbl_80602260:
/* 80602260  7F E3 FB 78 */	mr r3, r31
/* 80602264  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80602268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8060226C  7C 08 03 A6 */	mtlr r0
/* 80602270  38 21 00 10 */	addi r1, r1, 0x10
/* 80602274  4E 80 00 20 */	blr 
