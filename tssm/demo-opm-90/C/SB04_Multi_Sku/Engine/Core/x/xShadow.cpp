/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00459EE0 -> 0x00459F2C
*/
// Range: 0x459EE0 -> 0x459F2C
static void xShadow_PickEntForNPC(class xShadowMgr * mgr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x459EE0 -> 0x459F2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00459F30 -> 0x0045A0E0
*/
// Range: 0x459F30 -> 0x45A0E0
static void xShadow_PickByRayCast(class xShadowMgr * mgr /* r21 */) {
    /* anonymous block */ {
        // Range: 0x459F30 -> 0x45A0E0
        class xEnt * ent_best; // r22
        signed int idx_best; // r20
        class xCollis colrec; // r29+0xD0
        class xRay3 ray; // r29+0xA0
        signed int num; // r2
        signed int i; // r19
        class xEnt * ep; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045A0E0 -> 0x0045B074
*/
// Range: 0x45A0E0 -> 0x45B074
void xShadowManager_Render() {
    /* anonymous block */ {
        // Range: 0x45A0E0 -> 0x45B074
        signed int i; // r4
        signed int cacheUsed[6]; // r29+0x1F0
        signed int j; // r8
        float shadow_strength; // r29+0x24C
        unsigned char old_xClumpColl_FilterFlags; // r2
        class xEnt * ent_ref; // r2
        signed int bestIndex; // r7
        signed int foundPriority; // r6
        class xVec3 center; // r29+0x230
        float radius; // r29+0x248
        class xShadowMgr * mgr_best; // r17
        float dst_depth; // r29+0x250
        class xEnt * ep; // r2
        class xEnt * ent; // r20
        float dst_depth; // r28
        signed int shadowOutside; // r29+0x244
        class xVec3 center; // r29+0x220
        float radius; // r29+0x240
        class RpAtomic * old_model; // r23
        class xModelInstance * old_mnext; // r2
        class RpAtomic * shadModel; // r2
        class xEnt * ep; // r20
        class xShadowMgr * mgr; // r2
        class xEntShadow * npcshad; // r2
        signed int num; // r29+0x120
        signed int a; // r23
        class xEnt * ep; // r20
        float rad; // r29+0x250
        class xVec3 * lower; // r2
        class xVec3 * upper; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045B080 -> 0x0045B274
*/
// Range: 0x45B080 -> 0x45B274
static void xShadowModelRender(class xModelInstance * minst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x45B080 -> 0x45B274
        class xMat3x3 tmpmat; // r29+0x50
        float * mat; // r2
        float * scale; // r2
        signed int i; // r6
        class RpMaterialList * matList; // r16
        class RwTexture * oldtex[8]; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045B280 -> 0x0045B3A4
*/
// Range: 0x45B280 -> 0x45B3A4
static signed int CmpShadowMgr(void * a /* r2 */, void * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x45B280 -> 0x45B3A4
        class xEnt * entA; // r2
        class xEnt * entB; // r2
        signed int isPlayerA; // r2
        signed int isPlayerB; // r2
        float distA; // r29
        float distB; // r29
        class xVec3 * campos; // r2
        float dx__; // r29
        float dy__; // r29
        float dz__; // r29
        float dx__; // r29
        float dy__; // r29
        float dz__; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045B3B0 -> 0x0045B470
*/
// Range: 0x45B3B0 -> 0x45B470
void xShadowManager_Remove(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x45B3B0 -> 0x45B470
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045B470 -> 0x0045B514
*/
// Range: 0x45B470 -> 0x45B514
void xShadowManager_Add(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x45B470 -> 0x45B514
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045B520 -> 0x0045B55C
*/
// Range: 0x45B520 -> 0x45B55C
void xShadowManager_Init(signed int numEnts /* r16 */) {
    /* anonymous block */ {
        // Range: 0x45B520 -> 0x45B55C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045B560 -> 0x0045BCA4
*/
// Range: 0x45B560 -> 0x45BCA4
void xShadowVertical_DrawCache(class xShadowCache * cache /* r16 */, float shadowFactor /* r21 */, float fadeDist /* r20 */, signed int shadowMode /* r17 */, class RwMatrixTag * shadowMat /* r20 */, class RwRaster * shadowRast /* r2 */) {
    /* anonymous block */ {
        // Range: 0x45B560 -> 0x45BCA4
        class _ProjectionParam param; // r29+0x90
        class RwMatrixTag * shadowMatrix; // r2
        float radius; // r29+0x130
        class RwV3d scl; // r29+0x120
        class RwV3d tr; // r29+0x110
        class xVec3 A; // r29+0x100
        class xVec3 B; // r29+0xF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045BCB0 -> 0x0045C000
*/
// Range: 0x45BCB0 -> 0x45C000
void xShadowVertical_FillCache(class xShadowCache * cache /* r20 */, class xVec3 * pos /* r19 */, float r /* r21 */, float depth /* r20 */, float minNormY /* r29+0x160 */) {
    /* anonymous block */ {
        // Range: 0x45BCB0 -> 0x45C000
        signed int i; // r6
        signed int j; // r5
        class xEnv * env; // r2
        class RpIntersection isx; // r29+0x130
        class ShadowCacheContext context; // r29+0x158
        signed int i; // r18
        float sortRayDepth[5]; // r29+0x110
        float objMaxDepth; // r2
        class xQCData qcd; // r29+0xF0
        class ShadowCBParam cbparam; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045C000 -> 0x0045C2D8
*/
// Range: 0x45C000 -> 0x45C2D8
static signed int shadowCacheEntityCB(class xEnt * ent /* r19 */, void * cbdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x45C000 -> 0x45C2D8
        class ShadowCBParam * cbparam; // r2
        class xCollis coll; // r29+0x90
        class RpCollisionData * colldata; // r2
        class RwMatrixTag inverseLTM; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045C2E0 -> 0x0045CA1C
*/
// Range: 0x45C2E0 -> 0x45CA1C
static signed int shadowCacheLeafCB(signed int numTriangles /* r18 */, signed int triOffset /* r2 */, void * data /* r17 */) {
    /* anonymous block */ {
        // Range: 0x45C2E0 -> 0x45CA1C
        class ShadowCBParam * cbparam; // r2
        class xShadowCache * cache; // r16
        class RpGeometry * geometry; // r2
        class RwV3d * vertices; // r2
        class RpTriangle * triangles; // r2
        signed int triSlot; // r21
        unsigned short * triIndex; // r20
        signed int i; // r10
        class RpTriangle * tri; // r2
        signed int vertIndex0; // r2
        signed int vertIndex1; // r2
        signed int vertIndex2; // r2
        class RwV3d * v0; // r2
        class RwV3d * v1; // r2
        class RwV3d * v2; // r2
        class xVec3 worldV[3]; // r29+0xB0
        float posX; // r1
        float posZ; // r29+0x110
        float nx; // r29+0x110
        float nz; // r29+0x110
        float nmag2; // r29+0x110
        float pdot; // r29+0x110
        class xVec3 * vert0; // r2
        class xVec3 * vert1; // r2
        float dotA; // r29+0x110
        float dotB; // r29+0x110
        class xVec3 * vert0; // r2
        class xVec3 * vert1; // r2
        class xVec3 * vert2; // r2
        class xVec3 aa; // r29+0x100
        class xVec3 bb; // r29+0xF0
        class xVec3 trinorm; // r29+0xE0
        float depthtest; // r29+0x110
        float dydx; // r10
        float dydz; // r9
        float depth0; // r8
        float n0x; // r16
        float n0z; // r7
        float n0d; // r6
        float n1x; // r5
        float n1z; // r4
        float n1d; // r3
        float n2x; // r2
        float n2z; // r1
        float n2d; // r29+0x110
        float denom; // r29+0x110
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045CA20 -> 0x0045CE20
*/
// Range: 0x45CA20 -> 0x45CE20
static class RpCollisionTriangle * shadowCacheEnvCB(class RpCollisionTriangle * tri /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x45CA20 -> 0x45CE20
        class ShadowCacheContext * context; // r2
        class xShadowCache * cache; // r2
        class xShadowPoly * poly; // r2
        float dydx; // r10
        float dydz; // r9
        float depth0; // r8
        float n0x; // r16
        float n0z; // r7
        float n0d; // r6
        float n1x; // r5
        float n1z; // r4
        float n1d; // r3
        float n2x; // r2
        float n2z; // r1
        float n2d; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045CE20 -> 0x0045D138
*/
// Range: 0x45CE20 -> 0x45D138
static void xShadowSetVolume(class RwCamera * shadowCamera /* r2 */, class xVec3 * pos /* r2 */, float depth /* r29+0xA0 */) {
    /* anonymous block */ {
        // Range: 0x45CE20 -> 0x45D138
        signed int i; // r9
        class xVec3 volume[8]; // r29+0x20
        class xVec3 camAt; // r29+0x80
        float invNearFar; // r29+0xA0
        float lerp; // r29+0xA0
        signed int cullstate; // r29+0x9C
        signed int ztest; // r29+0x98
        signed int zwrite; // r29+0x94
        signed int srcblend; // r29+0x90
        signed int destblend; // r29+0x8C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045D140 -> 0x0045D81C
*/
// Range: 0x45D140 -> 0x45D81C
static void DrawAlphaBox(class xVec3 * volume /* r23 */, signed int frontface /* r29+0xFC */, unsigned char alpha /* r21 */) {
    /* anonymous block */ {
        // Range: 0x45D140 -> 0x45D81C
        unsigned int i; // r29+0xE0
        unsigned int numV; // r22
        class RxObjSpace3DVertex boxV[36]; // r29+0x120
        class RxObjSpace3DVertex * v3d; // r20
        class RwMatrixTag * mainMatrix; // r2
        class xVec3 normal; // r29+0x630
        class xVec3 * v0; // r2
        class xVec3 * v1; // r2
        class xVec3 * v2; // r2
        class xVec3 * v3; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045D820 -> 0x0045DC98
*/
// Range: 0x45D820 -> 0x45DC98
static void DrawTwoSidedAlphaBoxPS2(class xVec3 * volume /* r30 */) {
    /* anonymous block */ {
        // Range: 0x45D820 -> 0x45DC98
        class HIFastIMLockStruct imlock; // r29+0x110
        class RwMatrixTag * mainMatrix; // r2
        unsigned int i; // r29+0x100
        unsigned int outFront; // r29+0xF0
        unsigned int outBack; // r29+0xE0
        class xVec3 normal; // r29+0x130
        class xVec3 * v0; // r21
        class xVec3 * v1; // r2
        class xVec3 * v2; // r2
        class xVec3 * v3; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045DCA0 -> 0x0045E004
*/
// Range: 0x45DCA0 -> 0x45E004
static unsigned char ShadowInsideBoxAdjust(class xVec3 * volume /* r21 */) {
    /* anonymous block */ {
        // Range: 0x45DCA0 -> 0x45E004
        class xVec3 * v0; // r2
        class xVec3 * v1; // r2
        class xVec3 * v2; // r2
        class xVec3 * v3; // r2
        class xVec3 normal[6]; // r29+0x90
        unsigned int i; // r20
        class RwCamera * mainCamera; // r2
        class RwMatrixTag * mainMatrix; // r2
        float nearclip; // r23
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045E010 -> 0x0045E14C
*/
// Range: 0x45E010 -> 0x45E14C
static class RwCamera * ShadowCameraSetSpherePersp(class RwCamera * camera /* r20 */, class RwV3d * center /* r19 */, float radius /* r20 */) {
    /* anonymous block */ {
        // Range: 0x45E010 -> 0x45E14C
        class RwFrame * camFrame; // r2
        class RwMatrixTag * camMatrix; // r18
        class RwV3d * camPos; // r17
        float objDepth; // r22
        float nearZ; // r29+0x70
        float farZ; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045E150 -> 0x0045E85C
*/
// Range: 0x45E150 -> 0x45E85C
static void ShadowRenderCachePolys(class _ProjectionParam * param /* r22 */, class xShadowPoly * poly /* r20 */, signed int count /* r29+0xBC */) {
    /* anonymous block */ {
        // Range: 0x45E150 -> 0x45E85C
        signed int i; // r23
        class RxObjSpace3DVertex * imv; // r2
        class xVec4 vShad[3]; // r29+0xE0
        float cx; // r29+0x140
        float cy; // r29+0x140
        float cz; // r29+0x140
        class RwV3d _packed; // r29+0x130
        class RwV3d _packed; // r29+0x120
        class RwV3d _packed; // r29+0x110
        unsigned int sw; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045E860 -> 0x0045E9E4
*/
// Range: 0x45E860 -> 0x45E9E4
static class RwCamera * ShadowCameraUpdate(class RwCamera * shadowCamera /* r20 */, void * model /* r19 */, void (* renderCB)(void *) /* r18 */) {
    /* anonymous block */ {
        // Range: 0x45E860 -> 0x45E9E4
        class RwRGBA bgColor; // r29+0x6C
        class RwCamera * camera; // r17
        signed int fogstate; // r29+0x68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045E9F0 -> 0x0045EA78
*/
// Range: 0x45E9F0 -> 0x45EA78
static void ShadowCameraDestroy(class RwCamera * shadowCamera /* r17 */) {
    /* anonymous block */ {
        // Range: 0x45E9F0 -> 0x45EA78
        class RwRaster * raster; // r2
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045EA80 -> 0x0045EB60
*/
// Range: 0x45EA80 -> 0x45EB60
signed int Im2DRenderQuad(float x1 /* r29+0x110 */, float y1 /* r29+0x110 */, float x2 /* r29+0x110 */, float y2 /* r29+0x110 */, float z /* r29+0x110 */, float recipCamZ /* r29+0x110 */, float uvOffset /* r29+0x110 */) {
    /* anonymous block */ {
        // Range: 0x45EA80 -> 0x45EB60
        class RwSky2DVertex vx[4]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045EB60 -> 0x0045EB68
*/
// Range: 0x45EB60 -> 0x45EB68
void xShadow_ListAdd(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x45EB60 -> 0x45EB68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045EB70 -> 0x0045EE20
*/
// Range: 0x45EB70 -> 0x45EE20
void xShadowReceiveShadow(class xEnt * ent /* r19 */, float shadowFactor /* r20 */, signed int shadowMode /* r18 */, class RwMatrixTag * shadowMat /* r17 */, class RwRaster * shadowRast /* r16 */) {
    /* anonymous block */ {
        // Range: 0x45EB70 -> 0x45EE20
        class RwMatrixTag oldroot; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045EE20 -> 0x0045FD54
*/
// Range: 0x45EE20 -> 0x45FD54
static void xShadowReceiveShadowFastPS2(class xEnt * ent /* r29+0xEC */, float shadowFactor /* r20 */, signed int shadowMode /* r18 */, class RwMatrixTag * shadowMat /* r17 */, class RwRaster * shadowRast /* r2 */) {
    /* anonymous block */ {
        // Range: 0x45EE20 -> 0x45FD54
        class RwCamera * shadowCamera; // r2
        class RwMatrixTag * shadowMatrix; // r2
        class RwMatrixTag invMatrix; // r29+0x140
        class RwV4dTag at; // r29+0x130
        float radius; // r29+0x1B0
        class RwV3d scl; // r29+0x198
        class RwV3d tr; // r29+0x188
        float fadeDist; // r29+0x1B0
        unsigned int i; // r30
        unsigned int num_verts; // r2
        class xVec3 * xvert; // r22
        class RpTriangle * tri; // r20
        class RpGeometry * geom; // r2
        unsigned char val; // r2
        unsigned int vertex_color; // r2
        class xModelInstance * model; // r7
        unsigned int max_verts; // r6
        unsigned int model_num; // r2
        unsigned int ent_id; // r2
        class xVec3 * vert; // r2
        class RxObjSpace3DVertex * imv; // r2
        class xVec3 * v0; // r2
        class xVec3 * v1; // r2
        class xVec3 * v2; // r2
        float local_SHADOW_BIAS_AMT; // r29+0x1AC
        float local_SHADOW_MINNORMY; // r29+0x1A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045FD60 -> 0x0045FDC4
*/
// Range: 0x45FD60 -> 0x45FDC4
unsigned int xShadowReceiveShadowSetup(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x45FD60 -> 0x45FDC4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045FDD0 -> 0x0045FE50
*/
// Range: 0x45FDD0 -> 0x45FE50
void xShadowCameraUpdate(void * model /* r19 */, void (* renderCB)(void *) /* r18 */, class xVec3 * center /* r17 */, float radius /* r20 */, signed int shadowMode /* r16 */) {
    /* anonymous block */ {
        // Range: 0x45FDD0 -> 0x45FE50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045FE50 -> 0x0045FEEC
*/
// Range: 0x45FE50 -> 0x45FEEC
void xShadowSetLight(class xVec3 * target_pos /* r16 */, class xVec3 * in_vec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x45FE50 -> 0x45FEEC
        class xVec3 zvec; // r29+0x70
        class xMat4x3 matrix; // r29+0x30
        class RwFrame * camFrame; // r2
        class RwMatrixTag * camMatrix; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045FEF0 -> 0x0045FF14
*/
// Range: 0x45FEF0 -> 0x45FF14
void xShadowSetWorld(class RpWorld * world /* r2 */) {
    /* anonymous block */ {
        // Range: 0x45FEF0 -> 0x45FF14
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0045FF20 -> 0x00460048
*/
// Range: 0x45FF20 -> 0x460048
static signed int SetupShadow() {
    /* anonymous block */ {
        // Range: 0x45FF20 -> 0x460048
        signed int res; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadow.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00460050 -> 0x004600A4
*/
// Range: 0x460050 -> 0x4600A4
void xShadowInit() {
    /* anonymous block */ {
        // Range: 0x460050 -> 0x4600A4
        class RwFrame * frame; // r2
    }
}


