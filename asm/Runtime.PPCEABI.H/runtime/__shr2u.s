lbl_80362670:
/* 80362670  21 05 00 20 */	subfic r8, r5, 0x20
/* 80362674  31 25 FF E0 */	addic r9, r5, -32
/* 80362678  7C 84 2C 30 */	srw r4, r4, r5
/* 8036267C  7C 6A 40 30 */	slw r10, r3, r8
/* 80362680  7C 84 53 78 */	or r4, r4, r10
/* 80362684  7C 6A 4C 30 */	srw r10, r3, r9
/* 80362688  7C 84 53 78 */	or r4, r4, r10
/* 8036268C  7C 63 2C 30 */	srw r3, r3, r5
/* 80362690  4E 80 00 20 */	blr 
