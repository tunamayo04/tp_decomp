lbl_806971EC:
/* 806971EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806971F0  7C 08 02 A6 */	mflr r0
/* 806971F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 806971F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806971FC  93 C1 00 08 */	stw r30, 8(r1)
/* 80697200  7C 7E 1B 78 */	mr r30, r3
/* 80697204  3C 80 80 69 */	lis r4, lit_1109@ha
/* 80697208  3B E4 7E 30 */	addi r31, r4, lit_1109@l
/* 8069720C  4B 98 1A D4 */	b fopAc_IsActor__FPv
/* 80697210  2C 03 00 00 */	cmpwi r3, 0
/* 80697214  41 82 00 64 */	beq lbl_80697278
/* 80697218  A8 1E 00 08 */	lha r0, 8(r30)
/* 8069721C  2C 00 02 21 */	cmpwi r0, 0x221
/* 80697220  40 82 00 58 */	bne lbl_80697278
/* 80697224  7F C3 F3 78 */	mr r3, r30
/* 80697228  81 9E 05 68 */	lwz r12, 0x568(r30)
/* 8069722C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80697230  7D 89 03 A6 */	mtctr r12
/* 80697234  4E 80 04 21 */	bctrl 
/* 80697238  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8069723C  41 82 00 3C */	beq lbl_80697278
/* 80697240  38 00 00 02 */	li r0, 2
/* 80697244  98 1F 00 5D */	stb r0, 0x5d(r31)
/* 80697248  C0 1E 04 D0 */	lfs f0, 0x4d0(r30)
/* 8069724C  D0 1F 00 6C */	stfs f0, 0x6c(r31)
/* 80697250  C0 1E 04 D4 */	lfs f0, 0x4d4(r30)
/* 80697254  38 7F 00 6C */	addi r3, r31, 0x6c
/* 80697258  D0 03 00 04 */	stfs f0, 4(r3)
/* 8069725C  C0 1E 04 D8 */	lfs f0, 0x4d8(r30)
/* 80697260  D0 03 00 08 */	stfs f0, 8(r3)
/* 80697264  3C 60 80 69 */	lis r3, lit_4767@ha
/* 80697268  C0 03 7D 70 */	lfs f0, lit_4767@l(r3)
/* 8069726C  D0 1F 00 78 */	stfs f0, 0x78(r31)
/* 80697270  7F C3 F3 78 */	mr r3, r30
/* 80697274  48 00 00 08 */	b lbl_8069727C
lbl_80697278:
/* 80697278  38 60 00 00 */	li r3, 0
lbl_8069727C:
/* 8069727C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80697280  83 C1 00 08 */	lwz r30, 8(r1)
/* 80697284  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80697288  7C 08 03 A6 */	mtlr r0
/* 8069728C  38 21 00 10 */	addi r1, r1, 0x10
/* 80697290  4E 80 00 20 */	blr 
