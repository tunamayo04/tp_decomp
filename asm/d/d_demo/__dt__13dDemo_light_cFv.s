lbl_80039468:
/* 80039468  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8003946C  7C 08 02 A6 */	mflr r0
/* 80039470  90 01 00 14 */	stw r0, 0x14(r1)
/* 80039474  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80039478  93 C1 00 08 */	stw r30, 8(r1)
/* 8003947C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80039480  7C 9F 23 78 */	mr r31, r4
/* 80039484  41 82 00 28 */	beq lbl_800394AC
/* 80039488  3C 80 80 3A */	lis r4, __vt__13dDemo_light_c@ha
/* 8003948C  38 04 79 F0 */	addi r0, r4, __vt__13dDemo_light_c@l
/* 80039490  90 1E 00 00 */	stw r0, 0(r30)
/* 80039494  38 80 00 00 */	li r4, 0
/* 80039498  48 24 78 91 */	bl __dt__Q26JStage6TLightFv
/* 8003949C  7F E0 07 35 */	extsh. r0, r31
/* 800394A0  40 81 00 0C */	ble lbl_800394AC
/* 800394A4  7F C3 F3 78 */	mr r3, r30
/* 800394A8  48 29 58 95 */	bl __dl__FPv
lbl_800394AC:
/* 800394AC  7F C3 F3 78 */	mr r3, r30
/* 800394B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800394B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 800394B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800394BC  7C 08 03 A6 */	mtlr r0
/* 800394C0  38 21 00 10 */	addi r1, r1, 0x10
/* 800394C4  4E 80 00 20 */	blr 
