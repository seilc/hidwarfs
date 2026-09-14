/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\basector.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80417878 -> 0x80417C80
*/
static char __dbFunctionName[14]; // size: 0xE, address: 0x804EA9E0
static struct RwModuleInfo sectorModule; // size: 0x8, address: 0x80D6C2B8
// Range: 0x80417878 -> 0x804178A4
void * _rpSectorOpen(void * instance /* r3 */) {
    // References
    // -> static struct RwModuleInfo sectorModule;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EA9EE
// Range: 0x804178A4 -> 0x804178D0
void * _rpSectorClose(void * instance /* r3 */) {
    // References
    // -> static struct RwModuleInfo sectorModule;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EA9FD
// Range: 0x804178D0 -> 0x80417984
struct RpWorldSector * RpWorldSectorRender(struct RpWorldSector * sector /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo sectorModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EAA11
// Range: 0x80417984 -> 0x80417A24
struct RwBBox * RpWorldSectorGetTightBBox(const struct RpWorldSector * sector /* r31 */) {
    // References
    // -> static char __dbFunctionName[26];
    // -> static struct RwModuleInfo sectorModule;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EAA2B
// Range: 0x80417A24 -> 0x80417AC4
int RpWorldSectorGetNumVertices(const struct RpWorldSector * sector /* r31 */) {
    // References
    // -> static char __dbFunctionName[28];
    // -> static struct RwModuleInfo sectorModule;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EAA47
// Range: 0x80417AC4 -> 0x80417B98
int RpWorldSectorRegisterPlugin(int size /* r29 */, unsigned int pluginID /* r1+0x8 */, void * (* constructCB)(void *, int, int) /* r1+0xC */, void * (* destructCB)(void *, int, int) /* r1+0x10 */, void * (* copyCB)(void *, void *, int, int) /* r1+0x14 */) {
    // Local variables
    int plug; // r30

    // References
    // -> struct RwPluginRegistry sectorTKList;
    // -> static char __dbFunctionName[28];
    // -> static struct RwModuleInfo sectorModule;
}

static char __dbFunctionName[34]; // size: 0x22, address: 0x804EAA63
// Range: 0x80417B98 -> 0x80417C80
int RpWorldSectorRegisterPluginStream(unsigned int pluginID /* r1+0x8 */, struct RwStream * (* readCB)(struct RwStream *, int, void *, int, int) /* r27 */, struct RwStream * (* writeCB)(struct RwStream *, int, void *, int, int) /* r28 */, int (* getSizeCB)(void *, int, int) /* r29 */) {
    // Local variables
    int plug; // r30

    // References
    // -> struct RwPluginRegistry sectorTKList;
    // -> static char __dbFunctionName[34];
}


