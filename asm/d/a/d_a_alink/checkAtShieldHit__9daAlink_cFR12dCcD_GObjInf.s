lbl_800D1920:
/* 800D1920  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D1924  7C 08 02 A6 */	mflr r0
/* 800D1928  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D192C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800D1930  93 C1 00 08 */	stw r30, 8(r1)
/* 800D1934  7C 9E 23 78 */	mr r30, r4
/* 800D1938  3B E0 00 00 */	li r31, 0
/* 800D193C  7F C3 F3 78 */	mr r3, r30
/* 800D1940  4B FB 29 81 */	bl ChkAtHit__12dCcD_GObjInfFv
/* 800D1944  28 03 00 00 */	cmplwi r3, 0
/* 800D1948  41 82 00 14 */	beq lbl_800D195C
/* 800D194C  80 1E 00 5C */	lwz r0, 0x5c(r30)
/* 800D1950  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 800D1954  41 82 00 08 */	beq lbl_800D195C
/* 800D1958  3B E0 00 01 */	li r31, 1
lbl_800D195C:
/* 800D195C  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 800D1960  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800D1964  83 C1 00 08 */	lwz r30, 8(r1)
/* 800D1968  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D196C  7C 08 03 A6 */	mtlr r0
/* 800D1970  38 21 00 10 */	addi r1, r1, 0x10
/* 800D1974  4E 80 00 20 */	blr 
