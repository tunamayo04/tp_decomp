lbl_805387D0:
/* 805387D0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 805387D4  7C 08 02 A6 */	mflr r0
/* 805387D8  90 01 00 34 */	stw r0, 0x34(r1)
/* 805387DC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 805387E0  7C 7F 1B 78 */	mr r31, r3
/* 805387E4  3C 80 80 54 */	lis r4, lit_4952@ha
/* 805387E8  38 A4 FA 7C */	addi r5, r4, lit_4952@l
/* 805387EC  80 85 00 00 */	lwz r4, 0(r5)
/* 805387F0  80 05 00 04 */	lwz r0, 4(r5)
/* 805387F4  90 81 00 14 */	stw r4, 0x14(r1)
/* 805387F8  90 01 00 18 */	stw r0, 0x18(r1)
/* 805387FC  80 05 00 08 */	lwz r0, 8(r5)
/* 80538800  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80538804  38 81 00 14 */	addi r4, r1, 0x14
/* 80538808  48 00 12 C5 */	bl chkAction__12daNpc_Besu_cFM12daNpc_Besu_cFPCvPvPv_i
/* 8053880C  2C 03 00 00 */	cmpwi r3, 0
/* 80538810  41 82 00 1C */	beq lbl_8053882C
/* 80538814  7F E3 FB 78 */	mr r3, r31
/* 80538818  38 80 00 00 */	li r4, 0
/* 8053881C  39 9F 11 0C */	addi r12, r31, 0x110c
/* 80538820  4B E2 98 64 */	b __ptmf_scall
/* 80538824  60 00 00 00 */	nop 
/* 80538828  48 00 00 30 */	b lbl_80538858
lbl_8053882C:
/* 8053882C  3C 60 80 54 */	lis r3, lit_4957@ha
/* 80538830  38 83 FA 88 */	addi r4, r3, lit_4957@l
/* 80538834  80 64 00 00 */	lwz r3, 0(r4)
/* 80538838  80 04 00 04 */	lwz r0, 4(r4)
/* 8053883C  90 61 00 08 */	stw r3, 8(r1)
/* 80538840  90 01 00 0C */	stw r0, 0xc(r1)
/* 80538844  80 04 00 08 */	lwz r0, 8(r4)
/* 80538848  90 01 00 10 */	stw r0, 0x10(r1)
/* 8053884C  7F E3 FB 78 */	mr r3, r31
/* 80538850  38 81 00 08 */	addi r4, r1, 8
/* 80538854  48 00 12 A5 */	bl setAction__12daNpc_Besu_cFM12daNpc_Besu_cFPCvPvPv_i
lbl_80538858:
/* 80538858  38 60 00 01 */	li r3, 1
/* 8053885C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80538860  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80538864  7C 08 03 A6 */	mtlr r0
/* 80538868  38 21 00 30 */	addi r1, r1, 0x30
/* 8053886C  4E 80 00 20 */	blr 
