lbl_800837F8:
/* 800837F8  38 A0 00 00 */	li r5, 0
/* 800837FC  98 A3 00 04 */	stb r5, 4(r3)
/* 80083800  98 A3 00 05 */	stb r5, 5(r3)
/* 80083804  98 A3 00 06 */	stb r5, 6(r3)
/* 80083808  3C 80 00 01 */	lis r4, 0x0001 /* 0x0000FFFF@ha */
/* 8008380C  38 04 FF FF */	addi r0, r4, 0xFFFF /* 0x0000FFFF@l */
/* 80083810  B0 03 00 08 */	sth r0, 8(r3)
/* 80083814  38 00 FF FF */	li r0, -1
/* 80083818  90 03 00 0C */	stw r0, 0xc(r3)
/* 8008381C  90 03 00 10 */	stw r0, 0x10(r3)
/* 80083820  90 03 00 14 */	stw r0, 0x14(r3)
/* 80083824  90 03 00 18 */	stw r0, 0x18(r3)
/* 80083828  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 8008382C  4E 80 00 20 */	blr 
