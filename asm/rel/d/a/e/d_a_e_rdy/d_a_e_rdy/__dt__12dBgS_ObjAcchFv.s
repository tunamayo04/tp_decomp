lbl_8077971C:
/* 8077971C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80779720  7C 08 02 A6 */	mflr r0
/* 80779724  90 01 00 14 */	stw r0, 0x14(r1)
/* 80779728  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8077972C  93 C1 00 08 */	stw r30, 8(r1)
/* 80779730  7C 7E 1B 79 */	or. r30, r3, r3
/* 80779734  7C 9F 23 78 */	mr r31, r4
/* 80779738  41 82 00 38 */	beq lbl_80779770
/* 8077973C  3C 80 80 78 */	lis r4, __vt__12dBgS_ObjAcch@ha
/* 80779740  38 84 A7 C8 */	addi r4, r4, __vt__12dBgS_ObjAcch@l
/* 80779744  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80779748  38 04 00 0C */	addi r0, r4, 0xc
/* 8077974C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80779750  38 04 00 18 */	addi r0, r4, 0x18
/* 80779754  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80779758  38 80 00 00 */	li r4, 0
/* 8077975C  4B 8F C8 38 */	b __dt__9dBgS_AcchFv
/* 80779760  7F E0 07 35 */	extsh. r0, r31
/* 80779764  40 81 00 0C */	ble lbl_80779770
/* 80779768  7F C3 F3 78 */	mr r3, r30
/* 8077976C  4B B5 55 D0 */	b __dl__FPv
lbl_80779770:
/* 80779770  7F C3 F3 78 */	mr r3, r30
/* 80779774  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80779778  83 C1 00 08 */	lwz r30, 8(r1)
/* 8077977C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80779780  7C 08 03 A6 */	mtlr r0
/* 80779784  38 21 00 10 */	addi r1, r1, 0x10
/* 80779788  4E 80 00 20 */	blr 
