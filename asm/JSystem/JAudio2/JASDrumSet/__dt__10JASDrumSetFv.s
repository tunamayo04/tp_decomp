lbl_80298314:
/* 80298314  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80298318  7C 08 02 A6 */	mflr r0
/* 8029831C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80298320  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80298324  7C 7F 1B 79 */	or. r31, r3, r3
/* 80298328  41 82 00 30 */	beq lbl_80298358
/* 8029832C  3C 60 80 3C */	lis r3, __vt__10JASDrumSet@ha
/* 80298330  38 03 77 10 */	addi r0, r3, __vt__10JASDrumSet@l
/* 80298334  90 1F 00 00 */	stw r0, 0(r31)
/* 80298338  41 82 00 10 */	beq lbl_80298348
/* 8029833C  3C 60 80 3C */	lis r3, __vt__7JASInst@ha
/* 80298340  38 03 76 FC */	addi r0, r3, __vt__7JASInst@l
/* 80298344  90 1F 00 00 */	stw r0, 0(r31)
lbl_80298348:
/* 80298348  7C 80 07 35 */	extsh. r0, r4
/* 8029834C  40 81 00 0C */	ble lbl_80298358
/* 80298350  7F E3 FB 78 */	mr r3, r31
/* 80298354  48 03 69 E9 */	bl __dl__FPv
lbl_80298358:
/* 80298358  7F E3 FB 78 */	mr r3, r31
/* 8029835C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80298360  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80298364  7C 08 03 A6 */	mtlr r0
/* 80298368  38 21 00 10 */	addi r1, r1, 0x10
/* 8029836C  4E 80 00 20 */	blr 
