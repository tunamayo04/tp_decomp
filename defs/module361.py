#
# Generate By: dol2asm
# Module: 361
#

# Libraries
LIBRARIES = [
	"d/a/npc/d_a_npc_shoe",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_npc_shoe",
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
	{'addr':0x80AE7860,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE788C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE78B8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE78D8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE78F4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE794C,'size':388,'pad':0,'label':"__ct__11daNpcShoe_cFv",'name':"__ct__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE7AD0,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE7B18,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE7B60,'size':488,'pad':0,'label':"__dt__11daNpcShoe_cFv",'name':"__dt__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE7D48,'size':656,'pad':0,'label':"Create__11daNpcShoe_cFv",'name':"Create__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE7FD8,'size':528,'pad':0,'label':"CreateHeap__11daNpcShoe_cFv",'name':"CreateHeap__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE81E8,'size':52,'pad':0,'label':"Delete__11daNpcShoe_cFv",'name':"Delete__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE821C,'size':236,'pad':0,'label':"Execute__11daNpcShoe_cFv",'name':"Execute__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE8308,'size':260,'pad':0,'label':"Draw__11daNpcShoe_cFv",'name':"Draw__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE840C,'size':396,'pad':0,'label':"ctrlJoint__11daNpcShoe_cFP8J3DJointP8J3DModel",'name':"ctrlJoint__11daNpcShoe_cFP8J3DJointP8J3DModel",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE8598,'size':32,'pad':0,'label':"createHeapCallBack__11daNpcShoe_cFP10fopAc_ac_c",'name':"createHeapCallBack__11daNpcShoe_cFP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE85B8,'size':76,'pad':0,'label':"ctrlJointCallBack__11daNpcShoe_cFP8J3DJointi",'name':"ctrlJointCallBack__11daNpcShoe_cFP8J3DJointi",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE8604,'size':72,'pad':0,'label':"setMotion__11daNpcShoe_cFifi",'name':"setMotion__11daNpcShoe_cFifi",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE864C,'size':784,'pad':0,'label':"reset__11daNpcShoe_cFv",'name':"reset__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE895C,'size':168,'pad':0,'label':"setAction__11daNpcShoe_cFM11daNpcShoe_cFPCvPvPv_b",'name':"setAction__11daNpcShoe_cFM11daNpcShoe_cFPCvPvPv_b",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE8A04,'size':1056,'pad':0,'label':"wait__11daNpcShoe_cFPv",'name':"wait__11daNpcShoe_cFPv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE8E24,'size':176,'pad':0,'label':"fear__11daNpcShoe_cFPv",'name':"fear__11daNpcShoe_cFPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE8ED4,'size':448,'pad':0,'label':"talk__11daNpcShoe_cFPv",'name':"talk__11daNpcShoe_cFPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9094,'size':460,'pad':0,'label':"demo__11daNpcShoe_cFPv",'name':"demo__11daNpcShoe_cFPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9260,'size':32,'pad':0,'label':"daNpcShoe_Create__FPv",'name':"daNpcShoe_Create__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9280,'size':32,'pad':0,'label':"daNpcShoe_Delete__FPv",'name':"daNpcShoe_Delete__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE92A0,'size':32,'pad':0,'label':"daNpcShoe_Execute__FPv",'name':"daNpcShoe_Execute__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE92C0,'size':32,'pad':0,'label':"daNpcShoe_Draw__FPv",'name':"daNpcShoe_Draw__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE92E0,'size':8,'pad':0,'label':"daNpcShoe_IsDelete__FPv",'name':"daNpcShoe_IsDelete__FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AE92E8,'size':184,'pad':0,'label':"setParam__11daNpcShoe_cFv",'name':"setParam__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE93A0,'size':644,'pad':0,'label':"main__11daNpcShoe_cFv",'name':"main__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9624,'size':508,'pad':0,'label':"setAttnPos__11daNpcShoe_cFv",'name':"setAttnPos__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9820,'size':480,'pad':0,'label':"lookat__11daNpcShoe_cFv",'name':"lookat__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9A00,'size':208,'pad':0,'label':"setMotionAnm__11daNpcShoe_cFif",'name':"setMotionAnm__11daNpcShoe_cFif",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9AD0,'size':8,'pad':0,'label':"drawDbgInfo__11daNpcShoe_cFv",'name':"drawDbgInfo__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AE9AD8,'size':72,'pad':0,'label':"__dt__18daNpcF_ActorMngr_cFv",'name':"__dt__18daNpcF_ActorMngr_cFv",'lib':-1,'tu':2,'section':0,'r':[5,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9B20,'size':60,'pad':0,'label':"__ct__18daNpcF_ActorMngr_cFv",'name':"__ct__18daNpcF_ActorMngr_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9B5C,'size':208,'pad':0,'label':"__dt__15daNpcF_Lookat_cFv",'name':"__dt__15daNpcF_Lookat_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9C2C,'size':60,'pad':0,'label':"__dt__5csXyzFv",'name':"__dt__5csXyzFv",'lib':-1,'tu':2,'section':0,'r':[5,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9C68,'size':4,'pad':0,'label':"__ct__5csXyzFv",'name':"__ct__5csXyzFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AE9C6C,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':2,'section':0,'r':[5,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9CA8,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AE9CAC,'size':588,'pad':0,'label':"__dt__8daNpcF_cFv",'name':"__dt__8daNpcF_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AE9EF8,'size':496,'pad':0,'label':"__ct__8daNpcF_cFv",'name':"__ct__8daNpcF_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEA0E8,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEA158,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEA1B4,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEA224,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEA26C,'size':8,'pad':0,'label':"ctrlBtk__8daNpcF_cFv",'name':"ctrlBtk__8daNpcF_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEA274,'size':4,'pad':0,'label':"setCollisions__8daNpcF_cFv",'name':"setCollisions__8daNpcF_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEA278,'size':8,'pad':0,'label':"setExpressionAnm__8daNpcF_cFib",'name':"setExpressionAnm__8daNpcF_cFib",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEA280,'size':8,'pad':0,'label':"setExpressionBtp__8daNpcF_cFi",'name':"setExpressionBtp__8daNpcF_cFi",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEA288,'size':4,'pad':0,'label':"setExpression__8daNpcF_cFif",'name':"setExpression__8daNpcF_cFif",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEA28C,'size':4,'pad':0,'label':"drawOtherMdls__8daNpcF_cFv",'name':"drawOtherMdls__8daNpcF_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEA290,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEA2D8,'size':104,'pad':0,'label':"__sinit_d_a_npc_shoe_cpp",'name':"__sinit_d_a_npc_shoe_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEA340,'size':4,'pad':0,'label':"adjustShapeAngle__11daNpcShoe_cFv",'name':"adjustShapeAngle__11daNpcShoe_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEA344,'size':72,'pad':0,'label':"__dt__17daNpcShoe_Param_cFv",'name':"__dt__17daNpcShoe_Param_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEA38C,'size':8,'pad':0,'label':"func_80AEA38C",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEA394,'size':8,'pad':0,'label':"func_80AEA394",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEA39C,'size':8,'pad':0,'label':"data_80AEA39C",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA3A4,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA3A8,'size':8,'pad':0,'label':"pad_80AEA3A8",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA3B0,'size':108,'pad':0,'label':"m__17daNpcShoe_Param_c",'name':"m__17daNpcShoe_Param_c",'lib':-1,'tu':2,'section':2,'r':[11,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA41C,'size':4,'pad':0,'label':"lit_4166",'name':"@4166",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA420,'size':4,'pad':0,'label':"lit_4167",'name':"@4167",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA424,'size':4,'pad':0,'label':"lit_4168",'name':"@4168",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA428,'size':4,'pad':0,'label':"lit_4169",'name':"@4169",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA42C,'size':4,'pad':0,'label':"lit_4235",'name':"@4235",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA430,'size':4,'pad':0,'label':"lit_4236",'name':"@4236",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA434,'size':4,'pad':0,'label':"lit_4237",'name':"@4237",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA438,'size':12,'pad':0,'label':"lit_4302",'name':"@4302",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA444,'size':12,'pad':0,'label':"lit_4423",'name':"@4423",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA450,'size':4,'pad':0,'label':"lit_4480",'name':"@4480",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA454,'size':12,'pad':0,'label':"lit_4481",'name':"@4481",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA460,'size':4,'pad':0,'label':"lit_4482",'name':"@4482",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA464,'size':12,'pad':0,'label':"lit_4483",'name':"@4483",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA470,'size':12,'pad':0,'label':"lit_4484",'name':"@4484",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA47C,'size':8,'pad':0,'label':"lit_4485",'name':"@4485",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA484,'size':12,'pad':0,'label':"lit_4486",'name':"@4486",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA490,'size':12,'pad':0,'label':"lit_4487",'name':"@4487",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA49C,'size':8,'pad':0,'label':"lit_4488",'name':"@4488",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA4A4,'size':12,'pad':0,'label':"lit_4489",'name':"@4489",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA4B0,'size':12,'pad':0,'label':"lit_4490",'name':"@4490",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA4BC,'size':8,'pad':0,'label':"lit_4491",'name':"@4491",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA4C4,'size':12,'pad':0,'label':"lit_4492",'name':"@4492",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA4D0,'size':4,'pad':0,'label':"lit_4493",'name':"@4493",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA4D4,'size':20,'pad':0,'label':"lit_4494",'name':"@4494",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA4E8,'size':12,'pad':4,'label':"lit_4508",'name':"@4508",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA4F8,'size':8,'pad':0,'label':"lit_4623",'name':"@4623",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA500,'size':8,'pad':0,'label':"lit_4624",'name':"@4624",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA508,'size':4,'pad':0,'label':"lit_4841",'name':"@4841",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA50C,'size':4,'pad':0,'label':"lit_4842",'name':"@4842",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA510,'size':4,'pad':0,'label':"lit_4883",'name':"@4883",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA514,'size':4,'pad':0,'label':"lit_4884",'name':"@4884",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA518,'size':4,'pad':0,'label':"lit_4885",'name':"@4885",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA51C,'size':28,'pad':0,'label':"struct_80AEA51C",'name':None,'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x80AEA538,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA544,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AEA558,'size':60,'pad':0,'label':"l_bckGetParamList",'name':"l_bckGetParamList",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA594,'size':12,'pad':0,'label':"l_btpGetParamList",'name':"l_btpGetParamList",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA5A0,'size':12,'pad':0,'label':"l_arcNames",'name':"l_arcNames",'lib':-1,'tu':2,'section':3,'r':[6,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA5AC,'size':4,'pad':0,'label':"l_evtNames",'name':"l_evtNames",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA5B0,'size':4,'pad':0,'label':"l_myName",'name':"l_myName",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA5B4,'size':12,'pad':0,'label':"mEvtSeqList__11daNpcShoe_c",'name':"mEvtSeqList__11daNpcShoe_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA5C0,'size':12,'pad':0,'label':"lit_4424",'name':"@4424",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA5CC,'size':12,'pad':0,'label':"lit_4547",'name':"@4547",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA5D8,'size':12,'pad':0,'label':"lit_4552",'name':"@4552",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA5E4,'size':12,'pad':0,'label':"lit_4559",'name':"@4559",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA5F0,'size':12,'pad':0,'label':"lit_4645",'name':"@4645",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA5FC,'size':12,'pad':0,'label':"lit_4684",'name':"@4684",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA608,'size':32,'pad':0,'label':"daNpcShoe_MethodTable",'name':"daNpcShoe_MethodTable",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA628,'size':48,'pad':0,'label':"g_profile_NPC_SHOE",'name':"g_profile_NPC_SHOE",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA658,'size':72,'pad':0,'label':"__vt__11daNpcShoe_c",'name':"__vt__11daNpcShoe_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA6A0,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA6AC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA6D0,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA6DC,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA6E8,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA6F4,'size':12,'pad':0,'label':"__vt__18daNpcF_ActorMngr_c",'name':"__vt__18daNpcF_ActorMngr_c",'lib':-1,'tu':2,'section':3,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA700,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA70C,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA718,'size':12,'pad':0,'label':"__vt__15daNpcF_Lookat_c",'name':"__vt__15daNpcF_Lookat_c",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA724,'size':12,'pad':0,'label':"__vt__17daNpcShoe_Param_c",'name':"__vt__17daNpcShoe_Param_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEA730,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA738,'size':12,'pad':0,'label':"lit_3805",'name':"@3805",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEA744,'size':4,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__11daNpcShoe_cFv":5,
	"__dt__8cM3dGCylFv":6,
	"__dt__8cM3dGAabFv":7,
	"__dt__11daNpcShoe_cFv":8,
	"Create__11daNpcShoe_cFv":9,
	"CreateHeap__11daNpcShoe_cFv":10,
	"Delete__11daNpcShoe_cFv":11,
	"Execute__11daNpcShoe_cFv":12,
	"Draw__11daNpcShoe_cFv":13,
	"ctrlJoint__11daNpcShoe_cFP8J3DJointP8J3DModel":14,
	"createHeapCallBack__11daNpcShoe_cFP10fopAc_ac_c":15,
	"ctrlJointCallBack__11daNpcShoe_cFP8J3DJointi":16,
	"setMotion__11daNpcShoe_cFifi":17,
	"reset__11daNpcShoe_cFv":18,
	"setAction__11daNpcShoe_cFM11daNpcShoe_cFPCvPvPv_b":19,
	"wait__11daNpcShoe_cFPv":20,
	"fear__11daNpcShoe_cFPv":21,
	"talk__11daNpcShoe_cFPv":22,
	"demo__11daNpcShoe_cFPv":23,
	"daNpcShoe_Create__FPv":24,
	"daNpcShoe_Delete__FPv":25,
	"daNpcShoe_Execute__FPv":26,
	"daNpcShoe_Draw__FPv":27,
	"daNpcShoe_IsDelete__FPv":28,
	"setParam__11daNpcShoe_cFv":29,
	"main__11daNpcShoe_cFv":30,
	"setAttnPos__11daNpcShoe_cFv":31,
	"lookat__11daNpcShoe_cFv":32,
	"setMotionAnm__11daNpcShoe_cFif":33,
	"drawDbgInfo__11daNpcShoe_cFv":34,
	"__dt__18daNpcF_ActorMngr_cFv":35,
	"__ct__18daNpcF_ActorMngr_cFv":36,
	"__dt__15daNpcF_Lookat_cFv":37,
	"__dt__5csXyzFv":38,
	"__ct__5csXyzFv":39,
	"__dt__4cXyzFv":40,
	"__ct__4cXyzFv":41,
	"__dt__8daNpcF_cFv":42,
	"__ct__8daNpcF_cFv":43,
	"__dt__12dBgS_AcchCirFv":44,
	"__dt__10dCcD_GSttsFv":45,
	"__dt__12dBgS_ObjAcchFv":46,
	"__dt__12J3DFrameCtrlFv":47,
	"ctrlBtk__8daNpcF_cFv":48,
	"setCollisions__8daNpcF_cFv":49,
	"setExpressionAnm__8daNpcF_cFib":50,
	"setExpressionBtp__8daNpcF_cFi":51,
	"setExpression__8daNpcF_cFif":52,
	"drawOtherMdls__8daNpcF_cFv":53,
	"__dt__10cCcD_GSttsFv":54,
	"__sinit_d_a_npc_shoe_cpp":55,
	"adjustShapeAngle__11daNpcShoe_cFv":56,
	"__dt__17daNpcShoe_Param_cFv":57,
	"func_80AEA38C":58,
	"func_80AEA394":59,
	"data_80AEA39C":60,
	"__destroy_global_chain_reference":61,
	"pad_80AEA3A8":62,
	"m__17daNpcShoe_Param_c":63,
	"lit_4166":64,
	"lit_4167":65,
	"lit_4168":66,
	"lit_4169":67,
	"lit_4235":68,
	"lit_4236":69,
	"lit_4237":70,
	"lit_4302":71,
	"lit_4423":72,
	"lit_4480":73,
	"lit_4481":74,
	"lit_4482":75,
	"lit_4483":76,
	"lit_4484":77,
	"lit_4485":78,
	"lit_4486":79,
	"lit_4487":80,
	"lit_4488":81,
	"lit_4489":82,
	"lit_4490":83,
	"lit_4491":84,
	"lit_4492":85,
	"lit_4493":86,
	"lit_4494":87,
	"lit_4508":88,
	"lit_4623":89,
	"lit_4624":90,
	"lit_4841":91,
	"lit_4842":92,
	"lit_4883":93,
	"lit_4884":94,
	"lit_4885":95,
	"struct_80AEA51C":96,
	"cNullVec__6Z2Calc":97,
	"lit_1787":98,
	"l_bckGetParamList":99,
	"l_btpGetParamList":100,
	"l_arcNames":101,
	"l_evtNames":102,
	"l_myName":103,
	"mEvtSeqList__11daNpcShoe_c":104,
	"lit_4424":105,
	"lit_4547":106,
	"lit_4552":107,
	"lit_4559":108,
	"lit_4645":109,
	"lit_4684":110,
	"daNpcShoe_MethodTable":111,
	"g_profile_NPC_SHOE":112,
	"__vt__11daNpcShoe_c":113,
	"__vt__12J3DFrameCtrl":114,
	"__vt__12dBgS_ObjAcch":115,
	"__vt__10cCcD_GStts":116,
	"__vt__10dCcD_GStts":117,
	"__vt__12dBgS_AcchCir":118,
	"__vt__18daNpcF_ActorMngr_c":119,
	"__vt__8cM3dGCyl":120,
	"__vt__8cM3dGAab":121,
	"__vt__15daNpcF_Lookat_c":122,
	"__vt__17daNpcShoe_Param_c":123,
	"__global_destructor_chain":124,
	"lit_3805":125,
	"l_HIO":126,
}

