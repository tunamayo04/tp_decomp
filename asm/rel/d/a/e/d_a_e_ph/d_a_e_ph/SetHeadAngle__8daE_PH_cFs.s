lbl_80740024:
/* 80740024  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80740028  7C 08 02 A6 */	mflr r0
/* 8074002C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80740030  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80740034  7C 7F 1B 78 */	mr r31, r3
/* 80740038  38 7F 06 12 */	addi r3, r31, 0x612
/* 8074003C  38 A0 00 10 */	li r5, 0x10
/* 80740040  38 C0 10 00 */	li r6, 0x1000
/* 80740044  4B B3 05 C4 */	b cLib_addCalcAngleS2__FPssss
/* 80740048  A8 7F 06 66 */	lha r3, 0x666(r31)
/* 8074004C  A8 1F 06 12 */	lha r0, 0x612(r31)
/* 80740050  7C 03 02 14 */	add r0, r3, r0
/* 80740054  B0 1F 06 66 */	sth r0, 0x666(r31)
/* 80740058  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070462@ha */
/* 8074005C  38 03 04 62 */	addi r0, r3, 0x0462 /* 0x00070462@l */
/* 80740060  90 01 00 08 */	stw r0, 8(r1)
/* 80740064  38 7F 06 74 */	addi r3, r31, 0x674
/* 80740068  38 81 00 08 */	addi r4, r1, 8
/* 8074006C  A8 BF 06 12 */	lha r5, 0x612(r31)
/* 80740070  38 C0 FF FF */	li r6, -1
/* 80740074  81 9F 06 74 */	lwz r12, 0x674(r31)
/* 80740078  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8074007C  7D 89 03 A6 */	mtctr r12
/* 80740080  4E 80 04 21 */	bctrl 
/* 80740084  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80740088  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8074008C  7C 08 03 A6 */	mtlr r0
/* 80740090  38 21 00 20 */	addi r1, r1, 0x20
/* 80740094  4E 80 00 20 */	blr 
