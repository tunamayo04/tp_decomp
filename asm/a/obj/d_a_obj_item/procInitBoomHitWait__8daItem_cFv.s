lbl_8015C708:
/* 8015C708  38 00 00 00 */	li r0, 0
/* 8015C70C  90 03 08 D0 */	stw r0, 0x8d0(r3)
/* 8015C710  90 03 08 84 */	stw r0, 0x884(r3)
/* 8015C714  80 03 08 0C */	lwz r0, 0x80c(r3)
/* 8015C718  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 8015C71C  90 03 08 0C */	stw r0, 0x80c(r3)
/* 8015C720  3C 80 00 01 */	lis r4, 0x0001 /* 0x00010020@ha */
/* 8015C724  38 04 00 20 */	addi r0, r4, 0x0020 /* 0x00010020@l */
/* 8015C728  90 03 08 08 */	stw r0, 0x808(r3)
/* 8015C72C  38 00 00 07 */	li r0, 7
/* 8015C730  98 03 09 4A */	stb r0, 0x94a(r3)
/* 8015C734  4E 80 00 20 */	blr 
