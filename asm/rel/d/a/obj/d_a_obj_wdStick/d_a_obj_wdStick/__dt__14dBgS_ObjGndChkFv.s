lbl_80D33CCC:
/* 80D33CCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D33CD0  7C 08 02 A6 */	mflr r0
/* 80D33CD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D33CD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D33CDC  93 C1 00 08 */	stw r30, 8(r1)
/* 80D33CE0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80D33CE4  7C 9F 23 78 */	mr r31, r4
/* 80D33CE8  41 82 00 40 */	beq lbl_80D33D28
/* 80D33CEC  3C 80 80 D3 */	lis r4, __vt__14dBgS_ObjGndChk@ha
/* 80D33CF0  38 84 43 44 */	addi r4, r4, __vt__14dBgS_ObjGndChk@l
/* 80D33CF4  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80D33CF8  38 04 00 0C */	addi r0, r4, 0xc
/* 80D33CFC  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80D33D00  38 04 00 18 */	addi r0, r4, 0x18
/* 80D33D04  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80D33D08  38 04 00 24 */	addi r0, r4, 0x24
/* 80D33D0C  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 80D33D10  38 80 00 00 */	li r4, 0
/* 80D33D14  4B 34 38 DC */	b __dt__11dBgS_GndChkFv
/* 80D33D18  7F E0 07 35 */	extsh. r0, r31
/* 80D33D1C  40 81 00 0C */	ble lbl_80D33D28
/* 80D33D20  7F C3 F3 78 */	mr r3, r30
/* 80D33D24  4B 59 B0 18 */	b __dl__FPv
lbl_80D33D28:
/* 80D33D28  7F C3 F3 78 */	mr r3, r30
/* 80D33D2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D33D30  83 C1 00 08 */	lwz r30, 8(r1)
/* 80D33D34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D33D38  7C 08 03 A6 */	mtlr r0
/* 80D33D3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80D33D40  4E 80 00 20 */	blr 
