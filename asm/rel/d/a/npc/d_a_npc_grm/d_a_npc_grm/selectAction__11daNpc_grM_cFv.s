lbl_809D5660:
/* 809D5660  3C 80 80 3A */	lis r4, __ptmf_null@ha
/* 809D5664  38 A4 21 80 */	addi r5, r4, __ptmf_null@l
/* 809D5668  80 85 00 00 */	lwz r4, 0(r5)
/* 809D566C  80 05 00 04 */	lwz r0, 4(r5)
/* 809D5670  90 83 10 C0 */	stw r4, 0x10c0(r3)
/* 809D5674  90 03 10 C4 */	stw r0, 0x10c4(r3)
/* 809D5678  80 05 00 08 */	lwz r0, 8(r5)
/* 809D567C  90 03 10 C8 */	stw r0, 0x10c8(r3)
/* 809D5680  3C 80 80 9D */	lis r4, lit_4920@ha
/* 809D5684  38 A4 71 18 */	addi r5, r4, lit_4920@l
/* 809D5688  80 85 00 00 */	lwz r4, 0(r5)
/* 809D568C  80 05 00 04 */	lwz r0, 4(r5)
/* 809D5690  90 83 10 C0 */	stw r4, 0x10c0(r3)
/* 809D5694  90 03 10 C4 */	stw r0, 0x10c4(r3)
/* 809D5698  80 05 00 08 */	lwz r0, 8(r5)
/* 809D569C  90 03 10 C8 */	stw r0, 0x10c8(r3)
/* 809D56A0  38 60 00 01 */	li r3, 1
/* 809D56A4  4E 80 00 20 */	blr 
