/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003149C0 -> 0x003149D0
*/
// Range: 0x3149C0 -> 0x3149D0
unsigned char zEntSimpleObj_UsePartialCameraCollision(class zEntSimpleObj * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3149C0 -> 0x3149D0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003149D0 -> 0x0031557C
*/
// Range: 0x3149D0 -> 0x31557C
void zEntSimpleObjEventCB(class xBase * from /* r4 */, class xBase * to /* r21 */, unsigned int toEvent /* r17 */, float * toParam /* r20 */, class xBase * toParamWidget /* r16 */, unsigned int toParamWidgetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3149D0 -> 0x31557C
        class zEntSimpleObj * s; // r2
        class zShrapnelAsset * shrap; // r2
        class FloatAndVoid dist; // r29+0xBC
        unsigned int numFireworks; // r2
        unsigned int i; // r19
        class xVec3 position; // r29+0xA8
        class xEnt * ent; // r2
        unsigned int i; // r20
        class xVec3 position; // r29+0x98
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00315580 -> 0x00315A14
*/
// Range: 0x315580 -> 0x315A14
void zEntSimpleObj_Reset(class zEntSimpleObj * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x315580 -> 0x315A14
        class RpAtomic * imodel; // r19
        class xLightKit * pLightKit; // r18
        class xSurface * surface; // r17
        signed int i; // r20
        class xLinkAsset * la; // r19
        class xEnt * dent; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00315A20 -> 0x00315A28
*/
// Range: 0x315A20 -> 0x315A28
void zEntSimpleObj_Load(class zEntSimpleObj * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x315A20 -> 0x315A28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00315A30 -> 0x00315A38
*/
// Range: 0x315A30 -> 0x315A38
void zEntSimpleObj_Save(class zEntSimpleObj * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x315A30 -> 0x315A38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00315A40 -> 0x00315B94
*/
// Range: 0x315A40 -> 0x315B94
void zEntSimpleObj_Setup(class zEntSimpleObj * ent /* r17 */) {
    /* anonymous block */ {
        // Range: 0x315A40 -> 0x315B94
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00315BA0 -> 0x00315D40
*/
// Range: 0x315BA0 -> 0x315D40
void zEntSimpleObj_Update(class zEntSimpleObj * ent /* r18 */, class xScene * sc /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x315BA0 -> 0x315D40
        float duration; // r29+0x50
        class xQuat * q0; // r2
        class xVec3 * t0; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00315D40 -> 0x00316024
*/
// Range: 0x315D40 -> 0x316024
static void zEntSimple_Orientation(class xMat4x3 & mat /* r2 */, class RwMatrixTag * modelmat /* r21 */, unsigned char use_world_up /* r2 */) {
    /* anonymous block */ {
        // Range: 0x315D40 -> 0x316024
        class xVec3 _up_; // r29+0xB0
        class xVec3 _at_; // r29+0xA0
        class xVec3 _right_; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00316030 -> 0x00316038
*/
// Range: 0x316030 -> 0x316038
static void zEntSimpleObj_Move() {
    /* anonymous block */ {
        // Range: 0x316030 -> 0x316038
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00316040 -> 0x003163B4
*/
// Range: 0x316040 -> 0x3163B4
void zEntSimpleObj_Init(class zEntSimpleObj * ent /* r20 */, class xEntAsset * asset /* r19 */, unsigned char physparams /* r16 */, unsigned char candestroy /* r18 */) {
    /* anonymous block */ {
        // Range: 0x316040 -> 0x3163B4
        class xSimpleObjAsset * sasset; // r2
        unsigned int tmpsize; // r29+0x6C
        class RpAtomic * modelData; // r17
        void * animData; // r16
        unsigned int animBoneCount; // r2
        unsigned int size; // r29+0x68
        unsigned int newid; // r16
        class xDestructibleAsset * destruct; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003163C0 -> 0x003163CC
*/
// Range: 0x3163C0 -> 0x3163CC
void zEntSimpleObj_Init(void * ent /* r2 */, void * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3163C0 -> 0x3163CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003163D0 -> 0x003163DC
*/
// Range: 0x3163D0 -> 0x3163DC
void zEntTrackPhysics_Init(void * ent /* r2 */, void * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3163D0 -> 0x3163DC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003163E0 -> 0x00316420
*/
// Range: 0x3163E0 -> 0x316420
static void zEntSimpleObj_Render(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3163E0 -> 0x316420
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00316420 -> 0x00316490
*/
// Range: 0x316420 -> 0x316490
void zEntSimpleObj_MgrCustomRender() {
    /* anonymous block */ {
        // Range: 0x316420 -> 0x316490
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00316490 -> 0x00316534
*/
// Range: 0x316490 -> 0x316534
void zEntSimpleObj_MgrCustomUpdate(class zScene * s /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x316490 -> 0x316534
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00316540 -> 0x00316D08
*/
// Range: 0x316540 -> 0x316D08
void zEntSimpleObj_MgrUpdateRender() {
    /* anonymous block */ {
        // Range: 0x316540 -> 0x316D08
        unsigned int i; // r23
        unsigned int currPipeFlags; // r29+0xDC
        unsigned int pipeMask; // r29+0xC0
        enum RwFogType oldfogtype; // r2
        class CloneContainer ccont[2]; // r29+0xE0
        class RpAtomic * cloneAtomic; // r20
        class xLightKit * cloneLightKit; // r22
        float camX; // r22
        float camY; // r21
        float camZ; // r20
        class zSimpleMgr * smgr; // r19
        unsigned int smgrFlags; // r2
        float camdist2; // r23
        enum RwFrustumTestResult cullresult; // r2
        class zEntSimpleObj * ent; // r2
        unsigned int testPipeFlags; // r2
        unsigned int xorFlags; // r2
        signed int picklod; // r2
        class xModelInstance * minst; // r2
        class RpAtomic * thisAtomic; // r2
        class CloneContainer * thisCont; // r18
        class xMat4x3 * cammat; // r2
        class RpAtomic * modelData; // r2
        class xVec3 pos; // r29+0x1310
        class xVec3 blob_posrnd; // r29+0x1300
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00316D10 -> 0x00317818
*/
// Range: 0x316D10 -> 0x317818
void zEntSimpleObj_MgrInit(class zEntSimpleObj * * entList /* r20 */, unsigned int entCount /* r29+0x10C */) {
    /* anonymous block */ {
        // Range: 0x316D10 -> 0x317818
        unsigned int i; // r19
        unsigned int reactiveExtras; // r2
        unsigned int modelsRequired; // r2
        class zEntSimpleObj * * tempEntList; // r21
        unsigned int tempEntCount; // r29+0xF0
        unsigned int custEntCount; // r29+0xE0
        float dt; // r21
        float duration; // r29+0x120
        signed int frameCount; // r2
        signed int boneCount; // r2
        class xQuat * q0; // r22
        class xVec3 * t0; // r30
        float t; // r20
        class RwMatrixTag * fastMatList; // r18
        signed int i; // r17
        class zSimpleMgr * smgr; // r19
        class RpAtomic * model; // r2
        class RwSphere oldbound; // r29+0x110
        class zLODTable * lod; // r2
        float distscale; // r2
        unsigned char uvAnimated; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00317820 -> 0x00317880
*/
// Range: 0x317820 -> 0x317880
static void VisUpdateSimpleMgr(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x317820 -> 0x317880
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntSimpleObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00317880 -> 0x003178DC
*/
// Range: 0x317880 -> 0x3178DC
static signed int CmpSimpleMgr(void * a /* r2 */, void * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x317880 -> 0x3178DC
        class zSimpleMgr * simpA; // r2
        class zSimpleMgr * simpB; // r2
    }
}


