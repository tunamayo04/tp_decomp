lbl_80110E84:
/* 80110E84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110E88  7C 08 02 A6 */	mflr r0
/* 80110E8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110E90  38 A0 00 00 */	li r5, 0
/* 80110E94  98 A3 2F 94 */	stb r5, 0x2f94(r3)
/* 80110E98  80 03 05 78 */	lwz r0, 0x578(r3)
/* 80110E9C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80110EA0  40 82 00 CC */	bne lbl_80110F6C
/* 80110EA4  80 03 05 78 */	lwz r0, 0x578(r3)
/* 80110EA8  60 00 00 01 */	ori r0, r0, 1
/* 80110EAC  90 03 05 78 */	stw r0, 0x578(r3)
/* 80110EB0  80 83 06 50 */	lwz r4, 0x650(r3)
/* 80110EB4  80 84 00 84 */	lwz r4, 0x84(r4)
/* 80110EB8  80 84 00 0C */	lwz r4, 0xc(r4)
/* 80110EBC  A0 03 30 C0 */	lhz r0, 0x30c0(r3)
/* 80110EC0  1C 00 00 30 */	mulli r0, r0, 0x30
/* 80110EC4  7C 84 02 14 */	add r4, r4, r0
/* 80110EC8  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80110ECC  D0 03 36 0C */	stfs f0, 0x360c(r3)
/* 80110ED0  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 80110ED4  D0 03 36 10 */	stfs f0, 0x3610(r3)
/* 80110ED8  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 80110EDC  D0 03 36 14 */	stfs f0, 0x3614(r3)
/* 80110EE0  C0 23 36 10 */	lfs f1, 0x3610(r3)
/* 80110EE4  C0 02 92 E0 */	lfs f0, lit_6845(r2)
/* 80110EE8  EC 01 00 28 */	fsubs f0, f1, f0
/* 80110EEC  D0 03 36 10 */	stfs f0, 0x3610(r3)
/* 80110EF0  C0 03 36 24 */	lfs f0, 0x3624(r3)
/* 80110EF4  D0 03 36 30 */	stfs f0, 0x3630(r3)
/* 80110EF8  C0 03 36 28 */	lfs f0, 0x3628(r3)
/* 80110EFC  D0 03 36 34 */	stfs f0, 0x3634(r3)
/* 80110F00  C0 03 36 2C */	lfs f0, 0x362c(r3)
/* 80110F04  D0 03 36 38 */	stfs f0, 0x3638(r3)
/* 80110F08  C0 03 36 0C */	lfs f0, 0x360c(r3)
/* 80110F0C  D0 03 36 24 */	stfs f0, 0x3624(r3)
/* 80110F10  C0 03 36 10 */	lfs f0, 0x3610(r3)
/* 80110F14  D0 03 36 28 */	stfs f0, 0x3628(r3)
/* 80110F18  C0 03 36 14 */	lfs f0, 0x3614(r3)
/* 80110F1C  D0 03 36 2C */	stfs f0, 0x362c(r3)
/* 80110F20  3C 80 80 43 */	lis r4, Zero__4cXyz@ha
/* 80110F24  C4 04 0C F4 */	lfsu f0, Zero__4cXyz@l(r4)
/* 80110F28  D0 03 36 18 */	stfs f0, 0x3618(r3)
/* 80110F2C  C0 04 00 04 */	lfs f0, 4(r4)
/* 80110F30  D0 03 36 1C */	stfs f0, 0x361c(r3)
/* 80110F34  C0 04 00 08 */	lfs f0, 8(r4)
/* 80110F38  D0 03 36 20 */	stfs f0, 0x3620(r3)
/* 80110F3C  90 A3 32 C8 */	stw r5, 0x32c8(r3)
/* 80110F40  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 80110F44  D0 03 34 48 */	stfs f0, 0x3448(r3)
/* 80110F48  C0 02 92 BC */	lfs f0, lit_6041(r2)
/* 80110F4C  D0 03 34 4C */	stfs f0, 0x344c(r3)
/* 80110F50  80 A3 07 00 */	lwz r5, 0x700(r3)
/* 80110F54  C0 04 00 00 */	lfs f0, 0(r4)
/* 80110F58  D0 05 00 18 */	stfs f0, 0x18(r5)
/* 80110F5C  C0 04 00 04 */	lfs f0, 4(r4)
/* 80110F60  D0 05 00 1C */	stfs f0, 0x1c(r5)
/* 80110F64  C0 04 00 08 */	lfs f0, 8(r4)
/* 80110F68  D0 05 00 20 */	stfs f0, 0x20(r5)
lbl_80110F6C:
/* 80110F6C  38 63 2C A8 */	addi r3, r3, 0x2ca8
/* 80110F70  38 80 00 01 */	li r4, 1
/* 80110F74  48 1B 28 05 */	bl setKanteraState__14Z2CreatureLinkFUc
/* 80110F78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110F7C  7C 08 03 A6 */	mtlr r0
/* 80110F80  38 21 00 10 */	addi r1, r1, 0x10
/* 80110F84  4E 80 00 20 */	blr 
