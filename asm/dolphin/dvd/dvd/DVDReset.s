lbl_8034B138:
/* 8034B138  7C 08 02 A6 */	mflr r0
/* 8034B13C  90 01 00 04 */	stw r0, 4(r1)
/* 8034B140  94 21 FF F8 */	stwu r1, -8(r1)
/* 8034B144  4B FF D2 45 */	bl DVDLowReset
/* 8034B148  3C 60 CC 00 */	lis r3, 0xCC00 /* 0xCC006000@ha */
/* 8034B14C  38 00 00 2A */	li r0, 0x2a
/* 8034B150  90 03 60 00 */	stw r0, 0x6000(r3)
/* 8034B154  38 83 60 00 */	addi r4, r3, 0x6000
/* 8034B158  38 00 00 00 */	li r0, 0
/* 8034B15C  80 63 60 04 */	lwz r3, 0x6004(r3)
/* 8034B160  90 64 00 04 */	stw r3, 4(r4)
/* 8034B164  90 0D 92 30 */	stw r0, ResetRequired(r13)
/* 8034B168  90 0D 92 20 */	stw r0, ResumeFromHere(r13)
/* 8034B16C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8034B170  38 21 00 08 */	addi r1, r1, 8
/* 8034B174  7C 08 03 A6 */	mtlr r0
/* 8034B178  4E 80 00 20 */	blr 
