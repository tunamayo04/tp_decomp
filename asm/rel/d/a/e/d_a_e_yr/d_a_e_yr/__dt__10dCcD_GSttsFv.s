lbl_80828014:
/* 80828014  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80828018  7C 08 02 A6 */	mflr r0
/* 8082801C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80828020  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80828024  7C 7F 1B 79 */	or. r31, r3, r3
/* 80828028  41 82 00 30 */	beq lbl_80828058
/* 8082802C  3C 60 80 83 */	lis r3, __vt__10dCcD_GStts@ha
/* 80828030  38 03 8D 38 */	addi r0, r3, __vt__10dCcD_GStts@l
/* 80828034  90 1F 00 00 */	stw r0, 0(r31)
/* 80828038  41 82 00 10 */	beq lbl_80828048
/* 8082803C  3C 60 80 83 */	lis r3, __vt__10cCcD_GStts@ha
/* 80828040  38 03 8D 2C */	addi r0, r3, __vt__10cCcD_GStts@l
/* 80828044  90 1F 00 00 */	stw r0, 0(r31)
lbl_80828048:
/* 80828048  7C 80 07 35 */	extsh. r0, r4
/* 8082804C  40 81 00 0C */	ble lbl_80828058
/* 80828050  7F E3 FB 78 */	mr r3, r31
/* 80828054  4B AA 6C E8 */	b __dl__FPv
lbl_80828058:
/* 80828058  7F E3 FB 78 */	mr r3, r31
/* 8082805C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80828060  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80828064  7C 08 03 A6 */	mtlr r0
/* 80828068  38 21 00 10 */	addi r1, r1, 0x10
/* 8082806C  4E 80 00 20 */	blr 
