lbl_806E2410:
/* 806E2410  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 806E2414  7C 08 02 A6 */	mflr r0
/* 806E2418  90 01 00 24 */	stw r0, 0x24(r1)
/* 806E241C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 806E2420  93 C1 00 18 */	stw r30, 0x18(r1)
/* 806E2424  7C 7F 1B 78 */	mr r31, r3
/* 806E2428  3C 60 80 6E */	lis r3, lit_3791@ha
/* 806E242C  3B C3 59 20 */	addi r30, r3, lit_3791@l
/* 806E2430  A8 1F 05 D6 */	lha r0, 0x5d6(r31)
/* 806E2434  2C 00 00 01 */	cmpwi r0, 1
/* 806E2438  41 82 00 68 */	beq lbl_806E24A0
/* 806E243C  40 80 01 14 */	bge lbl_806E2550
/* 806E2440  2C 00 00 00 */	cmpwi r0, 0
/* 806E2444  40 80 00 08 */	bge lbl_806E244C
/* 806E2448  48 00 01 08 */	b lbl_806E2550
lbl_806E244C:
/* 806E244C  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070240@ha */
/* 806E2450  38 03 02 40 */	addi r0, r3, 0x0240 /* 0x00070240@l */
/* 806E2454  90 01 00 10 */	stw r0, 0x10(r1)
/* 806E2458  38 7F 06 30 */	addi r3, r31, 0x630
/* 806E245C  38 81 00 10 */	addi r4, r1, 0x10
/* 806E2460  38 A0 00 00 */	li r5, 0
/* 806E2464  38 C0 FF FF */	li r6, -1
/* 806E2468  81 9F 06 30 */	lwz r12, 0x630(r31)
/* 806E246C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 806E2470  7D 89 03 A6 */	mtctr r12
/* 806E2474  4E 80 04 21 */	bctrl 
/* 806E2478  7F E3 FB 78 */	mr r3, r31
/* 806E247C  38 80 00 0D */	li r4, 0xd
/* 806E2480  38 A0 00 02 */	li r5, 2
/* 806E2484  C0 3E 00 E0 */	lfs f1, 0xe0(r30)
/* 806E2488  C0 5E 00 08 */	lfs f2, 8(r30)
/* 806E248C  4B FF EA 01 */	bl SetAnm__8daE_HM_cFiiff
/* 806E2490  A8 7F 05 D6 */	lha r3, 0x5d6(r31)
/* 806E2494  38 03 00 01 */	addi r0, r3, 1
/* 806E2498  B0 1F 05 D6 */	sth r0, 0x5d6(r31)
/* 806E249C  48 00 00 B4 */	b lbl_806E2550
lbl_806E24A0:
/* 806E24A0  80 7F 06 18 */	lwz r3, 0x618(r31)
/* 806E24A4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 806E24A8  C0 1E 00 04 */	lfs f0, 4(r30)
/* 806E24AC  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 806E24B0  40 82 00 30 */	bne lbl_806E24E0
/* 806E24B4  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070240@ha */
/* 806E24B8  38 03 02 40 */	addi r0, r3, 0x0240 /* 0x00070240@l */
/* 806E24BC  90 01 00 0C */	stw r0, 0xc(r1)
/* 806E24C0  38 7F 06 30 */	addi r3, r31, 0x630
/* 806E24C4  38 81 00 0C */	addi r4, r1, 0xc
/* 806E24C8  38 A0 00 00 */	li r5, 0
/* 806E24CC  38 C0 FF FF */	li r6, -1
/* 806E24D0  81 9F 06 30 */	lwz r12, 0x630(r31)
/* 806E24D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 806E24D8  7D 89 03 A6 */	mtctr r12
/* 806E24DC  4E 80 04 21 */	bctrl 
lbl_806E24E0:
/* 806E24E0  7F E3 FB 78 */	mr r3, r31
/* 806E24E4  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 806E24E8  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 806E24EC  80 84 5D AC */	lwz r4, 0x5dac(r4)
/* 806E24F0  4B 93 84 74 */	b fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 806E24F4  3C 60 80 6E */	lis r3, l_HIO@ha
/* 806E24F8  38 63 5C 24 */	addi r3, r3, l_HIO@l
/* 806E24FC  C0 03 00 08 */	lfs f0, 8(r3)
/* 806E2500  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806E2504  40 80 00 4C */	bge lbl_806E2550
/* 806E2508  80 1F 09 40 */	lwz r0, 0x940(r31)
/* 806E250C  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 806E2510  90 1F 09 40 */	stw r0, 0x940(r31)
/* 806E2514  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070245@ha */
/* 806E2518  38 03 02 45 */	addi r0, r3, 0x0245 /* 0x00070245@l */
/* 806E251C  90 01 00 08 */	stw r0, 8(r1)
/* 806E2520  38 7F 06 30 */	addi r3, r31, 0x630
/* 806E2524  38 81 00 08 */	addi r4, r1, 8
/* 806E2528  38 A0 00 00 */	li r5, 0
/* 806E252C  38 C0 FF FF */	li r6, -1
/* 806E2530  81 9F 06 30 */	lwz r12, 0x630(r31)
/* 806E2534  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 806E2538  7D 89 03 A6 */	mtctr r12
/* 806E253C  4E 80 04 21 */	bctrl 
/* 806E2540  38 00 00 03 */	li r0, 3
/* 806E2544  B0 1F 05 D4 */	sth r0, 0x5d4(r31)
/* 806E2548  7F E3 FB 78 */	mr r3, r31
/* 806E254C  48 00 12 A9 */	bl MemberClear__8daE_HM_cFv
lbl_806E2550:
/* 806E2550  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 806E2554  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 806E2558  80 01 00 24 */	lwz r0, 0x24(r1)
/* 806E255C  7C 08 03 A6 */	mtlr r0
/* 806E2560  38 21 00 20 */	addi r1, r1, 0x20
/* 806E2564  4E 80 00 20 */	blr 
