lbl_800835DC:
/* 800835DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800835E0  7C 08 02 A6 */	mflr r0
/* 800835E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800835E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800835EC  93 C1 00 08 */	stw r30, 8(r1)
/* 800835F0  7C 7E 1B 79 */	or. r30, r3, r3
/* 800835F4  7C 9F 23 78 */	mr r31, r4
/* 800835F8  41 82 00 38 */	beq lbl_80083630
/* 800835FC  3C 80 80 3B */	lis r4, __vt__6dBgWSv@ha
/* 80083600  38 04 BE B8 */	addi r0, r4, __vt__6dBgWSv@l
/* 80083604  90 1E 00 04 */	stw r0, 4(r30)
/* 80083608  41 82 00 18 */	beq lbl_80083620
/* 8008360C  3C 80 80 3B */	lis r4, __vt__4dBgW@ha
/* 80083610  38 04 BA 80 */	addi r0, r4, __vt__4dBgW@l
/* 80083614  90 1E 00 04 */	stw r0, 4(r30)
/* 80083618  38 80 00 00 */	li r4, 0
/* 8008361C  4B FF 5D 21 */	bl __dt__4cBgWFv
lbl_80083620:
/* 80083620  7F E0 07 35 */	extsh. r0, r31
/* 80083624  40 81 00 0C */	ble lbl_80083630
/* 80083628  7F C3 F3 78 */	mr r3, r30
/* 8008362C  48 24 B7 11 */	bl __dl__FPv
lbl_80083630:
/* 80083630  7F C3 F3 78 */	mr r3, r30
/* 80083634  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80083638  83 C1 00 08 */	lwz r30, 8(r1)
/* 8008363C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80083640  7C 08 03 A6 */	mtlr r0
/* 80083644  38 21 00 10 */	addi r1, r1, 0x10
/* 80083648  4E 80 00 20 */	blr 
