lbl_8057F36C:
/* 8057F36C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8057F370  7C 08 02 A6 */	mflr r0
/* 8057F374  90 01 00 14 */	stw r0, 0x14(r1)
/* 8057F378  81 83 05 68 */	lwz r12, 0x568(r3)
/* 8057F37C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8057F380  7D 89 03 A6 */	mtctr r12
/* 8057F384  4E 80 04 21 */	bctrl 
/* 8057F388  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8057F38C  7C 08 03 A6 */	mtlr r0
/* 8057F390  38 21 00 10 */	addi r1, r1, 0x10
/* 8057F394  4E 80 00 20 */	blr 
