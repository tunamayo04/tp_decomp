lbl_809812FC:
/* 809812FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80981300  7C 08 02 A6 */	mflr r0
/* 80981304  90 01 00 14 */	stw r0, 0x14(r1)
/* 80981308  38 A0 00 00 */	li r5, 0
/* 8098130C  88 03 09 F4 */	lbz r0, 0x9f4(r3)
/* 80981310  28 00 00 00 */	cmplwi r0, 0
/* 80981314  54 84 18 38 */	slwi r4, r4, 3
/* 80981318  3C 60 80 98 */	lis r3, l_objTbl@ha
/* 8098131C  38 03 6C 6C */	addi r0, r3, l_objTbl@l
/* 80981320  7C 60 22 14 */	add r3, r0, r4
/* 80981324  41 82 00 10 */	beq lbl_80981334
/* 80981328  3C 60 80 98 */	lis r3, l_objTWTbl@ha
/* 8098132C  38 03 6C D4 */	addi r0, r3, l_objTWTbl@l
/* 80981330  7C 60 22 14 */	add r3, r0, r4
lbl_80981334:
/* 80981334  80 83 00 04 */	lwz r4, 4(r3)
/* 80981338  2C 04 00 00 */	cmpwi r4, 0
/* 8098133C  40 81 00 24 */	ble lbl_80981360
/* 80981340  80 63 00 00 */	lwz r3, 0(r3)
/* 80981344  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha
/* 80981348  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l
/* 8098134C  3C A5 00 02 */	addis r5, r5, 2
/* 80981350  38 C0 00 80 */	li r6, 0x80
/* 80981354  38 A5 C2 F8 */	addi r5, r5, -15624
/* 80981358  4B 6B AF 94 */	b getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 8098135C  7C 65 1B 78 */	mr r5, r3
lbl_80981360:
/* 80981360  7C A3 2B 78 */	mr r3, r5
/* 80981364  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80981368  7C 08 03 A6 */	mtlr r0
/* 8098136C  38 21 00 10 */	addi r1, r1, 0x10
/* 80981370  4E 80 00 20 */	blr 
