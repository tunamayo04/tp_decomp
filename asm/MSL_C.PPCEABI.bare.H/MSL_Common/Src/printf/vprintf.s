lbl_80366704:
/* 80366704  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80366708  7C 08 02 A6 */	mflr r0
/* 8036670C  3C A0 80 3D */	lis r5, __files@ha
/* 80366710  90 01 00 24 */	stw r0, 0x24(r1)
/* 80366714  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80366718  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8036671C  7C 9E 23 78 */	mr r30, r4
/* 80366720  38 85 29 B0 */	addi r4, r5, __files@l
/* 80366724  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80366728  3B E4 00 50 */	addi r31, r4, 0x50
/* 8036672C  7C 7D 1B 78 */	mr r29, r3
/* 80366730  38 80 FF FF */	li r4, -1
/* 80366734  7F E3 FB 78 */	mr r3, r31
/* 80366738  48 00 29 DD */	bl fwide
/* 8036673C  2C 03 00 00 */	cmpwi r3, 0
/* 80366740  41 80 00 0C */	blt lbl_8036674C
/* 80366744  38 60 FF FF */	li r3, -1
/* 80366748  48 00 00 38 */	b lbl_80366780
lbl_8036674C:
/* 8036674C  38 60 00 02 */	li r3, 2
/* 80366750  4B FF ED 19 */	bl __begin_critical_region
/* 80366754  3C 60 80 36 */	lis r3, __FileWrite@ha
/* 80366758  7F E4 FB 78 */	mr r4, r31
/* 8036675C  38 63 69 D0 */	addi r3, r3, __FileWrite@l
/* 80366760  7F A5 EB 78 */	mr r5, r29
/* 80366764  7F C6 F3 78 */	mr r6, r30
/* 80366768  48 00 02 C1 */	bl __pformatter
/* 8036676C  7C 60 1B 78 */	mr r0, r3
/* 80366770  38 60 00 02 */	li r3, 2
/* 80366774  7C 1F 03 78 */	mr r31, r0
/* 80366778  4B FF EC ED */	bl __end_critical_region
/* 8036677C  7F E3 FB 78 */	mr r3, r31
lbl_80366780:
/* 80366780  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80366784  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80366788  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8036678C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80366790  7C 08 03 A6 */	mtlr r0
/* 80366794  38 21 00 20 */	addi r1, r1, 0x20
/* 80366798  4E 80 00 20 */	blr 
