lbl_804A9594:
/* 804A9594  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804A9598  7C 08 02 A6 */	mflr r0
/* 804A959C  90 01 00 14 */	stw r0, 0x14(r1)
/* 804A95A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804A95A4  3C 60 80 4C */	lis r3, __global_destructor_chain@ha
/* 804A95A8  3B E3 BB 88 */	addi r31, r3, __global_destructor_chain@l
/* 804A95AC  48 00 00 20 */	b lbl_804A95CC
lbl_804A95B0:
/* 804A95B0  80 05 00 00 */	lwz r0, 0(r5)
/* 804A95B4  90 1F 00 00 */	stw r0, 0(r31)
/* 804A95B8  80 65 00 08 */	lwz r3, 8(r5)
/* 804A95BC  38 80 FF FF */	li r4, -1
/* 804A95C0  81 85 00 04 */	lwz r12, 4(r5)
/* 804A95C4  7D 89 03 A6 */	mtctr r12
/* 804A95C8  4E 80 04 21 */	bctrl 
lbl_804A95CC:
/* 804A95CC  80 BF 00 00 */	lwz r5, 0(r31)
/* 804A95D0  28 05 00 00 */	cmplwi r5, 0
/* 804A95D4  40 82 FF DC */	bne lbl_804A95B0
/* 804A95D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804A95DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804A95E0  7C 08 03 A6 */	mtlr r0
/* 804A95E4  38 21 00 10 */	addi r1, r1, 0x10
/* 804A95E8  4E 80 00 20 */	blr 
