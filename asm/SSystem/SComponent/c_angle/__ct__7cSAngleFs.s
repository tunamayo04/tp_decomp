lbl_80270F98:
/* 80270F98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80270F9C  7C 08 02 A6 */	mflr r0
/* 80270FA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270FA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80270FA8  7C 7F 1B 78 */	mr r31, r3
/* 80270FAC  48 00 00 59 */	bl Val__7cSAngleFs
/* 80270FB0  7F E3 FB 78 */	mr r3, r31
/* 80270FB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80270FB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80270FBC  7C 08 03 A6 */	mtlr r0
/* 80270FC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80270FC4  4E 80 00 20 */	blr 
