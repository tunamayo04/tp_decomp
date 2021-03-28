#
# Generate By: dol2asm
# Module: 99
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_kbacket",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_kbacket",
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
	{'addr':0x80585D60,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80585D8C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80585DB8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80585DD8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80585DF4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80585E4C,'size':508,'pad':0,'label':"__dt__15daObj_KBacket_cFv",'name':"__dt__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80586048,'size':936,'pad':0,'label':"create__15daObj_KBacket_cFv",'name':"create__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805863F0,'size':72,'pad':0,'label':"__dt__8cM3dGLinFv",'name':"__dt__8cM3dGLinFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80586438,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80586480,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805864C8,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80586538,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80586594,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80586604,'size':256,'pad':0,'label':"CreateHeap__15daObj_KBacket_cFv",'name':"CreateHeap__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80586704,'size':52,'pad':0,'label':"Delete__15daObj_KBacket_cFv",'name':"Delete__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80586738,'size':3316,'pad':0,'label':"Execute__15daObj_KBacket_cFv",'name':"Execute__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8058742C,'size':300,'pad':0,'label':"Draw__15daObj_KBacket_cFv",'name':"Draw__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587558,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805875A0,'size':32,'pad':0,'label':"createHeapCallBack__15daObj_KBacket_cFP10fopAc_ac_c",'name':"createHeapCallBack__15daObj_KBacket_cFP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805875C0,'size':92,'pad':0,'label':"setEnvTevColor__15daObj_KBacket_cFv",'name':"setEnvTevColor__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8058761C,'size':68,'pad':0,'label':"setRoomNo__15daObj_KBacket_cFv",'name':"setRoomNo__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587660,'size':52,'pad':0,'label':"reset__15daObj_KBacket_cFv",'name':"reset__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587694,'size':304,'pad':0,'label':"setMtx__15daObj_KBacket_cFv",'name':"setMtx__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805877C4,'size':160,'pad':0,'label':"calcRollAngle__15daObj_KBacket_cFsi",'name':"calcRollAngle__15daObj_KBacket_cFsi",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587864,'size':400,'pad':0,'label':"getWallAngle__15daObj_KBacket_cFsPs",'name':"getWallAngle__15daObj_KBacket_cFsPs",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805879F4,'size':124,'pad':0,'label':"setSmokePrtcl__15daObj_KBacket_cFv",'name':"setSmokePrtcl__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587A70,'size':248,'pad':0,'label':"setWaterPrtcl__15daObj_KBacket_cFv",'name':"setWaterPrtcl__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587B68,'size':80,'pad':0,'label':"setHamonPrtcl__15daObj_KBacket_cFv",'name':"setHamonPrtcl__15daObj_KBacket_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587BB8,'size':32,'pad':0,'label':"daObj_KBacket_Create__FPv",'name':"daObj_KBacket_Create__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587BD8,'size':32,'pad':0,'label':"daObj_KBacket_Delete__FPv",'name':"daObj_KBacket_Delete__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587BF8,'size':32,'pad':0,'label':"daObj_KBacket_Execute__FPv",'name':"daObj_KBacket_Execute__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587C18,'size':32,'pad':0,'label':"daObj_KBacket_Draw__FPv",'name':"daObj_KBacket_Draw__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587C38,'size':8,'pad':0,'label':"daObj_KBacket_IsDelete__FPv",'name':"daObj_KBacket_IsDelete__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80587C40,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587C88,'size':28,'pad':0,'label':"func_80587C88",'name':"cLib_calcTimer<i>__FPi",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587CA4,'size':116,'pad':0,'label':"__sinit_d_a_obj_kbacket_cpp",'name':"__sinit_d_a_obj_kbacket_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587D18,'size':72,'pad':0,'label':"__dt__21daObj_KBacket_Param_cFv",'name':"__dt__21daObj_KBacket_Param_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587D60,'size':8,'pad':0,'label':"func_80587D60",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587D68,'size':8,'pad':0,'label':"func_80587D68",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80587D70,'size':8,'pad':0,'label':"data_80587D70",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587D78,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587D7C,'size':8,'pad':0,'label':"pad_80587D7C",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587D84,'size':44,'pad':0,'label':"m__21daObj_KBacket_Param_c",'name':"m__21daObj_KBacket_Param_c",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80587DB0,'size':48,'pad':0,'label':"l_ccDObjData",'name':"l_ccDObjData",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80587DE0,'size':4,'pad':0,'label':"lit_3965",'name':"@3965",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587DE4,'size':4,'pad':0,'label':"lit_3966",'name':"@3966",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587DE8,'size':4,'pad':0,'label':"lit_3967",'name':"@3967",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80587DEC,'size':4,'pad':0,'label':"lit_3968",'name':"@3968",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587DF0,'size':4,'pad':0,'label':"lit_3969",'name':"@3969",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587DF4,'size':4,'pad':0,'label':"lit_4463",'name':"@4463",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587DF8,'size':4,'pad':0,'label':"lit_4464",'name':"@4464",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587DFC,'size':4,'pad':0,'label':"lit_4465",'name':"@4465",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E00,'size':4,'pad':0,'label':"lit_4466",'name':"@4466",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E04,'size':4,'pad':0,'label':"lit_4467",'name':"@4467",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E08,'size':4,'pad':0,'label':"lit_4468",'name':"@4468",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E0C,'size':4,'pad':0,'label':"lit_4469",'name':"@4469",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E10,'size':4,'pad':0,'label':"lit_4470",'name':"@4470",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E14,'size':4,'pad':0,'label':"lit_4471",'name':"@4471",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E18,'size':4,'pad':0,'label':"lit_4472",'name':"@4472",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E1C,'size':4,'pad':0,'label':"lit_4473",'name':"@4473",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E20,'size':4,'pad':0,'label':"lit_4474",'name':"@4474",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E24,'size':4,'pad':0,'label':"lit_4475",'name':"@4475",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E28,'size':4,'pad':0,'label':"lit_4476",'name':"@4476",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E2C,'size':4,'pad':0,'label':"lit_4477",'name':"@4477",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E30,'size':4,'pad':0,'label':"lit_4478",'name':"@4478",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E34,'size':4,'pad':0,'label':"lit_4479",'name':"@4479",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E38,'size':4,'pad':0,'label':"lit_4480",'name':"@4480",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E3C,'size':4,'pad':0,'label':"lit_4481",'name':"@4481",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E40,'size':4,'pad':0,'label':"lit_4482",'name':"@4482",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E44,'size':4,'pad':0,'label':"lit_4483",'name':"@4483",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E48,'size':4,'pad':0,'label':"lit_4484",'name':"@4484",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E4C,'size':4,'pad':0,'label':"lit_4485",'name':"@4485",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E50,'size':4,'pad':0,'label':"lit_4486",'name':"@4486",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E54,'size':4,'pad':4,'label':"lit_4487",'name':"@4487",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E5C,'size':8,'pad':0,'label':"lit_4489",'name':"@4489",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80587E64,'size':4,'pad':0,'label':"lit_4649",'name':"@4649",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E68,'size':4,'pad':0,'label':"lit_4650",'name':"@4650",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E6C,'size':4,'pad':0,'label':"lit_4666",'name':"@4666",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E70,'size':8,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80587E78,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80587E84,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80587E98,'size':16,'pad':0,'label':"l_bmdData",'name':"l_bmdData",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80587EA8,'size':4,'pad':0,'label':"l_resNameList",'name':"l_resNameList",'lib':-1,'tu':2,'section':3,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587EAC,'size':68,'pad':0,'label':"l_ccDCyl",'name':"l_ccDCyl",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80587EF0,'size':8,'pad':0,'label':"emttrId",'name':"emttrId$4670",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80587EF8,'size':32,'pad':0,'label':"daObj_KBacket_MethodTable",'name':"daObj_KBacket_MethodTable",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587F18,'size':48,'pad':0,'label':"g_profile_OBJ_KBACKET",'name':"g_profile_OBJ_KBACKET",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587F48,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587F54,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587F78,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587F84,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587F90,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587F9C,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587FA8,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587FB4,'size':12,'pad':0,'label':"__vt__8cM3dGLin",'name':"__vt__8cM3dGLin",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587FC0,'size':12,'pad':0,'label':"__vt__15daObj_KBacket_c",'name':"__vt__15daObj_KBacket_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587FCC,'size':12,'pad':0,'label':"__vt__21daObj_KBacket_Param_c",'name':"__vt__21daObj_KBacket_Param_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80587FD8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80587FE0,'size':12,'pad':0,'label':"lit_3810",'name':"@3810",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80587FEC,'size':4,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__dt__15daObj_KBacket_cFv":5,
	"create__15daObj_KBacket_cFv":6,
	"__dt__8cM3dGLinFv":7,
	"__dt__8cM3dGCylFv":8,
	"__dt__8cM3dGAabFv":9,
	"__dt__12dBgS_AcchCirFv":10,
	"__dt__10dCcD_GSttsFv":11,
	"__dt__12dBgS_ObjAcchFv":12,
	"CreateHeap__15daObj_KBacket_cFv":13,
	"Delete__15daObj_KBacket_cFv":14,
	"Execute__15daObj_KBacket_cFv":15,
	"Draw__15daObj_KBacket_cFv":16,
	"__dt__8cM3dGPlaFv":17,
	"createHeapCallBack__15daObj_KBacket_cFP10fopAc_ac_c":18,
	"setEnvTevColor__15daObj_KBacket_cFv":19,
	"setRoomNo__15daObj_KBacket_cFv":20,
	"reset__15daObj_KBacket_cFv":21,
	"setMtx__15daObj_KBacket_cFv":22,
	"calcRollAngle__15daObj_KBacket_cFsi":23,
	"getWallAngle__15daObj_KBacket_cFsPs":24,
	"setSmokePrtcl__15daObj_KBacket_cFv":25,
	"setWaterPrtcl__15daObj_KBacket_cFv":26,
	"setHamonPrtcl__15daObj_KBacket_cFv":27,
	"daObj_KBacket_Create__FPv":28,
	"daObj_KBacket_Delete__FPv":29,
	"daObj_KBacket_Execute__FPv":30,
	"daObj_KBacket_Draw__FPv":31,
	"daObj_KBacket_IsDelete__FPv":32,
	"__dt__10cCcD_GSttsFv":33,
	"func_80587C88":34,
	"__sinit_d_a_obj_kbacket_cpp":35,
	"__dt__21daObj_KBacket_Param_cFv":36,
	"func_80587D60":37,
	"func_80587D68":38,
	"data_80587D70":39,
	"__destroy_global_chain_reference":40,
	"pad_80587D7C":41,
	"m__21daObj_KBacket_Param_c":42,
	"l_ccDObjData":43,
	"lit_3965":44,
	"lit_3966":45,
	"lit_3967":46,
	"lit_3968":47,
	"lit_3969":48,
	"lit_4463":49,
	"lit_4464":50,
	"lit_4465":51,
	"lit_4466":52,
	"lit_4467":53,
	"lit_4468":54,
	"lit_4469":55,
	"lit_4470":56,
	"lit_4471":57,
	"lit_4472":58,
	"lit_4473":59,
	"lit_4474":60,
	"lit_4475":61,
	"lit_4476":62,
	"lit_4477":63,
	"lit_4478":64,
	"lit_4479":65,
	"lit_4480":66,
	"lit_4481":67,
	"lit_4482":68,
	"lit_4483":69,
	"lit_4484":70,
	"lit_4485":71,
	"lit_4486":72,
	"lit_4487":73,
	"lit_4489":74,
	"lit_4649":75,
	"lit_4650":76,
	"lit_4666":77,
	"stringBase0":78,
	"cNullVec__6Z2Calc":79,
	"lit_1787":80,
	"l_bmdData":81,
	"l_resNameList":82,
	"l_ccDCyl":83,
	"emttrId":84,
	"daObj_KBacket_MethodTable":85,
	"g_profile_OBJ_KBACKET":86,
	"__vt__8cM3dGPla":87,
	"__vt__12dBgS_ObjAcch":88,
	"__vt__10cCcD_GStts":89,
	"__vt__10dCcD_GStts":90,
	"__vt__12dBgS_AcchCir":91,
	"__vt__8cM3dGAab":92,
	"__vt__8cM3dGCyl":93,
	"__vt__8cM3dGLin":94,
	"__vt__15daObj_KBacket_c":95,
	"__vt__21daObj_KBacket_Param_c":96,
	"__global_destructor_chain":97,
	"lit_3810":98,
	"l_HIO":99,
}

