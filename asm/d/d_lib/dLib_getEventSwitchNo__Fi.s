lbl_8003261C:
/* 8003261C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80032620  7C 08 02 A6 */	mflr r0
/* 80032624  90 01 00 14 */	stw r0, 0x14(r1)
/* 80032628  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8003262C  48 01 0E AD */	bl searchMapEventData__14dEvt_control_cFUc
/* 80032630  28 03 00 00 */	cmplwi r3, 0
/* 80032634  41 82 00 0C */	beq lbl_80032640
/* 80032638  88 63 00 1B */	lbz r3, 0x1b(r3)
/* 8003263C  48 00 00 08 */	b lbl_80032644
lbl_80032640:
/* 80032640  38 60 00 FF */	li r3, 0xff
lbl_80032644:
/* 80032644  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80032648  7C 08 03 A6 */	mtlr r0
/* 8003264C  38 21 00 10 */	addi r1, r1, 0x10
/* 80032650  4E 80 00 20 */	blr 
