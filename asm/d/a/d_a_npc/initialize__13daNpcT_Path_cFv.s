lbl_80145C40:
/* 80145C40  38 00 00 00 */	li r0, 0
/* 80145C44  90 03 00 00 */	stw r0, 0(r3)
/* 80145C48  C0 02 99 D8 */	lfs f0, lit_4116(r2)
/* 80145C4C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80145C50  D0 03 00 08 */	stfs f0, 8(r3)
/* 80145C54  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80145C58  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80145C5C  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80145C60  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80145C64  B0 03 00 1C */	sth r0, 0x1c(r3)
/* 80145C68  98 03 00 20 */	stb r0, 0x20(r3)
/* 80145C6C  98 03 00 21 */	stb r0, 0x21(r3)
/* 80145C70  4E 80 00 20 */	blr 
