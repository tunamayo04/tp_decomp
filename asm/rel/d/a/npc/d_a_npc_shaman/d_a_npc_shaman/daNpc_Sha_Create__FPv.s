lbl_80AE5420:
/* 80AE5420  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AE5424  7C 08 02 A6 */	mflr r0
/* 80AE5428  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AE542C  4B FF DA C1 */	bl create__11daNpc_Sha_cFv
/* 80AE5430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AE5434  7C 08 03 A6 */	mtlr r0
/* 80AE5438  38 21 00 10 */	addi r1, r1, 0x10
/* 80AE543C  4E 80 00 20 */	blr 
