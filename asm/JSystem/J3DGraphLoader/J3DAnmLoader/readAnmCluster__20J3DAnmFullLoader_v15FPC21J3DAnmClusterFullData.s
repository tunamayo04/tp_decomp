lbl_80338B20:
/* 80338B20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80338B24  7C 08 02 A6 */	mflr r0
/* 80338B28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80338B2C  7C 85 23 78 */	mr r5, r4
/* 80338B30  80 83 00 04 */	lwz r4, 4(r3)
/* 80338B34  48 00 00 15 */	bl setAnmCluster__20J3DAnmFullLoader_v15FP17J3DAnmClusterFullPC21J3DAnmClusterFullData
/* 80338B38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80338B3C  7C 08 03 A6 */	mtlr r0
/* 80338B40  38 21 00 10 */	addi r1, r1, 0x10
/* 80338B44  4E 80 00 20 */	blr 
