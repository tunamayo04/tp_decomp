lbl_80300660:
/* 80300660  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80300664  7C 08 02 A6 */	mflr r0
/* 80300668  90 01 00 94 */	stw r0, 0x94(r1)
/* 8030066C  39 61 00 90 */	addi r11, r1, 0x90
/* 80300670  48 06 1B 6D */	bl _savegpr_29
/* 80300674  7C 7D 1B 78 */	mr r29, r3
/* 80300678  7C 9E 23 78 */	mr r30, r4
/* 8030067C  40 86 00 24 */	bne cr1, lbl_803006A0
/* 80300680  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 80300684  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 80300688  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 8030068C  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 80300690  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 80300694  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 80300698  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 8030069C  D9 01 00 60 */	stfd f8, 0x60(r1)
lbl_803006A0:
/* 803006A0  90 61 00 08 */	stw r3, 8(r1)
/* 803006A4  90 81 00 0C */	stw r4, 0xc(r1)
/* 803006A8  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803006AC  90 C1 00 14 */	stw r6, 0x14(r1)
/* 803006B0  90 E1 00 18 */	stw r7, 0x18(r1)
/* 803006B4  91 01 00 1C */	stw r8, 0x1c(r1)
/* 803006B8  91 21 00 20 */	stw r9, 0x20(r1)
/* 803006BC  91 41 00 24 */	stw r10, 0x24(r1)
/* 803006C0  3C 00 02 00 */	lis r0, 0x200
/* 803006C4  90 01 00 68 */	stw r0, 0x68(r1)
/* 803006C8  38 01 00 98 */	addi r0, r1, 0x98
/* 803006CC  90 01 00 6C */	stw r0, 0x6c(r1)
/* 803006D0  38 01 00 08 */	addi r0, r1, 8
/* 803006D4  90 01 00 70 */	stw r0, 0x70(r1)
/* 803006D8  80 7D 01 24 */	lwz r3, 0x124(r29)
/* 803006DC  4B FC E6 85 */	bl __dla__FPv
/* 803006E0  7F C3 F3 78 */	mr r3, r30
/* 803006E4  48 06 85 01 */	bl strlen
/* 803006E8  7C 7F 1B 78 */	mr r31, r3
/* 803006EC  28 1F FF FF */	cmplwi r31, 0xffff
/* 803006F0  41 80 00 0C */	blt lbl_803006FC
/* 803006F4  3C 60 00 01 */	lis r3, 0x0001 /* 0x0000FFFE@ha */
/* 803006F8  3B E3 FF FE */	addi r31, r3, 0xFFFE /* 0x0000FFFE@l */
lbl_803006FC:
/* 803006FC  38 00 00 00 */	li r0, 0
/* 80300700  B0 1D 01 32 */	sth r0, 0x132(r29)
/* 80300704  38 7F 00 01 */	addi r3, r31, 1
/* 80300708  4B FC E5 BD */	bl __nwa__FUl
/* 8030070C  90 7D 01 24 */	stw r3, 0x124(r29)
/* 80300710  80 1D 01 24 */	lwz r0, 0x124(r29)
/* 80300714  28 00 00 00 */	cmplwi r0, 0
/* 80300718  41 82 00 18 */	beq lbl_80300730
/* 8030071C  38 1F 00 01 */	addi r0, r31, 1
/* 80300720  B0 1D 01 32 */	sth r0, 0x132(r29)
/* 80300724  80 7D 01 24 */	lwz r3, 0x124(r29)
/* 80300728  7F C4 F3 78 */	mr r4, r30
/* 8030072C  48 06 84 01 */	bl strcpy
lbl_80300730:
/* 80300730  7F E3 FB 78 */	mr r3, r31
/* 80300734  39 61 00 90 */	addi r11, r1, 0x90
/* 80300738  48 06 1A F1 */	bl _restgpr_29
/* 8030073C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80300740  7C 08 03 A6 */	mtlr r0
/* 80300744  38 21 00 90 */	addi r1, r1, 0x90
/* 80300748  4E 80 00 20 */	blr 
