lbl_80C81AFC:
/* 80C81AFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C81B00  7C 08 02 A6 */	mflr r0
/* 80C81B04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C81B08  4B 3F 6D D4 */	b MoveBGDelete__16dBgS_MoveBgActorFv
/* 80C81B0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C81B10  7C 08 03 A6 */	mtlr r0
/* 80C81B14  38 21 00 10 */	addi r1, r1, 0x10
/* 80C81B18  4E 80 00 20 */	blr 
