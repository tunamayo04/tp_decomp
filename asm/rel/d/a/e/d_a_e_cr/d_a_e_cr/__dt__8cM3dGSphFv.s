lbl_806995E0:
/* 806995E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806995E4  7C 08 02 A6 */	mflr r0
/* 806995E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 806995EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806995F0  7C 7F 1B 79 */	or. r31, r3, r3
/* 806995F4  41 82 00 1C */	beq lbl_80699610
/* 806995F8  3C A0 80 6A */	lis r5, __vt__8cM3dGSph@ha
/* 806995FC  38 05 9E 38 */	addi r0, r5, __vt__8cM3dGSph@l
/* 80699600  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80699604  7C 80 07 35 */	extsh. r0, r4
/* 80699608  40 81 00 08 */	ble lbl_80699610
/* 8069960C  4B C3 57 30 */	b __dl__FPv
lbl_80699610:
/* 80699610  7F E3 FB 78 */	mr r3, r31
/* 80699614  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80699618  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8069961C  7C 08 03 A6 */	mtlr r0
/* 80699620  38 21 00 10 */	addi r1, r1, 0x10
/* 80699624  4E 80 00 20 */	blr 
