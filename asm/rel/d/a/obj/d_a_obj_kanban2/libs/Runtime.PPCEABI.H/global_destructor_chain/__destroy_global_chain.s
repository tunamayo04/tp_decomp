lbl_80581714:
/* 80581714  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80581718  7C 08 02 A6 */	mflr r0
/* 8058171C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80581720  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80581724  3C 60 80 58 */	lis r3, __global_destructor_chain@ha
/* 80581728  3B E3 5C 70 */	addi r31, r3, __global_destructor_chain@l
/* 8058172C  48 00 00 20 */	b lbl_8058174C
lbl_80581730:
/* 80581730  80 05 00 00 */	lwz r0, 0(r5)
/* 80581734  90 1F 00 00 */	stw r0, 0(r31)
/* 80581738  80 65 00 08 */	lwz r3, 8(r5)
/* 8058173C  38 80 FF FF */	li r4, -1
/* 80581740  81 85 00 04 */	lwz r12, 4(r5)
/* 80581744  7D 89 03 A6 */	mtctr r12
/* 80581748  4E 80 04 21 */	bctrl 
lbl_8058174C:
/* 8058174C  80 BF 00 00 */	lwz r5, 0(r31)
/* 80581750  28 05 00 00 */	cmplwi r5, 0
/* 80581754  40 82 FF DC */	bne lbl_80581730
/* 80581758  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8058175C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80581760  7C 08 03 A6 */	mtlr r0
/* 80581764  38 21 00 10 */	addi r1, r1, 0x10
/* 80581768  4E 80 00 20 */	blr 
