lbl_80C18E00:
/* 80C18E00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C18E04  7C 08 02 A6 */	mflr r0
/* 80C18E08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C18E0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C18E10  7C 7F 1B 78 */	mr r31, r3
/* 80C18E14  3C 60 80 C2 */	lis r3, l_arcName@ha
/* 80C18E18  38 63 94 C8 */	addi r3, r3, l_arcName@l
/* 80C18E1C  80 63 00 00 */	lwz r3, 0(r3)
/* 80C18E20  38 80 00 03 */	li r4, 3
/* 80C18E24  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha
/* 80C18E28  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l
/* 80C18E2C  3C A5 00 02 */	addis r5, r5, 2
/* 80C18E30  38 C0 00 80 */	li r6, 0x80
/* 80C18E34  38 A5 C2 F8 */	addi r5, r5, -15624
/* 80C18E38  4B 42 34 B4 */	b getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 80C18E3C  3C 80 00 08 */	lis r4, 8
/* 80C18E40  3C A0 11 00 */	lis r5, 0x1100 /* 0x11000084@ha */
/* 80C18E44  38 A5 00 84 */	addi r5, r5, 0x0084 /* 0x11000084@l */
/* 80C18E48  4B 3F BE 0C */	b mDoExt_J3DModel__create__FP12J3DModelDataUlUl
/* 80C18E4C  90 7F 05 88 */	stw r3, 0x588(r31)
/* 80C18E50  80 7F 05 88 */	lwz r3, 0x588(r31)
/* 80C18E54  30 03 FF FF */	addic r0, r3, -1
/* 80C18E58  7C 60 19 10 */	subfe r3, r0, r3
/* 80C18E5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C18E60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C18E64  7C 08 03 A6 */	mtlr r0
/* 80C18E68  38 21 00 10 */	addi r1, r1, 0x10
/* 80C18E6C  4E 80 00 20 */	blr 
