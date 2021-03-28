#
# Generate By: dol2asm
# Module: 175
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_bi",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_e_bi",
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
	{'addr':0x8068A500,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068A52C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068A558,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068A578,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,2,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068A594,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068A5EC,'size':72,'pad':0,'label':"__ct__12daE_BI_HIO_cFv",'name':"__ct__12daE_BI_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068A634,'size':172,'pad':0,'label':"anm_init__FP10e_bi_classifUcf",'name':"anm_init__FP10e_bi_classifUcf",'lib':-1,'tu':2,'section':0,'r':[6,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068A6E0,'size':556,'pad':0,'label':"daE_BI_Draw__FP10e_bi_class",'name':"daE_BI_Draw__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068A90C,'size':96,'pad':0,'label':"pl_check__FP10e_bi_classf",'name':"pl_check__FP10e_bi_classf",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068A96C,'size':620,'pad':0,'label':"damage_check__FP10e_bi_class",'name':"damage_check__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068ABD8,'size':760,'pad':0,'label':"e_bi_wait__FP10e_bi_class",'name':"e_bi_wait__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068AED0,'size':408,'pad':0,'label':"e_bi_up__FP10e_bi_class",'name':"e_bi_up__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068B068,'size':960,'pad':0,'label':"e_bi_move__FP10e_bi_class",'name':"e_bi_move__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068B428,'size':828,'pad':0,'label':"e_bi_ex__FP10e_bi_class",'name':"e_bi_ex__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068B764,'size':468,'pad':0,'label':"e_bi_water__FP10e_bi_class",'name':"e_bi_water__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068B938,'size':240,'pad':0,'label':"e_bi_disap__FP10e_bi_class",'name':"e_bi_disap__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068BA28,'size':184,'pad':0,'label':"water_check__FP10e_bi_class",'name':"water_check__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068BAE0,'size':1416,'pad':0,'label':"action__FP10e_bi_class",'name':"action__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068C068,'size':384,'pad':0,'label':"s_fw_sub__FPvPv",'name':"s_fw_sub__FPvPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068C1E8,'size':360,'pad':0,'label':"ride_movebg_init__FP10e_bi_class",'name':"ride_movebg_init__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068C350,'size':120,'pad':0,'label':"__dt__14dBgS_ObjGndChkFv",'name':"__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068C3C8,'size':1744,'pad':0,'label':"daE_BI_Execute__FP10e_bi_class",'name':"daE_BI_Execute__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068CA98,'size':8,'pad':0,'label':"daE_BI_IsDelete__FP10e_bi_class",'name':"daE_BI_IsDelete__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x8068CAA0,'size':104,'pad':0,'label':"daE_BI_Delete__FP10e_bi_class",'name':"daE_BI_Delete__FP10e_bi_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068CB08,'size':248,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068CC00,'size':1152,'pad':0,'label':"daE_BI_Create__FP10fopAc_ac_c",'name':"daE_BI_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D080,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D0F0,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D160,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D1A8,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D1F0,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D238,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D294,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D2DC,'size':72,'pad':0,'label':"__dt__12daE_BI_HIO_cFv",'name':"__dt__12daE_BI_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D324,'size':60,'pad':0,'label':"__sinit_d_a_e_bi_cpp",'name':"__sinit_d_a_e_bi_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D360,'size':8,'pad':0,'label':"func_8068D360",'name':"@20@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D368,'size':8,'pad':0,'label':"func_8068D368",'name':"@76@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D370,'size':8,'pad':0,'label':"func_8068D370",'name':"@60@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D378,'size':8,'pad':0,'label':"func_8068D378",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D380,'size':8,'pad':0,'label':"func_8068D380",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D388,'size':1044,'pad':0,'label':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'name':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D79C,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068D7D8,'size':8,'pad':0,'label':"data_8068D7D8",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068D7E0,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068D7E4,'size':8,'pad':0,'label':"pad_8068D7E4",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068D7EC,'size':4,'pad':0,'label':"lit_3903",'name':"@3903",'lib':-1,'tu':2,'section':2,'r':[13,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D7F0,'size':4,'pad':0,'label':"lit_3904",'name':"@3904",'lib':-1,'tu':2,'section':2,'r':[13,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D7F4,'size':4,'pad':4,'label':"lit_3905",'name':"@3905",'lib':-1,'tu':2,'section':2,'r':[10,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D7FC,'size':8,'pad':0,'label':"lit_3906",'name':"@3906",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D804,'size':8,'pad':0,'label':"lit_3907",'name':"@3907",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D80C,'size':8,'pad':0,'label':"lit_3908",'name':"@3908",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D814,'size':4,'pad':0,'label':"lit_3909",'name':"@3909",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D818,'size':4,'pad':0,'label':"lit_3924",'name':"@3924",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D81C,'size':4,'pad':0,'label':"lit_3925",'name':"@3925",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D820,'size':4,'pad':0,'label':"lit_3926",'name':"@3926",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D824,'size':4,'pad':0,'label':"lit_3940",'name':"@3940",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D828,'size':4,'pad':0,'label':"lit_4073",'name':"@4073",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D82C,'size':4,'pad':0,'label':"lit_4207",'name':"@4207",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D830,'size':4,'pad':0,'label':"lit_4208",'name':"@4208",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D834,'size':4,'pad':0,'label':"lit_4209",'name':"@4209",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D838,'size':4,'pad':0,'label':"lit_4210",'name':"@4210",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D83C,'size':4,'pad':0,'label':"lit_4315",'name':"@4315",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D840,'size':4,'pad':0,'label':"lit_4316",'name':"@4316",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D844,'size':4,'pad':0,'label':"lit_4317",'name':"@4317",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D848,'size':4,'pad':0,'label':"lit_4410",'name':"@4410",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D84C,'size':4,'pad':0,'label':"lit_4411",'name':"@4411",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D850,'size':4,'pad':0,'label':"lit_4412",'name':"@4412",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D854,'size':4,'pad':0,'label':"lit_4413",'name':"@4413",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D858,'size':4,'pad':0,'label':"lit_4414",'name':"@4414",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D85C,'size':4,'pad':0,'label':"lit_4415",'name':"@4415",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D860,'size':4,'pad':0,'label':"lit_4454",'name':"@4454",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D864,'size':4,'pad':0,'label':"lit_4455",'name':"@4455",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D868,'size':4,'pad':0,'label':"lit_4456",'name':"@4456",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D86C,'size':4,'pad':0,'label':"lit_4457",'name':"@4457",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D870,'size':4,'pad':0,'label':"lit_4473",'name':"@4473",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D874,'size':8,'pad':0,'label':"lit_4476",'name':"@4476",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D87C,'size':4,'pad':0,'label':"lit_4485",'name':"@4485",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D880,'size':4,'pad':0,'label':"lit_4659",'name':"@4659",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D884,'size':4,'pad':0,'label':"lit_4660",'name':"@4660",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D888,'size':4,'pad':0,'label':"lit_4661",'name':"@4661",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D88C,'size':4,'pad':0,'label':"lit_4704",'name':"@4704",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D890,'size':4,'pad':0,'label':"lit_4738",'name':"@4738",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D894,'size':4,'pad':0,'label':"lit_4906",'name':"@4906",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D898,'size':4,'pad':0,'label':"lit_4907",'name':"@4907",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D89C,'size':4,'pad':0,'label':"lit_4908",'name':"@4908",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8A0,'size':4,'pad':0,'label':"lit_4909",'name':"@4909",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8A4,'size':4,'pad':0,'label':"lit_4910",'name':"@4910",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8A8,'size':4,'pad':0,'label':"lit_4911",'name':"@4911",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8AC,'size':4,'pad':0,'label':"lit_4912",'name':"@4912",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8B0,'size':4,'pad':0,'label':"lit_4913",'name':"@4913",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8B4,'size':4,'pad':0,'label':"lit_4914",'name':"@4914",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8B8,'size':4,'pad':0,'label':"lit_4915",'name':"@4915",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8BC,'size':4,'pad':0,'label':"lit_4916",'name':"@4916",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8C0,'size':4,'pad':0,'label':"lit_4917",'name':"@4917",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8C4,'size':4,'pad':0,'label':"lit_4918",'name':"@4918",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8C8,'size':4,'pad':0,'label':"lit_4919",'name':"@4919",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8CC,'size':4,'pad':0,'label':"lit_4920",'name':"@4920",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8D0,'size':4,'pad':0,'label':"lit_5096",'name':"@5096",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8D4,'size':4,'pad':0,'label':"lit_5097",'name':"@5097",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D8D8,'size':18,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x8068D8EC,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D8F8,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068D90C,'size':8,'pad':0,'label':"e_prim",'name':"e_prim$3782",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D914,'size':8,'pad':0,'label':"e_env",'name':"e_env$3783",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D91C,'size':6,'pad':2,'label':"eff_id",'name':"eff_id$3791",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D924,'size':10,'pad':2,'label':"ex_eff_id",'name':"ex_eff_id$4336",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D930,'size':8,'pad':0,'label':"w_eff_id",'name':"w_eff_id$4525",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D938,'size':32,'pad':0,'label':"lit_4662",'name':"@4662",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068D958,'size':68,'pad':0,'label':"cc_cyl_src",'name':"cc_cyl_src$4970",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D99C,'size':64,'pad':0,'label':"at_sph_src",'name':"at_sph_src$4971",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068D9DC,'size':32,'pad':0,'label':"l_daE_BI_Method",'name':"l_daE_BI_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068D9FC,'size':48,'pad':0,'label':"g_profile_E_BI",'name':"g_profile_E_BI",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068DA2C,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068DA38,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068DA44,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068DA50,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068DA74,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068DA80,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068DA8C,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068DA98,'size':48,'pad':0,'label':"__vt__14dBgS_ObjGndChk",'name':"__vt__14dBgS_ObjGndChk",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068DAC8,'size':12,'pad':0,'label':"__vt__12daE_BI_HIO_c",'name':"__vt__12daE_BI_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8068DAD8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DAE0,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DAE4,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DAE8,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DAEC,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DAF0,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DAF4,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DAF8,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DAFC,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB00,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB04,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB08,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB0C,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB10,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB14,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB18,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB1C,'size':4,'pad':0,'label':"struct_8068DB1C",'name':None,'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x8068DB20,'size':12,'pad':0,'label':"lit_3919",'name':"@3919",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB2C,'size':28,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[6,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB48,'size':12,'pad':4,'label':"lit_4522",'name':"@4522",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB58,'size':12,'pad':0,'label':"data_8068DB58",'name':"sc$4521",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB64,'size':4,'pad':0,'label':"data_8068DB64",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB68,'size':4,'pad':0,'label':"data_8068DB68",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB6C,'size':4,'pad':0,'label':"data_8068DB6C",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB70,'size':4,'pad':0,'label':"data_8068DB70",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB74,'size':4,'pad':0,'label':"data_8068DB74",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB78,'size':4,'pad':0,'label':"data_8068DB78",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB7C,'size':4,'pad':0,'label':"data_8068DB7C",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB80,'size':4,'pad':0,'label':"data_8068DB80",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB84,'size':4,'pad':0,'label':"data_8068DB84",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB88,'size':4,'pad':0,'label':"data_8068DB88",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB8C,'size':4,'pad':0,'label':"data_8068DB8C",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB90,'size':4,'pad':0,'label':"data_8068DB90",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB94,'size':4,'pad':0,'label':"data_8068DB94",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB98,'size':4,'pad':0,'label':"data_8068DB98",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DB9C,'size':4,'pad':0,'label':"data_8068DB9C",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DBA0,'size':4,'pad':0,'label':"data_8068DBA0",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DBA4,'size':4,'pad':0,'label':"data_8068DBA4",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DBA8,'size':4,'pad':0,'label':"data_8068DBA8",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DBAC,'size':4,'pad':0,'label':"data_8068DBAC",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DBB0,'size':4,'pad':0,'label':"data_8068DBB0",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DBB4,'size':4,'pad':0,'label':"data_8068DBB4",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DBB8,'size':4,'pad':0,'label':"data_8068DBB8",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DBBC,'size':4,'pad':0,'label':"data_8068DBBC",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DBC0,'size':4,'pad':0,'label':"data_8068DBC0",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068DBC4,'size':4,'pad':0,'label':"data_8068DBC4",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__12daE_BI_HIO_cFv":5,
	"anm_init__FP10e_bi_classifUcf":6,
	"daE_BI_Draw__FP10e_bi_class":7,
	"pl_check__FP10e_bi_classf":8,
	"damage_check__FP10e_bi_class":9,
	"e_bi_wait__FP10e_bi_class":10,
	"e_bi_up__FP10e_bi_class":11,
	"e_bi_move__FP10e_bi_class":12,
	"e_bi_ex__FP10e_bi_class":13,
	"e_bi_water__FP10e_bi_class":14,
	"e_bi_disap__FP10e_bi_class":15,
	"water_check__FP10e_bi_class":16,
	"action__FP10e_bi_class":17,
	"s_fw_sub__FPvPv":18,
	"ride_movebg_init__FP10e_bi_class":19,
	"__dt__14dBgS_ObjGndChkFv":20,
	"daE_BI_Execute__FP10e_bi_class":21,
	"daE_BI_IsDelete__FP10e_bi_class":22,
	"daE_BI_Delete__FP10e_bi_class":23,
	"useHeapInit__FP10fopAc_ac_c":24,
	"daE_BI_Create__FP10fopAc_ac_c":25,
	"__dt__12dBgS_ObjAcchFv":26,
	"__dt__12dBgS_AcchCirFv":27,
	"__dt__8cM3dGSphFv":28,
	"__dt__8cM3dGCylFv":29,
	"__dt__8cM3dGAabFv":30,
	"__dt__10dCcD_GSttsFv":31,
	"__dt__10cCcD_GSttsFv":32,
	"__dt__12daE_BI_HIO_cFv":33,
	"__sinit_d_a_e_bi_cpp":34,
	"func_8068D360":35,
	"func_8068D368":36,
	"func_8068D370":37,
	"func_8068D378":38,
	"func_8068D380":39,
	"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz":40,
	"__dt__4cXyzFv":41,
	"data_8068D7D8":42,
	"__destroy_global_chain_reference":43,
	"pad_8068D7E4":44,
	"lit_3903":45,
	"lit_3904":46,
	"lit_3905":47,
	"lit_3906":48,
	"lit_3907":49,
	"lit_3908":50,
	"lit_3909":51,
	"lit_3924":52,
	"lit_3925":53,
	"lit_3926":54,
	"lit_3940":55,
	"lit_4073":56,
	"lit_4207":57,
	"lit_4208":58,
	"lit_4209":59,
	"lit_4210":60,
	"lit_4315":61,
	"lit_4316":62,
	"lit_4317":63,
	"lit_4410":64,
	"lit_4411":65,
	"lit_4412":66,
	"lit_4413":67,
	"lit_4414":68,
	"lit_4415":69,
	"lit_4454":70,
	"lit_4455":71,
	"lit_4456":72,
	"lit_4457":73,
	"lit_4473":74,
	"lit_4476":75,
	"lit_4485":76,
	"lit_4659":77,
	"lit_4660":78,
	"lit_4661":79,
	"lit_4704":80,
	"lit_4738":81,
	"lit_4906":82,
	"lit_4907":83,
	"lit_4908":84,
	"lit_4909":85,
	"lit_4910":86,
	"lit_4911":87,
	"lit_4912":88,
	"lit_4913":89,
	"lit_4914":90,
	"lit_4915":91,
	"lit_4916":92,
	"lit_4917":93,
	"lit_4918":94,
	"lit_4919":95,
	"lit_4920":96,
	"lit_5096":97,
	"lit_5097":98,
	"stringBase0":99,
	"cNullVec__6Z2Calc":100,
	"lit_1787":101,
	"e_prim":102,
	"e_env":103,
	"eff_id":104,
	"ex_eff_id":105,
	"w_eff_id":106,
	"lit_4662":107,
	"cc_cyl_src":108,
	"at_sph_src":109,
	"l_daE_BI_Method":110,
	"g_profile_E_BI":111,
	"__vt__10cCcD_GStts":112,
	"__vt__10dCcD_GStts":113,
	"__vt__12dBgS_AcchCir":114,
	"__vt__12dBgS_ObjAcch":115,
	"__vt__8cM3dGSph":116,
	"__vt__8cM3dGCyl":117,
	"__vt__8cM3dGAab":118,
	"__vt__14dBgS_ObjGndChk":119,
	"__vt__12daE_BI_HIO_c":120,
	"__global_destructor_chain":121,
	"lit_1109":122,
	"lit_1107":123,
	"lit_1105":124,
	"lit_1104":125,
	"lit_1099":126,
	"lit_1097":127,
	"lit_1095":128,
	"lit_1094":129,
	"lit_1057":130,
	"lit_1055":131,
	"lit_1053":132,
	"lit_1052":133,
	"lit_1014":134,
	"lit_1012":135,
	"lit_1010":136,
	"struct_8068DB1C":137,
	"lit_3919":138,
	"l_HIO":139,
	"lit_4522":140,
	"data_8068DB58":141,
	"data_8068DB64":142,
	"data_8068DB68":143,
	"data_8068DB6C":144,
	"data_8068DB70":145,
	"data_8068DB74":146,
	"data_8068DB78":147,
	"data_8068DB7C":148,
	"data_8068DB80":149,
	"data_8068DB84":150,
	"data_8068DB88":151,
	"data_8068DB8C":152,
	"data_8068DB90":153,
	"data_8068DB94":154,
	"data_8068DB98":155,
	"data_8068DB9C":156,
	"data_8068DBA0":157,
	"data_8068DBA4":158,
	"data_8068DBA8":159,
	"data_8068DBAC":160,
	"data_8068DBB0":161,
	"data_8068DBB4":162,
	"data_8068DBB8":163,
	"data_8068DBBC":164,
	"data_8068DBC0":165,
	"data_8068DBC4":166,
}

