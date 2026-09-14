/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\baraster.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80448DAC -> 0x8044A830
*/
static struct RwPluginRegistry rasterTKList; // size: 0x18, address: 0x805575D8
static char __dbFunctionName[17]; // size: 0x11, address: 0x804EDCB0
static struct RwModuleInfo rasterModule; // size: 0x8, address: 0x80D6C388
// Range: 0x80448DAC -> 0x80448E4C
int RwRasterGetWidth(const struct RwRaster * raster /* r31 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EDCC1
// Range: 0x80448E4C -> 0x80448EEC
int RwRasterGetHeight(const struct RwRaster * raster /* r31 */) {
    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EDCD3
// Range: 0x80448EEC -> 0x80448FBC
int RwRasterGetStride(const struct RwRaster * raster /* r31 */) {
    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EDCE5
// Range: 0x80448FBC -> 0x8044905C
int RwRasterGetDepth(const struct RwRaster * raster /* r31 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EDCF6
// Range: 0x8044905C -> 0x80449104
int RwRasterGetFormat(const struct RwRaster * raster /* r31 */) {
    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EDD08
// Range: 0x80449104 -> 0x804491A8
int RwRasterGetType(const struct RwRaster * raster /* r31 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EDD18
// Range: 0x804491A8 -> 0x80449248
struct RwRaster * RwRasterGetParent(const struct RwRaster * raster /* r31 */) {
    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EDD2A
// Range: 0x80449248 -> 0x80449334
struct RwRaster * RwRasterUnlock(struct RwRaster * raster /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EDD39
// Range: 0x80449334 -> 0x8044947C
int RwRasterClear(int pixelValue /* r1+0x8 */) {
    // Local variables
    int result; // r31
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[14];
    // -> void * RwEngineInstance;
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EDD47
// Range: 0x8044947C -> 0x804495B4
struct RwRaster * RwRasterRenderFast(struct RwRaster * raster /* r30 */, int x /* r1+0x8 */, int y /* r1+0xC */) {
    // Local variables
    struct RwRect rRect; // r1+0x10

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EDD5A
// Range: 0x804495B4 -> 0x804496D8
struct RwRaster * RwRasterUnlockPalette(struct RwRaster * raster /* r31 */) {
    // Local variables
    int (* RasterUnlockPaletteFunc)(void *, void *, int); // r29

    // References
    // -> static char __dbFunctionName[22];
    // -> void * RwEngineInstance;
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EDD70
// Range: 0x804496D8 -> 0x804497C8
int RwRasterDestroy(struct RwRaster * raster /* r31 */) {
    // References
    // -> static struct RwModuleInfo rasterModule;
    // -> void * RwEngineInstance;
    // -> static struct RwPluginRegistry rasterTKList;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EDD80
// Range: 0x804497C8 -> 0x8044994C
struct RwRaster * RwRasterPushContext(struct RwRaster * raster /* r30 */) {
    // Local variables
    int top; // r29

    // References
    // -> static struct RwModuleInfo rasterModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EDD94
// Range: 0x8044994C -> 0x80449A20
int RwRasterRegisterPlugin(int size /* r29 */, unsigned int pluginID /* r1+0x8 */, void * (* constructCB)(void *, int, int) /* r1+0xC */, void * (* destructCB)(void *, int, int) /* r1+0x10 */, void * (* copyCB)(void *, void *, int, int) /* r1+0x14 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry rasterTKList;
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EDDAB
// Range: 0x80449A20 -> 0x80449B20
unsigned char * RwRasterLockPalette(struct RwRaster * raster /* r31 */, int lockMode /* r1+0x8 */) {
    // Local variables
    unsigned char * palettePtr; // r1+0xC

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EDDBF
// Range: 0x80449B20 -> 0x80449CC8
struct RwRaster * RwRasterPopContext() {
    // Local variables
    int top; // r30
    struct RwRaster * raster; // r28
    int (* SetRasterContextFunc)(void *, void *, int); // r29
    struct RwRaster * StackTop; // r27

    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo rasterModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EDDD2
// Range: 0x80449CC8 -> 0x80449DDC
int RwRasterGetNumLevels(struct RwRaster * raster /* r29 */) {
    // Local variables
    int (* GetMipLevelsFunc)(void *, void *, int); // r30
    int numMipLevels; // r1+0x8

    // References
    // -> static char __dbFunctionName[21];
    // -> void * RwEngineInstance;
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EDDE7
// Range: 0x80449DDC -> 0x80449F08
struct RwRaster * RwRasterShowRaster(struct RwRaster * raster /* r30 */, void * dev /* r1+0x8 */, unsigned int flags /* r1+0xC */) {
    // Local variables
    int (* RasterShowRasterFunc)(void *, void *, int); // r29

    // References
    // -> static char __dbFunctionName[19];
    // -> void * RwEngineInstance;
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EDDFA
// Range: 0x80449F08 -> 0x8044A160
struct RwRaster * RwRasterSubRaster(struct RwRaster * subRaster /* r29 */, struct RwRaster * raster /* r30 */, struct RwRect * rect /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EDE0C
// Range: 0x8044A160 -> 0x8044A398
struct RwRaster * RwRasterCreate(int width /* r26 */, int height /* r27 */, int depth /* r28 */, int flags /* r1+0x8 */) {
    // Local variables
    struct RwRaster * raster; // r31
    int (* const RasterCreateFunc)(void *, void *, int); // r29

    // References
    // -> static struct RwPluginRegistry rasterTKList;
    // -> static struct RwModuleInfo rasterModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EDE1B
// Range: 0x8044A398 -> 0x8044A618
unsigned char * RwRasterLock(struct RwRaster * raster /* r31 */, unsigned char level /* r29 */, int lockMode /* r28 */) {
    // Local variables
    unsigned char * pixelPtr; // r1+0x8
    struct RwError _rwErrorCode; // r1+0x14
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[13];
    // -> static struct RwModuleInfo rasterModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EDE28
// Range: 0x8044A618 -> 0x8044A6A4
void * _rwRasterClose(void * instance /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo rasterModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[15];
}

static int _rwRasterFreeListBlockSize; // size: 0x4, address: 0x80D689AC
static int _rwRasterFreeListPreallocBlocks; // size: 0x4, address: 0x80D689B0
static char __dbFunctionName[14]; // size: 0xE, address: 0x804EDE37
static struct RwFreeList _rwRasterFreeList; // size: 0x30, address: 0x80D5D8A0
// Range: 0x8044A6A4 -> 0x8044A830
void * _rwRasterOpen(void * instance /* r1+0x8 */, int offset /* r1+0xC */) {
    // References
    // -> static struct RwModuleInfo rasterModule;
    // -> void * RwEngineInstance;
    // -> static struct RwFreeList _rwRasterFreeList;
    // -> static int _rwRasterFreeListPreallocBlocks;
    // -> static int _rwRasterFreeListBlockSize;
    // -> static struct RwPluginRegistry rasterTKList;
    // -> static char __dbFunctionName[14];
}


