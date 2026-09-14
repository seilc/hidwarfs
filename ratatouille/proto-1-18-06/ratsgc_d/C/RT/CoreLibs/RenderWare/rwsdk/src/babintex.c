/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\babintex.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8043DEA0 -> 0x8043EAF8
*/
static char __dbFunctionName[30]; // size: 0x1E, address: 0x804ED348
struct RwPluginRegistry textureTKList; // size: 0x18, address: 0x80557B78
// Range: 0x8043DEA0 -> 0x8043DF94
int RwTextureRegisterPluginStream(unsigned int pluginID /* r1+0x8 */, struct RwStream * (* readCB)(struct RwStream *, int, void *, int, int) /* r28 */, struct RwStream * (* writeCB)(struct RwStream *, int, void *, int, int) /* r29 */, int (* getSizeCB)(void *, int, int) /* r30 */) {
    // Local variables
    int plug; // r31

    // References
    // -> struct RwPluginRegistry textureTKList;
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ED366
// Range: 0x8043DF94 -> 0x8043E044
unsigned int RwTextureStreamGetSize(const struct RwTexture * texture /* r30 */) {
    // Local variables
    unsigned int size; // r31

    // References
    // -> struct RwPluginRegistry textureTKList;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804ED37D
enum RwTextureStreamFlags {
    rwNATEXTURESTREAMFLAG = 0,
    rwTEXTURESTREAMFLAGSUSERMIPMAPS = 1,
    rwTEXTURESTREAMFLAGSFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
struct _rwStreamTexture {
    // Members
    unsigned int filterAndAddress; // offset 0x0, size 0x4
};
// Range: 0x8043E044 -> 0x8043E210
struct RwTexture * RwTextureStreamWrite(const struct RwTexture * texture /* r31 */, struct RwStream * stream /* r30 */) {
    // Local variables
    enum RwTextureStreamFlags flags; // r29
    struct _rwStreamTexture texFiltAddr; // r1+0x8

    // References
    // -> struct RwPluginRegistry textureTKList;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804ED392
// Range: 0x8043E210 -> 0x8043E5AC
struct RwTexture * RwTextureStreamRead(struct RwStream * stream /* r30 */) {
    // Local variables
    unsigned int size; // r1+0x10
    unsigned int version; // r1+0xC
    struct RwTexture * texture; // r31
    char textureName[128]; // r1+0x9C
    char textureMask[128]; // r1+0x1C
    enum RwTextureFilterMode filtering; // r28
    enum RwTextureAddressMode addressingU; // r24
    enum RwTextureAddressMode addressingV; // r25
    struct _rwStreamTexture texFiltAddr; // r1+0x8
    int mipmapState; // r27
    int autoMipmapState; // r26
    enum RwTextureStreamFlags flags; // r23
    struct RwError _rwErrorCode; // r1+0x14

    // References
    // -> static char __dbFunctionName[20];
    // -> struct RwPluginRegistry textureTKList;
}

struct RwPluginRegistry texDictTKList; // size: 0x18, address: 0x80557B90
// total size: 0x4
struct _rwStreamTexDictionary {
    // Members
    unsigned short deviceId; // offset 0x0, size 0x2
    unsigned short numTextures; // offset 0x2, size 0x2
};
// total size: 0x38
struct RwDevice {
    // Members
    float gammaCorrection; // offset 0x0, size 0x4
    int (* fpSystem)(int, void *, void *, int); // offset 0x4, size 0x4
    float zBufferNear; // offset 0x8, size 0x4
    float zBufferFar; // offset 0xC, size 0x4
    int (* fpRenderStateSet)(enum RwRenderState, void *); // offset 0x10, size 0x4
    int (* fpRenderStateGet)(enum RwRenderState, void *); // offset 0x14, size 0x4
    int (* fpIm2DRenderLine)(// total size: 0x18
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
    } *, int, int, int); // offset 0x18, size 0x4
    int (* fpIm2DRenderTriangle)(// total size: 0x18
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
    } *, int, int, int, int); // offset 0x1C, size 0x4
    int (* fpIm2DRenderPrimitive)(enum RwPrimitiveType, // total size: 0x18
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
    } *, int); // offset 0x20, size 0x4
    int (* fpIm2DRenderIndexedPrimitive)(enum RwPrimitiveType, // total size: 0x18
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
    } *, int, unsigned short *, int); // offset 0x24, size 0x4
    int (* fpIm3DRenderLine)(int, int); // offset 0x28, size 0x4
    int (* fpIm3DRenderTriangle)(int, int, int); // offset 0x2C, size 0x4
    int (* fpIm3DRenderPrimitive)(enum RwPrimitiveType); // offset 0x30, size 0x4
    int (* fpIm3DRenderIndexedPrimitive)(enum RwPrimitiveType, unsigned short *, int); // offset 0x34, size 0x4
};
static char __dbFunctionName[15]; // size: 0xF, address: 0x804ED3A6
// Range: 0x8043E5AC -> 0x8043E620
static struct RwTexture * destroyTexture(struct RwTexture * texture /* r31 */) {
    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804ED3B5
// Range: 0x8043E620 -> 0x8043EAF8
struct RwTexDictionary * RwTexDictionaryStreamRead(struct RwStream * stream /* r29 */) {
    // Local variables
    unsigned int size; // r1+0x18
    unsigned int version; // r1+0x14
    struct RwTexDictionary * texDict; // r31
    struct _rwStreamTexDictionary binTexDict; // r1+0x10
    struct RwDevice * const device; // r28
    unsigned short myId; // r1+0x8
    struct RwTexture * newTex; // r1+0xC
    struct RwError _rwErrorCode; // r1+0x24
    struct RwError _rwErrorCode; // r1+0x1C

    // References
    // -> static char __dbFunctionName[26];
    // -> struct RwPluginRegistry texDictTKList;
    // -> struct RwPluginRegistry textureTKList;
    // -> void * RwEngineInstance;
}


