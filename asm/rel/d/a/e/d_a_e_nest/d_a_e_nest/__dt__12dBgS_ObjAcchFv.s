lbl_805045C4:
/* 805045C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805045C8  7C 08 02 A6 */	mflr r0
/* 805045CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 805045D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805045D4  93 C1 00 08 */	stw r30, 8(r1)
/* 805045D8  7C 7E 1B 79 */	or. r30, r3, r3
/* 805045DC  7C 9F 23 78 */	mr r31, r4
/* 805045E0  41 82 00 38 */	beq lbl_80504618
/* 805045E4  3C 80 80 50 */	lis r4, __vt__12dBgS_ObjAcch@ha
/* 805045E8  38 84 49 18 */	addi r4, r4, __vt__12dBgS_ObjAcch@l
/* 805045EC  90 9E 00 10 */	stw r4, 0x10(r30)
/* 805045F0  38 04 00 0C */	addi r0, r4, 0xc
/* 805045F4  90 1E 00 14 */	stw r0, 0x14(r30)
/* 805045F8  38 04 00 18 */	addi r0, r4, 0x18
/* 805045FC  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80504600  38 80 00 00 */	li r4, 0
/* 80504604  4B B7 19 90 */	b __dt__9dBgS_AcchFv
/* 80504608  7F E0 07 35 */	extsh. r0, r31
/* 8050460C  40 81 00 0C */	ble lbl_80504618
/* 80504610  7F C3 F3 78 */	mr r3, r30
/* 80504614  4B DC A7 28 */	b __dl__FPv
lbl_80504618:
/* 80504618  7F C3 F3 78 */	mr r3, r30
/* 8050461C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80504620  83 C1 00 08 */	lwz r30, 8(r1)
/* 80504624  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80504628  7C 08 03 A6 */	mtlr r0
/* 8050462C  38 21 00 10 */	addi r1, r1, 0x10
/* 80504630  4E 80 00 20 */	blr 
