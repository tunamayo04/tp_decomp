lbl_80A946A4:
/* 80A946A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A946A8  7C 08 02 A6 */	mflr r0
/* 80A946AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A946B0  38 63 0F BC */	addi r3, r3, 0xfbc
/* 80A946B4  4B 8C D9 94 */	b __ptmf_cmpr
/* 80A946B8  7C 60 00 34 */	cntlzw r0, r3
/* 80A946BC  54 03 D9 7E */	srwi r3, r0, 5
/* 80A946C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A946C4  7C 08 03 A6 */	mtlr r0
/* 80A946C8  38 21 00 10 */	addi r1, r1, 0x10
/* 80A946CC  4E 80 00 20 */	blr 
