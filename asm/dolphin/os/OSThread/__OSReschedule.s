lbl_80341220:
/* 80341220  7C 08 02 A6 */	mflr r0
/* 80341224  90 01 00 04 */	stw r0, 4(r1)
/* 80341228  94 21 FF F8 */	stwu r1, -8(r1)
/* 8034122C  80 0D 91 44 */	lwz r0, RunQueueHint(r13)
/* 80341230  2C 00 00 00 */	cmpwi r0, 0
/* 80341234  41 82 00 0C */	beq lbl_80341240
/* 80341238  38 60 00 00 */	li r3, 0
/* 8034123C  4B FF FD BD */	bl SelectThread
lbl_80341240:
/* 80341240  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80341244  38 21 00 08 */	addi r1, r1, 8
/* 80341248  7C 08 03 A6 */	mtlr r0
/* 8034124C  4E 80 00 20 */	blr 
