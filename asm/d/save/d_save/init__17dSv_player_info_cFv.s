lbl_80034518:
/* 80034518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8003451C  7C 08 02 A6 */	mflr r0
/* 80034520  90 01 00 14 */	stw r0, 0x14(r1)
/* 80034524  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80034528  7C 7F 1B 78 */	mr r31, r3
/* 8003452C  3C 60 80 43 */	lis r3, g_meter2_info@ha
/* 80034530  38 63 01 88 */	addi r3, r3, g_meter2_info@l
/* 80034534  38 80 03 82 */	li r4, 0x382
/* 80034538  38 BF 00 14 */	addi r5, r31, 0x14
/* 8003453C  38 C0 00 00 */	li r6, 0
/* 80034540  48 1E 7D 11 */	bl getString__13dMeter2Info_cFUlPcP14JMSMesgEntry_c
/* 80034544  3C 60 80 43 */	lis r3, g_meter2_info@ha
/* 80034548  38 63 01 88 */	addi r3, r3, g_meter2_info@l
/* 8003454C  38 80 03 83 */	li r4, 0x383
/* 80034550  38 BF 00 25 */	addi r5, r31, 0x25
/* 80034554  38 C0 00 00 */	li r6, 0
/* 80034558  48 1E 7C F9 */	bl getString__13dMeter2Info_cFUlPcP14JMSMesgEntry_c
/* 8003455C  38 60 00 00 */	li r3, 0
/* 80034560  90 7F 00 04 */	stw r3, 4(r31)
/* 80034564  90 7F 00 00 */	stw r3, 0(r31)
/* 80034568  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8003456C  90 7F 00 08 */	stw r3, 8(r31)
/* 80034570  B0 7F 00 10 */	sth r3, 0x10(r31)
/* 80034574  B0 7F 00 12 */	sth r3, 0x12(r31)
/* 80034578  98 7F 00 36 */	stb r3, 0x36(r31)
/* 8003457C  38 80 00 00 */	li r4, 0
/* 80034580  38 00 00 05 */	li r0, 5
/* 80034584  7C 09 03 A6 */	mtctr r0
lbl_80034588:
/* 80034588  38 04 00 37 */	addi r0, r4, 0x37
/* 8003458C  7C 7F 01 AE */	stbx r3, r31, r0
/* 80034590  38 84 00 01 */	addi r4, r4, 1
/* 80034594  42 00 FF F4 */	bdnz lbl_80034588
/* 80034598  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8003459C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800345A0  7C 08 03 A6 */	mtlr r0
/* 800345A4  38 21 00 10 */	addi r1, r1, 0x10
/* 800345A8  4E 80 00 20 */	blr 
