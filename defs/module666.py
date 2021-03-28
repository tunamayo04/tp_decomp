#
# Generate By: dol2asm
# Module: 666
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_tombo",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_tombo",
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
	{'addr':0x80D190E0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1910C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D19138,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D19158,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D19174,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D191CC,'size':52,'pad':0,'label':"__ct__14daObj_TomHIO_cFv",'name':"__ct__14daObj_TomHIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D19200,'size':108,'pad':0,'label':"InitCcSph__12daObjTOMBO_cFv",'name':"InitCcSph__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1926C,'size':88,'pad':0,'label':"SetCcSph__12daObjTOMBO_cFv",'name':"SetCcSph__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D192C4,'size':32,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D192E4,'size':744,'pad':0,'label':"CreateHeap__12daObjTOMBO_cFv",'name':"CreateHeap__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D195CC,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D19614,'size':32,'pad':0,'label':"daObjTOMBO_Create__FP10fopAc_ac_c",'name':"daObjTOMBO_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D19634,'size':36,'pad':0,'label':"daObjTOMBO_Delete__FP12daObjTOMBO_c",'name':"daObjTOMBO_Delete__FP12daObjTOMBO_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D19658,'size':236,'pad':0,'label':"WaitAction__12daObjTOMBO_cFv",'name':"WaitAction__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D19744,'size':240,'pad':0,'label':"SpeedSet__12daObjTOMBO_cFv",'name':"SpeedSet__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D19834,'size':328,'pad':0,'label':"CheckWater__12daObjTOMBO_cFv",'name':"CheckWater__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1997C,'size':120,'pad':0,'label':"__dt__14dBgS_ObjGndChkFv",'name':"__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D199F4,'size':340,'pad':0,'label':"CheckGround__12daObjTOMBO_cFv",'name':"CheckGround__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D19B48,'size':236,'pad':0,'label':"CheckWall__12daObjTOMBO_cFv",'name':"CheckWall__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D19C34,'size':532,'pad':0,'label':"SearchLink__12daObjTOMBO_cFv",'name':"SearchLink__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D19E48,'size':752,'pad':0,'label':"LinkAction__12daObjTOMBO_cFv",'name':"LinkAction__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1A138,'size':328,'pad':0,'label':"MoveAction__12daObjTOMBO_cFv",'name':"MoveAction__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1A280,'size':364,'pad':0,'label':"Action__12daObjTOMBO_cFv",'name':"Action__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1A3EC,'size':296,'pad':0,'label':"ShopAction__12daObjTOMBO_cFv",'name':"ShopAction__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1A514,'size':16,'pad':0,'label':"Insect_Release__12daObjTOMBO_cFv",'name':"Insect_Release__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1A524,'size':292,'pad':0,'label':"ParticleSet__12daObjTOMBO_cFv",'name':"ParticleSet__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1A648,'size':628,'pad':0,'label':"BoomChk__12daObjTOMBO_cFv",'name':"BoomChk__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1A8BC,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1A904,'size':540,'pad':0,'label':"Execute__12daObjTOMBO_cFv",'name':"Execute__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1AB20,'size':356,'pad':0,'label':"ObjHit__12daObjTOMBO_cFv",'name':"ObjHit__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1AC84,'size':380,'pad':0,'label':"Z_BufferChk__12daObjTOMBO_cFv",'name':"Z_BufferChk__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1AE00,'size':104,'pad':0,'label':"Delete__12daObjTOMBO_cFv",'name':"Delete__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1AE68,'size':96,'pad':0,'label':"setBaseMtx__12daObjTOMBO_cFv",'name':"setBaseMtx__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1AEC8,'size':224,'pad':0,'label':"daObjTOMBO_Draw__FP12daObjTOMBO_c",'name':"daObjTOMBO_Draw__FP12daObjTOMBO_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1AFA8,'size':32,'pad':0,'label':"daObjTOMBO_Execute__FP12daObjTOMBO_c",'name':"daObjTOMBO_Execute__FP12daObjTOMBO_c",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1AFC8,'size':428,'pad':0,'label':"CreateChk__12daObjTOMBO_cFv",'name':"CreateChk__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1B174,'size':924,'pad':0,'label':"create__12daObjTOMBO_cFv",'name':"create__12daObjTOMBO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1B510,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1B580,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1B5C8,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1B610,'size':8,'pad':0,'label':"daObjTOMBO_IsDelete__FP12daObjTOMBO_c",'name':"daObjTOMBO_IsDelete__FP12daObjTOMBO_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D1B618,'size':72,'pad':0,'label':"__dt__14daObj_TomHIO_cFv",'name':"__dt__14daObj_TomHIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1B660,'size':60,'pad':0,'label':"__sinit_d_a_obj_tombo_cpp",'name':"__sinit_d_a_obj_tombo_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1B69C,'size':8,'pad':0,'label':"func_80D1B69C",'name':"@20@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1B6A4,'size':8,'pad':0,'label':"func_80D1B6A4",'name':"@76@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1B6AC,'size':8,'pad':0,'label':"func_80D1B6AC",'name':"@60@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1B6B4,'size':8,'pad':0,'label':"func_80D1B6B4",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1B6BC,'size':8,'pad':0,'label':"func_80D1B6BC",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1B6C4,'size':8,'pad':0,'label':"data_80D1B6C4",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B6CC,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B6D0,'size':8,'pad':0,'label':"pad_80D1B6D0",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B6D8,'size':4,'pad':0,'label':"lit_3775",'name':"@3775",'lib':-1,'tu':2,'section':2,'r':[14,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B6DC,'size':4,'pad':0,'label':"lit_3776",'name':"@3776",'lib':-1,'tu':2,'section':2,'r':[8,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B6E0,'size':2,'pad':2,'label':"l_tom_itemno",'name':"l_tom_itemno",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B6E4,'size':64,'pad':0,'label':"ccSphSrc",'name':"ccSphSrc$3780",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1B724,'size':4,'pad':0,'label':"lit_3789",'name':"@3789",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B728,'size':4,'pad':0,'label':"lit_3922",'name':"@3922",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B72C,'size':4,'pad':0,'label':"lit_3923",'name':"@3923",'lib':-1,'tu':2,'section':2,'r':[7,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B730,'size':4,'pad':0,'label':"lit_3942",'name':"@3942",'lib':-1,'tu':2,'section':2,'r':[12,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1B734,'size':4,'pad':0,'label':"lit_3943",'name':"@3943",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B738,'size':4,'pad':0,'label':"lit_3971",'name':"@3971",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B73C,'size':4,'pad':0,'label':"lit_3972",'name':"@3972",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B740,'size':4,'pad':0,'label':"lit_3973",'name':"@3973",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B744,'size':4,'pad':0,'label':"lit_4003",'name':"@4003",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B748,'size':4,'pad':0,'label':"lit_4004",'name':"@4004",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B74C,'size':4,'pad':0,'label':"lit_4005",'name':"@4005",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B750,'size':4,'pad':4,'label':"lit_4022",'name':"@4022",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B758,'size':8,'pad':0,'label':"lit_4079",'name':"@4079",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1B760,'size':8,'pad':0,'label':"lit_4080",'name':"@4080",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1B768,'size':8,'pad':0,'label':"lit_4081",'name':"@4081",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1B770,'size':4,'pad':0,'label':"lit_4082",'name':"@4082",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B774,'size':4,'pad':0,'label':"lit_4083",'name':"@4083",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B778,'size':4,'pad':0,'label':"lit_4084",'name':"@4084",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B77C,'size':4,'pad':0,'label':"lit_4085",'name':"@4085",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B780,'size':4,'pad':0,'label':"lit_4149",'name':"@4149",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B784,'size':4,'pad':0,'label':"lit_4150",'name':"@4150",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B788,'size':4,'pad':0,'label':"lit_4151",'name':"@4151",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B78C,'size':4,'pad':0,'label':"lit_4175",'name':"@4175",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B790,'size':4,'pad':0,'label':"lit_4176",'name':"@4176",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B794,'size':4,'pad':0,'label':"lit_4210",'name':"@4210",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B798,'size':8,'pad':0,'label':"lit_4212",'name':"@4212",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1B7A0,'size':4,'pad':0,'label':"lit_4311",'name':"@4311",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7A4,'size':4,'pad':0,'label':"lit_4312",'name':"@4312",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7A8,'size':4,'pad':0,'label':"lit_4313",'name':"@4313",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7AC,'size':4,'pad':0,'label':"lit_4314",'name':"@4314",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7B0,'size':4,'pad':0,'label':"lit_4315",'name':"@4315",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7B4,'size':4,'pad':0,'label':"lit_4316",'name':"@4316",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7B8,'size':8,'pad':0,'label':"lit_4347",'name':"@4347",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1B7C0,'size':4,'pad':0,'label':"lit_4420",'name':"@4420",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7C4,'size':4,'pad':0,'label':"lit_4454",'name':"@4454",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7C8,'size':4,'pad':0,'label':"lit_4485",'name':"@4485",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7CC,'size':4,'pad':0,'label':"lit_4523",'name':"@4523",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7D0,'size':4,'pad':0,'label':"lit_4524",'name':"@4524",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7D4,'size':4,'pad':0,'label':"lit_4525",'name':"@4525",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7D8,'size':4,'pad':0,'label':"lit_4590",'name':"@4590",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7DC,'size':4,'pad':0,'label':"lit_4591",'name':"@4591",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7E0,'size':4,'pad':0,'label':"l_musiya_num",'name':"l_musiya_num",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7E4,'size':4,'pad':0,'label':"lit_4744",'name':"@4744",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1B7E8,'size':14,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[6,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80D1B7F8,'size':32,'pad':0,'label':"l_daObjTOMBO_Method",'name':"l_daObjTOMBO_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B818,'size':48,'pad':0,'label':"g_profile_Obj_Tombo",'name':"g_profile_Obj_Tombo",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B848,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B86C,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B878,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B884,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B890,'size':12,'pad':0,'label':"__vt__12daObjTOMBO_c",'name':"__vt__12daObjTOMBO_c",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B89C,'size':48,'pad':0,'label':"__vt__14dBgS_ObjGndChk",'name':"__vt__14dBgS_ObjGndChk",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B8CC,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B8D8,'size':12,'pad':0,'label':"__vt__14daObj_TomHIO_c",'name':"__vt__14daObj_TomHIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1B8E8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1B8F0,'size':4,'pad':0,'label':"data_80D1B8F0",'name':None,'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1B8F4,'size':12,'pad':0,'label':"lit_3770",'name':"@3770",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1B900,'size':20,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daObj_TomHIO_cFv":5,
	"InitCcSph__12daObjTOMBO_cFv":6,
	"SetCcSph__12daObjTOMBO_cFv":7,
	"useHeapInit__FP10fopAc_ac_c":8,
	"CreateHeap__12daObjTOMBO_cFv":9,
	"__dt__12J3DFrameCtrlFv":10,
	"daObjTOMBO_Create__FP10fopAc_ac_c":11,
	"daObjTOMBO_Delete__FP12daObjTOMBO_c":12,
	"WaitAction__12daObjTOMBO_cFv":13,
	"SpeedSet__12daObjTOMBO_cFv":14,
	"CheckWater__12daObjTOMBO_cFv":15,
	"__dt__14dBgS_ObjGndChkFv":16,
	"CheckGround__12daObjTOMBO_cFv":17,
	"CheckWall__12daObjTOMBO_cFv":18,
	"SearchLink__12daObjTOMBO_cFv":19,
	"LinkAction__12daObjTOMBO_cFv":20,
	"MoveAction__12daObjTOMBO_cFv":21,
	"Action__12daObjTOMBO_cFv":22,
	"ShopAction__12daObjTOMBO_cFv":23,
	"Insect_Release__12daObjTOMBO_cFv":24,
	"ParticleSet__12daObjTOMBO_cFv":25,
	"BoomChk__12daObjTOMBO_cFv":26,
	"__dt__8cM3dGPlaFv":27,
	"Execute__12daObjTOMBO_cFv":28,
	"ObjHit__12daObjTOMBO_cFv":29,
	"Z_BufferChk__12daObjTOMBO_cFv":30,
	"Delete__12daObjTOMBO_cFv":31,
	"setBaseMtx__12daObjTOMBO_cFv":32,
	"daObjTOMBO_Draw__FP12daObjTOMBO_c":33,
	"daObjTOMBO_Execute__FP12daObjTOMBO_c":34,
	"CreateChk__12daObjTOMBO_cFv":35,
	"create__12daObjTOMBO_cFv":36,
	"__dt__12dBgS_ObjAcchFv":37,
	"__dt__8cM3dGSphFv":38,
	"__dt__8cM3dGAabFv":39,
	"daObjTOMBO_IsDelete__FP12daObjTOMBO_c":40,
	"__dt__14daObj_TomHIO_cFv":41,
	"__sinit_d_a_obj_tombo_cpp":42,
	"func_80D1B69C":43,
	"func_80D1B6A4":44,
	"func_80D1B6AC":45,
	"func_80D1B6B4":46,
	"func_80D1B6BC":47,
	"data_80D1B6C4":48,
	"__destroy_global_chain_reference":49,
	"pad_80D1B6D0":50,
	"lit_3775":51,
	"lit_3776":52,
	"l_tom_itemno":53,
	"ccSphSrc":54,
	"lit_3789":55,
	"lit_3922":56,
	"lit_3923":57,
	"lit_3942":58,
	"lit_3943":59,
	"lit_3971":60,
	"lit_3972":61,
	"lit_3973":62,
	"lit_4003":63,
	"lit_4004":64,
	"lit_4005":65,
	"lit_4022":66,
	"lit_4079":67,
	"lit_4080":68,
	"lit_4081":69,
	"lit_4082":70,
	"lit_4083":71,
	"lit_4084":72,
	"lit_4085":73,
	"lit_4149":74,
	"lit_4150":75,
	"lit_4151":76,
	"lit_4175":77,
	"lit_4176":78,
	"lit_4210":79,
	"lit_4212":80,
	"lit_4311":81,
	"lit_4312":82,
	"lit_4313":83,
	"lit_4314":84,
	"lit_4315":85,
	"lit_4316":86,
	"lit_4347":87,
	"lit_4420":88,
	"lit_4454":89,
	"lit_4485":90,
	"lit_4523":91,
	"lit_4524":92,
	"lit_4525":93,
	"lit_4590":94,
	"lit_4591":95,
	"l_musiya_num":96,
	"lit_4744":97,
	"stringBase0":98,
	"l_daObjTOMBO_Method":99,
	"g_profile_Obj_Tombo":100,
	"__vt__12dBgS_ObjAcch":101,
	"__vt__8cM3dGSph":102,
	"__vt__8cM3dGAab":103,
	"__vt__8cM3dGPla":104,
	"__vt__12daObjTOMBO_c":105,
	"__vt__14dBgS_ObjGndChk":106,
	"__vt__12J3DFrameCtrl":107,
	"__vt__14daObj_TomHIO_c":108,
	"__global_destructor_chain":109,
	"data_80D1B8F0":110,
	"lit_3770":111,
	"l_HIO":112,
}

