lbl_806022F0:
/* 806022F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806022F4  7C 08 02 A6 */	mflr r0
/* 806022F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 806022FC  3C 60 80 60 */	lis r3, b_path@ha
/* 80602300  38 63 2F F8 */	addi r3, r3, b_path@l
/* 80602304  3C 80 80 5F */	lis r4, __dt__4cXyzFv@ha
/* 80602308  38 84 53 A4 */	addi r4, r4, __dt__4cXyzFv@l
/* 8060230C  38 A0 00 0C */	li r5, 0xc
/* 80602310  38 C0 00 08 */	li r6, 8
/* 80602314  4B D5 F9 D4 */	b __destroy_arr
/* 80602318  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8060231C  7C 08 03 A6 */	mtlr r0
/* 80602320  38 21 00 10 */	addi r1, r1, 0x10
/* 80602324  4E 80 00 20 */	blr 
