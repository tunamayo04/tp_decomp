lbl_802941F0:
/* 802941F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802941F4  7C 08 02 A6 */	mflr r0
/* 802941F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802941FC  7C 83 23 78 */	mr r3, r4
/* 80294200  80 85 00 00 */	lwz r4, 0(r5)
/* 80294204  4B FF D9 B5 */	bl closeChild__8JASTrackFUl
/* 80294208  38 60 00 00 */	li r3, 0
/* 8029420C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80294210  7C 08 03 A6 */	mtlr r0
/* 80294214  38 21 00 10 */	addi r1, r1, 0x10
/* 80294218  4E 80 00 20 */	blr 
