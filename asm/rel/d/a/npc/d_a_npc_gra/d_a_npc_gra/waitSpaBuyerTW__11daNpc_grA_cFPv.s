lbl_809C8138:
/* 809C8138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809C813C  7C 08 02 A6 */	mflr r0
/* 809C8140  90 01 00 14 */	stw r0, 0x14(r1)
/* 809C8144  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809C8148  7C 7F 1B 78 */	mr r31, r3
/* 809C814C  A0 03 14 72 */	lhz r0, 0x1472(r3)
/* 809C8150  2C 00 00 02 */	cmpwi r0, 2
/* 809C8154  41 82 00 8C */	beq lbl_809C81E0
/* 809C8158  40 80 01 38 */	bge lbl_809C8290
/* 809C815C  2C 00 00 00 */	cmpwi r0, 0
/* 809C8160  41 82 00 0C */	beq lbl_809C816C
/* 809C8164  48 00 01 2C */	b lbl_809C8290
/* 809C8168  48 00 01 28 */	b lbl_809C8290
lbl_809C816C:
/* 809C816C  38 80 00 17 */	li r4, 0x17
/* 809C8170  3C A0 80 9D */	lis r5, lit_6106@ha
/* 809C8174  C0 25 A4 08 */	lfs f1, lit_6106@l(r5)
/* 809C8178  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 809C817C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 809C8180  7D 89 03 A6 */	mtctr r12
/* 809C8184  4E 80 04 21 */	bctrl 
/* 809C8188  7F E3 FB 78 */	mr r3, r31
/* 809C818C  38 80 00 10 */	li r4, 0x10
/* 809C8190  3C A0 80 9D */	lis r5, lit_6106@ha
/* 809C8194  C0 25 A4 08 */	lfs f1, lit_6106@l(r5)
/* 809C8198  38 A0 00 00 */	li r5, 0
/* 809C819C  81 9F 0B 44 */	lwz r12, 0xb44(r31)
/* 809C81A0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 809C81A4  7D 89 03 A6 */	mtctr r12
/* 809C81A8  4E 80 04 21 */	bctrl 
/* 809C81AC  7F E3 FB 78 */	mr r3, r31
/* 809C81B0  38 80 00 00 */	li r4, 0
/* 809C81B4  4B FF AE BD */	bl setLookMode__11daNpc_grA_cFi
/* 809C81B8  38 00 00 00 */	li r0, 0
/* 809C81BC  90 1F 09 6C */	stw r0, 0x96c(r31)
/* 809C81C0  38 60 00 03 */	li r3, 3
/* 809C81C4  38 80 00 07 */	li r4, 7
/* 809C81C8  48 00 19 39 */	bl func_809C9B00
/* 809C81CC  90 7F 14 78 */	stw r3, 0x1478(r31)
/* 809C81D0  38 00 00 01 */	li r0, 1
/* 809C81D4  98 1F 09 EA */	stb r0, 0x9ea(r31)
/* 809C81D8  38 00 00 02 */	li r0, 2
/* 809C81DC  B0 1F 14 72 */	sth r0, 0x1472(r31)
lbl_809C81E0:
/* 809C81E0  80 1F 09 54 */	lwz r0, 0x954(r31)
/* 809C81E4  2C 00 00 00 */	cmpwi r0, 0
/* 809C81E8  40 82 00 44 */	bne lbl_809C822C
/* 809C81EC  7F E3 FB 78 */	mr r3, r31
/* 809C81F0  38 80 00 00 */	li r4, 0
/* 809C81F4  4B FF AE 7D */	bl setLookMode__11daNpc_grA_cFi
/* 809C81F8  A8 9F 04 B6 */	lha r4, 0x4b6(r31)
/* 809C81FC  A8 1F 08 F2 */	lha r0, 0x8f2(r31)
/* 809C8200  7C 04 00 00 */	cmpw r4, r0
/* 809C8204  41 82 00 28 */	beq lbl_809C822C
/* 809C8208  7F E3 FB 78 */	mr r3, r31
/* 809C820C  38 A0 00 17 */	li r5, 0x17
/* 809C8210  38 C0 00 16 */	li r6, 0x16
/* 809C8214  38 E0 00 0F */	li r7, 0xf
/* 809C8218  4B 78 BE 8C */	b step__8daNpcF_cFsiii
/* 809C821C  2C 03 00 00 */	cmpwi r3, 0
/* 809C8220  41 82 00 0C */	beq lbl_809C822C
/* 809C8224  38 00 00 00 */	li r0, 0
/* 809C8228  B0 1F 14 72 */	sth r0, 0x1472(r31)
lbl_809C822C:
/* 809C822C  A0 7F 09 E2 */	lhz r3, 0x9e2(r31)
/* 809C8230  80 1F 14 78 */	lwz r0, 0x1478(r31)
/* 809C8234  7C 03 00 00 */	cmpw r3, r0
/* 809C8238  41 80 00 58 */	blt lbl_809C8290
/* 809C823C  7F E3 FB 78 */	mr r3, r31
/* 809C8240  38 80 00 11 */	li r4, 0x11
/* 809C8244  3C A0 80 9D */	lis r5, lit_6106@ha
/* 809C8248  C0 25 A4 08 */	lfs f1, lit_6106@l(r5)
/* 809C824C  38 A0 00 01 */	li r5, 1
/* 809C8250  81 9F 0B 44 */	lwz r12, 0xb44(r31)
/* 809C8254  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 809C8258  7D 89 03 A6 */	mtctr r12
/* 809C825C  4E 80 04 21 */	bctrl 
/* 809C8260  7F E3 FB 78 */	mr r3, r31
/* 809C8264  38 80 00 17 */	li r4, 0x17
/* 809C8268  3C A0 80 9D */	lis r5, lit_6106@ha
/* 809C826C  C0 25 A4 08 */	lfs f1, lit_6106@l(r5)
/* 809C8270  81 9F 0B 44 */	lwz r12, 0xb44(r31)
/* 809C8274  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 809C8278  7D 89 03 A6 */	mtctr r12
/* 809C827C  4E 80 04 21 */	bctrl 
/* 809C8280  38 60 00 03 */	li r3, 3
/* 809C8284  38 80 00 07 */	li r4, 7
/* 809C8288  48 00 18 79 */	bl func_809C9B00
/* 809C828C  90 7F 14 78 */	stw r3, 0x1478(r31)
lbl_809C8290:
/* 809C8290  38 60 00 01 */	li r3, 1
/* 809C8294  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809C8298  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809C829C  7C 08 03 A6 */	mtlr r0
/* 809C82A0  38 21 00 10 */	addi r1, r1, 0x10
/* 809C82A4  4E 80 00 20 */	blr 
