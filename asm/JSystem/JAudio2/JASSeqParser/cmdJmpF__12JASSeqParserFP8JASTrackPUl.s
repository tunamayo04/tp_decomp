lbl_80294340:
/* 80294340  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80294344  7C 08 02 A6 */	mflr r0
/* 80294348  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029434C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80294350  93 C1 00 08 */	stw r30, 8(r1)
/* 80294354  7C 9E 23 78 */	mr r30, r4
/* 80294358  7C BF 2B 78 */	mr r31, r5
/* 8029435C  80 A5 00 00 */	lwz r5, 0(r5)
/* 80294360  4B FF F9 95 */	bl conditionCheck__12JASSeqParserFP8JASTrackQ212JASSeqParser15BranchCondition
/* 80294364  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80294368  41 82 00 14 */	beq lbl_8029437C
/* 8029436C  80 7E 00 00 */	lwz r3, 0(r30)
/* 80294370  80 1F 00 04 */	lwz r0, 4(r31)
/* 80294374  7C 03 02 14 */	add r0, r3, r0
/* 80294378  90 1E 00 04 */	stw r0, 4(r30)
lbl_8029437C:
/* 8029437C  38 60 00 00 */	li r3, 0
/* 80294380  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80294384  83 C1 00 08 */	lwz r30, 8(r1)
/* 80294388  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029438C  7C 08 03 A6 */	mtlr r0
/* 80294390  38 21 00 10 */	addi r1, r1, 0x10
/* 80294394  4E 80 00 20 */	blr 
