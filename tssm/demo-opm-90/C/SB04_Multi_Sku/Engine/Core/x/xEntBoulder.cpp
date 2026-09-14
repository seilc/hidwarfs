/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F1220 -> 0x003F1C6C
*/
// Range: 0x3F1220 -> 0x3F1C6C
void xBoulderGenerator_GenBoulder(class xBoulderGenerator * bg /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3F1220 -> 0x3F1C6C
        signed int i; // r2
        class xEntBoulder * b; // r18
        class xEnt * genEnt; // r2
        class xEntBoulder * bb; // r2
        class xVec3 worldOffset; // r29+0x70
        float p1c; // r20
        float p2c; // r6
        float nf; // r29+0x80
        class xVec3 perpRand; // r29+0x60
        float randAng; // r20
        float sclMag; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F1C70 -> 0x003F236C
*/
// Range: 0x3F1C70 -> 0x3F236C
void xBoulderGenerator_EventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r17 */, class xBase * toParamWidget /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F1C70 -> 0x3F236C
        class xBoulderGenerator * bg; // r16
        class xVec3 pnt; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F2370 -> 0x003F2744
*/
// Range: 0x3F2370 -> 0x3F2744
void xBoulderGenerator_Launch(class xBoulderGenerator * bg /* r19 */, class xVec3 * pnt /* r18 */, float t /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3F2370 -> 0x3F2744
        signed int i; // r2
        class xEntBoulder * b; // r17
        class xEnt * genEnt; // r2
        class xVec3 worldOffset; // r29+0x60
        float invTime; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F2750 -> 0x003F2928
*/
// Range: 0x3F2750 -> 0x3F2928
static signed int GetBoulderForGenerating(class xBoulderGenerator * bg /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F2750 -> 0x3F2928
        signed int i; // r2
        signed int j; // r7
        signed int oldestCulled; // r6
        signed int minAge; // r2
        signed int numList; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F2930 -> 0x003F2C8C
*/
// Range: 0x3F2930 -> 0x3F2C8C
void xBoulderGenerator_Init(class xBoulderGenerator * bg /* r16 */, class xBoulderGeneratorAsset * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3F2930 -> 0x3F2C8C
        unsigned int size; // r29+0x6C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F2C90 -> 0x003F2C98
*/
// Range: 0x3F2C90 -> 0x3F2C98
void xBoulderGenerator_Init(class xBase & data /* r2 */, class xDynAsset & asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F2C90 -> 0x3F2C98
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F2CA0 -> 0x003F2E0C
*/
// Range: 0x3F2CA0 -> 0x3F2E0C
static void RecurseChild(class xBase * child /* r2 */, class xEntBoulder * * boulList /* r21 */, signed int & currBoul /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3F2CA0 -> 0x3F2E0C
        unsigned int i; // r19
        unsigned int cnt; // r2
        class xGroup * grp; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F2E10 -> 0x003F3368
*/
// Range: 0x3F2E10 -> 0x3F3368
void xEntBoulderEventCB(class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r17 */, class xBase * toParamWidget /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F2E10 -> 0x3F3368
        class xEntBoulder * s; // r16
        class FloatAndVoid dist; // r29+0x3C
        class zShrapnelAsset * shrap; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F3370 -> 0x003F34B0
*/
// Range: 0x3F3370 -> 0x3F34B0
void xEntBoulder_Reset(class xEntBoulder * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F3370 -> 0x3F34B0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F34B0 -> 0x003F3514
*/
// Range: 0x3F34B0 -> 0x3F3514
void xEntBoulder_Setup(class xEntBoulder * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F34B0 -> 0x3F3514
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F3520 -> 0x003F3AA0
*/
// Range: 0x3F3520 -> 0x3F3AA0
void xEntBoulder_BubbleBowl(float multiplier /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3F3520 -> 0x3F3AA0
        class xEntBoulder * ent; // r17
        class xRay3 ray; // r29+0x100
        class xCollis rayCollis; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F3AA0 -> 0x003F3C40
*/
// Range: 0x3F3AA0 -> 0x3F3C40
void xEntBoulder_Kill(class xEntBoulder * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F3AA0 -> 0x3F3C40
        class sphericalEmitter * bbowlExplodeRumble; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F3C40 -> 0x003F4068
*/
// Range: 0x3F3C40 -> 0x3F4068
signed int xEntBoulder_KilledBySurface(class xEntBoulder * ent /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3F3C40 -> 0x3F4068
        class xCollis * coll; // r17
        class xCollis * cend; // r2
        float depthUNUSED; // r29+0x4C
        class xSurface * surf; // r2
        class zSurfaceProps * prop; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F4070 -> 0x003F5DE4
*/
// Range: 0x3F4070 -> 0x3F5DE4
void xEntBoulder_Update(class xEntBoulder * ent /* r20 */, class xScene * sc /* r29+0xCC */, float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x3F4070 -> 0x3F5DE4
        signed int i; // r21
        class zEnt * plent; // r2
        float distsqr; // r29+0x3B0
        float dx__; // r29+0x3B0
        float dy__; // r29+0x3B0
        float dz__; // r29+0x3B0
        class xVec3 rotatedLC; // r29+0x3A0
        class xVec3 a; // r29+0x390
        class xVec3 b; // r29+0x380
        class xVec3 tmp; // r29+0x370
        float fn; // r21
        unsigned int n; // r2
        class xVec3 oldPos; // r29+0x360
        class xVec3 velNorm; // r29+0x350
        class xVec3 sweptDisp; // r29+0x340
        unsigned char definitelyBounce; // r29+0xB0
        float sweptDistSqr; // r29+0x3B0
        float penAllowed; // r21
        class xSweptSphere sws; // r29+0x150
        float pen; // r29+0x3B0
        float scaleBack; // r29+0x3B0
        signed int numDepens; // r19
        class xVec3 depen; // r29+0x330
        class xEnt * xb; // r18
        class xEntBoulder * boul; // r2
        class xVec3 force; // r29+0x320
        class xVec3 toAdd; // r29+0x310
        float forceMag; // r29+0x3B0
        class xEnt * xb; // r21
        float hitParams[4]; // r29+0x140
        class zNMECommon * npc; // r21
        class xVec3 newVel; // r29+0x300
        float newMag; // r29+0x3B0
        float oldMag; // r22
        class xVec3 depenNorm; // r29+0x2F0
        float depenComp; // r21
        float afterBounce; // r29+0x3B0
        class xVec3 fricComp; // r29+0x2E0
        class xMat4x3 baseMatrix; // r29+0x100
        class xVec3 vForcedRotationAxis; // r29+0x2D0
        float fMagnitudeAgainstAxis; // r29+0x3B0
        class xVec3 newRotVec; // r29+0x2C0
        float newAngVel; // r29+0x3B0
        class xMat3x3 rotM; // r29+0xD0
        float vol; // r29+0x3AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F5DF0 -> 0x003F5EA4
*/
// Range: 0x3F5DF0 -> 0x3F5EA4
void xEntBoulder_RealBUpdate(class xEnt * ent /* r2 */, class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F5DF0 -> 0x3F5EA4
        class xEntBoulder * boul; // r16
        class xVec3 rotatedLC; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F5EB0 -> 0x003F5EB8
*/
// Range: 0x3F5EB0 -> 0x3F5EB8
void xEntBoulder_BUpdate() {
    /* anonymous block */ {
        // Range: 0x3F5EB0 -> 0x3F5EB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F5EC0 -> 0x003F5F10
*/
// Range: 0x3F5EC0 -> 0x3F5F10
void xEntBoulder_AddForce(class xEntBoulder * ent /* r2 */, class xVec3 * force /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F5EC0 -> 0x3F5F10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F5F10 -> 0x003F5F60
*/
// Range: 0x3F5F10 -> 0x3F5F60
void xEntBoulder_AddInstantForce(class xEntBoulder * ent /* r2 */, class xVec3 * force /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F5F10 -> 0x3F5F60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F5F60 -> 0x003F610C
*/
// Range: 0x3F5F60 -> 0x3F610C
void xEntBoulder_ApplyForces(class xEntCollis * collis /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3F5F60 -> 0x3F610C
        signed int i; // r18
        class xEntBoulder * boul; // r17
        class xEntDrive * drv; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F6110 -> 0x003F6444
*/
// Range: 0x3F6110 -> 0x3F6444
void xEntBoulder_Init(class xEntBoulder * ent /* r17 */, class xEntAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F6110 -> 0x3F6444
        class xEntBoulderAsset * basset; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F6450 -> 0x003F6458
*/
// Range: 0x3F6450 -> 0x3F6458
void xEntBoulder_Init(void * ent /* r2 */, void * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F6450 -> 0x3F6458
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEntBoulder.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F6460 -> 0x003F6624
*/
// Range: 0x3F6460 -> 0x3F6624
void xEntBoulder_Render(class xEnt * ent /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3F6460 -> 0x3F6624
        class xModelInstance * model; // r2
        signed int shadowResult; // r29+0x3C
        class xVec3 shadVec; // r29+0x30
        float radius; // r1
        float radius; // r1
    }
}


