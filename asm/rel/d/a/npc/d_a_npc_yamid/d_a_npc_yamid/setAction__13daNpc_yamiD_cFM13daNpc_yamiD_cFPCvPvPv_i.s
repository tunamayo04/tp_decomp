lbl_80B44580:
/* 80B44580  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B44584  7C 08 02 A6 */	mflr r0
/* 80B44588  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B4458C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B44590  93 C1 00 08 */	stw r30, 8(r1)
/* 80B44594  7C 7E 1B 78 */	mr r30, r3
/* 80B44598  7C 9F 23 78 */	mr r31, r4
/* 80B4459C  38 00 00 03 */	li r0, 3
/* 80B445A0  B0 03 0E 22 */	sth r0, 0xe22(r3)
/* 80B445A4  38 7E 0F 90 */	addi r3, r30, 0xf90
/* 80B445A8  4B 81 DA 70 */	b __ptmf_test
/* 80B445AC  2C 03 00 00 */	cmpwi r3, 0
/* 80B445B0  41 82 00 18 */	beq lbl_80B445C8
/* 80B445B4  7F C3 F3 78 */	mr r3, r30
/* 80B445B8  38 80 00 00 */	li r4, 0
/* 80B445BC  39 9E 0F 90 */	addi r12, r30, 0xf90
/* 80B445C0  4B 81 DA C4 */	b __ptmf_scall
/* 80B445C4  60 00 00 00 */	nop 
lbl_80B445C8:
/* 80B445C8  38 00 00 00 */	li r0, 0
/* 80B445CC  B0 1E 0E 22 */	sth r0, 0xe22(r30)
/* 80B445D0  80 7F 00 00 */	lwz r3, 0(r31)
/* 80B445D4  80 1F 00 04 */	lwz r0, 4(r31)
/* 80B445D8  90 7E 0F 90 */	stw r3, 0xf90(r30)
/* 80B445DC  90 1E 0F 94 */	stw r0, 0xf94(r30)
/* 80B445E0  80 1F 00 08 */	lwz r0, 8(r31)
/* 80B445E4  90 1E 0F 98 */	stw r0, 0xf98(r30)
/* 80B445E8  38 7E 0F 90 */	addi r3, r30, 0xf90
/* 80B445EC  4B 81 DA 2C */	b __ptmf_test
/* 80B445F0  2C 03 00 00 */	cmpwi r3, 0
/* 80B445F4  41 82 00 18 */	beq lbl_80B4460C
/* 80B445F8  7F C3 F3 78 */	mr r3, r30
/* 80B445FC  38 80 00 00 */	li r4, 0
/* 80B44600  39 9E 0F 90 */	addi r12, r30, 0xf90
/* 80B44604  4B 81 DA 80 */	b __ptmf_scall
/* 80B44608  60 00 00 00 */	nop 
lbl_80B4460C:
/* 80B4460C  38 60 00 01 */	li r3, 1
/* 80B44610  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B44614  83 C1 00 08 */	lwz r30, 8(r1)
/* 80B44618  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B4461C  7C 08 03 A6 */	mtlr r0
/* 80B44620  38 21 00 10 */	addi r1, r1, 0x10
/* 80B44624  4E 80 00 20 */	blr 
