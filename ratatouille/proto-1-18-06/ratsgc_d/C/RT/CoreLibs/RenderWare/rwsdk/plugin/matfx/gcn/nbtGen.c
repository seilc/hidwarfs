/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\matfx\gcn\nbtGen.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803EBFA0 -> 0x803EDC48
*/
static char __dbFunctionName[13]; // size: 0xD, address: 0x804E86E8
// Range: 0x803EBFA0 -> 0x803EC140
static void CalcNBTSetup(struct RpGameCubeVtxFmt * vtxFmt /* r3 */, unsigned char * posSize /* r4 */, unsigned char * nrmSize /* r5 */, unsigned char * texSize /* r6 */, unsigned int * gqr5Val /* r7 */) {
    // Local variables
    unsigned int tmpReg; // r31
    unsigned int posGQR; // r30
    unsigned int nrmGQR; // r29
    unsigned int texGQR; // r28
    unsigned int * gqr5ValReg; // r27
    unsigned char vtxFmtTypeConvTable[5]; // r1+0x12
    unsigned char vtxFmtSizeConvTable[5]; // r1+0xD
    unsigned char vtxFmtNormFracTable[5]; // r1+0x8

    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804E86F5
// Range: 0x803EC140 -> 0x803EC178
static void CalcNBTRestore(unsigned int gqr5Val /* r1+0x8 */) {
    // Local variables
    unsigned int tmpReg; // r31

    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E8704
// Range: 0x803EC178 -> 0x803EC340
static void TriStripNBTDataSetup8(struct _rwDlNBTDataTag * nbtData /* r3 */, unsigned char * indices /* r4 */, unsigned int stride /* r5 */, unsigned char * pos /* r6 */, unsigned char * nbt /* r7 */, unsigned char * tex /* r8 */, int i /* r9 */) {
    // Local variables
    unsigned char i0; // r29
    unsigned char i1; // r31
    unsigned char i2; // r30
    unsigned char itemp; // r28

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E871A
// Range: 0x803EC340 -> 0x803EC508
static void TriStripNBTDataSetup16(struct _rwDlNBTDataTag * nbtData /* r3 */, unsigned char * indices /* r4 */, unsigned int stride /* r5 */, unsigned char * pos /* r6 */, unsigned char * nbt /* r7 */, unsigned char * tex /* r8 */, int i /* r9 */) {
    // Local variables
    unsigned short i0; // r29
    unsigned short i1; // r31
    unsigned short i2; // r30
    unsigned short itemp; // r28

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E8731
// Range: 0x803EC508 -> 0x803EC688
static void TriListNBTDataSetup8(struct _rwDlNBTDataTag * nbtData /* r3 */, unsigned char * indices /* r4 */, unsigned int stride /* r5 */, unsigned char * pos /* r6 */, unsigned char * nbt /* r7 */, unsigned char * tex /* r8 */, int i /* r9 */) {
    // Local variables
    unsigned char i0; // r29
    unsigned char i1; // r31
    unsigned char i2; // r30

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E8746
// Range: 0x803EC688 -> 0x803EC808
static void TriListNBTDataSetup16(struct _rwDlNBTDataTag * nbtData /* r3 */, unsigned char * indices /* r4 */, unsigned int stride /* r5 */, unsigned char * pos /* r6 */, unsigned char * nbt /* r7 */, unsigned char * tex /* r8 */, int i /* r9 */) {
    // Local variables
    unsigned short i0; // r29
    unsigned short i1; // r31
    unsigned short i2; // r30

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804E875C
// total size: 0x20
struct _rwDlNBTDataTag {
    // Members
    void * pos0; // offset 0x0, size 0x4
    void * pos1; // offset 0x4, size 0x4
    void * pos2; // offset 0x8, size 0x4
    void * nrm0; // offset 0xC, size 0x4
    void * tex0; // offset 0x10, size 0x4
    void * tex1; // offset 0x14, size 0x4
    void * tex2; // offset 0x18, size 0x4
    unsigned char posCompSize; // offset 0x1C, size 0x1
    unsigned char nrmCompSize; // offset 0x1D, size 0x1
    unsigned char texCompSize; // offset 0x1E, size 0x1
    unsigned char pad; // offset 0x1F, size 0x1
};
// Range: 0x803EC808 -> 0x803ED690
static void CalcMeshNBTs(struct RxGameCubeVertexBuffer * vbHeader /* r27 */, struct RxGameCubeDisplayList * dList /* r22 */, struct RpGameCubeVtxFmt * vtxFmt /* r19 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int gqr5Val; // r1+0x2C
    unsigned int bytesProcessed; // r29
    unsigned int stride; // r28
    unsigned char * pos; // r21
    unsigned char * uvs; // r20
    unsigned char * nbt; // r24
    unsigned char * dListData; // r31
    struct _rwDlNBTDataTag nbtData; // r1+0x30
    unsigned short numVertices; // r26
    unsigned char opCode; // r23
    unsigned short index; // r18
    unsigned char value; // r17
    unsigned char index; // r1+0x12
    unsigned char value; // r1+0x11
    unsigned short value; // r1+0x28
    unsigned short index; // r1+0x26
    unsigned short value; // r1+0x24
    unsigned char index; // r1+0x10
    float value; // f31
    unsigned short index; // r1+0x22
    float value; // f30
    unsigned char index; // r1+0xF
    float value; // f29
    unsigned short index; // r1+0x20
    float value; // f28
    unsigned char index; // r1+0xE
    unsigned short index; // r1+0x1E
    unsigned char value; // r1+0xD
    unsigned char index; // r1+0xC
    unsigned char value; // r1+0xB
    unsigned short value; // r1+0x1C
    unsigned short index; // r1+0x1A
    unsigned short value; // r1+0x18
    unsigned char index; // r1+0xA
    float value; // f27
    unsigned short index; // r1+0x16
    float value; // f26
    unsigned char index; // r1+0x9
    float value; // f25
    unsigned short index; // r1+0x14
    float value; // f24
    unsigned char index; // r1+0x8

    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E8769
// Range: 0x803ED690 -> 0x803EDAE4
void _rpGameCubeMTPipeDataCalcNBTs(struct RxGameCubePipeData * pipeData /* r27 */, struct RpGameCubeVtxFmt * vtxFmt /* r28 */, int numVerts /* r1+0x8 */) {
    // Local variables
    struct RxGameCubeVertexBuffer * vbHeader; // r30
    struct RxGameCubeDisplayList * dList; // r20
    struct RpMeshHeader * meshHeader; // r1+0xC
    struct RpMesh * mesh; // r19
    int i; // r29
    unsigned char * nbt; // r24
    unsigned short * nbt; // r23
    float * nbt; // r22
    float * nbt; // r21
    struct RpMultiTexture * multiTexture; // r25
    struct RpGameCubeMTConfig * config; // r18
    int j; // r17
    struct RpGameCubeTexGen * texGen; // r26

    // References
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E8787
// Range: 0x803EDAE4 -> 0x803EDC48
int _rpGameCubeMTPipeDataQueryNBTs(struct RxGameCubePipeData * pipeData /* r26 */) {
    // Local variables
    struct RpMeshHeader * meshHeader; // r25
    struct RpMesh * mesh; // r29
    int i; // r24
    struct RpMultiTexture * multiTexture; // r30
    struct RpGameCubeMTConfig * config; // r28
    int j; // r27
    struct RpGameCubeTexGen * texGen; // r31

    // References
    // -> static char __dbFunctionName[31];
}


