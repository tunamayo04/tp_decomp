lbl_800347C4:
/* 800347C4  7C 80 2E 70 */	srawi r0, r4, 5
/* 800347C8  54 07 10 3A */	slwi r7, r0, 2
/* 800347CC  7C C3 38 2E */	lwzx r6, r3, r7
/* 800347D0  38 A0 00 01 */	li r5, 1
/* 800347D4  54 80 06 FE */	clrlwi r0, r4, 0x1b
/* 800347D8  7C A0 00 30 */	slw r0, r5, r0
/* 800347DC  7C C0 00 78 */	andc r0, r6, r0
/* 800347E0  7C 03 39 2E */	stwx r0, r3, r7
/* 800347E4  4E 80 00 20 */	blr 
