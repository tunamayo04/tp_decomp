lbl_80267FD0:
/* 80267FD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80267FD4  7C 08 02 A6 */	mflr r0
/* 80267FD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80267FDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80267FE0  93 C1 00 08 */	stw r30, 8(r1)
/* 80267FE4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80267FE8  7C 9F 23 78 */	mr r31, r4
/* 80267FEC  41 82 00 40 */	beq lbl_8026802C
/* 80267FF0  3C 60 80 3C */	lis r3, __vt__13cBgS_ShdwDraw@ha
/* 80267FF4  38 03 3F C0 */	addi r0, r3, __vt__13cBgS_ShdwDraw@l
/* 80267FF8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80267FFC  34 1E 00 14 */	addic. r0, r30, 0x14
/* 80268000  41 82 00 10 */	beq lbl_80268010
/* 80268004  3C 60 80 3A */	lis r3, __vt__8cM3dGAab@ha
/* 80268008  38 03 72 18 */	addi r0, r3, __vt__8cM3dGAab@l
/* 8026800C  90 1E 00 2C */	stw r0, 0x2c(r30)
lbl_80268010:
/* 80268010  7F C3 F3 78 */	mr r3, r30
/* 80268014  38 80 00 00 */	li r4, 0
/* 80268018  4B FF FB 59 */	bl __dt__8cBgS_ChkFv
/* 8026801C  7F E0 07 35 */	extsh. r0, r31
/* 80268020  40 81 00 0C */	ble lbl_8026802C
/* 80268024  7F C3 F3 78 */	mr r3, r30
/* 80268028  48 06 6D 15 */	bl __dl__FPv
lbl_8026802C:
/* 8026802C  7F C3 F3 78 */	mr r3, r30
/* 80268030  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80268034  83 C1 00 08 */	lwz r30, 8(r1)
/* 80268038  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026803C  7C 08 03 A6 */	mtlr r0
/* 80268040  38 21 00 10 */	addi r1, r1, 0x10
/* 80268044  4E 80 00 20 */	blr 
