lbl_80570634:
/* 80570634  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80570638  7C 08 02 A6 */	mflr r0
/* 8057063C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80570640  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80570644  7C 7F 1B 79 */	or. r31, r3, r3
/* 80570648  41 82 00 10 */	beq lbl_80570658
/* 8057064C  7C 80 07 35 */	extsh. r0, r4
/* 80570650  40 81 00 08 */	ble lbl_80570658
/* 80570654  4B D5 E6 E8 */	b __dl__FPv
lbl_80570658:
/* 80570658  7F E3 FB 78 */	mr r3, r31
/* 8057065C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80570660  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80570664  7C 08 03 A6 */	mtlr r0
/* 80570668  38 21 00 10 */	addi r1, r1, 0x10
/* 8057066C  4E 80 00 20 */	blr 
