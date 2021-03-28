#
# Generate By: dol2asm
# Module: 230
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_sh",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_e_sh",
	"global_destructor_chain",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".rodata",
	".data",
	".bss",
	".dtors",
]

# Symbols
SYMBOLS = [
	{'addr':0x8078E260,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078E28C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078E2B8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078E2D8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078E2F4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078E34C,'size':104,'pad':0,'label':"__ct__12daE_SH_HIO_cFv",'name':"__ct__12daE_SH_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078E3B4,'size':172,'pad':0,'label':"anm_init__FP10e_sh_classifUcf",'name':"anm_init__FP10e_sh_classifUcf",'lib':-1,'tu':2,'section':0,'r':[6,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078E460,'size':600,'pad':0,'label':"nodeCallBack__FP8J3DJointi",'name':"nodeCallBack__FP8J3DJointi",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078E6B8,'size':432,'pad':0,'label':"daE_SH_Draw__FP10e_sh_class",'name':"daE_SH_Draw__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078E868,'size':496,'pad':0,'label':"damage_check__FP10e_sh_class",'name':"damage_check__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078EA58,'size':428,'pad':0,'label':"e_sh_stop__FP10e_sh_class",'name':"e_sh_stop__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078EC04,'size':200,'pad':0,'label':"e_sh_appear__FP10e_sh_class",'name':"e_sh_appear__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078ECCC,'size':2652,'pad':0,'label':"e_sh_move__FP10e_sh_class",'name':"e_sh_move__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078F728,'size':784,'pad':0,'label':"e_sh_attack__FP10e_sh_class",'name':"e_sh_attack__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078FA38,'size':400,'pad':0,'label':"e_sh_disappear__FP10e_sh_class",'name':"e_sh_disappear__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078FBC8,'size':248,'pad':0,'label':"e_sh_damage__FP10e_sh_class",'name':"e_sh_damage__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078FCC0,'size':240,'pad':0,'label':"e_sh_dead__FP10e_sh_class",'name':"e_sh_dead__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8078FDB0,'size':1224,'pad':0,'label':"action__FP10e_sh_class",'name':"action__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80790278,'size':544,'pad':0,'label':"eff_set__FP10e_sh_class",'name':"eff_set__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80790498,'size':1208,'pad':0,'label':"anm_se_set__FP10e_sh_class",'name':"anm_se_set__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80790950,'size':1648,'pad':0,'label':"daE_SH_Execute__FP10e_sh_class",'name':"daE_SH_Execute__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80790FC0,'size':8,'pad':0,'label':"daE_SH_IsDelete__FP10e_sh_class",'name':"daE_SH_IsDelete__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80790FC8,'size':104,'pad':0,'label':"daE_SH_Delete__FP10e_sh_class",'name':"daE_SH_Delete__FP10e_sh_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80791030,'size':424,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807911D8,'size':888,'pad':0,'label':"daE_SH_Create__FP10fopAc_ac_c",'name':"daE_SH_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80791550,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80791598,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807915E0,'size':204,'pad':0,'label':"__dt__8dCcD_SphFv",'name':"__dt__8dCcD_SphFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807916AC,'size':132,'pad':0,'label':"__ct__8dCcD_SphFv",'name':"__ct__8dCcD_SphFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80791730,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8079178C,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807917FC,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8079186C,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807918B4,'size':72,'pad':0,'label':"__dt__12daE_SH_HIO_cFv",'name':"__dt__12daE_SH_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807918FC,'size':60,'pad':0,'label':"__sinit_d_a_e_sh_cpp",'name':"__sinit_d_a_e_sh_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80791938,'size':8,'pad':0,'label':"func_80791938",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80791940,'size':8,'pad':0,'label':"func_80791940",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80791948,'size':1044,'pad':0,'label':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'name':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80791D5C,'size':8,'pad':0,'label':"data_80791D5C",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80791D64,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80791D68,'size':8,'pad':0,'label':"pad_80791D68",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80791D70,'size':4,'pad':0,'label':"lit_3902",'name':"@3902",'lib':-1,'tu':2,'section':2,'r':[13,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791D74,'size':4,'pad':0,'label':"lit_3903",'name':"@3903",'lib':-1,'tu':2,'section':2,'r':[11,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791D78,'size':4,'pad':4,'label':"lit_3904",'name':"@3904",'lib':-1,'tu':2,'section':2,'r':[13,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791D80,'size':8,'pad':0,'label':"lit_3905",'name':"@3905",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791D88,'size':8,'pad':0,'label':"lit_3906",'name':"@3906",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791D90,'size':8,'pad':0,'label':"lit_3907",'name':"@3907",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791D98,'size':4,'pad':0,'label':"lit_3908",'name':"@3908",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791D9C,'size':4,'pad':0,'label':"lit_3923",'name':"@3923",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DA0,'size':4,'pad':0,'label':"lit_3924",'name':"@3924",'lib':-1,'tu':2,'section':2,'r':[6,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DA4,'size':4,'pad':0,'label':"lit_3925",'name':"@3925",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DA8,'size':4,'pad':0,'label':"lit_3926",'name':"@3926",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DAC,'size':4,'pad':0,'label':"lit_3927",'name':"@3927",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DB0,'size':4,'pad':0,'label':"lit_3928",'name':"@3928",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DB4,'size':4,'pad':0,'label':"lit_3929",'name':"@3929",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DB8,'size':4,'pad':0,'label':"lit_3930",'name':"@3930",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DBC,'size':4,'pad':0,'label':"lit_3944",'name':"@3944",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DC0,'size':4,'pad':0,'label':"lit_4060",'name':"@4060",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DC4,'size':4,'pad':0,'label':"lit_4061",'name':"@4061",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DC8,'size':4,'pad':0,'label':"lit_4144",'name':"@4144",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DCC,'size':4,'pad':0,'label':"lit_4145",'name':"@4145",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DD0,'size':4,'pad':0,'label':"lit_4214",'name':"@4214",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DD4,'size':4,'pad':0,'label':"lit_4237",'name':"@4237",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DD8,'size':4,'pad':0,'label':"lit_4378",'name':"@4378",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DDC,'size':4,'pad':0,'label':"lit_4379",'name':"@4379",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DE0,'size':4,'pad':0,'label':"lit_4380",'name':"@4380",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DE4,'size':4,'pad':0,'label':"lit_4381",'name':"@4381",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DE8,'size':4,'pad':0,'label':"lit_4382",'name':"@4382",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DEC,'size':4,'pad':0,'label':"lit_4383",'name':"@4383",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DF0,'size':4,'pad':0,'label':"lit_4384",'name':"@4384",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DF4,'size':4,'pad':0,'label':"lit_4385",'name':"@4385",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DF8,'size':4,'pad':0,'label':"lit_4386",'name':"@4386",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791DFC,'size':4,'pad':0,'label':"lit_4387",'name':"@4387",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E00,'size':4,'pad':0,'label':"lit_4388",'name':"@4388",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E04,'size':4,'pad':0,'label':"lit_4389",'name':"@4389",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E08,'size':4,'pad':0,'label':"lit_4390",'name':"@4390",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E0C,'size':4,'pad':0,'label':"lit_4391",'name':"@4391",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E10,'size':4,'pad':0,'label':"lit_4392",'name':"@4392",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E14,'size':4,'pad':0,'label':"lit_4449",'name':"@4449",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E18,'size':4,'pad':0,'label':"lit_4450",'name':"@4450",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E1C,'size':4,'pad':0,'label':"lit_4534",'name':"@4534",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E20,'size':4,'pad':0,'label':"lit_4633",'name':"@4633",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E24,'size':4,'pad':0,'label':"lit_4634",'name':"@4634",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E28,'size':4,'pad':0,'label':"lit_4635",'name':"@4635",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E2C,'size':4,'pad':0,'label':"lit_4636",'name':"@4636",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E30,'size':4,'pad':0,'label':"lit_4842",'name':"@4842",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E34,'size':4,'pad':0,'label':"lit_4843",'name':"@4843",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E38,'size':4,'pad':0,'label':"lit_4844",'name':"@4844",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E3C,'size':4,'pad':0,'label':"lit_4845",'name':"@4845",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E40,'size':4,'pad':0,'label':"lit_4846",'name':"@4846",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E44,'size':4,'pad':0,'label':"lit_4847",'name':"@4847",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E48,'size':4,'pad':0,'label':"lit_4848",'name':"@4848",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E4C,'size':4,'pad':0,'label':"lit_4849",'name':"@4849",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E50,'size':4,'pad':0,'label':"lit_4850",'name':"@4850",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E54,'size':4,'pad':0,'label':"lit_4851",'name':"@4851",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E58,'size':4,'pad':0,'label':"lit_4852",'name':"@4852",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E5C,'size':4,'pad':0,'label':"lit_4853",'name':"@4853",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E60,'size':4,'pad':0,'label':"lit_4854",'name':"@4854",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E64,'size':4,'pad':0,'label':"lit_4855",'name':"@4855",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E68,'size':4,'pad':0,'label':"lit_4856",'name':"@4856",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E6C,'size':4,'pad':0,'label':"lit_4857",'name':"@4857",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E70,'size':4,'pad':0,'label':"lit_4858",'name':"@4858",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E74,'size':4,'pad':0,'label':"lit_4859",'name':"@4859",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E78,'size':4,'pad':0,'label':"lit_4860",'name':"@4860",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E7C,'size':4,'pad':0,'label':"lit_4861",'name':"@4861",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E80,'size':4,'pad':0,'label':"lit_5014",'name':"@5014",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E84,'size':4,'pad':0,'label':"lit_5015",'name':"@5015",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E88,'size':4,'pad':0,'label':"lit_5016",'name':"@5016",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E8C,'size':4,'pad':0,'label':"lit_5017",'name':"@5017",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E90,'size':4,'pad':0,'label':"lit_5018",'name':"@5018",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E94,'size':4,'pad':0,'label':"lit_5019",'name':"@5019",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E98,'size':4,'pad':0,'label':"lit_5020",'name':"@5020",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791E9C,'size':4,'pad':0,'label':"lit_5021",'name':"@5021",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791EA0,'size':4,'pad':0,'label':"lit_5022",'name':"@5022",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791EA4,'size':4,'pad':0,'label':"lit_5023",'name':"@5023",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791EA8,'size':4,'pad':0,'label':"lit_5189",'name':"@5189",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791EAC,'size':4,'pad':0,'label':"lit_5190",'name':"@5190",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791EB0,'size':4,'pad':4,'label':"lit_5191",'name':"@5191",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791EB8,'size':8,'pad':0,'label':"lit_5193",'name':"@5193",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791EC0,'size':5,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80791EC8,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791ED4,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80791EE8,'size':8,'pad':0,'label':"e_prim",'name':"e_prim$3781",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791EF0,'size':8,'pad':0,'label':"e_env",'name':"e_env$3782",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791EF8,'size':6,'pad':2,'label':"eff_id",'name':"eff_id$3790",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791F00,'size':6,'pad':2,'label':"ap_name",'name':"ap_name$4188",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791F08,'size':6,'pad':2,'label':"dp_name",'name':"dp_name$4457",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791F10,'size':48,'pad':0,'label':"lit_4637",'name':"@4637",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80791F40,'size':4,'pad':0,'label':"p_name",'name':"p_name$4647",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791F44,'size':8,'pad':0,'label':"p_idx",'name':"p_idx$4648",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791F4C,'size':100,'pad':0,'label':"time_scale",'name':"time_scale$4874",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791FB0,'size':64,'pad':0,'label':"cc_sph_src",'name':"cc_sph_src$5107",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80791FF0,'size':64,'pad':0,'label':"at_sph_src",'name':"at_sph_src$5108",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80792030,'size':32,'pad':0,'label':"l_daE_SH_Method",'name':"l_daE_SH_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80792050,'size':48,'pad':0,'label':"g_profile_E_SH",'name':"g_profile_E_SH",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80792080,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8079208C,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80792098,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807920A4,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807920B0,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807920BC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807920E0,'size':12,'pad':0,'label':"__vt__12daE_SH_HIO_c",'name':"__vt__12daE_SH_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807920F0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807920F8,'size':4,'pad':0,'label':"data_807920F8",'name':None,'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807920FC,'size':12,'pad':0,'label':"lit_3918",'name':"@3918",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80792108,'size':44,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[8,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__12daE_SH_HIO_cFv":5,
	"anm_init__FP10e_sh_classifUcf":6,
	"nodeCallBack__FP8J3DJointi":7,
	"daE_SH_Draw__FP10e_sh_class":8,
	"damage_check__FP10e_sh_class":9,
	"e_sh_stop__FP10e_sh_class":10,
	"e_sh_appear__FP10e_sh_class":11,
	"e_sh_move__FP10e_sh_class":12,
	"e_sh_attack__FP10e_sh_class":13,
	"e_sh_disappear__FP10e_sh_class":14,
	"e_sh_damage__FP10e_sh_class":15,
	"e_sh_dead__FP10e_sh_class":16,
	"action__FP10e_sh_class":17,
	"eff_set__FP10e_sh_class":18,
	"anm_se_set__FP10e_sh_class":19,
	"daE_SH_Execute__FP10e_sh_class":20,
	"daE_SH_IsDelete__FP10e_sh_class":21,
	"daE_SH_Delete__FP10e_sh_class":22,
	"useHeapInit__FP10fopAc_ac_c":23,
	"daE_SH_Create__FP10fopAc_ac_c":24,
	"__dt__8cM3dGSphFv":25,
	"__dt__8cM3dGAabFv":26,
	"__dt__8dCcD_SphFv":27,
	"__ct__8dCcD_SphFv":28,
	"__dt__10dCcD_GSttsFv":29,
	"__dt__12dBgS_ObjAcchFv":30,
	"__dt__12dBgS_AcchCirFv":31,
	"__dt__10cCcD_GSttsFv":32,
	"__dt__12daE_SH_HIO_cFv":33,
	"__sinit_d_a_e_sh_cpp":34,
	"func_80791938":35,
	"func_80791940":36,
	"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz":37,
	"data_80791D5C":38,
	"__destroy_global_chain_reference":39,
	"pad_80791D68":40,
	"lit_3902":41,
	"lit_3903":42,
	"lit_3904":43,
	"lit_3905":44,
	"lit_3906":45,
	"lit_3907":46,
	"lit_3908":47,
	"lit_3923":48,
	"lit_3924":49,
	"lit_3925":50,
	"lit_3926":51,
	"lit_3927":52,
	"lit_3928":53,
	"lit_3929":54,
	"lit_3930":55,
	"lit_3944":56,
	"lit_4060":57,
	"lit_4061":58,
	"lit_4144":59,
	"lit_4145":60,
	"lit_4214":61,
	"lit_4237":62,
	"lit_4378":63,
	"lit_4379":64,
	"lit_4380":65,
	"lit_4381":66,
	"lit_4382":67,
	"lit_4383":68,
	"lit_4384":69,
	"lit_4385":70,
	"lit_4386":71,
	"lit_4387":72,
	"lit_4388":73,
	"lit_4389":74,
	"lit_4390":75,
	"lit_4391":76,
	"lit_4392":77,
	"lit_4449":78,
	"lit_4450":79,
	"lit_4534":80,
	"lit_4633":81,
	"lit_4634":82,
	"lit_4635":83,
	"lit_4636":84,
	"lit_4842":85,
	"lit_4843":86,
	"lit_4844":87,
	"lit_4845":88,
	"lit_4846":89,
	"lit_4847":90,
	"lit_4848":91,
	"lit_4849":92,
	"lit_4850":93,
	"lit_4851":94,
	"lit_4852":95,
	"lit_4853":96,
	"lit_4854":97,
	"lit_4855":98,
	"lit_4856":99,
	"lit_4857":100,
	"lit_4858":101,
	"lit_4859":102,
	"lit_4860":103,
	"lit_4861":104,
	"lit_5014":105,
	"lit_5015":106,
	"lit_5016":107,
	"lit_5017":108,
	"lit_5018":109,
	"lit_5019":110,
	"lit_5020":111,
	"lit_5021":112,
	"lit_5022":113,
	"lit_5023":114,
	"lit_5189":115,
	"lit_5190":116,
	"lit_5191":117,
	"lit_5193":118,
	"stringBase0":119,
	"cNullVec__6Z2Calc":120,
	"lit_1787":121,
	"e_prim":122,
	"e_env":123,
	"eff_id":124,
	"ap_name":125,
	"dp_name":126,
	"lit_4637":127,
	"p_name":128,
	"p_idx":129,
	"time_scale":130,
	"cc_sph_src":131,
	"at_sph_src":132,
	"l_daE_SH_Method":133,
	"g_profile_E_SH":134,
	"__vt__12dBgS_AcchCir":135,
	"__vt__10cCcD_GStts":136,
	"__vt__10dCcD_GStts":137,
	"__vt__8cM3dGSph":138,
	"__vt__8cM3dGAab":139,
	"__vt__12dBgS_ObjAcch":140,
	"__vt__12daE_SH_HIO_c":141,
	"__global_destructor_chain":142,
	"data_807920F8":143,
	"lit_3918":144,
	"l_HIO":145,
}

