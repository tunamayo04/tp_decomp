lbl_80517E0C:
/* 80517E0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80517E10  7C 08 02 A6 */	mflr r0
/* 80517E14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80517E18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80517E1C  7C 7F 1B 78 */	mr r31, r3
/* 80517E20  4B B6 BC 08 */	b __ct__12dCcD_GObjInfFv
/* 80517E24  3C 60 80 3C */	lis r3, __vt__14cCcD_ShapeAttr@ha
/* 80517E28  38 03 36 D0 */	addi r0, r3, __vt__14cCcD_ShapeAttr@l
/* 80517E2C  90 1F 01 20 */	stw r0, 0x120(r31)
/* 80517E30  3C 60 80 52 */	lis r3, __vt__8cM3dGAab@ha
/* 80517E34  38 03 90 C8 */	addi r0, r3, __vt__8cM3dGAab@l
/* 80517E38  90 1F 01 1C */	stw r0, 0x11c(r31)
/* 80517E3C  3C 60 80 52 */	lis r3, __vt__8cM3dGSph@ha
/* 80517E40  38 03 90 BC */	addi r0, r3, __vt__8cM3dGSph@l
/* 80517E44  90 1F 01 34 */	stw r0, 0x134(r31)
/* 80517E48  3C 60 80 3C */	lis r3, __vt__12cCcD_SphAttr@ha
/* 80517E4C  38 63 35 40 */	addi r3, r3, __vt__12cCcD_SphAttr@l
/* 80517E50  90 7F 01 20 */	stw r3, 0x120(r31)
/* 80517E54  38 03 00 58 */	addi r0, r3, 0x58
/* 80517E58  90 1F 01 34 */	stw r0, 0x134(r31)
/* 80517E5C  3C 60 80 3B */	lis r3, __vt__8dCcD_Sph@ha
/* 80517E60  38 63 BF C0 */	addi r3, r3, __vt__8dCcD_Sph@l
/* 80517E64  90 7F 00 3C */	stw r3, 0x3c(r31)
/* 80517E68  38 03 00 2C */	addi r0, r3, 0x2c
/* 80517E6C  90 1F 01 20 */	stw r0, 0x120(r31)
/* 80517E70  38 03 00 84 */	addi r0, r3, 0x84
/* 80517E74  90 1F 01 34 */	stw r0, 0x134(r31)
/* 80517E78  7F E3 FB 78 */	mr r3, r31
/* 80517E7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80517E80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80517E84  7C 08 03 A6 */	mtlr r0
/* 80517E88  38 21 00 10 */	addi r1, r1, 0x10
/* 80517E8C  4E 80 00 20 */	blr 
