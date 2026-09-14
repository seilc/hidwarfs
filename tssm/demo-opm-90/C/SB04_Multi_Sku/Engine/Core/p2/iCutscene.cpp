/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B4090 -> 0x004B4180
*/
// Range: 0x4B4090 -> 0x4B4180
void iCutsceneSkinInstanceHack(class RpAtomic * atomic /* r2 */, unsigned char enable_hack /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B4090 -> 0x4B4180
        class RpMaterialList * matList; // r2
        signed int i; // r6
        class RxPipeline * pipeline; // r7
        class RxPipeline * srcPipe; // r7
        class RpMeshHeader * meshHeader; // r2
        class rxNodePS2AllMatPvtData * matPvtData; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B4180 -> 0x004B41C4
*/
// Range: 0x4B4180 -> 0x4B41C4
static signed int Cutscene_Skin_InstanceCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r2 */, void * * clusterData /* r2 */, unsigned int numClusters /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B4180 -> 0x4B41C4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B41D0 -> 0x004B48CC
*/
// Range: 0x4B41D0 -> 0x4B48CC
signed int iCSLoadStep(class xCutscene * csn /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4B41D0 -> 0x4B48CC
        signed int bytes; // r29+0x5C
        enum XFILE_READSECTOR_STATUS cdstat; // r2
        unsigned int skipAccum; // r18
        unsigned int tmpSize; // r29+0x58
        void * foundModel; // r2
        class xSndGroup * pLeftGroup; // r16
        class xSndGroup * pRightGroup; // r16
        class xSndGroup * pLeftGroup; // r2
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B48D0 -> 0x004B4974
*/
// Range: 0x4B48D0 -> 0x4B4974
void iCSFileClose(class xCutscene * csn /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4B48D0 -> 0x4B4974
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B4980 -> 0x004B4A50
*/
// Range: 0x4B4980 -> 0x4B4A50
void iCSFileAsyncRead(class xCutscene * csn /* r16 */, void * dest /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B4980 -> 0x4B4A50
        unsigned int * tp; // r2
        unsigned int i; // r9
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B4A50 -> 0x004B4B0C
*/
// Range: 0x4B4A50 -> 0x4B4B0C
unsigned int iCSFileOpen(class xCutscene * csn /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4B4A50 -> 0x4B4B0C
        unsigned int headerskip; // r2
        class PKRAssetTOCInfo ainfo; // r29+0x30
        char * filename; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B4B10 -> 0x004B4B28
*/
// Range: 0x4B4B10 -> 0x4B4B28
static void iCSAsyncReadCB() {
    /* anonymous block */ {
        // Range: 0x4B4B10 -> 0x4B4B28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B4B30 -> 0x004B4CC8
*/
// Range: 0x4B4B30 -> 0x4B4CC8
static void iCSSoundCutsceneCB(enum iSndHandle id /* r16 */, unsigned char first /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4B4B30 -> 0x4B4CC8
        void * data; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B4CD0 -> 0x004B4DD4
*/
// Range: 0x4B4CD0 -> 0x4B4DD4
static void * iCSSoundGetData(class xCutscene * csn /* r2 */, unsigned int channel /* r2 */, unsigned int chunk /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B4CD0 -> 0x4B4DD4
        void * retdata; // r2
        class xCutsceneData * data; // r11
        unsigned int dataIndex; // r10
        unsigned int numData; // r9
        unsigned int id; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B4DE0 -> 0x004B4F10
*/
// Range: 0x4B4DE0 -> 0x4B4F10
void iCSSoundSetup(class xCutscene * csn /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4B4DE0 -> 0x4B4F10
        class xCutsceneData * data; // r17
        unsigned int numData; // r2
        enum xRegion eMyRegion; // r2
        signed int i; // r6
        unsigned int dataIndex; // r7
    }
}


