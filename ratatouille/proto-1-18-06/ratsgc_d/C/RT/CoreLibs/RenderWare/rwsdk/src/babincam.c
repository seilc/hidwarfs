/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\babincam.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8043C97C -> 0x8043CF08
*/
static char __dbFunctionName[29]; // size: 0x1D, address: 0x804ED1F0
struct RwPluginRegistry cameraTKList; // size: 0x18, address: 0x80556778
// Range: 0x8043C97C -> 0x8043CA70
int RwCameraRegisterPluginStream(unsigned int pluginID /* r1+0x8 */, struct RwStream * (* readCB)(struct RwStream *, int, void *, int, int) /* r28 */, struct RwStream * (* writeCB)(struct RwStream *, int, void *, int, int) /* r29 */, int (* getSizeCB)(void *, int, int) /* r30 */) {
    // Local variables
    int plug; // r31

    // References
    // -> struct RwPluginRegistry cameraTKList;
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804ED20D
// Range: 0x8043CA70 -> 0x8043CB00
unsigned int RwCameraStreamGetSize(const struct RwCamera * camera /* r30 */) {
    // Local variables
    unsigned int size; // r31

    // References
    // -> struct RwPluginRegistry cameraTKList;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804ED223
// total size: 0x20
struct rwStreamCamera {
    // Members
    struct RwV2d viewWindow; // offset 0x0, size 0x8
    struct RwV2d viewOffset; // offset 0x8, size 0x8
    float nearPlane; // offset 0x10, size 0x4
    float farPlane; // offset 0x14, size 0x4
    float fogPlane; // offset 0x18, size 0x4
    unsigned int projection; // offset 0x1C, size 0x4
};
// Range: 0x8043CB00 -> 0x8043CCB4
struct RwCamera * RwCameraStreamWrite(const struct RwCamera * camera /* r31 */, struct RwStream * stream /* r30 */) {
    // Local variables
    struct rwStreamCamera cam; // r1+0x8
    const struct RwV2d * v2d; // r29
    enum RwCameraProjection projection; // r28

    // References
    // -> struct RwPluginRegistry cameraTKList;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804ED237
// Range: 0x8043CCB4 -> 0x8043CF08
struct RwCamera * RwCameraStreamRead(struct RwStream * stream /* r30 */) {
    // Local variables
    struct RwCamera * camera; // r31
    struct rwStreamCamera cam; // r1+0x18
    unsigned int size; // r1+0xC
    unsigned int version; // r1+0x8
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[19];
    // -> struct RwPluginRegistry cameraTKList;
}


