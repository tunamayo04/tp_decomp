#
# Generate By: dol2asm
# Module: 203
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_is",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_e_is",
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
	{'addr':0x806F5960,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F598C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F59B8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F59D8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F59F4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F5A4C,'size':72,'pad':0,'label':"__ct__12daE_IS_HIO_cFv",'name':"__ct__12daE_IS_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F5A94,'size':172,'pad':0,'label':"anm_init__FP10e_is_classifUcf",'name':"anm_init__FP10e_is_classifUcf",'lib':-1,'tu':2,'section':0,'r':[7,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F5B40,'size':760,'pad':0,'label':"daE_IS_Draw__FP10e_is_class",'name':"daE_IS_Draw__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F5E38,'size':124,'pad':0,'label':"pl_check__FP10e_is_classfs",'name':"pl_check__FP10e_is_classfs",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F5EB4,'size':136,'pad':0,'label':"s_stop_sub__FPvPv",'name':"s_stop_sub__FPvPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F5F3C,'size':504,'pad':0,'label':"damage_check__FP10e_is_class",'name':"damage_check__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F6134,'size':492,'pad':0,'label':"e_is_wait__FP10e_is_class",'name':"e_is_wait__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F6320,'size':220,'pad':0,'label':"e_is_move__FP10e_is_class",'name':"e_is_move__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F63FC,'size':448,'pad':0,'label':"e_is_attack__FP10e_is_class",'name':"e_is_attack__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F65BC,'size':500,'pad':0,'label':"e_is_trap__FP10e_is_class",'name':"e_is_trap__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F67B0,'size':364,'pad':0,'label':"e_is_poweroff__FP10e_is_class",'name':"e_is_poweroff__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F691C,'size':284,'pad':0,'label':"e_is_damage__FP10e_is_class",'name':"e_is_damage__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F6A38,'size':304,'pad':0,'label':"e_is_break__FP10e_is_class",'name':"e_is_break__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F6B68,'size':20,'pad':0,'label':"e_is_sekizou__FP10e_is_class",'name':"e_is_sekizou__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F6B7C,'size':532,'pad':0,'label':"action__FP10e_is_class",'name':"action__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F6D90,'size':200,'pad':0,'label':"anm_se_set__FP10e_is_class",'name':"anm_se_set__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F6E58,'size':940,'pad':0,'label':"daE_IS_Execute__FP10e_is_class",'name':"daE_IS_Execute__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F7204,'size':8,'pad':0,'label':"daE_IS_IsDelete__FP10e_is_class",'name':"daE_IS_IsDelete__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x806F720C,'size':104,'pad':0,'label':"daE_IS_Delete__FP10e_is_class",'name':"daE_IS_Delete__FP10e_is_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F7274,'size':248,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F736C,'size':840,'pad':0,'label':"daE_IS_Create__FP10fopAc_ac_c",'name':"daE_IS_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F76B4,'size':436,'pad':0,'label':"__ct__10e_is_classFv",'name':"__ct__10e_is_classFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F7868,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F78B0,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F78F8,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F7940,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F799C,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F7A0C,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F7A7C,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F7AC4,'size':72,'pad':0,'label':"__dt__12daE_IS_HIO_cFv",'name':"__dt__12daE_IS_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F7B0C,'size':60,'pad':0,'label':"__sinit_d_a_e_is_cpp",'name':"__sinit_d_a_e_is_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F7B48,'size':8,'pad':0,'label':"func_806F7B48",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F7B50,'size':8,'pad':0,'label':"func_806F7B50",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806F7B58,'size':8,'pad':0,'label':"data_806F7B58",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7B60,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7B64,'size':8,'pad':0,'label':"pad_806F7B64",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7B6C,'size':4,'pad':0,'label':"lit_3648",'name':"@3648",'lib':-1,'tu':2,'section':2,'r':[14,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7B70,'size':4,'pad':0,'label':"lit_3649",'name':"@3649",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7B74,'size':4,'pad':0,'label':"lit_3650",'name':"@3650",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7B78,'size':4,'pad':0,'label':"lit_3651",'name':"@3651",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7B7C,'size':4,'pad':0,'label':"lit_3652",'name':"@3652",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7B80,'size':4,'pad':0,'label':"lit_3666",'name':"@3666",'lib':-1,'tu':2,'section':2,'r':[13,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806F7B84,'size':4,'pad':0,'label':"lit_3667",'name':"@3667",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7B88,'size':4,'pad':0,'label':"lit_3710",'name':"@3710",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7B8C,'size':4,'pad':0,'label':"lit_3711",'name':"@3711",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7B90,'size':4,'pad':0,'label':"lit_3712",'name':"@3712",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7B94,'size':4,'pad':0,'label':"lit_3713",'name':"@3713",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7B98,'size':4,'pad':0,'label':"lit_3714",'name':"@3714",'lib':-1,'tu':2,'section':2,'r':[6,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7B9C,'size':4,'pad':0,'label':"lit_3715",'name':"@3715",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BA0,'size':4,'pad':0,'label':"lit_3716",'name':"@3716",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BA4,'size':4,'pad':0,'label':"lit_3717",'name':"@3717",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BA8,'size':4,'pad':0,'label':"lit_3718",'name':"@3718",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BAC,'size':4,'pad':0,'label':"lit_3719",'name':"@3719",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BB0,'size':4,'pad':0,'label':"lit_3720",'name':"@3720",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BB4,'size':4,'pad':0,'label':"lit_3917",'name':"@3917",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BB8,'size':4,'pad':0,'label':"lit_3965",'name':"@3965",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BBC,'size':4,'pad':0,'label':"lit_3966",'name':"@3966",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BC0,'size':4,'pad':0,'label':"lit_3967",'name':"@3967",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BC4,'size':4,'pad':0,'label':"lit_3968",'name':"@3968",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BC8,'size':4,'pad':0,'label':"lit_3969",'name':"@3969",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BCC,'size':4,'pad':0,'label':"lit_3970",'name':"@3970",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BD0,'size':4,'pad':0,'label':"lit_4007",'name':"@4007",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BD4,'size':4,'pad':0,'label':"lit_4031",'name':"@4031",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BD8,'size':4,'pad':0,'label':"lit_4102",'name':"@4102",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BDC,'size':4,'pad':0,'label':"lit_4120",'name':"@4120",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BE0,'size':4,'pad':0,'label':"lit_4121",'name':"@4121",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BE4,'size':4,'pad':0,'label':"lit_4205",'name':"@4205",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BE8,'size':4,'pad':0,'label':"lit_4206",'name':"@4206",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BEC,'size':4,'pad':0,'label':"lit_4207",'name':"@4207",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BF0,'size':4,'pad':0,'label':"lit_4208",'name':"@4208",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BF4,'size':4,'pad':0,'label':"lit_4209",'name':"@4209",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BF8,'size':4,'pad':0,'label':"lit_4210",'name':"@4210",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7BFC,'size':4,'pad':0,'label':"lit_4211",'name':"@4211",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7C00,'size':4,'pad':0,'label':"lit_4332",'name':"@4332",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7C04,'size':4,'pad':0,'label':"lit_4333",'name':"@4333",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7C08,'size':4,'pad':0,'label':"lit_4334",'name':"@4334",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7C0C,'size':4,'pad':0,'label':"lit_4335",'name':"@4335",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7C10,'size':4,'pad':0,'label':"lit_4336",'name':"@4336",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7C14,'size':5,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x806F7C1C,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806F7C28,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806F7C3C,'size':64,'pad':0,'label':"at_sph_src",'name':"at_sph_src$4258",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806F7C7C,'size':68,'pad':0,'label':"cc_cyl_src",'name':"cc_cyl_src$4259",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806F7CC0,'size':64,'pad':0,'label':"core_sph_src",'name':"core_sph_src$4260",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806F7D00,'size':32,'pad':0,'label':"l_daE_IS_Method",'name':"l_daE_IS_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7D20,'size':48,'pad':0,'label':"g_profile_E_IS",'name':"g_profile_E_IS",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7D50,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7D5C,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7D68,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7D74,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7D80,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7D8C,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7D98,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7DBC,'size':12,'pad':0,'label':"__vt__12daE_IS_HIO_c",'name':"__vt__12daE_IS_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806F7DC8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806F7DD0,'size':4,'pad':0,'label':"data_806F7DD0",'name':None,'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806F7DD4,'size':12,'pad':0,'label':"lit_3643",'name':"@3643",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806F7DE0,'size':28,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__12daE_IS_HIO_cFv":5,
	"anm_init__FP10e_is_classifUcf":6,
	"daE_IS_Draw__FP10e_is_class":7,
	"pl_check__FP10e_is_classfs":8,
	"s_stop_sub__FPvPv":9,
	"damage_check__FP10e_is_class":10,
	"e_is_wait__FP10e_is_class":11,
	"e_is_move__FP10e_is_class":12,
	"e_is_attack__FP10e_is_class":13,
	"e_is_trap__FP10e_is_class":14,
	"e_is_poweroff__FP10e_is_class":15,
	"e_is_damage__FP10e_is_class":16,
	"e_is_break__FP10e_is_class":17,
	"e_is_sekizou__FP10e_is_class":18,
	"action__FP10e_is_class":19,
	"anm_se_set__FP10e_is_class":20,
	"daE_IS_Execute__FP10e_is_class":21,
	"daE_IS_IsDelete__FP10e_is_class":22,
	"daE_IS_Delete__FP10e_is_class":23,
	"useHeapInit__FP10fopAc_ac_c":24,
	"daE_IS_Create__FP10fopAc_ac_c":25,
	"__ct__10e_is_classFv":26,
	"__dt__8cM3dGCylFv":27,
	"__dt__8cM3dGSphFv":28,
	"__dt__8cM3dGAabFv":29,
	"__dt__10dCcD_GSttsFv":30,
	"__dt__12dBgS_ObjAcchFv":31,
	"__dt__12dBgS_AcchCirFv":32,
	"__dt__10cCcD_GSttsFv":33,
	"__dt__12daE_IS_HIO_cFv":34,
	"__sinit_d_a_e_is_cpp":35,
	"func_806F7B48":36,
	"func_806F7B50":37,
	"data_806F7B58":38,
	"__destroy_global_chain_reference":39,
	"pad_806F7B64":40,
	"lit_3648":41,
	"lit_3649":42,
	"lit_3650":43,
	"lit_3651":44,
	"lit_3652":45,
	"lit_3666":46,
	"lit_3667":47,
	"lit_3710":48,
	"lit_3711":49,
	"lit_3712":50,
	"lit_3713":51,
	"lit_3714":52,
	"lit_3715":53,
	"lit_3716":54,
	"lit_3717":55,
	"lit_3718":56,
	"lit_3719":57,
	"lit_3720":58,
	"lit_3917":59,
	"lit_3965":60,
	"lit_3966":61,
	"lit_3967":62,
	"lit_3968":63,
	"lit_3969":64,
	"lit_3970":65,
	"lit_4007":66,
	"lit_4031":67,
	"lit_4102":68,
	"lit_4120":69,
	"lit_4121":70,
	"lit_4205":71,
	"lit_4206":72,
	"lit_4207":73,
	"lit_4208":74,
	"lit_4209":75,
	"lit_4210":76,
	"lit_4211":77,
	"lit_4332":78,
	"lit_4333":79,
	"lit_4334":80,
	"lit_4335":81,
	"lit_4336":82,
	"stringBase0":83,
	"cNullVec__6Z2Calc":84,
	"lit_1787":85,
	"at_sph_src":86,
	"cc_cyl_src":87,
	"core_sph_src":88,
	"l_daE_IS_Method":89,
	"g_profile_E_IS":90,
	"__vt__12dBgS_AcchCir":91,
	"__vt__10cCcD_GStts":92,
	"__vt__10dCcD_GStts":93,
	"__vt__8cM3dGCyl":94,
	"__vt__8cM3dGSph":95,
	"__vt__8cM3dGAab":96,
	"__vt__12dBgS_ObjAcch":97,
	"__vt__12daE_IS_HIO_c":98,
	"__global_destructor_chain":99,
	"data_806F7DD0":100,
	"lit_3643":101,
	"l_HIO":102,
}

