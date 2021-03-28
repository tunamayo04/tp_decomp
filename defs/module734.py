#
# Generate By: dol2asm
# Module: 734
#

# Libraries
LIBRARIES = [
	"d/a/tag/d_a_tag_qs",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_tag_qs",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80D5DE00,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5DE2C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5DE58,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5DE78,'size':312,'pad':0,'label':"__dt__9daTagQs_cFv",'name':"__dt__9daTagQs_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5DFB0,'size':352,'pad':0,'label':"create__9daTagQs_cFv",'name':"create__9daTagQs_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5E110,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5E16C,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5E1B4,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5E1FC,'size':36,'pad':0,'label':"getPower__9daTagQs_cFv",'name':"getPower__9daTagQs_cFv",'lib':-1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5E220,'size':36,'pad':0,'label':"getSafeArea__9daTagQs_cFv",'name':"getSafeArea__9daTagQs_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5E244,'size':36,'pad':0,'label':"getPower80__9daTagQs_cFv",'name':"getPower80__9daTagQs_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5E268,'size':36,'pad':0,'label':"getCenterPower__9daTagQs_cFv",'name':"getCenterPower__9daTagQs_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5E28C,'size':364,'pad':0,'label':"calcPower__9daTagQs_cFff",'name':"calcPower__9daTagQs_cFff",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5E3F8,'size':596,'pad':0,'label':"hikiyose__FP4cXyzP4cXyzP4cXyzf",'name':"hikiyose__FP4cXyzP4cXyzP4cXyzf",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5E64C,'size':940,'pad':0,'label':"search__FPvPv",'name':"search__FPvPv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5E9F8,'size':512,'pad':0,'label':"execute__9daTagQs_cFv",'name':"execute__9daTagQs_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5EBF8,'size':8,'pad':0,'label':"draw__9daTagQs_cFv",'name':"draw__9daTagQs_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D5EC00,'size':32,'pad':0,'label':"daTagQs_Draw__FP9daTagQs_c",'name':"daTagQs_Draw__FP9daTagQs_c",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5EC20,'size':32,'pad':0,'label':"daTagQs_Execute__FP9daTagQs_c",'name':"daTagQs_Execute__FP9daTagQs_c",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5EC40,'size':8,'pad':0,'label':"daTagQs_IsDelete__FP9daTagQs_c",'name':"daTagQs_IsDelete__FP9daTagQs_c",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D5EC48,'size':40,'pad':0,'label':"daTagQs_Delete__FP9daTagQs_c",'name':"daTagQs_Delete__FP9daTagQs_c",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5EC70,'size':32,'pad':0,'label':"daTagQs_Create__FP10fopAc_ac_c",'name':"daTagQs_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5EC90,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D5ECD8,'size':4,'pad':0,'label':"data_80D5ECD8",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D5ECDC,'size':4,'pad':0,'label':"data_80D5ECDC",'name':None,'lib':-1,'tu':2,'section':2,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D5ECE0,'size':4,'pad':0,'label':"lit_3734",'name':"@3734",'lib':-1,'tu':3,'section':3,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ECE4,'size':4,'pad':0,'label':"lit_3735",'name':"@3735",'lib':-1,'tu':3,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ECE8,'size':4,'pad':0,'label':"lit_3736",'name':"@3736",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ECEC,'size':4,'pad':0,'label':"lit_3813",'name':"@3813",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ECF0,'size':4,'pad':0,'label':"lit_3814",'name':"@3814",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ECF4,'size':4,'pad':0,'label':"lit_3823",'name':"@3823",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ECF8,'size':4,'pad':0,'label':"lit_3824",'name':"@3824",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ECFC,'size':4,'pad':0,'label':"lit_3833",'name':"@3833",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ED00,'size':4,'pad':0,'label':"lit_3834",'name':"@3834",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ED04,'size':4,'pad':0,'label':"lit_3843",'name':"@3843",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ED08,'size':4,'pad':4,'label':"lit_3863",'name':"@3863",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ED10,'size':8,'pad':0,'label':"lit_3865",'name':"@3865",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D5ED18,'size':4,'pad':0,'label':"lit_3934",'name':"@3934",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D5ED1C,'size':4,'pad':0,'label':"lit_3935",'name':"@3935",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ED20,'size':8,'pad':0,'label':"lit_3936",'name':"@3936",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D5ED28,'size':8,'pad':0,'label':"lit_3937",'name':"@3937",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D5ED30,'size':8,'pad':0,'label':"lit_3938",'name':"@3938",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D5ED38,'size':4,'pad':0,'label':"lit_4042",'name':"@4042",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ED3C,'size':4,'pad':0,'label':"lit_4043",'name':"@4043",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ED40,'size':4,'pad':0,'label':"lit_4090",'name':"@4090",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D5ED44,'size':68,'pad':0,'label':"l_cc_cyl_src",'name':"l_cc_cyl_src",'lib':-1,'tu':3,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D5ED88,'size':32,'pad':0,'label':"l_daTagQs_Method",'name':"l_daTagQs_Method",'lib':-1,'tu':3,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D5EDA8,'size':48,'pad':0,'label':"g_profile_TAG_QS",'name':"g_profile_TAG_QS",'lib':-1,'tu':3,'section':4,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D5EDD8,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':4,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D5EDE4,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':4,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D5EDF0,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':3,'section':4,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D5EDFC,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__dt__9daTagQs_cFv":3,
	"create__9daTagQs_cFv":4,
	"__dt__10dCcD_GSttsFv":5,
	"__dt__8cM3dGCylFv":6,
	"__dt__8cM3dGAabFv":7,
	"getPower__9daTagQs_cFv":8,
	"getSafeArea__9daTagQs_cFv":9,
	"getPower80__9daTagQs_cFv":10,
	"getCenterPower__9daTagQs_cFv":11,
	"calcPower__9daTagQs_cFff":12,
	"hikiyose__FP4cXyzP4cXyzP4cXyzf":13,
	"search__FPvPv":14,
	"execute__9daTagQs_cFv":15,
	"draw__9daTagQs_cFv":16,
	"daTagQs_Draw__FP9daTagQs_c":17,
	"daTagQs_Execute__FP9daTagQs_c":18,
	"daTagQs_IsDelete__FP9daTagQs_c":19,
	"daTagQs_Delete__FP9daTagQs_c":20,
	"daTagQs_Create__FP10fopAc_ac_c":21,
	"__dt__10cCcD_GSttsFv":22,
	"data_80D5ECD8":23,
	"data_80D5ECDC":24,
	"lit_3734":25,
	"lit_3735":26,
	"lit_3736":27,
	"lit_3813":28,
	"lit_3814":29,
	"lit_3823":30,
	"lit_3824":31,
	"lit_3833":32,
	"lit_3834":33,
	"lit_3843":34,
	"lit_3863":35,
	"lit_3865":36,
	"lit_3934":37,
	"lit_3935":38,
	"lit_3936":39,
	"lit_3937":40,
	"lit_3938":41,
	"lit_4042":42,
	"lit_4043":43,
	"lit_4090":44,
	"l_cc_cyl_src":45,
	"l_daTagQs_Method":46,
	"g_profile_TAG_QS":47,
	"__vt__8cM3dGAab":48,
	"__vt__8cM3dGCyl":49,
	"__vt__10cCcD_GStts":50,
	"__vt__10dCcD_GStts":51,
}

