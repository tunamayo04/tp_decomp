lbl_80AF356C:
/* 80AF356C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AF3570  7C 08 02 A6 */	mflr r0
/* 80AF3574  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AF3578  38 80 FF FF */	li r4, -1
/* 80AF357C  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 80AF3580  81 8C 00 08 */	lwz r12, 8(r12)
/* 80AF3584  7D 89 03 A6 */	mtctr r12
/* 80AF3588  4E 80 04 21 */	bctrl 
/* 80AF358C  38 60 00 01 */	li r3, 1
/* 80AF3590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AF3594  7C 08 03 A6 */	mtlr r0
/* 80AF3598  38 21 00 10 */	addi r1, r1, 0x10
/* 80AF359C  4E 80 00 20 */	blr 
