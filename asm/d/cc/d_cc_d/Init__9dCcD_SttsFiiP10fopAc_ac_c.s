lbl_80083860:
/* 80083860  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80083864  7C 08 02 A6 */	mflr r0
/* 80083868  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008386C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80083870  93 C1 00 08 */	stw r30, 8(r1)
/* 80083874  7C 7E 1B 78 */	mr r30, r3
/* 80083878  7C DF 33 79 */	or. r31, r6, r6
/* 8008387C  41 82 00 18 */	beq lbl_80083894
/* 80083880  41 82 00 0C */	beq lbl_8008388C
/* 80083884  80 FF 00 04 */	lwz r7, 4(r31)
/* 80083888  48 00 00 10 */	b lbl_80083898
lbl_8008388C:
/* 8008388C  38 E0 FF FF */	li r7, -1
/* 80083890  48 00 00 08 */	b lbl_80083898
lbl_80083894:
/* 80083894  38 E0 FF FF */	li r7, -1
lbl_80083898:
/* 80083898  48 1E 00 0D */	bl Init__9cCcD_SttsFiiPvUi
/* 8008389C  28 1F 00 00 */	cmplwi r31, 0
/* 800838A0  41 82 00 14 */	beq lbl_800838B4
/* 800838A4  88 1F 04 E2 */	lbz r0, 0x4e2(r31)
/* 800838A8  7C 00 07 74 */	extsb r0, r0
/* 800838AC  7C 03 03 78 */	mr r3, r0
/* 800838B0  48 00 00 14 */	b lbl_800838C4
lbl_800838B4:
/* 800838B4  38 60 00 00 */	li r3, 0
/* 800838B8  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 800838BC  60 00 00 01 */	ori r0, r0, 1
/* 800838C0  90 1E 00 38 */	stw r0, 0x38(r30)
lbl_800838C4:
/* 800838C4  2C 03 FF FF */	cmpwi r3, -1
/* 800838C8  41 82 00 0C */	beq lbl_800838D4
/* 800838CC  98 7E 00 22 */	stb r3, 0x22(r30)
/* 800838D0  48 00 00 0C */	b lbl_800838DC
lbl_800838D4:
/* 800838D4  38 00 00 00 */	li r0, 0
/* 800838D8  98 1E 00 22 */	stb r0, 0x22(r30)
lbl_800838DC:
/* 800838DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800838E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 800838E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800838E8  7C 08 03 A6 */	mtlr r0
/* 800838EC  38 21 00 10 */	addi r1, r1, 0x10
/* 800838F0  4E 80 00 20 */	blr 
