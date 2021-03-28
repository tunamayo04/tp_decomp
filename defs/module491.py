#
# Generate By: dol2asm
# Module: 491
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_kago",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_kago",
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
	{'addr':0x80C31A00,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C31A2C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C31A58,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C31A78,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,2,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C31A94,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C31AEC,'size':420,'pad':0,'label':"__dt__12daObj_Kago_cFv",'name':"__dt__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C31C90,'size':204,'pad':0,'label':"__dt__8dCcD_CylFv",'name':"__dt__8dCcD_CylFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C31D5C,'size':928,'pad':0,'label':"create__12daObj_Kago_cFv",'name':"create__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C320FC,'size':72,'pad':0,'label':"__dt__8cM3dGLinFv",'name':"__dt__8cM3dGLinFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C32144,'size':132,'pad':0,'label':"__ct__8dCcD_CylFv",'name':"__ct__8dCcD_CylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C321C8,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C32210,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C32258,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C322C8,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C32324,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C32360,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C323D0,'size':224,'pad':0,'label':"CreateHeap__12daObj_Kago_cFv",'name':"CreateHeap__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C324B0,'size':52,'pad':0,'label':"Delete__12daObj_Kago_cFv",'name':"Delete__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C324E4,'size':3564,'pad':0,'label':"Execute__12daObj_Kago_cFv",'name':"Execute__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C332D0,'size':288,'pad':0,'label':"Draw__12daObj_Kago_cFv",'name':"Draw__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C333F0,'size':32,'pad':0,'label':"createHeapCallBack__12daObj_Kago_cFP10fopAc_ac_c",'name':"createHeapCallBack__12daObj_Kago_cFP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33410,'size':164,'pad':0,'label':"isDelete__12daObj_Kago_cFv",'name':"isDelete__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C334B4,'size':92,'pad':0,'label':"setEnvTevColor__12daObj_Kago_cFv",'name':"setEnvTevColor__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33510,'size':68,'pad':0,'label':"setRoomNo__12daObj_Kago_cFv",'name':"setRoomNo__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33554,'size':72,'pad':0,'label':"reset__12daObj_Kago_cFv",'name':"reset__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C3359C,'size':132,'pad':0,'label':"setMtx__12daObj_Kago_cFv",'name':"setMtx__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33620,'size':400,'pad':0,'label':"getWallAngle__12daObj_Kago_cFsPs",'name':"getWallAngle__12daObj_Kago_cFsPs",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C337B0,'size':288,'pad':0,'label':"setGoalPosAndAngle__12daObj_Kago_cFv",'name':"setGoalPosAndAngle__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C338D0,'size':136,'pad':0,'label':"setSmokePrtcl__12daObj_Kago_cFv",'name':"setSmokePrtcl__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33958,'size':256,'pad':0,'label':"setWaterPrtcl__12daObj_Kago_cFv",'name':"setWaterPrtcl__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33A58,'size':92,'pad':0,'label':"setHamonPrtcl__12daObj_Kago_cFv",'name':"setHamonPrtcl__12daObj_Kago_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33AB4,'size':32,'pad':0,'label':"daObj_Kago_Create__FPv",'name':"daObj_Kago_Create__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33AD4,'size':32,'pad':0,'label':"daObj_Kago_Delete__FPv",'name':"daObj_Kago_Delete__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33AF4,'size':32,'pad':0,'label':"daObj_Kago_Execute__FPv",'name':"daObj_Kago_Execute__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33B14,'size':32,'pad':0,'label':"daObj_Kago_Draw__FPv",'name':"daObj_Kago_Draw__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33B34,'size':8,'pad':0,'label':"daObj_Kago_IsDelete__FPv",'name':"daObj_Kago_IsDelete__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C33B3C,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33B84,'size':28,'pad':0,'label':"func_80C33B84",'name':"cLib_calcTimer<i>__FPi",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33BA0,'size':116,'pad':0,'label':"__sinit_d_a_obj_kago_cpp",'name':"__sinit_d_a_obj_kago_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33C14,'size':72,'pad':0,'label':"__dt__18daObj_Kago_Param_cFv",'name':"__dt__18daObj_Kago_Param_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33C5C,'size':8,'pad':0,'label':"func_80C33C5C",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33C64,'size':8,'pad':0,'label':"func_80C33C64",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C33C6C,'size':8,'pad':0,'label':"data_80C33C6C",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33C74,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33C78,'size':8,'pad':0,'label':"pad_80C33C78",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33C80,'size':44,'pad':0,'label':"m__18daObj_Kago_Param_c",'name':"m__18daObj_Kago_Param_c",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33CAC,'size':48,'pad':0,'label':"l_ccDObjData",'name':"l_ccDObjData",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33CDC,'size':20,'pad':0,'label':"heapSize",'name':"heapSize$3870",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33CF0,'size':4,'pad':0,'label':"lit_3963",'name':"@3963",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33CF4,'size':4,'pad':0,'label':"lit_3964",'name':"@3964",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33CF8,'size':4,'pad':0,'label':"lit_3965",'name':"@3965",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33CFC,'size':4,'pad':0,'label':"lit_3966",'name':"@3966",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D00,'size':4,'pad':0,'label':"lit_4523",'name':"@4523",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D04,'size':4,'pad':0,'label':"lit_4524",'name':"@4524",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33D08,'size':4,'pad':0,'label':"lit_4525",'name':"@4525",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D0C,'size':4,'pad':0,'label':"lit_4526",'name':"@4526",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D10,'size':4,'pad':0,'label':"lit_4527",'name':"@4527",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D14,'size':4,'pad':0,'label':"lit_4528",'name':"@4528",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D18,'size':4,'pad':0,'label':"lit_4529",'name':"@4529",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D1C,'size':4,'pad':0,'label':"lit_4530",'name':"@4530",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D20,'size':4,'pad':0,'label':"lit_4531",'name':"@4531",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D24,'size':4,'pad':0,'label':"lit_4532",'name':"@4532",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D28,'size':4,'pad':0,'label':"lit_4533",'name':"@4533",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D2C,'size':4,'pad':0,'label':"lit_4534",'name':"@4534",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D30,'size':4,'pad':0,'label':"lit_4535",'name':"@4535",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D34,'size':4,'pad':0,'label':"lit_4536",'name':"@4536",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D38,'size':4,'pad':0,'label':"lit_4537",'name':"@4537",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D3C,'size':4,'pad':0,'label':"lit_4538",'name':"@4538",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D40,'size':4,'pad':0,'label':"lit_4539",'name':"@4539",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D44,'size':4,'pad':0,'label':"lit_4540",'name':"@4540",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D48,'size':4,'pad':0,'label':"lit_4541",'name':"@4541",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D4C,'size':4,'pad':0,'label':"lit_4542",'name':"@4542",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D50,'size':4,'pad':0,'label':"lit_4543",'name':"@4543",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D54,'size':4,'pad':0,'label':"lit_4544",'name':"@4544",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D58,'size':4,'pad':0,'label':"lit_4545",'name':"@4545",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D5C,'size':4,'pad':0,'label':"lit_4546",'name':"@4546",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D60,'size':4,'pad':0,'label':"lit_4547",'name':"@4547",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D64,'size':4,'pad':0,'label':"lit_4548",'name':"@4548",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D68,'size':4,'pad':4,'label':"lit_4549",'name':"@4549",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D70,'size':8,'pad':0,'label':"lit_4551",'name':"@4551",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33D78,'size':4,'pad':0,'label':"lit_4576",'name':"@4576",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D7C,'size':4,'pad':0,'label':"lit_4679",'name':"@4679",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D80,'size':4,'pad':0,'label':"lit_4680",'name':"@4680",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D84,'size':4,'pad':0,'label':"lit_4681",'name':"@4681",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D88,'size':4,'pad':0,'label':"lit_4706",'name':"@4706",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D8C,'size':4,'pad':0,'label':"lit_4707",'name':"@4707",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D90,'size':4,'pad':0,'label':"lit_4708",'name':"@4708",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33D94,'size':12,'pad':0,'label':"struct_80C33D94",'name':None,'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x80C33DA0,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33DAC,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C33DC0,'size':16,'pad':0,'label':"l_bmdData",'name':"l_bmdData",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33DD0,'size':8,'pad':0,'label':"l_resNameList",'name':"l_resNameList",'lib':-1,'tu':2,'section':3,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33DD8,'size':68,'pad':0,'label':"l_ccDCyl",'name':"l_ccDCyl",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33E1C,'size':8,'pad':0,'label':"emttrId",'name':"emttrId$4731",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33E24,'size':32,'pad':0,'label':"daObj_Kago_MethodTable",'name':"daObj_Kago_MethodTable",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33E44,'size':48,'pad':0,'label':"g_profile_OBJ_KAGO",'name':"g_profile_OBJ_KAGO",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33E74,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33E80,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33E8C,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33EB0,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33EBC,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33EC8,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33ED4,'size':12,'pad':0,'label':"__vt__8cM3dGLin",'name':"__vt__8cM3dGLin",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33EE0,'size':12,'pad':0,'label':"__vt__12daObj_Kago_c",'name':"__vt__12daObj_Kago_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33EEC,'size':12,'pad':0,'label':"__vt__18daObj_Kago_Param_c",'name':"__vt__18daObj_Kago_Param_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C33EF8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F00,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F04,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F08,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F0C,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F10,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F14,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F18,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F1C,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F20,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F24,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F28,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F2C,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F30,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F34,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F38,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F3C,'size':1,'pad':3,'label':"lit_1009",'name':"@1009",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F40,'size':12,'pad':0,'label':"lit_3815",'name':"@3815",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F4C,'size':4,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F50,'size':12,'pad':4,'label':"lit_4686",'name':"@4686",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F60,'size':12,'pad':0,'label':"pos",'name':"pos$4685",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F6C,'size':2,'pad':2,'label':"angle",'name':"angle$4689",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F70,'size':4,'pad':0,'label':"data_80C33F70",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F74,'size':4,'pad':0,'label':"data_80C33F74",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F78,'size':4,'pad':0,'label':"data_80C33F78",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F7C,'size':4,'pad':0,'label':"data_80C33F7C",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F80,'size':4,'pad':0,'label':"data_80C33F80",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F84,'size':4,'pad':0,'label':"data_80C33F84",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F88,'size':4,'pad':0,'label':"data_80C33F88",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F8C,'size':4,'pad':0,'label':"data_80C33F8C",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F90,'size':4,'pad':0,'label':"data_80C33F90",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F94,'size':4,'pad':0,'label':"data_80C33F94",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F98,'size':4,'pad':0,'label':"data_80C33F98",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33F9C,'size':4,'pad':0,'label':"data_80C33F9C",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FA0,'size':4,'pad':0,'label':"data_80C33FA0",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FA4,'size':4,'pad':0,'label':"data_80C33FA4",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FA8,'size':4,'pad':0,'label':"data_80C33FA8",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FAC,'size':4,'pad':0,'label':"data_80C33FAC",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FB0,'size':4,'pad':0,'label':"data_80C33FB0",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FB4,'size':4,'pad':0,'label':"data_80C33FB4",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FB8,'size':4,'pad':0,'label':"data_80C33FB8",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FBC,'size':4,'pad':0,'label':"data_80C33FBC",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FC0,'size':4,'pad':0,'label':"data_80C33FC0",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FC4,'size':4,'pad':0,'label':"data_80C33FC4",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FC8,'size':4,'pad':0,'label':"data_80C33FC8",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FCC,'size':4,'pad':0,'label':"data_80C33FCC",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C33FD0,'size':4,'pad':0,'label':"data_80C33FD0",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__dt__12daObj_Kago_cFv":5,
	"__dt__8dCcD_CylFv":6,
	"create__12daObj_Kago_cFv":7,
	"__dt__8cM3dGLinFv":8,
	"__ct__8dCcD_CylFv":9,
	"__dt__8cM3dGCylFv":10,
	"__dt__8cM3dGAabFv":11,
	"__dt__12dBgS_AcchCirFv":12,
	"__dt__10dCcD_GSttsFv":13,
	"__dt__4cXyzFv":14,
	"__dt__12dBgS_ObjAcchFv":15,
	"CreateHeap__12daObj_Kago_cFv":16,
	"Delete__12daObj_Kago_cFv":17,
	"Execute__12daObj_Kago_cFv":18,
	"Draw__12daObj_Kago_cFv":19,
	"createHeapCallBack__12daObj_Kago_cFP10fopAc_ac_c":20,
	"isDelete__12daObj_Kago_cFv":21,
	"setEnvTevColor__12daObj_Kago_cFv":22,
	"setRoomNo__12daObj_Kago_cFv":23,
	"reset__12daObj_Kago_cFv":24,
	"setMtx__12daObj_Kago_cFv":25,
	"getWallAngle__12daObj_Kago_cFsPs":26,
	"setGoalPosAndAngle__12daObj_Kago_cFv":27,
	"setSmokePrtcl__12daObj_Kago_cFv":28,
	"setWaterPrtcl__12daObj_Kago_cFv":29,
	"setHamonPrtcl__12daObj_Kago_cFv":30,
	"daObj_Kago_Create__FPv":31,
	"daObj_Kago_Delete__FPv":32,
	"daObj_Kago_Execute__FPv":33,
	"daObj_Kago_Draw__FPv":34,
	"daObj_Kago_IsDelete__FPv":35,
	"__dt__10cCcD_GSttsFv":36,
	"func_80C33B84":37,
	"__sinit_d_a_obj_kago_cpp":38,
	"__dt__18daObj_Kago_Param_cFv":39,
	"func_80C33C5C":40,
	"func_80C33C64":41,
	"data_80C33C6C":42,
	"__destroy_global_chain_reference":43,
	"pad_80C33C78":44,
	"m__18daObj_Kago_Param_c":45,
	"l_ccDObjData":46,
	"heapSize":47,
	"lit_3963":48,
	"lit_3964":49,
	"lit_3965":50,
	"lit_3966":51,
	"lit_4523":52,
	"lit_4524":53,
	"lit_4525":54,
	"lit_4526":55,
	"lit_4527":56,
	"lit_4528":57,
	"lit_4529":58,
	"lit_4530":59,
	"lit_4531":60,
	"lit_4532":61,
	"lit_4533":62,
	"lit_4534":63,
	"lit_4535":64,
	"lit_4536":65,
	"lit_4537":66,
	"lit_4538":67,
	"lit_4539":68,
	"lit_4540":69,
	"lit_4541":70,
	"lit_4542":71,
	"lit_4543":72,
	"lit_4544":73,
	"lit_4545":74,
	"lit_4546":75,
	"lit_4547":76,
	"lit_4548":77,
	"lit_4549":78,
	"lit_4551":79,
	"lit_4576":80,
	"lit_4679":81,
	"lit_4680":82,
	"lit_4681":83,
	"lit_4706":84,
	"lit_4707":85,
	"lit_4708":86,
	"struct_80C33D94":87,
	"cNullVec__6Z2Calc":88,
	"lit_1787":89,
	"l_bmdData":90,
	"l_resNameList":91,
	"l_ccDCyl":92,
	"emttrId":93,
	"daObj_Kago_MethodTable":94,
	"g_profile_OBJ_KAGO":95,
	"__vt__8cM3dGAab":96,
	"__vt__8cM3dGCyl":97,
	"__vt__12dBgS_ObjAcch":98,
	"__vt__10cCcD_GStts":99,
	"__vt__10dCcD_GStts":100,
	"__vt__12dBgS_AcchCir":101,
	"__vt__8cM3dGLin":102,
	"__vt__12daObj_Kago_c":103,
	"__vt__18daObj_Kago_Param_c":104,
	"__global_destructor_chain":105,
	"lit_1109":106,
	"lit_1107":107,
	"lit_1105":108,
	"lit_1104":109,
	"lit_1099":110,
	"lit_1097":111,
	"lit_1095":112,
	"lit_1094":113,
	"lit_1057":114,
	"lit_1055":115,
	"lit_1053":116,
	"lit_1052":117,
	"lit_1014":118,
	"lit_1012":119,
	"lit_1010":120,
	"lit_1009":121,
	"lit_3815":122,
	"l_HIO":123,
	"lit_4686":124,
	"pos":125,
	"angle":126,
	"data_80C33F70":127,
	"data_80C33F74":128,
	"data_80C33F78":129,
	"data_80C33F7C":130,
	"data_80C33F80":131,
	"data_80C33F84":132,
	"data_80C33F88":133,
	"data_80C33F8C":134,
	"data_80C33F90":135,
	"data_80C33F94":136,
	"data_80C33F98":137,
	"data_80C33F9C":138,
	"data_80C33FA0":139,
	"data_80C33FA4":140,
	"data_80C33FA8":141,
	"data_80C33FAC":142,
	"data_80C33FB0":143,
	"data_80C33FB4":144,
	"data_80C33FB8":145,
	"data_80C33FBC":146,
	"data_80C33FC0":147,
	"data_80C33FC4":148,
	"data_80C33FC8":149,
	"data_80C33FCC":150,
	"data_80C33FD0":151,
}

