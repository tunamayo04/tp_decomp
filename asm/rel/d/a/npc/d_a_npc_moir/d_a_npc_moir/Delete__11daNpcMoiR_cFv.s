lbl_80A7CE48:
/* 80A7CE48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A7CE4C  7C 08 02 A6 */	mflr r0
/* 80A7CE50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A7CE54  38 80 FF FF */	li r4, -1
/* 80A7CE58  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 80A7CE5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80A7CE60  7D 89 03 A6 */	mtctr r12
/* 80A7CE64  4E 80 04 21 */	bctrl 
/* 80A7CE68  38 60 00 01 */	li r3, 1
/* 80A7CE6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A7CE70  7C 08 03 A6 */	mtlr r0
/* 80A7CE74  38 21 00 10 */	addi r1, r1, 0x10
/* 80A7CE78  4E 80 00 20 */	blr 
