lbl_8009D88C:
/* 8009D88C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D890  7C 08 02 A6 */	mflr r0
/* 8009D894  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D898  7C 80 23 78 */	mr r0, r4
/* 8009D89C  7C A4 2B 78 */	mr r4, r5
/* 8009D8A0  7C 05 03 78 */	mr r5, r0
/* 8009D8A4  48 00 01 F5 */	bl tgHitCallback__9daAlink_cFP10fopAc_ac_cP12dCcD_GObjInfP12dCcD_GObjInf
/* 8009D8A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D8AC  7C 08 03 A6 */	mtlr r0
/* 8009D8B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D8B4  4E 80 00 20 */	blr 
