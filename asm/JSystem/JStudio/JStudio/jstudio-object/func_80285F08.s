lbl_80285F08:
/* 80285F08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80285F0C  7C 08 02 A6 */	mflr r0
/* 80285F10  90 01 00 24 */	stw r0, 0x24(r1)
/* 80285F14  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80285F18  7C 7F 1B 78 */	mr r31, r3
/* 80285F1C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80285F20  80 1F 00 04 */	lwz r0, 4(r31)
/* 80285F24  C8 42 BA A0 */	lfd f2, lit_803(r2)
/* 80285F28  90 01 00 0C */	stw r0, 0xc(r1)
/* 80285F2C  3C 00 43 30 */	lis r0, 0x4330
/* 80285F30  90 01 00 08 */	stw r0, 8(r1)
/* 80285F34  C8 01 00 08 */	lfd f0, 8(r1)
/* 80285F38  FC 00 10 28 */	fsub f0, f0, f2
/* 80285F3C  FC 20 00 72 */	fmul f1, f0, f1
/* 80285F40  81 83 00 00 */	lwz r12, 0(r3)
/* 80285F44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80285F48  7D 89 03 A6 */	mtctr r12
/* 80285F4C  4E 80 04 21 */	bctrl 
/* 80285F50  FC 00 08 18 */	frsp f0, f1
/* 80285F54  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80285F58  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80285F5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80285F60  7C 08 03 A6 */	mtlr r0
/* 80285F64  38 21 00 20 */	addi r1, r1, 0x20
/* 80285F68  4E 80 00 20 */	blr 
