lbl_8047962C:
/* 8047962C  88 03 0C F0 */	lbz r0, 0xcf0(r3)
/* 80479630  54 00 10 3A */	slwi r0, r0, 2
/* 80479634  3C 80 80 48 */	lis r4, l_callback_8690@ha
/* 80479638  38 84 AF 50 */	addi r4, r4, l_callback_8690@l
/* 8047963C  7C 04 00 2E */	lwzx r0, r4, r0
/* 80479640  90 03 08 6C */	stw r0, 0x86c(r3)
/* 80479644  4E 80 00 20 */	blr 
