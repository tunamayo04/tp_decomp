lbl_80574858:
/* 80574858  3C 80 80 3A */	lis r4, __ptmf_null@ha
/* 8057485C  38 A4 21 80 */	addi r5, r4, __ptmf_null@l
/* 80574860  80 85 00 00 */	lwz r4, 0(r5)
/* 80574864  80 05 00 04 */	lwz r0, 4(r5)
/* 80574868  90 83 0F 84 */	stw r4, 0xf84(r3)
/* 8057486C  90 03 0F 88 */	stw r0, 0xf88(r3)
/* 80574870  80 05 00 08 */	lwz r0, 8(r5)
/* 80574874  90 03 0F 8C */	stw r0, 0xf8c(r3)
/* 80574878  88 03 0F 80 */	lbz r0, 0xf80(r3)
/* 8057487C  2C 00 00 02 */	cmpwi r0, 2
/* 80574880  3C 80 80 57 */	lis r4, lit_4771@ha
/* 80574884  38 A4 67 F4 */	addi r5, r4, lit_4771@l
/* 80574888  80 85 00 00 */	lwz r4, 0(r5)
/* 8057488C  80 05 00 04 */	lwz r0, 4(r5)
/* 80574890  90 83 0F 84 */	stw r4, 0xf84(r3)
/* 80574894  90 03 0F 88 */	stw r0, 0xf88(r3)
/* 80574898  80 05 00 08 */	lwz r0, 8(r5)
/* 8057489C  90 03 0F 8C */	stw r0, 0xf8c(r3)
/* 805748A0  38 60 00 01 */	li r3, 1
/* 805748A4  4E 80 00 20 */	blr 
