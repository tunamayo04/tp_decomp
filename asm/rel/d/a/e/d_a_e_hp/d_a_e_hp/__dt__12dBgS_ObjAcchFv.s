lbl_806E9BF0:
/* 806E9BF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806E9BF4  7C 08 02 A6 */	mflr r0
/* 806E9BF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 806E9BFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806E9C00  93 C1 00 08 */	stw r30, 8(r1)
/* 806E9C04  7C 7E 1B 79 */	or. r30, r3, r3
/* 806E9C08  7C 9F 23 78 */	mr r31, r4
/* 806E9C0C  41 82 00 38 */	beq lbl_806E9C44
/* 806E9C10  3C 80 80 6F */	lis r4, __vt__12dBgS_ObjAcch@ha
/* 806E9C14  38 84 A4 A0 */	addi r4, r4, __vt__12dBgS_ObjAcch@l
/* 806E9C18  90 9E 00 10 */	stw r4, 0x10(r30)
/* 806E9C1C  38 04 00 0C */	addi r0, r4, 0xc
/* 806E9C20  90 1E 00 14 */	stw r0, 0x14(r30)
/* 806E9C24  38 04 00 18 */	addi r0, r4, 0x18
/* 806E9C28  90 1E 00 24 */	stw r0, 0x24(r30)
/* 806E9C2C  38 80 00 00 */	li r4, 0
/* 806E9C30  4B 98 C3 64 */	b __dt__9dBgS_AcchFv
/* 806E9C34  7F E0 07 35 */	extsh. r0, r31
/* 806E9C38  40 81 00 0C */	ble lbl_806E9C44
/* 806E9C3C  7F C3 F3 78 */	mr r3, r30
/* 806E9C40  4B BE 50 FC */	b __dl__FPv
lbl_806E9C44:
/* 806E9C44  7F C3 F3 78 */	mr r3, r30
/* 806E9C48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806E9C4C  83 C1 00 08 */	lwz r30, 8(r1)
/* 806E9C50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806E9C54  7C 08 03 A6 */	mtlr r0
/* 806E9C58  38 21 00 10 */	addi r1, r1, 0x10
/* 806E9C5C  4E 80 00 20 */	blr 
