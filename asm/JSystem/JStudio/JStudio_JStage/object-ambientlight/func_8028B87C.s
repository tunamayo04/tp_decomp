lbl_8028B87C:
/* 8028B87C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028B880  7C 08 02 A6 */	mflr r0
/* 8028B884  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028B888  38 63 00 60 */	addi r3, r3, 0x60
/* 8028B88C  4B FF EB E5 */	bl adaptor_object_data___Q214JStudio_JStage16TAdaptor_object_FPCvUlPCvUl
/* 8028B890  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028B894  7C 08 03 A6 */	mtlr r0
/* 8028B898  38 21 00 10 */	addi r1, r1, 0x10
/* 8028B89C  4E 80 00 20 */	blr 
