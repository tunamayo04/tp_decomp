lbl_80AD7B54:
/* 80AD7B54  80 83 00 00 */	lwz r4, 0(r3)
/* 80AD7B58  2C 04 00 00 */	cmpwi r4, 0
/* 80AD7B5C  41 82 00 0C */	beq lbl_80AD7B68
/* 80AD7B60  38 04 FF FF */	addi r0, r4, -1
/* 80AD7B64  90 03 00 00 */	stw r0, 0(r3)
lbl_80AD7B68:
/* 80AD7B68  80 63 00 00 */	lwz r3, 0(r3)
/* 80AD7B6C  4E 80 00 20 */	blr 
