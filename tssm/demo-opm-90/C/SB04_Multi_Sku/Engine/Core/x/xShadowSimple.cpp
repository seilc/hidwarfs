/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00458140 -> 0x00458F28
*/
// Range: 0x458140 -> 0x458F28
void xShadowSimple_Add_Expert(class xShadowSimpleCache * cache /* r18 */, class xMat4x3 * mat_owner /* r17 */, unsigned char alpha /* r2 */, float radius /* r23 */, float height /* r22 */, float ecc /* r21 */) {
    /* anonymous block */ {
        // Range: 0x458140 -> 0x458F28
        unsigned int ownerMoved; // r16
        class xVec3 delta; // r29+0xF0
        float ds2_moved; // r29+0x100
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00458F30 -> 0x00458FC0
*/
// Range: 0x458F30 -> 0x458FC0
void xShadowSimple_CacheInit_Expert(class xShadowSimpleCache * cache /* r18 */, class RwRaster * rast /* r17 */, unsigned char alpha /* r16 */) {
    /* anonymous block */ {
        // Range: 0x458F30 -> 0x458FC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00458FC0 -> 0x00459300
*/
// Range: 0x458FC0 -> 0x459300
void xShadowSimple_Render() {
    /* anonymous block */ {
        // Range: 0x458FC0 -> 0x459300
        signed int qnum; // r18
        unsigned int i; // r20
        unsigned int j; // r19
        class RwRaster * raster; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00459300 -> 0x0045931C
*/
// Range: 0x459300 -> 0x45931C
void xShadowSimple_Add(class xShadowSimpleCache * cache /* r2 */, class xEnt * ent /* r2 */, float radius /* r29 */, float ecc /* r29 */) {
    /* anonymous block */ {
        // Range: 0x459300 -> 0x45931C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00459320 -> 0x00459500
*/
// Range: 0x459320 -> 0x459500
void xShadowSimple_CacheInit(class xShadowSimpleCache * cache /* r29+0xA8 */, class xEnt * ent /* r23 */, unsigned char alpha /* r16 */) {
    /* anonymous block */ {
        // Range: 0x459320 -> 0x459500
        signed int i; // r22
        signed int n; // r2
        unsigned int j; // r20
        class zSimpleShadowTableHeader * sst; // r2
        class RwRaster * raster; // r19
        unsigned int flags; // r21
        unsigned int size; // r29+0xAC
        class RwTexture * tex; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00459500 -> 0x00459514
*/
// Range: 0x459500 -> 0x459514
void xShadowSimple_Reset() {
    /* anonymous block */ {
        // Range: 0x459500 -> 0x459514
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00459520 -> 0x00459608
*/
// Range: 0x459520 -> 0x459608
void xShadowSimple_Init() {
    /* anonymous block */ {
        // Range: 0x459520 -> 0x459608
        class RwTexture * tex; // r2
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00459610 -> 0x00459800
*/
// Range: 0x459610 -> 0x459800
static void xShadowSimple_AddVerts(class xShadowSimpleCache * cache /* r2 */) {
    /* anonymous block */ {
        // Range: 0x459610 -> 0x459800
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00459800 -> 0x004599F8
*/
// Range: 0x459800 -> 0x4599F8
static void xShadowSimple_CalcCorners(class xShadowSimpleCache * cache /* r17 */, class xMat4x3 * mat /* r16 */, float radius /* r21 */, float ecc /* r20 */) {
    /* anonymous block */ {
        // Range: 0x459800 -> 0x4599F8
        class xVec3 tempnorm; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00459A00 -> 0x00459C74
*/
// Range: 0x459A00 -> 0x459C74
static void xShadowSimple_SceneCollide(class xShadowSimpleCache * cache /* r16 */, class xVec3 * pos /* r2 */, float depth /* r29+0xC0 */) {
    /* anonymous block */ {
        // Range: 0x459A00 -> 0x459C74
        class xEnv * env; // r2
        class RpIntersection isx; // r29+0x90
        signed int i; // r21
        class ShadowSimpleCBParam cbparam; // r29+0xB8
        class xQCData qcd; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00459C80 -> 0x00459D60
*/
// Range: 0x459C80 -> 0x459D60
static signed int shadowRayEntCB(class xEnt * ent /* r18 */, void * cbdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x459C80 -> 0x459D60
        class ShadowSimpleCBParam * cbparam; // r17
        class xModelInstance * m; // r2
        float oldHeight; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00459D60 -> 0x00459D74
*/
// Range: 0x459D60 -> 0x459D74
static class RpCollisionTriangle * shadowRayModelCB(class RpIntersection * isx /* r2 */, class RpCollisionTriangle * tri /* r2 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x459D60 -> 0x459D74
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xShadowSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00459D80 -> 0x00459EDC
*/
// Range: 0x459D80 -> 0x459EDC
static class RpCollisionTriangle * shadowRayCB(class RpCollisionTriangle * tri /* r18 */, float dist /* r20 */, void * data /* r17 */) {
    /* anonymous block */ {
        // Range: 0x459D80 -> 0x459EDC
        class xVec3 xformnorm; // r29+0x50
        class xVec3 * norm; // r2
        float * testdist; // r16
        class xShadowSimpleCache * cache; // r2
    }
}


