lbl_8011130C:
/* 8011130C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80111310  7C 08 02 A6 */	mflr r0
/* 80111314  90 01 00 24 */	stw r0, 0x24(r1)
/* 80111318  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011131C  7C 7F 1B 78 */	mr r31, r3
/* 80111320  A0 03 2F DC */	lhz r0, 0x2fdc(r3)
/* 80111324  28 00 00 48 */	cmplwi r0, 0x48
/* 80111328  40 82 00 74 */	bne lbl_8011139C
/* 8011132C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80111330  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80111334  A0 03 00 08 */	lhz r0, 8(r3)
/* 80111338  28 00 00 00 */	cmplwi r0, 0
/* 8011133C  41 82 00 34 */	beq lbl_80111370
/* 80111340  3C 60 00 02 */	lis r3, 0x0002 /* 0x00020059@ha */
/* 80111344  38 03 00 59 */	addi r0, r3, 0x0059 /* 0x00020059@l */
/* 80111348  90 01 00 0C */	stw r0, 0xc(r1)
/* 8011134C  38 7F 2D 3C */	addi r3, r31, 0x2d3c
/* 80111350  38 81 00 0C */	addi r4, r1, 0xc
/* 80111354  38 A0 00 00 */	li r5, 0
/* 80111358  88 DF 2F 9A */	lbz r6, 0x2f9a(r31)
/* 8011135C  81 9F 2D 4C */	lwz r12, 0x2d4c(r31)
/* 80111360  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80111364  7D 89 03 A6 */	mtctr r12
/* 80111368  4E 80 04 21 */	bctrl 
/* 8011136C  48 00 00 30 */	b lbl_8011139C
lbl_80111370:
/* 80111370  3C 60 00 02 */	lis r3, 0x0002 /* 0x0002005D@ha */
/* 80111374  38 03 00 5D */	addi r0, r3, 0x005D /* 0x0002005D@l */
/* 80111378  90 01 00 08 */	stw r0, 8(r1)
/* 8011137C  38 7F 2D 3C */	addi r3, r31, 0x2d3c
/* 80111380  38 81 00 08 */	addi r4, r1, 8
/* 80111384  38 A0 00 00 */	li r5, 0
/* 80111388  88 DF 2F 9A */	lbz r6, 0x2f9a(r31)
/* 8011138C  81 9F 2D 4C */	lwz r12, 0x2d4c(r31)
/* 80111390  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80111394  7D 89 03 A6 */	mtctr r12
/* 80111398  4E 80 04 21 */	bctrl 
lbl_8011139C:
/* 8011139C  7F E3 FB 78 */	mr r3, r31
/* 801113A0  3C 80 00 01 */	lis r4, 0x0001 /* 0x0001001D@ha */
/* 801113A4  38 84 00 1D */	addi r4, r4, 0x001D /* 0x0001001D@l */
/* 801113A8  81 9F 06 28 */	lwz r12, 0x628(r31)
/* 801113AC  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 801113B0  7D 89 03 A6 */	mtctr r12
/* 801113B4  4E 80 04 21 */	bctrl 
/* 801113B8  38 7F 0F B8 */	addi r3, r31, 0xfb8
/* 801113BC  4B F7 2F 5D */	bl ResetAtHit__12dCcD_GObjInfFv
/* 801113C0  7F E3 FB 78 */	mr r3, r31
/* 801113C4  48 00 48 5D */	bl checkEventRun__9daAlink_cCFv
/* 801113C8  2C 03 00 00 */	cmpwi r3, 0
/* 801113CC  40 82 00 28 */	bne lbl_801113F4
/* 801113D0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 801113D4  38 A3 61 C0 */	addi r5, r3, g_dComIfG_gameInfo@l
/* 801113D8  80 85 5D D4 */	lwz r4, 0x5dd4(r5)
/* 801113DC  3C 60 80 39 */	lis r3, m__23daAlinkHIO_kandelaar_c0@ha
/* 801113E0  38 63 E7 7C */	addi r3, r3, m__23daAlinkHIO_kandelaar_c0@l
/* 801113E4  A8 03 00 4A */	lha r0, 0x4a(r3)
/* 801113E8  7C 00 00 D0 */	neg r0, r0
/* 801113EC  7C 04 02 14 */	add r0, r4, r0
/* 801113F0  90 05 5D D4 */	stw r0, 0x5dd4(r5)
lbl_801113F4:
/* 801113F4  80 1F 0F B8 */	lwz r0, 0xfb8(r31)
/* 801113F8  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 801113FC  90 1F 0F B8 */	stw r0, 0xfb8(r31)
/* 80111400  38 7F 10 DC */	addi r3, r31, 0x10dc
/* 80111404  C0 22 93 00 */	lfs f1, lit_6895(r2)
/* 80111408  48 15 E3 01 */	bl SetR__8cM3dGSphFf
/* 8011140C  38 00 02 00 */	li r0, 0x200
/* 80111410  90 1F 0F C8 */	stw r0, 0xfc8(r31)
/* 80111414  38 00 00 00 */	li r0, 0
/* 80111418  98 1F 10 2E */	stb r0, 0x102e(r31)
/* 8011141C  98 1F 10 2C */	stb r0, 0x102c(r31)
/* 80111420  98 1F 0F CC */	stb r0, 0xfcc(r31)
/* 80111424  38 00 00 01 */	li r0, 1
/* 80111428  98 1F 10 2D */	stb r0, 0x102d(r31)
/* 8011142C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80111430  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80111434  7C 08 03 A6 */	mtlr r0
/* 80111438  38 21 00 20 */	addi r1, r1, 0x20
/* 8011143C  4E 80 00 20 */	blr 
