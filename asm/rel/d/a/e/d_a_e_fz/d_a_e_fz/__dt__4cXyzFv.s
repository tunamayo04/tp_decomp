lbl_806C18E8:
/* 806C18E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806C18EC  7C 08 02 A6 */	mflr r0
/* 806C18F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 806C18F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806C18F8  7C 7F 1B 79 */	or. r31, r3, r3
/* 806C18FC  41 82 00 10 */	beq lbl_806C190C
/* 806C1900  7C 80 07 35 */	extsh. r0, r4
/* 806C1904  40 81 00 08 */	ble lbl_806C190C
/* 806C1908  4B C0 D4 34 */	b __dl__FPv
lbl_806C190C:
/* 806C190C  7F E3 FB 78 */	mr r3, r31
/* 806C1910  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806C1914  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806C1918  7C 08 03 A6 */	mtlr r0
/* 806C191C  38 21 00 10 */	addi r1, r1, 0x10
/* 806C1920  4E 80 00 20 */	blr 
