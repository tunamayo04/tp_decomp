lbl_8001A5DC:
/* 8001A5DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001A5E0  7C 08 02 A6 */	mflr r0
/* 8001A5E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001A5E8  38 63 04 DE */	addi r3, r3, 0x4de
/* 8001A5EC  48 25 65 A5 */	bl cLib_chaseAngleS__FPsss
/* 8001A5F0  30 03 FF FF */	addic r0, r3, -1
/* 8001A5F4  7C 00 19 10 */	subfe r0, r0, r3
/* 8001A5F8  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8001A5FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001A600  7C 08 03 A6 */	mtlr r0
/* 8001A604  38 21 00 10 */	addi r1, r1, 0x10
/* 8001A608  4E 80 00 20 */	blr 
