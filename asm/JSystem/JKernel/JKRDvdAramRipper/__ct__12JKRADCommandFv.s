lbl_802DAF1C:
/* 802DAF1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DAF20  7C 08 02 A6 */	mflr r0
/* 802DAF24  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DAF28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DAF2C  7C 7F 1B 78 */	mr r31, r3
/* 802DAF30  7F E4 FB 78 */	mr r4, r31
/* 802DAF34  48 00 0E C9 */	bl __ct__10JSUPtrLinkFPv
/* 802DAF38  38 00 00 00 */	li r0, 0
/* 802DAF3C  90 1F 00 48 */	stw r0, 0x48(r31)
/* 802DAF40  98 1F 00 4C */	stb r0, 0x4c(r31)
/* 802DAF44  7F E3 FB 78 */	mr r3, r31
/* 802DAF48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DAF4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DAF50  7C 08 03 A6 */	mtlr r0
/* 802DAF54  38 21 00 10 */	addi r1, r1, 0x10
/* 802DAF58  4E 80 00 20 */	blr 
