lbl_800ED4B8:
/* 800ED4B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ED4BC  7C 08 02 A6 */	mflr r0
/* 800ED4C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ED4C4  80 63 28 18 */	lwz r3, 0x2818(r3)
/* 800ED4C8  4B F4 A8 F5 */	bl setRunRideMode__10e_wb_classFv
/* 800ED4CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ED4D0  7C 08 03 A6 */	mtlr r0
/* 800ED4D4  38 21 00 10 */	addi r1, r1, 0x10
/* 800ED4D8  4E 80 00 20 */	blr 
