lbl_80500494:
/* 80500494  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80500498  7C 08 02 A6 */	mflr r0
/* 8050049C  90 01 00 14 */	stw r0, 0x14(r1)
/* 805004A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805004A4  7C 7F 1B 79 */	or. r31, r3, r3
/* 805004A8  41 82 00 1C */	beq lbl_805004C4
/* 805004AC  3C A0 80 50 */	lis r5, __vt__8cM3dGSph@ha
/* 805004B0  38 05 0E 20 */	addi r0, r5, __vt__8cM3dGSph@l
/* 805004B4  90 1F 00 10 */	stw r0, 0x10(r31)
/* 805004B8  7C 80 07 35 */	extsh. r0, r4
/* 805004BC  40 81 00 08 */	ble lbl_805004C4
/* 805004C0  4B DC E8 7C */	b __dl__FPv
lbl_805004C4:
/* 805004C4  7F E3 FB 78 */	mr r3, r31
/* 805004C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 805004CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805004D0  7C 08 03 A6 */	mtlr r0
/* 805004D4  38 21 00 10 */	addi r1, r1, 0x10
/* 805004D8  4E 80 00 20 */	blr 
