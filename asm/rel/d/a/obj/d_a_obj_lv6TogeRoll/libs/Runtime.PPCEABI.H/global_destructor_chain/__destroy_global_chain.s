lbl_80C77BD4:
/* 80C77BD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C77BD8  7C 08 02 A6 */	mflr r0
/* 80C77BDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C77BE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C77BE4  3C 60 80 C8 */	lis r3, __global_destructor_chain@ha
/* 80C77BE8  3B E3 9D 30 */	addi r31, r3, __global_destructor_chain@l
/* 80C77BEC  48 00 00 20 */	b lbl_80C77C0C
lbl_80C77BF0:
/* 80C77BF0  80 05 00 00 */	lwz r0, 0(r5)
/* 80C77BF4  90 1F 00 00 */	stw r0, 0(r31)
/* 80C77BF8  80 65 00 08 */	lwz r3, 8(r5)
/* 80C77BFC  38 80 FF FF */	li r4, -1
/* 80C77C00  81 85 00 04 */	lwz r12, 4(r5)
/* 80C77C04  7D 89 03 A6 */	mtctr r12
/* 80C77C08  4E 80 04 21 */	bctrl 
lbl_80C77C0C:
/* 80C77C0C  80 BF 00 00 */	lwz r5, 0(r31)
/* 80C77C10  28 05 00 00 */	cmplwi r5, 0
/* 80C77C14  40 82 FF DC */	bne lbl_80C77BF0
/* 80C77C18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C77C1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C77C20  7C 08 03 A6 */	mtlr r0
/* 80C77C24  38 21 00 10 */	addi r1, r1, 0x10
/* 80C77C28  4E 80 00 20 */	blr 
