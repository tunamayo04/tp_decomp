lbl_8011243C:
/* 8011243C  A0 03 2F DC */	lhz r0, 0x2fdc(r3)
/* 80112440  28 00 00 42 */	cmplwi r0, 0x42
/* 80112444  40 82 00 0C */	bne lbl_80112450
/* 80112448  38 63 37 F8 */	addi r3, r3, 0x37f8
/* 8011244C  4E 80 00 20 */	blr 
lbl_80112450:
/* 80112450  38 60 00 00 */	li r3, 0
/* 80112454  4E 80 00 20 */	blr 
