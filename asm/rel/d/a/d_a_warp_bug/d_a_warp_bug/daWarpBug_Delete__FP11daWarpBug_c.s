lbl_80D680E0:
/* 80D680E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D680E4  7C 08 02 A6 */	mflr r0
/* 80D680E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D680EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D680F0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80D680F4  41 82 00 24 */	beq lbl_80D68118
/* 80D680F8  38 7F 05 74 */	addi r3, r31, 0x574
/* 80D680FC  3C 80 80 D7 */	lis r4, l_arcName@ha
/* 80D68100  38 84 82 08 */	addi r4, r4, l_arcName@l
/* 80D68104  80 84 00 00 */	lwz r4, 0(r4)
/* 80D68108  4B 2C 4F 00 */	b dComIfG_resDelete__FP30request_of_phase_process_classPCc
/* 80D6810C  7F E3 FB 78 */	mr r3, r31
/* 80D68110  38 80 00 00 */	li r4, 0
/* 80D68114  4B 2B 0B 78 */	b __dt__10fopAc_ac_cFv
lbl_80D68118:
/* 80D68118  38 60 00 01 */	li r3, 1
/* 80D6811C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D68120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D68124  7C 08 03 A6 */	mtlr r0
/* 80D68128  38 21 00 10 */	addi r1, r1, 0x10
/* 80D6812C  4E 80 00 20 */	blr 
