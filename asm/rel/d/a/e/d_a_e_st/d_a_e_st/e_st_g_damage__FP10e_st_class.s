lbl_807A3240:
/* 807A3240  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 807A3244  7C 08 02 A6 */	mflr r0
/* 807A3248  90 01 00 24 */	stw r0, 0x24(r1)
/* 807A324C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 807A3250  93 C1 00 18 */	stw r30, 0x18(r1)
/* 807A3254  7C 7F 1B 78 */	mr r31, r3
/* 807A3258  3C 80 80 7A */	lis r4, lit_3903@ha
/* 807A325C  3B C4 68 24 */	addi r30, r4, lit_3903@l
/* 807A3260  A8 03 06 80 */	lha r0, 0x680(r3)
/* 807A3264  2C 00 00 01 */	cmpwi r0, 1
/* 807A3268  41 82 00 8C */	beq lbl_807A32F4
/* 807A326C  40 80 00 C8 */	bge lbl_807A3334
/* 807A3270  2C 00 00 00 */	cmpwi r0, 0
/* 807A3274  40 80 00 08 */	bge lbl_807A327C
/* 807A3278  48 00 00 BC */	b lbl_807A3334
lbl_807A327C:
/* 807A327C  88 1F 07 DC */	lbz r0, 0x7dc(r31)
/* 807A3280  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 807A3284  41 82 00 1C */	beq lbl_807A32A0
/* 807A3288  38 80 00 19 */	li r4, 0x19
/* 807A328C  C0 3E 00 60 */	lfs f1, 0x60(r30)
/* 807A3290  38 A0 00 00 */	li r5, 0
/* 807A3294  C0 5E 00 08 */	lfs f2, 8(r30)
/* 807A3298  4B FF AB B5 */	bl anm_init__FP10e_st_classifUcf
/* 807A329C  48 00 00 18 */	b lbl_807A32B4
lbl_807A32A0:
/* 807A32A0  38 80 00 1A */	li r4, 0x1a
/* 807A32A4  C0 3E 00 60 */	lfs f1, 0x60(r30)
/* 807A32A8  38 A0 00 00 */	li r5, 0
/* 807A32AC  C0 5E 00 08 */	lfs f2, 8(r30)
/* 807A32B0  4B FF AB 9D */	bl anm_init__FP10e_st_classifUcf
lbl_807A32B4:
/* 807A32B4  3C 60 00 07 */	lis r3, 0x0007 /* 0x0007016A@ha */
/* 807A32B8  38 03 01 6A */	addi r0, r3, 0x016A /* 0x0007016A@l */
/* 807A32BC  90 01 00 08 */	stw r0, 8(r1)
/* 807A32C0  38 7F 05 D0 */	addi r3, r31, 0x5d0
/* 807A32C4  38 81 00 08 */	addi r4, r1, 8
/* 807A32C8  38 A0 FF FF */	li r5, -1
/* 807A32CC  81 9F 05 D0 */	lwz r12, 0x5d0(r31)
/* 807A32D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 807A32D4  7D 89 03 A6 */	mtctr r12
/* 807A32D8  4E 80 04 21 */	bctrl 
/* 807A32DC  88 7F 07 DC */	lbz r3, 0x7dc(r31)
/* 807A32E0  38 03 00 01 */	addi r0, r3, 1
/* 807A32E4  98 1F 07 DC */	stb r0, 0x7dc(r31)
/* 807A32E8  38 00 00 01 */	li r0, 1
/* 807A32EC  B0 1F 06 80 */	sth r0, 0x680(r31)
/* 807A32F0  48 00 00 44 */	b lbl_807A3334
lbl_807A32F4:
/* 807A32F4  80 7F 05 CC */	lwz r3, 0x5cc(r31)
/* 807A32F8  38 80 00 01 */	li r4, 1
/* 807A32FC  88 03 00 11 */	lbz r0, 0x11(r3)
/* 807A3300  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 807A3304  40 82 00 18 */	bne lbl_807A331C
/* 807A3308  C0 3E 00 04 */	lfs f1, 4(r30)
/* 807A330C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 807A3310  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 807A3314  41 82 00 08 */	beq lbl_807A331C
/* 807A3318  38 80 00 00 */	li r4, 0
lbl_807A331C:
/* 807A331C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 807A3320  41 82 00 14 */	beq lbl_807A3334
/* 807A3324  38 00 00 33 */	li r0, 0x33
/* 807A3328  B0 1F 06 7E */	sth r0, 0x67e(r31)
/* 807A332C  38 00 00 00 */	li r0, 0
/* 807A3330  B0 1F 06 80 */	sth r0, 0x680(r31)
lbl_807A3334:
/* 807A3334  38 7F 05 2C */	addi r3, r31, 0x52c
/* 807A3338  C0 3E 00 04 */	lfs f1, 4(r30)
/* 807A333C  C0 5E 00 08 */	lfs f2, 8(r30)
/* 807A3340  C0 7E 00 60 */	lfs f3, 0x60(r30)
/* 807A3344  4B AC C6 F8 */	b cLib_addCalc2__FPffff
/* 807A3348  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 807A334C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 807A3350  80 01 00 24 */	lwz r0, 0x24(r1)
/* 807A3354  7C 08 03 A6 */	mtlr r0
/* 807A3358  38 21 00 20 */	addi r1, r1, 0x20
/* 807A335C  4E 80 00 20 */	blr 
