lbl_80A286FC:
/* 80A286FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80A28700  7C 08 02 A6 */	mflr r0
/* 80A28704  90 01 00 24 */	stw r0, 0x24(r1)
/* 80A28708  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80A2870C  7C 7F 1B 78 */	mr r31, r3
/* 80A28710  A8 03 14 04 */	lha r0, 0x1404(r3)
/* 80A28714  2C 00 00 00 */	cmpwi r0, 0
/* 80A28718  41 82 00 18 */	beq lbl_80A28730
/* 80A2871C  40 80 00 08 */	bge lbl_80A28724
/* 80A28720  48 00 00 68 */	b lbl_80A28788
lbl_80A28724:
/* 80A28724  2C 00 00 02 */	cmpwi r0, 2
/* 80A28728  40 80 00 60 */	bge lbl_80A28788
/* 80A2872C  48 00 00 20 */	b lbl_80A2874C
lbl_80A28730:
/* 80A28730  38 00 00 01 */	li r0, 1
/* 80A28734  98 1F 14 65 */	stb r0, 0x1465(r31)
/* 80A28738  3C 60 80 A3 */	lis r3, lit_4449@ha
/* 80A2873C  C0 03 A0 F0 */	lfs f0, lit_4449@l(r3)
/* 80A28740  D0 1F 05 2C */	stfs f0, 0x52c(r31)
/* 80A28744  B0 1F 14 04 */	sth r0, 0x1404(r31)
/* 80A28748  48 00 00 40 */	b lbl_80A28788
lbl_80A2874C:
/* 80A2874C  38 80 0C 00 */	li r4, 0xc00
/* 80A28750  48 00 0D 09 */	bl _turn_to_link__15daNpcKasiMich_cFs
/* 80A28754  2C 03 00 00 */	cmpwi r3, 0
/* 80A28758  41 82 00 30 */	beq lbl_80A28788
/* 80A2875C  3C 60 80 A3 */	lis r3, lit_5026@ha
/* 80A28760  38 83 A5 DC */	addi r4, r3, lit_5026@l
/* 80A28764  80 64 00 00 */	lwz r3, 0(r4)
/* 80A28768  80 04 00 04 */	lwz r0, 4(r4)
/* 80A2876C  90 61 00 08 */	stw r3, 8(r1)
/* 80A28770  90 01 00 0C */	stw r0, 0xc(r1)
/* 80A28774  80 04 00 08 */	lwz r0, 8(r4)
/* 80A28778  90 01 00 10 */	stw r0, 0x10(r1)
/* 80A2877C  7F E3 FB 78 */	mr r3, r31
/* 80A28780  38 81 00 08 */	addi r4, r1, 8
/* 80A28784  4B FF F3 01 */	bl setAction__15daNpcKasiMich_cFM15daNpcKasiMich_cFPCvPvi_i
lbl_80A28788:
/* 80A28788  38 60 00 01 */	li r3, 1
/* 80A2878C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80A28790  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80A28794  7C 08 03 A6 */	mtlr r0
/* 80A28798  38 21 00 20 */	addi r1, r1, 0x20
/* 80A2879C  4E 80 00 20 */	blr 
