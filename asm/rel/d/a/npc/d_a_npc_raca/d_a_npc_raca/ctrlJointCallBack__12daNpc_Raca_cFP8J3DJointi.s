lbl_80AB661C:
/* 80AB661C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AB6620  7C 08 02 A6 */	mflr r0
/* 80AB6624  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AB6628  7C 60 1B 78 */	mr r0, r3
/* 80AB662C  2C 04 00 00 */	cmpwi r4, 0
/* 80AB6630  40 82 00 30 */	bne lbl_80AB6660
/* 80AB6634  3C 60 80 43 */	lis r3, j3dSys@ha
/* 80AB6638  38 63 4A C8 */	addi r3, r3, j3dSys@l
/* 80AB663C  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 80AB6640  80 65 00 14 */	lwz r3, 0x14(r5)
/* 80AB6644  28 03 00 00 */	cmplwi r3, 0
/* 80AB6648  41 82 00 18 */	beq lbl_80AB6660
/* 80AB664C  7C 04 03 78 */	mr r4, r0
/* 80AB6650  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80AB6654  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80AB6658  7D 89 03 A6 */	mtctr r12
/* 80AB665C  4E 80 04 21 */	bctrl 
lbl_80AB6660:
/* 80AB6660  38 60 00 01 */	li r3, 1
/* 80AB6664  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AB6668  7C 08 03 A6 */	mtlr r0
/* 80AB666C  38 21 00 10 */	addi r1, r1, 0x10
/* 80AB6670  4E 80 00 20 */	blr 
