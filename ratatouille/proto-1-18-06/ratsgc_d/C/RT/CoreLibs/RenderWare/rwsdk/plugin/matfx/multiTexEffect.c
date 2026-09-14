/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\matfx\multiTexEffect.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803EF148 -> 0x803F0640
*/
// total size: 0x10
struct RpMTEffectDict {
    // Members
    struct RwLinkList effectList; // offset 0x0, size 0x8
    struct RwLLLink dictListLink; // offset 0x8, size 0x8
};
static struct RpMTEffectDict * DummyDict; // size: 0x4, address: 0x80D6C208
static char __dbFunctionName[22]; // size: 0x16, address: 0x804E89A8
// total size: 0x14
struct EffectRegEntry {
    // Members
    enum RwPlatformID platformID; // offset 0x0, size 0x4
    void (* destroy)(struct RpMTEffect *); // offset 0x4, size 0x4
    struct RpMTEffect * (* streamRead)(struct RwStream *, enum RwPlatformID, unsigned int, unsigned int); // offset 0x8, size 0x4
    struct RpMTEffect * (* streamWrite)(struct RpMTEffect *, struct RwStream *); // offset 0xC, size 0x4
    int (* streamGetSize)(struct RpMTEffect *); // offset 0x10, size 0x4
};
static struct EffectRegEntry EffectRegEntries[10]; // size: 0xC8, address: 0x80D5BFF0
// Range: 0x803EF148 -> 0x803EF194
int _rpMTEffectSystemInit() {
    // References
    // -> static struct EffectRegEntry EffectRegEntries[10];
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E89BE
// Range: 0x803EF194 -> 0x803EF2B8
int _rpMTEffectRegisterPlatform(enum RwPlatformID platformID /* r29 */, struct RpMTEffect * (* streamRead)(struct RwStream *, enum RwPlatformID, unsigned int, unsigned int) /* r26 */, struct RpMTEffect * (* streamWrite)(struct RpMTEffect *, struct RwStream *) /* r27 */, int (* streamGetSize)(struct RpMTEffect *) /* r28 */, void (* destroy)(struct RpMTEffect *) /* r1+0x8 */) {
    // Local variables
    struct EffectRegEntry * regEntry; // r31

    // References
    // -> static struct EffectRegEntry EffectRegEntries[10];
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E89DA
// Range: 0x803EF2B8 -> 0x803EF4B4
int _rpMTEffectOpen() {
    // Local variables
    unsigned int pathSize; // r29
    unsigned int totalSize; // r31
    char * path; // r30
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> struct RwModuleInfo _rpMultiTextureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[16];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static struct RpMTEffectDict * DummyDict;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E89EA
// Range: 0x803EF4B4 -> 0x803EF628
int _rpMTEffectClose() {
    // Local variables
    struct Iterator iter; // r1+0x8
    int effectDictsExistOnShutdown; // r31
    const struct RpMTEffectDict * dict; // r30

    // References
    // -> static char __dbFunctionName[17];
    // -> struct RwModuleInfo _rpMultiTextureModule;
    // -> void * RwEngineInstance;
    // -> static struct RpMTEffectDict * DummyDict;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E89FB
// Range: 0x803EF628 -> 0x803EF704
struct RpMTEffect * _rpMTEffectInit(struct RpMTEffect * effect /* r31 */, enum RwPlatformID platformID /* r29 */) {
    // References
    // -> struct RwModuleInfo _rpMultiTextureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E8A0B
// Range: 0x803EF704 -> 0x803EF8C0
struct RpMTEffectDict * RpMTEffectDictCreate() {
    // Local variables
    struct RpMTEffectDict * dict; // r31
    unsigned int size; // r30
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> struct RwModuleInfo _rpMultiTextureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[21];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E8A20
union RpPtrMTEffect {
    struct RpMTEffect * ptrMTEffect; // offset 0x0, size 0x4
    const struct RpMTEffect * constptrMTEffect; // offset 0x0, size 0x4
};
// Range: 0x803EF8C0 -> 0x803EF9FC
void RpMTEffectDictDestroy(struct RpMTEffectDict * dict /* r31 */) {
    // Local variables
    struct Iterator iter; // r1+0xC
    union RpPtrMTEffect PtrMTEffect; // r1+0x8

    // References
    // -> void * RwEngineInstance;
    // -> struct RwModuleInfo _rpMultiTextureModule;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E8A36
// Range: 0x803EF9FC -> 0x803EFB24
struct RpMTEffectDict * RpMTEffectDictAddEffect(struct RpMTEffectDict * dict /* r30 */, struct RpMTEffect * effect /* r31 */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E8A4E
// Range: 0x803EFB24 -> 0x803EFBF8
struct RpMTEffect * RpMTEffectDictRemoveEffect(struct RpMTEffect * effect /* r31 */) {
    // References
    // -> static char __dbFunctionName[27];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E8A69
// Range: 0x803EFBF8 -> 0x803EFD30
struct RpMTEffect * RpMTEffectDictFindNamedEffect(const struct RpMTEffectDict * dict /* r31 */, const char * name /* r30 */) {
    // Local variables
    struct Iterator iter; // r1+0xC
    union RpPtrMTEffect PtrMTEffect; // r1+0x8

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[30];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E8A87
// Range: 0x803EFD30 -> 0x803EFEA8
struct RpMTEffect * RpMTEffectCreateDummy() {
    // Local variables
    struct RpMTEffect * effect; // r30
    unsigned int size; // r31
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[22];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E8A9D
// Range: 0x803EFEA8 -> 0x803EFFE0
void RpMTEffectDestroy(struct RpMTEffect * effect /* r31 */) {
    // Local variables
    struct EffectRegEntry * regEntry; // r30

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[18];
    // -> static struct EffectRegEntry EffectRegEntries[10];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

// total size: 0x4
struct BinaryEffect {
    // Members
    unsigned int platformID; // offset 0x0, size 0x4
};
static char __dbFunctionName[21]; // size: 0x15, address: 0x804E8AAF
// Range: 0x803EFFE0 -> 0x803F01A4
struct RpMTEffect * RpMTEffectStreamRead(struct RwStream * stream /* r31 */) {
    // Local variables
    struct BinaryEffect binEffect; // r1+0x10
    struct EffectRegEntry * regEntry; // r30
    struct RpMTEffect * effect; // r29
    char name[32]; // r1+0x14
    unsigned int version; // r1+0xC
    unsigned int length; // r1+0x8

    // References
    // -> static struct EffectRegEntry EffectRegEntries[10];
    // -> static char __dbFunctionName[21];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804E8AC4
// Range: 0x803F01A4 -> 0x803F03F0
struct RpMTEffect * RpMTEffectFind(char * name /* r29 */) {
    // Local variables
    struct RpMTEffect * effect; // r31
    struct RwStream * stream; // r30
    char * scratch; // r28
    struct Iterator iter; // r1+0x8
    const struct RpMTEffectDict * dict; // r26

    // References
    // -> void * RwEngineInstance;
    // -> struct RwModuleInfo _rpMultiTextureModule;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E8AD3
// Range: 0x803F03F0 -> 0x803F04F4
struct RpMTEffect * RpMTEffectSetName(struct RpMTEffect * effect /* r29 */, char * name /* r30 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[18];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E8AE5
// Range: 0x803F04F4 -> 0x803F0594
char * RpMTEffectGetName(struct RpMTEffect * effect /* r31 */) {
    // References
    // -> static char __dbFunctionName[18];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E8AF7
// Range: 0x803F0594 -> 0x803F0640
struct RpMTEffect * RpMTEffectAddRef(struct RpMTEffect * effect /* r31 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> struct RwModuleInfo _rpMultiTextureModule;
}


