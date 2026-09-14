/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\gclights.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80422234 -> 0x80422EFC
*/
static char __dbFunctionName[37]; // size: 0x25, address: 0x804EB818
int _RwDlLightExtOffset; // size: 0x4, address: 0x80D6C2F0
// total size: 0x40
struct _GXLightObj {
    // Members
    unsigned long dummy[16]; // offset 0x0, size 0x40
};
static struct _GXLightObj _RwGCLightObjs[8]; // size: 0x200, address: 0x80D5C670
// total size: 0x1C
struct _rwDlLightExt {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float a0; // offset 0x4, size 0x4
    float a1; // offset 0x8, size 0x4
    float a2; // offset 0xC, size 0x4
    float k0; // offset 0x10, size 0x4
    float k1; // offset 0x14, size 0x4
    float k2; // offset 0x18, size 0x4
};
// Range: 0x80422234 -> 0x8042246C
static void _rpGCHWLightingApplyDirectionalLight(const struct RpLight * light /* r28 */, int lightNum /* r29 */) {
    // Local variables
    struct RwV3d at; // r1+0x10
    struct _GXColor color; // r1+0xC
    const struct RwRGBAReal * lightColor; // r30
    const struct _rwDlLightExt * lightExt; // r31

    // References
    // -> static struct _GXLightObj _RwGCLightObjs[8];
    // -> static char __dbFunctionName[37];
    // -> int _RwDlLightExtOffset;
    // -> struct RwMatrixTag _RwDlInvCamLTM;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EB83D
enum RpLightFlag {
    rpLIGHTLIGHTATOMICS = 1,
    rpLIGHTLIGHTWORLD = 2,
    rpLIGHTFLAGFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x8042246C -> 0x804225B4
void _rwGCLightsGlobalEnable(enum RpLightFlag lightFlags /* r1+0x8 */, struct RxGameCubePipeData * pipeData /* r31 */) {
    // Local variables
    struct RpWorld * world; // r27
    struct RwLLLink * cur; // r29
    struct RwLLLink * end; // r26
    const struct RwRGBAReal * color; // r30
    struct RpLight * light; // r28

    // References
    // -> static char __dbFunctionName[24];
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EB855
// Range: 0x804225B4 -> 0x80422AA0
void _rwGCLightsLocalEnable(const struct RpLight * light /* r29 */, struct RxGameCubePipeData * pipeData /* r30 */) {
    // Local variables
    struct RwV3d at; // r1+0x1C
    struct RwV3d pos; // r1+0x10
    struct _GXColor color; // r1+0xC
    struct RwMatrixTag * matrix; // r26
    const struct RwRGBAReal * lightColor; // r27
    const struct _rwDlLightExt * lightExt; // r31

    // References
    // -> static struct _GXLightObj _RwGCLightObjs[8];
    // -> struct RwMatrixTag _RwDlInvCamLTM;
    // -> static char __dbFunctionName[23];
    // -> int _RwDlLightExtOffset;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EB86C
// Range: 0x80422AA0 -> 0x80422BB0
static void * rwDlLightExtCnst(void * object /* r29 */, int offsetInObject /* r1+0x8 */, int sizeInObject /* r1+0xC */) {
    // Local variables
    struct _rwDlLightExt * lightExt; // r30

    // References
    // -> static char __dbFunctionName[17];
    // -> int _RwDlLightExtOffset;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EB87D
// Range: 0x80422BB0 -> 0x80422C88
static void * rwDlLightExtDest(void * object /* r30 */, int offsetInObject /* r1+0x8 */, int sizeInObject /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> int _RwDlLightExtOffset;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EB88E
// Range: 0x80422C88 -> 0x80422D90
static void * rwDlLightExtCopy(void * dstObject /* r30 */, void * srcObject /* r1+0x8 */, int offsetInObject /* r1+0xC */, int sizeInObject /* r1+0x10 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> int _RwDlLightExtOffset;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EB89F
// Range: 0x80422D90 -> 0x80422E04
int _rpDlLightPluginAttach() {
    // References
    // -> int _RwDlLightExtOffset;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804EB8B6
// Range: 0x80422E04 -> 0x80422EFC
void RpGameCubeLightSetAttenuation(struct RpLight * light /* r29 */, float a0 /* r1+0x8 */, float a1 /* r1+0xC */, float a2 /* r1+0x10 */, float k0 /* r1+0x14 */, float k1 /* r1+0x18 */, float k2 /* r1+0x1C */) {
    // Local variables
    struct _rwDlLightExt * lightExt; // r31

    // References
    // -> static char __dbFunctionName[30];
    // -> int _RwDlLightExtOffset;
}


