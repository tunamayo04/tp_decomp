lbl_8081526C:
/* 8081526C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80815270  7C 08 02 A6 */	mflr r0
/* 80815274  90 01 00 14 */	stw r0, 0x14(r1)
/* 80815278  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8081527C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80815280  41 82 00 1C */	beq lbl_8081529C
/* 80815284  3C A0 80 81 */	lis r5, __vt__8cM3dGAab@ha
/* 80815288  38 05 5C C8 */	addi r0, r5, __vt__8cM3dGAab@l
/* 8081528C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80815290  7C 80 07 35 */	extsh. r0, r4
/* 80815294  40 81 00 08 */	ble lbl_8081529C
/* 80815298  4B AB 9A A4 */	b __dl__FPv
lbl_8081529C:
/* 8081529C  7F E3 FB 78 */	mr r3, r31
/* 808152A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 808152A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 808152A8  7C 08 03 A6 */	mtlr r0
/* 808152AC  38 21 00 10 */	addi r1, r1, 0x10
/* 808152B0  4E 80 00 20 */	blr 
