lbl_8060F6A4:
/* 8060F6A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8060F6A8  7C 08 02 A6 */	mflr r0
/* 8060F6AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8060F6B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8060F6B4  7C 7F 1B 78 */	mr r31, r3
/* 8060F6B8  4B A7 43 70 */	b __ct__12dCcD_GObjInfFv
/* 8060F6BC  3C 60 80 3C */	lis r3, __vt__14cCcD_ShapeAttr@ha
/* 8060F6C0  38 03 36 D0 */	addi r0, r3, __vt__14cCcD_ShapeAttr@l
/* 8060F6C4  90 1F 01 20 */	stw r0, 0x120(r31)
/* 8060F6C8  3C 60 80 61 */	lis r3, __vt__8cM3dGAab@ha
/* 8060F6CC  38 03 03 E4 */	addi r0, r3, __vt__8cM3dGAab@l
/* 8060F6D0  90 1F 01 1C */	stw r0, 0x11c(r31)
/* 8060F6D4  3C 60 80 61 */	lis r3, __vt__8cM3dGSph@ha
/* 8060F6D8  38 03 03 D8 */	addi r0, r3, __vt__8cM3dGSph@l
/* 8060F6DC  90 1F 01 34 */	stw r0, 0x134(r31)
/* 8060F6E0  3C 60 80 3C */	lis r3, __vt__12cCcD_SphAttr@ha
/* 8060F6E4  38 63 35 40 */	addi r3, r3, __vt__12cCcD_SphAttr@l
/* 8060F6E8  90 7F 01 20 */	stw r3, 0x120(r31)
/* 8060F6EC  38 03 00 58 */	addi r0, r3, 0x58
/* 8060F6F0  90 1F 01 34 */	stw r0, 0x134(r31)
/* 8060F6F4  3C 60 80 3B */	lis r3, __vt__8dCcD_Sph@ha
/* 8060F6F8  38 63 BF C0 */	addi r3, r3, __vt__8dCcD_Sph@l
/* 8060F6FC  90 7F 00 3C */	stw r3, 0x3c(r31)
/* 8060F700  38 03 00 2C */	addi r0, r3, 0x2c
/* 8060F704  90 1F 01 20 */	stw r0, 0x120(r31)
/* 8060F708  38 03 00 84 */	addi r0, r3, 0x84
/* 8060F70C  90 1F 01 34 */	stw r0, 0x134(r31)
/* 8060F710  7F E3 FB 78 */	mr r3, r31
/* 8060F714  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8060F718  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8060F71C  7C 08 03 A6 */	mtlr r0
/* 8060F720  38 21 00 10 */	addi r1, r1, 0x10
/* 8060F724  4E 80 00 20 */	blr 
