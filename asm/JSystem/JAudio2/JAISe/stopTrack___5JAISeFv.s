lbl_8029F214:
/* 8029F214  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029F218  7C 08 02 A6 */	mflr r0
/* 8029F21C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029F220  88 03 02 DD */	lbz r0, 0x2dd(r3)
/* 8029F224  2C 00 00 01 */	cmpwi r0, 1
/* 8029F228  41 82 00 10 */	beq lbl_8029F238
/* 8029F22C  40 80 00 14 */	bge lbl_8029F240
/* 8029F230  48 00 00 10 */	b lbl_8029F240
/* 8029F234  48 00 00 0C */	b lbl_8029F240
lbl_8029F238:
/* 8029F238  38 63 00 C8 */	addi r3, r3, 0xc8
/* 8029F23C  4B FF 28 3D */	bl stopSeq__8JASTrackFv
lbl_8029F240:
/* 8029F240  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029F244  7C 08 03 A6 */	mtlr r0
/* 8029F248  38 21 00 10 */	addi r1, r1, 0x10
/* 8029F24C  4E 80 00 20 */	blr 
