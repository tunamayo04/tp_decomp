lbl_80C87708:
/* 80C87708  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C8770C  7C 08 02 A6 */	mflr r0
/* 80C87710  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C87714  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C87718  7C 7F 1B 79 */	or. r31, r3, r3
/* 80C8771C  41 82 00 1C */	beq lbl_80C87738
/* 80C87720  3C A0 80 C8 */	lis r5, __vt__8cM3dGCyl@ha
/* 80C87724  38 05 7B 50 */	addi r0, r5, __vt__8cM3dGCyl@l
/* 80C87728  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80C8772C  7C 80 07 35 */	extsh. r0, r4
/* 80C87730  40 81 00 08 */	ble lbl_80C87738
/* 80C87734  4B 64 76 08 */	b __dl__FPv
lbl_80C87738:
/* 80C87738  7F E3 FB 78 */	mr r3, r31
/* 80C8773C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C87740  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C87744  7C 08 03 A6 */	mtlr r0
/* 80C87748  38 21 00 10 */	addi r1, r1, 0x10
/* 80C8774C  4E 80 00 20 */	blr 
