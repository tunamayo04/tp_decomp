lbl_8080422C:
/* 8080422C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80804230  7C 08 02 A6 */	mflr r0
/* 80804234  90 01 00 14 */	stw r0, 0x14(r1)
/* 80804238  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8080423C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80804240  41 82 00 10 */	beq lbl_80804250
/* 80804244  7C 80 07 35 */	extsh. r0, r4
/* 80804248  40 81 00 08 */	ble lbl_80804250
/* 8080424C  4B AC AA F0 */	b __dl__FPv
lbl_80804250:
/* 80804250  7F E3 FB 78 */	mr r3, r31
/* 80804254  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80804258  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8080425C  7C 08 03 A6 */	mtlr r0
/* 80804260  38 21 00 10 */	addi r1, r1, 0x10
/* 80804264  4E 80 00 20 */	blr 
