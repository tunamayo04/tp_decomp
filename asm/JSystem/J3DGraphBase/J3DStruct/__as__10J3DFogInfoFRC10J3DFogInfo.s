lbl_80325800:
/* 80325800  88 04 00 00 */	lbz r0, 0(r4)
/* 80325804  98 03 00 00 */	stb r0, 0(r3)
/* 80325808  88 04 00 01 */	lbz r0, 1(r4)
/* 8032580C  98 03 00 01 */	stb r0, 1(r3)
/* 80325810  A0 04 00 02 */	lhz r0, 2(r4)
/* 80325814  B0 03 00 02 */	sth r0, 2(r3)
/* 80325818  C0 04 00 04 */	lfs f0, 4(r4)
/* 8032581C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80325820  C0 04 00 08 */	lfs f0, 8(r4)
/* 80325824  D0 03 00 08 */	stfs f0, 8(r3)
/* 80325828  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8032582C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80325830  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 80325834  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80325838  88 04 00 14 */	lbz r0, 0x14(r4)
/* 8032583C  98 03 00 14 */	stb r0, 0x14(r3)
/* 80325840  88 04 00 15 */	lbz r0, 0x15(r4)
/* 80325844  98 03 00 15 */	stb r0, 0x15(r3)
/* 80325848  88 04 00 16 */	lbz r0, 0x16(r4)
/* 8032584C  98 03 00 16 */	stb r0, 0x16(r3)
/* 80325850  88 04 00 17 */	lbz r0, 0x17(r4)
/* 80325854  98 03 00 17 */	stb r0, 0x17(r3)
/* 80325858  38 A0 00 00 */	li r5, 0
/* 8032585C  38 00 00 0A */	li r0, 0xa
/* 80325860  7C 09 03 A6 */	mtctr r0
lbl_80325864:
/* 80325864  38 C5 00 18 */	addi r6, r5, 0x18
/* 80325868  7C 04 32 2E */	lhzx r0, r4, r6
/* 8032586C  7C 03 33 2E */	sthx r0, r3, r6
/* 80325870  38 A5 00 02 */	addi r5, r5, 2
/* 80325874  42 00 FF F0 */	bdnz lbl_80325864
/* 80325878  4E 80 00 20 */	blr 
