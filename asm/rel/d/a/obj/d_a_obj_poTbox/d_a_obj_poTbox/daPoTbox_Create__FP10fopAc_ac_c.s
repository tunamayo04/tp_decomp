lbl_80CB4EF4:
/* 80CB4EF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CB4EF8  7C 08 02 A6 */	mflr r0
/* 80CB4EFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CB4F00  4B FF F7 C5 */	bl create__10daPoTbox_cFv
/* 80CB4F04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CB4F08  7C 08 03 A6 */	mtlr r0
/* 80CB4F0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80CB4F10  4E 80 00 20 */	blr 
