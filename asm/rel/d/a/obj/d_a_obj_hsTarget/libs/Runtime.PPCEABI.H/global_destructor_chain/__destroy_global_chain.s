lbl_80C1F3D4:
/* 80C1F3D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C1F3D8  7C 08 02 A6 */	mflr r0
/* 80C1F3DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C1F3E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C1F3E4  3C 60 80 C2 */	lis r3, __global_destructor_chain@ha
/* 80C1F3E8  3B E3 F9 58 */	addi r31, r3, __global_destructor_chain@l
/* 80C1F3EC  48 00 00 20 */	b lbl_80C1F40C
lbl_80C1F3F0:
/* 80C1F3F0  80 05 00 00 */	lwz r0, 0(r5)
/* 80C1F3F4  90 1F 00 00 */	stw r0, 0(r31)
/* 80C1F3F8  80 65 00 08 */	lwz r3, 8(r5)
/* 80C1F3FC  38 80 FF FF */	li r4, -1
/* 80C1F400  81 85 00 04 */	lwz r12, 4(r5)
/* 80C1F404  7D 89 03 A6 */	mtctr r12
/* 80C1F408  4E 80 04 21 */	bctrl 
lbl_80C1F40C:
/* 80C1F40C  80 BF 00 00 */	lwz r5, 0(r31)
/* 80C1F410  28 05 00 00 */	cmplwi r5, 0
/* 80C1F414  40 82 FF DC */	bne lbl_80C1F3F0
/* 80C1F418  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C1F41C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C1F420  7C 08 03 A6 */	mtlr r0
/* 80C1F424  38 21 00 10 */	addi r1, r1, 0x10
/* 80C1F428  4E 80 00 20 */	blr 
