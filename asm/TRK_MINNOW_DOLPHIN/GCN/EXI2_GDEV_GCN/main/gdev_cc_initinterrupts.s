lbl_80372908:
/* 80372908  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037290C  7C 08 02 A6 */	mflr r0
/* 80372910  90 01 00 14 */	stw r0, 0x14(r1)
/* 80372914  48 00 07 A9 */	bl DBInitInterrupts
/* 80372918  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037291C  38 60 00 00 */	li r3, 0
/* 80372920  7C 08 03 A6 */	mtlr r0
/* 80372924  38 21 00 10 */	addi r1, r1, 0x10
/* 80372928  4E 80 00 20 */	blr 
