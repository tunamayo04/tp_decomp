lbl_8002F128:
/* 8002F128  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002F12C  7C 08 02 A6 */	mflr r0
/* 8002F130  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002F134  39 61 00 20 */	addi r11, r1, 0x20
/* 8002F138  48 33 30 99 */	bl _savegpr_26
/* 8002F13C  7C 7A 1B 78 */	mr r26, r3
/* 8002F140  7C BB 2B 78 */	mr r27, r5
/* 8002F144  7C DC 33 78 */	mr r28, r6
/* 8002F148  7C FD 3B 78 */	mr r29, r7
/* 8002F14C  7D 1E 43 78 */	mr r30, r8
/* 8002F150  7D 3F 4B 78 */	mr r31, r9
/* 8002F154  38 7A 4F 94 */	addi r3, r26, 0x4f94
/* 8002F158  48 33 99 D5 */	bl strcpy
/* 8002F15C  C0 1B 00 00 */	lfs f0, 0(r27)
/* 8002F160  D0 1A 4F 9C */	stfs f0, 0x4f9c(r26)
/* 8002F164  C0 1B 00 04 */	lfs f0, 4(r27)
/* 8002F168  D0 1A 4F A0 */	stfs f0, 0x4fa0(r26)
/* 8002F16C  C0 1B 00 08 */	lfs f0, 8(r27)
/* 8002F170  D0 1A 4F A4 */	stfs f0, 0x4fa4(r26)
/* 8002F174  B3 9A 4F A8 */	sth r28, 0x4fa8(r26)
/* 8002F178  9B BA 4F AA */	stb r29, 0x4faa(r26)
/* 8002F17C  9B FA 4F AC */	stb r31, 0x4fac(r26)
/* 8002F180  9B DA 4F AB */	stb r30, 0x4fab(r26)
/* 8002F184  39 61 00 20 */	addi r11, r1, 0x20
/* 8002F188  48 33 30 95 */	bl _restgpr_26
/* 8002F18C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002F190  7C 08 03 A6 */	mtlr r0
/* 8002F194  38 21 00 20 */	addi r1, r1, 0x20
/* 8002F198  4E 80 00 20 */	blr 
