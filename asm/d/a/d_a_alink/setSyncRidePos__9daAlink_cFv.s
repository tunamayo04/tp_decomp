lbl_800EDA24:
/* 800EDA24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800EDA28  7C 08 02 A6 */	mflr r0
/* 800EDA2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800EDA30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800EDA34  7C 7F 1B 78 */	mr r31, r3
/* 800EDA38  81 83 06 28 */	lwz r12, 0x628(r3)
/* 800EDA3C  81 8C 01 88 */	lwz r12, 0x188(r12)
/* 800EDA40  7D 89 03 A6 */	mtctr r12
/* 800EDA44  4E 80 04 21 */	bctrl 
/* 800EDA48  28 03 00 00 */	cmplwi r3, 0
/* 800EDA4C  41 82 00 10 */	beq lbl_800EDA5C
/* 800EDA50  7F E3 FB 78 */	mr r3, r31
/* 800EDA54  4B FF FA 89 */	bl setSyncHorsePos__9daAlink_cFv
/* 800EDA58  48 00 00 0C */	b lbl_800EDA64
lbl_800EDA5C:
/* 800EDA5C  7F E3 FB 78 */	mr r3, r31
/* 800EDA60  4B FF FD 2D */	bl setSyncBoarPos__9daAlink_cFv
lbl_800EDA64:
/* 800EDA64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800EDA68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800EDA6C  7C 08 03 A6 */	mtlr r0
/* 800EDA70  38 21 00 10 */	addi r1, r1, 0x10
/* 800EDA74  4E 80 00 20 */	blr 
