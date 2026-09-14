/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00399EC0 -> 0x0039A5AC
*/
// Range: 0x399EC0 -> 0x39A5AC
unsigned int xSceneNearestFloorPoly(class xScene * sc /* r17 */, class xNearFloorPoly * nfpoly /* r16 */, unsigned char collType /* r2 */, unsigned char chk /* r2 */) {
    /* anonymous block */ {
        // Range: 0x399EC0 -> 0x39A5AC
        class RpIntersection isx; // r29+0x60
        signed int i; // r19
        float test_dist; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039A5B0 -> 0x0039A6FC
*/
// Range: 0x39A5B0 -> 0x39A6FC
static signed int gridNearestFloorCB(class xEnt * ent /* r17 */, void * cbdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39A5B0 -> 0x39A6FC
        class xNearFloorPoly * nfpoly; // r16
        class xCollis tempC; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039A700 -> 0x0039A70C
*/
// Range: 0x39A700 -> 0x39A70C
static class RpCollisionTriangle * sectorNearestFloorCB(class RpIntersection * intersection /* r2 */, class RpCollisionTriangle * collTriangle /* r2 */, float distance /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39A700 -> 0x39A70C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039A710 -> 0x0039A8F8
*/
// Range: 0x39A710 -> 0x39A8F8
static class RpCollisionTriangle * boxNearestFloorCB(class RpIntersection * intersection /* r18 */, class RpCollisionTriangle * collTriangle /* r17 */, float distance /* r20 */, void * data /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39A710 -> 0x39A8F8
        class xNearFloorPoly * nfpoly; // r2
        class xVec3 xformVert[3]; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039A900 -> 0x0039AFB8
*/
// Range: 0x39A900 -> 0x39AFB8
static class RpCollisionTriangle * nearestFloorCB(class RpCollisionTriangle * collTriangle /* r20 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39A900 -> 0x39AFB8
        class xNearFloorPoly * nfpoly; // r19
        float currnear; // r20
        class xVec3 currpt; // r29+0xF0
        signed int currvert; // r18
        signed int curredge; // r21
        class xVec3 xformVert[4]; // r29+0x90
        class xVec3 xformNorm; // r29+0xE0
        unsigned int potentialOID; // r22
        signed int i; // r8
        float pdx[3]; // r29+0xD0
        float pdz[3]; // r29+0xC0
        float numer; // r15
        float denom; // r14
        float t; // r29+0x100
        float testdist2; // r29+0x100
        float neardx; // r29+0x100
        float neardz; // r29+0x100
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039AFC0 -> 0x0039B394
*/
// Range: 0x39AFC0 -> 0x39B394
static unsigned int Mgc_TriBoxTest(class xVec3 * apkTri /* r2 */, class xBox * rkBox /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39AFC0 -> 0x39B394
        float fMin0; // r29+0x50
        float fMax0; // r13
        float fMin1; // r29+0x50
        float fMax1; // r29+0x50
        class xVec3 akE[3]; // r29+0x10
        class xVec3 baxis; // r29+0x40
        unsigned int andflag; // r7
        unsigned int curflag; // r2
        signed int i; // r6
        signed int i0; // r12
        signed int i1; // r11
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039B3A0 -> 0x0039B6C4
*/
// Range: 0x39B3A0 -> 0x39B6C4
void xRayHitsSceneFlags(class xScene * sc /* r19 */, class xRay3 * r /* r18 */, class xCollis * coll /* r17 */, unsigned char collType /* r2 */, unsigned char chk /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39B3A0 -> 0x39B6C4
        class cb_ray_hits_ent cb; // r29+0x100
        class xBound bound; // r29+0xB0
        class xCollis temp_coll; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039B6D0 -> 0x0039B848
*/
// Range: 0x39B6D0 -> 0x39B848
void xRayHitsScene(class xScene * sc /* r18 */, class xRay3 * r /* r17 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39B6D0 -> 0x39B848
        class xQCData q; // r29+0xA0
        class xCollis c; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039B850 -> 0x0039B994
*/
// Range: 0x39B850 -> 0x39B994
void xRayHitsTikiLandableScene(class xScene * sc /* r18 */, class xRay3 * r /* r17 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39B850 -> 0x39B994
        class xQCData q; // r29+0xA0
        class xCollis c; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039B9A0 -> 0x0039BA54
*/
// Range: 0x39B9A0 -> 0x39BA54
void xRayHitsEnt(class xRay3 * r /* r2 */, class xQCData * qcr /* r2 */, class xEnt * ent /* r17 */, void * colldata /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39B9A0 -> 0x39BA54
        class xCollis * coll; // r2
        class xCollis c; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039BA60 -> 0x0039BB70
*/
// Range: 0x39BA60 -> 0x39BB70
void xRayHitsTikiLandableEnt(class xRay3 * r /* r18 */, class xQCData * qcr /* r2 */, class xEnt * ent /* r17 */, void * colldata /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39BA60 -> 0x39BB70
        class xCollis * coll; // r2
        class xCollis c; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039BB70 -> 0x0039C82C
*/
// Range: 0x39BB70 -> 0x39C82C
void xRayHitsGrid(class xGrid * grid /* r29+0x14C */, class xScene * sc /* r18 */, class xRay3 * r /* r17 */, void (* rentcb)(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *) /* r22 */, class xQCData * qcr /* r16 */, void * data /* r23 */) {
    /* anonymous block */ {
        // Range: 0x39BB70 -> 0x39C82C
        class xLine3 ln; // r29+0x150
        class xGridIterator it; // r29+0x180
        class xVec3 delta; // r29+0x170
        float len; // r29+0x1C0
        signed int sclgx; // r29+0x1BC
        signed int sclgz; // r29+0x1B8
        signed int eclgx; // r29+0x1B4
        signed int eclgz; // r29+0x1B0
        float sclcx; // r29+0x1C0
        float sclcz; // r27
        float eclcx; // r29+0x1C0
        float eclcz; // r30
        float halfclx; // r23
        float halfclz; // r22
        float quatrclx; // r21
        float quatrclz; // r24
        signed int sz; // r29+0x130
        signed int ez; // r29+0x120
        signed int x; // r21
        signed int z; // r29+0x110
        float dxdz; // r20
        float cz; // r29+0x1C0
        float lz; // r29+0x1C0
        float rz; // r26
        float lx; // r25
        float rx; // r24
        signed int aclgx; // r29+0x1AC
        signed int aclgz; // r29+0x1A8
        signed int bclgx; // r29+0x1A4
        signed int bclgz; // r29+0x1A0
        float aclcx; // r29+0x1C0
        float bclcx; // r2
        signed int ax; // r2
        signed int bx; // r20
        class xGridBound * cell; // r2
        class xBound * cellbound; // r2
        class xGridBound * cell; // r2
        class xBound * cellbound; // r2
        float cz; // r29+0x1C0
        float lz; // r29+0x1C0
        float rz; // r29
        float lx; // r28
        float rx; // r27
        signed int aclgx; // r29+0x19C
        signed int aclgz; // r29+0x198
        signed int bclgx; // r29+0x194
        signed int bclgz; // r29+0x190
        float aclcx; // r29+0x1C0
        float bclcx; // r2
        signed int ax; // r21
        signed int bx; // r20
        class xGridBound * cell; // r2
        class xBound * cellbound; // r2
        class xGridBound * cell; // r2
        class xBound * cellbound; // r2
        class xGridBound * cell; // r5
        class xBound * cellbound; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039C830 -> 0x0039C8D4
*/
// Range: 0x39C830 -> 0x39C8D4
void xSceneForAllNPCs(class xScene * sc /* r20 */, class xEnt * (* func)(class xEnt *, class xScene *, void *) /* r19 */, void * data /* r18 */) {
    /* anonymous block */ {
        // Range: 0x39C830 -> 0x39C8D4
        unsigned short i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039C8E0 -> 0x0039C984
*/
// Range: 0x39C8E0 -> 0x39C984
void xSceneForAllDynamics(class xScene * sc /* r20 */, class xEnt * (* func)(class xEnt *, class xScene *, void *) /* r19 */, void * data /* r18 */) {
    /* anonymous block */ {
        // Range: 0x39C8E0 -> 0x39C984
        unsigned short i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039C990 -> 0x0039CA34
*/
// Range: 0x39C990 -> 0x39CA34
void xSceneForAllStatics(class xScene * sc /* r20 */, class xEnt * (* func)(class xEnt *, class xScene *, void *) /* r19 */, void * data /* r18 */) {
    /* anonymous block */ {
        // Range: 0x39C990 -> 0x39CA34
        unsigned short i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CA40 -> 0x0039CAE4
*/
// Range: 0x39CA40 -> 0x39CAE4
void xSceneForAllEnts(class xScene * sc /* r20 */, class xEnt * (* func)(class xEnt *, class xScene *, void *) /* r19 */, void * data /* r18 */) {
    /* anonymous block */ {
        // Range: 0x39CA40 -> 0x39CAE4
        unsigned short i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CAF0 -> 0x0039CB24
*/
// Range: 0x39CAF0 -> 0x39CB24
class xBase * xSceneResolvID(class xScene * sc /* r2 */, unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39CAF0 -> 0x39CB24
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CB30 -> 0x0039CC00
*/
// Range: 0x39CB30 -> 0x39CC00
void xSceneAddEnt(class xScene * sc /* r2 */, class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39CB30 -> 0x39CC00
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CC00 -> 0x0039CC08
*/
// Range: 0x39CC00 -> 0x39CC08
void xSceneSetup(class xScene * sc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39CC00 -> 0x39CC08
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CC10 -> 0x0039CC18
*/
// Range: 0x39CC10 -> 0x39CC18
void xSceneLoad() {
    /* anonymous block */ {
        // Range: 0x39CC10 -> 0x39CC18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CC20 -> 0x0039CC28
*/
// Range: 0x39CC20 -> 0x39CC28
void xSceneSave() {
    /* anonymous block */ {
        // Range: 0x39CC20 -> 0x39CC28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CC30 -> 0x0039CC38
*/
// Range: 0x39CC30 -> 0x39CC38
void xSceneExit() {
    /* anonymous block */ {
        // Range: 0x39CC30 -> 0x39CC38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CC40 -> 0x0039CD9C
*/
// Range: 0x39CC40 -> 0x39CD9C
void xSceneInit(class xScene * sc /* r20 */, unsigned short num_trigs /* r19 */, unsigned short num_stats /* r18 */, unsigned short num_dyns /* r17 */, unsigned short num_npcs /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39CC40 -> 0x39CD9C
    }
}


