lbl_800502E4:
/* 800502E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800502E8  7C 08 02 A6 */	mflr r0
/* 800502EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800502F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800502F4  93 C1 00 08 */	stw r30, 8(r1)
/* 800502F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 800502FC  7C 9F 23 78 */	mr r31, r4
/* 80050300  41 82 00 4C */	beq lbl_8005034C
/* 80050304  3C 80 80 3B */	lis r4, __vt__21dPa_setColorEcallBack@ha
/* 80050308  38 04 85 94 */	addi r0, r4, __vt__21dPa_setColorEcallBack@l
/* 8005030C  90 1E 00 00 */	stw r0, 0(r30)
/* 80050310  41 82 00 2C */	beq lbl_8005033C
/* 80050314  3C 80 80 3B */	lis r4, __vt__18dPa_levelEcallBack@ha
/* 80050318  38 04 85 54 */	addi r0, r4, __vt__18dPa_levelEcallBack@l
/* 8005031C  90 1E 00 00 */	stw r0, 0(r30)
/* 80050320  81 83 00 00 */	lwz r12, 0(r3)
/* 80050324  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80050328  7D 89 03 A6 */	mtctr r12
/* 8005032C  4E 80 04 21 */	bctrl 
/* 80050330  7F C3 F3 78 */	mr r3, r30
/* 80050334  38 80 00 00 */	li r4, 0
/* 80050338  48 22 E3 6D */	bl __dt__18JPAEmitterCallBackFv
lbl_8005033C:
/* 8005033C  7F E0 07 35 */	extsh. r0, r31
/* 80050340  40 81 00 0C */	ble lbl_8005034C
/* 80050344  7F C3 F3 78 */	mr r3, r30
/* 80050348  48 27 E9 F5 */	bl __dl__FPv
lbl_8005034C:
/* 8005034C  7F C3 F3 78 */	mr r3, r30
/* 80050350  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80050354  83 C1 00 08 */	lwz r30, 8(r1)
/* 80050358  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005035C  7C 08 03 A6 */	mtlr r0
/* 80050360  38 21 00 10 */	addi r1, r1, 0x10
/* 80050364  4E 80 00 20 */	blr 
