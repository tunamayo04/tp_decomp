lbl_80B43F0C:
/* 80B43F0C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80B43F10  7C 08 02 A6 */	mflr r0
/* 80B43F14  90 01 00 24 */	stw r0, 0x24(r1)
/* 80B43F18  39 61 00 20 */	addi r11, r1, 0x20
/* 80B43F1C  4B 81 E2 C0 */	b _savegpr_29
/* 80B43F20  7C 7D 1B 78 */	mr r29, r3
/* 80B43F24  3B C0 00 00 */	li r30, 0
/* 80B43F28  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80B43F2C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80B43F30  3B E3 4F F8 */	addi r31, r3, 0x4ff8
/* 80B43F34  7F E3 FB 78 */	mr r3, r31
/* 80B43F38  3C 80 80 B4 */	lis r4, struct_80B4612C+0x0@ha
/* 80B43F3C  38 84 61 2C */	addi r4, r4, struct_80B4612C+0x0@l
/* 80B43F40  38 84 00 09 */	addi r4, r4, 9
/* 80B43F44  7F A5 EB 78 */	mr r5, r29
/* 80B43F48  38 C0 FF FF */	li r6, -1
/* 80B43F4C  4B 50 3B D0 */	b getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci
/* 80B43F50  2C 03 FF FF */	cmpwi r3, -1
/* 80B43F54  41 82 00 64 */	beq lbl_80B43FB8
/* 80B43F58  90 7D 0D AC */	stw r3, 0xdac(r29)
/* 80B43F5C  7F E3 FB 78 */	mr r3, r31
/* 80B43F60  80 9D 0D AC */	lwz r4, 0xdac(r29)
/* 80B43F64  3C A0 80 B4 */	lis r5, mCutNameList__13daNpc_yamiD_c@ha
/* 80B43F68  38 A5 62 44 */	addi r5, r5, mCutNameList__13daNpc_yamiD_c@l
/* 80B43F6C  38 C0 00 02 */	li r6, 2
/* 80B43F70  38 E0 00 00 */	li r7, 0
/* 80B43F74  39 00 00 00 */	li r8, 0
/* 80B43F78  4B 50 3E 98 */	b getMyActIdx__16dEvent_manager_cFiPCPCciii
/* 80B43F7C  7C 60 1B 78 */	mr r0, r3
/* 80B43F80  7F A3 EB 78 */	mr r3, r29
/* 80B43F84  80 9D 0D AC */	lwz r4, 0xdac(r29)
/* 80B43F88  1C C0 00 0C */	mulli r6, r0, 0xc
/* 80B43F8C  3C A0 80 B4 */	lis r5, mCutList__13daNpc_yamiD_c@ha
/* 80B43F90  38 05 62 58 */	addi r0, r5, mCutList__13daNpc_yamiD_c@l
/* 80B43F94  7D 80 32 14 */	add r12, r0, r6
/* 80B43F98  4B 81 E0 EC */	b __ptmf_scall
/* 80B43F9C  60 00 00 00 */	nop 
/* 80B43FA0  2C 03 00 00 */	cmpwi r3, 0
/* 80B43FA4  41 82 00 10 */	beq lbl_80B43FB4
/* 80B43FA8  7F E3 FB 78 */	mr r3, r31
/* 80B43FAC  80 9D 0D AC */	lwz r4, 0xdac(r29)
/* 80B43FB0  4B 50 41 CC */	b cutEnd__16dEvent_manager_cFi
lbl_80B43FB4:
/* 80B43FB4  3B C0 00 01 */	li r30, 1
lbl_80B43FB8:
/* 80B43FB8  7F C3 F3 78 */	mr r3, r30
/* 80B43FBC  39 61 00 20 */	addi r11, r1, 0x20
/* 80B43FC0  4B 81 E2 68 */	b _restgpr_29
/* 80B43FC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80B43FC8  7C 08 03 A6 */	mtlr r0
/* 80B43FCC  38 21 00 20 */	addi r1, r1, 0x20
/* 80B43FD0  4E 80 00 20 */	blr 
