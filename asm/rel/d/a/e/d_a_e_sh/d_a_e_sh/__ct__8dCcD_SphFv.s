lbl_807916AC:
/* 807916AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807916B0  7C 08 02 A6 */	mflr r0
/* 807916B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 807916B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807916BC  7C 7F 1B 78 */	mr r31, r3
/* 807916C0  4B 8F 23 68 */	b __ct__12dCcD_GObjInfFv
/* 807916C4  3C 60 80 3C */	lis r3, __vt__14cCcD_ShapeAttr@ha
/* 807916C8  38 03 36 D0 */	addi r0, r3, __vt__14cCcD_ShapeAttr@l
/* 807916CC  90 1F 01 20 */	stw r0, 0x120(r31)
/* 807916D0  3C 60 80 79 */	lis r3, __vt__8cM3dGAab@ha
/* 807916D4  38 03 20 B0 */	addi r0, r3, __vt__8cM3dGAab@l
/* 807916D8  90 1F 01 1C */	stw r0, 0x11c(r31)
/* 807916DC  3C 60 80 79 */	lis r3, __vt__8cM3dGSph@ha
/* 807916E0  38 03 20 A4 */	addi r0, r3, __vt__8cM3dGSph@l
/* 807916E4  90 1F 01 34 */	stw r0, 0x134(r31)
/* 807916E8  3C 60 80 3C */	lis r3, __vt__12cCcD_SphAttr@ha
/* 807916EC  38 63 35 40 */	addi r3, r3, __vt__12cCcD_SphAttr@l
/* 807916F0  90 7F 01 20 */	stw r3, 0x120(r31)
/* 807916F4  38 03 00 58 */	addi r0, r3, 0x58
/* 807916F8  90 1F 01 34 */	stw r0, 0x134(r31)
/* 807916FC  3C 60 80 3B */	lis r3, __vt__8dCcD_Sph@ha
/* 80791700  38 63 BF C0 */	addi r3, r3, __vt__8dCcD_Sph@l
/* 80791704  90 7F 00 3C */	stw r3, 0x3c(r31)
/* 80791708  38 03 00 2C */	addi r0, r3, 0x2c
/* 8079170C  90 1F 01 20 */	stw r0, 0x120(r31)
/* 80791710  38 03 00 84 */	addi r0, r3, 0x84
/* 80791714  90 1F 01 34 */	stw r0, 0x134(r31)
/* 80791718  7F E3 FB 78 */	mr r3, r31
/* 8079171C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80791720  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80791724  7C 08 03 A6 */	mtlr r0
/* 80791728  38 21 00 10 */	addi r1, r1, 0x10
/* 8079172C  4E 80 00 20 */	blr 
