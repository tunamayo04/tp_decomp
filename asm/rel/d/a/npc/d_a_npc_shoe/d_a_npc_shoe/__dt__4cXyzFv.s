lbl_80AE9C6C:
/* 80AE9C6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AE9C70  7C 08 02 A6 */	mflr r0
/* 80AE9C74  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AE9C78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80AE9C7C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80AE9C80  41 82 00 10 */	beq lbl_80AE9C90
/* 80AE9C84  7C 80 07 35 */	extsh. r0, r4
/* 80AE9C88  40 81 00 08 */	ble lbl_80AE9C90
/* 80AE9C8C  4B 7E 50 B0 */	b __dl__FPv
lbl_80AE9C90:
/* 80AE9C90  7F E3 FB 78 */	mr r3, r31
/* 80AE9C94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80AE9C98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AE9C9C  7C 08 03 A6 */	mtlr r0
/* 80AE9CA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80AE9CA4  4E 80 00 20 */	blr 
