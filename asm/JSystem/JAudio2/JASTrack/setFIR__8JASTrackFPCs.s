lbl_8029285C:
/* 8029285C  38 A0 00 00 */	li r5, 0
/* 80292860  38 00 00 08 */	li r0, 8
/* 80292864  7C 09 03 A6 */	mtctr r0
lbl_80292868:
/* 80292868  7C C4 2A AE */	lhax r6, r4, r5
/* 8029286C  38 05 01 F4 */	addi r0, r5, 0x1f4
/* 80292870  7C C3 03 2E */	sthx r6, r3, r0
/* 80292874  38 A5 00 02 */	addi r5, r5, 2
/* 80292878  42 00 FF F0 */	bdnz lbl_80292868
/* 8029287C  88 83 02 14 */	lbz r4, 0x214(r3)
/* 80292880  80 02 BB D0 */	lwz r0, FILTER_MODE_IIR__6JASDsp(r2)
/* 80292884  7C 80 00 38 */	and r0, r4, r0
/* 80292888  98 03 02 14 */	stb r0, 0x214(r3)
/* 8029288C  88 03 02 14 */	lbz r0, 0x214(r3)
/* 80292890  60 00 00 08 */	ori r0, r0, 8
/* 80292894  98 03 02 14 */	stb r0, 0x214(r3)
/* 80292898  4E 80 00 20 */	blr 
