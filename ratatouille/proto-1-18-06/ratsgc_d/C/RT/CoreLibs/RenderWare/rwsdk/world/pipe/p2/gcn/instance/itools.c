/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\instance\itools.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8042A2F4 -> 0x8042B720
*/
static char __dbFunctionName[23]; // size: 0x17, address: 0x804EBDB0
// Range: 0x8042A2F4 -> 0x8042A68C
void _rwGCNTriStripGetStats(unsigned short * indices /* r31 */, unsigned int numIndices /* r24 */, unsigned int * numStripsOut /* r26 */, unsigned int * numIndicesOut /* r27 */, int preserveWindingOrder /* r25 */) {
    // Local variables
    unsigned int length; // r30
    unsigned int i; // r29

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EBDC7
// Range: 0x8042A68C -> 0x8042A720
void _rwGCNInstanceIndicesCopy(unsigned short * indices /* r3 */, unsigned int numIndices /* r4 */, unsigned int stride /* r5 */, unsigned int indexType /* r6 */, void * memory /* r7 */) {
    // Local variables
    unsigned int i; // r31
    unsigned int i; // r30

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EBDE1
// Range: 0x8042A720 -> 0x8042A9F0
void _rwGCNInstanceIndices(unsigned short * posIndices /* r31 */, unsigned short * indices /* r23 */, unsigned int numIndices /* r22 */, int removeDegen /* r1+0x8 */, unsigned int stride /* r26 */, unsigned int indexType /* r24 */, int preserveWindingOrder /* r21 */, void * memory /* r25 */) {
    // Local variables
    unsigned int numStripsWritten; // r28
    unsigned int numIndicesWritten; // r27
    unsigned int length; // r30
    unsigned int i; // r29

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EBDF7
// Range: 0x8042A9F0 -> 0x8042AC98
static void WriteHeaders(unsigned short * posIndices /* r3 */, unsigned int numIndices /* r4 */, int removeDegen /* r5 */, unsigned int stride /* r6 */, unsigned char primTypeVAT /* r7 */, int preserveWindingOrder /* r8 */, void * memory /* r9 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int numStripsWritten; // r29
    unsigned int numIndicesWritten; // r28
    unsigned int length; // r31
    unsigned char * header; // r27
    unsigned char * header; // r26
    unsigned char * header; // r25
    unsigned char * header; // r24
    unsigned char * header; // r1+0x8

    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EBE04
// Range: 0x8042AC98 -> 0x8042B720
void _rwGCNDisplayListFill(struct rwVertexDescriptor * vtxDesc /* r31 */, struct RxGameCubeDisplayList * displayList /* r19 */, struct rwGCNDisplayListData * displayListData /* r29 */, unsigned int numIndices /* r24 */, int removeDegen /* r21 */, unsigned int stride /* r25 */, int preserveWindingOrder /* r22 */, unsigned char primTypeVAT /* r1+0x8 */, const struct RwV3d * posOrigin /* r1+0x88 */) {
    // Local variables
    unsigned int offset; // r30
    unsigned int type; // r28
    unsigned int fmt; // r23
    float scale; // f31
    unsigned int i; // r27
    void * memory; // r26
    unsigned int cnt; // r18
    unsigned int fmt; // r17
    float scale; // f30
    unsigned int cnt; // r1+0x14
    unsigned int indexCnt; // r20
    unsigned int fmt; // r1+0x10
    unsigned int fmt; // r1+0xC

    // References
    // -> static char __dbFunctionName[22];
}


