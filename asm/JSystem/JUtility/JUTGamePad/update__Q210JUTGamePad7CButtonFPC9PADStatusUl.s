lbl_802E108C:
/* 802E108C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E1090  28 04 00 00 */	cmplwi r4, 0
/* 802E1094  41 82 00 0C */	beq lbl_802E10A0
/* 802E1098  A0 04 00 00 */	lhz r0, 0(r4)
/* 802E109C  48 00 00 08 */	b lbl_802E10A4
lbl_802E10A0:
/* 802E10A0  38 00 00 00 */	li r0, 0
lbl_802E10A4:
/* 802E10A4  7C A7 03 78 */	or r7, r5, r0
/* 802E10A8  38 A0 00 00 */	li r5, 0
/* 802E10AC  90 A3 00 18 */	stw r5, 0x18(r3)
/* 802E10B0  80 03 00 28 */	lwz r0, 0x28(r3)
/* 802E10B4  28 00 00 00 */	cmplwi r0, 0
/* 802E10B8  41 82 00 8C */	beq lbl_802E1144
/* 802E10BC  80 03 00 24 */	lwz r0, 0x24(r3)
/* 802E10C0  28 00 00 00 */	cmplwi r0, 0
/* 802E10C4  41 82 00 80 */	beq lbl_802E1144
/* 802E10C8  7C E8 00 39 */	and. r8, r7, r0
/* 802E10CC  90 A3 00 18 */	stw r5, 0x18(r3)
/* 802E10D0  40 82 00 10 */	bne lbl_802E10E0
/* 802E10D4  90 A3 00 20 */	stw r5, 0x20(r3)
/* 802E10D8  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 802E10DC  48 00 00 68 */	b lbl_802E1144
lbl_802E10E0:
/* 802E10E0  80 C3 00 20 */	lwz r6, 0x20(r3)
/* 802E10E4  7C 06 40 40 */	cmplw r6, r8
/* 802E10E8  40 82 00 44 */	bne lbl_802E112C
/* 802E10EC  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 802E10F0  38 05 00 01 */	addi r0, r5, 1
/* 802E10F4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802E10F8  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 802E10FC  80 03 00 28 */	lwz r0, 0x28(r3)
/* 802E1100  7C 05 00 40 */	cmplw r5, r0
/* 802E1104  41 82 00 20 */	beq lbl_802E1124
/* 802E1108  40 81 00 3C */	ble lbl_802E1144
/* 802E110C  7C C0 28 50 */	subf r6, r0, r5
/* 802E1110  80 A3 00 2C */	lwz r5, 0x2c(r3)
/* 802E1114  7C 06 2B 96 */	divwu r0, r6, r5
/* 802E1118  7C 00 29 D6 */	mullw r0, r0, r5
/* 802E111C  7C 00 30 51 */	subf. r0, r0, r6
/* 802E1120  40 82 00 24 */	bne lbl_802E1144
lbl_802E1124:
/* 802E1124  91 03 00 18 */	stw r8, 0x18(r3)
/* 802E1128  48 00 00 1C */	b lbl_802E1144
lbl_802E112C:
/* 802E112C  38 00 FF FF */	li r0, -1
/* 802E1130  7C C0 02 78 */	xor r0, r6, r0
/* 802E1134  7D 00 00 38 */	and r0, r8, r0
/* 802E1138  90 03 00 18 */	stw r0, 0x18(r3)
/* 802E113C  91 03 00 20 */	stw r8, 0x20(r3)
/* 802E1140  90 A3 00 1C */	stw r5, 0x1c(r3)
lbl_802E1144:
/* 802E1144  80 03 00 00 */	lwz r0, 0(r3)
/* 802E1148  7C E0 02 78 */	xor r0, r7, r0
/* 802E114C  7C E0 00 38 */	and r0, r7, r0
/* 802E1150  90 03 00 04 */	stw r0, 4(r3)
/* 802E1154  80 A3 00 00 */	lwz r5, 0(r3)
/* 802E1158  7C E0 2A 78 */	xor r0, r7, r5
/* 802E115C  7C A0 00 38 */	and r0, r5, r0
/* 802E1160  90 03 00 08 */	stw r0, 8(r3)
/* 802E1164  90 E3 00 00 */	stw r7, 0(r3)
/* 802E1168  80 C3 00 18 */	lwz r6, 0x18(r3)
/* 802E116C  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 802E1170  38 00 FF FF */	li r0, -1
/* 802E1174  7C A5 02 78 */	xor r5, r5, r0
/* 802E1178  80 03 00 04 */	lwz r0, 4(r3)
/* 802E117C  7C A0 00 38 */	and r0, r5, r0
/* 802E1180  7C C0 03 78 */	or r0, r6, r0
/* 802E1184  90 03 00 18 */	stw r0, 0x18(r3)
/* 802E1188  28 04 00 00 */	cmplwi r4, 0
/* 802E118C  41 82 00 28 */	beq lbl_802E11B4
/* 802E1190  88 04 00 08 */	lbz r0, 8(r4)
/* 802E1194  98 03 00 0C */	stb r0, 0xc(r3)
/* 802E1198  88 04 00 09 */	lbz r0, 9(r4)
/* 802E119C  98 03 00 0D */	stb r0, 0xd(r3)
/* 802E11A0  88 04 00 06 */	lbz r0, 6(r4)
/* 802E11A4  98 03 00 0E */	stb r0, 0xe(r3)
/* 802E11A8  88 04 00 07 */	lbz r0, 7(r4)
/* 802E11AC  98 03 00 0F */	stb r0, 0xf(r3)
/* 802E11B0  48 00 00 18 */	b lbl_802E11C8
lbl_802E11B4:
/* 802E11B4  38 00 00 00 */	li r0, 0
/* 802E11B8  98 03 00 0C */	stb r0, 0xc(r3)
/* 802E11BC  98 03 00 0D */	stb r0, 0xd(r3)
/* 802E11C0  98 03 00 0E */	stb r0, 0xe(r3)
/* 802E11C4  98 03 00 0F */	stb r0, 0xf(r3)
lbl_802E11C8:
/* 802E11C8  88 03 00 0E */	lbz r0, 0xe(r3)
/* 802E11CC  C8 42 C6 20 */	lfd f2, lit_1050(r2)
/* 802E11D0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802E11D4  90 01 00 0C */	stw r0, 0xc(r1)
/* 802E11D8  3C 80 43 30 */	lis r4, 0x4330
/* 802E11DC  90 81 00 08 */	stw r4, 8(r1)
/* 802E11E0  C8 01 00 08 */	lfd f0, 8(r1)
/* 802E11E4  EC 00 10 28 */	fsubs f0, f0, f2
/* 802E11E8  C0 22 C6 18 */	lfs f1, lit_1047(r2)
/* 802E11EC  EC 00 08 24 */	fdivs f0, f0, f1
/* 802E11F0  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802E11F4  88 03 00 0F */	lbz r0, 0xf(r3)
/* 802E11F8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802E11FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E1200  90 81 00 10 */	stw r4, 0x10(r1)
/* 802E1204  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802E1208  EC 00 10 28 */	fsubs f0, f0, f2
/* 802E120C  EC 00 08 24 */	fdivs f0, f0, f1
/* 802E1210  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 802E1214  38 21 00 20 */	addi r1, r1, 0x20
/* 802E1218  4E 80 00 20 */	blr 
