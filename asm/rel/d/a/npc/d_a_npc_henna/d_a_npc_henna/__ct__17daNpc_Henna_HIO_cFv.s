lbl_80542F0C:
/* 80542F0C  3C 80 80 55 */	lis r4, lit_3905@ha
/* 80542F10  38 C4 A9 64 */	addi r6, r4, lit_3905@l
/* 80542F14  3C 80 80 55 */	lis r4, __vt__17daNpc_Henna_HIO_c@ha
/* 80542F18  38 04 AF 68 */	addi r0, r4, __vt__17daNpc_Henna_HIO_c@l
/* 80542F1C  90 03 00 00 */	stw r0, 0(r3)
/* 80542F20  38 00 FF FF */	li r0, -1
/* 80542F24  98 03 00 04 */	stb r0, 4(r3)
/* 80542F28  C0 06 00 00 */	lfs f0, 0(r6)
/* 80542F2C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80542F30  38 00 00 3C */	li r0, 0x3c
/* 80542F34  B0 03 00 0C */	sth r0, 0xc(r3)
/* 80542F38  38 A0 00 FF */	li r5, 0xff
/* 80542F3C  B0 A3 00 0E */	sth r5, 0xe(r3)
/* 80542F40  B0 A3 00 10 */	sth r5, 0x10(r3)
/* 80542F44  38 80 00 C8 */	li r4, 0xc8
/* 80542F48  B0 83 00 12 */	sth r4, 0x12(r3)
/* 80542F4C  B0 A3 00 14 */	sth r5, 0x14(r3)
/* 80542F50  B0 A3 00 16 */	sth r5, 0x16(r3)
/* 80542F54  38 00 00 E6 */	li r0, 0xe6
/* 80542F58  B0 03 00 18 */	sth r0, 0x18(r3)
/* 80542F5C  B0 A3 00 1A */	sth r5, 0x1a(r3)
/* 80542F60  B0 83 00 1C */	sth r4, 0x1c(r3)
/* 80542F64  38 00 00 DC */	li r0, 0xdc
/* 80542F68  B0 03 00 1E */	sth r0, 0x1e(r3)
/* 80542F6C  C0 06 00 04 */	lfs f0, 4(r6)
/* 80542F70  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 80542F74  C0 06 00 08 */	lfs f0, 8(r6)
/* 80542F78  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 80542F7C  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 80542F80  38 80 FF D3 */	li r4, -45
/* 80542F84  B0 83 00 24 */	sth r4, 0x24(r3)
/* 80542F88  38 00 FF D8 */	li r0, -40
/* 80542F8C  B0 03 00 2C */	sth r0, 0x2c(r3)
/* 80542F90  B0 83 00 34 */	sth r4, 0x34(r3)
/* 80542F94  4E 80 00 20 */	blr 
