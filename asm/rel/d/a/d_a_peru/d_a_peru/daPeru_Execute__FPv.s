lbl_80D4AB48:
/* 80D4AB48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D4AB4C  7C 08 02 A6 */	mflr r0
/* 80D4AB50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D4AB54  4B FF CC 31 */	bl Execute__8daPeru_cFv
/* 80D4AB58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D4AB5C  7C 08 03 A6 */	mtlr r0
/* 80D4AB60  38 21 00 10 */	addi r1, r1, 0x10
/* 80D4AB64  4E 80 00 20 */	blr 
