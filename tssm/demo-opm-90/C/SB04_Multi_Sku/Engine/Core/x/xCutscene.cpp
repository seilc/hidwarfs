/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00413B70 -> 0x00413B9C
*/
// Range: 0x413B70 -> 0x413B9C
// this: r2
static void xCamCutscene::create() {
    /* anonymous block */ {
        // Range: 0x413B70 -> 0x413B9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00413BA0 -> 0x00414A1C
*/
// Range: 0x413BA0 -> 0x414A1C
void xCutscene_Render(class xCutscene * csn /* r23 */) {
    /* anonymous block */ {
        // Range: 0x413BA0 -> 0x414A1C
        unsigned int visFlags'558; // r9
        unsigned int i; // r9
        unsigned int dataIndex; // r29+0x140
        unsigned int animIndex; // r29+0x130
        unsigned int mphIndex; // r3
        unsigned int visFlags; // r29+0x42AC
        unsigned int visIdx; // r22
        unsigned int fakeCount; // r21
        unsigned int tworoot; // r16
        unsigned int noshadow; // r29+0x120
        class xCutsceneData * data; // r29+0x110
        class xCutsceneData * mphdata; // r2
        class RpAtomic * model; // r20
        class RpAtomic * shadowModel; // r29+0x10C
        class RwMatrixTag animMat[65]; // r29+0x3240
        class xVec3 * camVec; // r2
        class xModelPipe * pipeCurr; // r19
        class XCSNNosey * nosey; // r29+0xF0
        unsigned int tempSize; // r29+0x42A8
        unsigned int viscnt; // r7
        unsigned int * currvis; // r6
        unsigned int subIndex; // r2
        unsigned int frameMin; // r2
        unsigned int frameMax; // r2
        unsigned int frameIndex; // r11
        unsigned int shadowBits; // r30
        class xBox combinedAnimBound; // r29+0x3220
        unsigned int morphAnimIndex; // r2
        unsigned int morphModelIndex; // r2
        unsigned int numFrame; // r2
        unsigned int numRun; // r2
        class xCutsceneMphFrame * mphFrame; // r2
        class xCutsceneMphRun * mphRun; // r18
        class xMorphTargetFile * mphFile; // r2
        signed short * v_array[4]; // r29+0x3210
        signed short weight[4]; // r29+0x42A0
        unsigned int skipsize; // r6
        class xVec3 * csnTmpArray; // r17
        class xVec3 * currtmp; // r2
        class xVec3 * outv; // r2
        unsigned int j; // r5
        unsigned int cmpval; // r2
        void * deltaAnim; // r2
        void * deltaModel; // r2
        signed int culled; // r16
        class xBox worldbox; // r29+0x31F0
        signed int culled; // r16
        class xBox worldbox; // r29+0x31D0
        class CutsceneShadowModel smod; // r29+0x4290
        class xShadowCache scache; // r29+0x150
        class xVec3 center; // r29+0x4280
        class xVec3 shadVec; // @ 0x00604B60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00414A20 -> 0x00414A90
*/
// Range: 0x414A20 -> 0x414A90
static void CutsceneShadowRender(class CutsceneShadowModel * smod /* r18 */) {
    /* anonymous block */ {
        // Range: 0x414A20 -> 0x414A90
        class RpAtomic * model; // r17
        unsigned int bits; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00414A90 -> 0x00415AE0
*/
// Range: 0x414A90 -> 0x415AE0
static void JDeltaEval(class RpAtomic * model /* r18 */, void * deltaModel /* r17 */, void * deltaAnim /* r2 */, float time /* r29+0x240 */) {
    /* anonymous block */ {
        // Range: 0x414A90 -> 0x415AE0
        float outweight[128]; // r29+0x40
        float * currweight; // r14
        signed int i; // r8
        signed int numFrames; // r2
        signed int numWeights; // r16
        float * times; // r4
        float * weights; // r2
        float lerp; // r3
        float invlerp; // r2
        class RwV3d * outverts; // r2
        signed int numRun; // r2
        class JDeltaTarget * dtgt; // r12
        float scale; // r29+0x240
        signed short * svert; // r11
        signed int j; // r10
        signed int cmpval; // r2
        class RwV3d * vert; // r6
        signed int j; // r4
        signed int cmpval; // r2
        float scale; // r1
        signed short * svert; // r13
        signed int j; // r12
        signed int cmpval; // r2
        float scale; // r1
        class RwV3d * vert; // r11
        signed int j; // r10
        signed int cmpval; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00415AE0 -> 0x00415D94
*/
// Range: 0x415AE0 -> 0x415D94
static void xcsCalcAnimMatrices(class RwMatrixTag * animMat /* r21 */, class RpAtomic * model /* r20 */, class xCutsceneAnimHdr * ahdr /* r19 */, float time /* r29+0x840 */, unsigned int tworoot /* r16 */) {
    /* anonymous block */ {
        // Range: 0x415AE0 -> 0x415D94
        class xQuat quatresult[65]; // r29+0x430
        class xVec3 tranresult[65]; // r29+0x120
        void * afile; // r2
        class xMat4x3 m1; // r29+0xE0
        class xMat4x3 m2; // r29+0xA0
        unsigned int numbone; // r2
        unsigned int boneidx; // r6
        class xQuat * qqq; // r5
        class xVec3 * ttt; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00415DA0 -> 0x00416108
*/
// Range: 0x415DA0 -> 0x416108
signed int xCutscene_Update(class xCutscene * csn /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x415DA0 -> 0x416108
        class xCutsceneTime * oldChunk; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00416110 -> 0x0041614C
*/
// Range: 0x416110 -> 0x41614C
signed int xCutscene_LoadStart(class xCutscene * csn /* r16 */) {
    /* anonymous block */ {
        // Range: 0x416110 -> 0x41614C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00416150 -> 0x004162EC
*/
// Range: 0x416150 -> 0x4162EC
signed int xCutscene_Destroy(class xCutscene * csn /* r19 */) {
    /* anonymous block */ {
        // Range: 0x416150 -> 0x4162EC
        unsigned int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004162F0 -> 0x00416490
*/
// Range: 0x4162F0 -> 0x416490
class xCutscene * xCutscene_Create(unsigned int csnID /* r18 */, unsigned int subtitlesID /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4162F0 -> 0x416490
        class xCutscene * csn; // r16
        signed int tocnum; // r10
        class xCutsceneInfo * cnfo; // r2
        unsigned int i; // r9
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00416490 -> 0x004165FC
*/
// Range: 0x416490 -> 0x4165FC
void xCutscene_InitEnd() {
    /* anonymous block */ {
        // Range: 0x416490 -> 0x4165FC
        signed int i; // r17
        signed int maxModels; // r11
        signed int tocnum; // r10
        class xCutsceneInfo * cnfo; // r9
        unsigned int cnum; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00416600 -> 0x00416664
*/
// Range: 0x416600 -> 0x416664
void xCutscene_InitTOC(void * toc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x416600 -> 0x416664
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00416670 -> 0x004166C4
*/
// Range: 0x416670 -> 0x4166C4
void xCutscene_InitBegin() {
    /* anonymous block */ {
        // Range: 0x416670 -> 0x4166C4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00446140 -> 0x004461F0
*/
// Range: 0x446140 -> 0x4461F0
// this: r2
static void xCamCutscene::start() {
    /* anonymous block */ {
        // Range: 0x446140 -> 0x4461F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004461F0 -> 0x00446284
*/
// Range: 0x4461F0 -> 0x446284
// this: r2
static void xCamCutscene::stop() {
    /* anonymous block */ {
        // Range: 0x4461F0 -> 0x446284
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00446290 -> 0x004465A0
*/
// Range: 0x446290 -> 0x4465A0
// this: r21
static void xCamCutscene::update() {
    /* anonymous block */ {
        // Range: 0x446290 -> 0x4465A0
        class xCutsceneData * data; // r20
        unsigned int i; // r19
        unsigned int dataIndex; // r22
        class xMat3x3 tmpMat; // r29+0xD0
        class xQuat quats[2]; // r29+0xB0
        float lerp; // r21
        signed int frame; // r2
        unsigned int count; // r2
        class zFlyKey * keys; // r18
    }
}


