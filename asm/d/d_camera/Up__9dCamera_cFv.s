lbl_80181E20:
/* 80181E20  80 04 06 0C */	lwz r0, 0x60c(r4)
/* 80181E24  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80181E28  41 82 00 20 */	beq lbl_80181E48
/* 80181E2C  C0 04 07 58 */	lfs f0, 0x758(r4)
/* 80181E30  D0 03 00 00 */	stfs f0, 0(r3)
/* 80181E34  C0 04 07 5C */	lfs f0, 0x75c(r4)
/* 80181E38  D0 03 00 04 */	stfs f0, 4(r3)
/* 80181E3C  C0 04 07 60 */	lfs f0, 0x760(r4)
/* 80181E40  D0 03 00 08 */	stfs f0, 8(r3)
/* 80181E44  4E 80 00 20 */	blr 
lbl_80181E48:
/* 80181E48  C0 04 00 48 */	lfs f0, 0x48(r4)
/* 80181E4C  D0 03 00 00 */	stfs f0, 0(r3)
/* 80181E50  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 80181E54  D0 03 00 04 */	stfs f0, 4(r3)
/* 80181E58  C0 04 00 50 */	lfs f0, 0x50(r4)
/* 80181E5C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80181E60  4E 80 00 20 */	blr 
