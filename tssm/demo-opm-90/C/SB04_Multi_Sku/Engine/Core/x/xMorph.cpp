/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMorph.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004058E0 -> 0x004058F4
*/
// Range: 0x4058E0 -> 0x4058F4
float xMorphSeqDuration(class xMorphSeqFile * seq /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4058E0 -> 0x4058F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMorph.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00405900 -> 0x00405B04
*/
// Range: 0x405900 -> 0x405B04
void xMorphRender(class xMorphSeqFile * seq /* r2 */, class RwMatrixTag * mat /* r2 */, float time /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x405900 -> 0x405B04
        float lerp; // r29+0x20
        unsigned int tidx; // r7
        signed short weight[4]; // r29+0x18
        signed short * wptr; // r2
        float * times; // r2
        class xMorphFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMorph.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00405B10 -> 0x00405D60
*/
// Range: 0x405B10 -> 0x405D60
class xMorphSeqFile * xMorphSeqSetup(void * data /* r2 */, void * (* FindAssetCB)(unsigned int, char *) /* r22 */) {
    /* anonymous block */ {
        // Range: 0x405B10 -> 0x405D60
        signed int i; // r21
        signed int j; // r4
        class RpAtomic * model; // r2
        class xMorphTargetFile * mphtgt; // r2
        class xMorphSeqFile * header; // r20
        class xMorphFrame * framelist; // r19
        unsigned int * assetlist; // r18
        char * namelist; // r17
        void * assetPtr; // r2
        unsigned int skipsize; // r8
    }
}


