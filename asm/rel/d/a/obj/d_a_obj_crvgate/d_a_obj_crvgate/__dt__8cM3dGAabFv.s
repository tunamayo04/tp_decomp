lbl_80BD2C2C:
/* 80BD2C2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BD2C30  7C 08 02 A6 */	mflr r0
/* 80BD2C34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BD2C38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80BD2C3C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80BD2C40  41 82 00 1C */	beq lbl_80BD2C5C
/* 80BD2C44  3C A0 80 BD */	lis r5, __vt__8cM3dGAab@ha
/* 80BD2C48  38 05 32 60 */	addi r0, r5, __vt__8cM3dGAab@l
/* 80BD2C4C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80BD2C50  7C 80 07 35 */	extsh. r0, r4
/* 80BD2C54  40 81 00 08 */	ble lbl_80BD2C5C
/* 80BD2C58  4B 6F C0 E4 */	b __dl__FPv
lbl_80BD2C5C:
/* 80BD2C5C  7F E3 FB 78 */	mr r3, r31
/* 80BD2C60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80BD2C64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BD2C68  7C 08 03 A6 */	mtlr r0
/* 80BD2C6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80BD2C70  4E 80 00 20 */	blr 
