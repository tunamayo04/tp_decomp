lbl_802664E8:
/* 802664E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802664EC  7C 08 02 A6 */	mflr r0
/* 802664F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802664F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802664F8  93 C1 00 08 */	stw r30, 8(r1)
/* 802664FC  7C 9E 23 78 */	mr r30, r4
/* 80266500  7C BF 2B 78 */	mr r31, r5
/* 80266504  93 C3 00 00 */	stw r30, 0(r3)
/* 80266508  93 E3 00 04 */	stw r31, 4(r3)
/* 8026650C  48 00 00 10 */	b lbl_8026651C
lbl_80266510:
/* 80266510  7F C3 F3 78 */	mr r3, r30
/* 80266514  3B DE 00 0C */	addi r30, r30, 0xc
/* 80266518  4B FF FB 29 */	bl cLs_Create__FP15node_list_class
lbl_8026651C:
/* 8026651C  2C 1F 00 00 */	cmpwi r31, 0
/* 80266520  3B FF FF FF */	addi r31, r31, -1
/* 80266524  41 81 FF EC */	bgt lbl_80266510
/* 80266528  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026652C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80266530  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80266534  7C 08 03 A6 */	mtlr r0
/* 80266538  38 21 00 10 */	addi r1, r1, 0x10
/* 8026653C  4E 80 00 20 */	blr 
