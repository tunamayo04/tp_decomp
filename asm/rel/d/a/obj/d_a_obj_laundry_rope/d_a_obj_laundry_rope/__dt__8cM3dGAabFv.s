lbl_80C53210:
/* 80C53210  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C53214  7C 08 02 A6 */	mflr r0
/* 80C53218  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C5321C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C53220  7C 7F 1B 79 */	or. r31, r3, r3
/* 80C53224  41 82 00 1C */	beq lbl_80C53240
/* 80C53228  3C A0 80 C5 */	lis r5, __vt__8cM3dGAab@ha
/* 80C5322C  38 05 34 38 */	addi r0, r5, __vt__8cM3dGAab@l
/* 80C53230  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80C53234  7C 80 07 35 */	extsh. r0, r4
/* 80C53238  40 81 00 08 */	ble lbl_80C53240
/* 80C5323C  4B 67 BB 00 */	b __dl__FPv
lbl_80C53240:
/* 80C53240  7F E3 FB 78 */	mr r3, r31
/* 80C53244  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C53248  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C5324C  7C 08 03 A6 */	mtlr r0
/* 80C53250  38 21 00 10 */	addi r1, r1, 0x10
/* 80C53254  4E 80 00 20 */	blr 
