lbl_80229034:
/* 80229034  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80229038  A8 83 05 D2 */	lha r4, 0x5d2(r3)
/* 8022903C  38 04 00 01 */	addi r0, r4, 1
/* 80229040  B0 03 05 D2 */	sth r0, 0x5d2(r3)
/* 80229044  38 C0 00 00 */	li r6, 0
/* 80229048  B0 C3 05 D0 */	sth r6, 0x5d0(r3)
/* 8022904C  A8 03 05 CE */	lha r0, 0x5ce(r3)
/* 80229050  B0 03 05 CC */	sth r0, 0x5cc(r3)
/* 80229054  98 C3 0A 1C */	stb r6, 0xa1c(r3)
/* 80229058  98 C3 0C 1C */	stb r6, 0xc1c(r3)
/* 8022905C  98 C3 0E 1C */	stb r6, 0xe1c(r3)
/* 80229060  38 80 00 00 */	li r4, 0
/* 80229064  7C C5 33 78 */	mr r5, r6
/* 80229068  38 00 00 03 */	li r0, 3
/* 8022906C  7C 09 03 A6 */	mtctr r0
lbl_80229070:
/* 80229070  38 05 10 1C */	addi r0, r5, 0x101c
/* 80229074  7C C3 01 AE */	stbx r6, r3, r0
/* 80229078  38 04 10 B2 */	addi r0, r4, 0x10b2
/* 8022907C  7C C3 01 AE */	stbx r6, r3, r0
/* 80229080  38 84 00 50 */	addi r4, r4, 0x50
/* 80229084  38 A5 00 32 */	addi r5, r5, 0x32
/* 80229088  42 00 FF E8 */	bdnz lbl_80229070
/* 8022908C  38 00 00 00 */	li r0, 0
/* 80229090  98 03 12 4C */	stb r0, 0x124c(r3)
/* 80229094  B0 03 05 D6 */	sth r0, 0x5d6(r3)
/* 80229098  98 03 12 42 */	stb r0, 0x1242(r3)
/* 8022909C  98 03 12 43 */	stb r0, 0x1243(r3)
/* 802290A0  B0 03 05 D8 */	sth r0, 0x5d8(r3)
/* 802290A4  88 83 12 49 */	lbz r4, 0x1249(r3)
/* 802290A8  88 03 12 4A */	lbz r0, 0x124a(r3)
/* 802290AC  7C 04 00 40 */	cmplw r4, r0
/* 802290B0  41 82 00 08 */	beq lbl_802290B8
/* 802290B4  98 83 12 4A */	stb r4, 0x124a(r3)
lbl_802290B8:
/* 802290B8  88 03 12 51 */	lbz r0, 0x1251(r3)
/* 802290BC  98 03 12 52 */	stb r0, 0x1252(r3)
/* 802290C0  C0 62 B0 60 */	lfs f3, lit_4027(r2)
/* 802290C4  D0 63 04 64 */	stfs f3, 0x464(r3)
/* 802290C8  88 03 12 47 */	lbz r0, 0x1247(r3)
/* 802290CC  28 00 00 08 */	cmplwi r0, 8
/* 802290D0  40 82 00 44 */	bne lbl_80229114
/* 802290D4  C0 42 B0 64 */	lfs f2, lit_4028(r2)
/* 802290D8  3C 80 80 43 */	lis r4, g_MsgObject_HIO_c@ha
/* 802290DC  38 84 02 8C */	addi r4, r4, g_MsgObject_HIO_c@l
/* 802290E0  A8 04 03 16 */	lha r0, 0x316(r4)
/* 802290E4  C8 22 B0 70 */	lfd f1, lit_4198(r2)
/* 802290E8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802290EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 802290F0  3C 00 43 30 */	lis r0, 0x4330
/* 802290F4  90 01 00 08 */	stw r0, 8(r1)
/* 802290F8  C8 01 00 08 */	lfd f0, 8(r1)
/* 802290FC  EC 00 08 28 */	fsubs f0, f0, f1
/* 80229100  EC 02 00 2A */	fadds f0, f2, f0
/* 80229104  EC 02 00 24 */	fdivs f0, f2, f0
/* 80229108  D0 03 04 58 */	stfs f0, 0x458(r3)
/* 8022910C  D0 63 04 5C */	stfs f3, 0x45c(r3)
/* 80229110  48 00 00 48 */	b lbl_80229158
lbl_80229114:
/* 80229114  28 00 00 09 */	cmplwi r0, 9
/* 80229118  40 82 00 40 */	bne lbl_80229158
/* 8022911C  C0 42 B0 64 */	lfs f2, lit_4028(r2)
/* 80229120  3C 80 80 43 */	lis r4, g_MsgObject_HIO_c@ha
/* 80229124  38 84 02 8C */	addi r4, r4, g_MsgObject_HIO_c@l
/* 80229128  A8 04 03 18 */	lha r0, 0x318(r4)
/* 8022912C  C8 22 B0 70 */	lfd f1, lit_4198(r2)
/* 80229130  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80229134  90 01 00 0C */	stw r0, 0xc(r1)
/* 80229138  3C 00 43 30 */	lis r0, 0x4330
/* 8022913C  90 01 00 08 */	stw r0, 8(r1)
/* 80229140  C8 01 00 08 */	lfd f0, 8(r1)
/* 80229144  EC 00 08 28 */	fsubs f0, f0, f1
/* 80229148  EC 02 00 2A */	fadds f0, f2, f0
/* 8022914C  EC 02 00 24 */	fdivs f0, f2, f0
/* 80229150  D0 03 04 58 */	stfs f0, 0x458(r3)
/* 80229154  D0 63 04 5C */	stfs f3, 0x45c(r3)
lbl_80229158:
/* 80229158  A0 03 06 32 */	lhz r0, 0x632(r3)
/* 8022915C  B0 03 06 30 */	sth r0, 0x630(r3)
/* 80229160  38 21 00 10 */	addi r1, r1, 0x10
/* 80229164  4E 80 00 20 */	blr 
