lbl_800580A4:
/* 800580A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800580A8  7C 08 02 A6 */	mflr r0
/* 800580AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800580B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800580B4  93 C1 00 08 */	stw r30, 8(r1)
/* 800580B8  7C 7E 1B 79 */	or. r30, r3, r3
/* 800580BC  7C 9F 23 78 */	mr r31, r4
/* 800580C0  41 82 00 4C */	beq lbl_8005810C
/* 800580C4  3C 60 80 3B */	lis r3, __vt__22dKankyo_sunlenz_Packet@ha
/* 800580C8  38 03 9B 74 */	addi r0, r3, __vt__22dKankyo_sunlenz_Packet@l
/* 800580CC  90 1E 00 00 */	stw r0, 0(r30)
/* 800580D0  38 7E 00 24 */	addi r3, r30, 0x24
/* 800580D4  3C 80 80 01 */	lis r4, __dt__4cXyzFv@ha
/* 800580D8  38 84 91 84 */	addi r4, r4, __dt__4cXyzFv@l
/* 800580DC  38 A0 00 0C */	li r5, 0xc
/* 800580E0  38 C0 00 08 */	li r6, 8
/* 800580E4  48 30 9C 05 */	bl __destroy_arr
/* 800580E8  28 1E 00 00 */	cmplwi r30, 0
/* 800580EC  41 82 00 10 */	beq lbl_800580FC
/* 800580F0  3C 60 80 3D */	lis r3, __vt__9J3DPacket@ha
/* 800580F4  38 03 D9 7C */	addi r0, r3, __vt__9J3DPacket@l
/* 800580F8  90 1E 00 00 */	stw r0, 0(r30)
lbl_800580FC:
/* 800580FC  7F E0 07 35 */	extsh. r0, r31
/* 80058100  40 81 00 0C */	ble lbl_8005810C
/* 80058104  7F C3 F3 78 */	mr r3, r30
/* 80058108  48 27 6C 35 */	bl __dl__FPv
lbl_8005810C:
/* 8005810C  7F C3 F3 78 */	mr r3, r30
/* 80058110  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058114  83 C1 00 08 */	lwz r30, 8(r1)
/* 80058118  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005811C  7C 08 03 A6 */	mtlr r0
/* 80058120  38 21 00 10 */	addi r1, r1, 0x10
/* 80058124  4E 80 00 20 */	blr 
