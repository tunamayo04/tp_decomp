lbl_80AB3610:
/* 80AB3610  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AB3614  7C 08 02 A6 */	mflr r0
/* 80AB3618  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AB361C  38 80 FF FF */	li r4, -1
/* 80AB3620  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 80AB3624  81 8C 00 08 */	lwz r12, 8(r12)
/* 80AB3628  7D 89 03 A6 */	mtctr r12
/* 80AB362C  4E 80 04 21 */	bctrl 
/* 80AB3630  38 60 00 01 */	li r3, 1
/* 80AB3634  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AB3638  7C 08 03 A6 */	mtlr r0
/* 80AB363C  38 21 00 10 */	addi r1, r1, 0x10
/* 80AB3640  4E 80 00 20 */	blr 
