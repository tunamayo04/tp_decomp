lbl_80685224:
/* 80685224  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80685228  7C 08 02 A6 */	mflr r0
/* 8068522C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80685230  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80685234  7C 7F 1B 79 */	or. r31, r3, r3
/* 80685238  41 82 00 1C */	beq lbl_80685254
/* 8068523C  3C A0 80 68 */	lis r5, __vt__8cM3dGSph@ha
/* 80685240  38 05 56 00 */	addi r0, r5, __vt__8cM3dGSph@l
/* 80685244  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80685248  7C 80 07 35 */	extsh. r0, r4
/* 8068524C  40 81 00 08 */	ble lbl_80685254
/* 80685250  4B C4 9A EC */	b __dl__FPv
lbl_80685254:
/* 80685254  7F E3 FB 78 */	mr r3, r31
/* 80685258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8068525C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80685260  7C 08 03 A6 */	mtlr r0
/* 80685264  38 21 00 10 */	addi r1, r1, 0x10
/* 80685268  4E 80 00 20 */	blr 
