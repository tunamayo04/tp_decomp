lbl_80999770:
/* 80999770  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80999774  7C 08 02 A6 */	mflr r0
/* 80999778  90 01 00 14 */	stw r0, 0x14(r1)
/* 8099977C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80999780  7C 7F 1B 79 */	or. r31, r3, r3
/* 80999784  41 82 00 10 */	beq lbl_80999794
/* 80999788  7C 80 07 35 */	extsh. r0, r4
/* 8099978C  40 81 00 08 */	ble lbl_80999794
/* 80999790  4B 93 55 AC */	b __dl__FPv
lbl_80999794:
/* 80999794  7F E3 FB 78 */	mr r3, r31
/* 80999798  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8099979C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809997A0  7C 08 03 A6 */	mtlr r0
/* 809997A4  38 21 00 10 */	addi r1, r1, 0x10
/* 809997A8  4E 80 00 20 */	blr 
