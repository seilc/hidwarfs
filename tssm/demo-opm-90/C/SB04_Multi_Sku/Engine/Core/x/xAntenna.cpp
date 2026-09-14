/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAntenna.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043CC60 -> 0x0043CE88
*/
// Range: 0x43CC60 -> 0x43CE88
void xAntennaSceneReset() {
    /* anonymous block */ {
        // Range: 0x43CC60 -> 0x43CE88
        signed int i; // r21
        class xAntenna * pAntenna; // r2
        class xVec3 tipIdealPosition; // r29+0xF0
        class xModelInstance * pModel; // r2
        class xVec3 antennaBase; // r29+0xE0
        class xVec3 antennaDelta; // r29+0xD0
        class xMat4x3 * pMat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAntenna.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043CE90 -> 0x0043CED4
*/
// Range: 0x43CE90 -> 0x43CED4
void xAntennaRemoveAll() {
    /* anonymous block */ {
        // Range: 0x43CE90 -> 0x43CED4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAntenna.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043CEE0 -> 0x0043CF58
*/
// Range: 0x43CEE0 -> 0x43CF58
void xAntennaRemove(class xEnt * pParent /* r2 */, signed int startBone /* r2 */, signed int endBone /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43CEE0 -> 0x43CF58
        signed int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAntenna.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043CF60 -> 0x0043D140
*/
// Range: 0x43CF60 -> 0x43D140
void xAntennaUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x43CF60 -> 0x43D140
        signed int i; // r17
        class zNMECommon * nme; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAntenna.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043D140 -> 0x0043D350
*/
// Range: 0x43D140 -> 0x43D350
void xAntennaAddAntenna(class xEnt * pParent /* r2 */, float length /* r29+0x70 */, float rigidity /* r29+0x70 */, signed int startBone /* r2 */, signed int endBone /* r2 */, unsigned char noLight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43D140 -> 0x43D350
        signed int i; // r9
        class xAntenna * pAntenna; // r2
        class xVec3 antennaBase; // r29+0x60
        class xVec3 antennaDelta; // r29+0x50
        class xVec3 tipIdealPosition; // r29+0x40
        class xMat4x3 * pMat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAntenna.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043D350 -> 0x0043D658
*/
// Range: 0x43D350 -> 0x43D658
void xAntennaRender() {
    /* anonymous block */ {
        // Range: 0x43D350 -> 0x43D658
        signed int i; // r18
        class zNMECommon * nme; // r2
        signed int i; // r17
        class zNMECommon * nme; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAntenna.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043D660 -> 0x0043D668
*/
// Range: 0x43D660 -> 0x43D668
void xAntennaScenePostInit() {
    /* anonymous block */ {
        // Range: 0x43D660 -> 0x43D668
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAntenna.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043D670 -> 0x0043D6A8
*/
// Range: 0x43D670 -> 0x43D6A8
void xAntennaSceneInit() {
    /* anonymous block */ {
        // Range: 0x43D670 -> 0x43D6A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAntenna.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043D6B0 -> 0x0043DAA0
*/
// Range: 0x43D6B0 -> 0x43DAA0
void xAntennaInit() {
    /* anonymous block */ {
        // Range: 0x43D6B0 -> 0x43DAA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAntenna.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043DAA0 -> 0x0043DBE8
*/
// Range: 0x43DAA0 -> 0x43DBE8
static void RenderOneAntennaSparks(class xAntenna * pAntenna /* r16 */) {
    /* anonymous block */ {
        // Range: 0x43DAA0 -> 0x43DBE8
        class xMat4x3 antennaMat; // r29+0x20
        class xVec3 pos_emit; // r29+0x70
        class xVec3 dir_emit; // r29+0x60
        enum en_nmesimp status; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAntenna.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043DBF0 -> 0x0043E194
*/
// Range: 0x43DBF0 -> 0x43E194
static void RenderOneAntenna(class xAntenna * pAntenna /* r16 */) {
    /* anonymous block */ {
        // Range: 0x43DBF0 -> 0x43E194
        class xVec3 w; // r29+0x150
        class xVec3 h; // r29+0x140
        class xVec3 pos; // r29+0x130
        class xMat4x3 antennaMat; // r29+0xC0
        enum en_nmesimp status; // r2
        class xVec3 toCam; // r29+0x120
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RxObjSpace3DVertex sStripVert[4]; // @ 0x006D9E10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAntenna.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043E1A0 -> 0x0043F454
*/
// Range: 0x43E1A0 -> 0x43F454
static void UpdateOneAntenna(class xAntenna * pAntenna /* r21 */, float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x43E1A0 -> 0x43F454
        class xVec3 antennaBaseRelative; // r29+0x4B0
        class xVec3 antennaBase; // r29+0x4A0
        class xModelInstance * pModel; // r2
        class RwMatrixTag * pBoneMatStart; // r2
        class xMat4x3 * pMat; // r16
        class RwMatrixTag * pBoneMatEnd; // r2
        class xVec3 tipIdealPosition; // r29+0x490
        class xVec3 antennaDelta; // r29+0x480
        class xVec3 delta; // r29+0x470
        class xVec3 oldPosition; // r29+0x460
        class xVec3 tipVec; // r29+0x450
        class xVec3 distMoved; // r29+0x440
        class xVec3 tipPositionRelative; // r29+0x430
        class xMat4x3 oldTipMtx; // r29+0x100
        class xVec3 initialPosition; // r29+0x420
        class xVec3 tipDirection; // r29+0x410
        class xMat3x3 startRotation; // r29+0xD0
        class xMat4x3 * startBone; // r2
        class xMat3x3 endRotation; // r29+0xA0
        class xMat4x3 * endBone; // r18
        class RwMatrixTag * pBoneMat; // r2
        class xVec3 oldBonePos; // r29+0x400
        class xVec3 bonePos; // r29+0x3F0
        class xVec3 boneDelta; // r29+0x3E0
        signed int iBone; // r8
        class xVec3 * pBonePos; // r2
        signed int iBone; // r17
        class xVec3 * pBonePos; // r2
    }
}


