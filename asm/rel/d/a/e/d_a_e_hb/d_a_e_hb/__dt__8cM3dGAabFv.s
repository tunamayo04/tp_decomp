lbl_805004DC:
/* 805004DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805004E0  7C 08 02 A6 */	mflr r0
/* 805004E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 805004E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805004EC  7C 7F 1B 79 */	or. r31, r3, r3
/* 805004F0  41 82 00 1C */	beq lbl_8050050C
/* 805004F4  3C A0 80 50 */	lis r5, __vt__8cM3dGAab@ha
/* 805004F8  38 05 0E 2C */	addi r0, r5, __vt__8cM3dGAab@l
/* 805004FC  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80500500  7C 80 07 35 */	extsh. r0, r4
/* 80500504  40 81 00 08 */	ble lbl_8050050C
/* 80500508  4B DC E8 34 */	b __dl__FPv
lbl_8050050C:
/* 8050050C  7F E3 FB 78 */	mr r3, r31
/* 80500510  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80500514  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80500518  7C 08 03 A6 */	mtlr r0
/* 8050051C  38 21 00 10 */	addi r1, r1, 0x10
/* 80500520  4E 80 00 20 */	blr 
