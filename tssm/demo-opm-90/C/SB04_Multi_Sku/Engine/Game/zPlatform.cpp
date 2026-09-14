/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00308F10 -> 0x0030905C
*/
// Range: 0x308F10 -> 0x30905C
static void zPlatform_GoofyRender(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x308F10 -> 0x30905C
        signed int cull_shad; // r29+0x2C
        class xVec3 vec; // r29+0x20
        class xSphere * sph_world; // r2
        signed int cull_mod; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00309060 -> 0x00309070
*/
// Range: 0x309060 -> 0x309070
unsigned char zPlatform_UsePartialCameraCollision(class zPlatform * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x309060 -> 0x309070
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00309070 -> 0x0030A644
*/
// Range: 0x309070 -> 0x30A644
void zPlatformEventCB(class xBase * from /* r4 */, class xBase * to /* r21 */, unsigned int toEvent /* r17 */, float * toParam /* r20 */, class xBase * toParamWidget /* r16 */, unsigned int toParamWidgetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x309070 -> 0x30A644
        class zPlatform * plat; // r2
        signed int iParam0; // r2
        signed int destctr; // r2
        float tp[4]; // r29+0x150
        float tp[4]; // r29+0x140
        float tp[4]; // r29+0x130
        float tp[4]; // r29+0x120
        float tp[4]; // r29+0x110
        float tp[4]; // r29+0x100
        float tp[4]; // r29+0xF0
        float tp[4]; // r29+0xE0
        float tp[4]; // r29+0xD0
        float desired_angle; // r29+0x190
        float delta_angle; // r29+0x190
        float tp[4]; // r29+0xC0
        float desired_angle; // r29+0x190
        float delta_angle; // r29+0x190
        float tp[4]; // r29+0xB0
        float desired_angle; // r29+0x190
        float delta_angle; // r29+0x190
        float tp[4]; // r29+0xA0
        float tp[4]; // r29+0x90
        float mt; // r29+0x190
        float mt; // r29+0x190
        class FloatAndVoid dist; // r29+0x18C
        class zShrapnelAsset * shrap; // r2
        class xVec3 currVel; // r29+0x180
        unsigned int numFireworks; // r2
        unsigned int i; // r19
        class xVec3 position; // r29+0x170
        class xEnt * ent; // r2
        unsigned int i; // r20
        class xVec3 position; // r29+0x160
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030A650 -> 0x0030A718
*/
// Range: 0x30A650 -> 0x30A718
static void zPlatFM_EventSetup(class zPlatform * plat /* r2 */, float * toParam /* r2 */, signed int idx /* r2 */, unsigned int mask /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30A650 -> 0x30A718
        class zPlatFMRunTime * fmrt; // r2
        float ds; // r5
        float ttm; // r4
        float atm; // r1
        float dtm; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030A720 -> 0x0030A76C
*/
// Range: 0x30A720 -> 0x30A76C
static void zPlatformTranslate(class xEnt * xent /* r18 */, class xVec3 * dpos /* r17 */, class xMat4x3 * dmat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x30A720 -> 0x30A76C
        class zPlatform * plat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030A770 -> 0x0030A85C
*/
// Range: 0x30A770 -> 0x30A85C
void zPlatform_Dismount(class zPlatform * plat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x30A770 -> 0x30A85C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030A860 -> 0x0030A984
*/
// Range: 0x30A860 -> 0x30A984
void zPlatform_Mount(class zPlatform * plat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x30A860 -> 0x30A984
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030A990 -> 0x0030AA54
*/
// Range: 0x30A990 -> 0x30AA54
void zPlatform_Shake(class zPlatform * plat /* r17 */, float ampl /* r21 */, float freq /* r20 */) {
    /* anonymous block */ {
        // Range: 0x30A990 -> 0x30AA54
        class xFFXShakeState * ss; // r16
        class xFFX * sfkt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030AA60 -> 0x0030AAB4
*/
// Range: 0x30AA60 -> 0x30AAB4
void zPlatform_Move(class xEnt * entplat /* r17 */, class xScene * s /* r16 */, float dt /* r20 */, class xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30AA60 -> 0x30AAB4
        class zPlatform * plat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030AAC0 -> 0x0030B4A0
*/
// Range: 0x30AAC0 -> 0x30B4A0
void zPlatform_Update(class xEnt * entplat /* r2 */, class xScene * sc /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x30AAC0 -> 0x30B4A0
        class zPlatform * plat; // r16
        unsigned short state; // r2
        class xEntDrive * drv; // r5
        class xEntMotionMechData * mkasst; // r2
        class xEnt * p; // r2
        float ctilt; // r29+0xD0
        float itilt; // r29+0xD0
        float dtilt; // r1
        class xVec3 * scale; // r2
        class xVec3 lpos; // r29+0xC0
        float dangle; // r3
        float tangle; // r29+0xD0
        class xVec3 * scale; // r2
        float time[3]; // r29+0xB0
        float orient; // r29+0xD0
        class xMat3x3 orientrot; // r29+0x80
        class xMat3x3 origrot; // r29+0x50
        class xVec3 * scale; // r2
        class xMovePoint * src; // r2
        signed int moving; // r18
        class xVec3 * opos; // r2
        class xVec3 * pos; // r2
        class xVec3 * orot; // r2
        class xVec3 * rot; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030B4A0 -> 0x0030BA4C
*/
// Range: 0x30B4A0 -> 0x30BA4C
void zPlatformBreakaway_Update(class zPlatform * plat /* r16 */, class xScene * sc /* r2 */, float dt /* r29+0x1C0 */) {
    /* anonymous block */ {
        // Range: 0x30B4A0 -> 0x30BA4C
        class xAnimState * ast; // r2
        class xAnimSingle * single; // r2
        class xAnimState * ast; // r2
        class xAnimSingle * single; // r2
        class xAnimState * ast; // r2
        class xAnimSingle * single; // r2
        class xAnimState * ast; // r2
        class xAnimSingle * single; // r2
        class xAnimState * ast; // r2
        class xAnimSingle * single; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030BA50 -> 0x0030CC20
*/
// Range: 0x30BA50 -> 0x30CC20
static void zPlatFM_Update(class zPlatform * plat /* r21 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x30BA50 -> 0x30CC20
        signed int i; // r20
        class zPlatFMRunTime * fmrt; // r2
        float tm; // r29+0x2C0
        float ttm; // r29+0x2C0
        float atm; // r29+0x2C0
        float dtm; // r29+0x2C0
        float vm; // r1
        float ds; // r5
        float etm; // r29+0x2C0
        float p; // r29+0x2C0
        float p; // r29+0x2C0
        float p; // r29+0x2C0
        float p; // r29+0x2C0
        float p; // r29+0x2C0
        class xMat4x3 * pmat; // r19
        class xVec3 undoScale; // r29+0x2B0
        class xMat3x3 preR; // r29+0x1C0
        class xMat3x3 preR; // r29+0x190
        class xMat3x3 preR; // r29+0x160
        class xMat3x3 postR; // r29+0x130
        class xMat3x3 postR; // r29+0x100
        class xMat3x3 postR; // r29+0xD0
        float scale_adjust; // r29+0x2C0
        float len2; // r29+0x2C0
        float len_inv; // r29+0x2C0
        float len2; // r29+0x2C0
        float len_inv; // r29+0x2C0
        float rdotu; // r29+0x2C0
        float len2; // r29+0x2C0
        float len_inv; // r29+0x2C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030CC20 -> 0x0030D060
*/
// Range: 0x30CC20 -> 0x30D060
unsigned int zPlatform_PaddleCollide(class xCollis * coll /* r4 */, class xVec3 * hitsource /* r19 */, class xVec3 * hitvel /* r17 */, unsigned int worldSpaceNorm /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30CC20 -> 0x30D060
        class zPlatform * plat; // r18
        class xVec3 locnorm; // r29+0x130
        class xVec3 lochitsrc; // r29+0x120
        class xVec3 lochitvel; // r29+0x110
        float hitdot; // r29+0x140
        class xVec3 hitsrcbot; // r29+0x100
        class xVec3 hitsrctop; // r29+0xF0
        class xRay3 hitsrcray; // r29+0xC0
        class xCollis hitsrccoll; // r29+0x60
        signed int posX; // r2
        signed int posZ; // r2
        signed int direction; // r17
        signed int stutter; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030D060 -> 0x0030D144
*/
// Range: 0x30D060 -> 0x30D144
void zPlatform_PaddleStartRotate(class xEnt * entplat /* r2 */, signed int direction /* r2 */, signed int stutter /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30D060 -> 0x30D144
        class zPlatform * plat; // r16
        float time[3]; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030D150 -> 0x0030D5A8
*/
// Range: 0x30D150 -> 0x30D5A8
static float SolvePaddleMotion(class zPlatform * plat /* r2 */, float * time /* r2 */, float tmr /* r29 */) {
    /* anonymous block */ {
        // Range: 0x30D150 -> 0x30D5A8
        class xPlatformPaddleData * paddle; // r2
        float destOrient; // r29
        float srcOrient; // r5
        float stutterAmount; // r1
        float A; // r4
        float D; // r3
        float distA; // r29
        float distC; // r29
        float distD; // r29
        float lerp; // r2
        float ttot; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030D5B0 -> 0x0030D974
*/
// Range: 0x30D5B0 -> 0x30D974
void zPlatform_Reset(class zPlatform * plat /* r17 */, class xScene * sc /* r16 */) {
    /* anonymous block */ {
        // Range: 0x30D5B0 -> 0x30D974
        class RpAtomic * imodel; // r19
        class xSurface * surf; // r18
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030D980 -> 0x0030DDB0
*/
// Range: 0x30D980 -> 0x30DDB0
void zPlatform_Init(class zPlatform * plat /* r19 */, class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30D980 -> 0x30DDB0
        class xPlatformAsset * plat_asset; // r2
        class xEntMotionAsset * ent_motion_asset; // r18
        class xAnimFile * spring_file; // r17
        class xAnimFile * idle_file; // r2
        unsigned int size; // r29+0x8C
        unsigned int newid; // r16
        class xDestructibleAsset * destruct; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030DDB0 -> 0x0030DDB8
*/
// Range: 0x30DDB0 -> 0x30DDB8
void zPlatform_Init(void * plat /* r2 */, void * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30DDB0 -> 0x30DDB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zPlatform.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0030DDC0 -> 0x0030DE00
*/
// Range: 0x30DDC0 -> 0x30DE00
static void genericPlatRender(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x30DDC0 -> 0x30DE00
    }
}


