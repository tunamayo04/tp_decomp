lbl_800341AC:
/* 800341AC  38 A0 00 00 */	li r5, 0
/* 800341B0  7C 64 1B 78 */	mr r4, r3
/* 800341B4  38 00 00 08 */	li r0, 8
/* 800341B8  7C 09 03 A6 */	mtctr r0
lbl_800341BC:
/* 800341BC  98 A4 00 00 */	stb r5, 0(r4)
/* 800341C0  38 84 00 01 */	addi r4, r4, 1
/* 800341C4  42 00 FF F8 */	bdnz lbl_800341BC
/* 800341C8  38 80 00 00 */	li r4, 0
/* 800341CC  98 83 00 08 */	stb r4, 8(r3)
/* 800341D0  98 83 00 09 */	stb r4, 9(r3)
/* 800341D4  98 83 00 0A */	stb r4, 0xa(r3)
/* 800341D8  38 00 00 FF */	li r0, 0xff
/* 800341DC  98 03 00 0B */	stb r0, 0xb(r3)
/* 800341E0  98 83 00 0C */	stb r4, 0xc(r3)
/* 800341E4  4E 80 00 20 */	blr 
