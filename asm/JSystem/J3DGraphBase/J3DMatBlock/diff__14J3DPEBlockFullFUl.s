lbl_8031FCA0:
/* 8031FCA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031FCA4  7C 08 02 A6 */	mflr r0
/* 8031FCA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031FCAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8031FCB0  93 C1 00 08 */	stw r30, 8(r1)
/* 8031FCB4  7C 7E 1B 78 */	mr r30, r3
/* 8031FCB8  7C 9F 23 78 */	mr r31, r4
/* 8031FCBC  54 80 00 C7 */	rlwinm. r0, r4, 0, 3, 3
/* 8031FCC0  41 82 00 14 */	beq lbl_8031FCD4
/* 8031FCC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8031FCC8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8031FCCC  7D 89 03 A6 */	mtctr r12
/* 8031FCD0  4E 80 04 21 */	bctrl 
lbl_8031FCD4:
/* 8031FCD4  57 E0 00 85 */	rlwinm. r0, r31, 0, 2, 2
/* 8031FCD8  41 82 00 18 */	beq lbl_8031FCF0
/* 8031FCDC  7F C3 F3 78 */	mr r3, r30
/* 8031FCE0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8031FCE4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8031FCE8  7D 89 03 A6 */	mtctr r12
/* 8031FCEC  4E 80 04 21 */	bctrl 
lbl_8031FCF0:
/* 8031FCF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8031FCF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8031FCF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031FCFC  7C 08 03 A6 */	mtlr r0
/* 8031FD00  38 21 00 10 */	addi r1, r1, 0x10
/* 8031FD04  4E 80 00 20 */	blr 
