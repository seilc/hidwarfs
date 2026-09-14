/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\userdata\rpusrdat.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803FFCD0 -> 0x80401A70
*/
static int userDataGeometryOffset; // size: 0x4, address: 0x80D6C220
static int userDataGeometryStreamOffset; // size: 0x4, address: 0x80D6C224
static int userDataWorldSectorOffset; // size: 0x4, address: 0x80D6C228
static int userDataWorldSectorStreamOffset; // size: 0x4, address: 0x80D6C22C
static int userDataFrameOffset; // size: 0x4, address: 0x80D6C230
static int userDataFrameStreamOffset; // size: 0x4, address: 0x80D6C234
static int userDataCameraOffset; // size: 0x4, address: 0x80D6C238
static int userDataCameraStreamOffset; // size: 0x4, address: 0x80D6C23C
static int userDataLightOffset; // size: 0x4, address: 0x80D6C240
static int userDataLightStreamOffset; // size: 0x4, address: 0x80D6C244
static int userDataMaterialOffset; // size: 0x4, address: 0x80D6C248
static int userDataMaterialStreamOffset; // size: 0x4, address: 0x80D6C24C
static int userDataTextureOffset; // size: 0x4, address: 0x80D6C250
static int userDataTextureStreamOffset; // size: 0x4, address: 0x80D6C254
static char __dbFunctionName[13]; // size: 0xD, address: 0x804E9590
struct RwModuleInfo userDataModule; // size: 0x8, address: 0x80D6C258
// Range: 0x803FFCD0 -> 0x803FFD50
static void * UserDataOpen(void * instance /* r31 */) {
    // References
    // -> struct RwModuleInfo userDataModule;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804E959D
// Range: 0x803FFD50 -> 0x803FFDD0
static void * UserDataClose(void * instance /* r31 */) {
    // References
    // -> struct RwModuleInfo userDataModule;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E95AB
// total size: 0x10
struct RpUserDataArray {
    // Members
    char * name; // offset 0x0, size 0x4
    enum RpUserDataFormat format; // offset 0x4, size 0x4
    int numElements; // offset 0x8, size 0x4
    void * data; // offset 0xC, size 0x4
};
// Range: 0x803FFDD0 -> 0x803FFEB8
static void UserDataDestruct(struct RpUserDataArray * userData /* r31 */) {
    // Local variables
    int i; // r30
    char * * charData; // r29

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804E95BC
// Range: 0x803FFEB8 -> 0x80400108
static void UserDataCopy(struct RpUserDataArray * dstUserData /* r31 */, struct RpUserDataArray * srcUserData /* r30 */) {
    // Local variables
    int dataSize; // r26
    int i; // r29
    char * * srcCharData; // r27
    char * * dstCharData; // r28

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E95C9
// Range: 0x80400108 -> 0x80400470
static struct RwStream * UserDataStreamRead(struct RpUserDataArray * userData /* r31 */, struct RwStream * stream /* r29 */) {
    // Local variables
    int i; // r28
    int length; // r1+0x8
    int * intData; // r27
    float * realData; // r26
    char * * charData; // r30

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E95DC
// Range: 0x80400470 -> 0x804006AC
static struct RwStream * UserDataStreamWrite(struct RpUserDataArray * userData /* r31 */, struct RwStream * stream /* r30 */) {
    // Local variables
    int i; // r29
    int length; // r1+0x8
    int * intData; // r27
    float * realData; // r26
    char * * charData; // r28

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E95F0
// Range: 0x804006AC -> 0x804007CC
static int UserDataGetSize(struct RpUserDataArray * userData /* r30 */) {
    // Local variables
    int i; // r29
    int length; // r27
    int size; // r31
    char * * charData; // r28

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E9600
// total size: 0x8
struct RpUserDataList {
    // Members
    int numElements; // offset 0x0, size 0x4
    struct RpUserDataArray * userData; // offset 0x4, size 0x4
};
// Range: 0x804007CC -> 0x804007F8
static void UserDataListConstruct(struct RpUserDataList * userDataList /* r3 */) {
    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E9616
// Range: 0x804007F8 -> 0x80400898
static void UserDataListDestruct(struct RpUserDataList * userDataList /* r31 */) {
    // Local variables
    int i; // r30

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E962B
// Range: 0x80400898 -> 0x80400970
static void UserDataListCopy(struct RpUserDataList * dstList /* r31 */, const struct RpUserDataList * srcList /* r29 */) {
    // Local variables
    int i; // r30

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E963C
// Range: 0x80400970 -> 0x80400A64
static struct RwStream * UserDataListStreamRead(struct RpUserDataList * list /* r31 */, struct RwStream * stream /* r29 */) {
    // Local variables
    int i; // r30
    int numElements; // r1+0x8

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E9653
// Range: 0x80400A64 -> 0x80400B88
static struct RwStream * UserDataListStreamWrite(const struct RpUserDataList * list /* r31 */, struct RwStream * stream /* r29 */) {
    // Local variables
    int i; // r30
    unsigned int numElementsToStream; // r1+0x8

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E966B
// Range: 0x80400B88 -> 0x80400C3C
static int UserDataListGetSize(const struct RpUserDataList * list /* r31 */) {
    // Local variables
    int i; // r29
    int size; // r30

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E967F
// Range: 0x80400C3C -> 0x80400D84
static int UserDataListGetNumElements(const struct RpUserDataList * list /* r31 */) {
    // Local variables
    int numElements; // r28
    int i; // r30

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E969A
enum RpUserDataFormat {
    rpNAUSERDATAFORMAT = 0,
    rpINTUSERDATA = 1,
    rpREALUSERDATA = 2,
    rpSTRINGUSERDATA = 3,
    rpUSERDATAFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x80400D84 -> 0x804010E0
static int UserDataListAddElement(struct RpUserDataList * list /* r31 */, char * name /* r23 */, enum RpUserDataFormat format /* r24 */, int numElements /* r25 */) {
    // Local variables
    struct RpUserDataArray * userData; // r30
    int index; // r27
    int i; // r28
    void * newUserData; // r26

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E96B1
// Range: 0x804010E0 -> 0x80401168
static void * UserDataObjectConstruct(void * object /* r31 */, int offset /* r1+0x8 */) {
    // Local variables
    struct RpUserDataList * userDataList; // r30

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E96C9
// Range: 0x80401168 -> 0x804011F0
static void * UserDataObjectDestruct(void * object /* r31 */, int offset /* r1+0x8 */) {
    // Local variables
    struct RpUserDataList * userDataList; // r30

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E96E0
// Range: 0x804011F0 -> 0x804012A8
static void * UserDataObjectCopy(void * destinationObject /* r30 */, void * sourceObject /* r26 */, int offset /* r27 */) {
    // Local variables
    struct RpUserDataList * dstUserDataList; // r29
    const struct RpUserDataList * srcUserDataList; // r28

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E96F3
// Range: 0x804012A8 -> 0x80401360
static struct RwStream * UserDataObjectStreamRead(struct RwStream * stream /* r31 */, void * object /* r29 */, int offset /* r1+0x8 */) {
    // Local variables
    struct RpUserDataList * userDataList; // r30

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E970C
// Range: 0x80401360 -> 0x80401418
static struct RwStream * UserDataObjectStreamWrite(struct RwStream * stream /* r31 */, void * object /* r29 */, int offset /* r1+0x8 */) {
    // Local variables
    const struct RpUserDataList * userDataList; // r30

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E9726
// Range: 0x80401418 -> 0x804014A8
static int UserDataObjectGetSize(void * object /* r29 */, int offsetInObject /* r1+0x8 */) {
    // Local variables
    const struct RpUserDataList * userDataList; // r30
    int size; // r31

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E973C
// Range: 0x804014A8 -> 0x8040154C
int RpGeometryAddUserDataArray(struct RpGeometry * geometry /* r29 */, char * name /* r1+0x8 */, enum RpUserDataFormat format /* r1+0xC */, int numElements /* r1+0x10 */) {
    // Local variables
    int index; // r31
    struct RpUserDataList * userDataList; // r30

    // References
    // -> static int userDataGeometryOffset;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804E9757
// Range: 0x8040154C -> 0x804015D8
int RpGeometryGetUserDataArrayCount(const struct RpGeometry * geometry /* r29 */) {
    // Local variables
    const struct RpUserDataList * userDataList; // r31
    int numElements; // r30

    // References
    // -> static int userDataGeometryOffset;
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E9777
// Range: 0x804015D8 -> 0x80401678
struct RpUserDataArray * RpGeometryGetUserDataArray(const struct RpGeometry * geometry /* r29 */, int data /* r30 */) {
    // Local variables
    const struct RpUserDataList * userDataList; // r31

    // References
    // -> static int userDataGeometryOffset;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E9792
// Range: 0x80401678 -> 0x804016D4
int RpUserDataGetFormatSize(enum RpUserDataFormat format /* r3 */) {
    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E97AA
// Range: 0x804016D4 -> 0x80401A70
int RpUserDataPluginAttach() {
    // Local variables
    int offset; // r31

    // References
    // -> static int userDataTextureStreamOffset;
    // -> static int userDataTextureOffset;
    // -> static int userDataMaterialStreamOffset;
    // -> static int userDataMaterialOffset;
    // -> static int userDataLightStreamOffset;
    // -> static int userDataLightOffset;
    // -> static int userDataCameraStreamOffset;
    // -> static int userDataCameraOffset;
    // -> static int userDataFrameStreamOffset;
    // -> static int userDataFrameOffset;
    // -> static int userDataGeometryStreamOffset;
    // -> static int userDataWorldSectorStreamOffset;
    // -> static int userDataGeometryOffset;
    // -> static int userDataWorldSectorOffset;
    // -> static char __dbFunctionName[23];
}


