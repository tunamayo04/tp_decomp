lbl_80483910:
/* 80483910  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80483914  7C 08 02 A6 */	mflr r0
/* 80483918  90 01 00 14 */	stw r0, 0x14(r1)
/* 8048391C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80483920  7C 7F 1B 79 */	or. r31, r3, r3
/* 80483924  41 82 00 30 */	beq lbl_80483954
/* 80483928  3C 60 80 48 */	lis r3, __vt__8cM3dGTri@ha
/* 8048392C  38 03 4F D8 */	addi r0, r3, __vt__8cM3dGTri@l
/* 80483930  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80483934  41 82 00 10 */	beq lbl_80483944
/* 80483938  3C 60 80 48 */	lis r3, __vt__8cM3dGPla@ha
/* 8048393C  38 03 4F E4 */	addi r0, r3, __vt__8cM3dGPla@l
/* 80483940  90 1F 00 10 */	stw r0, 0x10(r31)
lbl_80483944:
/* 80483944  7C 80 07 35 */	extsh. r0, r4
/* 80483948  40 81 00 0C */	ble lbl_80483954
/* 8048394C  7F E3 FB 78 */	mr r3, r31
/* 80483950  4B E4 B3 EC */	b __dl__FPv
lbl_80483954:
/* 80483954  7F E3 FB 78 */	mr r3, r31
/* 80483958  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8048395C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80483960  7C 08 03 A6 */	mtlr r0
/* 80483964  38 21 00 10 */	addi r1, r1, 0x10
/* 80483968  4E 80 00 20 */	blr 
