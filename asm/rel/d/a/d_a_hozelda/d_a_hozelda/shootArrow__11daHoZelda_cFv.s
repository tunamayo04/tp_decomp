lbl_80848058:
/* 80848058  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8084805C  7C 08 02 A6 */	mflr r0
/* 80848060  90 01 00 14 */	stw r0, 0x14(r1)
/* 80848064  80 83 06 C8 */	lwz r4, 0x6c8(r3)
/* 80848068  28 04 00 00 */	cmplwi r4, 0
/* 8084806C  41 82 00 14 */	beq lbl_80848080
/* 80848070  38 00 00 02 */	li r0, 2
/* 80848074  90 04 00 B0 */	stw r0, 0xb0(r4)
/* 80848078  38 63 06 C4 */	addi r3, r3, 0x6c4
/* 8084807C  4B 91 6C 80 */	b clearData__16daPy_actorKeep_cFv
lbl_80848080:
/* 80848080  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80848084  7C 08 03 A6 */	mtlr r0
/* 80848088  38 21 00 10 */	addi r1, r1, 0x10
/* 8084808C  4E 80 00 20 */	blr 
