lbl_8028C544:
/* 8028C544  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C548  7C 08 02 A6 */	mflr r0
/* 8028C54C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C550  7C 65 1B 78 */	mr r5, r3
/* 8028C554  80 64 01 04 */	lwz r3, 0x104(r4)
/* 8028C558  39 85 00 08 */	addi r12, r5, 8
/* 8028C55C  48 0D 5B 29 */	bl __ptmf_scall
/* 8028C560  60 00 00 00 */	nop 
/* 8028C564  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C568  7C 08 03 A6 */	mtlr r0
/* 8028C56C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C570  4E 80 00 20 */	blr 
