lbl_80079668:
/* 80079668  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007966C  7C 08 02 A6 */	mflr r0
/* 80079670  90 01 00 14 */	stw r0, 0x14(r1)
/* 80079674  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80079678  93 C1 00 08 */	stw r30, 8(r1)
/* 8007967C  7C 7E 1B 78 */	mr r30, r3
/* 80079680  80 63 00 A0 */	lwz r3, 0xa0(r3)
/* 80079684  83 E3 00 08 */	lwz r31, 8(r3)
/* 80079688  1C 7F 00 18 */	mulli r3, r31, 0x18
/* 8007968C  38 63 00 10 */	addi r3, r3, 0x10
/* 80079690  48 25 56 35 */	bl __nwa__FUl
/* 80079694  3C 80 80 08 */	lis r4, __ct__11cBgW_TriElmFv@ha
/* 80079698  38 84 97 54 */	addi r4, r4, __ct__11cBgW_TriElmFv@l
/* 8007969C  3C A0 80 08 */	lis r5, __dt__11cBgW_TriElmFv@ha
/* 800796A0  38 A5 96 F8 */	addi r5, r5, __dt__11cBgW_TriElmFv@l
/* 800796A4  38 C0 00 18 */	li r6, 0x18
/* 800796A8  7F E7 FB 78 */	mr r7, r31
/* 800796AC  48 2E 88 69 */	bl __construct_new_array
/* 800796B0  90 7E 00 94 */	stw r3, 0x94(r30)
/* 800796B4  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 800796B8  28 00 00 00 */	cmplwi r0, 0
/* 800796BC  40 82 00 0C */	bne lbl_800796C8
/* 800796C0  38 60 00 01 */	li r3, 1
/* 800796C4  48 00 00 1C */	b lbl_800796E0
lbl_800796C8:
/* 800796C8  7F C3 F3 78 */	mr r3, r30
/* 800796CC  81 9E 00 04 */	lwz r12, 4(r30)
/* 800796D0  81 8C 00 F0 */	lwz r12, 0xf0(r12)
/* 800796D4  7D 89 03 A6 */	mtctr r12
/* 800796D8  4E 80 04 21 */	bctrl 
/* 800796DC  38 60 00 00 */	li r3, 0
lbl_800796E0:
/* 800796E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800796E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 800796E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800796EC  7C 08 03 A6 */	mtlr r0
/* 800796F0  38 21 00 10 */	addi r1, r1, 0x10
/* 800796F4  4E 80 00 20 */	blr 
