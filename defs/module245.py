#
# Generate By: dol2asm
# Module: 245
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_ws",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_e_ws",
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
	{'addr':0x807E3920,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E394C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E3978,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E3998,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E39B4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E3A0C,'size':96,'pad':0,'label':"__ct__12daE_WS_HIO_cFv",'name':"__ct__12daE_WS_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E3A6C,'size':404,'pad':0,'label':"draw__8daE_WS_cFv",'name':"draw__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E3C00,'size':32,'pad':0,'label':"daE_WS_Draw__FP8daE_WS_c",'name':"daE_WS_Draw__FP8daE_WS_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E3C20,'size':164,'pad':0,'label':"setBck__8daE_WS_cFiUcff",'name':"setBck__8daE_WS_cFiUcff",'lib':-1,'tu':2,'section':0,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E3CC4,'size':716,'pad':0,'label':"setFootSound__8daE_WS_cFv",'name':"setFootSound__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E3F90,'size':28,'pad':0,'label':"setActionMode__8daE_WS_cFi",'name':"setActionMode__8daE_WS_cFi",'lib':-1,'tu':2,'section':0,'r':[5,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E3FAC,'size':284,'pad':0,'label':"calcTargetDist__8daE_WS_cF4cXyz4cXyz",'name':"calcTargetDist__8daE_WS_cF4cXyz4cXyz",'lib':-1,'tu':2,'section':0,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E40C8,'size':164,'pad':0,'label':"calcTargetAngle__8daE_WS_cF4cXyz4cXyz",'name':"calcTargetAngle__8daE_WS_cF4cXyz4cXyz",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E416C,'size':184,'pad':0,'label':"checkInSearchRange__8daE_WS_cF4cXyz4cXyz",'name':"checkInSearchRange__8daE_WS_cF4cXyz4cXyz",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E4224,'size':836,'pad':0,'label':"checkPlayerPos__8daE_WS_cFv",'name':"checkPlayerPos__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E4568,'size':420,'pad':0,'label':"checkAttackEnd__8daE_WS_cFv",'name':"checkAttackEnd__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E470C,'size':940,'pad':0,'label':"executeWait__8daE_WS_cFv",'name':"executeWait__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E4AB8,'size':944,'pad':0,'label':"executeAttack__8daE_WS_cFv",'name':"executeAttack__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E4E68,'size':1068,'pad':0,'label':"executeDown__8daE_WS_cFv",'name':"executeDown__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E5294,'size':1084,'pad':0,'label':"executeWindDown__8daE_WS_cFv",'name':"executeWindDown__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E56D0,'size':476,'pad':0,'label':"damage_check__8daE_WS_cFv",'name':"damage_check__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E58AC,'size':400,'pad':0,'label':"action__8daE_WS_cFv",'name':"action__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E5A3C,'size':112,'pad':0,'label':"mtx_set__8daE_WS_cFv",'name':"mtx_set__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E5AAC,'size':352,'pad':0,'label':"cc_set__8daE_WS_cFv",'name':"cc_set__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E5C0C,'size':172,'pad':0,'label':"execute__8daE_WS_cFv",'name':"execute__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E5CB8,'size':32,'pad':0,'label':"daE_WS_Execute__FP8daE_WS_c",'name':"daE_WS_Execute__FP8daE_WS_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E5CD8,'size':664,'pad':0,'label':"checkInitialWall__8daE_WS_cFv",'name':"checkInitialWall__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E5F70,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E5FB8,'size':1088,'pad':0,'label':"checkBeforeBg__8daE_WS_cFs",'name':"checkBeforeBg__8daE_WS_cFs",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E63F8,'size':692,'pad':0,'label':"checkWall__8daE_WS_cFv",'name':"checkWall__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E66AC,'size':8,'pad':0,'label':"daE_WS_IsDelete__FP8daE_WS_c",'name':"daE_WS_IsDelete__FP8daE_WS_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x807E66B4,'size':116,'pad':0,'label':"_delete__8daE_WS_cFv",'name':"_delete__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6728,'size':32,'pad':0,'label':"daE_WS_Delete__FP8daE_WS_c",'name':"daE_WS_Delete__FP8daE_WS_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6748,'size':248,'pad':0,'label':"CreateHeap__8daE_WS_cFv",'name':"CreateHeap__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6840,'size':32,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6860,'size':944,'pad':0,'label':"create__8daE_WS_cFv",'name':"create__8daE_WS_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6C10,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6C58,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6CA0,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6CFC,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6D6C,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6DDC,'size':32,'pad':0,'label':"daE_WS_Create__FP8daE_WS_c",'name':"daE_WS_Create__FP8daE_WS_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6DFC,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6E44,'size':72,'pad':0,'label':"__dt__12daE_WS_HIO_cFv",'name':"__dt__12daE_WS_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6E8C,'size':60,'pad':0,'label':"__sinit_d_a_e_ws_cpp",'name':"__sinit_d_a_e_ws_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6EC8,'size':8,'pad':0,'label':"func_807E6EC8",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6ED0,'size':8,'pad':0,'label':"func_807E6ED0",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E6ED8,'size':1044,'pad':0,'label':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'name':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807E72EC,'size':8,'pad':0,'label':"data_807E72EC",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E72F4,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E72F8,'size':8,'pad':0,'label':"pad_807E72F8",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E7300,'size':4,'pad':0,'label':"lit_3802",'name':"@3802",'lib':-1,'tu':2,'section':2,'r':[15,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7304,'size':4,'pad':0,'label':"lit_3803",'name':"@3803",'lib':-1,'tu':2,'section':2,'r':[16,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E7308,'size':4,'pad':4,'label':"lit_3804",'name':"@3804",'lib':-1,'tu':2,'section':2,'r':[7,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7310,'size':8,'pad':0,'label':"lit_3805",'name':"@3805",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E7318,'size':8,'pad':0,'label':"lit_3806",'name':"@3806",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E7320,'size':8,'pad':0,'label':"lit_3807",'name':"@3807",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E7328,'size':4,'pad':0,'label':"lit_3808",'name':"@3808",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E732C,'size':4,'pad':0,'label':"lit_3823",'name':"@3823",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7330,'size':4,'pad':0,'label':"lit_3824",'name':"@3824",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7334,'size':4,'pad':0,'label':"lit_3825",'name':"@3825",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7338,'size':4,'pad':0,'label':"lit_3826",'name':"@3826",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E733C,'size':4,'pad':0,'label':"lit_3827",'name':"@3827",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7340,'size':4,'pad':0,'label':"lit_3828",'name':"@3828",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7344,'size':4,'pad':0,'label':"lit_3829",'name':"@3829",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7348,'size':4,'pad':0,'label':"lit_3871",'name':"@3871",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E734C,'size':4,'pad':0,'label':"lit_3885",'name':"@3885",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7350,'size':4,'pad':0,'label':"lit_3952",'name':"@3952",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7354,'size':4,'pad':0,'label':"lit_3953",'name':"@3953",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7358,'size':4,'pad':0,'label':"lit_3954",'name':"@3954",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E735C,'size':4,'pad':0,'label':"lit_3955",'name':"@3955",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7360,'size':4,'pad':0,'label':"lit_3956",'name':"@3956",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7364,'size':4,'pad':0,'label':"lit_3957",'name':"@3957",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7368,'size':4,'pad':0,'label':"lit_3958",'name':"@3958",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E736C,'size':4,'pad':0,'label':"lit_3959",'name':"@3959",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7370,'size':4,'pad':0,'label':"lit_3960",'name':"@3960",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7374,'size':4,'pad':0,'label':"lit_3961",'name':"@3961",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7378,'size':4,'pad':0,'label':"lit_3962",'name':"@3962",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E737C,'size':4,'pad':0,'label':"lit_3963",'name':"@3963",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7380,'size':4,'pad':0,'label':"lit_3964",'name':"@3964",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7384,'size':4,'pad':0,'label':"lit_3965",'name':"@3965",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7388,'size':4,'pad':0,'label':"lit_3966",'name':"@3966",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E738C,'size':4,'pad':0,'label':"lit_3967",'name':"@3967",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7390,'size':4,'pad':0,'label':"lit_3968",'name':"@3968",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7394,'size':4,'pad':0,'label':"lit_3969",'name':"@3969",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7398,'size':4,'pad':4,'label':"lit_4145",'name':"@4145",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73A0,'size':8,'pad':0,'label':"lit_4147",'name':"@4147",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E73A8,'size':4,'pad':0,'label':"lit_4263",'name':"@4263",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73AC,'size':4,'pad':0,'label':"lit_4264",'name':"@4264",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73B0,'size':4,'pad':0,'label':"lit_4265",'name':"@4265",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73B4,'size':4,'pad':0,'label':"lit_4266",'name':"@4266",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73B8,'size':4,'pad':0,'label':"lit_4267",'name':"@4267",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73BC,'size':4,'pad':0,'label':"lit_4366",'name':"@4366",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73C0,'size':4,'pad':0,'label':"lit_4442",'name':"@4442",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73C4,'size':4,'pad':0,'label':"lit_4443",'name':"@4443",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73C8,'size':4,'pad':0,'label':"lit_4444",'name':"@4444",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73CC,'size':4,'pad':0,'label':"lit_4445",'name':"@4445",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73D0,'size':4,'pad':0,'label':"lit_4446",'name':"@4446",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73D4,'size':4,'pad':0,'label':"lit_4447",'name':"@4447",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73D8,'size':4,'pad':0,'label':"lit_4448",'name':"@4448",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73DC,'size':4,'pad':0,'label':"lit_4507",'name':"@4507",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73E0,'size':4,'pad':0,'label':"lit_4632",'name':"@4632",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73E4,'size':4,'pad':0,'label':"lit_4633",'name':"@4633",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73E8,'size':4,'pad':0,'label':"lit_4634",'name':"@4634",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73EC,'size':4,'pad':0,'label':"lit_4635",'name':"@4635",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73F0,'size':4,'pad':0,'label':"lit_4636",'name':"@4636",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73F4,'size':4,'pad':0,'label':"lit_4637",'name':"@4637",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73F8,'size':4,'pad':0,'label':"lit_4908",'name':"@4908",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E73FC,'size':4,'pad':0,'label':"lit_4989",'name':"@4989",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7400,'size':4,'pad':0,'label':"lit_5154",'name':"@5154",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7404,'size':10,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x807E7410,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E741C,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807E7430,'size':8,'pad':0,'label':"e_prim",'name':"e_prim$3681",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E7438,'size':8,'pad':0,'label':"e_env",'name':"e_env$3682",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E7440,'size':6,'pad':2,'label':"eff_id",'name':"eff_id$3690",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E7448,'size':64,'pad':0,'label':"data_807E7448",'name':"cc_ws_src__22@unnamed@d_a_e_ws_cpp@",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E7488,'size':64,'pad':0,'label':"data_807E7488",'name':"cc_bokkuri_src__22@unnamed@d_a_e_ws_cpp@",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E74C8,'size':28,'pad':0,'label':"lit_4268",'name':"@4268",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E74E4,'size':32,'pad':0,'label':"l_daE_WS_Method",'name':"l_daE_WS_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E7504,'size':48,'pad':0,'label':"g_profile_E_WS",'name':"g_profile_E_WS",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E7534,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E7540,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E754C,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E7558,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E7564,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E7570,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E7594,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':2,'section':3,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E75A0,'size':12,'pad':0,'label':"__vt__12daE_WS_HIO_c",'name':"__vt__12daE_WS_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807E75B0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E75B8,'size':4,'pad':0,'label':"data_807E75B8",'name':None,'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E75BC,'size':12,'pad':0,'label':"lit_3818",'name':"@3818",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807E75C8,'size':40,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[7,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__12daE_WS_HIO_cFv":5,
	"draw__8daE_WS_cFv":6,
	"daE_WS_Draw__FP8daE_WS_c":7,
	"setBck__8daE_WS_cFiUcff":8,
	"setFootSound__8daE_WS_cFv":9,
	"setActionMode__8daE_WS_cFi":10,
	"calcTargetDist__8daE_WS_cF4cXyz4cXyz":11,
	"calcTargetAngle__8daE_WS_cF4cXyz4cXyz":12,
	"checkInSearchRange__8daE_WS_cF4cXyz4cXyz":13,
	"checkPlayerPos__8daE_WS_cFv":14,
	"checkAttackEnd__8daE_WS_cFv":15,
	"executeWait__8daE_WS_cFv":16,
	"executeAttack__8daE_WS_cFv":17,
	"executeDown__8daE_WS_cFv":18,
	"executeWindDown__8daE_WS_cFv":19,
	"damage_check__8daE_WS_cFv":20,
	"action__8daE_WS_cFv":21,
	"mtx_set__8daE_WS_cFv":22,
	"cc_set__8daE_WS_cFv":23,
	"execute__8daE_WS_cFv":24,
	"daE_WS_Execute__FP8daE_WS_c":25,
	"checkInitialWall__8daE_WS_cFv":26,
	"__dt__8cM3dGPlaFv":27,
	"checkBeforeBg__8daE_WS_cFs":28,
	"checkWall__8daE_WS_cFv":29,
	"daE_WS_IsDelete__FP8daE_WS_c":30,
	"_delete__8daE_WS_cFv":31,
	"daE_WS_Delete__FP8daE_WS_c":32,
	"CreateHeap__8daE_WS_cFv":33,
	"useHeapInit__FP10fopAc_ac_c":34,
	"create__8daE_WS_cFv":35,
	"__dt__8cM3dGSphFv":36,
	"__dt__8cM3dGAabFv":37,
	"__dt__10dCcD_GSttsFv":38,
	"__dt__12dBgS_ObjAcchFv":39,
	"__dt__12dBgS_AcchCirFv":40,
	"daE_WS_Create__FP8daE_WS_c":41,
	"__dt__10cCcD_GSttsFv":42,
	"__dt__12daE_WS_HIO_cFv":43,
	"__sinit_d_a_e_ws_cpp":44,
	"func_807E6EC8":45,
	"func_807E6ED0":46,
	"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz":47,
	"data_807E72EC":48,
	"__destroy_global_chain_reference":49,
	"pad_807E72F8":50,
	"lit_3802":51,
	"lit_3803":52,
	"lit_3804":53,
	"lit_3805":54,
	"lit_3806":55,
	"lit_3807":56,
	"lit_3808":57,
	"lit_3823":58,
	"lit_3824":59,
	"lit_3825":60,
	"lit_3826":61,
	"lit_3827":62,
	"lit_3828":63,
	"lit_3829":64,
	"lit_3871":65,
	"lit_3885":66,
	"lit_3952":67,
	"lit_3953":68,
	"lit_3954":69,
	"lit_3955":70,
	"lit_3956":71,
	"lit_3957":72,
	"lit_3958":73,
	"lit_3959":74,
	"lit_3960":75,
	"lit_3961":76,
	"lit_3962":77,
	"lit_3963":78,
	"lit_3964":79,
	"lit_3965":80,
	"lit_3966":81,
	"lit_3967":82,
	"lit_3968":83,
	"lit_3969":84,
	"lit_4145":85,
	"lit_4147":86,
	"lit_4263":87,
	"lit_4264":88,
	"lit_4265":89,
	"lit_4266":90,
	"lit_4267":91,
	"lit_4366":92,
	"lit_4442":93,
	"lit_4443":94,
	"lit_4444":95,
	"lit_4445":96,
	"lit_4446":97,
	"lit_4447":98,
	"lit_4448":99,
	"lit_4507":100,
	"lit_4632":101,
	"lit_4633":102,
	"lit_4634":103,
	"lit_4635":104,
	"lit_4636":105,
	"lit_4637":106,
	"lit_4908":107,
	"lit_4989":108,
	"lit_5154":109,
	"stringBase0":110,
	"cNullVec__6Z2Calc":111,
	"lit_1787":112,
	"e_prim":113,
	"e_env":114,
	"eff_id":115,
	"data_807E7448":116,
	"data_807E7488":117,
	"lit_4268":118,
	"l_daE_WS_Method":119,
	"g_profile_E_WS":120,
	"__vt__12dBgS_AcchCir":121,
	"__vt__10cCcD_GStts":122,
	"__vt__10dCcD_GStts":123,
	"__vt__8cM3dGSph":124,
	"__vt__8cM3dGAab":125,
	"__vt__12dBgS_ObjAcch":126,
	"__vt__8cM3dGPla":127,
	"__vt__12daE_WS_HIO_c":128,
	"__global_destructor_chain":129,
	"data_807E75B8":130,
	"lit_3818":131,
	"l_HIO":132,
}

