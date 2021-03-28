#
# Generate By: dol2asm
# Module: 96
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_gptaru",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_gpTaru",
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
	{'addr':0x8057CFE0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D00C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D038,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D058,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D074,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D0CC,'size':136,'pad':0,'label':"__ct__14daGpTaru_HIO_cFv",'name':"__ct__14daGpTaru_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D154,'size':92,'pad':0,'label':"__dt__18fOpAcm_HIO_entry_cFv",'name':"__dt__18fOpAcm_HIO_entry_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D1B0,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D1F8,'size':216,'pad':0,'label':"setBaseMtx__10daGpTaru_cFv",'name':"setBaseMtx__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D2D0,'size':108,'pad':0,'label':"CreateHeap__10daGpTaru_cFv",'name':"CreateHeap__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D33C,'size':708,'pad':0,'label':"create__10daGpTaru_cFv",'name':"create__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D600,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D648,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D690,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D6EC,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D75C,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D7CC,'size':44,'pad':0,'label':"createHeapCallBack__10daGpTaru_cFP10fopAc_ac_c",'name':"createHeapCallBack__10daGpTaru_cFP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057D7F8,'size':764,'pad':0,'label':"bound__FP4cXyzRC13cBgS_PolyInfof",'name':"bound__FP4cXyzRC13cBgS_PolyInfof",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057DAF4,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057DB3C,'size':36,'pad':0,'label':"chkSinkAll__10daGpTaru_cFv",'name':"chkSinkAll__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057DB60,'size':36,'pad':0,'label':"chkWaterLineIn__10daGpTaru_cFv",'name':"chkWaterLineIn__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057DB84,'size':1696,'pad':0,'label':"bgCheck__10daGpTaru_cFv",'name':"bgCheck__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057E224,'size':624,'pad':0,'label':"Execute__10daGpTaru_cFv",'name':"Execute__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057E494,'size':328,'pad':0,'label':"mode_proc_call__10daGpTaru_cFv",'name':"mode_proc_call__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057E5DC,'size':60,'pad':0,'label':"mode_init_wait__10daGpTaru_cFv",'name':"mode_init_wait__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057E618,'size':36,'pad':0,'label':"mode_proc_wait__10daGpTaru_cFv",'name':"mode_proc_wait__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057E63C,'size':36,'pad':0,'label':"mode_init_carry__10daGpTaru_cFv",'name':"mode_init_carry__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057E660,'size':160,'pad':0,'label':"mode_proc_carry__10daGpTaru_cFv",'name':"mode_proc_carry__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057E700,'size':44,'pad':0,'label':"mode_init_drop__10daGpTaru_cFv",'name':"mode_init_drop__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057E72C,'size':36,'pad':0,'label':"mode_proc_drop__10daGpTaru_cFv",'name':"mode_proc_drop__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057E750,'size':24,'pad':0,'label':"mode_init_roll__10daGpTaru_cFv",'name':"mode_init_roll__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057E768,'size':964,'pad':0,'label':"mode_proc_roll__10daGpTaru_cFv",'name':"mode_proc_roll__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057EB2C,'size':120,'pad':0,'label':"__dt__14dBgS_ObjGndChkFv",'name':"__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057EBA4,'size':188,'pad':0,'label':"mode_init_exploInit__10daGpTaru_cFv",'name':"mode_init_exploInit__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057EC60,'size':460,'pad':0,'label':"mode_proc_exploInit__10daGpTaru_cFv",'name':"mode_proc_exploInit__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057EE2C,'size':388,'pad':0,'label':"mode_init_explosion__10daGpTaru_cFv",'name':"mode_init_explosion__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057EFB0,'size':76,'pad':0,'label':"mode_proc_explosion__10daGpTaru_cFv",'name':"mode_proc_explosion__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057EFFC,'size':24,'pad':0,'label':"mode_init_sink__10daGpTaru_cFv",'name':"mode_init_sink__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F014,'size':240,'pad':0,'label':"mode_proc_sink__10daGpTaru_cFv",'name':"mode_proc_sink__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F104,'size':384,'pad':0,'label':"breakEffSet__10daGpTaru_cFv",'name':"breakEffSet__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F284,'size':164,'pad':0,'label':"Draw__10daGpTaru_cFv",'name':"Draw__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F328,'size':68,'pad':0,'label':"Delete__10daGpTaru_cFv",'name':"Delete__10daGpTaru_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F36C,'size':44,'pad':0,'label':"daGpTaru_Draw__FP10daGpTaru_c",'name':"daGpTaru_Draw__FP10daGpTaru_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F398,'size':44,'pad':0,'label':"daGpTaru_Execute__FP10daGpTaru_c",'name':"daGpTaru_Execute__FP10daGpTaru_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F3C4,'size':44,'pad':0,'label':"daGpTaru_Delete__FP10daGpTaru_c",'name':"daGpTaru_Delete__FP10daGpTaru_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F3F0,'size':32,'pad':0,'label':"daGpTaru_Create__FP10fopAc_ac_c",'name':"daGpTaru_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F410,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F458,'size':108,'pad':0,'label':"__dt__14daGpTaru_HIO_cFv",'name':"__dt__14daGpTaru_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F4C4,'size':112,'pad':0,'label':"__sinit_d_a_obj_gpTaru_cpp",'name':"__sinit_d_a_obj_gpTaru_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F534,'size':8,'pad':0,'label':"func_8057F534",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F53C,'size':8,'pad':0,'label':"func_8057F53C",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F544,'size':8,'pad':0,'label':"func_8057F544",'name':"@20@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F54C,'size':8,'pad':0,'label':"func_8057F54C",'name':"@76@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F554,'size':8,'pad':0,'label':"func_8057F554",'name':"@60@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057F55C,'size':8,'pad':0,'label':"data_8057F55C",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F564,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F568,'size':8,'pad':0,'label':"pad_8057F568",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F570,'size':4,'pad':0,'label':"lit_3656",'name':"@3656",'lib':-1,'tu':2,'section':2,'r':[10,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F574,'size':4,'pad':0,'label':"lit_3657",'name':"@3657",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F578,'size':4,'pad':0,'label':"lit_3658",'name':"@3658",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F57C,'size':4,'pad':0,'label':"lit_3659",'name':"@3659",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F580,'size':4,'pad':0,'label':"lit_3660",'name':"@3660",'lib':-1,'tu':2,'section':2,'r':[10,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F584,'size':48,'pad':0,'label':"mCcDObjInfo__10daGpTaru_c",'name':"mCcDObjInfo__10daGpTaru_c",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8057F5B4,'size':4,'pad':0,'label':"lit_3803",'name':"@3803",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F5B8,'size':4,'pad':0,'label':"lit_3804",'name':"@3804",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F5BC,'size':4,'pad':0,'label':"lit_3805",'name':"@3805",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F5C0,'size':4,'pad':0,'label':"lit_3806",'name':"@3806",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F5C4,'size':4,'pad':0,'label':"lit_3807",'name':"@3807",'lib':-1,'tu':2,'section':2,'r':[10,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8057F5C8,'size':8,'pad':0,'label':"lit_3992",'name':"@3992",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8057F5D0,'size':8,'pad':0,'label':"lit_3993",'name':"@3993",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8057F5D8,'size':8,'pad':0,'label':"lit_3994",'name':"@3994",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8057F5E0,'size':4,'pad':0,'label':"lit_4078",'name':"@4078",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F5E4,'size':4,'pad':0,'label':"lit_4084",'name':"@4084",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F5E8,'size':4,'pad':0,'label':"lit_4268",'name':"@4268",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F5EC,'size':4,'pad':0,'label':"lit_4269",'name':"@4269",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F5F0,'size':4,'pad':0,'label':"lit_4270",'name':"@4270",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F5F4,'size':4,'pad':0,'label':"lit_4271",'name':"@4271",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F5F8,'size':4,'pad':0,'label':"lit_4272",'name':"@4272",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F5FC,'size':4,'pad':0,'label':"lit_4273",'name':"@4273",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F600,'size':4,'pad':0,'label':"lit_4274",'name':"@4274",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F604,'size':4,'pad':0,'label':"lit_4275",'name':"@4275",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F608,'size':4,'pad':0,'label':"lit_4331",'name':"@4331",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F60C,'size':4,'pad':0,'label':"lit_4332",'name':"@4332",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F610,'size':4,'pad':0,'label':"lit_4333",'name':"@4333",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F614,'size':4,'pad':0,'label':"lit_4521",'name':"@4521",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F618,'size':4,'pad':0,'label':"lit_4522",'name':"@4522",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F61C,'size':4,'pad':0,'label':"lit_4523",'name':"@4523",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F620,'size':4,'pad':0,'label':"lit_4524",'name':"@4524",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F624,'size':4,'pad':0,'label':"lit_4525",'name':"@4525",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F628,'size':4,'pad':0,'label':"lit_4526",'name':"@4526",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F62C,'size':4,'pad':0,'label':"lit_4527",'name':"@4527",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F630,'size':4,'pad':0,'label':"lit_4538",'name':"@4538",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F634,'size':4,'pad':0,'label':"lit_4539",'name':"@4539",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F638,'size':4,'pad':0,'label':"lit_4574",'name':"@4574",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F63C,'size':4,'pad':0,'label':"lit_4604",'name':"@4604",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F640,'size':4,'pad':0,'label':"lit_4605",'name':"@4605",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F644,'size':4,'pad':0,'label':"lit_4606",'name':"@4606",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F648,'size':4,'pad':0,'label':"lit_4607",'name':"@4607",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F64C,'size':4,'pad':0,'label':"lit_4608",'name':"@4608",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F650,'size':4,'pad':0,'label':"lit_4609",'name':"@4609",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F654,'size':4,'pad':0,'label':"lit_4660",'name':"@4660",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F658,'size':4,'pad':0,'label':"lit_4661",'name':"@4661",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F65C,'size':4,'pad':0,'label':"lit_4662",'name':"@4662",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F660,'size':4,'pad':0,'label':"lit_4697",'name':"@4697",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F664,'size':33,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x8057F688,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8057F694,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8057F6A8,'size':68,'pad':0,'label':"mCcDCyl__10daGpTaru_c",'name':"mCcDCyl__10daGpTaru_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8057F6EC,'size':12,'pad':0,'label':"lit_4338",'name':"@4338",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F6F8,'size':12,'pad':0,'label':"lit_4339",'name':"@4339",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F704,'size':12,'pad':0,'label':"lit_4340",'name':"@4340",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F710,'size':12,'pad':0,'label':"lit_4341",'name':"@4341",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F71C,'size':12,'pad':0,'label':"lit_4342",'name':"@4342",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F728,'size':12,'pad':0,'label':"lit_4343",'name':"@4343",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F734,'size':12,'pad':0,'label':"lit_4344",'name':"@4344",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F740,'size':84,'pad':0,'label':"l_mode_func",'name':"l_mode_func$4337",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8057F794,'size':16,'pad':0,'label':"effName",'name':"effName$4666",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8057F7A4,'size':32,'pad':0,'label':"l_daGpTaru_Method",'name':"l_daGpTaru_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F7C4,'size':48,'pad':0,'label':"g_profile_Obj_GpTaru",'name':"g_profile_Obj_GpTaru",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F7F4,'size':48,'pad':0,'label':"__vt__14dBgS_ObjGndChk",'name':"__vt__14dBgS_ObjGndChk",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F824,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F830,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F83C,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F848,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F854,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F860,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F86C,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F890,'size':24,'pad':0,'label':"__vt__10daGpTaru_c",'name':"__vt__10daGpTaru_c",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F8A8,'size':12,'pad':0,'label':"__vt__14daGpTaru_HIO_c",'name':"__vt__14daGpTaru_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F8B4,'size':12,'pad':0,'label':"__vt__18fOpAcm_HIO_entry_c",'name':"__vt__18fOpAcm_HIO_entry_c",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F8C0,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':2,'section':3,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8057F8D0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8057F8D8,'size':12,'pad':0,'label':"lit_3645",'name':"@3645",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8057F8E4,'size':60,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[8,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8057F920,'size':4,'pad':0,'label':"data_8057F920",'name':None,'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daGpTaru_HIO_cFv":5,
	"__dt__18fOpAcm_HIO_entry_cFv":6,
	"__dt__14mDoHIO_entry_cFv":7,
	"setBaseMtx__10daGpTaru_cFv":8,
	"CreateHeap__10daGpTaru_cFv":9,
	"create__10daGpTaru_cFv":10,
	"__dt__8cM3dGCylFv":11,
	"__dt__8cM3dGAabFv":12,
	"__dt__10dCcD_GSttsFv":13,
	"__dt__12dBgS_AcchCirFv":14,
	"__dt__12dBgS_ObjAcchFv":15,
	"createHeapCallBack__10daGpTaru_cFP10fopAc_ac_c":16,
	"bound__FP4cXyzRC13cBgS_PolyInfof":17,
	"__dt__8cM3dGPlaFv":18,
	"chkSinkAll__10daGpTaru_cFv":19,
	"chkWaterLineIn__10daGpTaru_cFv":20,
	"bgCheck__10daGpTaru_cFv":21,
	"Execute__10daGpTaru_cFv":22,
	"mode_proc_call__10daGpTaru_cFv":23,
	"mode_init_wait__10daGpTaru_cFv":24,
	"mode_proc_wait__10daGpTaru_cFv":25,
	"mode_init_carry__10daGpTaru_cFv":26,
	"mode_proc_carry__10daGpTaru_cFv":27,
	"mode_init_drop__10daGpTaru_cFv":28,
	"mode_proc_drop__10daGpTaru_cFv":29,
	"mode_init_roll__10daGpTaru_cFv":30,
	"mode_proc_roll__10daGpTaru_cFv":31,
	"__dt__14dBgS_ObjGndChkFv":32,
	"mode_init_exploInit__10daGpTaru_cFv":33,
	"mode_proc_exploInit__10daGpTaru_cFv":34,
	"mode_init_explosion__10daGpTaru_cFv":35,
	"mode_proc_explosion__10daGpTaru_cFv":36,
	"mode_init_sink__10daGpTaru_cFv":37,
	"mode_proc_sink__10daGpTaru_cFv":38,
	"breakEffSet__10daGpTaru_cFv":39,
	"Draw__10daGpTaru_cFv":40,
	"Delete__10daGpTaru_cFv":41,
	"daGpTaru_Draw__FP10daGpTaru_c":42,
	"daGpTaru_Execute__FP10daGpTaru_c":43,
	"daGpTaru_Delete__FP10daGpTaru_c":44,
	"daGpTaru_Create__FP10fopAc_ac_c":45,
	"__dt__10cCcD_GSttsFv":46,
	"__dt__14daGpTaru_HIO_cFv":47,
	"__sinit_d_a_obj_gpTaru_cpp":48,
	"func_8057F534":49,
	"func_8057F53C":50,
	"func_8057F544":51,
	"func_8057F54C":52,
	"func_8057F554":53,
	"data_8057F55C":54,
	"__destroy_global_chain_reference":55,
	"pad_8057F568":56,
	"lit_3656":57,
	"lit_3657":58,
	"lit_3658":59,
	"lit_3659":60,
	"lit_3660":61,
	"mCcDObjInfo__10daGpTaru_c":62,
	"lit_3803":63,
	"lit_3804":64,
	"lit_3805":65,
	"lit_3806":66,
	"lit_3807":67,
	"lit_3992":68,
	"lit_3993":69,
	"lit_3994":70,
	"lit_4078":71,
	"lit_4084":72,
	"lit_4268":73,
	"lit_4269":74,
	"lit_4270":75,
	"lit_4271":76,
	"lit_4272":77,
	"lit_4273":78,
	"lit_4274":79,
	"lit_4275":80,
	"lit_4331":81,
	"lit_4332":82,
	"lit_4333":83,
	"lit_4521":84,
	"lit_4522":85,
	"lit_4523":86,
	"lit_4524":87,
	"lit_4525":88,
	"lit_4526":89,
	"lit_4527":90,
	"lit_4538":91,
	"lit_4539":92,
	"lit_4574":93,
	"lit_4604":94,
	"lit_4605":95,
	"lit_4606":96,
	"lit_4607":97,
	"lit_4608":98,
	"lit_4609":99,
	"lit_4660":100,
	"lit_4661":101,
	"lit_4662":102,
	"lit_4697":103,
	"stringBase0":104,
	"cNullVec__6Z2Calc":105,
	"lit_1787":106,
	"mCcDCyl__10daGpTaru_c":107,
	"lit_4338":108,
	"lit_4339":109,
	"lit_4340":110,
	"lit_4341":111,
	"lit_4342":112,
	"lit_4343":113,
	"lit_4344":114,
	"l_mode_func":115,
	"effName":116,
	"l_daGpTaru_Method":117,
	"g_profile_Obj_GpTaru":118,
	"__vt__14dBgS_ObjGndChk":119,
	"__vt__8cM3dGPla":120,
	"__vt__12dBgS_AcchCir":121,
	"__vt__10cCcD_GStts":122,
	"__vt__10dCcD_GStts":123,
	"__vt__8cM3dGCyl":124,
	"__vt__8cM3dGAab":125,
	"__vt__12dBgS_ObjAcch":126,
	"__vt__10daGpTaru_c":127,
	"__vt__14daGpTaru_HIO_c":128,
	"__vt__18fOpAcm_HIO_entry_c":129,
	"__vt__14mDoHIO_entry_c":130,
	"__global_destructor_chain":131,
	"lit_3645":132,
	"l_HIO":133,
	"data_8057F920":134,
}

