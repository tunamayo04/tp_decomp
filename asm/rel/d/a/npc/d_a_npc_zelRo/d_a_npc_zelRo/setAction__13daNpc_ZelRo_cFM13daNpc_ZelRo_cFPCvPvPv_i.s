lbl_80B735D8:
/* 80B735D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B735DC  7C 08 02 A6 */	mflr r0
/* 80B735E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B735E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B735E8  93 C1 00 08 */	stw r30, 8(r1)
/* 80B735EC  7C 7E 1B 78 */	mr r30, r3
/* 80B735F0  7C 9F 23 78 */	mr r31, r4
/* 80B735F4  38 00 00 03 */	li r0, 3
/* 80B735F8  B0 03 0E 22 */	sth r0, 0xe22(r3)
/* 80B735FC  38 7E 0F 90 */	addi r3, r30, 0xf90
/* 80B73600  4B 7E EA 18 */	b __ptmf_test
/* 80B73604  2C 03 00 00 */	cmpwi r3, 0
/* 80B73608  41 82 00 18 */	beq lbl_80B73620
/* 80B7360C  7F C3 F3 78 */	mr r3, r30
/* 80B73610  38 80 00 00 */	li r4, 0
/* 80B73614  39 9E 0F 90 */	addi r12, r30, 0xf90
/* 80B73618  4B 7E EA 6C */	b __ptmf_scall
/* 80B7361C  60 00 00 00 */	nop 
lbl_80B73620:
/* 80B73620  38 00 00 00 */	li r0, 0
/* 80B73624  B0 1E 0E 22 */	sth r0, 0xe22(r30)
/* 80B73628  80 7F 00 00 */	lwz r3, 0(r31)
/* 80B7362C  80 1F 00 04 */	lwz r0, 4(r31)
/* 80B73630  90 7E 0F 90 */	stw r3, 0xf90(r30)
/* 80B73634  90 1E 0F 94 */	stw r0, 0xf94(r30)
/* 80B73638  80 1F 00 08 */	lwz r0, 8(r31)
/* 80B7363C  90 1E 0F 98 */	stw r0, 0xf98(r30)
/* 80B73640  38 7E 0F 90 */	addi r3, r30, 0xf90
/* 80B73644  4B 7E E9 D4 */	b __ptmf_test
/* 80B73648  2C 03 00 00 */	cmpwi r3, 0
/* 80B7364C  41 82 00 18 */	beq lbl_80B73664
/* 80B73650  7F C3 F3 78 */	mr r3, r30
/* 80B73654  38 80 00 00 */	li r4, 0
/* 80B73658  39 9E 0F 90 */	addi r12, r30, 0xf90
/* 80B7365C  4B 7E EA 28 */	b __ptmf_scall
/* 80B73660  60 00 00 00 */	nop 
lbl_80B73664:
/* 80B73664  38 60 00 01 */	li r3, 1
/* 80B73668  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B7366C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80B73670  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B73674  7C 08 03 A6 */	mtlr r0
/* 80B73678  38 21 00 10 */	addi r1, r1, 0x10
/* 80B7367C  4E 80 00 20 */	blr 
