lbl_80C274A4:
/* 80C274A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C274A8  7C 08 02 A6 */	mflr r0
/* 80C274AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C274B0  3C 80 80 C2 */	lis r4, l_arcName@ha
/* 80C274B4  38 84 75 84 */	addi r4, r4, l_arcName@l
/* 80C274B8  80 84 00 00 */	lwz r4, 0(r4)
/* 80C274BC  38 63 06 24 */	addi r3, r3, 0x624
/* 80C274C0  4B 40 5B 48 */	b dComIfG_resDelete__FP30request_of_phase_process_classPCc
/* 80C274C4  38 60 00 01 */	li r3, 1
/* 80C274C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C274CC  7C 08 03 A6 */	mtlr r0
/* 80C274D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80C274D4  4E 80 00 20 */	blr 
