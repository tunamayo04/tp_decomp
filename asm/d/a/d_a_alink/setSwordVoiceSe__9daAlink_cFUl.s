lbl_800D2284:
/* 800D2284  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D2288  7C 08 02 A6 */	mflr r0
/* 800D228C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D2290  80 03 05 70 */	lwz r0, 0x570(r3)
/* 800D2294  54 00 02 11 */	rlwinm. r0, r0, 0, 8, 8
/* 800D2298  40 82 00 14 */	bne lbl_800D22AC
/* 800D229C  81 83 06 28 */	lwz r12, 0x628(r3)
/* 800D22A0  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 800D22A4  7D 89 03 A6 */	mtctr r12
/* 800D22A8  4E 80 04 21 */	bctrl 
lbl_800D22AC:
/* 800D22AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D22B0  7C 08 03 A6 */	mtlr r0
/* 800D22B4  38 21 00 10 */	addi r1, r1, 0x10
/* 800D22B8  4E 80 00 20 */	blr 
