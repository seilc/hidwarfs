/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\baimmedi.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80430AE0 -> 0x804310A4
*/
static char __dbFunctionName[18]; // size: 0x12, address: 0x804EC740
// Range: 0x80430AE0 -> 0x80430C20
static int validate_vertices(const unsigned short * indices /* r25 */, int numIndices /* r26 */, int numVertices /* r23 */) {
    // Local variables
    int result; // r29
    int i; // r30
    unsigned short vertIndex; // r24
    int validIndex; // r28

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EC752
// Range: 0x80430C20 -> 0x80430C44
float RwIm2DGetNearScreenZ() {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EC767
// Range: 0x80430C44 -> 0x80430C68
float RwIm2DGetFarScreenZ() {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EC77B
static char __func__[17]; // size: 0x11, address: 0x8055453E
enum RwRenderState {
    rwRENDERSTATENARENDERSTATE = 0,
    rwRENDERSTATETEXTURERASTER = 1,
    rwRENDERSTATETEXTUREADDRESS = 2,
    rwRENDERSTATETEXTUREADDRESSU = 3,
    rwRENDERSTATETEXTUREADDRESSV = 4,
    rwRENDERSTATETEXTUREPERSPECTIVE = 5,
    rwRENDERSTATEZTESTENABLE = 6,
    rwRENDERSTATESHADEMODE = 7,
    rwRENDERSTATEZWRITEENABLE = 8,
    rwRENDERSTATETEXTUREFILTER = 9,
    rwRENDERSTATESRCBLEND = 10,
    rwRENDERSTATEDESTBLEND = 11,
    rwRENDERSTATEVERTEXALPHAENABLE = 12,
    rwRENDERSTATEBORDERCOLOR = 13,
    rwRENDERSTATEFOGENABLE = 14,
    rwRENDERSTATEFOGCOLOR = 15,
    rwRENDERSTATEFOGTYPE = 16,
    rwRENDERSTATEFOGDENSITY = 17,
    rwRENDERSTATECULLMODE = 20,
    rwRENDERSTATESTENCILENABLE = 21,
    rwRENDERSTATESTENCILFAIL = 22,
    rwRENDERSTATESTENCILZFAIL = 23,
    rwRENDERSTATESTENCILPASS = 24,
    rwRENDERSTATESTENCILFUNCTION = 25,
    rwRENDERSTATESTENCILFUNCTIONREF = 26,
    rwRENDERSTATESTENCILFUNCTIONMASK = 27,
    rwRENDERSTATESTENCILFUNCTIONWRITEMASK = 28,
    rwRENDERSTATEALPHATESTFUNCTION = 29,
    rwRENDERSTATEALPHATESTFUNCTIONREF = 30,
    rwRENDERSTATEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x80430C68 -> 0x80430D20
int RwRenderStateSet(enum RwRenderState state /* r1+0x8 */, void * value /* r1+0xC */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __func__[17];
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EC78C
// Range: 0x80430D20 -> 0x80430D74
int RwRenderStateGet(enum RwRenderState state /* r1+0x8 */, void * value /* r1+0xC */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EC79D
// Range: 0x80430D74 -> 0x80430E80
int RwIm2DRenderLine(// total size: 0x18
struct {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char r; // offset 0xC, size 0x1
    unsigned char g; // offset 0xD, size 0x1
    unsigned char b; // offset 0xE, size 0x1
    unsigned char a; // offset 0xF, size 0x1
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
} * vertices /* r27 */, int numVertices /* r30 */, int vert1 /* r28 */, int vert2 /* r29 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EC7AE
// Range: 0x80430E80 -> 0x80430F3C
int RwIm2DRenderPrimitive(enum RwPrimitiveType primType /* r1+0x8 */, // total size: 0x18
struct {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char r; // offset 0xC, size 0x1
    unsigned char g; // offset 0xD, size 0x1
    unsigned char b; // offset 0xE, size 0x1
    unsigned char a; // offset 0xF, size 0x1
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
} * vertices /* r29 */, int numVertices /* r30 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EC7C4
// Range: 0x80430F3C -> 0x804310A4
int RwIm2DRenderIndexedPrimitive(enum RwPrimitiveType primType /* r1+0x8 */, // total size: 0x18
struct {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char r; // offset 0xC, size 0x1
    unsigned char g; // offset 0xD, size 0x1
    unsigned char b; // offset 0xE, size 0x1
    unsigned char a; // offset 0xF, size 0x1
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
} * vertices /* r26 */, int numVertices /* r29 */, unsigned short * indices /* r28 */, int numIndices /* r30 */) {
    // Local variables
    int result; // r27

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[29];
}


