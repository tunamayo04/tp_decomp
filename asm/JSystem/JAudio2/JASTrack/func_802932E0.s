lbl_802932E0:
/* 802932E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802932E4  7C 08 02 A6 */	mflr r0
/* 802932E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802932EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802932F0  93 C1 00 08 */	stw r30, 8(r1)
/* 802932F4  7C 7E 1B 79 */	or. r30, r3, r3
/* 802932F8  7C 9F 23 78 */	mr r31, r4
/* 802932FC  41 82 00 1C */	beq lbl_80293318
/* 80293300  38 80 00 00 */	li r4, 0
/* 80293304  4B FF D5 5D */	bl __dt__17JASGenericMemPoolFv
/* 80293308  7F E0 07 35 */	extsh. r0, r31
/* 8029330C  40 81 00 0C */	ble lbl_80293318
/* 80293310  7F C3 F3 78 */	mr r3, r30
/* 80293314  48 03 BA 29 */	bl __dl__FPv
lbl_80293318:
/* 80293318  7F C3 F3 78 */	mr r3, r30
/* 8029331C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80293320  83 C1 00 08 */	lwz r30, 8(r1)
/* 80293324  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80293328  7C 08 03 A6 */	mtlr r0
/* 8029332C  38 21 00 10 */	addi r1, r1, 0x10
/* 80293330  4E 80 00 20 */	blr 
