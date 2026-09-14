/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C6210 -> 0x002C66F4
*/
// Range: 0x2C6210 -> 0x2C66F4
void zLightningCollision(class zLightning * l /* r2 */, class xVec3 & start /* r2 */, class xVec3 & end /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C6210 -> 0x2C66F4
        class xBound bound; // r29+0x50
        class xMat4x3 mat; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C6700 -> 0x002C687C
*/
// Range: 0x2C6700 -> 0x2C687C
void zLightningModifyEndpoints(class zLightning * l /* r2 */, class xVec3 * start /* r2 */, class xVec3 * end /* r2 */, float scalePerLength /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2C6700 -> 0x2C687C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C6880 -> 0x002C6888
*/
// Range: 0x2C6880 -> 0x2C6888
void zLightningModifyEndpoints(class zLightning * l /* r2 */, class xVec3 * start /* r2 */, class xVec3 * end /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C6880 -> 0x2C6888
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C6890 -> 0x002C68E8
*/
// Range: 0x2C6890 -> 0x2C68E8
void _zLightningKill(class zLightning * l /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2C6890 -> 0x2C68E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C68F0 -> 0x002C6948
*/
// Range: 0x2C68F0 -> 0x2C6948
void zLightningKill(class zLightning * l /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2C68F0 -> 0x2C6948
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C6950 -> 0x002C6EC8
*/
// Range: 0x2C6950 -> 0x2C6EC8
void zLightningRender() {
    /* anonymous block */ {
        // Range: 0x2C6950 -> 0x2C6EC8
        signed int i; // r29+0xC0
        class zLightning * l; // r20
        signed int start; // r2
        float frac; // r29+0x160
        class xVec3 oldEndPoint; // r29+0x150
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C6ED0 -> 0x002C72DC
*/
// Range: 0x2C6ED0 -> 0x2C72DC
unsigned char zLightningCull(class zLightning * l /* r17 */, float & distanceFade /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2C6ED0 -> 0x2C72DC
        class xMat4x3 mat; // r29+0x30
        class xVec3 pos; // r29+0x120
        float dist2; // r29+0x130
        class xVec3 step; // r29+0x110
        signed int i; // r16
        unsigned char doDraw; // r15
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C72E0 -> 0x002C851C
*/
// Range: 0x2C72E0 -> 0x2C851C
static void zLightningFunc_Render(class zLightning * l /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2C72E0 -> 0x2C851C
        float percent; // r27
        float pstep; // r26
        class xVec3 val[2]; // r29+0x170
        signed int i; // r4
        float distanceFade; // r29+0x18C
        class xVec3 drawAxis[2]; // r29+0x150
        class RxObjSpace3DVertex * verts0; // r19
        unsigned int numVerts; // r18
        signed int u; // r23
        unsigned char aVal; // r3
        float pstep2; // r29+0x190
        float pstep3; // r29+0x190
        float w1func; // r25
        float w1funcB; // r24
        float w1funcC; // r23
        float w1funcEnd; // r29+0xFC
        float w2func; // r22
        float w2funcB; // r29+0xF8
        float w2funcC; // r29+0xF4
        float w2funcEnd; // r29+0xF0
        float wsumfunc; // r21
        float wsumfuncB; // r29+0xEC
        float wsumfuncC; // r29+0xE8
        float wsumfuncEnd; // r29+0xE4
        float _scl2; // r29+0x190
        float _scl3; // r29+0x190
        unsigned char isFinishLoop; // r29+0x100
        float fParam; // r8
        signed int iParam; // r6
        class zLightningFuncPiece * piece; // r2
        float alpha; // r31
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        unsigned int vidx; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C8520 -> 0x002C8A60
*/
// Range: 0x2C8520 -> 0x2C8A60
void zLightningUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2C8520 -> 0x2C8A60
        signed int i; // r17
        signed int picker; // r23
        signed int j; // r4
        float prevEnd; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C8A60 -> 0x002C8D3C
*/
// Range: 0x2C8A60 -> 0x2C8D3C
static void UpdateLightning(class zLightning * l /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2C8A60 -> 0x2C8D3C
        class xVec3 start; // r29+0x40
        class xVec3 end; // r29+0x30
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C8D40 -> 0x002C90D4
*/
// Range: 0x2C8D40 -> 0x2C90D4
class zLightning * _zLightningAdd(class _tagLightningAdd * add /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2C8D40 -> 0x2C90D4
        class RwTexture * tex; // r2
        float defaultWeightParam[4][12]; // @ 0x005FCA50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C90E0 -> 0x002C90EC
*/
// Range: 0x2C90E0 -> 0x2C90EC
class zLightning * zLightningAdd(class _tagLightningAdd * add /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C90E0 -> 0x2C90EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C90F0 -> 0x002C9164
*/
// Range: 0x2C90F0 -> 0x2C9164
void zLightningReset() {
    /* anonymous block */ {
        // Range: 0x2C90F0 -> 0x2C9164
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9170 -> 0x002C9960
*/
// Range: 0x2C9170 -> 0x2C9960
void zLightningInit() {
    /* anonymous block */ {
        // Range: 0x2C9170 -> 0x2C9960
        signed int i; // r6
        signed int j; // r4
        float prevEnd; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9960 -> 0x002C9968
*/
// Range: 0x2C9960 -> 0x2C9968
void lightningAddTweaks() {
    /* anonymous block */ {
        // Range: 0x2C9960 -> 0x2C9968
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9970 -> 0x002C9C68
*/
// Range: 0x2C9970 -> 0x2C9C68
class zLightning * lightningStart(class zLightningAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2C9970 -> 0x2C9C68
        enum iSndGroupHandle handle; // r2
        class xVec3 pos; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9C70 -> 0x002C9D48
*/
// Range: 0x2C9C70 -> 0x2C9D48
static void lightningTweakStart() {
    /* anonymous block */ {
        // Range: 0x2C9C70 -> 0x2C9D48
        class xVec3 s; // r29+0x20
        class xVec3 e; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9D50 -> 0x002C9E48
*/
// Range: 0x2C9D50 -> 0x2C9E48
void EventCB(class xBase * to /* r17 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C9D50 -> 0x2C9E48
        class zLightningWidget & lightningWidget; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLightning.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C9E50 -> 0x002C9EA8
*/
// Range: 0x2C9E50 -> 0x2C9EA8
void Init(class xBase & data /* r17 */, class xDynAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2C9E50 -> 0x2C9EA8
    }
}


