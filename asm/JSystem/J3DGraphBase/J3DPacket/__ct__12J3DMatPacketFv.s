lbl_80312948:
/* 80312948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031294C  7C 08 02 A6 */	mflr r0
/* 80312950  90 01 00 14 */	stw r0, 0x14(r1)
/* 80312954  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80312958  7C 7F 1B 78 */	mr r31, r3
/* 8031295C  4B FF FE 1D */	bl __ct__13J3DDrawPacketFv
/* 80312960  3C 60 80 3D */	lis r3, __vt__12J3DMatPacket@ha
/* 80312964  38 03 D9 54 */	addi r0, r3, __vt__12J3DMatPacket@l
/* 80312968  90 1F 00 00 */	stw r0, 0(r31)
/* 8031296C  38 60 00 00 */	li r3, 0
/* 80312970  90 7F 00 28 */	stw r3, 0x28(r31)
/* 80312974  90 7F 00 2C */	stw r3, 0x2c(r31)
/* 80312978  90 7F 00 30 */	stw r3, 0x30(r31)
/* 8031297C  38 00 FF FF */	li r0, -1
/* 80312980  90 1F 00 34 */	stw r0, 0x34(r31)
/* 80312984  90 7F 00 38 */	stw r3, 0x38(r31)
/* 80312988  90 7F 00 3C */	stw r3, 0x3c(r31)
/* 8031298C  7F E3 FB 78 */	mr r3, r31
/* 80312990  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80312994  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80312998  7C 08 03 A6 */	mtlr r0
/* 8031299C  38 21 00 10 */	addi r1, r1, 0x10
/* 803129A0  4E 80 00 20 */	blr 
