lbl_80025500:
/* 80025500  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80025504  7C 08 02 A6 */	mflr r0
/* 80025508  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002550C  80 84 00 08 */	lwz r4, 8(r4)
/* 80025510  81 83 00 00 */	lwz r12, 0(r3)
/* 80025514  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80025518  7D 89 03 A6 */	mtctr r12
/* 8002551C  4E 80 04 21 */	bctrl 
/* 80025520  38 60 00 01 */	li r3, 1
/* 80025524  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80025528  7C 08 03 A6 */	mtlr r0
/* 8002552C  38 21 00 10 */	addi r1, r1, 0x10
/* 80025530  4E 80 00 20 */	blr 
