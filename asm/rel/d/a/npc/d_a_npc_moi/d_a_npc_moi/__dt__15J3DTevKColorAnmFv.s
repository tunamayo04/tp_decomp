lbl_80A7483C:
/* 80A7483C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A74840  7C 08 02 A6 */	mflr r0
/* 80A74844  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A74848  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A7484C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A74850  41 82 00 10 */	beq lbl_80A74860
/* 80A74854  7C 80 07 35 */	extsh. r0, r4
/* 80A74858  40 81 00 08 */	ble lbl_80A74860
/* 80A7485C  4B 85 A4 E0 */	b __dl__FPv
lbl_80A74860:
/* 80A74860  7F E3 FB 78 */	mr r3, r31
/* 80A74864  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A74868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A7486C  7C 08 03 A6 */	mtlr r0
/* 80A74870  38 21 00 10 */	addi r1, r1, 0x10
/* 80A74874  4E 80 00 20 */	blr 
