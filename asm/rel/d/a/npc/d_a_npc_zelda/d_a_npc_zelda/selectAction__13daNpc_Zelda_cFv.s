lbl_80B7677C:
/* 80B7677C  3C 80 80 3A */	lis r4, __ptmf_null@ha
/* 80B76780  38 A4 21 80 */	addi r5, r4, __ptmf_null@l
/* 80B76784  80 85 00 00 */	lwz r4, 0(r5)
/* 80B76788  80 05 00 04 */	lwz r0, 4(r5)
/* 80B7678C  90 83 0F 84 */	stw r4, 0xf84(r3)
/* 80B76790  90 03 0F 88 */	stw r0, 0xf88(r3)
/* 80B76794  80 05 00 08 */	lwz r0, 8(r5)
/* 80B76798  90 03 0F 8C */	stw r0, 0xf8c(r3)
/* 80B7679C  3C 80 80 B8 */	lis r4, lit_4865@ha
/* 80B767A0  38 A4 82 34 */	addi r5, r4, lit_4865@l
/* 80B767A4  80 85 00 00 */	lwz r4, 0(r5)
/* 80B767A8  80 05 00 04 */	lwz r0, 4(r5)
/* 80B767AC  90 83 0F 84 */	stw r4, 0xf84(r3)
/* 80B767B0  90 03 0F 88 */	stw r0, 0xf88(r3)
/* 80B767B4  80 05 00 08 */	lwz r0, 8(r5)
/* 80B767B8  90 03 0F 8C */	stw r0, 0xf8c(r3)
/* 80B767BC  38 60 00 01 */	li r3, 1
/* 80B767C0  4E 80 00 20 */	blr 
