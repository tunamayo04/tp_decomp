lbl_80293924:
/* 80293924  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80293928  7C 08 02 A6 */	mflr r0
/* 8029392C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80293930  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80293934  7C 7F 1B 78 */	mr r31, r3
/* 80293938  48 00 27 D1 */	bl init__12JASSeqReaderFv
/* 8029393C  38 0D 8C B8 */	la r0, sDefaultParser__10JASSeqCtrl(r13) /* 80451238-_SDA_BASE_ */
/* 80293940  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 80293944  38 00 00 00 */	li r0, 0
/* 80293948  90 1F 00 40 */	stw r0, 0x40(r31)
/* 8029394C  90 1F 00 44 */	stw r0, 0x44(r31)
/* 80293950  90 1F 00 48 */	stw r0, 0x48(r31)
/* 80293954  B0 1F 00 4C */	sth r0, 0x4c(r31)
/* 80293958  B0 1F 00 4E */	sth r0, 0x4e(r31)
/* 8029395C  98 1F 00 50 */	stb r0, 0x50(r31)
/* 80293960  90 1F 00 54 */	stw r0, 0x54(r31)
/* 80293964  90 1F 00 58 */	stw r0, 0x58(r31)
/* 80293968  98 1F 00 51 */	stb r0, 0x51(r31)
/* 8029396C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80293970  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293974  7C 08 03 A6 */	mtlr r0
/* 80293978  38 21 00 10 */	addi r1, r1, 0x10
/* 8029397C  4E 80 00 20 */	blr 
