lbl_80084358:
/* 80084358  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008435C  7C 08 02 A6 */	mflr r0
/* 80084360  90 01 00 14 */	stw r0, 0x14(r1)
/* 80084364  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80084368  7C 7F 1B 78 */	mr r31, r3
/* 8008436C  80 03 00 5C */	lwz r0, 0x5c(r3)
/* 80084370  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80084374  40 82 00 1C */	bne lbl_80084390
/* 80084378  38 7F 00 58 */	addi r3, r31, 0x58
/* 8008437C  4B FF F3 0D */	bl GetAc__22dCcD_GAtTgCoCommonBaseFv
/* 80084380  28 03 00 00 */	cmplwi r3, 0
/* 80084384  40 82 00 0C */	bne lbl_80084390
/* 80084388  38 60 00 00 */	li r3, 0
/* 8008438C  48 00 00 08 */	b lbl_80084394
lbl_80084390:
/* 80084390  80 7F 00 08 */	lwz r3, 8(r31)
lbl_80084394:
/* 80084394  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80084398  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008439C  7C 08 03 A6 */	mtlr r0
/* 800843A0  38 21 00 10 */	addi r1, r1, 0x10
/* 800843A4  4E 80 00 20 */	blr 
