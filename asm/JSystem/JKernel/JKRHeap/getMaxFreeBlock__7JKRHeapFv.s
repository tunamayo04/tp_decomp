lbl_802CE758:
/* 802CE758  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CE75C  7C 08 02 A6 */	mflr r0
/* 802CE760  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CE764  81 83 00 00 */	lwz r12, 0(r3)
/* 802CE768  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802CE76C  7D 89 03 A6 */	mtctr r12
/* 802CE770  4E 80 04 21 */	bctrl 
/* 802CE774  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CE778  7C 08 03 A6 */	mtlr r0
/* 802CE77C  38 21 00 10 */	addi r1, r1, 0x10
/* 802CE780  4E 80 00 20 */	blr 
