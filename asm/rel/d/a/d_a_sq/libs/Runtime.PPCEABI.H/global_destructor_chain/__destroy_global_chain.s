lbl_8059F614:
/* 8059F614  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8059F618  7C 08 02 A6 */	mflr r0
/* 8059F61C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8059F620  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8059F624  3C 60 80 5A */	lis r3, __global_destructor_chain@ha
/* 8059F628  3B E3 13 28 */	addi r31, r3, __global_destructor_chain@l
/* 8059F62C  48 00 00 20 */	b lbl_8059F64C
lbl_8059F630:
/* 8059F630  80 05 00 00 */	lwz r0, 0(r5)
/* 8059F634  90 1F 00 00 */	stw r0, 0(r31)
/* 8059F638  80 65 00 08 */	lwz r3, 8(r5)
/* 8059F63C  38 80 FF FF */	li r4, -1
/* 8059F640  81 85 00 04 */	lwz r12, 4(r5)
/* 8059F644  7D 89 03 A6 */	mtctr r12
/* 8059F648  4E 80 04 21 */	bctrl 
lbl_8059F64C:
/* 8059F64C  80 BF 00 00 */	lwz r5, 0(r31)
/* 8059F650  28 05 00 00 */	cmplwi r5, 0
/* 8059F654  40 82 FF DC */	bne lbl_8059F630
/* 8059F658  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8059F65C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8059F660  7C 08 03 A6 */	mtlr r0
/* 8059F664  38 21 00 10 */	addi r1, r1, 0x10
/* 8059F668  4E 80 00 20 */	blr 
