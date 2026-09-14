/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\matfx\multiTex.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803EDC48 -> 0x803EF148
*/
struct RwModuleInfo _rpMultiTextureModule; // size: 0x8, address: 0x80D683E8
static char __dbFunctionName[17]; // size: 0x11, address: 0x804E87A8
// Range: 0x803EDC48 -> 0x803EDC98
static void * MultiTextureOpen(void * object /* r1+0x8 */) {
    // References
    // -> struct RwModuleInfo _rpMultiTextureModule;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E87B9
// Range: 0x803EDC98 -> 0x803EDCE8
static void * MultiTextureClose(void * object /* r1+0x8 */) {
    // References
    // -> struct RwModuleInfo _rpMultiTextureModule;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E87CB
// Range: 0x803EDCE8 -> 0x803EDE88
static struct RpMultiTexture * MultiTextureCreate(struct rpMultiTextureRegEntry * regEntry /* r29 */, unsigned int numTextures /* r1+0x8 */) {
    // Local variables
    unsigned int size; // r30
    struct RpMultiTexture * multiTexture; // r31
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[19];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E87DE
// Range: 0x803EDE88 -> 0x803EDF4C
static void MultiTextureDestroy(struct RpMultiTexture * multiTexture /* r31 */) {
    // Local variables
    unsigned int i; // r30

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E87F2
// total size: 0x4
struct _MultiTextureExt {
    // Members
    struct RpMultiTexture * multiTexture; // offset 0x0, size 0x4
};
// Range: 0x803EDF4C -> 0x803EDFD4
static void * MultiTextureConstructor(void * object /* r30 */, int offset /* r1+0x8 */) {
    // Local variables
    struct _MultiTextureExt * ext; // r31

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E880A
// Range: 0x803EDFD4 -> 0x803EE070
static void * MultiTextureDestructor(void * object /* r30 */, int offset /* r1+0x8 */) {
    // Local variables
    struct _MultiTextureExt * ext; // r31

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E8821
// Range: 0x803EE070 -> 0x803EE1B0
static void * MultiTextureCopy(void * dstObject /* r28 */, void * srcObject /* r25 */, int offset /* r26 */) {
    // Local variables
    const struct RpMultiTexture * srcMT; // r31
    struct RpMultiTexture * dstMT; // r29
    unsigned int i; // r30

    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E8832
// Range: 0x803EE1B0 -> 0x803EE294
static int MultiTextureStreamGetSize(void * object /* r28 */, int offset /* r1+0x8 */) {
    // Local variables
    struct RpMultiTexture * multiTexture; // r31
    unsigned int size; // r30
    unsigned int i; // r29

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E884C
// total size: 0x4
struct _MultiTextureStreamHdr {
    // Members
    unsigned char platformID; // offset 0x0, size 0x1
    unsigned char numTextures; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// Range: 0x803EE294 -> 0x803EE458
static struct RwStream * MultiTextureStreamWrite(struct RwStream * stream /* r30 */, void * object /* r27 */, int offset /* r1+0x8 */) {
    // Local variables
    struct RpMultiTexture * multiTexture; // r31
    unsigned int version; // r1+0x10
    struct _MultiTextureStreamHdr header; // r1+0xC
    unsigned int i; // r29

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E8864
struct rpMultiTextureRegEntry RegEntries[10]; // size: 0xA0, address: 0x80D5BF50
// Range: 0x803EE458 -> 0x803EE6F4
static struct RwStream * MultiTextureStreamRead(struct RwStream * stream /* r29 */, void * object /* r25 */, int offset /* r1+0x8 */) {
    // Local variables
    unsigned int version; // r1+0x10
    struct _MultiTextureStreamHdr header; // r1+0xC
    struct rpMultiTextureRegEntry * regEntry; // r26
    struct RpMultiTexture * multiTexture; // r31
    unsigned int i; // r27
    char name[32]; // r1+0x14
    struct RpMTEffect * effect; // r30

    // References
    // -> static char __dbFunctionName[23];
    // -> struct rpMultiTextureRegEntry RegEntries[10];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E887B
// Range: 0x803EE6F4 -> 0x803EE788
int _rpMultiTexturePluginAttach() {
    // References
    // -> struct RwModuleInfo _rpMultiTextureModule;
    // -> struct rpMultiTextureRegEntry RegEntries[10];
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[38]; // size: 0x26, address: 0x804E8897
// Range: 0x803EE788 -> 0x803EE8BC
int _rpMaterialRegisterMultiTexturePlugin(enum RwPlatformID platformID /* r27 */, unsigned int pluginID /* r29 */, unsigned int extensionSize /* r1+0x8 */) {
    // Local variables
    int offset; // r30
    struct rpMultiTextureRegEntry * regEntry; // r31

    // References
    // -> struct rpMultiTextureRegEntry RegEntries[10];
    // -> static char __dbFunctionName[38];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804E88BD
// Range: 0x803EE8BC -> 0x803EE960
unsigned int RpMultiTextureGetNumTextures(const struct RpMultiTexture * multiTexture /* r30 */) {
    // References
    // -> static char __dbFunctionName[29];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E88DA
// Range: 0x803EE960 -> 0x803EEA6C
struct RpMultiTexture * RpMultiTextureSetEffect(struct RpMultiTexture * multiTexture /* r31 */, struct RpMTEffect * effect /* r30 */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E88F2
// Range: 0x803EEA6C -> 0x803EEB10
struct RpMTEffect * RpMultiTextureGetEffect(const struct RpMultiTexture * multiTexture /* r30 */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E890A
// Range: 0x803EEB10 -> 0x803EEC24
struct RpMultiTexture * RpMultiTextureSetTexture(struct RpMultiTexture * multiTexture /* r31 */, unsigned int index /* r29 */, struct RwTexture * texture /* r28 */) {
    // References
    // -> static char __dbFunctionName[25];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E8923
// Range: 0x803EEC24 -> 0x803EECFC
struct RwTexture * RpMultiTextureGetTexture(const struct RpMultiTexture * multiTexture /* r30 */, unsigned int index /* r29 */) {
    // References
    // -> static char __dbFunctionName[25];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E893C
// Range: 0x803EECFC -> 0x803EEE00
struct RpMultiTexture * RpMultiTextureSetCoords(struct RpMultiTexture * multiTexture /* r30 */, unsigned int index /* r29 */, unsigned int texCoordIndex /* r28 */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E8954
// Range: 0x803EEE00 -> 0x803EEED4
unsigned int RpMultiTextureGetCoords(const struct RpMultiTexture * multiTexture /* r30 */, unsigned int index /* r29 */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804E896C
// Range: 0x803EEED4 -> 0x803EF050
struct RpMaterial * RpMaterialCreateMultiTexture(struct RpMaterial * material /* r27 */, enum RwPlatformID platformID /* r28 */, unsigned int numTextures /* r26 */) {
    // Local variables
    struct rpMultiTextureRegEntry * regEntry; // r29
    struct _MultiTextureExt * ext; // r30

    // References
    // -> struct rpMultiTextureRegEntry RegEntries[10];
    // -> static char __dbFunctionName[29];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E8989
// Range: 0x803EF050 -> 0x803EF148
struct RpMultiTexture * RpMaterialGetMultiTexture(const struct RpMaterial * material /* r27 */, enum RwPlatformID platformID /* r28 */) {
    // Local variables
    struct rpMultiTextureRegEntry * regEntry; // r30
    const struct _MultiTextureExt * ext; // r29

    // References
    // -> struct rpMultiTextureRegEntry RegEntries[10];
    // -> static char __dbFunctionName[26];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}


