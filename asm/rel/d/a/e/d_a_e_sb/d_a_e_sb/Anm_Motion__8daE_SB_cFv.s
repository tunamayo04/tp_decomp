lbl_80783678:
/* 80783678  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8078367C  7C 08 02 A6 */	mflr r0
/* 80783680  90 01 00 24 */	stw r0, 0x24(r1)
/* 80783684  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80783688  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8078368C  7C 7E 1B 78 */	mr r30, r3
/* 80783690  3C 80 80 78 */	lis r4, lit_3658@ha
/* 80783694  3B E4 4D 68 */	addi r31, r4, lit_3658@l
/* 80783698  80 03 05 B0 */	lwz r0, 0x5b0(r3)
/* 8078369C  28 00 00 06 */	cmplwi r0, 6
/* 807836A0  41 81 01 9C */	bgt lbl_8078383C
/* 807836A4  3C 80 80 78 */	lis r4, lit_4468@ha
/* 807836A8  38 84 4E 6C */	addi r4, r4, lit_4468@l
/* 807836AC  54 00 10 3A */	slwi r0, r0, 2
/* 807836B0  7C 04 00 2E */	lwzx r0, r4, r0
/* 807836B4  7C 09 03 A6 */	mtctr r0
/* 807836B8  4E 80 04 20 */	bctr 
lbl_807836BC:
/* 807836BC  4B FF FD 49 */	bl Wait_Motion__8daE_SB_cFv
/* 807836C0  48 00 01 7C */	b lbl_8078383C
lbl_807836C4:
/* 807836C4  4B FF FE 39 */	bl Attack__8daE_SB_cFv
/* 807836C8  48 00 01 74 */	b lbl_8078383C
lbl_807836CC:
/* 807836CC  4B FF F5 FD */	bl Jump_Motion__8daE_SB_cFv
/* 807836D0  48 00 01 6C */	b lbl_8078383C
lbl_807836D4:
/* 807836D4  4B FF FE CD */	bl Shield__8daE_SB_cFv
/* 807836D8  48 00 01 64 */	b lbl_8078383C
lbl_807836DC:
/* 807836DC  80 7E 06 1C */	lwz r3, 0x61c(r30)
/* 807836E0  38 63 00 0C */	addi r3, r3, 0xc
/* 807836E4  C0 3F 00 D4 */	lfs f1, 0xd4(r31)
/* 807836E8  4B BA 4D 44 */	b checkPass__12J3DFrameCtrlFf
/* 807836EC  2C 03 00 00 */	cmpwi r3, 0
/* 807836F0  41 82 00 30 */	beq lbl_80783720
/* 807836F4  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702B2@ha */
/* 807836F8  38 03 02 B2 */	addi r0, r3, 0x02B2 /* 0x000702B2@l */
/* 807836FC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80783700  38 7E 06 2C */	addi r3, r30, 0x62c
/* 80783704  38 81 00 10 */	addi r4, r1, 0x10
/* 80783708  38 A0 00 00 */	li r5, 0
/* 8078370C  38 C0 FF FF */	li r6, -1
/* 80783710  81 9E 06 2C */	lwz r12, 0x62c(r30)
/* 80783714  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80783718  7D 89 03 A6 */	mtctr r12
/* 8078371C  4E 80 04 21 */	bctrl 
lbl_80783720:
/* 80783720  80 7E 06 1C */	lwz r3, 0x61c(r30)
/* 80783724  38 80 00 01 */	li r4, 1
/* 80783728  88 03 00 11 */	lbz r0, 0x11(r3)
/* 8078372C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80783730  40 82 00 18 */	bne lbl_80783748
/* 80783734  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 80783738  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8078373C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80783740  41 82 00 08 */	beq lbl_80783748
/* 80783744  38 80 00 00 */	li r4, 0
lbl_80783748:
/* 80783748  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8078374C  41 82 00 F0 */	beq lbl_8078383C
/* 80783750  7F C3 F3 78 */	mr r3, r30
/* 80783754  4B FF F7 3D */	bl Death_Motion__8daE_SB_cFv
/* 80783758  48 00 00 E4 */	b lbl_8078383C
lbl_8078375C:
/* 8078375C  4B FF EE F5 */	bl Bomb_Death_Motion__8daE_SB_cFv
/* 80783760  48 00 00 DC */	b lbl_8078383C
lbl_80783764:
/* 80783764  4B FF F7 AD */	bl ActionCheck__8daE_SB_cFv
/* 80783768  80 7E 06 1C */	lwz r3, 0x61c(r30)
/* 8078376C  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80783770  C0 1F 00 A8 */	lfs f0, 0xa8(r31)
/* 80783774  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80783778  40 82 00 30 */	bne lbl_807837A8
/* 8078377C  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702AD@ha */
/* 80783780  38 03 02 AD */	addi r0, r3, 0x02AD /* 0x000702AD@l */
/* 80783784  90 01 00 0C */	stw r0, 0xc(r1)
/* 80783788  38 7E 06 2C */	addi r3, r30, 0x62c
/* 8078378C  38 81 00 0C */	addi r4, r1, 0xc
/* 80783790  38 A0 00 00 */	li r5, 0
/* 80783794  38 C0 FF FF */	li r6, -1
/* 80783798  81 9E 06 2C */	lwz r12, 0x62c(r30)
/* 8078379C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 807837A0  7D 89 03 A6 */	mtctr r12
/* 807837A4  4E 80 04 21 */	bctrl 
lbl_807837A8:
/* 807837A8  80 7E 06 1C */	lwz r3, 0x61c(r30)
/* 807837AC  38 80 00 01 */	li r4, 1
/* 807837B0  88 03 00 11 */	lbz r0, 0x11(r3)
/* 807837B4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 807837B8  40 82 00 18 */	bne lbl_807837D0
/* 807837BC  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 807837C0  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 807837C4  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 807837C8  41 82 00 08 */	beq lbl_807837D0
/* 807837CC  38 80 00 00 */	li r4, 0
lbl_807837D0:
/* 807837D0  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 807837D4  41 82 00 60 */	beq lbl_80783834
/* 807837D8  7F C3 F3 78 */	mr r3, r30
/* 807837DC  4B FF E3 1D */	bl MemberClear__8daE_SB_cFv
/* 807837E0  38 00 00 01 */	li r0, 1
/* 807837E4  90 1E 05 B0 */	stw r0, 0x5b0(r30)
/* 807837E8  7F C3 F3 78 */	mr r3, r30
/* 807837EC  38 80 00 0C */	li r4, 0xc
/* 807837F0  38 A0 00 02 */	li r5, 2
/* 807837F4  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 807837F8  3C C0 80 78 */	lis r6, l_HIO@ha
/* 807837FC  38 C6 4F 84 */	addi r6, r6, l_HIO@l
/* 80783800  C0 46 00 28 */	lfs f2, 0x28(r6)
/* 80783804  4B FF E2 49 */	bl SetAnm__8daE_SB_cFiiff
/* 80783808  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702AC@ha */
/* 8078380C  38 03 02 AC */	addi r0, r3, 0x02AC /* 0x000702AC@l */
/* 80783810  90 01 00 08 */	stw r0, 8(r1)
/* 80783814  38 7E 06 2C */	addi r3, r30, 0x62c
/* 80783818  38 81 00 08 */	addi r4, r1, 8
/* 8078381C  38 A0 00 00 */	li r5, 0
/* 80783820  38 C0 FF FF */	li r6, -1
/* 80783824  81 9E 06 2C */	lwz r12, 0x62c(r30)
/* 80783828  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8078382C  7D 89 03 A6 */	mtctr r12
/* 80783830  4E 80 04 21 */	bctrl 
lbl_80783834:
/* 80783834  7F C3 F3 78 */	mr r3, r30
/* 80783838  48 00 03 15 */	bl Obj_Damage__8daE_SB_cFv
lbl_8078383C:
/* 8078383C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80783840  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80783844  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80783848  7C 08 03 A6 */	mtlr r0
/* 8078384C  38 21 00 20 */	addi r1, r1, 0x20
/* 80783850  4E 80 00 20 */	blr 
