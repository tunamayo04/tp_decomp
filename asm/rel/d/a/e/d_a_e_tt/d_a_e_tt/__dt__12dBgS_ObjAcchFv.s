lbl_807C18E8:
/* 807C18E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807C18EC  7C 08 02 A6 */	mflr r0
/* 807C18F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 807C18F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807C18F8  93 C1 00 08 */	stw r30, 8(r1)
/* 807C18FC  7C 7E 1B 79 */	or. r30, r3, r3
/* 807C1900  7C 9F 23 78 */	mr r31, r4
/* 807C1904  41 82 00 38 */	beq lbl_807C193C
/* 807C1908  3C 80 80 7C */	lis r4, __vt__12dBgS_ObjAcch@ha
/* 807C190C  38 84 23 38 */	addi r4, r4, __vt__12dBgS_ObjAcch@l
/* 807C1910  90 9E 00 10 */	stw r4, 0x10(r30)
/* 807C1914  38 04 00 0C */	addi r0, r4, 0xc
/* 807C1918  90 1E 00 14 */	stw r0, 0x14(r30)
/* 807C191C  38 04 00 18 */	addi r0, r4, 0x18
/* 807C1920  90 1E 00 24 */	stw r0, 0x24(r30)
/* 807C1924  38 80 00 00 */	li r4, 0
/* 807C1928  4B 8B 46 6C */	b __dt__9dBgS_AcchFv
/* 807C192C  7F E0 07 35 */	extsh. r0, r31
/* 807C1930  40 81 00 0C */	ble lbl_807C193C
/* 807C1934  7F C3 F3 78 */	mr r3, r30
/* 807C1938  4B B0 D4 04 */	b __dl__FPv
lbl_807C193C:
/* 807C193C  7F C3 F3 78 */	mr r3, r30
/* 807C1940  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807C1944  83 C1 00 08 */	lwz r30, 8(r1)
/* 807C1948  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807C194C  7C 08 03 A6 */	mtlr r0
/* 807C1950  38 21 00 10 */	addi r1, r1, 0x10
/* 807C1954  4E 80 00 20 */	blr 
