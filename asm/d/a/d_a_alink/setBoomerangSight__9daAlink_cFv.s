lbl_800E0E64:
/* 800E0E64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800E0E68  7C 08 02 A6 */	mflr r0
/* 800E0E6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800E0E70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800E0E74  7C 7F 1B 78 */	mr r31, r3
/* 800E0E78  80 03 28 28 */	lwz r0, 0x2828(r3)
/* 800E0E7C  28 00 00 00 */	cmplwi r0, 0
/* 800E0E80  41 82 00 7C */	beq lbl_800E0EFC
/* 800E0E84  4B FF F6 29 */	bl checkBoomerangThrowAnime__9daAlink_cCFv
/* 800E0E88  2C 03 00 00 */	cmpwi r3, 0
/* 800E0E8C  40 82 00 70 */	bne lbl_800E0EFC
/* 800E0E90  7F E3 FB 78 */	mr r3, r31
/* 800E0E94  4B FF F2 89 */	bl getBoomLockMax__9daAlink_cFv
/* 800E0E98  7F E3 FB 78 */	mr r3, r31
/* 800E0E9C  38 9F 37 E0 */	addi r4, r31, 0x37e0
/* 800E0EA0  4B FD E6 61 */	bl checkSightLine__9daAlink_cFfP4cXyz
/* 800E0EA4  C0 1F 37 E0 */	lfs f0, 0x37e0(r31)
/* 800E0EA8  D0 1F 20 6C */	stfs f0, 0x206c(r31)
/* 800E0EAC  C0 1F 37 E4 */	lfs f0, 0x37e4(r31)
/* 800E0EB0  D0 1F 20 70 */	stfs f0, 0x2070(r31)
/* 800E0EB4  C0 1F 37 E8 */	lfs f0, 0x37e8(r31)
/* 800E0EB8  D0 1F 20 74 */	stfs f0, 0x2074(r31)
/* 800E0EBC  38 00 00 01 */	li r0, 1
/* 800E0EC0  98 1F 20 68 */	stb r0, 0x2068(r31)
/* 800E0EC4  80 9F 28 28 */	lwz r4, 0x2828(r31)
/* 800E0EC8  88 04 05 F9 */	lbz r0, 0x5f9(r4)
/* 800E0ECC  28 00 00 00 */	cmplwi r0, 0
/* 800E0ED0  40 82 00 18 */	bne lbl_800E0EE8
/* 800E0ED4  2C 03 00 00 */	cmpwi r3, 0
/* 800E0ED8  41 82 00 24 */	beq lbl_800E0EFC
/* 800E0EDC  88 04 09 50 */	lbz r0, 0x950(r4)
/* 800E0EE0  28 00 00 05 */	cmplwi r0, 5
/* 800E0EE4  40 80 00 18 */	bge lbl_800E0EFC
lbl_800E0EE8:
/* 800E0EE8  7F E3 FB 78 */	mr r3, r31
/* 800E0EEC  38 80 00 10 */	li r4, 0x10
/* 800E0EF0  4B FD 17 ED */	bl setItemActionButtonStatus__9daAlink_cFUc
/* 800E0EF4  7F E3 FB 78 */	mr r3, r31
/* 800E0EF8  4B FD 18 05 */	bl itemActionTrigger__9daAlink_cFv
lbl_800E0EFC:
/* 800E0EFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800E0F00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800E0F04  7C 08 03 A6 */	mtlr r0
/* 800E0F08  38 21 00 10 */	addi r1, r1, 0x10
/* 800E0F0C  4E 80 00 20 */	blr 
