lbl_800CC25C:
/* 800CC25C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CC260  7C 08 02 A6 */	mflr r0
/* 800CC264  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CC268  88 03 2F BF */	lbz r0, 0x2fbf(r3)
/* 800CC26C  28 00 00 00 */	cmplwi r0, 0
/* 800CC270  40 82 00 18 */	bne lbl_800CC288
/* 800CC274  7C 83 23 78 */	mr r3, r4
/* 800CC278  81 84 00 00 */	lwz r12, 0(r4)
/* 800CC27C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800CC280  7D 89 03 A6 */	mtctr r12
/* 800CC284  4E 80 04 21 */	bctrl 
lbl_800CC288:
/* 800CC288  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CC28C  7C 08 03 A6 */	mtlr r0
/* 800CC290  38 21 00 10 */	addi r1, r1, 0x10
/* 800CC294  4E 80 00 20 */	blr 
