lbl_80294804:
/* 80294804  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80294808  7C 08 02 A6 */	mflr r0
/* 8029480C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294810  80 05 00 00 */	lwz r0, 0(r5)
/* 80294814  28 00 01 00 */	cmplwi r0, 0x100
/* 80294818  40 80 00 10 */	bge lbl_80294828
/* 8029481C  7C 83 23 78 */	mr r3, r4
/* 80294820  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 80294824  4B FF D5 99 */	bl setLatestKey__8JASTrackFUc
lbl_80294828:
/* 80294828  38 60 00 00 */	li r3, 0
/* 8029482C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80294830  7C 08 03 A6 */	mtlr r0
/* 80294834  38 21 00 10 */	addi r1, r1, 0x10
/* 80294838  4E 80 00 20 */	blr 
