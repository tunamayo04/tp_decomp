lbl_80D5771C:
/* 80D5771C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D57720  7C 08 02 A6 */	mflr r0
/* 80D57724  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D57728  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D5772C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80D57730  41 82 00 1C */	beq lbl_80D5774C
/* 80D57734  3C A0 80 D6 */	lis r5, __vt__8cM3dGAab@ha
/* 80D57738  38 05 87 48 */	addi r0, r5, __vt__8cM3dGAab@l
/* 80D5773C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80D57740  7C 80 07 35 */	extsh. r0, r4
/* 80D57744  40 81 00 08 */	ble lbl_80D5774C
/* 80D57748  4B 57 75 F4 */	b __dl__FPv
lbl_80D5774C:
/* 80D5774C  7F E3 FB 78 */	mr r3, r31
/* 80D57750  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D57754  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D57758  7C 08 03 A6 */	mtlr r0
/* 80D5775C  38 21 00 10 */	addi r1, r1, 0x10
/* 80D57760  4E 80 00 20 */	blr 
