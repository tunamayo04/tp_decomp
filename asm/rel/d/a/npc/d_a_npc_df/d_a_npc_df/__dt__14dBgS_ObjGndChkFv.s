lbl_809A6800:
/* 809A6800  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809A6804  7C 08 02 A6 */	mflr r0
/* 809A6808  90 01 00 14 */	stw r0, 0x14(r1)
/* 809A680C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809A6810  93 C1 00 08 */	stw r30, 8(r1)
/* 809A6814  7C 7E 1B 79 */	or. r30, r3, r3
/* 809A6818  7C 9F 23 78 */	mr r31, r4
/* 809A681C  41 82 00 40 */	beq lbl_809A685C
/* 809A6820  3C 80 80 9A */	lis r4, __vt__14dBgS_ObjGndChk@ha
/* 809A6824  38 84 69 D4 */	addi r4, r4, __vt__14dBgS_ObjGndChk@l
/* 809A6828  90 9E 00 10 */	stw r4, 0x10(r30)
/* 809A682C  38 04 00 0C */	addi r0, r4, 0xc
/* 809A6830  90 1E 00 20 */	stw r0, 0x20(r30)
/* 809A6834  38 04 00 18 */	addi r0, r4, 0x18
/* 809A6838  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 809A683C  38 04 00 24 */	addi r0, r4, 0x24
/* 809A6840  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 809A6844  38 80 00 00 */	li r4, 0
/* 809A6848  4B 6D 0D A8 */	b __dt__11dBgS_GndChkFv
/* 809A684C  7F E0 07 35 */	extsh. r0, r31
/* 809A6850  40 81 00 0C */	ble lbl_809A685C
/* 809A6854  7F C3 F3 78 */	mr r3, r30
/* 809A6858  4B 92 84 E4 */	b __dl__FPv
lbl_809A685C:
/* 809A685C  7F C3 F3 78 */	mr r3, r30
/* 809A6860  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809A6864  83 C1 00 08 */	lwz r30, 8(r1)
/* 809A6868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809A686C  7C 08 03 A6 */	mtlr r0
/* 809A6870  38 21 00 10 */	addi r1, r1, 0x10
/* 809A6874  4E 80 00 20 */	blr 
