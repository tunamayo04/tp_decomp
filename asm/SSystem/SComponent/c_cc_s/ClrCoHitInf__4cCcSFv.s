lbl_80264C5C:
/* 80264C5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264C60  7C 08 02 A6 */	mflr r0
/* 80264C64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264C68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264C6C  93 C1 00 08 */	stw r30, 8(r1)
/* 80264C70  7C 7E 1B 78 */	mr r30, r3
/* 80264C74  3B FE 10 00 */	addi r31, r30, 0x1000
/* 80264C78  48 00 00 48 */	b lbl_80264CC0
lbl_80264C7C:
/* 80264C7C  80 7F 00 00 */	lwz r3, 0(r31)
/* 80264C80  28 03 00 00 */	cmplwi r3, 0
/* 80264C84  41 82 00 38 */	beq lbl_80264CBC
/* 80264C88  81 83 00 3C */	lwz r12, 0x3c(r3)
/* 80264C8C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80264C90  7D 89 03 A6 */	mtctr r12
/* 80264C94  4E 80 04 21 */	bctrl 
/* 80264C98  81 83 00 3C */	lwz r12, 0x3c(r3)
/* 80264C9C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80264CA0  7D 89 03 A6 */	mtctr r12
/* 80264CA4  4E 80 04 21 */	bctrl 
/* 80264CA8  80 7F 00 00 */	lwz r3, 0(r31)
/* 80264CAC  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80264CB0  28 03 00 00 */	cmplwi r3, 0
/* 80264CB4  41 82 00 08 */	beq lbl_80264CBC
/* 80264CB8  4B FF EC A5 */	bl ClrCcMove__9cCcD_SttsFv
lbl_80264CBC:
/* 80264CBC  3B FF 00 04 */	addi r31, r31, 4
lbl_80264CC0:
/* 80264CC0  A0 1E 28 04 */	lhz r0, 0x2804(r30)
/* 80264CC4  54 03 10 3A */	slwi r3, r0, 2
/* 80264CC8  38 03 10 00 */	addi r0, r3, 0x1000
/* 80264CCC  7C 1E 02 14 */	add r0, r30, r0
/* 80264CD0  7C 1F 00 40 */	cmplw r31, r0
/* 80264CD4  41 80 FF A8 */	blt lbl_80264C7C
/* 80264CD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264CDC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80264CE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264CE4  7C 08 03 A6 */	mtlr r0
/* 80264CE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80264CEC  4E 80 00 20 */	blr 
