lbl_80658C78:
/* 80658C78  A0 83 05 68 */	lhz r4, 0x568(r3)
/* 80658C7C  54 80 05 EF */	rlwinm. r0, r4, 0, 0x17, 0x17
/* 80658C80  41 82 00 1C */	beq lbl_80658C9C
/* 80658C84  54 80 06 2C */	rlwinm r0, r4, 0, 0x18, 0x16
/* 80658C88  B0 03 05 68 */	sth r0, 0x568(r3)
/* 80658C8C  38 00 00 00 */	li r0, 0
/* 80658C90  98 03 0C A8 */	stb r0, 0xca8(r3)
/* 80658C94  38 60 00 01 */	li r3, 1
/* 80658C98  4E 80 00 20 */	blr 
lbl_80658C9C:
/* 80658C9C  38 60 00 00 */	li r3, 0
/* 80658CA0  4E 80 00 20 */	blr 
