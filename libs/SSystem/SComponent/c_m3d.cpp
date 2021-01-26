/* c_m3d.cpp autogenerated by split.py v0.3 at 2021-01-01 14:58:46.459661 */

#include "SComponent/c_m3d.h"

extern f32 lbl_80455118;  // SComponent::@2256, 0.0
extern f32 lbl_80455138;  // SComponent::@2273, 1.0
extern f32 lbl_8045513C;  // SComponent::@2346, 0.02
extern f32 lbl_804551C4;  // SComponent::@3892, 0.5

// additional symbols needed for c_m3d.cpp
// autogenerated by split.py v0.3 at 2021-01-01 14:58:45.990799
extern u8 lbl_80455158;
extern u8 lbl_80455180;
extern u8 lbl_80455128;
extern u8 lbl_80455190;
extern u8 lbl_804551BC;
extern u8 lbl_80455168;
extern u8 lbl_804551C8;
extern u8 lbl_804551B8;
extern u8 lbl_80455148;
extern u8 lbl_80455170;
extern u8 lbl_80455150;
extern u8 lbl_80455198;
extern u8 lbl_8045519C;
extern u8 lbl_8045515C;
extern u8 lbl_804551A0;
extern u8 lbl_80455174;
extern u8 lbl_80455178;
extern u8 lbl_804551CC;
extern u8 lbl_80450AEC;
extern u8 lbl_8045516C;
extern u8 lbl_80455194;
extern u8 lbl_804551C0;
extern u8 lbl_80455188;
extern u8 lbl_80455164;
extern u8 lbl_804551AC;
extern u8 lbl_8045517C;
extern u8 lbl_80455130;
extern u8 lbl_804551A4;
extern u8 lbl_8045514C;
extern u8 lbl_80455120;
extern u8 lbl_804551B4;
extern u8 lbl_804551A8;
extern u8 lbl_80455184;
extern u8 lbl_80455144;
extern u8 lbl_80455140;
extern u8 lbl_8045518C;
extern u8 lbl_80455154;
extern u8 lbl_804551B0;
extern u8 lbl_80455160;

// cM3d_InDivPos1__FPC3VecPC3VecfP3Vec
void cM3d_InDivPos1(const Vec* pVecA, const Vec* pVecB, f32 pF, Vec* pOut) {
    Vec tmp;
    PSVECScale(pVecB, &tmp, pF);
    PSVECAdd(&tmp, pVecA, pOut);
}

// cM3d_InDivPos2__FPC3VecPC3VecfP3Vec
void cM3d_InDivPos2(const Vec* pVecA, const Vec* pVecB, f32 pF, Vec* pOut) {
    Vec tmp;
    PSVECSubtract(pVecB, pVecA, &tmp);
    cM3d_InDivPos1(pVecA, &tmp, pF, pOut);
}

// cM3d_Len2dSq__Fffff
f32 cM3d_Len2dSq(f32 pX1, f32 pY1, f32 pX2, f32 pY2) {
    f32 xDiff = pX1 - pX2;
    f32 yDiff = pY1 - pY2;
    return xDiff * xDiff + yDiff * yDiff;
}

inline bool cM3d_IsZero(f32 pF) {
    return fabsf(pF) < lbl_80451180;
}

// cM3d_Len2dSqPntAndSegLine__FffffffPfPfPf
bool cM3d_Len2dSqPntAndSegLine(f32 param_1, f32 param_2, f32 param_3, f32 param_4, f32 p5, f32 p6,
                               f32* param_7, f32* param_8, f32* param_9) {
    bool retVal = false;
    f32 param_5 = p5 - param_3;
    f32 param_6 = p6 - param_4;
    f32 len = param_5 * param_5 + param_6 * param_6;
    if (cM3d_IsZero(len)) {
        *param_9 = /* 0.0 */ lbl_80455118;
        return retVal;
    } else {
        len = (param_5 * (param_1 - param_3) + param_6 * (param_2 - param_4)) / len;
        if (len >= /* 0.0 */ lbl_80455118 && len <= /* 1.0 */ lbl_80455138) {
            retVal = true;
        }
        *param_7 = param_3 + param_5 * len;
        *param_8 = param_4 + param_6 * len;
        *param_9 = cM3d_Len2dSq(*param_7, *param_8, param_1, param_2);
        return retVal;
    }
}

// cM3d_Len3dSqPntAndSegLine__FPC8cM3dGLinPC3VecP3VecPf
bool cM3d_Len3dSqPntAndSegLine(const cM3dGLin* pLine, const Vec* pVec, Vec* pOutVec, f32* pOutF) {
    bool retVal = 0;
    Vec tmp;
    PSVECSubtract(&pLine->GetEndP(), &pLine->GetStartP(), &tmp);
    f32 seqLen = PSVECDotProduct(&tmp, &tmp);
    if (cM3d_IsZero(seqLen)) {
        *pOutF = /* 0.0 */ lbl_80455118;
        return retVal;
    } else {
        Vec tmp2;
        PSVECSubtract(pVec, &pLine->GetStartP(), &tmp2);
        f32 tmpF = PSVECDotProduct(&tmp2, &tmp);
        tmpF /= seqLen;
        if (tmpF < /* 0.0 */ lbl_80455118 || tmpF > /* 1.0 */ lbl_80455138) {
            retVal = false;
        } else {
            retVal = true;
        }
        PSVECScale(&tmp, &tmp, tmpF);
        PSVECAdd(&tmp, &pLine->GetStartP(), pOutVec);
        *pOutF = PSVECSquareDistance(pOutVec, pVec);
        return retVal;
    }
}

// cM3d_SignedLenPlaAndPos__FPC8cM3dGPlaPC3Vec
f32 cM3d_SignedLenPlaAndPos(const cM3dGPla* pPlane, const Vec* pPosition) {
    f32 mag = PSVECMag(&pPlane->GetNP());
    if (cM3d_IsZero(mag)) {
        return /* 0.0 */ lbl_80455118;
    } else {
        return (pPlane->mD + PSVECDotProduct(&pPlane->GetNP(), pPosition)) / mag;
    }
}

// cM3d_VectorProduct2d__Fffffff
f32 cM3d_VectorProduct2d(f32 pX1, f32 pY1, f32 pX2, f32 pY2, f32 pX3, f32 pY3) {
    return (pX2 - pX1) * (pY3 - pY1) - (pY2 - pY1) * (pX3 - pX1);
}

// cM3d_VectorProduct__FPC4cXyzPC4cXyzPC4cXyzP4cXyz
void cM3d_VectorProduct(const cXyz* pVecA, const cXyz* pVecB, const cXyz* pVecC, cXyz* pVecOut) {
    Vec tmp1;
    Vec tmp2;
    PSVECSubtract(pVecB, pVecA, &tmp1);
    PSVECSubtract(pVecC, pVecA, &tmp2);
    PSVECCrossProduct(&tmp1, &tmp2, pVecOut);
}

// cM3d_CalcPla__FPC3VecPC3VecPC3VecP3VecPf
void cM3d_CalcPla(const Vec* pVecA, const Vec* pVecB, const Vec* pVecC, Vec* pVecOut, f32* pD) {
    Vec tmp2;
    Vec tmp1;
    PSVECSubtract(pVecB, pVecA, &tmp1);
    PSVECSubtract(pVecC, pVecA, &tmp2);
    PSVECCrossProduct(&tmp1, &tmp2, pVecOut);
    f32 mag = PSVECMag(pVecOut);
    if (fabsf(mag) >= /* 0.02 */ lbl_8045513C) {
        PSVECScale(pVecOut, pVecOut, /* 1.0 */ lbl_80455138 / mag);
        *pD = -PSVECDotProduct(pVecOut, pVecA);
    } else {
        f32 zero = /* 0.0 */ lbl_80455118;
        pVecOut->y = zero;
        *pD = zero;
        pVecOut->z = zero;
        pVecOut->x = zero;
    }
}

inline bool cM3d_CrossNumSection(f32 lMinX, f32 lMaxX, f32 rMinX, f32 rMaxX) {
    if (lMinX > rMaxX) {
        return false;
    } else if (lMaxX < rMinX) {
        return false;
    } else if (rMinX > lMaxX) {
        return false;
    } else if (rMaxX < lMinX) {
        return false;
    } else {
        return true;
    }
}

// cM3d_Cross_AabAab__FPC8cM3dGAabPC8cM3dGAab
bool cM3d_Cross_AabAab(const cM3dGAab* pAabA, const cM3dGAab* pAabB) {
    if (cM3d_CrossNumSection(pAabA->getMinP().x, pAabA->getMaxP().x, pAabB->getMinP().x,
                             pAabB->getMaxP().x) &&
        cM3d_CrossNumSection(pAabA->getMinP().y, pAabA->getMaxP().y, pAabB->getMinP().y,
                             pAabB->getMaxP().y) &&
        cM3d_CrossNumSection(pAabA->getMinP().z, pAabA->getMaxP().z, pAabB->getMinP().z,
                             pAabB->getMaxP().z)) {
        return true;
    } else {
        return false;
    }
}

// cM3d_Cross_AabCyl__FPC8cM3dGAabPC8cM3dGCyl
bool cM3d_Cross_AabCyl(const cM3dGAab* pAab, const cM3dGCyl* pCyl) {
    if (pAab->getMinP().x > pCyl->GetCP().x + pCyl->GetR()) {
        return false;
    } else if (pAab->getMaxP().x < pCyl->GetCP().x - pCyl->GetR()) {
        return false;
    } else if (pAab->getMinP().z > pCyl->GetCP().z + pCyl->GetR()) {
        return false;
    } else if (pAab->getMaxP().z < pCyl->GetCP().z - pCyl->GetR()) {
        return false;
    } else if (pAab->getMinP().y > pCyl->GetCP().y + pCyl->GetH()) {
        return false;
    } else if (pAab->getMaxP().y < pCyl->GetCP().y) {
        return false;
    } else {
        return true;
    }
}

// cM3d_Cross_AabSph__FPC8cM3dGAabPC8cM3dGSph
#ifdef NON_MATCHING
bool cM3d_Cross_AabSph(const cM3dGAab* pAab, const cM3dGSph* pSph) {
    f32 radius = pSph->GetR();
    if (pAab->GetMinX() > pSph->GetC().GetX() + radius) {  // addition registers are flipped
        return false;
    } else if (pAab->GetMaxX() < pSph->GetC().GetX() - radius) {
        return false;
    } else if (pAab->GetMinZ() > pSph->GetC().GetZ() + radius) {
        return false;
    } else if (pAab->GetMaxZ() < pSph->GetC().GetZ() - radius) {
        return false;
    } else if (pAab->GetMinY() > pSph->GetC().GetY() + radius) {
        return false;
    } else if (pAab->GetMaxY() < pSph->GetC().GetY() - radius) {
        return false;
    } else {
        return true;
    }
}
#else
asm bool cM3d_Cross_AabSph(const cM3dGAab*, const cM3dGSph*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_80268BB4.s"
}
#endif

#ifdef NON_MATCHING
// cM3d_Check_LinLin__FPC8cM3dGLinPC8cM3dGLinPfPf
int cM3d_Check_LinLin(const cM3dGLin* pLinA, const cM3dGLin* pLinB, f32* pFloatA, f32* pFloatB) {
    Vec linAVec;
    Vec linBVec;
    pLinA->CalcVec(&linAVec);
    pLinB->CalcVec(&linBVec);
    f32 linALen = PSVECMag(&linAVec);
    f32 linBLen = PSVECMag(&linBVec);
    if (cM3d_IsZero(linALen) || cM3d_IsZero(linBLen)) {
        return 1;
    } else {
        f32 invLinALen = /* 1.0 */ lbl_80455138 / linALen;
        f32 invLinBLen = /* 1.0 */ lbl_80455138 / linBLen;
        PSVECScale(&linAVec, &linAVec, invLinALen);
        PSVECScale(&linBVec, &linBVec, invLinBLen);
        Vec tmp;
        PSVECSubtract(&pLinA->GetStartP(), &pLinB->GetStartP(), &tmp);
        f32 tmpF = -PSVECDotProduct(&linAVec, &linBVec);
        f32 tmpF2 = PSVECDotProduct(&tmp, &linAVec);
        PSVECSquareMag(&tmp);  // result not used
        f32 tmpF3 = fabsf(/* 1.0 */ lbl_80455138 - (tmpF * tmpF));
        if (!cM3d_IsZero(tmpF3)) {
            f32 tmpF4 = -PSVECDotProduct(&tmp, &linBVec);
            f32 tmpF7 = /* 1.0 */ lbl_80455138 / tmpF3;
            f32 outFloatAtmp = ((tmpF * tmpF4) - tmpF2) * tmpF7;
            *pFloatA = outFloatAtmp * invLinALen;
            f32 outFloatBtmp = ((tmpF * tmpF2) - tmpF4) * tmpF7;
            *pFloatB = outFloatBtmp * invLinBLen;
            return 3;
        } else {
            f32 tmpF5 = -tmpF2;
            f32 tmpF6 =
                /* 0.0 */ lbl_80455118;  // would match with literals instead of labels
            if (tmpF5 < /* 0.0 */ lbl_80455118 || (tmpF5 > linALen)) {
                tmpF6 = linBLen;
                tmpF5 = (tmpF6 * tmpF) - tmpF2;
            }
            f32 tmpF7 = PSVECDotProduct(&tmp, &linBVec);
            if (tmpF5 < /* 0.0 */ lbl_80455118 || tmpF5 > linALen) {
                tmpF5 = /* 0.0 */ lbl_80455118;
                tmpF6 = tmpF7;
            }
            if (tmpF6 < /* 0.0 */ lbl_80455118 || tmpF6 > linBLen) {
                tmpF5 = linALen;
                tmpF6 = tmpF7 + (-linALen * tmpF);
            }
            *pFloatA = tmpF5 * invLinALen;
            *pFloatB = tmpF6 * invLinBLen;
            return 2;
        }
    }
}
#else
// cM3d_Check_LinLin(const cM3dGLin*, const cM3dGLin*, f32*, f32*)
asm int cM3d_Check_LinLin(const cM3dGLin*, const cM3dGLin*, f32*, f32*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_80268C5C.s"
}
#endif

// cM3d_CrossInfLineVsInfPlane_proc__FffPC3VecPC3VecP3Vec
bool cM3d_CrossInfLineVsInfPlane_proc(f32 pFloatA, f32 pFloatB, const Vec* pVecA, const Vec* pVecB,
                                      Vec* pVecOut) {
    if (cM3d_IsZero(pFloatA - pFloatB)) {
        *pVecOut = *pVecB;
        return false;
    } else {
        cM3d_InDivPos2(pVecA, pVecB, pFloatA / (pFloatA - pFloatB), pVecOut);
        return true;
    }
}

// cM3d_Cross_LinPla__FPC8cM3dGLinPC8cM3dGPlaP3Vecbb
#ifdef NON_MATCHING
bool cM3d_Cross_LinPla(const cM3dGLin* pLine, const cM3dGPla* pPlane, Vec* pVecOut, bool pBoolA,
                       bool pBoolB) {
    f32 startVal = pPlane->getPlaneFunc(&pLine->GetStartP());
    f32 endVal = pPlane->getPlaneFunc(&pLine->GetEndP());
    if (startVal * endVal > /* 0.0 */ lbl_80455118) {
        // matches with the literal, but that screws up data
        // if (startVal * endVal > 0) {
        *pVecOut = pLine->GetEndP();
        return false;
    } else {
        if (startVal >= /* 0.0 */ lbl_80455118 && endVal <= /* 0.0 */ lbl_80455118) {
            // if (startVal >= 0 && endVal <= 0) {
            if (pBoolA) {
                return cM3d_CrossInfLineVsInfPlane_proc(startVal, endVal, &pLine->GetStartP(),
                                                        &pLine->GetEndP(), pVecOut);
            }
        } else {
            if (pBoolB) {
                return cM3d_CrossInfLineVsInfPlane_proc(startVal, endVal, &pLine->GetStartP(),
                                                        &pLine->GetEndP(), pVecOut);
            }
        }
        *pVecOut = pLine->GetEndP();
        return true;
    }
}
#else
asm bool cM3d_Cross_LinPla(const cM3dGLin*, const cM3dGPla*, Vec*, bool, bool) {
    nofralloc
#include "SComponent/c_m3d/asm/func_80268F34.s"
}
#endif

// cM3d_Cross_MinMaxBoxLine__FPC3VecPC3VecPC3VecPC3Vec
// cM3d_Cross_MinMaxBoxLine(const Vec*, const Vec*, const Vec*, const Vec*)
asm bool cM3d_Cross_MinMaxBoxLine(const Vec*, const Vec*, const Vec*, const Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_80269050.s"
}

// cM3d_InclusionCheckPosIn3PosBox3d__FPC3VecPC3VecPC3VecPC3Vecf
bool cM3d_InclusionCheckPosIn3PosBox3d(const Vec* pVecA, const Vec* pVecB, const Vec* pVecC,
                                       const Vec* pVecD, f32 pF) {
    f32 min, max;
    if (pVecA->GetX() < pVecB->GetX()) {
        min = pVecA->GetX();
        max = pVecB->GetX();
    } else {
        min = pVecB->GetX();
        max = pVecA->GetX();
    }
    if (min > pVecC->GetX()) {
        min = pVecC->GetX();
    } else if (max < pVecC->GetX()) {
        max = pVecC->GetX();
    }
    if (min - pF > pVecD->GetX() || max + pF < pVecD->GetX()) {
        return false;
    }

    if (pVecA->GetZ() < pVecB->GetZ()) {
        min = pVecA->GetZ();
        max = pVecB->GetZ();
    } else {
        min = pVecB->GetZ();
        max = pVecA->GetZ();
    }
    if (min > pVecC->GetZ()) {
        min = pVecC->GetZ();
    } else if (max < pVecC->GetZ()) {
        max = pVecC->GetZ();
    }
    if (min - pF > pVecD->GetZ() || max + pF < pVecD->GetZ()) {
        return false;
    }

    if (pVecA->GetY() < pVecB->GetY()) {
        min = pVecA->GetY();
        max = pVecB->GetY();
    } else {
        min = pVecB->GetY();
        max = pVecA->GetY();
    }
    if (min > pVecC->GetY()) {
        min = pVecC->GetY();
    } else if (max < pVecC->GetY()) {
        max = pVecC->GetY();
    }
    if (min - pF > pVecD->GetY() || max + pF < pVecD->GetY()) {
        return false;
    }
    return true;
}

// cM3d_InclusionCheckPosIn3PosBox2d__Ffffffffff
// cM3d_InclusionCheckPosIn3PosBox2d(f32, f32, f32, f32, f32, f32, f32, f32, f32)
asm bool cM3d_InclusionCheckPosIn3PosBox2d(f32, f32, f32, f32, f32, f32, f32, f32, f32) {
    nofralloc
#include "SComponent/c_m3d/asm/func_80269D64.s"
}

// cM3d_CrossX_Tri__FPC8cM3dGTriPC3Vecf
// cM3d_CrossX_Tri(const cM3dGTri*, const Vec*, f32)
asm bool cM3d_CrossX_Tri(const cM3dGTri*, const Vec*, f32) {
    nofralloc
#include "SComponent/c_m3d/asm/func_80269E18.s"
}

// cM3d_CrossX_Tri__FPC8cM3dGTriPC3Vec
// cM3d_CrossX_Tri(const cM3dGTri*, const Vec*)
asm bool cM3d_CrossX_Tri(const cM3dGTri*, const Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_80269FBC.s"
}

// cM3d_CrossX_LinTri_proc__FPC8cM3dGTriPC3Vec
// cM3d_CrossX_LinTri_proc(const cM3dGTri*, const Vec*)
asm bool cM3d_CrossX_LinTri_proc(const cM3dGTri*, const Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026A160.s"
}

// cM3d_CrossY_Tri__FPC8cM3dGTriPC3Vec
// cM3d_CrossY_Tri(const cM3dGTri*, const Vec*)
asm bool cM3d_CrossY_Tri(const cM3dGTri*, const Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026A2E4.s"
}

// cM3d_CrossY_LinTri_proc__FPC8cM3dGTriPC3Vec
// cM3d_CrossY_LinTri_proc(const cM3dGTri*, const Vec*)
asm bool cM3d_CrossY_LinTri_proc(const cM3dGTri*, const Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026A488.s"
}

// cM3d_CrossY_Tri__FRC3VecRC3VecRC3VecRC8cM3dGPlaPC3Vec
// cM3d_CrossY_Tri(const Vec&, const Vec&, const Vec&, const cM3dGPla&, const Vec*)
asm bool cM3d_CrossY_Tri(const Vec&, const Vec&, const Vec&, const cM3dGPla&, const Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026A60C.s"
}

// cM3d_CrossY_Tri_Front__FRC3VecRC3VecRC3VecPC3Vec
// cM3d_CrossY_Tri_Front(const Vec&, const Vec&, const Vec&, const Vec*)
asm bool cM3d_CrossY_Tri_Front(const Vec&, const Vec&, const Vec&, const Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026A7B8.s"
}

// cM3d_CrossY_Tri__FPC8cM3dGTriPC3VecPf
// cM3d_CrossY_Tri(const cM3dGTri*, const Vec*, f32*)
asm bool cM3d_CrossY_Tri(const cM3dGTri*, const Vec*, f32*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026A8C0.s"
}

// cM3d_CrossY_Tri__FPC8cM3dGTriPC3Vecf
// cM3d_CrossY_Tri(const cM3dGTri*, const Vec*, f32)
asm bool cM3d_CrossY_Tri(const cM3dGTri*, const Vec*, f32) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026A944.s"
}

// cM3d_CrossY_Tri__FPC8cM3dGTriPC3VecPC10cM3d_RangePf
// cM3d_CrossY_Tri(const cM3dGTri*, const Vec*, const cM3d_Range*, f32*)
asm bool cM3d_CrossY_Tri(const cM3dGTri*, const Vec*, const cM3d_Range*, f32*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026AAE8.s"
}

// cM3d_CrossZ_Tri__FPC8cM3dGTriPC3Vecf
// cM3d_CrossZ_Tri(const cM3dGTri*, const Vec*, f32)
asm bool cM3d_CrossZ_Tri(const cM3dGTri*, const Vec*, f32) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026ABD8.s"
}

// cM3d_CrossZ_Tri__FPC8cM3dGTriPC3Vec
// cM3d_CrossZ_Tri(const cM3dGTri*, const Vec*)
asm bool cM3d_CrossZ_Tri(const cM3dGTri*, const Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026AD7C.s"
}

// cM3d_CrossZ_LinTri_proc__FPC8cM3dGTriPC3Vec
// cM3d_CrossZ_LinTri_proc(const cM3dGTri*, const Vec*)
asm bool cM3d_CrossZ_LinTri_proc(const cM3dGTri*, const Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026AF20.s"
}

// cM3d_Cross_LinTri__FPC8cM3dGLinPC8cM3dGTriP3Vecbb
// cM3d_Cross_LinTri(const cM3dGLin*, const cM3dGTri*, Vec*, bool, bool)
asm bool cM3d_Cross_LinTri(const cM3dGLin*, const cM3dGTri*, Vec*, bool, bool) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026B0A4.s"
}

// cM3d_Cross_LinTri_Easy__FPC8cM3dGTriPC3Vec
// cM3d_Cross_LinTri_Easy(const cM3dGTri*, const Vec*)
asm bool cM3d_Cross_LinTri_Easy(const cM3dGTri*, const Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026B17C.s"
}

// cM3d_Cross_SphPnt__FPC8cM3dGSphPC3Vec
// cM3d_Cross_SphPnt(const cM3dGSph*, const Vec*)
asm bool cM3d_Cross_SphPnt(const cM3dGSph*, const Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026B238.s"
}

// cM3d_Cross_LinSph__FPC8cM3dGLinPC8cM3dGSphP3Vec
// cM3d_Cross_LinSph(const cM3dGLin*, const cM3dGSph*, Vec*)
asm bool cM3d_Cross_LinSph(const cM3dGLin*, const cM3dGSph*, Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026B280.s"
}

// cM3d_Cross_LinSph_CrossPos__FRC8cM3dGSphRC8cM3dGLinP3VecP3Vec
// cM3d_Cross_LinSph_CrossPos(const cM3dGSph&, const cM3dGLin&, Vec*, Vec*)
asm int cM3d_Cross_LinSph_CrossPos(const cM3dGSph&, const cM3dGLin&, Vec*, Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026B4E8.s"
}

// cM3d_Cross_CylSph__FPC8cM3dGCylPC8cM3dGSphPf
// cM3d_Cross_CylSph(const cM3dGCyl*, const cM3dGSph*, f32*)
asm bool cM3d_Cross_CylSph(const cM3dGCyl*, const cM3dGSph*, f32*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026B8A4.s"
}

// cM3d_Cross_CylSph__FPC8cM3dGCylPC8cM3dGSphP3VecPf
// cM3d_Cross_CylSph(const cM3dGCyl*, const cM3dGSph*, Vec*, f32*)
asm bool cM3d_Cross_CylSph(const cM3dGCyl*, const cM3dGSph*, Vec*, f32*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026BA48.s"
}

// cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphPf
// cM3d_Cross_SphSph(const cM3dGSph*, const cM3dGSph*, f32*)
asm bool cM3d_Cross_SphSph(const cM3dGSph*, const cM3dGSph*, f32*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026BC7C.s"
}

// cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphPfPf
// cM3d_Cross_SphSph(const cM3dGSph*, const cM3dGSph*, f32*, f32*)
asm bool cM3d_Cross_SphSph(const cM3dGSph*, const cM3dGSph*, f32*, f32*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026BCFC.s"
}

// cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphP3Vec
bool cM3d_Cross_SphSph(const cM3dGSph* pSphereA, const cM3dGSph* pSphereB, Vec* pVecOut) {
    f32 centerDist;
    f32 overlapLen;
    if (cM3d_Cross_SphSph(pSphereA, pSphereB, &centerDist, &overlapLen)) {
        if (!cM3d_IsZero(centerDist)) {
            // could be an inlined function
            f32 tmpF = pSphereB->GetR() / centerDist;
            Vec tmp;
            PSVECSubtract(&pSphereA->GetC(), &pSphereB->GetC(), &tmp);
            PSVECScale(&tmp, &tmp, tmpF);
            PSVECAdd(&tmp, &pSphereB->GetC(), pVecOut);
        } else {
            *pVecOut = pSphereA->GetC();
        }
        return true;
    } else {
        return false;
    }
}

// cM3d_CalcSphVsTriCrossPoint__FPC8cM3dGSphPC8cM3dGTriP3Vec
void cM3d_CalcSphVsTriCrossPoint(const cM3dGSph* pSphere, const cM3dGTri* pTriangle, Vec* pVecOut) {
    Vec tmp2;
    Vec tmp;
    PSVECAdd(&pTriangle->mA, &pTriangle->mB, &tmp);
    PSVECScale(&tmp, &tmp2, /* 0.5 */ lbl_804551C4);
    f32 sqDist = PSVECSquareDistance(&tmp2, &pSphere->GetC());
    if (cM3d_IsZero(sqDist)) {
        *pVecOut = pSphere->GetC();
    } else {
        cM3d_InDivPos2(&pSphere->GetC(), &tmp2, pSphere->GetR() / sqDist, pVecOut);
    }
}

// cM3d_Cross_SphTri__FPC8cM3dGSphPC8cM3dGTriP3Vec
// cM3d_Cross_SphTri(const cM3dGSph*, const cM3dGTri*, Vec*)
asm bool cM3d_Cross_SphTri(const cM3dGSph*, const cM3dGTri*, Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026BF04.s"
}

// cM3d_Cross_CylCyl__FPC8cM3dGCylPC8cM3dGCylPf
// cM3d_Cross_CylCyl(const cM3dGCyl*, const cM3dGCyl*, f32*)
asm bool cM3d_Cross_CylCyl(const cM3dGCyl*, const cM3dGCyl*, f32*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026C22C.s"
}

// cM3d_Cross_CylCyl__FPC8cM3dGCylPC8cM3dGCylP3Vec
// cM3d_Cross_CylCyl(const cM3dGCyl*, const cM3dGCyl*, Vec*)
asm bool cM3d_Cross_CylCyl(const cM3dGCyl*, const cM3dGCyl*, Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026C3B4.s"
}

// cM3d_Cross_CylTri__FPC8cM3dGCylPC8cM3dGTriP3Vec
// cM3d_Cross_CylTri(const cM3dGCyl*, const cM3dGTri*, Vec*)
asm bool cM3d_Cross_CylTri(const cM3dGCyl*, const cM3dGTri*, Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026C5D0.s"
}

// cM3d_Cross_CylLin__FPC8cM3dGCylPC8cM3dGLinP3VecP3Vec
// cM3d_Cross_CylLin(const cM3dGCyl*, const cM3dGLin*, Vec*, Vec*)
asm int cM3d_Cross_CylLin(const cM3dGCyl*, const cM3dGLin*, Vec*, Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026C944.s"
}

// cM3d_Cross_CylPntPnt__FPC8cM3dGCylPC3VecPC3VecP3VecP3Vec
int cM3d_Cross_CylPntPnt(const cM3dGCyl* pCylinder, const Vec* pVecStart, const Vec* pVecEnd,
                         Vec* pVecOutA, Vec* pVecOutB) {
    cM3dGLin lin;
    lin.SetStartEnd(*pVecStart, *pVecEnd);
    return cM3d_Cross_CylLin(pCylinder, &lin, pVecOutA, pVecOutB);
}

// cM3d_Cross_CylPnt__FPC8cM3dGCylPC3Vec
bool cM3d_Cross_CylPnt(const cM3dGCyl* pCylinder, const Vec* pPoint) {
    f32 dX = pCylinder->GetCP().getXDiff(pPoint);
    f32 dZ = pCylinder->GetCP().getZDiff(pPoint);
    f32 maxY = pCylinder->GetCP().y + pCylinder->GetH();
    if (dX * dX + dZ * dZ < pCylinder->GetR() * pCylinder->GetR() &&
        pCylinder->GetCP().y < pPoint->y && maxY > pPoint->y) {
        return true;
    } else {
        return false;
    }
}

// cM3d_Cross_CpsCps__FRC8cM3dGCpsRC8cM3dGCpsP3Vec
// cM3d_Cross_CpsCps(const cM3dGCps&, const cM3dGCps&, Vec*)
asm bool cM3d_Cross_CpsCps(const cM3dGCps&, const cM3dGCps&, Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026D114.s"
}

// cM3d_Cross_CpsCyl__FRC8cM3dGCpsRC8cM3dGCylP3Vec
// cM3d_Cross_CpsCyl(const cM3dGCps&, const cM3dGCyl&, Vec*)
asm bool cM3d_Cross_CpsCyl(const cM3dGCps&, const cM3dGCyl&, Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026D3D4.s"
}

// cM3d_Cross_CpsSph_CrossPos__FRC8cM3dGCpsRC8cM3dGSphRC3VecP3Vec
// cM3d_Cross_CpsSph_CrossPos(const cM3dGCps&, const cM3dGSph&, const Vec&, Vec*)
asm bool cM3d_Cross_CpsSph_CrossPos(const cM3dGCps&, const cM3dGSph&, const Vec&, Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026DAE0.s"
}

// cM3d_Cross_CpsSph__FRC8cM3dGCpsRC8cM3dGSphP3Vec
// cM3d_Cross_CpsSph(const cM3dGCps&, const cM3dGSph&, Vec*)
asm bool cM3d_Cross_CpsSph(const cM3dGCps&, const cM3dGSph&, Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026DC3C.s"
}

// cM3d_Cross_TriTri__FRC8cM3dGTriRC8cM3dGTriP3Vec
// cM3d_Cross_TriTri(const cM3dGTri&, const cM3dGTri&, Vec*)
asm bool cM3d_Cross_TriTri(const cM3dGTri&, const cM3dGTri&, Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026DE2C.s"
}

inline f32 cM3d_2LinCenter(cM3dGLin const pLinA, f32 pLinAF, cM3dGLin const& pLinB, f32 pLinBF,
                           Vec* pVecOut) {
    Vec tmp, tmp2;
    pLinA.CalcPos(&tmp, pLinAF);
    pLinB.CalcPos(&tmp2, pLinBF);
    PSVECAdd(&tmp, &tmp2, pVecOut);
    PSVECScale(pVecOut, pVecOut, /* 0.5 */ lbl_804551C4);
    return PSVECDistance(&tmp, &tmp2);
}

// cM3d_Cross_CpsTri__FRC8cM3dGCps8cM3dGTriP3Vec
// cM3d_Cross_CpsTri(const cM3dGCps&, cM3dGTri, Vec*)
asm bool cM3d_Cross_CpsTri(const cM3dGCps&, cM3dGTri, Vec*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026E12C.s"
}

// cM3d_CalcVecAngle__FRC3VecPsPs
void cM3d_CalcVecAngle(const Vec& pVec, s16* pOutA, s16* pOutB) {
    *pOutA = -cM_atan2s(-pVec.z * pVec.y, /* 1.0 */ lbl_80455138);
    *pOutB = cM_atan2s(-pVec.x * pVec.y, /* 1.0 */ lbl_80455138);
}

// cM3d_CalcVecZAngle__FRC3VecP5csXyz
// cM3d_CalcVecZAngle(const Vec&, csXyz*)
asm void cM3d_CalcVecZAngle(const Vec&, csXyz*) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026E570.s"
}

// cM3d_PlaneCrossLineProcWork__FfffffffPfPf
void cM3d_PlaneCrossLineProcWork(f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32* pF1,
                                 f32* pF2) {
    *pF1 = ((f2 * f7) - (f4 * f6)) / f5;
    *pF2 = ((f3 * f6) - (f1 * f7)) / f5;
}

// cM3d_2PlaneCrossLine__FRC8cM3dGPlaRC8cM3dGPlaP8cM3dGLin
int cM3d_2PlaneCrossLine(const cM3dGPla& pPlaneA, const cM3dGPla& pPlaneB, cM3dGLin* pLinOut) {
    Vec tmp;
    PSVECCrossProduct(&pPlaneA.GetNP(), &pPlaneB.GetNP(), &tmp);
    if (cM3d_IsZero(tmp.x) && cM3d_IsZero(tmp.y) && cM3d_IsZero(tmp.z)) {
        return 0;
    } else {
        f32 absTX = fabsf(tmp.x);
        f32 absTY = fabsf(tmp.y);
        f32 absTZ = fabsf(tmp.z);
        if (absTX >= absTY && absTX >= absTZ) {
            cM3d_PlaneCrossLineProcWork(pPlaneA.GetNP().y, pPlaneA.GetNP().z, pPlaneB.GetNP().y,
                                        pPlaneB.GetNP().z, tmp.x, pPlaneA.GetD(), pPlaneB.GetD(),
                                        &pLinOut->GetStartP().y, &pLinOut->GetStartP().z);
            pLinOut->GetStartP().x = /* 0.0 */ lbl_80455118;
        } else if (absTY >= absTX && absTY >= absTZ) {
            cM3d_PlaneCrossLineProcWork(pPlaneA.GetNP().z, pPlaneA.GetNP().x, pPlaneB.GetNP().z,
                                        pPlaneB.GetNP().x, tmp.y, pPlaneA.GetD(), pPlaneB.GetD(),
                                        &pLinOut->GetStartP().z, &pLinOut->GetStartP().x);
            pLinOut->GetStartP().y = /* 0.0 */ lbl_80455118;
        } else {
            cM3d_PlaneCrossLineProcWork(pPlaneA.GetNP().x, pPlaneA.GetNP().y, pPlaneB.GetNP().x,
                                        pPlaneB.GetNP().y, tmp.z, pPlaneA.GetD(), pPlaneB.GetD(),
                                        &pLinOut->GetStartP().x, &pLinOut->GetStartP().y);
            pLinOut->GetStartP().z = /* 0.0 */ lbl_80455118;
        }
        f32 scale = PSVECMag(&pLinOut->GetStartP());
        if (cM3d_IsZero(scale)) {
            scale = /* 1.0 */ lbl_80455138;
        }
        PSVECScale(&tmp, &tmp, scale);
        PSVECAdd(&pLinOut->GetStartP(), &tmp, &pLinOut->GetEndP());
        return 1;
    }
}

// cM3d_3PlaneCrossPos__FRC8cM3dGPlaRC8cM3dGPlaRC8cM3dGPlaP3Vec
bool cM3d_3PlaneCrossPos(const cM3dGPla& pPlaneA, const cM3dGPla& pPlaneB, const cM3dGPla& pPlaneC,
                         Vec* pVecOut) {
    cM3dGLin lin;
    if (!cM3d_2PlaneCrossLine(pPlaneA, pPlaneB, &lin)) {
        return false;
    } else {
        const Vec* end = &lin.GetEndP();
        f32 tmpf1 = pPlaneC.getPlaneFunc(&lin.GetStartP());
        f32 tmpf2 = pPlaneC.getPlaneFunc(end);
        if (!cM3d_CrossInfLineVsInfPlane_proc(tmpf1, tmpf2, &lin.GetStartP(), end, pVecOut)) {
            return false;
        } else {
            return true;
        }
    }
}

// cM3d_lineVsPosSuisenCross__FPC8cM3dGLinPC3VecP3Vec
f32 cM3d_lineVsPosSuisenCross(const cM3dGLin* pLine, const Vec* pPoint, Vec* pVecOut) {
    Vec tmp1;
    Vec tmp2;
    Vec tmp3;
    // PSVECSubtract(&pLine->GetEndP(), &pLine->GetStartP(), &tmp1);
    pLine->CalcVec(&tmp1);
    f32 diffLen = PSVECSquareMag(&tmp1);
    if (cM3d_IsZero(diffLen)) {
        *pVecOut = *pPoint;
        return /* 0.0 */ lbl_80455118;
    } else {
        PSVECSubtract(pPoint, &pLine->GetStartP(), &tmp2);
        // f32 dotProd = PSVECDotProduct(&tmp2, &tmp1);
        // f32 retVal = dotProd / diffLen;
        f32 retVal = PSVECDotProduct(&tmp2, &tmp1) / diffLen;
        PSVECScale(&tmp1, &tmp3, retVal);
        PSVECAdd(&tmp3, &pLine->GetStartP(), pVecOut);
        return retVal;
    }
}

// cM3d_lineVsPosSuisenCross__FRC3VecRC3VecRC3VecP3Vec
f32 cM3d_lineVsPosSuisenCross(const Vec& pLinePointA, const Vec& pLinePointB, const Vec& pPoint,
                              Vec* pVecOut) {
    Vec tmp1;
    Vec tmp2;
    Vec tmp3;
    PSVECSubtract(&pLinePointB, &pLinePointA, &tmp1);
    f32 diffLen = PSVECSquareMag(&tmp1);
    if (cM3d_IsZero(diffLen)) {
        *pVecOut = pPoint;
        return /* 0.0 */ lbl_80455118;
    } else {
        PSVECSubtract(&pPoint, &pLinePointA, &tmp2);
        f32 dotProd = PSVECDotProduct(&tmp2, &tmp1);
        f32 retVal = dotProd / diffLen;
        PSVECScale(&tmp1, &tmp3, retVal);
        PSVECAdd(&tmp3, &pLinePointA, pVecOut);
        return retVal;
    }
}

// cM3d_2PlaneLinePosNearPos__FRC8cM3dGPlaRC8cM3dGPlaPC3VecP3Vec
int cM3d_2PlaneLinePosNearPos(const cM3dGPla& pPlaneA, const cM3dGPla& pPlaneB, const Vec* pVec,
                              Vec* pVecOut) {
    cM3dGLin lin;
    if (!cM3d_2PlaneCrossLine(pPlaneA, pPlaneB, &lin)) {
        return FALSE;
    } else {
        cM3d_lineVsPosSuisenCross(&lin, pVec, pVecOut);
        return TRUE;
    }
}

// cM3d_CrawVec__FRC3VecRC3VecP3Vec
void cM3d_CrawVec(const Vec& pVecA, const Vec& pVecB, Vec* pVecOut) {
    Vec tmp;
    PSVECScale(&pVecA, &tmp, fabsf(pVecB.x * pVecA.x + pVecB.y * pVecA.y + pVecB.z * pVecA.z));
    PSVECAdd(&tmp, &pVecB, pVecOut);
}

extern "C" {

// __sinit_c_m3d_cpp
//
asm void __sinit_c_m3d_cpp(void) {
    nofralloc
#include "SComponent/c_m3d/asm/func_8026EC3C.s"
}
};
