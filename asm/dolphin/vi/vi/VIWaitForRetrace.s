lbl_8034C9C4:
/* 8034C9C4  7C 08 02 A6 */	mflr r0
/* 8034C9C8  90 01 00 04 */	stw r0, 4(r1)
/* 8034C9CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034C9D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034C9D4  93 C1 00 08 */	stw r30, 8(r1)
/* 8034C9D8  4B FF 0D 1D */	bl OSDisableInterrupts
/* 8034C9DC  83 CD 92 64 */	lwz r30, retraceCount(r13)
/* 8034C9E0  7C 7F 1B 78 */	mr r31, r3
lbl_8034C9E4:
/* 8034C9E4  38 6D 92 6C */	la r3, retraceQueue(r13) /* 804517EC-_SDA_BASE_ */
/* 8034C9E8  4B FF 51 C5 */	bl OSSleepThread
/* 8034C9EC  80 0D 92 64 */	lwz r0, retraceCount(r13)
/* 8034C9F0  7C 1E 00 40 */	cmplw r30, r0
/* 8034C9F4  41 82 FF F0 */	beq lbl_8034C9E4
/* 8034C9F8  7F E3 FB 78 */	mr r3, r31
/* 8034C9FC  4B FF 0D 21 */	bl OSRestoreInterrupts
/* 8034CA00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034CA04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034CA08  83 C1 00 08 */	lwz r30, 8(r1)
/* 8034CA0C  38 21 00 10 */	addi r1, r1, 0x10
/* 8034CA10  7C 08 03 A6 */	mtlr r0
/* 8034CA14  4E 80 00 20 */	blr 
