lbl_800D072C:
/* 800D072C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D0730  7C 08 02 A6 */	mflr r0
/* 800D0734  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D0738  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800D073C  93 C1 00 08 */	stw r30, 8(r1)
/* 800D0740  7C 7E 1B 78 */	mr r30, r3
/* 800D0744  3B E0 00 00 */	li r31, 0
/* 800D0748  81 83 06 28 */	lwz r12, 0x628(r3)
/* 800D074C  81 8C 01 88 */	lwz r12, 0x188(r12)
/* 800D0750  7D 89 03 A6 */	mtctr r12
/* 800D0754  4E 80 04 21 */	bctrl 
/* 800D0758  28 03 00 00 */	cmplwi r3, 0
/* 800D075C  41 82 00 1C */	beq lbl_800D0778
/* 800D0760  A0 1E 2F E8 */	lhz r0, 0x2fe8(r30)
/* 800D0764  28 00 00 3A */	cmplwi r0, 0x3a
/* 800D0768  41 82 00 10 */	beq lbl_800D0778
/* 800D076C  28 00 00 3B */	cmplwi r0, 0x3b
/* 800D0770  41 82 00 08 */	beq lbl_800D0778
/* 800D0774  3B E0 00 01 */	li r31, 1
lbl_800D0778:
/* 800D0778  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 800D077C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800D0780  83 C1 00 08 */	lwz r30, 8(r1)
/* 800D0784  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D0788  7C 08 03 A6 */	mtlr r0
/* 800D078C  38 21 00 10 */	addi r1, r1, 0x10
/* 800D0790  4E 80 00 20 */	blr 
