lbl_800276E0:
/* 800276E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800276E4  7C 08 02 A6 */	mflr r0
/* 800276E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800276EC  3C 60 80 38 */	lis r3, d_d_stage__stringBase0@ha
/* 800276F0  38 63 8A 50 */	addi r3, r3, d_d_stage__stringBase0@l
/* 800276F4  38 63 01 B8 */	addi r3, r3, 0x1b8
/* 800276F8  4C C6 31 82 */	crclr 6
/* 800276FC  4B FD F3 C1 */	bl OSReport
/* 80027700  38 60 00 00 */	li r3, 0
/* 80027704  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80027708  7C 08 03 A6 */	mtlr r0
/* 8002770C  38 21 00 10 */	addi r1, r1, 0x10
/* 80027710  4E 80 00 20 */	blr 
