lbl_801964C8:
/* 801964C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801964CC  7C 08 02 A6 */	mflr r0
/* 801964D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801964D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801964D8  7C 7F 1B 78 */	mr r31, r3
/* 801964DC  48 1C BB 3D */	bl __ptmf_test
/* 801964E0  2C 03 00 00 */	cmpwi r3, 0
/* 801964E4  41 82 00 14 */	beq lbl_801964F8
/* 801964E8  7F E3 FB 78 */	mr r3, r31
/* 801964EC  7F EC FB 78 */	mr r12, r31
/* 801964F0  48 1C BB 95 */	bl __ptmf_scall
/* 801964F4  60 00 00 00 */	nop 
lbl_801964F8:
/* 801964F8  A8 7F 00 D8 */	lha r3, 0xd8(r31)
/* 801964FC  2C 03 00 00 */	cmpwi r3, 0
/* 80196500  40 81 00 30 */	ble lbl_80196530
/* 80196504  38 03 FF FF */	addi r0, r3, -1
/* 80196508  B0 1F 00 D8 */	sth r0, 0xd8(r31)
/* 8019650C  A8 1F 00 D8 */	lha r0, 0xd8(r31)
/* 80196510  2C 00 00 00 */	cmpwi r0, 0
/* 80196514  40 82 00 1C */	bne lbl_80196530
/* 80196518  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8019651C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80196520  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 80196524  80 03 05 70 */	lwz r0, 0x570(r3)
/* 80196528  54 00 01 46 */	rlwinm r0, r0, 0, 5, 3
/* 8019652C  90 03 05 70 */	stw r0, 0x570(r3)
lbl_80196530:
/* 80196530  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80196534  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80196538  7C 08 03 A6 */	mtlr r0
/* 8019653C  38 21 00 10 */	addi r1, r1, 0x10
/* 80196540  4E 80 00 20 */	blr 
