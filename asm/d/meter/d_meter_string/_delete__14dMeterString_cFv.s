lbl_8020F49C:
/* 8020F49C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020F4A0  7C 08 02 A6 */	mflr r0
/* 8020F4A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020F4A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020F4AC  7C 7F 1B 78 */	mr r31, r3
/* 8020F4B0  80 63 00 04 */	lwz r3, 4(r3)
/* 8020F4B4  28 03 00 00 */	cmplwi r3, 0
/* 8020F4B8  41 82 00 18 */	beq lbl_8020F4D0
/* 8020F4BC  38 80 00 01 */	li r4, 1
/* 8020F4C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020F4C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020F4C8  7D 89 03 A6 */	mtctr r12
/* 8020F4CC  4E 80 04 21 */	bctrl 
lbl_8020F4D0:
/* 8020F4D0  38 00 00 00 */	li r0, 0
/* 8020F4D4  90 1F 00 04 */	stw r0, 4(r31)
/* 8020F4D8  80 7F 00 08 */	lwz r3, 8(r31)
/* 8020F4DC  28 03 00 00 */	cmplwi r3, 0
/* 8020F4E0  41 82 00 18 */	beq lbl_8020F4F8
/* 8020F4E4  38 80 00 01 */	li r4, 1
/* 8020F4E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020F4EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020F4F0  7D 89 03 A6 */	mtctr r12
/* 8020F4F4  4E 80 04 21 */	bctrl 
lbl_8020F4F8:
/* 8020F4F8  38 00 00 00 */	li r0, 0
/* 8020F4FC  90 1F 00 08 */	stw r0, 8(r31)
/* 8020F500  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8020F504  28 03 00 00 */	cmplwi r3, 0
/* 8020F508  41 82 00 18 */	beq lbl_8020F520
/* 8020F50C  38 80 00 01 */	li r4, 1
/* 8020F510  81 83 00 00 */	lwz r12, 0(r3)
/* 8020F514  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020F518  7D 89 03 A6 */	mtctr r12
/* 8020F51C  4E 80 04 21 */	bctrl 
lbl_8020F520:
/* 8020F520  38 00 00 00 */	li r0, 0
/* 8020F524  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8020F528  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8020F52C  28 03 00 00 */	cmplwi r3, 0
/* 8020F530  41 82 00 18 */	beq lbl_8020F548
/* 8020F534  38 80 00 01 */	li r4, 1
/* 8020F538  81 83 00 00 */	lwz r12, 0(r3)
/* 8020F53C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020F540  7D 89 03 A6 */	mtctr r12
/* 8020F544  4E 80 04 21 */	bctrl 
lbl_8020F548:
/* 8020F548  38 00 00 00 */	li r0, 0
/* 8020F54C  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8020F550  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8020F554  28 03 00 00 */	cmplwi r3, 0
/* 8020F558  41 82 00 18 */	beq lbl_8020F570
/* 8020F55C  38 80 00 01 */	li r4, 1
/* 8020F560  81 83 00 00 */	lwz r12, 0(r3)
/* 8020F564  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020F568  7D 89 03 A6 */	mtctr r12
/* 8020F56C  4E 80 04 21 */	bctrl 
lbl_8020F570:
/* 8020F570  38 00 00 00 */	li r0, 0
/* 8020F574  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8020F578  88 1F 00 28 */	lbz r0, 0x28(r31)
/* 8020F57C  28 00 00 00 */	cmplwi r0, 0
/* 8020F580  41 82 00 0C */	beq lbl_8020F58C
/* 8020F584  38 60 00 09 */	li r3, 9
/* 8020F588  4B E2 02 15 */	bl dComIfG_TimerDeleteRequest__Fi
lbl_8020F58C:
/* 8020F58C  38 60 00 01 */	li r3, 1
/* 8020F590  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020F594  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020F598  7C 08 03 A6 */	mtlr r0
/* 8020F59C  38 21 00 10 */	addi r1, r1, 0x10
/* 8020F5A0  4E 80 00 20 */	blr 
