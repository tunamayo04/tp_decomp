lbl_80148338:
/* 80148338  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014833C  7C 08 02 A6 */	mflr r0
/* 80148340  90 01 00 14 */	stw r0, 0x14(r1)
/* 80148344  7C 80 23 78 */	mr r0, r4
/* 80148348  7C C7 33 78 */	mr r7, r6
/* 8014834C  38 85 00 58 */	addi r4, r5, 0x58
/* 80148350  7C 05 03 78 */	mr r5, r0
/* 80148354  38 C0 00 01 */	li r6, 1
/* 80148358  39 00 00 00 */	li r8, 0
/* 8014835C  39 20 FF FF */	li r9, -1
/* 80148360  38 63 06 44 */	addi r3, r3, 0x644
/* 80148364  4B EC 52 D9 */	bl init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss
/* 80148368  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014836C  7C 08 03 A6 */	mtlr r0
/* 80148370  38 21 00 10 */	addi r1, r1, 0x10
/* 80148374  4E 80 00 20 */	blr 
