lbl_8003542C:
/* 8003542C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80035430  7C 08 02 A6 */	mflr r0
/* 80035434  90 01 00 14 */	stw r0, 0x14(r1)
/* 80035438  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8003543C  93 C1 00 08 */	stw r30, 8(r1)
/* 80035440  7C 7E 1B 78 */	mr r30, r3
/* 80035444  7C 9F 23 78 */	mr r31, r4
/* 80035448  2C 1F FF FF */	cmpwi r31, -1
/* 8003544C  41 82 00 0C */	beq lbl_80035458
/* 80035450  2C 1F 00 FF */	cmpwi r31, 0xff
/* 80035454  40 82 00 0C */	bne lbl_80035460
lbl_80035458:
/* 80035458  38 60 00 00 */	li r3, 0
/* 8003545C  48 00 00 6C */	b lbl_800354C8
lbl_80035460:
/* 80035460  2C 1F 00 80 */	cmpwi r31, 0x80
/* 80035464  40 80 00 10 */	bge lbl_80035474
/* 80035468  38 7E 09 58 */	addi r3, r30, 0x958
/* 8003546C  4B FF F4 21 */	bl revSwitch__12dSv_memBit_cFi
/* 80035470  48 00 00 58 */	b lbl_800354C8
lbl_80035474:
/* 80035474  2C 1F 00 C0 */	cmpwi r31, 0xc0
/* 80035478  40 80 00 14 */	bge lbl_8003548C
/* 8003547C  38 7E 09 78 */	addi r3, r30, 0x978
/* 80035480  38 9F FF 80 */	addi r4, r31, -128
/* 80035484  4B FF F7 91 */	bl revSwitch__12dSv_danBit_cFi
/* 80035488  48 00 00 40 */	b lbl_800354C8
lbl_8003548C:
/* 8003548C  7C A3 2B 78 */	mr r3, r5
/* 80035490  4B FF 85 21 */	bl getZoneNo__20dStage_roomControl_cFi
/* 80035494  2C 1F 00 E0 */	cmpwi r31, 0xe0
/* 80035498  40 80 00 1C */	bge lbl_800354B4
/* 8003549C  54 63 28 34 */	slwi r3, r3, 5
/* 800354A0  38 63 09 B6 */	addi r3, r3, 0x9b6
/* 800354A4  7C 7E 1A 14 */	add r3, r30, r3
/* 800354A8  38 9F FF 40 */	addi r4, r31, -192
/* 800354AC  4B FF F8 CD */	bl revSwitch__13dSv_zoneBit_cFi
/* 800354B0  48 00 00 18 */	b lbl_800354C8
lbl_800354B4:
/* 800354B4  54 63 28 34 */	slwi r3, r3, 5
/* 800354B8  38 63 09 B6 */	addi r3, r3, 0x9b6
/* 800354BC  7C 7E 1A 14 */	add r3, r30, r3
/* 800354C0  38 9F FF 20 */	addi r4, r31, -224
/* 800354C4  4B FF F9 39 */	bl revOneSwitch__13dSv_zoneBit_cFi
lbl_800354C8:
/* 800354C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800354CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 800354D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800354D4  7C 08 03 A6 */	mtlr r0
/* 800354D8  38 21 00 10 */	addi r1, r1, 0x10
/* 800354DC  4E 80 00 20 */	blr 
