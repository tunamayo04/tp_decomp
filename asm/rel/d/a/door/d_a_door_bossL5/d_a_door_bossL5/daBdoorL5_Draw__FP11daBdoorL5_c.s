lbl_8067240C:
/* 8067240C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80672410  7C 08 02 A6 */	mflr r0
/* 80672414  90 01 00 14 */	stw r0, 0x14(r1)
/* 80672418  4B FF FE 75 */	bl draw__11daBdoorL5_cFv
/* 8067241C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80672420  7C 08 03 A6 */	mtlr r0
/* 80672424  38 21 00 10 */	addi r1, r1, 0x10
/* 80672428  4E 80 00 20 */	blr 
