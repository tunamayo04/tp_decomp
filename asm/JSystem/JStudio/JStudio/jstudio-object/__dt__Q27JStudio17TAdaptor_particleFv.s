lbl_8028770C:
/* 8028770C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80287710  7C 08 02 A6 */	mflr r0
/* 80287714  90 01 00 14 */	stw r0, 0x14(r1)
/* 80287718  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028771C  93 C1 00 08 */	stw r30, 8(r1)
/* 80287720  7C 7E 1B 79 */	or. r30, r3, r3
/* 80287724  7C 9F 23 78 */	mr r31, r4
/* 80287728  41 82 00 28 */	beq lbl_80287750
/* 8028772C  3C 80 80 3C */	lis r4, __vt__Q27JStudio17TAdaptor_particle@ha
/* 80287730  38 04 53 CC */	addi r0, r4, __vt__Q27JStudio17TAdaptor_particle@l
/* 80287734  90 1E 00 00 */	stw r0, 0(r30)
/* 80287738  38 80 00 00 */	li r4, 0
/* 8028773C  4B FF E8 95 */	bl __dt__Q27JStudio8TAdaptorFv
/* 80287740  7F E0 07 35 */	extsh. r0, r31
/* 80287744  40 81 00 0C */	ble lbl_80287750
/* 80287748  7F C3 F3 78 */	mr r3, r30
/* 8028774C  48 04 75 F1 */	bl __dl__FPv
lbl_80287750:
/* 80287750  7F C3 F3 78 */	mr r3, r30
/* 80287754  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80287758  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028775C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80287760  7C 08 03 A6 */	mtlr r0
/* 80287764  38 21 00 10 */	addi r1, r1, 0x10
/* 80287768  4E 80 00 20 */	blr 
