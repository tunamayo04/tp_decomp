lbl_80482CF4:
/* 80482CF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80482CF8  7C 08 02 A6 */	mflr r0
/* 80482CFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80482D00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80482D04  3C 60 80 48 */	lis r3, __global_destructor_chain@ha
/* 80482D08  3B E3 4F F0 */	addi r31, r3, __global_destructor_chain@l
/* 80482D0C  48 00 00 20 */	b lbl_80482D2C
lbl_80482D10:
/* 80482D10  80 05 00 00 */	lwz r0, 0(r5)
/* 80482D14  90 1F 00 00 */	stw r0, 0(r31)
/* 80482D18  80 65 00 08 */	lwz r3, 8(r5)
/* 80482D1C  38 80 FF FF */	li r4, -1
/* 80482D20  81 85 00 04 */	lwz r12, 4(r5)
/* 80482D24  7D 89 03 A6 */	mtctr r12
/* 80482D28  4E 80 04 21 */	bctrl 
lbl_80482D2C:
/* 80482D2C  80 BF 00 00 */	lwz r5, 0(r31)
/* 80482D30  28 05 00 00 */	cmplwi r5, 0
/* 80482D34  40 82 FF DC */	bne lbl_80482D10
/* 80482D38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80482D3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80482D40  7C 08 03 A6 */	mtlr r0
/* 80482D44  38 21 00 10 */	addi r1, r1, 0x10
/* 80482D48  4E 80 00 20 */	blr 
