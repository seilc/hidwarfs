/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\instance\geominst.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80425870 -> 0x80427008
*/
static char __dbFunctionName[16]; // size: 0x10, address: 0x804EBAD8
// Range: 0x80425870 -> 0x80425920
unsigned int rwGCNPosGetSize(struct rwVertexDescriptor * vtxDesc /* r3 */) {
    // Local variables
    unsigned int size; // r30
    unsigned int cnt; // r31
    unsigned int fmt; // r29

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EBAE8
// Range: 0x80425920 -> 0x804259A0
unsigned int rwGCNNrmGetSize(struct rwVertexDescriptor * vtxDesc /* r3 */) {
    // Local variables
    unsigned int size; // r31
    unsigned int fmt; // r30

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EBAF8
// Range: 0x804259A0 -> 0x80425A40
unsigned int rwGCNClrGetSize(struct rwVertexDescriptor * vtxDesc /* r3 */, unsigned char clrNum /* r4 */) {
    // Local variables
    unsigned int size; // r31
    unsigned int fmt; // r30

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EBB08
// Range: 0x80425A40 -> 0x80425BB0
unsigned int rwGCNTexGetSize(struct rwVertexDescriptor * vtxDesc /* r3 */, unsigned char texNum /* r4 */) {
    // Local variables
    unsigned int size; // r29
    unsigned int cnt; // r31
    unsigned int fmt; // r30

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EBB18
// Range: 0x80425BB0 -> 0x80425FC0
unsigned int _rwGCNVtxFmtInstPos3D(unsigned char * mem /* r21 */, struct RwV3d * srcPosition /* r31 */, unsigned int fmt /* r1+0x8 */, float scale /* f31 */, int numVerts /* r25 */, unsigned int stride /* r28 */, const struct RwV3d * offset /* r27 */) {
    // Local variables
    unsigned int bytesWritten; // r22
    float offsetX; // f30
    float offsetY; // f29
    float offsetZ; // f28
    int i; // r20
    unsigned char * dstPosition; // r24
    int i; // r19
    signed char * dstPosition; // r23
    int i; // r18
    unsigned short * dstPosition; // r30
    int i; // r17
    signed short * dstPosition; // r29
    int i; // r1+0xC
    struct RwV3d * dstPosition; // r26

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EBB2E
// Range: 0x80425FC0 -> 0x804261B8
unsigned int _rwGCNVtxFmtInstNrm(unsigned char * mem /* r3 */, struct RwV3d * srcNormal /* r4 */, unsigned int fmt /* r5 */, int numVerts /* r6 */, unsigned int stride /* r7 */) {
    // Local variables
    unsigned int bytesWritten; // r28
    int i; // r27
    float scale; // f31
    signed char * dstNormal; // r29
    int i; // r26
    float scale; // f30
    signed short * dstNormal; // r31
    int i; // r25
    struct RwV3d * dstNormal; // r30

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EBB42
// Range: 0x804261B8 -> 0x80426560
unsigned int _rwGCNVtxFmtInstNrmCmp(unsigned char * mem /* r3 */, struct RpVertexNormal * srcNormal /* r4 */, unsigned int fmt /* r5 */, int numVerts /* r6 */, unsigned int stride /* r7 */) {
    // Local variables
    unsigned int bytesWritten; // r28
    int i; // r27
    float scale; // f31
    signed char * dstNormal; // r29
    struct RwV3d normal; // r1+0x20
    int i; // r26
    float scale; // f30
    signed short * dstNormal; // r31
    struct RwV3d normal; // r1+0x14
    int i; // r25
    struct RwV3d * dstNormal; // r30
    struct RwV3d normal; // r1+0x8

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EBB59
// Range: 0x80426560 -> 0x80426758
unsigned int _rwGCNVtxFmtInstNBT(unsigned char * mem /* r3 */, struct RwV3d * srcNormal /* r4 */, unsigned int fmt /* r5 */, int numVerts /* r6 */, unsigned int stride /* r7 */) {
    // Local variables
    unsigned int bytesWritten; // r28
    int i; // r27
    float scale; // f31
    signed char * dstNormal; // r29
    int i; // r26
    float scale; // f30
    signed short * dstNormal; // r31
    int i; // r25
    struct RwV3d * dstNormal; // r30

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EBB6D
// Range: 0x80426758 -> 0x80426B00
unsigned int _rwGCNVtxFmtInstNBTCmp(unsigned char * mem /* r3 */, struct RpVertexNormal * srcNormal /* r4 */, unsigned int fmt /* r5 */, int numVerts /* r6 */, unsigned int stride /* r7 */) {
    // Local variables
    unsigned int bytesWritten; // r28
    int i; // r27
    float scale; // f31
    signed char * dstNormal; // r29
    struct RwV3d normal; // r1+0x20
    int i; // r26
    float scale; // f30
    signed short * dstNormal; // r31
    struct RwV3d normal; // r1+0x14
    int i; // r25
    struct RwV3d * dstNormal; // r30
    struct RwV3d normal; // r1+0x8

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EBB84
// Range: 0x80426B00 -> 0x80426D90
unsigned int _rwGCNVtxFmtInstClr(unsigned char * mem /* r3 */, struct RwRGBA * srcColor /* r4 */, unsigned int fmt /* r5 */, int numVerts /* r6 */, unsigned int stride /* r7 */) {
    // Local variables
    unsigned int bytesWritten; // r29
    int i; // r25
    unsigned short * dstColor; // r28
    int i; // r24
    unsigned char * dstColor; // r31
    int i; // r23
    unsigned short * dstColor; // r27
    int i; // r22
    unsigned char * dstColor; // r30
    int i; // r1+0x8
    struct RwRGBA * dstColor; // r26

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EBB98
// Range: 0x80426D90 -> 0x80427008
unsigned int _rwGCNVtxFmtInstTex(unsigned char * mem /* r3 */, struct RwTexCoords * srcTexCoord /* r4 */, unsigned int fmt /* r5 */, float scale /* f1 */, int numVerts /* r6 */, unsigned int stride /* r7 */) {
    // Local variables
    unsigned int bytesWritten; // r28
    int i; // r25
    unsigned char * dstTexCoord; // r27
    int i; // r24
    signed char * dstTexCoord; // r26
    int i; // r23
    unsigned short * dstTexCoord; // r31
    int i; // r22
    signed short * dstTexCoord; // r30
    int i; // r1+0x8
    struct RwTexCoords * dstTexCoord; // r29

    // References
    // -> static char __dbFunctionName[20];
}


