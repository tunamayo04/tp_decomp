lbl_80317C0C:
/* 80317C0C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80317C10  7C 08 02 A6 */	mflr r0
/* 80317C14  90 01 00 24 */	stw r0, 0x24(r1)
/* 80317C18  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80317C1C  7C 7F 1B 78 */	mr r31, r3
/* 80317C20  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80317C24  80 64 00 08 */	lwz r3, 8(r4)
/* 80317C28  80 0D 90 58 */	lwz r0, SizeOfJ3DColorBlockLightOffLoad(r13)
/* 80317C2C  7C 63 02 14 */	add r3, r3, r0
/* 80317C30  80 04 00 0C */	lwz r0, 0xc(r4)
/* 80317C34  7C 03 00 40 */	cmplw r3, r0
/* 80317C38  40 81 00 08 */	ble lbl_80317C40
/* 80317C3C  48 04 94 99 */	bl GDOverflowed
lbl_80317C40:
/* 80317C40  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80317C44  80 64 00 00 */	lwz r3, 0(r4)
/* 80317C48  80 04 00 08 */	lwz r0, 8(r4)
/* 80317C4C  7C 03 00 50 */	subf r0, r3, r0
/* 80317C50  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80317C54  38 60 00 10 */	li r3, 0x10
/* 80317C58  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 80317C5C  80 85 00 08 */	lwz r4, 8(r5)
/* 80317C60  38 04 00 01 */	addi r0, r4, 1
/* 80317C64  90 05 00 08 */	stw r0, 8(r5)
/* 80317C68  98 64 00 00 */	stb r3, 0(r4)
/* 80317C6C  38 00 00 00 */	li r0, 0
/* 80317C70  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317C74  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317C78  38 85 00 01 */	addi r4, r5, 1
/* 80317C7C  90 86 00 08 */	stw r4, 8(r6)
/* 80317C80  98 05 00 00 */	stb r0, 0(r5)
/* 80317C84  38 E0 00 01 */	li r7, 1
/* 80317C88  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317C8C  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317C90  38 85 00 01 */	addi r4, r5, 1
/* 80317C94  90 86 00 08 */	stw r4, 8(r6)
/* 80317C98  98 E5 00 00 */	stb r7, 0(r5)
/* 80317C9C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317CA0  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317CA4  38 85 00 01 */	addi r4, r5, 1
/* 80317CA8  90 86 00 08 */	stw r4, 8(r6)
/* 80317CAC  98 65 00 00 */	stb r3, 0(r5)
/* 80317CB0  38 E0 00 0C */	li r7, 0xc
/* 80317CB4  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317CB8  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317CBC  38 85 00 01 */	addi r4, r5, 1
/* 80317CC0  90 86 00 08 */	stw r4, 8(r6)
/* 80317CC4  98 E5 00 00 */	stb r7, 0(r5)
/* 80317CC8  81 1F 00 04 */	lwz r8, 4(r31)
/* 80317CCC  55 07 46 3E */	srwi r7, r8, 0x18
/* 80317CD0  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317CD4  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317CD8  38 85 00 01 */	addi r4, r5, 1
/* 80317CDC  90 86 00 08 */	stw r4, 8(r6)
/* 80317CE0  98 E5 00 00 */	stb r7, 0(r5)
/* 80317CE4  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80317CE8  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317CEC  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317CF0  38 85 00 01 */	addi r4, r5, 1
/* 80317CF4  90 86 00 08 */	stw r4, 8(r6)
/* 80317CF8  98 E5 00 00 */	stb r7, 0(r5)
/* 80317CFC  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 80317D00  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317D04  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317D08  38 85 00 01 */	addi r4, r5, 1
/* 80317D0C  90 86 00 08 */	stw r4, 8(r6)
/* 80317D10  98 E5 00 00 */	stb r7, 0(r5)
/* 80317D14  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317D18  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317D1C  38 85 00 01 */	addi r4, r5, 1
/* 80317D20  90 86 00 08 */	stw r4, 8(r6)
/* 80317D24  99 05 00 00 */	stb r8, 0(r5)
/* 80317D28  81 1F 00 08 */	lwz r8, 8(r31)
/* 80317D2C  55 07 46 3E */	srwi r7, r8, 0x18
/* 80317D30  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317D34  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317D38  38 85 00 01 */	addi r4, r5, 1
/* 80317D3C  90 86 00 08 */	stw r4, 8(r6)
/* 80317D40  98 E5 00 00 */	stb r7, 0(r5)
/* 80317D44  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80317D48  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317D4C  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317D50  38 85 00 01 */	addi r4, r5, 1
/* 80317D54  90 86 00 08 */	stw r4, 8(r6)
/* 80317D58  98 E5 00 00 */	stb r7, 0(r5)
/* 80317D5C  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 80317D60  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317D64  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317D68  38 85 00 01 */	addi r4, r5, 1
/* 80317D6C  90 86 00 08 */	stw r4, 8(r6)
/* 80317D70  98 E5 00 00 */	stb r7, 0(r5)
/* 80317D74  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317D78  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317D7C  38 85 00 01 */	addi r4, r5, 1
/* 80317D80  90 86 00 08 */	stw r4, 8(r6)
/* 80317D84  99 05 00 00 */	stb r8, 0(r5)
/* 80317D88  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80317D8C  80 A4 00 00 */	lwz r5, 0(r4)
/* 80317D90  80 84 00 08 */	lwz r4, 8(r4)
/* 80317D94  7C 85 20 50 */	subf r4, r5, r4
/* 80317D98  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 80317D9C  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317DA0  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317DA4  38 85 00 01 */	addi r4, r5, 1
/* 80317DA8  90 86 00 08 */	stw r4, 8(r6)
/* 80317DAC  98 65 00 00 */	stb r3, 0(r5)
/* 80317DB0  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317DB4  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317DB8  38 85 00 01 */	addi r4, r5, 1
/* 80317DBC  90 86 00 08 */	stw r4, 8(r6)
/* 80317DC0  98 05 00 00 */	stb r0, 0(r5)
/* 80317DC4  38 E0 00 03 */	li r7, 3
/* 80317DC8  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317DCC  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317DD0  38 85 00 01 */	addi r4, r5, 1
/* 80317DD4  90 86 00 08 */	stw r4, 8(r6)
/* 80317DD8  98 E5 00 00 */	stb r7, 0(r5)
/* 80317DDC  80 CD 94 00 */	lwz r6, __GDCurrentDL(r13)
/* 80317DE0  80 A6 00 08 */	lwz r5, 8(r6)
/* 80317DE4  38 85 00 01 */	addi r4, r5, 1
/* 80317DE8  90 86 00 08 */	stw r4, 8(r6)
/* 80317DEC  98 65 00 00 */	stb r3, 0(r5)
/* 80317DF0  38 C0 00 0E */	li r6, 0xe
/* 80317DF4  80 AD 94 00 */	lwz r5, __GDCurrentDL(r13)
/* 80317DF8  80 85 00 08 */	lwz r4, 8(r5)
/* 80317DFC  38 64 00 01 */	addi r3, r4, 1
/* 80317E00  90 65 00 08 */	stw r3, 8(r5)
/* 80317E04  98 C4 00 00 */	stb r6, 0(r4)
/* 80317E08  80 62 C9 A8 */	lwz r3, lit_585(r2)
/* 80317E0C  90 61 00 14 */	stw r3, 0x14(r1)
/* 80317E10  A1 9F 00 0E */	lhz r12, 0xe(r31)
/* 80317E14  55 84 BF BE */	rlwinm r4, r12, 0x17, 0x1e, 0x1f
/* 80317E18  38 61 00 14 */	addi r3, r1, 0x14
/* 80317E1C  7D 63 20 AE */	lbzx r11, r3, r4
/* 80317E20  55 8A CF BE */	rlwinm r10, r12, 0x19, 0x1e, 0x1f
/* 80317E24  55 83 CE 36 */	rlwinm r3, r12, 0x19, 0x18, 0x1b
/* 80317E28  51 83 F7 3E */	rlwimi r3, r12, 0x1e, 0x1c, 0x1f
/* 80317E2C  54 69 06 3E */	clrlwi r9, r3, 0x18
/* 80317E30  55 88 07 FE */	clrlwi r8, r12, 0x1f
/* 80317E34  54 66 3C 68 */	rlwinm r6, r3, 7, 0x11, 0x14
/* 80317E38  30 6B FF FF */	addic r3, r11, -1
/* 80317E3C  7C 63 59 10 */	subfe r3, r3, r11
/* 80317E40  54 65 53 AA */	rlwinm r5, r3, 0xa, 0xe, 0x15
/* 80317E44  20 8B 00 02 */	subfic r4, r11, 2
/* 80317E48  30 64 FF FF */	addic r3, r4, -1
/* 80317E4C  7C 63 21 10 */	subfe r3, r3, r4
/* 80317E50  54 63 4B EC */	rlwinm r3, r3, 9, 0xf, 0x16
/* 80317E54  51 88 07 BC */	rlwimi r8, r12, 0, 0x1e, 0x1e
/* 80317E58  51 28 16 BA */	rlwimi r8, r9, 2, 0x1a, 0x1d
/* 80317E5C  51 88 06 72 */	rlwimi r8, r12, 0, 0x19, 0x19
/* 80317E60  2C 0B 00 00 */	cmpwi r11, 0
/* 80317E64  40 82 00 08 */	bne lbl_80317E6C
/* 80317E68  7C 0A 03 78 */	mr r10, r0
lbl_80317E6C:
/* 80317E6C  55 40 38 30 */	slwi r0, r10, 7
/* 80317E70  7D 00 03 78 */	or r0, r8, r0
/* 80317E74  7C 60 03 78 */	or r0, r3, r0
/* 80317E78  7C A0 03 78 */	or r0, r5, r0
/* 80317E7C  7C C6 03 78 */	or r6, r6, r0
/* 80317E80  54 C5 46 3E */	srwi r5, r6, 0x18
/* 80317E84  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80317E88  80 64 00 08 */	lwz r3, 8(r4)
/* 80317E8C  38 03 00 01 */	addi r0, r3, 1
/* 80317E90  90 04 00 08 */	stw r0, 8(r4)
/* 80317E94  98 A3 00 00 */	stb r5, 0(r3)
/* 80317E98  54 C5 86 3E */	rlwinm r5, r6, 0x10, 0x18, 0x1f
/* 80317E9C  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80317EA0  80 64 00 08 */	lwz r3, 8(r4)
/* 80317EA4  38 03 00 01 */	addi r0, r3, 1
/* 80317EA8  90 04 00 08 */	stw r0, 8(r4)
/* 80317EAC  98 A3 00 00 */	stb r5, 0(r3)
/* 80317EB0  54 C5 C6 3E */	rlwinm r5, r6, 0x18, 0x18, 0x1f
/* 80317EB4  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80317EB8  80 64 00 08 */	lwz r3, 8(r4)
/* 80317EBC  38 03 00 01 */	addi r0, r3, 1
/* 80317EC0  90 04 00 08 */	stw r0, 8(r4)
/* 80317EC4  98 A3 00 00 */	stb r5, 0(r3)
/* 80317EC8  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80317ECC  80 64 00 08 */	lwz r3, 8(r4)
/* 80317ED0  38 03 00 01 */	addi r0, r3, 1
/* 80317ED4  90 04 00 08 */	stw r0, 8(r4)
/* 80317ED8  98 C3 00 00 */	stb r6, 0(r3)
/* 80317EDC  80 02 C9 A8 */	lwz r0, lit_585(r2)
/* 80317EE0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80317EE4  A1 7F 00 12 */	lhz r11, 0x12(r31)
/* 80317EE8  55 60 BF BE */	rlwinm r0, r11, 0x17, 0x1e, 0x1f
/* 80317EEC  38 61 00 10 */	addi r3, r1, 0x10
/* 80317EF0  7D 43 00 AE */	lbzx r10, r3, r0
/* 80317EF4  55 69 CF BE */	rlwinm r9, r11, 0x19, 0x1e, 0x1f
/* 80317EF8  55 60 CE 36 */	rlwinm r0, r11, 0x19, 0x18, 0x1b
/* 80317EFC  51 60 F7 3E */	rlwimi r0, r11, 0x1e, 0x1c, 0x1f
/* 80317F00  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 80317F04  55 67 07 FE */	clrlwi r7, r11, 0x1f
/* 80317F08  54 05 3C 68 */	rlwinm r5, r0, 7, 0x11, 0x14
/* 80317F0C  30 0A FF FF */	addic r0, r10, -1
/* 80317F10  7C 00 51 10 */	subfe r0, r0, r10
/* 80317F14  54 04 53 AA */	rlwinm r4, r0, 0xa, 0xe, 0x15
/* 80317F18  20 6A 00 02 */	subfic r3, r10, 2
/* 80317F1C  30 03 FF FF */	addic r0, r3, -1
/* 80317F20  7C 00 19 10 */	subfe r0, r0, r3
/* 80317F24  54 03 4B EC */	rlwinm r3, r0, 9, 0xf, 0x16
/* 80317F28  51 67 07 BC */	rlwimi r7, r11, 0, 0x1e, 0x1e
/* 80317F2C  51 07 16 BA */	rlwimi r7, r8, 2, 0x1a, 0x1d
/* 80317F30  51 67 06 72 */	rlwimi r7, r11, 0, 0x19, 0x19
/* 80317F34  2C 0A 00 00 */	cmpwi r10, 0
/* 80317F38  40 82 00 08 */	bne lbl_80317F40
/* 80317F3C  39 20 00 00 */	li r9, 0
lbl_80317F40:
/* 80317F40  55 20 38 30 */	slwi r0, r9, 7
/* 80317F44  7C E0 03 78 */	or r0, r7, r0
/* 80317F48  7C 60 03 78 */	or r0, r3, r0
/* 80317F4C  7C 80 03 78 */	or r0, r4, r0
/* 80317F50  7C A6 03 78 */	or r6, r5, r0
/* 80317F54  54 C5 46 3E */	srwi r5, r6, 0x18
/* 80317F58  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80317F5C  80 64 00 08 */	lwz r3, 8(r4)
/* 80317F60  38 03 00 01 */	addi r0, r3, 1
/* 80317F64  90 04 00 08 */	stw r0, 8(r4)
/* 80317F68  98 A3 00 00 */	stb r5, 0(r3)
/* 80317F6C  54 C5 86 3E */	rlwinm r5, r6, 0x10, 0x18, 0x1f
/* 80317F70  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80317F74  80 64 00 08 */	lwz r3, 8(r4)
/* 80317F78  38 03 00 01 */	addi r0, r3, 1
/* 80317F7C  90 04 00 08 */	stw r0, 8(r4)
/* 80317F80  98 A3 00 00 */	stb r5, 0(r3)
/* 80317F84  54 C5 C6 3E */	rlwinm r5, r6, 0x18, 0x18, 0x1f
/* 80317F88  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80317F8C  80 64 00 08 */	lwz r3, 8(r4)
/* 80317F90  38 03 00 01 */	addi r0, r3, 1
/* 80317F94  90 04 00 08 */	stw r0, 8(r4)
/* 80317F98  98 A3 00 00 */	stb r5, 0(r3)
/* 80317F9C  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80317FA0  80 64 00 08 */	lwz r3, 8(r4)
/* 80317FA4  38 03 00 01 */	addi r0, r3, 1
/* 80317FA8  90 04 00 08 */	stw r0, 8(r4)
/* 80317FAC  98 C3 00 00 */	stb r6, 0(r3)
/* 80317FB0  80 02 C9 A8 */	lwz r0, lit_585(r2)
/* 80317FB4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80317FB8  A1 7F 00 10 */	lhz r11, 0x10(r31)
/* 80317FBC  55 60 BF BE */	rlwinm r0, r11, 0x17, 0x1e, 0x1f
/* 80317FC0  38 61 00 0C */	addi r3, r1, 0xc
/* 80317FC4  7D 43 00 AE */	lbzx r10, r3, r0
/* 80317FC8  55 69 CF BE */	rlwinm r9, r11, 0x19, 0x1e, 0x1f
/* 80317FCC  55 60 CE 36 */	rlwinm r0, r11, 0x19, 0x18, 0x1b
/* 80317FD0  51 60 F7 3E */	rlwimi r0, r11, 0x1e, 0x1c, 0x1f
/* 80317FD4  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 80317FD8  55 67 07 FE */	clrlwi r7, r11, 0x1f
/* 80317FDC  54 05 3C 68 */	rlwinm r5, r0, 7, 0x11, 0x14
/* 80317FE0  30 0A FF FF */	addic r0, r10, -1
/* 80317FE4  7C 00 51 10 */	subfe r0, r0, r10
/* 80317FE8  54 04 53 AA */	rlwinm r4, r0, 0xa, 0xe, 0x15
/* 80317FEC  20 6A 00 02 */	subfic r3, r10, 2
/* 80317FF0  30 03 FF FF */	addic r0, r3, -1
/* 80317FF4  7C 00 19 10 */	subfe r0, r0, r3
/* 80317FF8  54 03 4B EC */	rlwinm r3, r0, 9, 0xf, 0x16
/* 80317FFC  51 67 07 BC */	rlwimi r7, r11, 0, 0x1e, 0x1e
/* 80318000  51 07 16 BA */	rlwimi r7, r8, 2, 0x1a, 0x1d
/* 80318004  51 67 06 72 */	rlwimi r7, r11, 0, 0x19, 0x19
/* 80318008  2C 0A 00 00 */	cmpwi r10, 0
/* 8031800C  40 82 00 08 */	bne lbl_80318014
/* 80318010  39 20 00 00 */	li r9, 0
lbl_80318014:
/* 80318014  55 20 38 30 */	slwi r0, r9, 7
/* 80318018  7C E0 03 78 */	or r0, r7, r0
/* 8031801C  7C 60 03 78 */	or r0, r3, r0
/* 80318020  7C 80 03 78 */	or r0, r4, r0
/* 80318024  7C A6 03 78 */	or r6, r5, r0
/* 80318028  54 C5 46 3E */	srwi r5, r6, 0x18
/* 8031802C  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80318030  80 64 00 08 */	lwz r3, 8(r4)
/* 80318034  38 03 00 01 */	addi r0, r3, 1
/* 80318038  90 04 00 08 */	stw r0, 8(r4)
/* 8031803C  98 A3 00 00 */	stb r5, 0(r3)
/* 80318040  54 C5 86 3E */	rlwinm r5, r6, 0x10, 0x18, 0x1f
/* 80318044  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80318048  80 64 00 08 */	lwz r3, 8(r4)
/* 8031804C  38 03 00 01 */	addi r0, r3, 1
/* 80318050  90 04 00 08 */	stw r0, 8(r4)
/* 80318054  98 A3 00 00 */	stb r5, 0(r3)
/* 80318058  54 C5 C6 3E */	rlwinm r5, r6, 0x18, 0x18, 0x1f
/* 8031805C  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80318060  80 64 00 08 */	lwz r3, 8(r4)
/* 80318064  38 03 00 01 */	addi r0, r3, 1
/* 80318068  90 04 00 08 */	stw r0, 8(r4)
/* 8031806C  98 A3 00 00 */	stb r5, 0(r3)
/* 80318070  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80318074  80 64 00 08 */	lwz r3, 8(r4)
/* 80318078  38 03 00 01 */	addi r0, r3, 1
/* 8031807C  90 04 00 08 */	stw r0, 8(r4)
/* 80318080  98 C3 00 00 */	stb r6, 0(r3)
/* 80318084  80 02 C9 A8 */	lwz r0, lit_585(r2)
/* 80318088  90 01 00 08 */	stw r0, 8(r1)
/* 8031808C  A1 7F 00 14 */	lhz r11, 0x14(r31)
/* 80318090  55 60 BF BE */	rlwinm r0, r11, 0x17, 0x1e, 0x1f
/* 80318094  38 61 00 08 */	addi r3, r1, 8
/* 80318098  7D 43 00 AE */	lbzx r10, r3, r0
/* 8031809C  55 69 CF BE */	rlwinm r9, r11, 0x19, 0x1e, 0x1f
/* 803180A0  55 60 CE 36 */	rlwinm r0, r11, 0x19, 0x18, 0x1b
/* 803180A4  51 60 F7 3E */	rlwimi r0, r11, 0x1e, 0x1c, 0x1f
/* 803180A8  54 08 06 3E */	clrlwi r8, r0, 0x18
/* 803180AC  55 67 07 FE */	clrlwi r7, r11, 0x1f
/* 803180B0  54 05 3C 68 */	rlwinm r5, r0, 7, 0x11, 0x14
/* 803180B4  30 0A FF FF */	addic r0, r10, -1
/* 803180B8  7C 00 51 10 */	subfe r0, r0, r10
/* 803180BC  54 04 53 AA */	rlwinm r4, r0, 0xa, 0xe, 0x15
/* 803180C0  20 6A 00 02 */	subfic r3, r10, 2
/* 803180C4  30 03 FF FF */	addic r0, r3, -1
/* 803180C8  7C 00 19 10 */	subfe r0, r0, r3
/* 803180CC  54 03 4B EC */	rlwinm r3, r0, 9, 0xf, 0x16
/* 803180D0  51 67 07 BC */	rlwimi r7, r11, 0, 0x1e, 0x1e
/* 803180D4  51 07 16 BA */	rlwimi r7, r8, 2, 0x1a, 0x1d
/* 803180D8  51 67 06 72 */	rlwimi r7, r11, 0, 0x19, 0x19
/* 803180DC  2C 0A 00 00 */	cmpwi r10, 0
/* 803180E0  40 82 00 08 */	bne lbl_803180E8
/* 803180E4  39 20 00 00 */	li r9, 0
lbl_803180E8:
/* 803180E8  55 20 38 30 */	slwi r0, r9, 7
/* 803180EC  7C E0 03 78 */	or r0, r7, r0
/* 803180F0  7C 60 03 78 */	or r0, r3, r0
/* 803180F4  7C 80 03 78 */	or r0, r4, r0
/* 803180F8  7C A6 03 78 */	or r6, r5, r0
/* 803180FC  54 C5 46 3E */	srwi r5, r6, 0x18
/* 80318100  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80318104  80 64 00 08 */	lwz r3, 8(r4)
/* 80318108  38 03 00 01 */	addi r0, r3, 1
/* 8031810C  90 04 00 08 */	stw r0, 8(r4)
/* 80318110  98 A3 00 00 */	stb r5, 0(r3)
/* 80318114  54 C5 86 3E */	rlwinm r5, r6, 0x10, 0x18, 0x1f
/* 80318118  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8031811C  80 64 00 08 */	lwz r3, 8(r4)
/* 80318120  38 03 00 01 */	addi r0, r3, 1
/* 80318124  90 04 00 08 */	stw r0, 8(r4)
/* 80318128  98 A3 00 00 */	stb r5, 0(r3)
/* 8031812C  54 C5 C6 3E */	rlwinm r5, r6, 0x18, 0x18, 0x1f
/* 80318130  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80318134  80 64 00 08 */	lwz r3, 8(r4)
/* 80318138  38 03 00 01 */	addi r0, r3, 1
/* 8031813C  90 04 00 08 */	stw r0, 8(r4)
/* 80318140  98 A3 00 00 */	stb r5, 0(r3)
/* 80318144  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 80318148  80 64 00 08 */	lwz r3, 8(r4)
/* 8031814C  38 03 00 01 */	addi r0, r3, 1
/* 80318150  90 04 00 08 */	stw r0, 8(r4)
/* 80318154  98 C3 00 00 */	stb r6, 0(r3)
/* 80318158  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8031815C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80318160  7C 08 03 A6 */	mtlr r0
/* 80318164  38 21 00 20 */	addi r1, r1, 0x20
/* 80318168  4E 80 00 20 */	blr 
