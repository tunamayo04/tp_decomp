lbl_80208808:
/* 80208808  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020880C  7C 08 02 A6 */	mflr r0
/* 80208810  90 01 00 14 */	stw r0, 0x14(r1)
/* 80208814  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80208818  7C 7F 1B 78 */	mr r31, r3
/* 8020881C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80208820  28 03 00 00 */	cmplwi r3, 0
/* 80208824  41 82 00 68 */	beq lbl_8020888C
/* 80208828  48 04 D0 01 */	bl getAlphaRate__13CPaneMgrAlphaFv
/* 8020882C  C0 02 AD 48 */	lfs f0, lit_4146(r2)
/* 80208830  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80208834  41 82 00 58 */	beq lbl_8020888C
/* 80208838  A8 1F 04 A2 */	lha r0, 0x4a2(r31)
/* 8020883C  2C 00 00 00 */	cmpwi r0, 0
/* 80208840  40 82 00 0C */	bne lbl_8020884C
/* 80208844  38 00 00 1E */	li r0, 0x1e
/* 80208848  B0 1F 04 A2 */	sth r0, 0x4a2(r31)
lbl_8020884C:
/* 8020884C  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 80208850  C0 22 AD 48 */	lfs f1, lit_4146(r2)
/* 80208854  48 04 CF 7D */	bl setAlphaRate__13CPaneMgrAlphaFf
/* 80208858  38 00 00 00 */	li r0, 0
/* 8020885C  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 80208860  B0 03 00 16 */	sth r0, 0x16(r3)
/* 80208864  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 80208868  48 04 CF C1 */	bl getAlphaRate__13CPaneMgrAlphaFv
/* 8020886C  C0 02 AD 48 */	lfs f0, lit_4146(r2)
/* 80208870  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80208874  40 82 00 18 */	bne lbl_8020888C
/* 80208878  7F E3 FB 78 */	mr r3, r31
/* 8020887C  38 80 00 0F */	li r4, 0xf
/* 80208880  48 00 20 CD */	bl hide_button__14dMeterButton_cFUc
/* 80208884  38 00 00 00 */	li r0, 0
/* 80208888  98 1F 04 CF */	stb r0, 0x4cf(r31)
lbl_8020888C:
/* 8020888C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80208890  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80208894  7C 08 03 A6 */	mtlr r0
/* 80208898  38 21 00 10 */	addi r1, r1, 0x10
/* 8020889C  4E 80 00 20 */	blr 
