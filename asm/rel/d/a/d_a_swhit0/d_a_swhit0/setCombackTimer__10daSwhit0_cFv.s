lbl_80486704:
/* 80486704  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80486708  7C 08 02 A6 */	mflr r0
/* 8048670C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80486710  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80486714  7C 7F 1B 78 */	mr r31, r3
/* 80486718  4B FF F9 31 */	bl getType__10daSwhit0_cFv
/* 8048671C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80486720  41 82 00 18 */	beq lbl_80486738
/* 80486724  7F E3 FB 78 */	mr r3, r31
/* 80486728  4B FF F9 21 */	bl getType__10daSwhit0_cFv
/* 8048672C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80486730  28 00 00 03 */	cmplwi r0, 3
/* 80486734  40 82 00 10 */	bne lbl_80486744
lbl_80486738:
/* 80486738  38 00 00 00 */	li r0, 0
/* 8048673C  B0 1F 07 50 */	sth r0, 0x750(r31)
/* 80486740  48 00 00 34 */	b lbl_80486774
lbl_80486744:
/* 80486744  7F E3 FB 78 */	mr r3, r31
/* 80486748  4B FF F8 E5 */	bl getTimer__10daSwhit0_cFv
/* 8048674C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80486750  41 82 00 1C */	beq lbl_8048676C
/* 80486754  7F E3 FB 78 */	mr r3, r31
/* 80486758  4B FF F8 D5 */	bl getTimer__10daSwhit0_cFv
/* 8048675C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80486760  1C 00 00 0F */	mulli r0, r0, 0xf
/* 80486764  B0 1F 07 50 */	sth r0, 0x750(r31)
/* 80486768  48 00 00 0C */	b lbl_80486774
lbl_8048676C:
/* 8048676C  38 00 00 00 */	li r0, 0
/* 80486770  B0 1F 07 50 */	sth r0, 0x750(r31)
lbl_80486774:
/* 80486774  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80486778  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8048677C  7C 08 03 A6 */	mtlr r0
/* 80486780  38 21 00 10 */	addi r1, r1, 0x10
/* 80486784  4E 80 00 20 */	blr 
