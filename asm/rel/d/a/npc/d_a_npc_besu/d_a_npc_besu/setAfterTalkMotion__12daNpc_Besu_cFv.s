lbl_80538490:
/* 80538490  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80538494  7C 08 02 A6 */	mflr r0
/* 80538498  90 01 00 24 */	stw r0, 0x24(r1)
/* 8053849C  39 61 00 20 */	addi r11, r1, 0x20
/* 805384A0  4B E2 9D 3C */	b _savegpr_29
/* 805384A4  7C 7D 1B 78 */	mr r29, r3
/* 805384A8  3B C0 00 1C */	li r30, 0x1c
/* 805384AC  80 83 0B 58 */	lwz r4, 0xb58(r3)
/* 805384B0  28 04 00 0B */	cmplwi r4, 0xb
/* 805384B4  41 81 00 40 */	bgt lbl_805384F4
/* 805384B8  3C 60 80 54 */	lis r3, lit_4895@ha
/* 805384BC  38 63 FA 04 */	addi r3, r3, lit_4895@l
/* 805384C0  54 80 10 3A */	slwi r0, r4, 2
/* 805384C4  7C 03 00 2E */	lwzx r0, r3, r0
/* 805384C8  7C 09 03 A6 */	mtctr r0
/* 805384CC  4E 80 04 20 */	bctr 
lbl_805384D0:
/* 805384D0  3B C0 00 0D */	li r30, 0xd
/* 805384D4  48 00 00 20 */	b lbl_805384F4
lbl_805384D8:
/* 805384D8  3B C0 00 0E */	li r30, 0xe
/* 805384DC  48 00 00 18 */	b lbl_805384F4
lbl_805384E0:
/* 805384E0  3B C0 00 0F */	li r30, 0xf
/* 805384E4  48 00 00 10 */	b lbl_805384F4
lbl_805384E8:
/* 805384E8  3B C0 00 13 */	li r30, 0x13
/* 805384EC  48 00 00 08 */	b lbl_805384F4
lbl_805384F0:
/* 805384F0  3B C0 00 1A */	li r30, 0x1a
lbl_805384F4:
/* 805384F4  2C 1E 00 00 */	cmpwi r30, 0
/* 805384F8  41 80 00 2C */	blt lbl_80538524
/* 805384FC  7C 1E 20 00 */	cmpw r30, r4
/* 80538500  41 82 00 24 */	beq lbl_80538524
/* 80538504  83 FD 0B 5C */	lwz r31, 0xb5c(r29)
/* 80538508  38 7D 0B 50 */	addi r3, r29, 0xb50
/* 8053850C  4B C0 D3 8C */	b initialize__22daNpcT_MotionSeqMngr_cFv
/* 80538510  93 FD 0B 5C */	stw r31, 0xb5c(r29)
/* 80538514  93 DD 0B 58 */	stw r30, 0xb58(r29)
/* 80538518  3C 60 80 54 */	lis r3, lit_4894@ha
/* 8053851C  C0 03 E8 6C */	lfs f0, lit_4894@l(r3)
/* 80538520  D0 1D 0B 68 */	stfs f0, 0xb68(r29)
lbl_80538524:
/* 80538524  39 61 00 20 */	addi r11, r1, 0x20
/* 80538528  4B E2 9D 00 */	b _restgpr_29
/* 8053852C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80538530  7C 08 03 A6 */	mtlr r0
/* 80538534  38 21 00 20 */	addi r1, r1, 0x20
/* 80538538  4E 80 00 20 */	blr 
