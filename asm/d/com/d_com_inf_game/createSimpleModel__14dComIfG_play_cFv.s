lbl_8002CA1C:
/* 8002CA1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002CA20  7C 08 02 A6 */	mflr r0
/* 8002CA24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002CA28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002CA2C  7C 7F 1B 78 */	mr r31, r3
/* 8002CA30  80 03 4E 08 */	lwz r0, 0x4e08(r3)
/* 8002CA34  28 00 00 00 */	cmplwi r0, 0
/* 8002CA38  40 82 00 20 */	bne lbl_8002CA58
/* 8002CA3C  38 60 10 48 */	li r3, 0x1048
/* 8002CA40  48 2A 22 0D */	bl __nw__FUl
/* 8002CA44  7C 60 1B 79 */	or. r0, r3, r3
/* 8002CA48  41 82 00 0C */	beq lbl_8002CA54
/* 8002CA4C  48 01 C2 69 */	bl __ct__15dSmplMdl_draw_cFv
/* 8002CA50  7C 60 1B 78 */	mr r0, r3
lbl_8002CA54:
/* 8002CA54  90 1F 4E 08 */	stw r0, 0x4e08(r31)
lbl_8002CA58:
/* 8002CA58  80 7F 4E 08 */	lwz r3, 0x4e08(r31)
/* 8002CA5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002CA60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002CA64  7C 08 03 A6 */	mtlr r0
/* 8002CA68  38 21 00 10 */	addi r1, r1, 0x10
/* 8002CA6C  4E 80 00 20 */	blr 
