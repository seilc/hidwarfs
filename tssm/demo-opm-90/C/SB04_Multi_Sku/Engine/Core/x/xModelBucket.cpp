/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00405D60 -> 0x00405DC0
*/
// Range: 0x405D60 -> 0x405DC0
void xModelBucket_PreAllocModelPipe(class RpAtomic * m /* r16 */) {
    /* anonymous block */ {
        // Range: 0x405D60 -> 0x405DC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00405DC0 -> 0x00405E6C
*/
// Range: 0x405DC0 -> 0x405E6C
void xModelBucket_Deinit() {
    /* anonymous block */ {
        // Range: 0x405DC0 -> 0x405E6C
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00405E70 -> 0x00405E78
*/
// Range: 0x405E70 -> 0x405E78
void xModelBucket_RenderAlphaEnd() {
    /* anonymous block */ {
        // Range: 0x405E70 -> 0x405E78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00405E80 -> 0x00405F04
*/
// Range: 0x405E80 -> 0x405F04
unsigned char xModelBucket_RenderAny(signed int maxLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x405E80 -> 0x405F04
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00405F10 -> 0x00405FCC
*/
// Range: 0x405F10 -> 0x405FCC
void xModelBucket_RenderAlphaLayer(signed int maxLayer /* r16 */) {
    /* anonymous block */ {
        // Range: 0x405F10 -> 0x405FCC
        signed int lastLayer; // r6
        signed int layer; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00405FD0 -> 0x0040665C
*/
// Range: 0x405FD0 -> 0x40665C
static void xModelBucket_RenderAlphaLayerInternal(signed int maxLayer /* r29+0xDC */) {
    /* anonymous block */ {
        // Range: 0x405FD0 -> 0x40665C
        unsigned int pipeMask; // r30
        unsigned int curPipeFlags; // r20
        unsigned int lastPipeFlags; // r19
        unsigned char curAlphaDiscard; // r22
        unsigned char lastAlphaDiscard; // r29+0xDB
        enum RwFogType oldfogtype; // r2
        unsigned char startAlphaDiscard; // r2
        class xModelInstance * minst; // r18
        class RpAtomic * oldmodel; // r2
        float oldAlpha; // r21
        float fade; // r20
        unsigned char skyOldFade; // r21
        unsigned int xorPipeFlags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00406660 -> 0x004066A8
*/
// Range: 0x406660 -> 0x4066A8
void xModelBucket_RenderAlphaBegin() {
    /* anonymous block */ {
        // Range: 0x406660 -> 0x4066A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004066B0 -> 0x00406ED4
*/
// Range: 0x4066B0 -> 0x406ED4
void xModelBucket_RenderOpaque(signed int maxLayer /* r29+0x10C */) {
    /* anonymous block */ {
        // Range: 0x4066B0 -> 0x406ED4
        signed int i; // r22
        class xModelBucket * bucket; // r2
        class RpAtomic * data; // r18
        class xModelInstance * minst; // r17
        signed int flags; // r2
        unsigned int cloneCount; // r20
        class rwPDS_HICloneArray clone[12]; // r29+0x110
        class xLightKit * lkit; // r19
        class RwRGBA matcol; // r29+0xA1C
        class RpAtomic * oldmodel; // r2
        signed int flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00406EE0 -> 0x00406EE8
*/
// Range: 0x406EE0 -> 0x406EE8
void xModelBucket_RenderOpaqueBegin() {
    /* anonymous block */ {
        // Range: 0x406EE0 -> 0x406EE8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00406EF0 -> 0x00407208
*/
// Range: 0x406EF0 -> 0x407208
void xModelBucket_AddAlphaFade(class xModelInstance * minst /* r17 */, float alphaFade /* r20 */) {
    /* anonymous block */ {
        // Range: 0x406EF0 -> 0x407208
        class RpAtomic * model; // r2
        enum RwFrustumTestResult cullresult; // r18
        class xMat4x3 * cammat; // r2
        class xModelBucket * bucket; // r8
        float camdot; // r2
        unsigned char alphaFlags; // r7
        unsigned char alphaProg; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00407210 -> 0x00407580
*/
// Range: 0x407210 -> 0x407580
void xModelBucket_Add(class xModelInstance * minst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x407210 -> 0x407580
        class RpAtomic * model; // r2
        enum RwFrustumTestResult cullresult; // r18
        class xMat4x3 * cammat; // r2
        float camdist2; // r9
        class xModelBucket * bucket; // r8
        float camdot; // r5
        float alphaFade; // r29+0x40
        unsigned char alphaFlags; // r7
        unsigned char alphaProg; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00407580 -> 0x004075C4
*/
// Range: 0x407580 -> 0x4075C4
void xModelBucket_Begin() {
    /* anonymous block */ {
        // Range: 0x407580 -> 0x4075C4
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004075D0 -> 0x0040761C
*/
// Range: 0x4075D0 -> 0x40761C
class xModelBucket * * xModelBucket_GetBuckets(class RpAtomic * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4075D0 -> 0x40761C
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00407620 -> 0x004076DC
*/
// Range: 0x407620 -> 0x4076DC
void xModelBucket_Init() {
    /* anonymous block */ {
        // Range: 0x407620 -> 0x4076DC
        signed int i; // r8
        class xModelBucket * bucket; // r2
        class xModelBucket * * backref; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004076E0 -> 0x00407B88
*/
// Range: 0x4076E0 -> 0x407B88
void xModelBucket_InsertBucket(class RpAtomic * data /* r23 */, class xModelPipe & pipe /* r21 */, unsigned int subObjects /* r30 */) {
    /* anonymous block */ {
        // Range: 0x4076E0 -> 0x407B88
        unsigned int pipeFlags; // r2
        signed int numbuckets; // r20
        signed int pipeSetting[2]; // r29+0xA0
        signed int i; // r19
        unsigned int subObjTemp; // r18
        class RpAtomic * dataTemp; // r17
        class RpAtomic * extraData; // r29+0xAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00407B90 -> 0x00407CE0
*/
// Range: 0x407B90 -> 0x407CE0
void xModelBucket_SetMaterialFX(class RpAtomic * model /* r21 */, class xModelPipe & pipe /* r22 */) {
    /* anonymous block */ {
        // Range: 0x407B90 -> 0x407CE0
        class RpGeometry * geom; // r2
        unsigned char skinned; // r2
        class RxPipeline * p; // r2
        signed int numMaterials; // r2
        signed int i; // r20
        class RpMaterial * material; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00407CE0 -> 0x004081B4
*/
// Range: 0x407CE0 -> 0x4081B4
void FullAtomicDupe(class RpAtomic * atomic /* r17 */, signed int count /* r22 */, class RpAtomic * * output /* r20 */) {
    /* anonymous block */ {
        // Range: 0x407CE0 -> 0x4081B4
        signed int matidx; // r12
        signed int i; // r19
        class RwStream * stream; // r18
        class RwMemory rwmemA; // r29+0x4B0
        class RpAtomic * tempAtom; // r29+0x4BC
        class RpClump * clump; // r2
        class RwLinkList backupClump_atomicList; // r29+0x4A8
        class RwLLLink backupAtomic_inClumpLink; // r29+0x4A0
        class RpClump * tempClump; // r18
        unsigned int fastused; // r17
        class RxPipeline * fastAtmPipe; // r21
        class RxPipeline * fastMatPipe[256]; // r29+0x90
        class RpMaterialList * matList; // r11
        class RwMemory rwmemB; // r29+0x498
        class RpClump * outClump; // r2
        class RpMaterialList * matList; // r2
        class RpHAnimHierarchy * pHier; // r16
        class RpSkin * pSkin; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004081C0 -> 0x004081CC
*/
// Range: 0x4081C0 -> 0x4081CC
static class RpAtomic * GimmeAtomicCallback(class RpAtomic * atomic /* r2 */, void * tmp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4081C0 -> 0x4081CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004081D0 -> 0x00408294
*/
// Range: 0x4081D0 -> 0x408294
void xModelBucket_PreCountAlloc(signed int maxAlphaModels /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4081D0 -> 0x408294
        class RwBBox bbox; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004082A0 -> 0x004083B4
*/
// Range: 0x4082A0 -> 0x4083B4
void xModelBucket_PreCountBucket(class RpAtomic * data /* r19 */, class xModelPipe & pipe /* r2 */, unsigned int subObjects /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4082A0 -> 0x4083B4
        signed int numbuckets; // r17
        signed int modelcount; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004083C0 -> 0x004083EC
*/
// Range: 0x4083C0 -> 0x4083EC
void xModelBucket_PreCountReset() {
    /* anonymous block */ {
        // Range: 0x4083C0 -> 0x4083EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xModelBucket.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004083F0 -> 0x00408480
*/
// Range: 0x4083F0 -> 0x408480
static signed int compare_opaque_buckets(void * e1 /* r2 */, void * e2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4083F0 -> 0x408480
        class xModelBucket & b1; // r2
        class xModelBucket & b2; // r2
        signed int use_layer1; // r2
        signed int use_layer2; // r2
    }
}


