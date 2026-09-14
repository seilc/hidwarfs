/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\badevice.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804428D0 -> 0x80443968
*/
static unsigned int engineInstancesOpened; // size: 0x4, address: 0x80D6C370
static struct RwPluginRegistry engineTKList; // size: 0x18, address: 0x80556BF0
signed char _rwMsbBit[256]; // size: 0x100, address: 0x80556C08
static char __dbFunctionName[17]; // size: 0x11, address: 0x804ED710
// Range: 0x804428D0 -> 0x80442AEC
static int CorePluginAttach() {
    // Local variables
    int state; // r31

    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ED721
// Range: 0x80442AEC -> 0x80442B6C
static void * MallocWrapper(struct RwFreeList * fl /* r30 */, unsigned int hint /* r1+0x8 */) {
    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804ED72F
// Range: 0x80442B6C -> 0x80442BC0
static struct RwFreeList * FreeWrapper(struct RwFreeList * fl /* r1+0x8 */, void * pData /* r1+0xC */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804ED73B
// total size: 0x44
struct RwStringFunctions {
    // Members
    int (* vecSprintf)(char *, char *); // offset 0x0, size 0x4
    int (* vecVsprintf)(char *, char *, struct __va_list_struct *); // offset 0x4, size 0x4
    char * (* vecStrcpy)(char *, char *); // offset 0x8, size 0x4
    char * (* vecStrncpy)(char *, char *, unsigned long); // offset 0xC, size 0x4
    char * (* vecStrcat)(char *, char *); // offset 0x10, size 0x4
    char * (* vecStrncat)(char *, char *, unsigned long); // offset 0x14, size 0x4
    char * (* vecStrrchr)(char *, int); // offset 0x18, size 0x4
    char * (* vecStrchr)(char *, int); // offset 0x1C, size 0x4
    char * (* vecStrstr)(char *, char *); // offset 0x20, size 0x4
    int (* vecStrcmp)(char *, char *); // offset 0x24, size 0x4
    int (* vecStrncmp)(char *, char *, unsigned long); // offset 0x28, size 0x4
    int (* vecStricmp)(char *, char *); // offset 0x2C, size 0x4
    unsigned long (* vecStrlen)(char *); // offset 0x30, size 0x4
    char * (* vecStrupr)(char *); // offset 0x34, size 0x4
    char * (* vecStrlwr)(char *); // offset 0x38, size 0x4
    char * (* vecStrtok)(char *, char *); // offset 0x3C, size 0x4
    int (* vecSscanf)(char *, char *); // offset 0x40, size 0x4
};
// total size: 0x1C
struct RwMetrics {
    // Members
    unsigned int numTriangles; // offset 0x0, size 0x4
    unsigned int numProcTriangles; // offset 0x4, size 0x4
    unsigned int numVertices; // offset 0x8, size 0x4
    unsigned int numTextureUploads; // offset 0xC, size 0x4
    unsigned int sizeTextureUploads; // offset 0x10, size 0x4
    unsigned int numResourceAllocs; // offset 0x14, size 0x4
    void * devSpecificMetrics; // offset 0x18, size 0x4
};
enum RwEngineStatus {
    rwENGINESTATUSIDLE = 0,
    rwENGINESTATUSINITED = 1,
    rwENGINESTATUSOPENED = 2,
    rwENGINESTATUSSTARTED = 3,
    rwENGINESTATUSFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x13C
struct RwGlobals {
    // Members
    void (* debugFunction)(enum RwDebugType, char *); // offset 0x0, size 0x4
    int debugStackDepth; // offset 0x4, size 0x4
    int debugTrace; // offset 0x8, size 0x4
    void * curCamera; // offset 0xC, size 0x4
    void * curWorld; // offset 0x10, size 0x4
    unsigned short renderFrame; // offset 0x14, size 0x2
    unsigned short lightFrame; // offset 0x16, size 0x2
    unsigned short pad[2]; // offset 0x18, size 0x4
    struct RwDevice dOpenDevice; // offset 0x1C, size 0x38
    int (* stdFunc[29])(void *, void *, int); // offset 0x54, size 0x74
    struct RwLinkList dirtyFrameList; // offset 0xC8, size 0x8
    struct RwStringFunctions stringFuncs; // offset 0xD0, size 0x44
    struct RwMemoryFunctions memoryFuncs; // offset 0x114, size 0x10
    int freeListExtraDebug; // offset 0x124, size 0x4
    void * (* memoryAlloc)(struct RwFreeList *, unsigned int); // offset 0x128, size 0x4
    struct RwFreeList * (* memoryFree)(struct RwFreeList *, void *); // offset 0x12C, size 0x4
    struct RwMetrics * metrics; // offset 0x130, size 0x4
    enum RwEngineStatus engineStatus; // offset 0x134, size 0x4
    unsigned int resArenaInitSize; // offset 0x138, size 0x4
};
static struct RwGlobals staticGlobals; // size: 0x13C, address: 0x80D5D6D0
// total size: 0x4
struct RwEngineOpenParams {
    // Members
    void * displayID; // offset 0x0, size 0x4
};
// Range: 0x80442BC0 -> 0x80442DE4
static int EngineOpen(struct RwDevice * device /* r30 */, struct RwEngineOpenParams * initParams /* r1+0x8 */) {
    // Local variables
    void * instance; // r31
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static struct RwPluginRegistry engineTKList;
    // -> static char __dbFunctionName[11];
    // -> static struct RwGlobals staticGlobals;
    // -> void * RwEngineInstance;
    // -> static unsigned int engineInstancesOpened;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ED746
// total size: 0x50
struct RwSubSystemInfo {
    // Members
    char name[80]; // offset 0x0, size 0x50
};
// Range: 0x80442DE4 -> 0x80442FC4
int _rwDeviceSystemRequest(struct RwDevice * device /* r27 */, int requestID /* r30 */, void * pOut /* r29 */, void * pInOut /* r1+0x8 */, int numIn /* r28 */) {
    // Local variables
    int result; // r31
    struct RwSubSystemInfo * subSystemInfo; // r26
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[23];
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804ED75D
// Range: 0x80442FC4 -> 0x80442FE4
unsigned int _rwGetNumEngineInstances() {
    // References
    // -> static unsigned int engineInstancesOpened;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804ED776
// Range: 0x80442FE4 -> 0x80443008
unsigned int RwEngineGetVersion() {
    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ED789
// Range: 0x80443008 -> 0x804430D4
int RwEngineRegisterPlugin(int size /* r29 */, unsigned int pluginID /* r1+0x8 */, void * (* initCB)(void *, int, int) /* r1+0xC */, void * (* termCB)(void *, int, int) /* r1+0x10 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry engineTKList;
    // -> static char __dbFunctionName[23];
    // -> static unsigned int engineInstancesOpened;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804ED7A0
// Range: 0x804430D4 -> 0x8044312C
int RwEngineGetPluginOffset(unsigned int pluginID /* r1+0x8 */) {
    // Local variables
    int offset; // r31

    // References
    // -> static struct RwPluginRegistry engineTKList;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804ED7B8
enum RwVideoModeFlag {
    rwVIDEOMODEEXCLUSIVE = 1,
    rwVIDEOMODEINTERLACE = 2,
    rwVIDEOMODEFFINTERLACE = 4,
    rwVIDEOMODE_PS2_FSAASHRINKBLIT = 256,
    rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 512,
    rwVIDEOMODE_XBOX_WIDESCREEN = 256,
    rwVIDEOMODE_XBOX_PROGRESSIVE = 512,
    rwVIDEOMODE_XBOX_FIELD = 1024,
    rwVIDEOMODE_XBOX_10X11PIXELASPECT = 2048,
    rwVIDEOMODEFLAGFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
struct RwVideoMode {
    // Members
    int width; // offset 0x0, size 0x4
    int height; // offset 0x4, size 0x4
    int depth; // offset 0x8, size 0x4
    enum RwVideoModeFlag flags; // offset 0xC, size 0x4
    int refRate; // offset 0x10, size 0x4
    int format; // offset 0x14, size 0x4
};
// Range: 0x8044312C -> 0x8044320C
struct RwVideoMode * RwEngineGetVideoModeInfo(struct RwVideoMode * modeinfo /* r31 */, int modeIndex /* r1+0x8 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804ED7D1
// Range: 0x8044320C -> 0x804432B4
int RwEngineGetCurrentVideoMode() {
    // Local variables
    int curMode; // r1+0x8

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804ED7ED
// Range: 0x804432B4 -> 0x8044338C
int RwEngineStop() {
    // Local variables
    int result; // r30
    struct RwDevice * const device; // r29

    // References
    // -> void * RwEngineInstance;
    // -> static struct RwPluginRegistry engineTKList;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ED7FA
// Range: 0x8044338C -> 0x80443494
int RwEngineStart() {
    // Local variables
    struct RwDevice * const device; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static struct RwPluginRegistry engineTKList;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ED808
// Range: 0x80443494 -> 0x80443598
int RwEngineClose() {
    // Local variables
    int result; // r30
    struct RwDevice * target; // r29
    void * instance; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static unsigned int engineInstancesOpened;
    // -> static struct RwGlobals staticGlobals;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804ED816
// Range: 0x80443598 -> 0x804437B0
int RwEngineOpen(struct RwEngineOpenParams * initParams /* r29 */) {
    // Local variables
    int result; // r31
    struct RwDevice * const device; // r30
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[13];
    // -> void * RwEngineInstance;
    // -> static struct RwGlobals staticGlobals;
}

// Range: 0x804437B0 -> 0x80443804
int RwEngineTerm() {
    // Local variables
    int result; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static unsigned int engineInstancesOpened;
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804ED823
// Range: 0x80443804 -> 0x80443968
int RwEngineInit(const struct RwMemoryFunctions * memFuncs /* r1+0x8 */, unsigned int openFlags /* r1+0xC */, unsigned int resArenaSize /* r1+0x10 */) {
    // Local variables
    int result; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[13];
    // -> static struct RwGlobals staticGlobals;
}


