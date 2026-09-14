/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B2C30 -> 0x004B2F7C
*/
// Range: 0x4B2C30 -> 0x4B2F7C
static void iEnvMatOrderRenderPS2(class iEnv * env /* r30 */, unsigned char alpha /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4B2C30 -> 0x4B2F7C
        signed int i; // r22
        signed int backcullon; // r23
        signed int zbufferon; // r21
        signed int matOrderCount; // r2
        class iEnvMatOrder * currMatOrder; // r20
        signed int currMatGroup; // r19
        unsigned int old_zWriteEnable; // r29+0xBC
        unsigned int old_cullMode; // r29+0xB8
        unsigned int oldState; // r29+0xB4
        unsigned int newState; // r2
        signed int matOrderEnd; // r2
        class RpAtomic * apAtom; // r18
        class xJSPNodeInfo * nodeInfo; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B2F80 -> 0x004B31D4
*/
// Range: 0x4B2F80 -> 0x4B31D4
static void iEnvMatOrderSetup(class iEnv * env /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4B2F80 -> 0x4B31D4
        signed int i; // r5
        signed int currMatGroup; // r16
        signed int nodeIndex; // r8
        class RwLLLink * cur; // r7
        class RwLLLink * end; // r2
        class RpClump * clump; // r2
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B31E0 -> 0x004B340C
*/
// Range: 0x4B31E0 -> 0x4B340C
static signed int CmpMatOrder(void * a /* r2 */, void * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B31E0 -> 0x4B340C
        class iEnvMatOrder * ael; // r2
        class iEnvMatOrder * bel; // r2
        class xJSPNodeInfo * anod; // r2
        class xJSPNodeInfo * bnod; // r2
        signed int sidecmp; // r2
        class RpMaterial * amat; // r2
        class RpMaterial * bmat; // r2
        char * atex; // r2
        signed int namecmp; // r2
        signed int decalcmp; // r2
        unsigned int acol; // r2
        unsigned int bcol; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B3410 -> 0x004B3474
*/
// Range: 0x4B3410 -> 0x4B3474
void iEnvEndRenderFX() {
    /* anonymous block */ {
        // Range: 0x4B3410 -> 0x4B3474
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B3480 -> 0x004B34E0
*/
// Range: 0x4B3480 -> 0x4B34E0
void iEnvRender(class iEnv * env /* r17 */, unsigned char alpha /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4B3480 -> 0x4B34E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B34E0 -> 0x004B34E8
*/
// Range: 0x4B34E0 -> 0x4B34E8
void iEnvSetup(class iEnv * env /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B34E0 -> 0x4B34E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B34F0 -> 0x004B34F8
*/
// Range: 0x4B34F0 -> 0x4B34F8
void iEnvLightingBasics() {
    /* anonymous block */ {
        // Range: 0x4B34F0 -> 0x4B34F8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B3500 -> 0x004B3508
*/
// Range: 0x4B3500 -> 0x4B3508
void iEnvDefaultLighting() {
    /* anonymous block */ {
        // Range: 0x4B3500 -> 0x4B3508
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B3510 -> 0x004B3570
*/
// Range: 0x4B3510 -> 0x4B3570
void iEnvFree(class iEnv * env /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4B3510 -> 0x4B3570
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B3570 -> 0x004B35C8
*/
// Range: 0x4B3570 -> 0x4B35C8
void iEnvLoadEnd(class iEnv * env /* r16 */, signed int dataType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B3570 -> 0x4B35C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B35D0 -> 0x004B3678
*/
// Range: 0x4B35D0 -> 0x4B3678
void iEnvJSPOff(class iEnv * env /* r17 */, class xJSPHeader * jsp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B35D0 -> 0x4B3678
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B3680 -> 0x004B3728
*/
// Range: 0x4B3680 -> 0x4B3728
void iEnvJSPOn(class iEnv * env /* r17 */, class xJSPHeader * jsp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B3680 -> 0x4B3728
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B3730 -> 0x004B37E0
*/
// Range: 0x4B3730 -> 0x4B37E0
void iEnvJSPVisibilityDec(class iEnv * env /* r17 */, class xJSPHeader * jsp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B3730 -> 0x4B37E0
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B37E0 -> 0x004B3890
*/
// Range: 0x4B37E0 -> 0x4B3890
void iEnvJSPVisibilityInc(class iEnv * env /* r17 */, class xJSPHeader * jsp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B37E0 -> 0x4B3890
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B3890 -> 0x004B3ABC
*/
// Range: 0x4B3890 -> 0x4B3ABC
unsigned char iEnvLoadJSP(class iEnv * env /* r18 */, unsigned int aid /* r2 */, void * data /* r2 */, signed int dataType /* r2 */, signed int index /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4B3890 -> 0x4B3ABC
        class xJSPHeader * jsp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B3AC0 -> 0x004B3BAC
*/
// Range: 0x4B3AC0 -> 0x4B3BAC
void iEnvLoadBegin(class iEnv * env /* r16 */, signed int dataType /* r2 */, signed int count /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4B3AC0 -> 0x4B3BAC
        class RwBBox tmpbbox; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B3BB0 -> 0x004B3BB8
*/
// Range: 0x4B3BB0 -> 0x4B3BB8
void iEnvStartup() {
    /* anonymous block */ {
        // Range: 0x4B3BB0 -> 0x4B3BB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iEnv.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B3BC0 -> 0x004B3C88
*/
// Range: 0x4B3BC0 -> 0x4B3C88
static class RpAtomic * SetPipelineCB(class RpAtomic * atomic /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4B3BC0 -> 0x4B3C88
        signed int i; // r4
        class RpMaterialList * matlist; // r2
        class RxPipeline * atmpipe; // r2
        class RxPipeline * matpipe; // r2
    }
}


